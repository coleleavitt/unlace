void __fastcall sub_7D4A10(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  char *v8; // rax
  void *v9; // rdi
  char *v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbp
  char *v13; // rax
  void *v14; // rdi
  char *v15; // rdx
  __int64 v16; // r12
  __int64 k; // rbp
  char *v18; // rax
  void *v19; // rdi
  char *v20; // rdx
  __int64 v21; // r12
  __int64 m; // rbp
  char *v23; // rax
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // r12
  __int64 n; // rbp
  char *v30; // rax
  void *v31; // rdi

  v2 = (void *)a1[28];
  if ( v2 )
  {
    a1[29] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[25];
  if ( v3 )
  {
    a1[26] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[22];
  if ( v4 )
  {
    a1[23] = 0;
    qfree(v4);
  }
  v5 = (char *)a1[19];
  if ( v5 )
  {
    v6 = a1[20];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = &v5[24 * i];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)a1[19];
        }
      }
    }
    a1[20] = 0;
    qfree(v5);
  }
  v10 = (char *)a1[16];
  if ( v10 )
  {
    v11 = a1[17];
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = &v10[24 * j];
        v14 = *(void **)v13;
        if ( *(_QWORD *)v13 )
        {
          *((_QWORD *)v13 + 1) = 0;
          qfree(v14);
          v10 = (char *)a1[16];
        }
      }
    }
    a1[17] = 0;
    qfree(v10);
  }
  v15 = (char *)a1[13];
  if ( v15 )
  {
    v16 = a1[14];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = &v15[24 * k];
        v19 = *(void **)v18;
        if ( *(_QWORD *)v18 )
        {
          *((_QWORD *)v18 + 1) = 0;
          qfree(v19);
          v15 = (char *)a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v15);
  }
  v20 = (char *)a1[10];
  if ( v20 )
  {
    v21 = a1[11];
    if ( v21 )
    {
      for ( m = 0; m != v21; ++m )
      {
        v23 = &v20[24 * m];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v20 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v20);
  }
  v25 = (void *)a1[7];
  if ( v25 )
  {
    a1[8] = 0;
    qfree(v25);
  }
  v26 = (void *)a1[4];
  if ( v26 )
  {
    a1[5] = 0;
    qfree(v26);
  }
  v27 = (char *)a1[1];
  if ( v27 )
  {
    v28 = a1[2];
    if ( v28 )
    {
      for ( n = 0; n != v28; ++n )
      {
        v30 = &v27[24 * n];
        v31 = *(void **)v30;
        if ( *(_QWORD *)v30 )
        {
          *((_QWORD *)v30 + 1) = 0;
          qfree(v31);
          v27 = (char *)a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v27);
  }
}
