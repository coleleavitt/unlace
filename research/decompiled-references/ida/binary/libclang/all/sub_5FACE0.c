void __fastcall sub_5FACE0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  char *v4; // r12
  char *v5; // rbx
  char *v6; // rdi
  __int64 v7; // rsi
  void **v8; // rbx
  void **v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // rbx
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rbx
  void *v25; // rdi

  v2 = *(_QWORD *)(a1 + 624);
  v3 = *(_QWORD *)(a1 + 616);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_QWORD *)v3 != v3 + 16 )
        operator delete(*(void **)v3, *(_QWORD *)(v3 + 16) + 1LL);
      v3 += 32;
    }
    while ( v2 != v3 );
    v3 = *(_QWORD *)(a1 + 616);
  }
  if ( v3 )
    operator delete((void *)v3, *(_QWORD *)(a1 + 632) - v3);
  v4 = *(char **)(a1 + 344);
  v5 = &v4[16 * *(unsigned int *)(a1 + 352)];
  if ( v4 != v5 )
  {
    do
    {
      v6 = *((char **)v5 - 2);
      v5 -= 16;
      if ( v6 + 4096 != nullptr && v6 + 0x2000 != nullptr && v6 )
        operator delete[](v6);
    }
    while ( v4 != v5 );
    v5 = *(char **)(a1 + 344);
  }
  if ( v5 != (char *)(a1 + 360) )
    free(v5);
  v7 = *(unsigned int *)(a1 + 336);
  if ( (_DWORD)v7 )
  {
    v8 = *(void ***)(a1 + 320);
    v9 = &v8[2 * v7];
    do
    {
      v10 = *v8;
      if ( (char *)*v8 + 0x2000 != nullptr && (char *)*v8 + 4096 != nullptr && v10 )
        operator delete[](v10);
      v8 += 2;
    }
    while ( v9 != v8 );
  }
  operator delete();
  v11 = *(void **)(a1 + 264);
  if ( v11 != (void *)(a1 + 280) )
    operator delete(v11, *(_QWORD *)(a1 + 280) + 1LL);
  v12 = *(_QWORD *)(a1 + 248);
  v13 = *(_QWORD *)(a1 + 240);
  if ( v12 != v13 )
  {
    do
    {
      if ( *(_QWORD *)v13 != v13 + 16 )
        operator delete(*(void **)v13, *(_QWORD *)(v13 + 16) + 1LL);
      v13 += 32;
    }
    while ( v12 != v13 );
    v13 = *(_QWORD *)(a1 + 240);
  }
  if ( v13 )
    operator delete((void *)v13, *(_QWORD *)(a1 + 256) - v13);
  v14 = *(_QWORD *)(a1 + 208);
  while ( v14 )
  {
    v15 = (_QWORD *)v14;
    sub_5FA8C0(*(_QWORD **)(v14 + 24));
    v16 = *(_QWORD **)(v14 + 64);
    v14 = *(_QWORD *)(v14 + 16);
    if ( v16 != v15 + 10 )
      operator delete(v16, v15[10] + 1LL);
    v17 = (_QWORD *)v15[4];
    if ( v17 != v15 + 6 )
      operator delete(v17, v15[6] + 1LL);
    operator delete(v15, 0x60u);
  }
  v18 = *(void **)(a1 + 160);
  if ( v18 != (void *)(a1 + 176) )
    operator delete(v18, *(_QWORD *)(a1 + 176) + 1LL);
  v19 = *(void **)(a1 + 128);
  if ( v19 != (void *)(a1 + 144) )
    operator delete(v19, *(_QWORD *)(a1 + 144) + 1LL);
  v20 = *(void **)(a1 + 96);
  if ( v20 != (void *)(a1 + 112) )
    operator delete(v20, *(_QWORD *)(a1 + 112) + 1LL);
  v21 = *(_QWORD *)(a1 + 80);
  v22 = *(_QWORD *)(a1 + 72);
  if ( v21 != v22 )
  {
    do
    {
      if ( *(_QWORD *)v22 != v22 + 16 )
        operator delete(*(void **)v22, *(_QWORD *)(v22 + 16) + 1LL);
      v22 += 40;
    }
    while ( v21 != v22 );
    v22 = *(_QWORD *)(a1 + 72);
  }
  if ( v22 )
    operator delete((void *)v22, *(_QWORD *)(a1 + 88) - v22);
  v23 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 48);
  if ( v23 != v24 )
  {
    do
    {
      if ( *(_QWORD *)v24 != v24 + 16 )
        operator delete(*(void **)v24, *(_QWORD *)(v24 + 16) + 1LL);
      v24 += 40;
    }
    while ( v23 != v24 );
    v24 = *(_QWORD *)(a1 + 48);
  }
  if ( v24 )
    operator delete((void *)v24, *(_QWORD *)(a1 + 64) - v24);
  v25 = *(void **)(a1 + 16);
  if ( v25 != (void *)(a1 + 32) )
    operator delete(v25, *(_QWORD *)(a1 + 32) + 1LL);
}

