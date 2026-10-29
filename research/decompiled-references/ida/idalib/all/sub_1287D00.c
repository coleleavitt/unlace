void __fastcall sub_1287D00(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  char *v26; // rdi
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  _QWORD *v30; // rbp
  _QWORD *v31; // rdi
  __int64 v32; // r15
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  void **v39; // r12
  void **v40; // rbp
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  char *v43; // rdi
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // r14
  _QWORD *v47; // rbp
  _QWORD *v48; // rdi
  __int64 v49; // r13
  _QWORD *v50; // rdi
  _QWORD *v51; // rdi
  _QWORD *v52; // rdi
  _QWORD *v53; // rdi

  *a1 = off_2C3E170;
  v2 = (_QWORD *)a1[490];
  if ( v2 != a1 + 492 )
    operator delete(v2);
  if ( *((_BYTE *)a1 + 3904) )
  {
    v6 = a1[453];
    v7 = v6 + ((unsigned __int64)*((unsigned int *)a1 + 908) << 6);
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
      v7 = a1[453];
    }
    if ( (_QWORD *)v7 != a1 + 455 )
      free((void *)v7);
    v9 = a1[449];
    if ( v9 )
    {
      while ( 1 )
      {
        sub_116DE00((__int64)(a1 + 447), *(_QWORD **)(v9 + 24));
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
    v12 = (_QWORD *)a1[444];
    if ( a1 + 447 != v12 )
      free(v12);
    v13 = (_QWORD *)a1[441];
    if ( a1 + 444 != v13 )
      free(v13);
    v14 = (_QWORD *)a1[438];
    if ( a1 + 441 != v14 )
      free(v14);
    v15 = (_QWORD *)a1[435];
    if ( a1 + 438 != v15 )
      free(v15);
    v16 = (_QWORD *)a1[432];
    if ( a1 + 435 != v16 )
      free(v16);
    v17 = (_QWORD *)a1[429];
    if ( a1 + 432 != v17 )
      free(v17);
    v18 = (_QWORD *)a1[426];
    if ( a1 + 429 != v18 )
      free(v18);
    v19 = (_QWORD *)a1[423];
    if ( a1 + 426 != v19 )
      free(v19);
    v20 = (_QWORD *)a1[420];
    if ( a1 + 423 != v20 )
      free(v20);
    v21 = (_QWORD *)a1[417];
    if ( a1 + 420 != v21 )
      free(v21);
    v22 = (_QWORD *)a1[414];
    if ( a1 + 417 != v22 )
      free(v22);
    v23 = (_QWORD *)a1[411];
    if ( a1 + 414 != v23 )
      free(v23);
    v24 = (_QWORD *)a1[408];
    if ( a1 + 411 != v24 )
      free(v24);
    v25 = (_QWORD *)a1[405];
    if ( a1 + 408 != v25 )
      free(v25);
    v26 = (char *)a1[402];
    if ( *((_DWORD *)a1 + 807) )
    {
      v27 = *((_DWORD *)a1 + 806);
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
            v26 = (char *)a1[402];
          }
          v28 += 8;
        }
        while ( v29 != v28 );
      }
    }
    free(v26);
    v33 = (_QWORD *)a1[399];
    if ( a1 + 402 != v33 )
      free(v33);
    v34 = (_QWORD *)a1[396];
    if ( a1 + 399 != v34 )
      free(v34);
    v35 = (_QWORD *)a1[393];
    if ( a1 + 396 != v35 )
      free(v35);
    v36 = (_QWORD *)a1[390];
    if ( a1 + 393 != v36 )
      free(v36);
    v37 = (_QWORD *)a1[387];
    if ( a1 + 390 != v37 )
      free(v37);
    v38 = (_QWORD *)a1[384];
    if ( a1 + 387 != v38 )
      free(v38);
    v39 = (void **)a1[371];
    v40 = (void **)a1[370];
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
      v40 = (void **)a1[370];
    }
    if ( v40 )
      operator delete(v40);
    v41 = (_QWORD *)a1[364];
    if ( v41 != a1 + 366 )
      operator delete(v41);
    v42 = (_QWORD *)a1[358];
    if ( v42 != a1 + 360 )
      operator delete(v42);
  }
  v3 = (_QWORD *)a1[346];
  if ( v3 != a1 + 348 )
    operator delete(v3);
  if ( *((_BYTE *)a1 + 2752) )
  {
    v43 = (char *)a1[339];
    if ( *((_DWORD *)a1 + 681) )
    {
      v44 = *((_DWORD *)a1 + 680);
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
            v43 = (char *)a1[339];
          }
          v45 += 8;
        }
        while ( v46 != v45 );
      }
    }
    free(v43);
    v50 = (_QWORD *)a1[335];
    if ( v50 != a1 + 337 )
      operator delete(v50);
    v51 = (_QWORD *)a1[331];
    if ( v51 != a1 + 333 )
      operator delete(v51);
    v52 = (_QWORD *)a1[327];
    if ( v52 != a1 + 329 )
      operator delete(v52);
    v53 = (_QWORD *)a1[323];
    if ( v53 != a1 + 325 )
      operator delete(v53);
  }
  v4 = (_QWORD *)a1[313];
  if ( v4 != a1 + 315 )
    operator delete(v4);
  v5 = (_QWORD *)a1[307];
  if ( v5 != a1 + 309 )
    operator delete(v5);
  sub_112BEE0((__int64)a1);
  operator delete(a1, 0xF98u);
}
