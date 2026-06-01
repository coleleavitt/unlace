__int64 __fastcall kdebug_trace_string(void *a1, void *a2, void *a3)
{
  void *v6; // x3
  void *v7; // x4
  void *v8; // x5
  void *v9; // x6
  void *v10; // x7
  int *v12; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( !kdebug_is_enabled((unsigned int)a1) )
    return 0;
  if ( a2 != (void *)-1LL && (a2 || a3) )
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return __kdebug_trace_string(a1, a2, a3, v6, v7, v8, v9, v10);
  }
  else
  {
    v12 = *(int **)(_ReadStatusReg(TPIDRRO_EL0) + 8);
    if ( !v12 )
      v12 = &errno;
    *v12 = 22;
    return -1;
  }
}
