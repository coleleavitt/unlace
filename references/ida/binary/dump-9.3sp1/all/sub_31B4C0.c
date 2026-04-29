void __fastcall __noreturn sub_31B4C0(__int64 a1, unsigned int a2)
{
  if ( !dword_4EF950++ )
  {
    sub_6D0A0((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_A2520(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_383060(a2);
  BUG();
}
