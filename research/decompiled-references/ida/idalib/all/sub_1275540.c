void __fastcall sub_1275540(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  void *v19; // rdi
  __int64 v20; // r12
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  char *v35; // rdi
  int v36; // eax
  __int64 v37; // r12
  __int64 v38; // r13
  _QWORD *v39; // rbp
  _QWORD *v40; // rdi
  __int64 v41; // r15
  _QWORD *v42; // rdi
  _QWORD *v43; // rdi
  _QWORD *v44; // rdi
  _QWORD *v45; // rdi
  _QWORD *v46; // rdi
  _QWORD *v47; // rdi
  void **v48; // r12
  void **v49; // rbp
  _QWORD *v50; // rdi
  _QWORD *v51; // rdi
  char *v52; // rdi
  int v53; // eax
  __int64 v54; // r12
  __int64 v55; // r14
  _QWORD *v56; // rbp
  _QWORD *v57; // rdi
  __int64 v58; // r13
  _QWORD *v59; // rdi
  _QWORD *v60; // rdi
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi

  *a1 = off_2C3DA58;
  v2 = a1[514];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[513];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = (_QWORD *)a1[509];
  if ( v4 != a1 + 511 )
    operator delete(v4);
  v5 = (_QWORD *)a1[505];
  if ( v5 != a1 + 507 )
    operator delete(v5);
  v6 = (_QWORD *)a1[501];
  if ( v6 != a1 + 503 )
    operator delete(v6);
  v7 = (_QWORD *)a1[497];
  if ( v7 != a1 + 499 )
    operator delete(v7);
  v8 = (_QWORD *)a1[493];
  if ( v8 != a1 + 495 )
    operator delete(v8);
  v9 = (_QWORD *)a1[489];
  if ( v9 != a1 + 491 )
    operator delete(v9);
  v10 = (_QWORD *)a1[483];
  if ( v10 != a1 + 485 )
    operator delete(v10);
  v11 = (_QWORD *)a1[479];
  if ( v11 != a1 + 481 )
    operator delete(v11);
  v12 = (_QWORD *)a1[475];
  if ( v12 != a1 + 477 )
    operator delete(v12);
  if ( *((_BYTE *)a1 + 3792) )
  {
    v15 = a1[439];
    v16 = v15 + ((unsigned __int64)*((unsigned int *)a1 + 880) << 6);
    if ( v15 != v16 )
    {
      do
      {
        while ( 1 )
        {
          v16 -= 64;
          v17 = *(void **)(v16 + 32);
          if ( v17 != (void *)(v16 + 48) )
            operator delete(v17);
          if ( *(_QWORD *)v16 == v16 + 24 )
            break;
          free(*(void **)v16);
          if ( v15 == v16 )
            goto LABEL_35;
        }
      }
      while ( v15 != v16 );
LABEL_35:
      v16 = a1[439];
    }
    if ( (_QWORD *)v16 != a1 + 441 )
      free((void *)v16);
    v18 = a1[435];
    if ( v18 )
    {
      while ( 1 )
      {
        sub_116DE00((__int64)(a1 + 433), *(_QWORD **)(v18 + 24));
        v19 = *(void **)(v18 + 40);
        v20 = *(_QWORD *)(v18 + 16);
        if ( v19 == (void *)(v18 + 56) )
        {
          operator delete((void *)v18);
          if ( !v20 )
            break;
        }
        else
        {
          operator delete(v19);
          operator delete((void *)v18);
          if ( !v20 )
            break;
        }
        v18 = v20;
      }
    }
    v21 = (_QWORD *)a1[430];
    if ( a1 + 433 != v21 )
      free(v21);
    v22 = (_QWORD *)a1[427];
    if ( a1 + 430 != v22 )
      free(v22);
    v23 = (_QWORD *)a1[424];
    if ( a1 + 427 != v23 )
      free(v23);
    v24 = (_QWORD *)a1[421];
    if ( a1 + 424 != v24 )
      free(v24);
    v25 = (_QWORD *)a1[418];
    if ( a1 + 421 != v25 )
      free(v25);
    v26 = (_QWORD *)a1[415];
    if ( a1 + 418 != v26 )
      free(v26);
    v27 = (_QWORD *)a1[412];
    if ( a1 + 415 != v27 )
      free(v27);
    v28 = (_QWORD *)a1[409];
    if ( a1 + 412 != v28 )
      free(v28);
    v29 = (_QWORD *)a1[406];
    if ( a1 + 409 != v29 )
      free(v29);
    v30 = (_QWORD *)a1[403];
    if ( a1 + 406 != v30 )
      free(v30);
    v31 = (_QWORD *)a1[400];
    if ( a1 + 403 != v31 )
      free(v31);
    v32 = (_QWORD *)a1[397];
    if ( a1 + 400 != v32 )
      free(v32);
    v33 = (_QWORD *)a1[394];
    if ( a1 + 397 != v33 )
      free(v33);
    v34 = (_QWORD *)a1[391];
    if ( a1 + 394 != v34 )
      free(v34);
    v35 = (char *)a1[388];
    if ( *((_DWORD *)a1 + 779) )
    {
      v36 = *((_DWORD *)a1 + 778);
      if ( v36 )
      {
        v37 = 0;
        v38 = 8LL * (unsigned int)(v36 - 1) + 8;
        do
        {
          v39 = *(_QWORD **)&v35[v37];
          if ( v39 != (_QWORD *)-8LL && v39 )
          {
            v40 = (_QWORD *)v39[1];
            v41 = *v39 + 41LL;
            if ( v40 != v39 + 3 )
              operator delete(v40);
            operator delete(v39, v41, 8);
            v35 = (char *)a1[388];
          }
          v37 += 8;
        }
        while ( v38 != v37 );
      }
    }
    free(v35);
    v42 = (_QWORD *)a1[385];
    if ( a1 + 388 != v42 )
      free(v42);
    v43 = (_QWORD *)a1[382];
    if ( a1 + 385 != v43 )
      free(v43);
    v44 = (_QWORD *)a1[379];
    if ( a1 + 382 != v44 )
      free(v44);
    v45 = (_QWORD *)a1[376];
    if ( a1 + 379 != v45 )
      free(v45);
    v46 = (_QWORD *)a1[373];
    if ( a1 + 376 != v46 )
      free(v46);
    v47 = (_QWORD *)a1[370];
    if ( a1 + 373 != v47 )
      free(v47);
    v48 = (void **)a1[357];
    v49 = (void **)a1[356];
    if ( v48 != v49 )
    {
      do
      {
        while ( *v49 != v49 + 2 )
        {
          operator delete(*v49);
          v49 += 4;
          if ( v49 == v48 )
            goto LABEL_97;
        }
        v49 += 4;
      }
      while ( v48 != v49 );
LABEL_97:
      v49 = (void **)a1[356];
    }
    if ( v49 )
      operator delete(v49);
    v50 = (_QWORD *)a1[350];
    if ( v50 != a1 + 352 )
      operator delete(v50);
    v51 = (_QWORD *)a1[344];
    if ( v51 != a1 + 346 )
      operator delete(v51);
  }
  v13 = (_QWORD *)a1[332];
  if ( v13 != a1 + 334 )
    operator delete(v13);
  if ( *((_BYTE *)a1 + 2640) )
  {
    v52 = (char *)a1[325];
    if ( *((_DWORD *)a1 + 653) )
    {
      v53 = *((_DWORD *)a1 + 652);
      if ( v53 )
      {
        v54 = 0;
        v55 = 8LL * (unsigned int)(v53 - 1) + 8;
        do
        {
          v56 = *(_QWORD **)&v52[v54];
          if ( v56 && v56 != (_QWORD *)-8LL )
          {
            v57 = (_QWORD *)v56[1];
            v58 = *v56 + 41LL;
            if ( v57 != v56 + 3 )
              operator delete(v57);
            operator delete(v56, v58, 8);
            v52 = (char *)a1[325];
          }
          v54 += 8;
        }
        while ( v55 != v54 );
      }
    }
    free(v52);
    v59 = (_QWORD *)a1[321];
    if ( v59 != a1 + 323 )
      operator delete(v59);
    v60 = (_QWORD *)a1[317];
    if ( v60 != a1 + 319 )
      operator delete(v60);
    v61 = (_QWORD *)a1[313];
    if ( v61 != a1 + 315 )
      operator delete(v61);
    v62 = (_QWORD *)a1[309];
    if ( v62 != a1 + 311 )
      operator delete(v62);
  }
  v14 = (_QWORD *)a1[299];
  if ( v14 != a1 + 301 )
    operator delete(v14);
  sub_112BEE0((__int64)a1);
  operator delete(a1, 0x1020u);
}
