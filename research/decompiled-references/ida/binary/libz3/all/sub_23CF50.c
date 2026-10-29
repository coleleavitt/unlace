__int64 sub_23CF50()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "rewriter");
  sub_185D2A0(v0, "max_steps", 0, "maximum number of steps", "4294967295", "rewriter");
  sub_185D2A0(v0, "push_ite_arith", 1, "push if-then-else over arithmetic terms.", "false", "rewriter");
  sub_185D2A0(v0, "push_ite_bv", 1, "push if-then-else over bit-vector terms.", "false", "rewriter");
  sub_185D2A0(v0, "pull_cheap_ite", 1, "pull if-then-else terms when cheap.", "false", "rewriter");
  sub_185D2A0(
    v0,
    "bv_ineq_consistency_test_max",
    0,
    "max size of conjunctions on which to perform consistency test based on inequalities on bitvectors.",
    "0",
    "rewriter");
  sub_185D2A0(v0, "cache_all", 1, "cache all intermediate results.", "false", "rewriter");
  sub_185D2A0(v0, "enable_der", 1, "enable destructive equality resolution to quantifiers.", "true", "rewriter");
  sub_185D2A0(v0, "rewrite_patterns", 1, "rewrite patterns.", "false", "rewriter");
  sub_185D2A0(
    v0,
    "ignore_patterns_on_ground_qbody",
    1,
    "ignores patterns on quantifiers that don't mention their bound variables.",
    "true",
    "rewriter");
  return v0;
}

