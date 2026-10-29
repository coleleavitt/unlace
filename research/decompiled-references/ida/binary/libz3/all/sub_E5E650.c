void __fastcall sub_E5E650(__int64 a1, __int64 a2)
{
  _BYTE v2[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+10h] [rbp-38h]
  _BYTE v4[48]; // [rsp+18h] [rbp-30h] BYREF

  sub_17F9A60(v2, "solver");
  sub_185D2A0(a2, "smtlib2_log", 8, "file to save solver interaction", "", "solver");
  sub_185D2A0(a2, "cancel_backup_file", 8, "file to save partial search state if search is canceled", "", "solver");
  sub_185D2A0(a2, "timeout", 0, "timeout on the solver object; overwrites a global timeout", "4294967295", "solver");
  sub_185D2A0(a2, "lemmas2console", 1, "print lemmas during search", "false", "solver");
  sub_185D2A0(a2, "instantiations2console", 1, "print quantifier instantiations to the console", "false", "solver");
  sub_185D2A0(a2, "axioms2files", 1, "print negated theory axioms to separate files during search", "false", "solver");
  sub_185D2A0(
    a2,
    "slice",
    1,
    "use slice solver that filters assertions to use symbols occuring in @query formulas",
    "false",
    "solver");
  sub_185D2A0(a2, "proof.log", 8, "log clause proof trail into a file", "", "solver");
  sub_185D2A0(a2, "proof.check", 1, "check proof logs", "true", "solver");
  sub_185D2A0(a2, "proof.check_rup", 1, "check proof RUP inference in proof logs", "true", "solver");
  sub_185D2A0(
    a2,
    "proof.save",
    1,
    "save proof log into a proof object that can be extracted using (get-proof)",
    "false",
    "solver");
  sub_185D2A0(
    a2,
    "proof.trim",
    1,
    "trim and save proof into a proof object that an be extracted using (get-proof)",
    "false",
    "solver");
  v3 = a1 + 80;
  sub_17F9A60(v4, "model");
  sub_185D2A0(a2, "partial", 1, "enable/disable partial function interpretations", "false", "model");
  sub_185D2A0(a2, "v1", 1, "use Z3 version 1.x pretty printer", "false", "model");
  sub_185D2A0(a2, "v2", 1, "use Z3 version 2.x (x <= 16) pretty printer", "false", "model");
  sub_185D2A0(
    a2,
    "compact",
    1,
    "try to compact function graph (i.e., function interpretations that are lookup tables)",
    "true",
    "model");
  sub_185D2A0(a2, "inline_def", 1, "inline local function definitions ignoring possible expansion", "false", "model");
  sub_185D2A0(a2, "user_functions", 1, "include user defined functions in model", "true", "model");
  sub_185D2A0(a2, "completion", 1, "enable/disable model completion", "false", "model");
  sub_185EC20(a2);
  sub_185F120(a2);
  sub_185D810(a2);
  sub_185CD70(a2);
  sub_18572D0(v4);
  sub_18572D0(v2);
}

