void __fastcall __noreturn sub_314030(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4BB890++ )
  {
    sub_1AF340(*(int **)(a1 + 32));
    sub_66B20((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_37B760(a2);
  BUG();
}
