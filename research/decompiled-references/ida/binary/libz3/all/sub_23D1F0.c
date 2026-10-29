__int64 sub_23D1F0()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "max_multi_patterns",
    0,
    "when patterns are not provided, the prover uses a heuristic to infer them, this option sets the threshold on the num"
    "ber of extra multi-patterns that can be created; by default, the prover creates at most one multi-pattern when there"
    " is no unary pattern",
    "0",
    "pi");
  sub_185D2A0(v0, "block_loop_patterns", 1, "block looping patterns during pattern inference", "true", "pi");
  sub_185D2A0(v0, "decompose_patterns", 1, "allow decomposition of patterns into multipatterns", "true", "pi");
  sub_185D2A0(
    v0,
    "arith",
    0,
    "0 - do not infer patterns with arithmetic terms, 1 - use patterns with arithmetic terms if there is no other pattern"
    ", 2 - always use patterns with arithmetic terms",
    "1",
    "pi");
  sub_185D2A0(v0, "use_database", 1, "use pattern database", "false", "pi");
  sub_185D2A0(v0, "enabled", 1, "enable a heuristic to infer patterns, when they are not provided", "true", "pi");
  sub_185D2A0(
    v0,
    "arith_weight",
    0,
    "default weight for quantifiers where the only available pattern has nested arithmetic terms",
    "5",
    "pi");
  sub_185D2A0(
    v0,
    "non_nested_arith_weight",
    0,
    "default weight for quantifiers where the only available pattern has non nested arithmetic terms",
    "10",
    "pi");
  sub_185D2A0(v0, "pull_quantifiers", 1, "pull nested quantifiers, if no pattern was found", "true", "pi");
  sub_185D2A0(v0, "warnings", 1, "enable/disable warning messages in the pattern inference module", "false", "pi");
  return v0;
}

