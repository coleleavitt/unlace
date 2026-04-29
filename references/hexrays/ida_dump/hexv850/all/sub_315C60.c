void __fastcall __noreturn sub_315C60(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4C2A70++ )
  {
    v3 = sub_1A9BE0(*(_QWORD *)(a1 + 64));
    sub_68620((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_37CFE0(a2);
  BUG();
}
