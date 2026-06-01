void __fastcall pb_chooser_t__::vfunc_0(__int64 *a1)
{
  _QWORD *v2; // rbx
  const char *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // rdi

  v2 = a1 + 23;
  v3 = (const char *)(a1 + 23);
  *a1 = (__int64)pb_chooser_t___vtable;
  a1[23] = (__int64)pb_chooser_t___vtable_at__184;
  unhook_event_listener(3, a1 + 23);
  v4 = a1[25];
  if ( v4 )
  {
    a1[26] = 0;
    qfree(v4, v3);
  }
  v5 = v2;
  v6 = a1 + 19;
  v7 = a1 + 7;
  v7[16] = (__int64)&off_86FB08;
  remove_event_listener(v5);
  *(v7 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      qfree(v8, v3);
    }
    v6 -= 3;
  }
  while ( v6 != v7 );
}
