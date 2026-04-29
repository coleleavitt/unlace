void __fastcall sub_DA20(_QWORD *a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 j; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r13
  __int64 k; // r12
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 m; // r12
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi

  v2 = a1[36];
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_BD70(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 32);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[5] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x38u);
  }
  v5 = a1[27];
  if ( v5 )
  {
    v6 = a1[28];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v5 + 144 * i);
        clear_tinfo_t(v8 + 8);
        v9 = v8[5];
        if ( v9 )
        {
          v8[6] = 0;
          qfree(v9);
        }
        v10 = v8[2];
        if ( v10 )
        {
          v8[3] = 0;
          qfree(v10);
        }
        v5 = a1[27];
      }
    }
    a1[28] = 0;
    qfree(v5);
  }
  v11 = a1[23];
  while ( v11 )
  {
    v12 = (_QWORD *)v11;
    sub_BD70(*(_QWORD **)(v11 + 24));
    v13 = *(_QWORD *)(v11 + 32);
    v11 = *(_QWORD *)(v11 + 16);
    if ( v13 )
    {
      v12[5] = 0;
      qfree(v13);
    }
    operator delete(v12, 0x38u);
  }
  v14 = a1[14];
  if ( v14 )
  {
    v15 = a1[15];
    if ( v15 )
    {
      for ( j = 0; j != v15; ++j )
      {
        v17 = (_QWORD *)(v14 + 144 * j);
        clear_tinfo_t(v17 + 8);
        v18 = v17[5];
        if ( v18 )
        {
          v17[6] = 0;
          qfree(v18);
        }
        v19 = v17[2];
        if ( v19 )
        {
          v17[3] = 0;
          qfree(v19);
        }
        v14 = a1[14];
      }
    }
    a1[15] = 0;
    qfree(v14);
  }
  v20 = a1[11];
  if ( v20 )
  {
    v21 = a1[12];
    if ( v21 )
    {
      for ( k = 0; k != v21; ++k )
      {
        v23 = (_QWORD *)(v20 + 144 * k);
        clear_tinfo_t(v23 + 8);
        v24 = v23[5];
        if ( v24 )
        {
          v23[6] = 0;
          qfree(v24);
        }
        v25 = v23[2];
        if ( v25 )
        {
          v23[3] = 0;
          qfree(v25);
        }
        v20 = a1[11];
      }
    }
    a1[12] = 0;
    qfree(v20);
  }
  v26 = a1[4];
  if ( v26 )
  {
    v27 = a1[5];
    if ( v27 )
    {
      for ( m = 0; m != v27; ++m )
      {
        v29 = (_QWORD *)(v26 + 144 * m);
        clear_tinfo_t(v29 + 8);
        v30 = v29[5];
        if ( v30 )
        {
          v29[6] = 0;
          qfree(v30);
        }
        v31 = v29[2];
        if ( v31 )
        {
          v29[3] = 0;
          qfree(v31);
        }
        v26 = a1[4];
      }
    }
    a1[5] = 0;
    qfree(v26);
  }
  v32 = a1[1];
  if ( v32 )
  {
    a1[2] = 0;
    qfree(v32);
  }
}
