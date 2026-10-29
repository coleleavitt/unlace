void __fastcall sub_A8A9B0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  char *v5; // rdi
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // rax
  void **v10; // rcx
  void **v11; // r13
  __int64 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rbp
  char *v15; // r12
  char *v16; // r14
  char *v17; // rdi
  char *v18; // rdi
  __int64 v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // rbp
  _QWORD *v29; // r12
  _QWORD *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // r12
  _QWORD *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // r15
  _DWORD *v42; // rdi
  void *v44; // rbp
  void *v45; // rbp
  __int64 v46; // rdi
  __int64 *v47; // rbp
  __int64 *v48; // r12
  __int64 i; // rax
  __int64 v50; // rdi
  unsigned int v51; // ecx
  __int64 v52; // rdi
  __int64 *v53; // rbp
  __int64 *v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rdi
  void *v57; // rdi
  void *v58; // rbp
  void *v59; // rbp
  void *v60; // rbp
  void *v61; // rdi
  void *v62; // rdi
  __int64 v63; // rsi
  _QWORD *v64; // r12
  _QWORD *v65; // rbp
  __int64 v66; // rdi
  __int64 v67; // rsi
  _QWORD *v68; // r12
  _QWORD *v69; // rbp
  __int64 v70; // rdi
  __int64 v71; // rsi
  _QWORD *v72; // r13
  _QWORD *v73; // rbp
  __int64 v74; // rdi
  void **v75; // rdi
  void **v76; // r12
  void **v77; // rdi
  __int64 v78; // rax
  _QWORD *v79; // rbp
  _QWORD *v80; // r12
  _QWORD *v81; // rdi
  char *v82; // rdi
  __int64 v83; // rsi
  _QWORD *v84; // r13
  _QWORD *v85; // rbp
  __int64 v86; // rdi
  void **v87; // rdi
  void **v88; // r12
  void **v89; // rdi
  void *v90; // rdi
  int v91; // eax
  char *v92; // rdi
  __int64 v93; // rbp
  __int64 v94; // r12
  _QWORD *v95; // rax
  void *v96; // rdi
  void *v97; // rdi
  int v98; // eax
  __int64 v99; // rbp
  __int64 v100; // r12
  _QWORD *v101; // rax
  int v102; // eax
  __int64 v103; // rbp
  __int64 v104; // r12
  _QWORD *v105; // rax
  void **v106; // [rsp+0h] [rbp-48h]
  __int64 v107; // [rsp+8h] [rbp-40h]
  __int64 v108; // [rsp+8h] [rbp-40h]

  sub_A843E0(a1);
  v2 = *(unsigned int *)(a1 + 23376);
  if ( (_DWORD)v2 )
  {
    v3 = *(_QWORD *)(a1 + 23360);
    v4 = v3 + 40 * v2;
    do
    {
      if ( *(_QWORD *)v3 && *(_QWORD *)v3 != -1 || *(_DWORD *)(v3 + 8) )
      {
        v5 = *(char **)(v3 + 16);
        if ( *(_DWORD *)(v3 + 28) )
        {
          v6 = *(_DWORD *)(v3 + 24);
          if ( v6 )
          {
            v7 = 0;
            v8 = 8LL * (unsigned int)(v6 - 1) + 8;
            do
            {
              v9 = *(_QWORD **)&v5[v7];
              if ( v9 != (_QWORD *)-8LL && v9 )
              {
                operator delete(*(_QWORD *)&v5[v7], *v9 + 9LL, 8);
                v5 = *(char **)(v3 + 16);
              }
              v7 += 8;
            }
            while ( v8 != v7 );
          }
        }
        free(v5);
      }
      v3 += 40;
    }
    while ( v4 != v3 );
    v2 = *(unsigned int *)(a1 + 23376);
  }
  operator delete(*(_QWORD *)(a1 + 23360), 40 * v2, 8);
  v10 = *(void ***)(a1 + 23312);
  v11 = &v10[*(unsigned int *)(a1 + 23320)];
  v106 = v10;
  if ( v10 != v11 )
  {
    do
    {
      v12 = (__int64 *)*--v11;
      if ( *v11 )
      {
        v13 = *v12;
        v14 = *v12 + 136LL * *((unsigned int *)v12 + 2);
        if ( *v12 != v14 )
        {
          do
          {
            while ( 1 )
            {
              v14 -= 136;
              v15 = *(char **)(v14 + 8);
              v16 = &v15[56 * *(unsigned int *)(v14 + 16)];
              if ( v15 != v16 )
              {
                do
                {
                  while ( 1 )
                  {
                    v16 -= 56;
                    v17 = *((char **)v16 + 2);
                    if ( v17 == v16 + 32 )
                      break;
                    v107 = v13;
                    free(v17);
                    v13 = v107;
                    if ( v15 == v16 )
                      goto LABEL_22;
                  }
                }
                while ( v15 != v16 );
LABEL_22:
                v15 = *(char **)(v14 + 8);
              }
              if ( v15 == (char *)(v14 + 24) )
                break;
              v108 = v13;
              free(v15);
              v13 = v108;
              if ( v108 == v14 )
                goto LABEL_25;
            }
          }
          while ( v13 != v14 );
LABEL_25:
          v14 = *v12;
        }
        if ( (__int64 *)v14 != v12 + 2 )
          free((void *)v14);
        operator delete(v12, 0x120u);
      }
    }
    while ( v106 != v11 );
    v11 = *(void ***)(a1 + 23312);
  }
  if ( v11 != (void **)(a1 + 23328) )
    free(v11);
  v18 = *(char **)(a1 + 23288);
  if ( *(_DWORD *)(a1 + 23300) )
  {
    v102 = *(_DWORD *)(a1 + 23296);
    if ( v102 )
    {
      v103 = 0;
      v104 = 8LL * (unsigned int)(v102 - 1) + 8;
      do
      {
        v105 = *(_QWORD **)&v18[v103];
        if ( v105 && v105 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v18[v103], *v105 + 25LL, 8);
          v18 = *(char **)(a1 + 23288);
        }
        v103 += 8;
      }
      while ( v104 != v103 );
    }
  }
  free(v18);
  v19 = *(_QWORD *)(a1 + 23280);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *(void **)(a1 + 23256);
  if ( v20 )
    operator delete(v20);
  v21 = *(void **)(a1 + 22976);
  if ( v21 != (void *)(a1 + 22992) )
    free(v21);
  v22 = *(_QWORD *)(a1 + 22896);
  v23 = *(unsigned int *)(a1 + 22912);
  v24 = v23 << 7;
  if ( (_DWORD)v23 )
  {
    v25 = v22 + v24;
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)v22 + 2) > 1u )
        {
          v26 = *(void **)(v22 + 16);
          if ( v26 != (void *)(v22 + 32) )
            break;
        }
        v22 += 128;
        if ( v25 == v22 )
          goto LABEL_46;
      }
      free(v26);
      v22 += 128;
    }
    while ( v25 != v22 );
