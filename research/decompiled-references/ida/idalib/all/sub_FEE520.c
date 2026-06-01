void __fastcall sub_FEE520(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  void ***v5; // r14
  void ***v6; // rbp
  void ***v7; // rdi
  void **v8; // r13
  void **v9; // r12
  void **v10; // r12
  void **v11; // rbp
  void **v12; // r12
  void **v13; // rbp
  void *v14; // rdi
  void ***v15; // r14
  void ***v16; // rbp
  void **v17; // r12
  void **v18; // r13
  void *v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rbp
  void **v22; // r12
  void **v23; // r13
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void **v27; // r12
  void **v28; // rbp
  _QWORD *v29; // r12
  _QWORD *v30; // rbp
  _QWORD *v31; // rdi
  _QWORD *v32; // r12
  _QWORD *v33; // rbp
  _QWORD *v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rbp
  void *v37; // rdi
  void **v38; // r12
  void **v39; // rbp
  void *v40; // rdi
  char *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // rdi
  int v48; // eax
  __int64 v49; // rbp
  __int64 v50; // r12
  _QWORD *v51; // rax

  v1 = *(_QWORD **)(a1 + 1760);
  v3 = *(_QWORD **)(a1 + 1752);
  if ( v1 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (_QWORD *)v3[1];
        if ( v4 == v3 + 3 )
          break;
        operator delete(v4);
        v3 += 5;
        if ( v1 == v3 )
          goto LABEL_4;
      }
      v3 += 5;
    }
    while ( v1 != v3 );
LABEL_4:
    v3 = *(_QWORD **)(a1 + 1752);
  }
  if ( v3 )
    operator delete(v3);
  v5 = *(void ****)(a1 + 1736);
  v6 = *(void ****)(a1 + 1728);
  if ( v5 != v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = (void ***)v6[12];
        if ( v7 != v6 + 14 )
          operator delete(v7);
        v8 = *v6;
        v9 = &(*v6)[5 * *((unsigned int *)v6 + 2)];
        if ( *v6 != v9 )
        {
          do
          {
            while ( 1 )
            {
              v9 -= 5;
              if ( *v9 == v9 + 2 )
                break;
              operator delete(*v9);
              if ( v8 == v9 )
                goto LABEL_13;
            }
          }
          while ( v8 != v9 );
LABEL_13:
          v9 = *v6;
        }
        if ( v9 == (void **)(v6 + 2) )
          break;
        v6 += 16;
        free(v9);
        if ( v5 == v6 )
          goto LABEL_16;
      }
      v6 += 16;
    }
    while ( v5 != v6 );
