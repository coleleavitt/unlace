double __fastcall pb_chooser_t__::vfunc_1(_QWORD *a1)
{
  _QWORD *v2; // rbx
  const char *v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdi

  v2 = a1 + 23;
  *a1 = pb_chooser_t___vtable;
  v3 = (const char *)(a1 + 23);
  a1[23] = pb_chooser_t___vtable_at__184;
  unhook_event_listener(3, a1 + 23);
  v4 = a1[25];
  if ( v4 )
  {
    a1[26] = 0;
    qfree(v4, v3);
  }
  v5 = v2;
  a1[23] = &off_86FB08;
  v6 = a1 + 19;
  remove_event_listener(v5);
  *a1 = &stru_86F6A0;
  do
  {
    v7 = *v6;
    if ( *v6 )
    {
      v6[1] = 0;
      qfree(v7, v3);
    }
    v6 -= 3;
  }
  while ( v6 != a1 + 7 );
  return qfree(a1, v3);
}
