void __fastcall __noreturn sub_316630(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4CF8B0++ )
  {
    sub_1B1800(*(int **)(a1 + 32));
    sub_68EA0((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_37E160(a2);
  BUG();
}
