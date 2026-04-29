void __fastcall __noreturn sub_3141A0(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4BB890++ )
  {
    v3 = sub_1A80E0(*(_QWORD *)(a1 + 64));
    sub_66B20((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_37B760(a2);
  BUG();
}
