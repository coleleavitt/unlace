void __fastcall sub_1C25480(__int64 a1)
{
  int v2; // edx
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // r13
  int v10; // eax
  char *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r13
  _QWORD *v20; // rbp
  _QWORD *v21; // rdi
  _QWORD *v22; // r12
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  void *v27; // rdi
  _QWORD *v28; // rbx
  _QWORD *v29; // rdi

  v2 = *(_DWORD *)(a1 + 188);
  *(_QWORD *)a1 = &off_2BC7A88;
  v3 = *(char **)(a1 + 176);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 184);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          v8 = (_QWORD *)v7[1];
          v9 = *v7 + 57LL;
          if ( v8 != v7 + 3 )
            free(v8);
          operator delete(v7, v9, 8);
          v3 = *(char **)(a1 + 176);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  if ( *(_DWORD *)(a1 + 164) )
  {
    v10 = *(_DWORD *)(a1 + 160);
    v11 = *(char **)(a1 + 152);
    if ( v10 )
    {
      v12 = 0;
      v13 = 8LL * (unsigned int)(v10 - 1) + 8;
      do
      {
        v14 = *(_QWORD **)&v11[v12];
        if ( v14 != (_QWORD *)-8LL && v14 )
        {
          operator delete(*(_QWORD *)&v11[v12], *v14 + 17LL, 8);
          v11 = *(char **)(a1 + 152);
        }
        v12 += 8;
      }
      while ( v13 != v12 );
    }
  }
  else
  {
    v11 = *(char **)(a1 + 152);
  }
  free(v11);
  v15 = *(_QWORD *)(a1 + 136);
  v16 = *(_QWORD *)(a1 + 128);
  if ( v15 != v16 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *(void **)(v16 + 48);
        if ( v17 )
          operator delete(v17);
        if ( *(_QWORD *)v16 == v16 + 16 )
          break;
        operator delete(*(void **)v16);
        v16 += 72;
        if ( v15 == v16 )
          goto LABEL_22;
      }
      v16 += 72;
    }
    while ( v15 != v16 );
LABEL_22:
    v16 = *(_QWORD *)(a1 + 128);
  }
  if ( v16 )
    operator delete((void *)v16);
  v18 = *(_QWORD *)(a1 + 88);
  if ( v18 )
  {
    do
    {
      sub_1C25440(a1 + 72, *(_QWORD **)(v18 + 24));
      v19 = *(_QWORD *)(v18 + 16);
      operator delete((void *)v18);
      v18 = v19;
    }
    while ( v19 );
  }
  v20 = *(_QWORD **)(a1 + 32);
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = (_QWORD *)v20[18];
      v22 = (_QWORD *)*v20;
      if ( v21 != v20 + 20 )
        operator delete(v21);
      v23 = (_QWORD *)v20[14];
      if ( v23 != v20 + 16 )
        operator delete(v23);
      v24 = (_QWORD *)v20[10];
      if ( v24 != v20 + 12 )
        operator delete(v24);
      v25 = (_QWORD *)v20[6];
      if ( v25 == v20 + 8 )
      {
        operator delete(v20);
        if ( !v22 )
          break;
      }
      else
      {
        operator delete(v25);
        operator delete(v20);
        if ( !v22 )
          break;
      }
      v20 = v22;
    }
  }
  v26 = *(_QWORD *)(a1 + 24);
  v27 = *(void **)(a1 + 16);
  v28 = (_QWORD *)(a1 + 64);
  memset(v27, 0, 8 * v26);
  v29 = (_QWORD *)*(v28 - 6);
  *(v28 - 3) = 0;
  *(v28 - 4) = 0;
  if ( v29 != v28 )
    operator delete(v29);
}
