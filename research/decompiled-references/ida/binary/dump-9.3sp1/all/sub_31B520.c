void __fastcall __noreturn sub_31B520(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4EF950++ )
  {
    v3 = sub_1AE8E0(*(_QWORD *)(a1 + 64));
    sub_6D0A0((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_383060(a2);
  BUG();
}
