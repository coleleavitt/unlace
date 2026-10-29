__int64 sub_23C870()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(
    v0,
    "solver2_timeout",
    0,
    "fallback to solver 1 after timeout even when in incremental model",
    "4294967295",
    "combined_solver");
  sub_185D2A0(v0, "ignore_solver1", 1, "if true, solver 2 is always used", "false", "combined_solver");
  sub_185D2A0(
    v0,
    "solver2_unknown",
    0,
    "what should be done when solver 2 returns unknown: 0 - just return unknown, 1 - execute solver 1 if quantifier free "
    "problem, 2 - execute solver 1",
    "1",
    "combined_solver");
  return v0;
}

