void __fastcall sub_1088210(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void **v6; // r12
  void **v7; // rbp
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // rax
  void **v18; // r12
  void **v19; // rbp
  void **v20; // r12
  void **v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi

  v2 = *(void **)(a1 + 504);
  if ( v2 != (void *)(a1 + 520) )
    operator delete(v2);
  v3 = *(void **)(a1 + 472);
  if ( v3 != (void *)(a1 + 488) )
    operator delete(v3);
  v4 = *(void **)(a1 + 424);
  if ( v4 != (void *)(a1 + 440) )
    operator delete(v4);
  v5 = *(void **)(a1 + 368);
  if ( v5 != (void *)(a1 + 384) )
    operator delete(v5);
  v6 = *(void ***)(a1 + 336);
  v7 = *(void ***)(a1 + 328);
  if ( v6 != v7 )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v7 == v6 )
          goto LABEL_12;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_12:
    v7 = *(void ***)(a1 + 328);
  }
  if ( v7 )
    operator delete(v7);
  v8 = *(char **)(a1 + 304);
  if ( *(_DWORD *)(a1 + 316) )
  {
    v9 = *(_DWORD *)(a1 + 312);
    if ( v9 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v9 - 1) + 8;
      do
      {
        v12 = *(_QWORD *)&v8[v10];
        if ( v12 != -8 && v12 )
        {
          operator delete();
          v8 = *(char **)(a1 + 304);
        }
        v10 += 8;
      }
      while ( v11 != v10 );
    }
  }
  free(v8);
  if ( *(_DWORD *)(a1 + 292) )
  {
    v13 = *(_DWORD *)(a1 + 288);
    v14 = *(char **)(a1 + 280);
    if ( v13 )
    {
      v15 = 0;
      v16 = 8LL * (unsigned int)(v13 - 1) + 8;
      do
      {
        v17 = *(_QWORD *)&v14[v15];
        if ( v17 != -8 && v17 )
        {
          operator delete();
          v14 = *(char **)(a1 + 280);
        }
        v15 += 8;
      }
      while ( v16 != v15 );
    }
  }
  else
  {
    v14 = *(char **)(a1 + 280);
  }
  free(v14);
  v18 = *(void ***)(a1 + 264);
  v19 = *(void ***)(a1 + 256);
  if ( v18 != v19 )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_36;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_36:
    v19 = *(void ***)(a1 + 256);
  }
  if ( v19 )
    operator delete(v19);
  v20 = *(void ***)(a1 + 240);
  v21 = *(void ***)(a1 + 232);
  if ( v20 != v21 )
  {
    do
    {
      while ( *v21 != v21 + 2 )
      {
        operator delete(*v21);
        v21 += 4;
        if ( v20 == v21 )
          goto LABEL_42;
      }
      v21 += 4;
    }
    while ( v20 != v21 );
LABEL_42:
    v21 = *(void ***)(a1 + 232);
  }
  if ( v21 )
    operator delete(v21);
  v22 = *(void **)(a1 + 200);
  if ( v22 != (void *)(a1 + 216) )
    operator delete(v22);
  v23 = *(void **)(a1 + 160);
  if ( v23 != (void *)(a1 + 176) )
    operator delete(v23);
  v24 = *(void **)(a1 + 128);
  if ( v24 != (void *)(a1 + 144) )
    operator delete(v24);
  v25 = *(void **)(a1 + 96);
  if ( v25 != (void *)(a1 + 112) )
    operator delete(v25);
  v26 = *(void **)(a1 + 64);
  if ( v26 != (void *)(a1 + 80) )
    operator delete(v26);
  v27 = *(void **)(a1 + 32);
  if ( v27 != (void *)(a1 + 48) )
    operator delete(v27);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

