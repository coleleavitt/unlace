void __fastcall sub_7EB150(__int64 a1)
{
  void *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r15
  char *v5; // rbx
  char *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 i; // rbp
  char *v10; // r14
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  char *v15; // rdx
  __int64 v16; // r12
  __int64 j; // rbp
  char *v18; // rax
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v2 = *(void **)(a1 + 72);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v2);
  }
  v3 = *(char **)(a1 + 48);
  if ( v3 )
  {
    v26 = *(_QWORD *)(a1 + 56);
    if ( v26 )
    {
      v24 = 0;
      v4 = 0;
      do
      {
        v5 = &v3[v4];
        v6 = *(char **)&v3[v4 + 152];
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 + 20);
          if ( v7 )
          {
            v8 = 0;
            for ( i = 0; i != v7; ++i )
            {
              v10 = &v6[v8];
              v11 = *(void **)&v6[v8 + 48];
              if ( v11 )
              {
                *((_QWORD *)v10 + 7) = 0;
                qfree(v11);
              }
              v12 = *((void **)v10 + 3);
              if ( v12 )
              {
                *((_QWORD *)v10 + 4) = 0;
                qfree(v12);
              }
              v13 = *(void **)v10;
              if ( *(_QWORD *)v10 )
              {
                *((_QWORD *)v10 + 1) = 0;
                qfree(v13);
              }
              v6 = *((char **)v5 + 19);
              v8 += 88;
            }
          }
          *((_QWORD *)v5 + 20) = 0;
          qfree(v6);
        }
        v14 = *((void **)v5 + 16);
        if ( v14 )
        {
          *((_QWORD *)v5 + 17) = 0;
          qfree(v14);
        }
        v15 = *((char **)v5 + 10);
        if ( v15 )
        {
          v16 = *((_QWORD *)v5 + 11);
          if ( v16 )
          {
            for ( j = 0; j != v16; ++j )
            {
              v18 = &v15[24 * j];
              v19 = *(void **)v18;
              if ( *(_QWORD *)v18 )
              {
                *((_QWORD *)v18 + 1) = 0;
                qfree(v19);
                v15 = *((char **)v5 + 10);
              }
            }
          }
          *((_QWORD *)v5 + 11) = 0;
          qfree(v15);
        }
        v20 = *((void **)v5 + 7);
        if ( v20 )
        {
          *((_QWORD *)v5 + 8) = 0;
          qfree(v20);
        }
        v21 = *((void **)v5 + 4);
        if ( v21 )
        {
          *((_QWORD *)v5 + 5) = 0;
          qfree(v21);
        }
        ++v24;
        v4 += 176;
        v3 = *(char **)(a1 + 48);
      }
      while ( v26 != v24 );
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v3);
  }
  v22 = *(void **)(a1 + 24);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v22);
  }
  v23 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v23);
  }
}

