void __fastcall __noreturn sub_316420(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4C1B70++ )
  {
    v3 = sub_1AA2E0(*(_QWORD *)(a1 + 64));
    sub_68D20((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_37DDE0(a2);
  BUG();
}
