__int64 __fastcall sub_D8AF40(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  char *v4; // rbp
  char *v5; // r12
  void *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r14
  void **v10; // r13
  void **v11; // r12

  sub_D8AAC0(a1);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 48);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = *(char **)(a1 + 88);
  v5 = &v4[16 * *(unsigned int *)(a1 + 96)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 16;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = *(char **)(a1 + 88);
  }
  if ( v5 != (char *)(a1 + 104) )
    free(v5);
  v6 = *(void **)(a1 + 40);
  if ( v6 != (void *)(a1 + 56) )
    free(v6);
  v7 = *(_QWORD *)a1;
  v8 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v8 )
  {
    v9 = v7 + 80 * v8;
    do
    {
      if ( *(_QWORD *)v7 != -4096 && *(_QWORD *)v7 != -8192 )
      {
        v10 = *(void ***)(v7 + 8);
        v11 = &v10[*(unsigned int *)(v7 + 16)];
        if ( v10 != v11 )
        {
          do
          {
            while ( *--v11 )
            {
              operator delete[](*v11);
              if ( v10 == v11 )
                goto LABEL_17;
            }
          }
          while ( v10 != v11 );
LABEL_17:
          v11 = *(void ***)(v7 + 8);
        }
        if ( v11 != (void **)(v7 + 24) )
          free(v11);
      }
      v7 += 80;
    }
    while ( v9 != v7 );
  }
  return operator delete();
}

