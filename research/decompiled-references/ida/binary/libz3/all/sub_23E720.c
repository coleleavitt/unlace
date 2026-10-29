__int64 sub_23E720()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "dio", 1, "use Diophantine equalities", "true", "lp");
  sub_185D2A0(v0, "dio_branching_period", 0, "Period of calling branching on undef in Diophantine handler", "100", "lp");
  sub_185D2A0(
    v0,
    "dio_cuts_enable_gomory",
    1,
    "enable Gomory cuts together with Diophantine cuts, only relevant when dioph_eq is true",
    "false",
    "lp");
  sub_185D2A0(
    v0,
    "dio_cuts_enable_hnf",
    1,
    "enable hnf cuts together with Diophantine cuts, only relevant when dioph_eq is true",
    "true",
    "lp");
  sub_185D2A0(
    v0,
    "dio_ignore_big_nums",
    1,
    "Ignore the terms with big numbers in the Diophantine handler, only relevant when dioph_eq is true",
    "true",
    "lp");
  sub_185D2A0(v0, "dio_calls_period", 0, "Period of calling the Diophantine handler in the final_check()", "1", "lp");
  sub_185D2A0(
    v0,
    "dio_run_gcd",
    1,
    "Run the GCD heuristic if dio is on, if dio is disabled the option is not used",
    "false",
    "lp");
  return v0;
}