LABEL_16:
    v6 = *(void ****)(a1 + 1728);
  }
  if ( v6 )
    operator delete(v6);
  v10 = *(void ***)(a1 + 1712);
  v11 = *(void ***)(a1 + 1704);
  if ( v10 != v11 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_22;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_22:
    v11 = *(void ***)(a1 + 1704);
  }
  if ( v11 )
    operator delete(v11);
  v12 = *(void ***)(a1 + 1600);
  v13 = &v12[5 * *(unsigned int *)(a1 + 1608)];
  if ( v12 != v13 )
  {
    do
    {
      while ( 1 )
      {
        v13 -= 5;
        if ( *v13 == v13 + 2 )
          break;
        operator delete(*v13);
        if ( v12 == v13 )
          goto LABEL_28;
      }
    }
    while ( v12 != v13 );
LABEL_28:
    v13 = *(void ***)(a1 + 1600);
  }
  if ( v13 != (void **)(a1 + 1616) )
    free(v13);
  v14 = *(void **)(a1 + 1568);
  if ( v14 != (void *)(a1 + 1584) )
    free(v14);
  operator delete(*(_QWORD *)(a1 + 1544), 8LL * *(unsigned int *)(a1 + 1560), 8);
  v15 = *(void ****)(a1 + 1336);
  v16 = &v15[12 * *(unsigned int *)(a1 + 1344)];
  if ( v15 != v16 )
  {
    do
    {
      while ( 1 )
      {
        v16 -= 12;
        v17 = *v16;
        v18 = &(*v16)[5 * *((unsigned int *)v16 + 2)];
        if ( *v16 != v18 )
        {
          do
          {
            while ( 1 )
            {
              v18 -= 5;
              if ( *v18 == v18 + 2 )
                break;
              operator delete(*v18);
              if ( v17 == v18 )
                goto LABEL_37;
            }
          }
          while ( v17 != v18 );
LABEL_37:
          v17 = *v16;
        }
        if ( v17 == (void **)(v16 + 2) )
          break;
        free(v17);
        if ( v15 == v16 )
          goto LABEL_40;
      }
    }
    while ( v15 != v16 );
LABEL_40:
    v16 = *(void ****)(a1 + 1336);
  }
  if ( v16 != (void ***)(a1 + 1352) )
    free(v16);
  v19 = *(void **)(a1 + 1304);
  if ( v19 != (void *)(a1 + 1320) )
    free(v19);
  v20 = *(_QWORD *)(a1 + 1064);
  v21 = v20 + 112LL * *(unsigned int *)(a1 + 1072);
  if ( v20 != v21 )
  {
    do
    {
      while ( 1 )
      {
        v21 -= 112;
        v22 = *(void ***)(v21 + 8);
        v23 = &v22[5 * *(unsigned int *)(v21 + 16)];
        if ( v22 != v23 )
        {
          do
          {
            while ( 1 )
            {
              v23 -= 5;
              if ( *v23 == v23 + 2 )
                break;
              operator delete(*v23);
              if ( v22 == v23 )
                goto LABEL_49;
            }
          }
          while ( v22 != v23 );
LABEL_49:
          v22 = *(void ***)(v21 + 8);
        }
        if ( v22 == (void **)(v21 + 24) )
          break;
        free(v22);
        if ( v20 == v21 )
          goto LABEL_52;
      }
    }
    while ( v20 != v21 );
LABEL_52:
    v21 = *(_QWORD *)(a1 + 1064);
  }
  if ( v21 != a1 + 1080 )
    free((void *)v21);
  v24 = *(void **)(a1 + 1032);
  if ( v24 != (void *)(a1 + 1048) )
    free(v24);
  v25 = *(void **)(a1 + 1000);
  if ( v25 != (void *)(a1 + 1016) )
    free(v25);
  operator delete(*(_QWORD *)(a1 + 976), 8LL * *(unsigned int *)(a1 + 992), 8);
  v26 = *(void **)(a1 + 944);
  if ( v26 != (void *)(a1 + 960) )
    free(v26);
  operator delete(*(_QWORD *)(a1 + 920), 8LL * *(unsigned int *)(a1 + 936), 8);
  v27 = *(void ***)(a1 + 800);
  v28 = &v27[5 * *(unsigned int *)(a1 + 808)];
  if ( v27 != v28 )
  {
    do
    {
      while ( 1 )
      {
        v28 -= 5;
        if ( *v28 == v28 + 2 )
          break;
        operator delete(*v28);
        if ( v27 == v28 )
          goto LABEL_64;
      }
    }
    while ( v27 != v28 );
LABEL_64:
    v28 = *(void ***)(a1 + 800);
  }
  if ( v28 != (void **)(a1 + 816) )
    free(v28);
  v29 = *(_QWORD **)(a1 + 704);
  v30 = &v29[10 * *(unsigned int *)(a1 + 712)];
  if ( v29 != v30 )
  {
    do
    {
      while ( 1 )
      {
        v30 -= 10;
        v31 = (_QWORD *)v30[1];
        if ( v31 == v30 + 3 )
          break;
        operator delete(v31);
        if ( v29 == v30 )
          goto LABEL_70;
      }
    }
    while ( v29 != v30 );
LABEL_70:
    v30 = *(_QWORD **)(a1 + 704);
  }
  if ( v30 != (_QWORD *)(a1 + 720) )
    free(v30);
  v32 = *(_QWORD **)(a1 + 608);
  v33 = &v32[10 * *(unsigned int *)(a1 + 616)];
  if ( v32 != v33 )
  {
    do
    {
      while ( 1 )
      {
        v33 -= 10;
        v34 = (_QWORD *)v33[1];
        if ( v34 == v33 + 3 )
          break;
        operator delete(v34);
        if ( v32 == v33 )
          goto LABEL_76;
      }
    }
    while ( v32 != v33 );
LABEL_76:
    v33 = *(_QWORD **)(a1 + 608);
  }
  if ( v33 != (_QWORD *)(a1 + 624) )
    free(v33);
  v35 = *(_QWORD *)(a1 + 448);
  v36 = v35 + 72LL * *(unsigned int *)(a1 + 456);
  if ( v35 != v36 )
  {
    do
    {
      while ( 1 )
      {
        v36 -= 72;
        v37 = *(void **)(v36 + 32);
        if ( v37 != (void *)(v36 + 48) )
          operator delete(v37);
        if ( *(_QWORD *)v36 == v36 + 16 )
          break;
        operator delete(*(void **)v36);
        if ( v35 == v36 )
          goto LABEL_84;
      }
    }
    while ( v35 != v36 );
LABEL_84:
    v36 = *(_QWORD *)(a1 + 448);
  }
  if ( v36 != a1 + 464 )
    free((void *)v36);
  operator delete(*(_QWORD *)(a1 + 392), 8LL * *(unsigned int *)(a1 + 408), 8);
  v38 = *(void ***)(a1 + 376);
  v39 = *(void ***)(a1 + 368);
  if ( v38 != v39 )
  {
    do
    {
      while ( *v39 != v39 + 2 )
      {
        operator delete(*v39);
        v39 += 4;
        if ( v39 == v38 )
          goto LABEL_90;
      }
      v39 += 4;
    }
    while ( v38 != v39 );
LABEL_90:
    v39 = *(void ***)(a1 + 368);
  }
  if ( v39 )
    operator delete(v39);
  v40 = *(void **)(a1 + 336);
  if ( v40 != (void *)(a1 + 352) )
    free(v40);
  operator delete(*(_QWORD *)(a1 + 312), 8LL * *(unsigned int *)(a1 + 328), 8);
  if ( *(_DWORD *)(a1 + 292) )
  {
    v48 = *(_DWORD *)(a1 + 288);
    v41 = *(char **)(a1 + 280);
    if ( v48 )
    {
      v49 = 0;
      v50 = 8LL * (unsigned int)(v48 - 1) + 8;
      do
      {
        v51 = *(_QWORD **)&v41[v49];
        if ( v51 != (_QWORD *)-8LL && v51 )
        {
          operator delete(*(_QWORD *)&v41[v49], *v51 + 17LL, 8);
          v41 = *(char **)(a1 + 280);
        }
        v49 += 8;
      }
      while ( v50 != v49 );
    }
  }
  else
  {
    v41 = *(char **)(a1 + 280);
  }
  free(v41);
  v42 = *(void **)(a1 + 256);
  if ( v42 )
    operator delete(v42);
  v43 = *(void **)(a1 + 224);
  if ( v43 != (void *)(a1 + 240) )
    operator delete(v43);
  v44 = *(void **)(a1 + 192);
  if ( v44 != (void *)(a1 + 208) )
    operator delete(v44);
  v45 = *(void **)(a1 + 160);
  if ( v45 != (void *)(a1 + 176) )
    operator delete(v45);
  v46 = *(void **)(a1 + 128);
  if ( v46 != (void *)(a1 + 144) )
    operator delete(v46);
  v47 = *(void **)(a1 + 56);
  if ( v47 != (void *)(a1 + 72) )
    operator delete(v47);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
