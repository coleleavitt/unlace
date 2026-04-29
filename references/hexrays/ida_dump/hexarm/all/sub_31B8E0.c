void __fastcall __noreturn sub_31B8E0(__int64 a1, unsigned int a2)
{
  const char *v3; // rax

  if ( !dword_4EB8B0++ )
  {
    v3 = sub_1AE320(*(_QWORD *)(a1 + 64));
    sub_6CAE0((__int64)"LVAR %s\n", v3);
  }
  if ( !under_debugger )
    sub_3835A0(a2);
  BUG();
}
