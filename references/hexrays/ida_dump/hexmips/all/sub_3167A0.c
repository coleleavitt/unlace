void __fastcall __noreturn sub_3167A0(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4CF8B0++ )
  {
    v3 = sub_1AA5A0(*(_QWORD *)(a1 + 64));
    sub_68EA0((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_37E160(a2);
  BUG();
}
