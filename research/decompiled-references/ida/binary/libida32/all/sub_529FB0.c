void __fastcall sub_529FB0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r13
  __int64 j; // r12
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  char *v15; // rdi
  __int64 v16; // r13
  __int64 k; // r12
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // rdi
  __int64 v22; // r13
  __int64 m; // r12
  char *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi

  v2 = (char *)a1[18];
  if ( v2 )
  {
    v3 = a1[19];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 24];
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        v2 = (char *)a1[18];
        v4 += 56;
      }
    }
    a1[19] = 0;
    qfree(v2);
  }
  v9 = (char *)a1[15];
  if ( v9 )
  {
    v10 = a1[16];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = &v9[64 * j];
        v13 = *((void **)v12 + 3);
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          qfree(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v14);
        }
        v9 = (char *)a1[15];
      }
    }
    a1[16] = 0;
    qfree(v9);
  }
  v15 = (char *)a1[12];
  if ( v15 )
  {
    v16 = a1[13];
    if ( v16 )
    {
      for ( k = 0; k != v16; ++k )
      {
        v18 = &v15[128 * k];
        clear_tinfo_t(v18 + 64);
        v19 = *((void **)v18 + 5);
        if ( v19 )
        {
          *((_QWORD *)v18 + 6) = 0;
          qfree(v19);
        }
        v20 = *((void **)v18 + 2);
        if ( v20 )
        {
          *((_QWORD *)v18 + 3) = 0;
          qfree(v20);
        }
        v15 = (char *)a1[12];
      }
    }
    a1[13] = 0;
    qfree(v15);
  }
  v21 = (char *)a1[9];
  if ( v21 )
  {
    v22 = a1[10];
    if ( v22 )
    {
      for ( m = 0; m != v22; ++m )
      {
        v24 = &v21[128 * m];
        clear_tinfo_t(v24 + 64);
        v25 = *((void **)v24 + 5);
        if ( v25 )
        {
          *((_QWORD *)v24 + 6) = 0;
          qfree(v25);
        }
        v26 = *((void **)v24 + 2);
        if ( v26 )
        {
          *((_QWORD *)v24 + 3) = 0;
          qfree(v26);
        }
        v21 = (char *)a1[9];
      }
    }
    a1[10] = 0;
    qfree(v21);
  }
  v27 = (void *)a1[4];
  if ( v27 )
  {
    a1[5] = 0;
    qfree(v27);
  }
  v28 = (void *)a1[1];
  if ( v28 )
  {
    a1[2] = 0;
    qfree(v28);
  }
}

