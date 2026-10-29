__int64 sub_23CCF0()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "smtlib2_log", 8, "file to save solver interaction", "", "solver");
  sub_185D2A0(v0, "cancel_backup_file", 8, "file to save partial search state if search is canceled", "", "solver");
  sub_185D2A0(v0, "timeout", 0, "timeout on the solver object; overwrites a global timeout", "4294967295", "solver");
  sub_185D2A0(v0, "lemmas2console", 1, "print lemmas during search", "false", "solver");
  sub_185D2A0(v0, "instantiations2console", 1, "print quantifier instantiations to the console", "false", "solver");
  sub_185D2A0(v0, "axioms2files", 1, "print negated theory axioms to separate files during search", "false", "solver");
  sub_185D2A0(
    v0,
    "slice",
    1,
    "use slice solver that filters assertions to use symbols occuring in @query formulas",
    "false",
    "solver");
  sub_185D2A0(v0, "proof.log", 8, "log clause proof trail into a file", "", "solver");
  sub_185D2A0(v0, "proof.check", 1, "check proof logs", "true", "solver");
  sub_185D2A0(v0, "proof.check_rup", 1, "check proof RUP inference in proof logs", "true", "solver");
  sub_185D2A0(
    v0,
    "proof.save",
    1,
    "save proof log into a proof object that can be extracted using (get-proof)",
    "false",
    "solver");
  sub_185D2A0(
    v0,
    "proof.trim",
    1,
    "trim and save proof into a proof object that an be extracted using (get-proof)",
    "false",
    "solver");
  return v0;
}

