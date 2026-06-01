__int64 sub_23DFE0()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "max_memory", 0, "maximum amount of memory in megabytes", "4294967295", "nlsat");
  sub_185D2A0(v0, "simple_check", 1, "precheck polynomials using variables sign", "false", "nlsat");
  sub_185D2A0(
    v0,
    "variable_ordering_strategy",
    0,
    "Variable Ordering Strategy, 0 for none, 1 for BROWN, 2 for TRIANGULAR, 3 for ONLYPOLY",
    "0",
    "nlsat");
  sub_185D2A0(v0, "cell_sample", 1, "cell sample projection", "true", "nlsat");
  sub_185D2A0(v0, "lazy", 0, "how lazy the solver is.", "0", "nlsat");
  sub_185D2A0(v0, "reorder", 1, "reorder variables.", "true", "nlsat");
  sub_185D2A0(v0, "log_lemmas", 1, "display lemmas as self-contained SMT formulas", "false", "nlsat");
  sub_185D2A0(v0, "dump_mathematica", 1, "display lemmas as matematica", "false", "nlsat");
  sub_185D2A0(v0, "check_lemmas", 1, "check lemmas on the fly using an independent nlsat solver", "false", "nlsat");
  sub_185D2A0(
    v0,
    "simplify_conflicts",
    1,
    "simplify conflicts using equalities before resolving them in nlsat solver.",
    "true",
    "nlsat");
  sub_185D2A0(v0, "minimize_conflicts", 1, "minimize conflicts", "false", "nlsat");
  sub_185D2A0(v0, "randomize", 1, "randomize selection of a witness in nlsat.", "true", "nlsat");
  sub_185D2A0(v0, "max_conflicts", 0, "maximum number of conflicts.", "4294967295", "nlsat");
  sub_185D2A0(v0, "shuffle_vars", 1, "use a random variable order.", "false", "nlsat");
  sub_185D2A0(
    v0,
    "inline_vars",
    1,
    "inline variables that can be isolated from equations (not supported in incremental mode)",
    "false",
    "nlsat");
  sub_185D2A0(v0, "seed", 0, "random seed.", "0", "nlsat");
  sub_185D2A0(v0, "factor", 1, "factor polynomials produced during conflict resolution.", "true", "nlsat");
  sub_185D2A0(
    v0,
    "known_sat_assignment_file_name",
    5,
    "the file name of a known solution: used for debugging only",
    "",
    "nlsat");
  return v0;
}

