void __fastcall sub_5A1DB0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void **v7; // r14
  void *v8; // rdi
  char *v9; // r13
  __int64 v10; // r12
  char *v11; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi

  v2 = (char *)a1[18];
  *a1 = off_2B2F288;
  if ( v2 )
  {
    v3 = a1[19];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[18];
        }
      }
    }
    a1[19] = 0;
    qfree(v2);
  }
  v7 = (void **)a1[12];
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      v9 = (char *)v7[1];
      if ( v9 )
      {
        v10 = 0;
        v11 = nullptr;
        do
        {
          v12 = (__int64)v8 + v10;
          ++v11;
          v10 += 56;
          sub_37C6A0(v12);
          v8 = *v7;
        }
        while ( v9 != v11 );
      }
      v7[1] = nullptr;
      qfree(v8);
    }
    qfree(v7);
  }
  v13 = (_QWORD *)a1[13];
  if ( v13 )
  {
    clear_tinfo_t(v13 + 5);
    v14 = (void *)v13[2];
    if ( v14 )
    {
      v13[3] = 0;
      qfree(v14);
    }
    cleanup_argloc(v13);
    qfree(v13);
  }
  v15 = (void *)a1[8];
  if ( v15 )
  {
    a1[9] = 0;
    qfree(v15);
  }
  v16 = (void *)a1[3];
  a1[1] = 0;
  *a1 = &off_2B2F258;
  if ( v16 )
  {
    a1[4] = 0;
    qfree(v16);
  }
  operator delete(a1, 0xB8u);
}
