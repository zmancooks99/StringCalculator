// cuber_test_suites.cpp
// Riley Maranville, Zachary Mason
// 2019-12-2
//
// For CS 311 Fall 2019
// Tests for class Cuber: test suites
// For Project 8, Exercise B
// Uses the "Catch" unit-testing framework, version 2
// Requires cuber_test_main.cpp, catch.hpp, cuber.h

// Includes for code to be tested
#include "cuber.h"         // For class Cuber
#include "cuber.h"         // Double inclusion test

#define CATCH_CONFIG_FAST_COMPILE
                           // Disable some features for faster compile
#include "catch.hpp"       // For the "Catch" unit-testing framework

// Additional includes for this test program


// *********************************************************************
// Test Cases
// *********************************************************************


TEST_CASE("const and non-const Cuber")
{
	SECTION("const Cuber initalization")
	{
		const Cuber test;
		INFO("const Cuber of size 1 returns correctly");
		REQUIRE( test(1) != NULL );
	}
	SECTION("non-const Cuber initalization")
	{
		Cuber test;
		INFO("Cuber of size 1 returns correctly");
		REQUIRE(test(1) != NULL );
	}
}
TEST_CASE("wide range valued Cuber")
{
	SECTION("Inputting 2")
	{
		Cuber test;
		INFO("Cuber of size 2 returns 8");
		REQUIRE(test(2) == 8);
	}
	SECTION("Inputting 10")
	{
		Cuber test;
		INFO("Cuber of size 10 returns 1000");
		REQUIRE(test(10) == 1000);
	}
	SECTION("Inputting 100")
	{
		Cuber test;
		INFO("Cuber of size 100 returns 1000000");
		REQUIRE(test(100) == 1000000);
	}
	SECTION("Inputting -10")
	{
		Cuber test;
		INFO("Cuber of size -10 returns -1000");
		REQUIRE(test(-10) == -1000);
	}
	SECTION("Inputting 2.0801")
	{
		Cuber test;
		INFO("Cuber of size 2.0801 returns 9");
		REQUIRE( int(test(2.0801)) == 9);
	}
	SECTION("Input 0.90")
	{
		Cuber test;
		INFO("Cuber of size 0.10 returns ~0");
		REQUIRE( int(test(0.10)) == 0);
	}
	SECTION("Input Long 100000")
	{
		long _num = 100000;
		Cuber test;
		INFO("Cuber of size 100000 (long) returns 1,000,000,000,000,000");
		REQUIRE( test(_num) == long(_num*_num*_num));
	}
}
TEST_CASE("positive and negative Cuber")
{
	SECTION("Inputting 5")
	{
		Cuber test;
		INFO("Cuber of size 5 returns 125");
		REQUIRE(test(5) == 125);
	}
	SECTION("Inputting -5")
	{
		Cuber test;
		INFO("Cuber of size -5 returns -125");
		REQUIRE(test(-5) == -125);
	}
	
}
TEST_CASE("different value type arguments Cuber")
{
	SECTION("Inputting Integer")
	{
		Cuber test;
		INFO("Cuber with an integer runs correctly");
		REQUIRE(test(2) != NULL);
	}
	SECTION("Inputting floating-point")
	{
		Cuber test;
		INFO("Cuber with an floating-point runs correctly");
		REQUIRE(test(2.5) != float(NULL));
	}
	SECTION("Inputting Char")
	{
		Cuber test;
		char _A = 'a';
		INFO("Cuber with an char runs correctly");
		REQUIRE(test(_A) != char(NULL));
	}
}
TEST_CASE("Special Cases 0,1,-1 of Cuber")
{
	SECTION("Inputting 0")
	{
		Cuber test;
		INFO("Cuber of size 0 returns 0");
		REQUIRE(test(0) == 0);
	}
	SECTION("Inputting 1")
	{
		Cuber test;
		INFO("Cuber of size 1 returns 1");
		REQUIRE(test(1) == 1);
	}
	SECTION("Inputting -1")
	{
		Cuber test;
		INFO("Cuber of size -1 returns -1");
		REQUIRE(test(-1) == -1);
	}
}

