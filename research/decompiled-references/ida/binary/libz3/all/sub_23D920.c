__int64 sub_23D920()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "algebraic_number_evaluator",
    1,
    "simplify/evaluate expressions containing (algebraic) irrational numbers.",
    "true",
    "rewriter");
  sub_185D2A0(
    v0,
    "mul_to_power",
    1,
    "collpase (* t ... t) into (^ t k), it is ignored if expand_power is true.",
    "false",
    "rewriter");
  sub_185D2A0(v0, "expand_power", 1, "expand (^ t k) into (* t ... t) if  1 < k <= max_degree.", "false", "rewriter");
  sub_185D2A0(v0, "expand_tan", 1, "replace (tan x) with (/ (sin x) (cos x)).", "false", "rewriter");
  sub_185D2A0(
    v0,
    "max_degree",
    0,
    "max degree of algebraic numbers (and power operators) processed by simplifier.",
    "64",
    "rewriter");
  sub_185D2A0(v0, "sort_sums", 1, "sort the arguments of + application.", "false", "rewriter");
  sub_185D2A0(v0, "gcd_rounding", 1, "use gcd rounding on integer arithmetic atoms.", "false", "rewriter");
  sub_185D2A0(
    v0,
    "arith_lhs",
    1,
    "all monomials are moved to the left-hand-side, and the right-hand-side is just a constant.",
    "false",
    "rewriter");
  sub_185D2A0(
    v0,
    "arith_ineq_lhs",
    1,
    "rewrite inequalities so that right-hand-side is a constant.",
    "false",
    "rewriter");
  sub_185D2A0(
    v0,
    "elim_to_real",
    1,
    "eliminate to_real from arithmetic predicates that contain only integers.",
    "false",
    "rewriter");
  sub_185D2A0(v0, "push_to_real", 1, "distribute to_real over * and +.", "true", "rewriter");
  sub_185D2A0(v0, "eq2ineq", 1, "expand equalities into two inequalities", "false", "rewriter");
  sub_185D2A0(v0, "elim_rem", 1, "replace (rem x y) with (ite (>= y 0) (mod x y) (- (mod x y))).", "false", "rewriter");
  return v0;
}

