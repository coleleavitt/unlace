const char *__fastcall cfg_get_cc_parm(char a1, const char *a2)
{
  __int64 current_config; // rbx
  char *compiler_abbr; // rax

  current_config = get_current_config();
  compiler_abbr = get_compiler_abbr(a1);
  return sub_5FFAD0(current_config + 208, compiler_abbr, a2);
}
