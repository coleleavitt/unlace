void __fastcall sub_3F920(__int64 *a1)
{
  __int64 v1; // rbp
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbp
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbp
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi

  v1 = a1[18];
  while ( v1 )
  {
    sub_32080(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x38u);
  }
  v4 = a1[13];
  if ( v4 )
  {
    v5 = a1[14];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8);
          v4 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v4);
  }
  v9 = a1[10];
  if ( v9 )
  {
    v10 = a1[11];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (__int64 *)(v9 + 24 * j);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v9 = a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v9);
  }
  v14 = a1[6];
  if ( v14 )
  {
    a1[7] = 0;
    qfree(v14);
  }
  v15 = a1[3];
  if ( v15 )
  {
    v16 = a1[4];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = v15 + 40 * k;
        v19 = *(_QWORD *)(v18 + 16);
        if ( v19 )
        {
          *(_QWORD *)(v18 + 24) = 0;
          qfree(v19);
          v15 = a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v15);
  }
  v20 = *a1;
  if ( *a1 )
  {
    v21 = a1[1];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = v20 + 40 * m;
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 )
        {
          *(_QWORD *)(v23 + 16) = 0;
          qfree(v24);
          v20 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v20);
  }
}

