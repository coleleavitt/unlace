__int64 __fastcall sub_641650(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rbx
  void *v18; // rdi

  v2 = *(unsigned int *)(a1 + 520);
  v3 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)a1 = &off_49F4B28;
  v4 = v3 + (v2 << 7);
  if ( v3 != v4 )
  {
    do
    {
      v4 -= 128;
      v5 = *(void **)(v4 + 96);
      if ( v5 != (void *)(v4 + 112) )
        operator delete(v5, *(_QWORD *)(v4 + 112) + 1LL);
      v6 = *(void **)(v4 + 64);
      if ( v6 != (void *)(v4 + 80) )
        operator delete(v6, *(_QWORD *)(v4 + 80) + 1LL);
      v7 = *(void **)(v4 + 32);
      if ( v7 != (void *)(v4 + 48) )
        operator delete(v7, *(_QWORD *)(v4 + 48) + 1LL);
      if ( *(_QWORD *)v4 != v4 + 16 )
        operator delete(*(void **)v4, *(_QWORD *)(v4 + 16) + 1LL);
    }
    while ( v3 != v4 );
    v4 = *(_QWORD *)(a1 + 512);
  }
  if ( v4 != a1 + 528 )
    free((void *)v4);
  v8 = *(_QWORD *)(a1 + 416);
  v9 = v8 + 80LL * *(unsigned int *)(a1 + 424);
  if ( v8 != v9 )
  {
    do
    {
      v9 -= 80;
      v10 = *(void **)(v9 + 32);
      if ( v10 != (void *)(v9 + 48) )
        operator delete(v10, *(_QWORD *)(v9 + 48) + 1LL);
      if ( *(_QWORD *)v9 != v9 + 16 )
        operator delete(*(void **)v9, *(_QWORD *)(v9 + 16) + 1LL);
    }
    while ( v8 != v9 );
    v9 = *(_QWORD *)(a1 + 416);
  }
  if ( v9 != a1 + 432 )
    free((void *)v9);
  v11 = *(_QWORD *)(a1 + 400);
  v12 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)a1 = &off_4992FC8;
  if ( v11 != v12 )
  {
    do
    {
      v13 = *(void **)(v12 + 40);
      if ( v13 != (void *)(v12 + 56) )
        operator delete(v13, *(_QWORD *)(v12 + 56) + 1LL);
      if ( *(_QWORD *)v12 != v12 + 16 )
        operator delete(*(void **)v12, *(_QWORD *)(v12 + 16) + 1LL);
      v12 += 80;
    }
    while ( v11 != v12 );
    v12 = *(_QWORD *)(a1 + 392);
  }
  if ( v12 )
    operator delete((void *)v12, *(_QWORD *)(a1 + 408) - v12);
  v14 = *(_QWORD *)(a1 + 376);
  v15 = *(_QWORD *)(a1 + 368);
  if ( v14 != v15 )
  {
    do
    {
      v16 = *(_QWORD *)(v15 + 40);
      v17 = *(_QWORD *)(v15 + 32);
      if ( v16 != v17 )
      {
        do
        {
          v18 = *(void **)(v17 + 40);
          if ( v18 != (void *)(v17 + 56) )
            operator delete(v18, *(_QWORD *)(v17 + 56) + 1LL);
          if ( *(_QWORD *)v17 != v17 + 16 )
            operator delete(*(void **)v17, *(_QWORD *)(v17 + 16) + 1LL);
          v17 += 80;
        }
        while ( v16 != v17 );
        v17 = *(_QWORD *)(v15 + 32);
      }
      if ( v17 )
        operator delete((void *)v17, *(_QWORD *)(v15 + 48) - v17);
      if ( *(_QWORD *)v15 != v15 + 16 )
        operator delete(*(void **)v15, *(_QWORD *)(v15 + 16) + 1LL);
      v15 += 56;
    }
    while ( v14 != v15 );
    v15 = *(_QWORD *)(a1 + 368);
  }
  if ( v15 )
    operator delete((void *)v15, *(_QWORD *)(a1 + 384) - v15);
  return sub_FC94A0(a1);
}

