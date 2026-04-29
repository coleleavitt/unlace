void __fastcall __noreturn sub_31F500(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4DC894++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1AB150(a2);
    sub_69660((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo(a2 + 48);
      sub_69660((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_31F450(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_37EEE0(a1);
}
