const char *__fastcall cfg_get_cc_parm(unsigned __int8 a1, const char *a2)
{
  __int64 current_config; // rbx
  const char *compiler_abbr; // rax

  current_config = get_current_config();
  compiler_abbr = (const char *)get_compiler_abbr(a1);
  return sub_5E3C10(current_config + 200, compiler_abbr, a2);
}

