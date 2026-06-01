void __fastcall sub_541C70(char *a1)
{
  char *v2; // rbp
  char *v3; // rbx
  char *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rbx
  void *v9; // rdi
  char *v10; // rdi
  __int64 v11; // r14
  __int64 i; // r13
  char *v13; // rbp
  __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rbx
  void *v18; // rdi

  if ( a1 )
  {
    v2 = a1 + 216;
    v3 = a1 + 464;
    do
    {
      v4 = v3;
      v3 -= 8;
      clear_tinfo_t(v4);
    }
    while ( v3 != v2 );
    clear_tinfo_t(v3);
    v5 = *((void **)a1 + 24);
    if ( v5 )
    {
      *((_QWORD *)a1 + 25) = 0;
      qfree(v5);
    }
    v6 = *((void **)a1 + 21);
    if ( v6 )
    {
      *((_QWORD *)a1 + 22) = 0;
      qfree(v6);
    }
    v7 = *((void **)a1 + 18);
    if ( v7 )
    {
      *((_QWORD *)a1 + 19) = 0;
      qfree(v7);
    }
    v8 = *((_QWORD *)a1 + 12);
    while ( v8 )
    {
      sub_532F40(*(_QWORD **)(v8 + 24));
      v9 = (void *)v8;
      v8 = *(_QWORD *)(v8 + 16);
      operator delete(v9, 0x30u);
    }
    v10 = *((char **)a1 + 7);
    if ( v10 )
    {
      v11 = *((_QWORD *)a1 + 8);
      if ( v11 )
      {
        for ( i = 0; i != v11; ++i )
        {
          v13 = &v10[80 * i];
          v14 = *((_QWORD *)v13 + 6);
          while ( v14 )
          {
            sub_533530(*(_QWORD **)(v14 + 24));
            v15 = (void *)v14;
            v14 = *(_QWORD *)(v14 + 16);
            operator delete(v15, 0x30u);
          }
          v16 = *((void **)v13 + 1);
          if ( v16 )
          {
            *((_QWORD *)v13 + 2) = 0;
            qfree(v16);
          }
          v10 = *((char **)a1 + 7);
        }
      }
      *((_QWORD *)a1 + 8) = 0;
      qfree(v10);
    }
    v17 = *((_QWORD *)a1 + 3);
    while ( v17 )
    {
      sub_533290(*(_QWORD **)(v17 + 24));
      v18 = (void *)v17;
      v17 = *(_QWORD *)(v17 + 16);
      operator delete(v18, 0x38u);
    }
    operator delete(a1, 0x1D8u);
  }
}
