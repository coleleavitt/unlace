__int64 __fastcall sub_BB120(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  __int64 *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 j; // rbp
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rdi

  v2 = a1[36];
  if ( v2 )
  {
    v3 = a1[37];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (__int64 *)(v2 + 48 * i);
        v6 = v5[3];
        if ( v6 )
        {
          v5[4] = 0;
          qfree(v6);
        }
        v7 = *v5;
        if ( *v5 )
        {
          v5[1] = 0;
          qfree(v7);
        }
        v2 = a1[36];
      }
    }
    a1[37] = 0;
    qfree(v2);
  }
  v8 = a1[32];
  if ( v8 )
  {
    a1[33] = 0;
    qfree(v8);
  }
  qfree(a1[30]);
  v9 = a1[27];
  if ( v9 )
  {
    a1[28] = 0;
    qfree(v9);
  }
  v10 = a1[24];
  if ( v10 )
  {
    a1[25] = 0;
    qfree(v10);
  }
  qfree(a1[22]);
  v11 = a1[19];
  if ( v11 )
  {
    a1[20] = 0;
    qfree(v11);
  }
  qfree(a1[17]);
  v12 = a1[14];
  if ( v12 )
  {
    a1[15] = 0;
    qfree(v12);
  }
  qfree(a1[12]);
  cleanup_argloc(a1 + 10);
  result = clear_tinfo_t(a1 + 9);
  v14 = a1[6];
  if ( v14 )
  {
    v15 = a1[7];
    if ( v15 )
    {
      for ( j = 0; j != v15; ++j )
      {
        v17 = j;
        sub_11CDA0(16 * v17 + v14);
        v14 = a1[6];
      }
    }
    a1[7] = 0;
    result = qfree(v14);
  }
  v18 = a1[3];
  if ( v18 )
  {
    v19 = a1[4];
    if ( v19 )
    {
      v20 = 0;
      do
      {
        v21 = v18 + 80 * v20;
        cleanup_argloc(v21 + 56);
        v22 = *(_QWORD *)(v21 + 32);
        if ( v22 )
        {
          *(_QWORD *)(v21 + 40) = 0;
          qfree(v22);
        }
        ++v20;
        clear_tinfo_t(v21 + 24);
        sub_11CDA0(v21);
        v18 = a1[3];
      }
      while ( v19 != v20 );
    }
    a1[4] = 0;
    return qfree(v18);
  }
  return result;
}
