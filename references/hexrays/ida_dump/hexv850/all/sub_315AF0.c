void __fastcall __noreturn sub_315AF0(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4C2A70++ )
  {
    sub_1B0E40(*(int **)(a1 + 32));
    sub_68620((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_37CFE0(a2);
  BUG();
}
