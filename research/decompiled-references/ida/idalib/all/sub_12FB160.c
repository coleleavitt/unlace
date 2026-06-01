void __fastcall sub_12FB160(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r14
  _QWORD *v9; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // r13
  void **v12; // r12
  void **v13; // rbp
  void **v14; // r12
  void **v15; // rbp

  v2 = *(void **)(a1 + 168);
  if ( v2 != (void *)(a1 + 184) )
    operator delete(v2);
  v3 = *(void **)(a1 + 136);
  if ( v3 != (void *)(a1 + 152) )
    operator delete(v3);
  v4 = *(void **)(a1 + 104);
  if ( v4 != (void *)(a1 + 120) )
    operator delete(v4);
  v5 = *(char **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 76) )
  {
    v6 = *(_DWORD *)(a1 + 72);
    if ( v6 )
    {
      v7 = 0;
      v8 = 8LL * (unsigned int)(v6 - 1) + 8;
      do
      {
        v9 = *(_QWORD **)&v5[v7];
        if ( v9 != (_QWORD *)-8LL && v9 )
        {
          v10 = (_QWORD *)v9[1];
          v11 = *v9 + 41LL;
          if ( v10 != v9 + 3 )
            operator delete(v10);
          operator delete(v9, v11, 8);
          v5 = *(char **)(a1 + 64);
        }
        v7 += 8;
      }
      while ( v8 != v7 );
    }
  }
  free(v5);
  v12 = *(void ***)(a1 + 48);
  v13 = *(void ***)(a1 + 40);
  if ( v12 != v13 )
  {
    do
    {
      while ( *v13 != v13 + 2 )
      {
        operator delete(*v13);
        v13 += 4;
        if ( v12 == v13 )
          goto LABEL_19;
      }
      v13 += 4;
    }
    while ( v12 != v13 );
LABEL_19:
    v13 = *(void ***)(a1 + 40);
  }
  if ( v13 )
    operator delete(v13);
  v14 = *(void ***)(a1 + 24);
  v15 = *(void ***)(a1 + 16);
  if ( v14 != v15 )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 5;
        if ( v14 == v15 )
          goto LABEL_25;
      }
      v15 += 5;
    }
    while ( v14 != v15 );
LABEL_25:
    v15 = *(void ***)(a1 + 16);
  }
  if ( v15 )
    operator delete(v15);
}
