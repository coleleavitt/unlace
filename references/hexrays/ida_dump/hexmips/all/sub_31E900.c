void __fastcall __noreturn sub_31E900(unsigned int a1, __int64 a2, __int64 a3, double a4)
{
  const char *v6; // rax

  if ( dword_4CF8B4++ )
  {
    if ( under_debugger )
      BUG();
  }
  else
  {
    sub_1AA850(a2);
    sub_68EA0((__int64)"CITEM %a: %s\n", a4, *(const char **)a2);
    if ( *(int *)(a2 + 8) <= 69 )
    {
      v6 = (const char *)dstr_tinfo(a2 + 48);
      sub_68EA0((__int64)"TYPE: %s\n", v6);
    }
    if ( under_debugger )
    {
      sub_31E850(a3, a2, (__int64)"failure");
      BUG();
    }
  }
  sub_37E160(a1);
}
