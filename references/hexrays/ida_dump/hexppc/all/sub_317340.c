void __fastcall __noreturn sub_317340(__int64 a1, unsigned int a2)
{
  if ( !dword_4DC890++ )
  {
    sub_69660((__int64)"BLOCK %d\n", *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL));
    sub_9EAE0(*(_QWORD *)(a1 + 16), (__int64)"INTERR %d", a2);
  }
  if ( !under_debugger )
    sub_37EEE0(a2);
  BUG();
}
