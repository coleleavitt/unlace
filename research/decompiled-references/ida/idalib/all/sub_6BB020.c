void __fastcall sub_6BB020(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rbx
  char *v6; // rdi
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  char *v9; // rdi
  __int64 v10; // r14
  __int64 j; // r15
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  _QWORD *v16; // rbx
  void *v17; // rdi
  _QWORD *v18; // rdi
  char *v19; // rdx
  __int64 v20; // r14
  __int64 k; // rbx
  char *v22; // rax
  void *v23; // rdi
  void *v24; // rdi
  __int64 v25; // rax
  void *v26; // rdi
  _QWORD *v27; // r13
  _QWORD *v28; // rdi
  __int64 v29; // rax

  v2 = (void *)a1[12];
  if ( v2 )
  {
    a1[13] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[9];
  if ( v3 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[8 * i];
        clear_tinfo_t(v6);
        v3 = (char *)a1[9];
      }
    }
    a1[10] = 0;
    qfree(v3);
  }
  v7 = (_QWORD *)a1[4];
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    clear_tinfo_t(v8 + 24);
    v9 = (char *)v8[20];
    if ( v9 )
    {
      v10 = v8[21];
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = &v9[144 * j];
          clear_tinfo_t(v12 + 64);
          v13 = *((void **)v12 + 5);
          if ( v13 )
          {
            *((_QWORD *)v12 + 6) = 0;
            qfree(v13);
          }
          v14 = *((void **)v12 + 2);
          if ( v14 )
          {
            *((_QWORD *)v12 + 3) = 0;
            qfree(v14);
          }
          v9 = (char *)v8[20];
        }
      }
      v8[21] = 0;
      qfree(v9);
    }
    v15 = (void *)v8[17];
    if ( v15 )
    {
      v8[18] = 0;
      qfree(v15);
    }
    v16 = (_QWORD *)v8[12];
    while ( v16 )
    {
      v17 = v16;
      v16 = (_QWORD *)*v16;
      operator delete(v17, 0x20u);
    }
    memset((void *)v8[10], 0, 8LL * v8[11]);
    v18 = (_QWORD *)v8[10];
    v8[13] = 0;
    v8[12] = 0;
    if ( v18 != v8 + 16 )
      operator delete(v18, 8LL * v8[11]);
    v19 = (char *)v8[7];
    if ( v19 )
    {
      v20 = v8[8];
      if ( v20 )
      {
        for ( k = 0; k != v20; ++k )
        {
          v22 = &v19[32 * k];
          v23 = *(void **)v22;
          if ( *(_QWORD *)v22 )
          {
            *((_QWORD *)v22 + 1) = 0;
            qfree(v23);
            v19 = (char *)v8[7];
          }
        }
      }
      v8[8] = 0;
      qfree(v19);
    }
    v24 = (void *)v8[2];
    if ( v24 )
    {
      v8[3] = 0;
      qfree(v24);
    }
    operator delete(v8, 0xC8u);
  }
  v25 = a1[3];
  v26 = (void *)a1[2];
  v27 = a1 + 8;
  memset(v26, 0, 8 * v25);
  v28 = (_QWORD *)*(v27 - 6);
  v29 = *(v27 - 5);
  *(v27 - 3) = 0;
  *(v27 - 4) = 0;
  if ( v28 != v27 )
    operator delete(v28, 8 * v29);
}
