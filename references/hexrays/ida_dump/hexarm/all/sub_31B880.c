void __fastcall __noreturn sub_31B880(__int64 a1, unsigned int a2)
{
  if ( !dword_4EB8B0++ )
  {
    sub_6CAE0((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_A1F60(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_3835A0(a2);
  BUG();
}
