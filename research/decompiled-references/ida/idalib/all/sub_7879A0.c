void __fastcall sub_7879A0(_QWORD *a1)
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

  sub_7840F0((__int64)a1);
  v2 = (char *)a1[53];
  a1[23] = 0;
  if ( v2 )
  {
    v3 = a1[54];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = i;
        free_idcv(&v2[32 * v5]);
        v2 = (char *)a1[53];
      }
    }
    a1[54] = 0;
    qfree(v2);
  }
  v6 = (void *)a1[49];
  if ( v6 )
  {
    a1[50] = 0;
    qfree(v6);
  }
  v7 = (void *)a1[46];
  if ( v7 )
  {
    a1[47] = 0;
    qfree(v7);
  }
  v8 = (void *)a1[43];
  if ( v8 )
  {
    a1[44] = 0;
    qfree(v8);
  }
  v9 = (void *)a1[40];
  if ( v9 )
  {
    a1[41] = 0;
    qfree(v9);
  }
  v10 = (void *)a1[37];
  if ( v10 )
  {
    a1[38] = 0;
    qfree(v10);
  }
  v11 = (void *)a1[34];
  if ( v11 )
  {
    a1[35] = 0;
    qfree(v11);
  }
  v12 = (void *)a1[31];
  if ( v12 )
  {
    a1[32] = 0;
    qfree(v12);
  }
  v13 = (void *)a1[28];
  if ( v13 )
  {
    a1[29] = 0;
    qfree(v13);
  }
  v14 = (char *)a1[20];
  if ( v14 )
  {
    v15 = a1[21];
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
          v14 = (char *)a1[20];
        }
      }
    }
    a1[21] = 0;
    qfree(v14);
  }
  v19 = (char *)a1[17];
  if ( v19 )
  {
    v20 = a1[18];
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
          v19 = (char *)a1[17];
        }
      }
    }
    a1[18] = 0;
    qfree(v19);
  }
  v24 = (char *)a1[14];
  if ( v24 )
  {
    v25 = a1[15];
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
          v24 = (char *)a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree(v24);
  }
  v29 = (void *)a1[5];
  if ( v29 )
  {
    a1[6] = 0;
    qfree(v29);
  }
}
