void __fastcall sub_11F0AD0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // r12
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void **v29; // r12
  void **v30; // rbp
  void *v31; // rdi
  void *v32; // rdi
  int v33; // eax
  __int64 v34; // r12
  __int64 v35; // r14
  _QWORD *v36; // rbp
  _QWORD *v37; // rdi
  __int64 v38; // r15

  v2 = *(_QWORD *)(a1 + 792);
  v3 = v2 + ((unsigned __int64)*(unsigned int *)(a1 + 800) << 6);
  if ( v2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v3 -= 64;
        v4 = *(void **)(v3 + 32);
        if ( v4 != (void *)(v3 + 48) )
          operator delete(v4);
        if ( *(_QWORD *)v3 == v3 + 24 )
          break;
        free(*(void **)v3);
        if ( v2 == v3 )
          goto LABEL_6;
      }
    }
    while ( v2 != v3 );
LABEL_6:
    v3 = *(_QWORD *)(a1 + 792);
  }
  if ( v3 != a1 + 808 )
    free((void *)v3);
  v5 = *(_QWORD *)(a1 + 760);
  if ( v5 )
  {
    while ( 1 )
    {
      sub_116DE00(a1 + 744, *(_QWORD **)(v5 + 24));
      v6 = *(void **)(v5 + 40);
      v7 = *(_QWORD *)(v5 + 16);
      if ( v6 == (void *)(v5 + 56) )
      {
        operator delete((void *)v5);
        if ( !v7 )
          break;
      }
      else
      {
        operator delete(v6);
        operator delete((void *)v5);
        if ( !v7 )
          break;
      }
      v5 = v7;
    }
  }
  v8 = *(void **)(a1 + 720);
  if ( (void *)(a1 + 744) != v8 )
    free(v8);
  v9 = *(void **)(a1 + 696);
  if ( (void *)(a1 + 720) != v9 )
    free(v9);
  v10 = *(void **)(a1 + 672);
  if ( (void *)(a1 + 696) != v10 )
    free(v10);
  v11 = *(void **)(a1 + 648);
  if ( (void *)(a1 + 672) != v11 )
    free(v11);
  v12 = *(void **)(a1 + 624);
  if ( (void *)(a1 + 648) != v12 )
    free(v12);
  v13 = *(void **)(a1 + 600);
  if ( (void *)(a1 + 624) != v13 )
    free(v13);
  v14 = *(void **)(a1 + 576);
  if ( (void *)(a1 + 600) != v14 )
    free(v14);
  v15 = *(void **)(a1 + 552);
  if ( (void *)(a1 + 576) != v15 )
    free(v15);
  v16 = *(void **)(a1 + 528);
  if ( (void *)(a1 + 552) != v16 )
    free(v16);
  v17 = *(void **)(a1 + 504);
  if ( (void *)(a1 + 528) != v17 )
    free(v17);
  v18 = *(void **)(a1 + 480);
  if ( (void *)(a1 + 504) != v18 )
    free(v18);
  v19 = *(void **)(a1 + 456);
  if ( (void *)(a1 + 480) != v19 )
    free(v19);
  v20 = *(void **)(a1 + 432);
  if ( (void *)(a1 + 456) != v20 )
    free(v20);
  v21 = *(void **)(a1 + 408);
  if ( (void *)(a1 + 432) != v21 )
    free(v21);
  v22 = *(char **)(a1 + 384);
  if ( *(_DWORD *)(a1 + 396) )
  {
    v33 = *(_DWORD *)(a1 + 392);
    if ( v33 )
    {
      v34 = 0;
      v35 = 8LL * (unsigned int)(v33 - 1) + 8;
      do
      {
        v36 = *(_QWORD **)&v22[v34];
        if ( v36 != (_QWORD *)-8LL && v36 )
        {
          v37 = (_QWORD *)v36[1];
          v38 = *v36 + 41LL;
          if ( v37 != v36 + 3 )
            operator delete(v37);
          operator delete(v36, v38, 8);
          v22 = *(char **)(a1 + 384);
        }
        v34 += 8;
      }
      while ( v35 != v34 );
    }
  }
  free(v22);
  v23 = *(void **)(a1 + 360);
  if ( (void *)(a1 + 384) != v23 )
    free(v23);
  v24 = *(void **)(a1 + 336);
  if ( (void *)(a1 + 360) != v24 )
    free(v24);
  v25 = *(void **)(a1 + 312);
  if ( (void *)(a1 + 336) != v25 )
    free(v25);
  v26 = *(void **)(a1 + 288);
  if ( (void *)(a1 + 312) != v26 )
    free(v26);
  v27 = *(void **)(a1 + 264);
  if ( (void *)(a1 + 288) != v27 )
    free(v27);
  v28 = *(void **)(a1 + 240);
  if ( (void *)(a1 + 264) != v28 )
    free(v28);
  v29 = *(void ***)(a1 + 136);
  v30 = *(void ***)(a1 + 128);
  if ( v29 != v30 )
  {
    do
    {
      while ( *v30 != v30 + 2 )
      {
        operator delete(*v30);
        v30 += 4;
        if ( v30 == v29 )
          goto LABEL_60;
      }
      v30 += 4;
    }
    while ( v29 != v30 );
LABEL_60:
    v30 = *(void ***)(a1 + 128);
  }
  if ( v30 )
    operator delete(v30);
  v31 = *(void **)(a1 + 80);
  if ( v31 != (void *)(a1 + 96) )
    operator delete(v31);
  v32 = *(void **)(a1 + 32);
  if ( v32 != (void *)(a1 + 48) )
    operator delete(v32);
}
