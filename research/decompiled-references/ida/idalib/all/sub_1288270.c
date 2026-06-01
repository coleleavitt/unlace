void __fastcall sub_1288270(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // r12
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
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  char *v26; // rdi
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  _QWORD *v30; // rbp
  _QWORD *v31; // rdi
  __int64 v32; // r15
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  void **v39; // r12
  void **v40; // rbp
  void *v41; // rdi
  void *v42; // rdi
  char *v43; // rdi
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // r14
  _QWORD *v47; // rbp
  _QWORD *v48; // rdi
  __int64 v49; // r13
  void *v50; // rdi
  void *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi

  *(_QWORD *)a1 = off_2C3E170;
  v2 = *(void **)(a1 + 3920);
  if ( v2 != (void *)(a1 + 3936) )
    operator delete(v2);
  if ( *(_BYTE *)(a1 + 3904) )
  {
    v6 = *(_QWORD *)(a1 + 3624);
    v7 = v6 + ((unsigned __int64)*(unsigned int *)(a1 + 3632) << 6);
    if ( v6 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 64;
          v8 = *(void **)(v7 + 32);
          if ( v8 != (void *)(v7 + 48) )
            operator delete(v8);
          if ( *(_QWORD *)v7 == v7 + 24 )
            break;
          free(*(void **)v7);
          if ( v6 == v7 )
            goto LABEL_17;
        }
      }
      while ( v6 != v7 );
LABEL_17:
      v7 = *(_QWORD *)(a1 + 3624);
    }
    if ( v7 != a1 + 3640 )
      free((void *)v7);
    v9 = *(_QWORD *)(a1 + 3592);
    if ( v9 )
    {
      while ( 1 )
      {
        sub_116DE00(a1 + 3576, *(_QWORD **)(v9 + 24));
        v10 = *(void **)(v9 + 40);
        v11 = *(_QWORD *)(v9 + 16);
        if ( v10 == (void *)(v9 + 56) )
        {
          operator delete((void *)v9);
          if ( !v11 )
            break;
        }
        else
        {
          operator delete(v10);
          operator delete((void *)v9);
          if ( !v11 )
            break;
        }
        v9 = v11;
      }
    }
    v12 = *(void **)(a1 + 3552);
    if ( (void *)(a1 + 3576) != v12 )
      free(v12);
    v13 = *(void **)(a1 + 3528);
    if ( (void *)(a1 + 3552) != v13 )
      free(v13);
    v14 = *(void **)(a1 + 3504);
    if ( (void *)(a1 + 3528) != v14 )
      free(v14);
    v15 = *(void **)(a1 + 3480);
    if ( (void *)(a1 + 3504) != v15 )
      free(v15);
    v16 = *(void **)(a1 + 3456);
    if ( (void *)(a1 + 3480) != v16 )
      free(v16);
    v17 = *(void **)(a1 + 3432);
    if ( (void *)(a1 + 3456) != v17 )
      free(v17);
    v18 = *(void **)(a1 + 3408);
    if ( (void *)(a1 + 3432) != v18 )
      free(v18);
    v19 = *(void **)(a1 + 3384);
    if ( (void *)(a1 + 3408) != v19 )
      free(v19);
    v20 = *(void **)(a1 + 3360);
    if ( (void *)(a1 + 3384) != v20 )
      free(v20);
    v21 = *(void **)(a1 + 3336);
    if ( (void *)(a1 + 3360) != v21 )
      free(v21);
    v22 = *(void **)(a1 + 3312);
    if ( (void *)(a1 + 3336) != v22 )
      free(v22);
    v23 = *(void **)(a1 + 3288);
    if ( (void *)(a1 + 3312) != v23 )
      free(v23);
    v24 = *(void **)(a1 + 3264);
    if ( (void *)(a1 + 3288) != v24 )
      free(v24);
    v25 = *(void **)(a1 + 3240);
    if ( (void *)(a1 + 3264) != v25 )
      free(v25);
    v26 = *(char **)(a1 + 3216);
    if ( *(_DWORD *)(a1 + 3228) )
    {
      v27 = *(_DWORD *)(a1 + 3224);
      if ( v27 )
      {
        v28 = 0;
        v29 = 8LL * (unsigned int)(v27 - 1) + 8;
        do
        {
          v30 = *(_QWORD **)&v26[v28];
          if ( v30 != (_QWORD *)-8LL && v30 )
          {
            v31 = (_QWORD *)v30[1];
            v32 = *v30 + 41LL;
            if ( v31 != v30 + 3 )
              operator delete(v31);
            operator delete(v30, v32, 8);
            v26 = *(char **)(a1 + 3216);
          }
          v28 += 8;
        }
        while ( v29 != v28 );
      }
    }
    free(v26);
    v33 = *(void **)(a1 + 3192);
    if ( (void *)(a1 + 3216) != v33 )
      free(v33);
    v34 = *(void **)(a1 + 3168);
    if ( (void *)(a1 + 3192) != v34 )
      free(v34);
    v35 = *(void **)(a1 + 3144);
    if ( (void *)(a1 + 3168) != v35 )
      free(v35);
    v36 = *(void **)(a1 + 3120);
    if ( (void *)(a1 + 3144) != v36 )
      free(v36);
    v37 = *(void **)(a1 + 3096);
    if ( (void *)(a1 + 3120) != v37 )
      free(v37);
    v38 = *(void **)(a1 + 3072);
    if ( (void *)(a1 + 3096) != v38 )
      free(v38);
    v39 = *(void ***)(a1 + 2968);
    v40 = *(void ***)(a1 + 2960);
    if ( v39 != v40 )
    {
      do
      {
        while ( *v40 != v40 + 2 )
        {
          operator delete(*v40);
          v40 += 4;
          if ( v40 == v39 )
            goto LABEL_79;
        }
        v40 += 4;
      }
      while ( v39 != v40 );
LABEL_79:
      v40 = *(void ***)(a1 + 2960);
    }
    if ( v40 )
      operator delete(v40);
    v41 = *(void **)(a1 + 2912);
    if ( v41 != (void *)(a1 + 2928) )
      operator delete(v41);
    v42 = *(void **)(a1 + 2864);
    if ( v42 != (void *)(a1 + 2880) )
      operator delete(v42);
  }
  v3 = *(void **)(a1 + 2768);
  if ( v3 != (void *)(a1 + 2784) )
    operator delete(v3);
  if ( *(_BYTE *)(a1 + 2752) )
  {
    v43 = *(char **)(a1 + 2712);
    if ( *(_DWORD *)(a1 + 2724) )
    {
      v44 = *(_DWORD *)(a1 + 2720);
      if ( v44 )
      {
        v45 = 0;
        v46 = 8LL * (unsigned int)(v44 - 1) + 8;
        do
        {
          v47 = *(_QWORD **)&v43[v45];
          if ( v47 != (_QWORD *)-8LL && v47 )
          {
            v48 = (_QWORD *)v47[1];
            v49 = *v47 + 41LL;
            if ( v48 != v47 + 3 )
              operator delete(v48);
            operator delete(v47, v49, 8);
            v43 = *(char **)(a1 + 2712);
          }
          v45 += 8;
        }
        while ( v46 != v45 );
      }
    }
    free(v43);
    v50 = *(void **)(a1 + 2680);
    if ( v50 != (void *)(a1 + 2696) )
      operator delete(v50);
    v51 = *(void **)(a1 + 2648);
    if ( v51 != (void *)(a1 + 2664) )
      operator delete(v51);
    v52 = *(void **)(a1 + 2616);
    if ( v52 != (void *)(a1 + 2632) )
      operator delete(v52);
    v53 = *(void **)(a1 + 2584);
    if ( v53 != (void *)(a1 + 2600) )
      operator delete(v53);
  }
  v4 = *(void **)(a1 + 2504);
  if ( v4 != (void *)(a1 + 2520) )
    operator delete(v4);
  v5 = *(void **)(a1 + 2456);
  if ( v5 != (void *)(a1 + 2472) )
    operator delete(v5);
  sub_112BEE0(a1);
}
