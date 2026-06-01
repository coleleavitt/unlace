__int64 __fastcall __sandbox_ms(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
  bool v8; // cf
  unsigned __int64 v9; // x16
  void *v11; // [xsp+30h] [xbp-10h]

  do
  {
    v11 = a1;
    v9 = mac_syscall(SYS___mac_syscall, a1, a2, a3, a4, a5, a6, a7, a8);
    a1 = v11;
    if ( !v8 )
      break;
    v8 = v9 >= 4;
  }
  while ( v9 == 4 );
  return _sandbox_ms_end(v11);
}
