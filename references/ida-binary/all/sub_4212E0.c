double __fastcall sub_4212E0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // rbp
  __int64 v16; // rdi

  v2 = a1 - 23;
  *(a1 - 23) = sites_chooser_t___vtable;
  *a1 = sites_chooser_t___vtable_at__184;
  v4 = a1[19];
  if ( v4 )
  {
    v5 = a1[20];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (__int64 *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 72);
        if ( v9 )
        {
          v8[10] = 0;
          qfree(v9, a2);
        }
        v10 = v8[6];
        if ( v10 )
        {
          v8[7] = 0;
          qfree(v10, a2);
        }
        v11 = v8[3];
        if ( v11 )
        {
          v8[4] = 0;
          qfree(v11, a2);
        }
        v12 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v12, a2);
        }
        v4 = a1[19];
        v6 += 104;
      }
    }
    a1[20] = 0;
    qfree(v4, a2);
  }
  *a1 = &unk_8729E8;
  unbind_event_handler_all(a1);
  v13 = a1[1];
  if ( v13 )
  {
    a1[2] = 0;
    qfree(v13, a2);
  }
  v14 = a1 - 4;
  v15 = a1 - 16;
  *(v15 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v16 = *v14;
    if ( *v14 )
    {
      v14[1] = 0;
      qfree(v16, a2);
    }
    v14 -= 3;
  }
  while ( v14 != v15 );
  return qfree(v2, a2);
}
