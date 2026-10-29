void __fastcall sub_485E90(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  char *v5; // rbp
  char *v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  char *v9; // rax
  void *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r15
  __int64 k; // rbx
  char *v14; // rax
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = (char *)a1[7];
  if ( v2 )
  {
    v17 = a1[8];
    if ( v17 )
    {
      v3 = 0;
      for ( i = 0; i != v17; ++i )
      {
        v5 = &v2[v3];
        v6 = *(char **)&v2[v3 + 24];
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 + 4);
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = &v6[24 * j];
              v10 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                qfree(v10);
                v6 = *((char **)v5 + 3);
              }
            }
          }
          *((_QWORD *)v5 + 4) = 0;
          qfree(v6);
        }
        v11 = *(char **)v5;
        if ( *(_QWORD *)v5 )
        {
          v12 = *((_QWORD *)v5 + 1);
          if ( v12 )
          {
            for ( k = 0; k != v12; ++k )
            {
              v14 = &v11[24 * k];
              v15 = *(void **)v14;
              if ( *(_QWORD *)v14 )
              {
                *((_QWORD *)v14 + 1) = 0;
                qfree(v15);
                v11 = *(char **)v5;
              }
            }
          }
          *((_QWORD *)v5 + 1) = 0;
          qfree(v11);
        }
        v2 = (char *)a1[7];
        v3 += 56;
      }
    }
    a1[8] = 0;
    qfree(v2);
  }
  v16 = (void *)a1[4];
  if ( v16 )
  {
    a1[5] = 0;
    qfree(v16);
  }
}
