double __fastcall sites_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rdi

  *a1 = sites_chooser_t___vtable;
  a1[23] = sites_chooser_t___vtable_at__184;
  v3 = a1[42];
  if ( v3 )
  {
    v4 = a1[43];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (__int64 *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 72);
        if ( v8 )
        {
          v7[10] = 0;
          qfree(v8, a2);
        }
        v9 = v7[6];
        if ( v9 )
        {
          v7[7] = 0;
          qfree(v9, a2);
        }
        v10 = v7[3];
        if ( v10 )
        {
          v7[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v11, a2);
        }
        v3 = a1[42];
        v5 += 104;
      }
    }
    a1[43] = 0;
    qfree(v3, a2);
  }
  a1[23] = &unk_8729E8;
  unbind_event_handler_all(a1 + 23);
  v12 = a1[24];
  if ( v12 )
  {
    a1[25] = 0;
    qfree(v12, a2);
  }
  v13 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v14 = *(v13 - 3);
    v13 -= 3;
    if ( v14 )
    {
      v13[1] = 0;
      qfree(v14, a2);
    }
  }
  while ( a1 + 10 != v13 );
  return qfree(a1, a2);
}
