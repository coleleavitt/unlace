void __fastcall sub_E56DF0(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  char *v6; // rbp
  char *v7; // r12
  void *v8; // rdi
  void **v9; // r12
  void **v10; // rbp

  v2 = *(_QWORD *)(a1 + 560);
  if ( v2 )
  {
    do
    {
      sub_E56DB0(a1 + 544, *(_QWORD **)(v2 + 24));
      v3 = *(_QWORD *)(v2 + 16);
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(_QWORD *)(a1 + 456);
  v5 = v4 + 8LL * *(unsigned int *)(a1 + 464);
  while ( v5 != v4 )
  {
    v4 += 8;
    operator delete();
  }
  v6 = *(char **)(a1 + 504);
  v7 = &v6[16 * *(unsigned int *)(a1 + 512)];
  if ( v6 != v7 )
  {
    do
    {
      v6 += 16;
      operator delete();
    }
    while ( v7 != v6 );
    v7 = *(char **)(a1 + 504);
  }
  if ( v7 != (char *)(a1 + 520) )
    free(v7);
  v8 = *(void **)(a1 + 456);
  if ( v8 != (void *)(a1 + 472) )
    free(v8);
  operator delete();
  operator delete();
  operator delete();
  v9 = *(void ***)(a1 + 32);
  v10 = &v9[4 * *(unsigned int *)(a1 + 40)];
  if ( v9 != v10 )
  {
    do
    {
      while ( 1 )
      {
        v10 -= 4;
        if ( *v10 == v10 + 2 )
          break;
        operator delete(*v10);
        if ( v9 == v10 )
          goto LABEL_15;
      }
    }
    while ( v9 != v10 );
LABEL_15:
    v10 = *(void ***)(a1 + 32);
  }
  if ( v10 != (void **)(a1 + 48) )
    free(v10);
}

