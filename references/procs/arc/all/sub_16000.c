__int64 __fastcall sub_16000(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 i; // r15
  __int64 *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 j; // r15
  __int64 *v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-40h]

  v2 = a1[665];
  *a1 = off_29470;
  while ( v2 )
  {
    sub_15560(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  a1[656] = &off_29D30;
  remove_event_listener(a1 + 656);
  v4 = a1[650];
  a1[643] = &off_29378;
  if ( v4 )
  {
    a1[651] = 0;
    qfree(v4);
  }
  v5 = a1[647];
  if ( v5 )
  {
    v31 = a1[648];
    if ( v31 )
    {
      v29 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v5 + v6);
        v8 = *(_QWORD *)(v5 + v6 + 56);
        if ( v8 )
        {
          v9 = v7[8];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (__int64 *)(v8 + 48 * i);
              v12 = v11[3];
              if ( v12 )
              {
                v11[4] = 0;
                qfree(v12);
              }
              v13 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v13);
              }
              v8 = v7[7];
            }
          }
          v7[8] = 0;
          qfree(v8);
        }
        v14 = v7[4];
        if ( v14 )
        {
          v7[5] = 0;
          qfree(v14);
        }
        v15 = v7[1];
        if ( v15 )
        {
          v7[2] = 0;
          qfree(v15);
        }
        ++v29;
        v5 = a1[647];
        v6 += 88;
      }
      while ( v31 != v29 );
    }
    a1[648] = 0;
    qfree(v5);
  }
  v16 = a1[644];
  if ( v16 )
  {
    a1[645] = 0;
    qfree(v16);
  }
  v17 = a1[640];
  if ( v17 )
  {
    v32 = a1[641];
    if ( v32 )
    {
      v30 = 0;
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v17 + v18);
        v20 = *(_QWORD *)(v17 + v18 + 56);
        if ( v20 )
        {
          v21 = v19[8];
          if ( v21 )
          {
            for ( j = 0; j != v21; ++j )
            {
              v23 = (__int64 *)(v20 + 48 * j);
              v24 = v23[3];
              if ( v24 )
              {
                v23[4] = 0;
                qfree(v24);
              }
              v25 = *v23;
              if ( *v23 )
              {
                v23[1] = 0;
                qfree(v25);
              }
              v20 = v19[7];
            }
          }
          v19[8] = 0;
          qfree(v20);
        }
        v26 = v19[4];
        if ( v26 )
        {
          v19[5] = 0;
          qfree(v26);
        }
        v27 = v19[1];
        if ( v27 )
        {
          v19[2] = 0;
          qfree(v27);
        }
        ++v30;
        v17 = a1[640];
        v18 += 88;
      }
      while ( v32 != v30 );
    }
    a1[641] = 0;
    qfree(v17);
  }
  *a1 = &off_29D30;
  remove_event_listener(a1);
  return qfree(a1);
}
