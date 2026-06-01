void __fastcall sub_3AA260(void *a1)
{
  char *v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  char *v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbp
  char *v11; // rax
  void *v12; // rdi
  char *v13; // rdx
  __int64 v14; // r12
  __int64 k; // rbp
  char *v16; // rax
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi

  if ( a1 )
  {
    v1 = *((char **)a1 + 35);
    if ( v1 )
    {
      v3 = *((_QWORD *)a1 + 36);
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = &v1[24 * i];
          v6 = *(void **)v5;
          if ( *(_QWORD *)v5 )
          {
            *((_QWORD *)v5 + 1) = 0;
            qfree(v6);
            v1 = *((char **)a1 + 35);
          }
        }
      }
      *((_QWORD *)a1 + 36) = 0;
      qfree(v1);
    }
    v7 = *((void **)a1 + 30);
    if ( v7 )
    {
      *((_QWORD *)a1 + 31) = 0;
      qfree(v7);
    }
    v8 = *((char **)a1 + 27);
    if ( v8 )
    {
      v9 = *((_QWORD *)a1 + 28);
      if ( v9 )
      {
        for ( j = 0; j != v9; ++j )
        {
          v11 = &v8[24 * j];
          v12 = *(void **)v11;
          if ( *(_QWORD *)v11 )
          {
            *((_QWORD *)v11 + 1) = 0;
            qfree(v12);
            v8 = *((char **)a1 + 27);
          }
        }
      }
      *((_QWORD *)a1 + 28) = 0;
      qfree(v8);
    }
    sub_3A5F40(*((void **)a1 + 23));
    sub_3A5F40(*((void **)a1 + 17));
    sub_3A5F40(*((void **)a1 + 11));
    v13 = *((char **)a1 + 6);
    if ( v13 )
    {
      v14 = *((_QWORD *)a1 + 7);
      if ( v14 )
      {
        for ( k = 0; k != v14; ++k )
        {
          v16 = &v13[32 * k];
          v17 = *(void **)v16;
          if ( *(_QWORD *)v16 )
          {
            *((_QWORD *)v16 + 1) = 0;
            qfree(v17);
            v13 = *((char **)a1 + 6);
          }
        }
      }
      *((_QWORD *)a1 + 7) = 0;
      qfree(v13);
    }
    v18 = *((void **)a1 + 3);
    if ( v18 )
    {
      *((_QWORD *)a1 + 4) = 0;
      qfree(v18);
    }
    v19 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *((_QWORD *)a1 + 1) = 0;
      qfree(v19);
    }
    operator delete(a1, 0x138u);
  }
}

