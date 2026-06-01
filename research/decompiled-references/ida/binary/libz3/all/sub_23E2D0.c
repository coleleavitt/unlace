__int64 sub_23E2D0()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "partial", 1, "enable/disable partial function interpretations", "false", "model");
  sub_185D2A0(v0, "v1", 1, "use Z3 version 1.x pretty printer", "false", "model");
  sub_185D2A0(v0, "v2", 1, "use Z3 version 2.x (x <= 16) pretty printer", "false", "model");
  sub_185D2A0(
    v0,
    "compact",
    1,
    "try to compact function graph (i.e., function interpretations that are lookup tables)",
    "true",
    "model");
  sub_185D2A0(v0, "inline_def", 1, "inline local function definitions ignoring possible expansion", "false", "model");
  sub_185D2A0(v0, "user_functions", 1, "include user defined functions in model", "true", "model");
  sub_185D2A0(v0, "completion", 1, "enable/disable model completion", "false", "model");
  return v0;
}

