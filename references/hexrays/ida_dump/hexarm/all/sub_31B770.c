void __fastcall __noreturn sub_31B770(__int64 a1, unsigned int a2, double a3)
{
  if ( !dword_4EB8B0++ )
  {
    sub_1B5580(*(int **)(a1 + 32));
    sub_6CAE0((__int64)"INSN: %a: %s\n", a3, *(const char **)(*(_QWORD *)(a1 + 32) + 24LL));
  }
  if ( !under_debugger )
    sub_3835A0(a2);
  BUG();
}
