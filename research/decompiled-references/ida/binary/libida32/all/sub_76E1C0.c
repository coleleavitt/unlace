__int64 __fastcall sub_76E1C0(__int64 a1)
{
  void **v2; // rbp
  __int64 v3; // r14
  void **v4; // rbx
  void *v5; // rdi
  char *v6; // rdx
  void *v7; // r15
  void *i; // r12
  char *v9; // rax
  void *v10; // rdi
  char *v11; // rdi
  char *v12; // r12
  char *j; // r15
  void *v14; // rax
  void *v15; // rdi
  void *v16; // rdi
  __int64 result; // rax

  v2 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v3 != *(_QWORD *)a1 )
  {
    do
    {
      v4 = (void **)*v2;
      if ( *v2 )
      {
        v5 = v4[14];
        if ( v5 )
        {
          v4[15] = nullptr;
          qfree(v5);
        }
        v6 = (char *)v4[11];
        if ( v6 )
        {
          v7 = v4[12];
          if ( v7 )
          {
            for ( i = nullptr; i != v7; i = (char *)i + 1 )
            {
              v9 = &v6[32 * (_QWORD)i];
              v10 = *((void **)v9 + 1);
              if ( v10 )
              {
                *((_QWORD *)v9 + 2) = 0;
                qfree(v10);
                v6 = (char *)v4[11];
              }
            }
          }
          v4[12] = nullptr;
          qfree(v6);
        }
        v11 = (char *)v4[8];
        if ( v11 )
        {
          v12 = (char *)v4[9];
          if ( v12 )
          {
            for ( j = nullptr; j != v12; ++j )
            {
              v14 = j;
              free_idcv(&v11[32 * (_QWORD)v14]);
              v11 = (char *)v4[8];
            }
          }
          v4[9] = nullptr;
          qfree(v11);
        }
        v15 = v4[4];
        if ( v15 )
        {
          v4[5] = nullptr;
          qfree(v15);
        }
        v16 = *v4;
        if ( *v4 )
        {
          v4[1] = nullptr;
          qfree(v16);
        }
        operator delete(v4, 0x90u);
      }
      ++v2;
    }
    while ( (void **)v3 != v2 );
    v2 = *(void ***)a1;
  }
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_76DF00(a1);
  sub_775C40(a1 + 64);
  sub_7817F0(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  result = destroy_lexer(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
  return result;
}

