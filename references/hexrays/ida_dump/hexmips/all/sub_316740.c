void __fastcall __noreturn sub_316740(__int64 a1, unsigned int a2)
{
  if ( !dword_4CF8B0++ )
  {
    sub_68EA0((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_9E320(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_37E160(a2);
  BUG();
}
