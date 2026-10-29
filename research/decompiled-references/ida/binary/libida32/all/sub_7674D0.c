void __fastcall sub_7674D0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbp
  __int64 v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbp
  char *v17; // rax
  void *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r12
  __int64 k; // rbp
  char *v22; // rax
  void *v23; // rdi
  char *v24; // rdx
  __int64 v25; // r12
  __int64 m; // rbp
  char *v27; // rax
  void *v28; // rdi
  void *v29; // rdi

  sub_763CB0((__int64)a1);
  v2 = (char *)a1[52];
  a1[22] = 0;
  if ( v2 )
  {
    v3 = a1[53];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        free_idcv(&v2[32 * v5]);
        v2 = (char *)a1[52];
      }
    }
    a1[53] = 0;
    qfree(v2);
  }
  v6 = (void *)a1[48];
  if ( v6 )
  {
    a1[49] = 0;
    qfree(v6);
  }
  v7 = (void *)a1[45];
  if ( v7 )
  {
    a1[46] = 0;
    qfree(v7);
  }
  v8 = (void *)a1[42];
  if ( v8 )
  {
    a1[43] = 0;
    qfree(v8);
  }
  v9 = (void *)a1[39];
  if ( v9 )
  {
    a1[40] = 0;
    qfree(v9);
  }
  v10 = (void *)a1[36];
  if ( v10 )
  {
    a1[37] = 0;
    qfree(v10);
  }
  v11 = (void *)a1[33];
  if ( v11 )
  {
    a1[34] = 0;
    qfree(v11);
  }
  v12 = (void *)a1[30];
  if ( v12 )
  {
    a1[31] = 0;
    qfree(v12);
  }
  v13 = (void *)a1[27];
  if ( v13 )
  {
    a1[28] = 0;
    qfree(v13);
  }
  v14 = (char *)a1[19];
  if ( v14 )
  {
    v15 = a1[20];
    if ( v15 )
    {
      for ( j = 0; j != v15; ++j )
      {
        v17 = &v14[24 * j];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)a1[19];
        }
      }
    }
    a1[20] = 0;
    qfree(v14);
  }
  v19 = (char *)a1[16];
  if ( v19 )
  {
    v20 = a1[17];
    if ( v20 )
    {
      for ( k = 0; k != v20; ++k )
      {
        v22 = &v19[24 * k];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree(v19);
  }
  v24 = (char *)a1[13];
  if ( v24 )
  {
    v25 = a1[14];
    if ( v25 )
    {
      for ( m = 0; m != v25; ++m )
      {
        v27 = &v24[24 * m];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v24);
  }
  v29 = (void *)a1[5];
  if ( v29 )
  {
    a1[6] = 0;
    qfree(v29);
  }
}

