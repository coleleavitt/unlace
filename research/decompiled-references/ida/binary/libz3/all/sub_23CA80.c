__int64 sub_23CA80()
{
  __int64 v0; // rbx

  v0 = sub_186B270(8u);
  sub_1857380(v0);
  sub_185D2A0(v0, "ignore_user_patterns", 1, "ignore patterns provided by the user", "false", "parser");
  sub_185D2A0(v0, "ignore_bad_patterns", 1, "ignore malformed patterns", "true", "parser");
  sub_185D2A0(v0, "error_for_visual_studio", 1, "display error messages in Visual Studio format", "false", "parser");
  return v0;
}

