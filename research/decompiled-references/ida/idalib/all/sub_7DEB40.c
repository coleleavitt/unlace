void __fastcall sub_7DEB40(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // rbp
  __int64 j; // rbx
  char *v10; // rax
  void *v11; // rdi
  char *v12; // rax
  __int64 k; // r13
  char *v14; // rbp
  char *v15; // rdi
  __int64 v16; // r12
  __int64 m; // r15
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-40h]

  v2 = (char *)a1[11];
  *a1 = &off_2B3BD40;
  if ( v2 )
  {
    v3 = a1[12];
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
          v2 = (char *)a1[11];
        }
      }
    }
    a1[12] = 0;
    qfree(v2);
  }
  v7 = (char *)a1[8];
  if ( v7 )
  {
    v8 = a1[9];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = &v7[24 * j];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)a1[8];
        }
      }
    }
    a1[9] = 0;
    qfree(v7);
  }
  v12 = (char *)a1[5];
  if ( v12 )
  {
    v22 = a1[6];
    if ( v22 )
    {
      for ( k = 0; k != v22; ++k )
      {
        v14 = &v12[24 * k];
        v15 = *(char **)v14;
        if ( *(_QWORD *)v14 )
        {
          v16 = *((_QWORD *)v14 + 1);
          if ( v16 )
          {
            for ( m = 0; m != v16; ++m )
            {
              v18 = &v15[80 * m];
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
              v15 = *(char **)v14;
            }
          }
          *((_QWORD *)v14 + 1) = 0;
          qfree(v15);
          v12 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v12);
  }
  v21 = (void *)a1[2];
  if ( v21 )
  {
    a1[3] = 0;
    qfree(v21);
  }
}
