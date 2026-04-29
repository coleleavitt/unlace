void __fastcall __noreturn sub_31E580(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4C1B74++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1AA590(a2);
    sub_68D20((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo(a2 + 48);
      sub_68D20((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_31E4D0(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_37DDE0(a1);
}
