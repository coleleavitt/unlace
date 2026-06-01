__int64 sub_23E610()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "zero_accuracy",
    0,
    "one of the most time-consuming operations in the real algebraic number module is determining the sign of a polynomia"
    "l evaluated at a sample point with non-rational algebraic number values. Let k be the value of this option. If k is "
    "0, Z3 uses precise computation. Otherwise, the result of a polynomial evaluation is considered to be 0 if Z3 can sho"
    "w it is inside the interval (-1/2^k, 1/2^k)",
    "0",
    "algebraic");
  sub_185D2A0(
    v0,
    "min_mag",
    0,
    "Z3 represents algebraic numbers using a (square-free) polynomial p and an isolating interval (which contains one and"
    " only one root of p). This interval may be refined during the computations. This parameter specifies whether to cach"
    "e the value of a refined interval or not. It says the minimal size of an interval for caching purposes is 1/2^16",
    "16",
    "algebraic");
  sub_185D2A0(
    v0,
    "factor",
    1,
    "use polynomial factorization to simplify polynomials representing algebraic numbers",
    "true",
    "algebraic");
  sub_185D2A0(
    v0,
    "factor_max_prime",
    0,
    "parameter for the polynomial factorization procedure in the algebraic number module. Z3 polynomial factorization is "
    "composed of three steps: factorization in GF(p), lifting and search. This parameter limits the maximum prime number "
    "p to be used in the first step",
    "31",
    "algebraic");
  sub_185D2A0(
    v0,
    "factor_num_primes",
    0,
    "parameter for the polynomial factorization procedure in the algebraic number module. Z3 polynomial factorization is "
    "composed of three steps: factorization in GF(p), lifting and search. The search space may be reduced by factoring th"
    "e polynomial in different GF(p)'s. This parameter specify the maximum number of finite factorizations to be consider"
    "ed, before lifting and searching",
    "1",
    "algebraic");
  sub_185D2A0(
    v0,
    "factor_search_size",
    0,
    "parameter for the polynomial factorization procedure in the algebraic number module. Z3 polynomial factorization is "
    "composed of three steps: factorization in GF(p), lifting and search. This parameter can be used to limit the search space",
    "5000",
    "algebraic");
  return v0;
}

