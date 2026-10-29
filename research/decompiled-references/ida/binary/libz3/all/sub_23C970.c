__int64 sub_23C970()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "asymm_branch", 1, "asymmetric branching", "true", "sat");
  sub_185D2A0(
    v0,
    "asymm_branch.rounds",
    0,
    "maximal number of rounds to run asymmetric branch simplifications if progress is made",
    "2",
    "sat");
  sub_185D2A0(
    v0,
    "asymm_branch.delay",
    0,
    "number of simplification rounds to wait until invoking asymmetric branch simplification",
    "1",
    "sat");
  sub_185D2A0(
    v0,
    "asymm_branch.sampled",
    1,
    "use sampling based asymmetric branching based on binary implication graph",
    "true",
    "sat");
  sub_185D2A0(
    v0,
    "asymm_branch.limit",
    0,
    "approx. maximum number of literals visited during asymmetric branching",
    "100000000",
    "sat");
  sub_185D2A0(v0, "asymm_branch.all", 1, "asymmetric branching on all literals per clause", "false", "sat");
  return v0;
}

