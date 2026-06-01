double __fastcall sub_4506F0(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  __int64 v15; // rdi

  v2 = a1 - 23;
  *(a1 - 23) = commits_chooser_t___vtable;
  *a1 = commits_chooser_t___vtable_at__184;
  v4 = a1[4];
  if ( v4 )
  {
    v5 = a1[5];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 64);
        if ( v9 )
        {
          v8[9] = 0;
          qfree(v9, a2);
        }
        v10 = v8[5];
        if ( v10 )
        {
          v8[6] = 0;
          qfree(v10, a2);
        }
        v11 = v8[2];
        if ( v11 )
        {
          v8[3] = 0;
          qfree(v11, a2);
        }
        v4 = a1[4];
        v6 += 88;
      }
    }
    a1[5] = 0;
    qfree(v4, a2);
  }
  *a1 = &unk_8729E8;
  unbind_event_handler_all(a1);
  v12 = a1[1];
  if ( v12 )
  {
    a1[2] = 0;
    qfree(v12, a2);
  }
  v13 = a1 - 4;
  v14 = a1 - 16;
  *(v14 - 7) = (__int64)&stru_86F6A0;
  do
  {
    v15 = *v13;
    if ( *v13 )
    {
      v13[1] = 0;
      qfree(v15, a2);
    }
    v13 -= 3;
  }
  while ( v13 != v14 );
  return qfree(v2, a2);
}