LABEL_46:
    v22 = *(_QWORD *)(a1 + 22896);
    v24 = (unsigned __int64)*(unsigned int *)(a1 + 22912) << 7;
  }
  operator delete(v22, v24, 8);
  v27 = *(unsigned int *)(a1 + 22880);
  if ( (_DWORD)v27 )
  {
    v28 = *(_QWORD **)(a1 + 22864);
    v29 = &v28[7 * v27];
    do
    {
      if ( *v28 != -8192 && *v28 != -4096 )
      {
        v30 = (_QWORD *)v28[1];
        if ( v30 != v28 + 3 )
          free(v30);
      }
      v28 += 7;
    }
    while ( v29 != v28 );
    v27 = *(unsigned int *)(a1 + 22880);
  }
  operator delete(*(_QWORD *)(a1 + 22864), 56 * v27, 8);
  v31 = *(unsigned int *)(a1 + 22856);
  if ( (_DWORD)v31 )
  {
    v32 = *(_QWORD **)(a1 + 22840);
    v33 = &v32[7 * v31];
    do
    {
      if ( (unsigned __int64)(*v32 - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v34 = (_QWORD *)v32[3];
        if ( v34 != v32 + 5 )
          operator delete(v34);
      }
      v32 += 7;
    }
    while ( v33 != v32 );
    v31 = *(unsigned int *)(a1 + 22856);
  }
  operator delete(*(_QWORD *)(a1 + 22840), 56 * v31, 8);
  operator delete(*(_QWORD *)(a1 + 22816), 8LL * *(unsigned int *)(a1 + 22832), 8);
  v35 = *(void **)(a1 + 22800);
  if ( v35 != (void *)(a1 + 22816) )
    free(v35);
  operator delete(*(_QWORD *)(a1 + 22776), 8LL * *(unsigned int *)(a1 + 22792), 8);
  operator delete(*(_QWORD *)(a1 + 22752), 8LL * *(unsigned int *)(a1 + 22768), 8);
  v36 = *(void **)(a1 + 18584);
  if ( v36 != (void *)(a1 + 18600) )
    free(v36);
  operator delete(*(_QWORD *)(a1 + 18544), 16LL * *(unsigned int *)(a1 + 18560), 8);
  operator delete(*(_QWORD *)(a1 + 18520), 16LL * *(unsigned int *)(a1 + 18536), 8);
  operator delete(*(_QWORD *)(a1 + 18496), 16LL * *(unsigned int *)(a1 + 18512), 8);
  operator delete(*(_QWORD *)(a1 + 18472), 16LL * *(unsigned int *)(a1 + 18488), 8);
  operator delete(*(_QWORD *)(a1 + 18440), 16LL * *(unsigned int *)(a1 + 18456), 8);
  operator delete(*(_QWORD *)(a1 + 18416), 16LL * *(unsigned int *)(a1 + 18432), 8);
  v37 = *(unsigned int *)(a1 + 18408);
  if ( (_DWORD)v37 )
  {
    v38 = *(_QWORD *)(a1 + 18392);
    v39 = v38 + 56 * v37;
    do
    {
      while ( 1 )
      {
        if ( (unsigned int)(*(_DWORD *)v38 + 1) > 1 )
        {
          v40 = *(_QWORD *)(v38 + 24);
          if ( v40 )
            break;
        }
        v38 += 56;
        if ( v39 == v38 )
          goto LABEL_73;
      }
      do
      {
        sub_A8A970(v38 + 8, *(_QWORD **)(v40 + 24));
        v41 = *(_QWORD *)(v40 + 16);
        operator delete((void *)v40);
        v40 = v41;
      }
      while ( v41 );
      v38 += 56;
    }
    while ( v39 != v38 );
LABEL_73:
    v37 = *(unsigned int *)(a1 + 18408);
  }
  operator delete(*(_QWORD *)(a1 + 18392), 56 * v37, 8);
  v42 = *(_DWORD **)(a1 + 18360);
  if ( v42 )
  {
    if ( v42[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v42 + 8LL))(v42);
  }
  sub_2222F80(a1 + 18344);
  sub_2222F80(a1 + 18328);
  sub_2222F80(a1 + 17576);
  sub_2222F80(a1 + 17560);
  sub_2222F80(a1 + 17544);
  v44 = *(void **)(a1 + 17488);
  if ( v44 )
  {
    sub_BF6640(*(_QWORD *)(a1 + 17488));
    operator delete(v44, 0x18u);
  }
  v45 = *(void **)(a1 + 17480);
  if ( v45 )
  {
    sub_CE7BE0(*(_QWORD *)(a1 + 17480));
    operator delete(v45, 0x38u);
  }
  v46 = *(_QWORD *)(a1 + 17432);
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
  sub_FC7F50(a1 + 2448);
  v47 = *(__int64 **)(a1 + 2368);
  v48 = &v47[*(unsigned int *)(a1 + 2376)];
  if ( v47 != v48 )
  {
    for ( i = *(_QWORD *)(a1 + 2368); ; i = *(_QWORD *)(a1 + 2368) )
    {
      v51 = (unsigned int)(((__int64)v47 - i) >> 3) >> 7;
      if ( v51 > 0x1D )
      {
        v50 = *v47++;
        operator delete(v50, 0x40000000000LL, 16);
        if ( v48 == v47 )
          break;
      }
      else
      {
        v52 = *v47++;
        operator delete(v52, 4096LL << v51, 16);
        if ( v47 == v48 )
          break;
      }
    }
  }
  v53 = *(__int64 **)(a1 + 2416);
  v54 = &v53[2 * *(unsigned int *)(a1 + 2424)];
  if ( v53 != v54 )
  {
    do
    {
      v55 = v53[1];
      v56 = *v53;
      v53 += 2;
      operator delete(v56, v55, 16);
    }
    while ( v54 != v53 );
    v54 = *(__int64 **)(a1 + 2416);
  }
  if ( v54 != (__int64 *)(a1 + 2432) )
    free(v54);
  v57 = *(void **)(a1 + 2368);
  if ( v57 != (void *)(a1 + 2384) )
    free(v57);
  v58 = *(void **)(a1 + 2344);
  if ( v58 )
  {
    sub_FFFDE0(*(_QWORD *)(a1 + 2344));
    operator delete(v58, 0x18u);
  }
  v59 = *(void **)(a1 + 2336);
  if ( v59 )
  {
    sub_10D0FF0(*(_QWORD *)(a1 + 2336));
    operator delete(v59, 0x20u);
  }
  v60 = *(void **)(a1 + 2328);
  if ( v60 )
  {
    sub_FFFE40(*(_QWORD *)(a1 + 2328));
    operator delete(v60, 0x10u);
  }
  operator delete(*(_QWORD *)(a1 + 2224), 16LL * *(unsigned int *)(a1 + 2240), 8);
  operator delete(*(_QWORD *)(a1 + 2200), 16LL * *(unsigned int *)(a1 + 2216), 8);
  operator delete(*(_QWORD *)(a1 + 2176), 16LL * *(unsigned int *)(a1 + 2192), 8);
  operator delete(*(_QWORD *)(a1 + 2152), 16LL * *(unsigned int *)(a1 + 2168), 8);
  v61 = *(void **)(a1 + 2136);
  if ( v61 != (void *)(a1 + 2152) )
    free(v61);
  operator delete(*(_QWORD *)(a1 + 2112), 16LL * *(unsigned int *)(a1 + 2128), 8);
  v62 = *(void **)(a1 + 2096);
  if ( (void *)(a1 + 2112) != v62 )
    free(v62);
  operator delete(*(_QWORD *)(a1 + 2072), 16LL * *(unsigned int *)(a1 + 2088), 8);
  v63 = *(unsigned int *)(a1 + 2064);
  if ( (_DWORD)v63 )
  {
    v64 = *(_QWORD **)(a1 + 2048);
    v65 = &v64[2 * v63];
    do
    {
      if ( *v64 != -8192 && *v64 != -4096 )
      {
        v66 = v64[1];
        if ( v66 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
      }
      v64 += 2;
    }
    while ( v65 != v64 );
    v63 = *(unsigned int *)(a1 + 2064);
  }
  operator delete(*(_QWORD *)(a1 + 2048), 16 * v63, 8);
  v67 = *(unsigned int *)(a1 + 2040);
  if ( (_DWORD)v67 )
  {
    v68 = *(_QWORD **)(a1 + 2024);
    v69 = &v68[2 * v67];
    do
    {
      if ( *v68 != -8192 && *v68 != -4096 )
      {
        v70 = v68[1];
        if ( v70 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8LL))(v70);
      }
      v68 += 2;
    }
    while ( v69 != v68 );
    v67 = *(unsigned int *)(a1 + 2040);
  }
  operator delete(*(_QWORD *)(a1 + 2024), 16 * v67, 8);
  v71 = *(unsigned int *)(a1 + 2016);
  if ( (_DWORD)v71 )
  {
    v72 = *(_QWORD **)(a1 + 2000);
    v73 = &v72[2 * v71];
    do
    {
      if ( *v72 != -8192 && *v72 != -4096 )
      {
        v74 = v72[1];
        if ( v74 )
        {
          if ( (v74 & 4) != 0 )
          {
            v75 = (void **)(v74 & 0xFFFFFFFFFFFFFFF8LL);
            v76 = v75;
            if ( v75 )
            {
              v77 = (void **)*v75;
              if ( v77 != v76 + 2 )
                free(v77);
              operator delete(v76, 0x30u);
            }
          }
        }
      }
      v72 += 2;
    }
    while ( v73 != v72 );
    v71 = *(unsigned int *)(a1 + 2016);
  }
  operator delete(*(_QWORD *)(a1 + 2000), 16 * v71, 8);
  operator delete(*(_QWORD *)(a1 + 1976), 16LL * *(unsigned int *)(a1 + 1992), 8);
  operator delete(*(_QWORD *)(a1 + 1952), 16LL * *(unsigned int *)(a1 + 1968), 8);
  operator delete(*(_QWORD *)(a1 + 1928), 16LL * *(unsigned int *)(a1 + 1944), 8);
  operator delete(*(_QWORD *)(a1 + 1904), 16LL * *(unsigned int *)(a1 + 1920), 8);
  operator delete(*(_QWORD *)(a1 + 1880), 16LL * *(unsigned int *)(a1 + 1896), 8);
  v78 = *(unsigned int *)(a1 + 1872);
  if ( (_DWORD)v78 )
  {
    v79 = *(_QWORD **)(a1 + 1856);
    v80 = &v79[7 * v78];
    do
    {
      if ( *v79 != -8192 && *v79 != -4096 )
      {
        v81 = (_QWORD *)v79[1];
        if ( v81 != v79 + 3 )
          free(v81);
      }
      v79 += 7;
    }
    while ( v80 != v79 );
    v78 = *(unsigned int *)(a1 + 1872);
  }
  operator delete(*(_QWORD *)(a1 + 1856), 56 * v78, 8);
  operator delete(*(_QWORD *)(a1 + 1832), 16LL * *(unsigned int *)(a1 + 1848), 8);
  if ( *(_DWORD *)(a1 + 1820) )
  {
    v98 = *(_DWORD *)(a1 + 1816);
    v82 = *(char **)(a1 + 1808);
    if ( v98 )
    {
      v99 = 0;
      v100 = 8LL * (unsigned int)(v98 - 1) + 8;
      do
      {
        v101 = *(_QWORD **)&v82[v99];
        if ( v101 != (_QWORD *)-8LL && v101 )
        {
          operator delete(*(_QWORD *)&v82[v99], *v101 + 17LL, 8);
          v82 = *(char **)(a1 + 1808);
        }
        v99 += 8;
      }
      while ( v100 != v99 );
    }
  }
  else
  {
    v82 = *(char **)(a1 + 1808);
  }
  free(v82);
  operator delete(*(_QWORD *)(a1 + 1776), 16LL * *(unsigned int *)(a1 + 1792), 8);
  v83 = *(unsigned int *)(a1 + 1768);
  if ( (_DWORD)v83 )
  {
    v84 = *(_QWORD **)(a1 + 1752);
    v85 = &v84[2 * v83];
    do
    {
      if ( *v84 != -4096 && *v84 != -8192 )
      {
        v86 = v84[1];
        if ( v86 )
        {
          if ( (v86 & 4) != 0 )
          {
            v87 = (void **)(v86 & 0xFFFFFFFFFFFFFFF8LL);
            v88 = v87;
            if ( v87 )
            {
              v89 = (void **)*v87;
              if ( v89 != v88 + 2 )
                free(v89);
              operator delete(v88, 0x30u);
            }
          }
        }
      }
      v84 += 2;
    }
    while ( v85 != v84 );
    v83 = *(unsigned int *)(a1 + 1768);
  }
  operator delete(*(_QWORD *)(a1 + 1752), 16 * v83, 8);
  operator delete(*(_QWORD *)(a1 + 1728), 16LL * *(unsigned int *)(a1 + 1744), 8);
  operator delete(*(_QWORD *)(a1 + 1704), 16LL * *(unsigned int *)(a1 + 1720), 8);
  sub_2222F80(a1 + 1424);
  v90 = *(void **)(a1 + 1392);
  if ( v90 != (void *)(a1 + 1408) )
    operator delete(v90);
  operator delete(*(_QWORD *)(a1 + 1360), 8LL * *(unsigned int *)(a1 + 1376), 8);
  operator delete(*(_QWORD *)(a1 + 1336), 8LL * *(unsigned int *)(a1 + 1352), 8);
  if ( *(_DWORD *)(a1 + 1324) )
  {
    v91 = *(_DWORD *)(a1 + 1320);
    v92 = *(char **)(a1 + 1312);
    if ( v91 )
    {
      v93 = 0;
      v94 = 8LL * (unsigned int)(v91 - 1) + 8;
      do
      {
        v95 = *(_QWORD **)&v92[v93];
        if ( v95 != (_QWORD *)-8LL && v95 )
        {
          operator delete(*(_QWORD *)&v92[v93], *v95 + 17LL, 8);
          v92 = *(char **)(a1 + 1312);
        }
        v93 += 8;
      }
      while ( v93 != v94 );
    }
  }
  else
  {
    v92 = *(char **)(a1 + 1312);
  }
  free(v92);
  sub_2222F80(a1 + 1296);
  sub_2222F80(a1 + 1280);
  sub_2222F80(a1 + 1264);
  operator delete(*(_QWORD *)(a1 + 1240), 16LL * *(unsigned int *)(a1 + 1256), 8);
  operator delete(*(_QWORD *)(a1 + 1216), 16LL * *(unsigned int *)(a1 + 1232), 8);
  operator delete(*(_QWORD *)(a1 + 1192), 16LL * *(unsigned int *)(a1 + 1208), 8);
  operator delete(*(_QWORD *)(a1 + 1168), 16LL * *(unsigned int *)(a1 + 1184), 8);
  operator delete(*(_QWORD *)(a1 + 1144), 16LL * *(unsigned int *)(a1 + 1160), 8);
  operator delete(*(_QWORD *)(a1 + 1120), 24LL * *(unsigned int *)(a1 + 1136), 8);
  operator delete(*(_QWORD *)(a1 + 1096), 16LL * *(unsigned int *)(a1 + 1112), 8);
  operator delete(*(_QWORD *)(a1 + 1072), 16LL * *(unsigned int *)(a1 + 1088), 8);
  sub_2222F80(a1 + 1048);
  sub_2222F80(a1 + 1024);
  sub_2222F80(a1 + 1000);
  sub_2222F80(a1 + 976);
  sub_2222F80(a1 + 960);
  sub_2222F80(a1 + 944);
  sub_2222F80(a1 + 928);
  sub_2222F80(a1 + 912);
  sub_2222F80(a1 + 896);
  sub_2222F80(a1 + 880);
  sub_2222F80(a1 + 864);
  sub_2222F80(a1 + 840);
  sub_2222F80(a1 + 824);
  sub_2222F80(a1 + 808);
  sub_2222F80(a1 + 792);
  sub_2222F80(a1 + 776);
  sub_2222F80(a1 + 760);
  sub_A6E0E0(a1 + 736);
  operator delete(*(_QWORD *)(a1 + 736), 152LL * *(unsigned int *)(a1 + 752), 8);
  sub_2222F80(a1 + 720);
  sub_2222F80(a1 + 704);
  sub_2222F80(a1 + 688);
  sub_2222F80(a1 + 672);
  sub_2222F80(a1 + 648);
  sub_2222F80(a1 + 632);
  sub_2222F80(a1 + 616);
  sub_2222F80(a1 + 600);
  sub_2222F80(a1 + 584);
  sub_2222F80(a1 + 568);
  sub_2222F80(a1 + 544);
  sub_2222F80(a1 + 528);
  sub_2222F80(a1 + 512);
  sub_2222F80(a1 + 496);
  sub_2222F80(a1 + 480);
  sub_2222F80(a1 + 456);
  sub_2222F80(a1 + 432);
  sub_2222F80(a1 + 408);
  sub_2222F80(a1 + 384);
  sub_2222F80(a1 + 368);
  sub_2222F80(a1 + 344);
  sub_2222F80(a1 + 328);
  sub_2222F80(a1 + 304);
  sub_2222F80(a1 + 288);
  sub_2222F80(a1 + 264);
  sub_2222F80(a1 + 240);
  sub_2222F80(a1 + 216);
  v96 = *(void **)(a1 + 192);
  if ( v96 )
    operator delete(v96);
  sub_2222F80(a1 + 176);
  sub_2222F80(a1 + 152);
  sub_2222F80(a1 + 136);
  sub_2222F80(a1 + 120);
  sub_2222F80(a1 + 104);
  sub_2222F80(a1 + 88);
  sub_2222F80(a1 + 72);
  sub_2222F80(a1 + 56);
  sub_2222F80(a1 + 40);
  sub_2222F80(a1 + 24);
  v97 = *(void **)(a1 + 8);
  if ( (void *)(a1 + 24) != v97 )
    free(v97);
}
