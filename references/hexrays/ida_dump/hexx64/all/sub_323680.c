void __fastcall __noreturn sub_323680(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4EF954++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1AEB90(a2);
    sub_6D0A0((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo(a2 + 48);
      sub_6D0A0((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_3235D0(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_383060(a1);
}
