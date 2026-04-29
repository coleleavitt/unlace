__int64 __fastcall sub_13180(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 i; // r12
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rbx
  _QWORD *v25; // r12
  __int64 v26; // rdi

  v2 = a1[69];
  *a1 = off_25B00;
  while ( v2 )
  {
    sub_12A30(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[63];
  while ( v4 )
  {
    sub_12690(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  v6 = a1[57];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_12C00(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 40);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[6] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x40u);
  }
  v9 = a1[51];
  while ( v9 )
  {
    sub_12A30(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  v11 = a1[45];
  while ( v11 )
  {
    sub_12860(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  v13 = a1[38];
  if ( v13 )
  {
    a1[39] = 0;
    qfree(v13);
  }
  v14 = a1[35];
  if ( v14 )
  {
    a1[36] = 0;
    qfree(v14);
  }
  v15 = a1[32];
  if ( v15 )
  {
    a1[33] = 0;
    qfree(v15);
  }
  v16 = a1[29];
  if ( v16 )
  {
    a1[30] = 0;
    qfree(v16);
  }
  v17 = a1[26];
  if ( v17 )
  {
    a1[27] = 0;
    qfree(v17);
  }
  v18 = a1[23];
  if ( v18 )
  {
    v19 = a1[24];
    if ( v19 )
    {
      for ( i = 0; i != v19; ++i )
      {
        v21 = (__int64 *)(v18 + 48 * i);
        v22 = v21[3];
        if ( v22 )
        {
          v21[4] = 0;
          qfree(v22);
        }
        v23 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v23);
        }
        v18 = a1[23];
      }
    }
    a1[24] = 0;
    qfree(v18);
  }
  v24 = a1[19];
  while ( v24 )
  {
    v25 = (_QWORD *)v24;
    sub_12EC0(*(_QWORD **)(v24 + 24));
    v26 = *(_QWORD *)(v24 + 40);
    v24 = *(_QWORD *)(v24 + 16);
    if ( v26 )
    {
      v25[6] = 0;
      qfree(v26);
    }
    operator delete(v25, 0x40u);
  }
  *a1 = &off_25D30;
  return remove_event_listener(a1);
}
