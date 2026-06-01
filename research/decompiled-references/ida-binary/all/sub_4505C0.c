double __fastcall commits_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rdi

  *a1 = commits_chooser_t___vtable;
  a1[23] = commits_chooser_t___vtable_at__184;
  v3 = a1[27];
  if ( v3 )
  {
    v4 = a1[28];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v3 + v5);
        v8 = *(_QWORD *)(v3 + v5 + 64);
        if ( v8 )
        {
          v7[9] = 0;
          qfree(v8, a2);
        }
        v9 = v7[5];
        if ( v9 )
        {
          v7[6] = 0;
          qfree(v9, a2);
        }
        v10 = v7[2];
        if ( v10 )
        {
          v7[3] = 0;
          qfree(v10, a2);
        }
        v3 = a1[27];
        v5 += 88;
      }
    }
    a1[28] = 0;
    qfree(v3, a2);
  }
  a1[23] = &unk_8729E8;
  unbind_event_handler_all(a1 + 23);
  v11 = a1[24];
  if ( v11 )
  {
    a1[25] = 0;
    qfree(v11, a2);
  }
  v12 = a1 + 22;
  *a1 = &stru_86F6A0;
  do
  {
    v13 = *(v12 - 3);
    v12 -= 3;
    if ( v13 )
    {
      v12[1] = 0;
      qfree(v13, a2);
    }
  }
  while ( a1 + 10 != v12 );
  return qfree(a1, a2);
}
