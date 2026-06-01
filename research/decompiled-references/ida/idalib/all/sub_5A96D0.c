void __fastcall sub_5A96D0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
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
  __int64 i; // rbp
  char *v17; // rax
  void *v18; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[48];
    if ( v2 )
    {
      a1[49] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[45];
    if ( v3 )
    {
      a1[46] = 0;
      qfree(v3);
    }
    v4 = (void *)a1[42];
    if ( v4 )
    {
      a1[43] = 0;
      qfree(v4);
    }
    v5 = (void *)a1[36];
    if ( v5 )
    {
      a1[37] = 0;
      qfree(v5);
    }
    v6 = (void *)a1[33];
    if ( v6 )
    {
      a1[34] = 0;
      qfree(v6);
    }
    v7 = (void *)a1[30];
    if ( v7 )
    {
      a1[31] = 0;
      qfree(v7);
    }
    v8 = (void *)a1[24];
    if ( v8 )
    {
      a1[25] = 0;
      qfree(v8);
    }
    v9 = (void *)a1[21];
    if ( v9 )
    {
      a1[22] = 0;
      qfree(v9);
    }
    v10 = (void *)a1[18];
    if ( v10 )
    {
      a1[19] = 0;
      qfree(v10);
    }
    v11 = (void *)a1[12];
    if ( v11 )
    {
      a1[13] = 0;
      qfree(v11);
    }
    v12 = (void *)a1[9];
    if ( v12 )
    {
      a1[10] = 0;
      qfree(v12);
    }
    v13 = (void *)a1[6];
    if ( v13 )
    {
      a1[7] = 0;
      qfree(v13);
    }
    v14 = (char *)a1[1];
    if ( v14 )
    {
      v15 = a1[2];
      if ( v15 )
      {
        for ( i = 0; i != v15; ++i )
        {
          v17 = &v14[24 * i];
          v18 = *(void **)v17;
          if ( *(_QWORD *)v17 )
          {
            *((_QWORD *)v17 + 1) = 0;
            qfree(v18);
            v14 = (char *)a1[1];
          }
        }
      }
      a1[2] = 0;
      qfree(v14);
    }
    operator delete(a1, 0x1B0u);
  }
}
