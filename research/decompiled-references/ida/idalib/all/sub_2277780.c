void __fastcall sub_2277780(__int64 a1)
{
  void *v2; // rdi
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r12
  bool v9; // cf
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int64 i; // rbp
  void *v13; // rdi
  _QWORD *v14; // r12
  _QWORD *v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbp
  void *v18; // rdi
  __int64 *v19; // rbp
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 *v24; // r12
  void *v25; // rdi
  _QWORD *v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  unsigned int v29; // ecx
  __int64 v30; // r12
  __int64 v31; // rcx
  unsigned __int64 v32; // r12
  unsigned __int64 j; // r15
  void **v34; // rdx
  unsigned __int64 v35; // r13
  void **v36; // rbp
  void *v37; // rdi
  char *v38; // rdi
  int v39; // edx
  __int64 v40; // rbp
  _QWORD *v41; // r9
  _QWORD *v42; // r13
  __int64 v43; // r14
  unsigned __int64 v44; // r15
  unsigned __int64 k; // rbp
  void **v46; // rdx
  unsigned __int64 v47; // r14
  void **v48; // r12
  void *v49; // rdi
  char *v50; // rdi
  int v51; // edx
  __int64 v52; // r12
  _QWORD *v53; // r8
  __int64 *v54; // rbp
  __int64 *v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 *v59; // r12
  void *v60; // rdi
  __int64 *v61; // rbp
  __int64 v62; // rdx
  __int64 *v63; // r12
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 *v66; // r12
  void *v67; // rdi
  __int64 *v68; // rbp
  __int64 v69; // rdx
  __int64 *v70; // r12
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 *v73; // r12
  void *v74; // rdi
  __int64 *v75; // rbp
  __int64 *v76; // r12
  __int64 m; // rax
  __int64 v78; // rsi
  unsigned int v79; // ecx
  __int64 v80; // rdi
  __int64 *v81; // rbp
  __int64 *v82; // r12
  __int64 v83; // rsi
  __int64 v84; // rdi
  void *v85; // rdi
  void *v86; // rbp
  void **v87; // r12
  void **v88; // rbp
  __int64 *v89; // r12
  __int64 *v90; // rbp
  __int64 *v91; // rdi
  __int64 *v92; // rax
  __int64 *v93; // rbp
  __int64 *v94; // r13
  __int64 *v95; // r12
  __int64 v96; // rsi
  unsigned int v97; // ecx
  __int64 v98; // rdi
  __int64 *v99; // rdx
  __int64 v100; // rsi
  unsigned int v101; // ecx
  __int64 *v102; // rbp
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 *v105; // rax
  __int64 *v106; // r12
  __int64 *v107; // r13
  __int64 *v108; // rbp
  __int64 v109; // rdi
  unsigned int v110; // ecx
  __int64 v111; // rdi
  __int64 *v112; // rdx
  __int64 v113; // rsi
  unsigned int v114; // ecx
  __int64 *v115; // rbp
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 *v118; // rax
  __int64 *v119; // r12
  __int64 *v120; // r13
  __int64 *v121; // rbp
  __int64 v122; // rdi
  unsigned int v123; // ecx
  __int64 v124; // rdi
  __int64 *v125; // rdx
  __int64 v126; // rsi
  unsigned int v127; // ecx
  __int64 *v128; // rbp
  __int64 v129; // rsi
  __int64 v130; // rdi
  __int64 *v131; // rax
  __int64 *v132; // r12
  __int64 *v133; // r13
  __int64 *v134; // rbp
  __int64 v135; // rdi
  unsigned int v136; // ecx
  __int64 v137; // rdi
  __int64 *v138; // rdx
  __int64 v139; // rsi
  unsigned int v140; // ecx
  __int64 *v141; // rbp
  __int64 v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // [rsp+0h] [rbp-48h] BYREF
  __int64 v145; // [rsp+8h] [rbp-40h]

  *(_QWORD *)a1 = &off_2BEBCC8;
  v2 = *(void **)(a1 + 600);
  if ( v2 != (void *)(a1 + 616) )
    free(v2);
  v3 = *(__int64 **)(a1 + 512);
  v4 = *(unsigned int *)(a1 + 520);
  v5 = &v3[v4];
  if ( v3 != v5 )
  {
    v6 = *(_QWORD *)(a1 + 512);
    while ( 1 )
    {
      v7 = (unsigned int)(((__int64)v3 - v6) >> 3) >> 7;
      v8 = 4096LL << v7;
      v9 = v7 < 0x1E;
      v10 = *v3;
      if ( !v9 )
        v8 = 0x40000000000LL;
      v11 = v10 + v8;
      if ( v10 == *(_QWORD *)(v6 + 8 * v4 - 8) )
        v11 = *(_QWORD *)(a1 + 496);
      for ( i = ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 32; i <= v11; i += 32LL )
      {
        while ( 1 )
        {
          v13 = *(void **)(i - 24);
          if ( !v13 )
            break;
          operator delete(v13);
          i += 32LL;
          if ( v11 < i )
            goto LABEL_12;
        }
      }
LABEL_12:
      if ( v5 == ++v3 )
        break;
      v6 = *(_QWORD *)(a1 + 512);
      v4 = *(unsigned int *)(a1 + 520);
    }
  }
  v14 = *(_QWORD **)(a1 + 560);
  v15 = &v14[2 * *(unsigned int *)(a1 + 568)];
  if ( v14 != v15 )
  {
    do
    {
      v16 = *v14 + v14[1];
      v17 = (*v14 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v17 += 32LL;
        if ( v16 < v17 )
          break;
        while ( 1 )
        {
          v18 = *(void **)(v17 - 24);
          if ( !v18 )
            break;
          operator delete(v18);
          v17 += 32LL;
          if ( v16 < v17 )
            goto LABEL_19;
        }
      }
LABEL_19:
      v14 += 2;
    }
    while ( v15 != v14 );
    v19 = *(__int64 **)(a1 + 560);
    v20 = &v19[2 * *(unsigned int *)(a1 + 568)];
    while ( v20 != v19 )
    {
      v21 = v19[1];
      v22 = *v19;
      v19 += 2;
      operator delete(v22, v21, 16);
    }
  }
  *(_DWORD *)(a1 + 568) = 0;
  v23 = *(unsigned int *)(a1 + 520);
  if ( !(_DWORD)v23 )
    goto LABEL_23;
  v92 = *(__int64 **)(a1 + 512);
  *(_QWORD *)(a1 + 576) = 0;
  v93 = v92 + 1;
  v94 = &v92[v23];
  v95 = v92 + 1;
  v144 = *v92 + 4096;
  *(__m128 *)(a1 + 496) = _mm_loadh_ps((const double *)&v144);
  if ( v94 != v92 + 1 )
  {
    do
    {
      v96 = 0x40000000000LL;
      v97 = (unsigned int)(v95 - v92) >> 7;
      if ( v97 <= 0x1D )
        v96 = 4096LL << v97;
      v98 = *v95++;
      operator delete(v98, v96, 16);
      v92 = *(__int64 **)(a1 + 512);
    }
    while ( v94 != v95 );
    v93 = v92 + 1;
    v95 = v92 + 1;
  }
  *(_DWORD *)(a1 + 520) = 1;
  v99 = v92;
  while ( 1 )
  {
    v100 = 0x40000000000LL;
    v101 = (unsigned int)(v92 - v99) >> 7;
    if ( v101 <= 0x1D )
      v100 = 4096LL << v101;
    operator delete(*v92, v100, 16);
    v92 = v93;
    if ( v93 == v95 )
      break;
    v99 = *(__int64 **)(a1 + 512);
    ++v93;
  }
  v102 = *(__int64 **)(a1 + 560);
  v24 = &v102[2 * *(unsigned int *)(a1 + 568)];
  if ( v102 != v24 )
  {
    do
    {
      v103 = v102[1];
      v104 = *v102;
      v102 += 2;
      operator delete(v104, v103, 16);
    }
    while ( v24 != v102 );
LABEL_23:
    v24 = *(__int64 **)(a1 + 560);
  }
  if ( v24 != (__int64 *)(a1 + 576) )
    free(v24);
  v25 = *(void **)(a1 + 512);
  if ( v25 != (void *)(a1 + 528) )
    free(v25);
  v26 = *(_QWORD **)(a1 + 416);
  v27 = *(unsigned int *)(a1 + 424);
  v144 = (__int64)&v26[v27];
  if ( v26 != (_QWORD *)v144 )
  {
    v28 = v26;
    while ( 1 )
    {
      v29 = (unsigned int)(v26 - v28) >> 7;
      v30 = 4096LL << v29;
      v9 = v29 < 0x1E;
      v31 = *v26;
      if ( !v9 )
        v30 = 0x40000000000LL;
      v32 = v31 + v30;
      if ( v31 == v28[v27 - 1] )
        v32 = *(_QWORD *)(a1 + 400);
      for ( j = ((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 240; j <= v32; j += 240LL )
      {
        v34 = *(void ***)(j - 208);
        v35 = j - 240;
        v36 = &v34[4 * *(unsigned int *)(j - 200)];
        if ( v34 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v36 -= 4;
              v37 = *v36;
              if ( *v36 == v36 + 2 )
                break;
              v145 = (__int64)v34;
              operator delete(v37);
              v34 = (void **)v145;
              if ( (void **)v145 == v36 )
                goto LABEL_38;
            }
          }
          while ( v34 != v36 );
LABEL_38:
          v36 = *(void ***)(v35 + 32);
        }
        if ( v36 != (void **)(j - 192) )
          free(v36);
        v38 = *(char **)(v35 + 8);
        if ( *(_DWORD *)(v35 + 20) )
        {
          v39 = *(_DWORD *)(v35 + 16);
          if ( v39 )
          {
            v40 = 0;
            v145 = 8LL * (unsigned int)(v39 - 1) + 8;
            do
            {
              v41 = *(_QWORD **)&v38[v40];
              if ( v41 && v41 != (_QWORD *)-8LL )
              {
                operator delete(*(_QWORD *)&v38[v40], *v41 + 33LL, 8);
                v38 = *(char **)(v35 + 8);
              }
              v40 += 8;
            }
            while ( v145 != v40 );
          }
        }
        free(v38);
      }
      if ( (_QWORD *)v144 == ++v26 )
        break;
      v28 = *(_QWORD **)(a1 + 416);
      v27 = *(unsigned int *)(a1 + 424);
    }
  }
  v42 = *(_QWORD **)(a1 + 464);
  v43 = 2LL * *(unsigned int *)(a1 + 472);
  v144 = (__int64)&v42[v43];
  if ( v42 != &v42[v43] )
  {
    do
    {
      v44 = *v42 + v42[1];
      for ( k = ((*v42 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 240; v44 >= k; k += 240LL )
      {
        v46 = *(void ***)(k - 208);
        v47 = k - 240;
        v48 = &v46[4 * *(unsigned int *)(k - 200)];
        if ( v46 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v48 -= 4;
              v49 = *v48;
              if ( *v48 == v48 + 2 )
                break;
              v145 = (__int64)v46;
              operator delete(v49);
              v46 = (void **)v145;
              if ( (void **)v145 == v48 )
                goto LABEL_58;
            }
          }
          while ( v46 != v48 );
LABEL_58:
          v48 = *(void ***)(v47 + 32);
        }
        if ( v48 != (void **)(k - 192) )
          free(v48);
        v50 = *(char **)(v47 + 8);
        if ( *(_DWORD *)(v47 + 20) )
        {
          v51 = *(_DWORD *)(v47 + 16);
          if ( v51 )
          {
            v52 = 0;
            v145 = 8LL * (unsigned int)(v51 - 1) + 8;
            do
            {
              v53 = *(_QWORD **)&v50[v52];
              if ( v53 && v53 != (_QWORD *)-8LL )
              {
                operator delete(*(_QWORD *)&v50[v52], *v53 + 33LL, 8);
                v50 = *(char **)(v47 + 8);
              }
              v52 += 8;
            }
            while ( v145 != v52 );
          }
        }
        free(v50);
      }
      v42 += 2;
    }
    while ( (_QWORD *)v144 != v42 );
    v54 = *(__int64 **)(a1 + 464);
    v55 = &v54[2 * *(unsigned int *)(a1 + 472)];
    while ( v55 != v54 )
    {
      v56 = v54[1];
      v57 = *v54;
      v54 += 2;
      operator delete(v57, v56, 16);
    }
  }
  *(_DWORD *)(a1 + 472) = 0;
  v58 = *(unsigned int *)(a1 + 424);
  if ( !(_DWORD)v58 )
    goto LABEL_73;
  v131 = *(__int64 **)(a1 + 416);
  *(_QWORD *)(a1 + 480) = 0;
  v132 = v131 + 1;
  v133 = &v131[v58];
  v134 = v131 + 1;
  v144 = *v131 + 4096;
  *(__m128 *)(a1 + 400) = _mm_loadh_ps((const double *)&v144);
  if ( v133 != v131 + 1 )
  {
    while ( 1 )
    {
      v136 = (unsigned int)(v134 - v131) >> 7;
      if ( v136 > 0x1D )
      {
        v135 = *v134++;
        operator delete(v135, 0x40000000000LL, 16);
        if ( v133 == v134 )
          goto LABEL_177;
      }
      else
      {
        v137 = *v134++;
        operator delete(v137, 4096LL << v136, 16);
        if ( v134 == v133 )
        {
LABEL_177:
          v131 = *(__int64 **)(a1 + 416);
          v132 = v131 + 1;
          v134 = v131 + 1;
          break;
        }
      }
      v131 = *(__int64 **)(a1 + 416);
    }
  }
  *(_DWORD *)(a1 + 424) = 1;
  v138 = v131;
  while ( 1 )
  {
    v139 = 0x40000000000LL;
    v140 = (unsigned int)(v131 - v138) >> 7;
    if ( v140 <= 0x1D )
      v139 = 4096LL << v140;
    operator delete(*v131, v139, 16);
    v131 = v132;
    if ( v132 == v134 )
      break;
    v138 = *(__int64 **)(a1 + 416);
    ++v132;
  }
  v141 = *(__int64 **)(a1 + 464);
  v59 = &v141[2 * *(unsigned int *)(a1 + 472)];
  if ( v141 != v59 )
  {
    do
    {
      v142 = v141[1];
      v143 = *v141;
      v141 += 2;
      operator delete(v143, v142, 16);
    }
    while ( v59 != v141 );
LABEL_73:
    v59 = *(__int64 **)(a1 + 464);
  }
  if ( v59 != (__int64 *)(a1 + 480) )
    free(v59);
  v60 = *(void **)(a1 + 416);
  if ( v60 != (void *)(a1 + 432) )
    free(v60);
  v61 = *(__int64 **)(a1 + 368);
  v62 = *(unsigned int *)(a1 + 328);
  v63 = &v61[2 * *(unsigned int *)(a1 + 376)];
  if ( v61 != v63 )
  {
    do
    {
      v64 = v61[1];
      v65 = *v61;
      v61 += 2;
      operator delete(v65, v64, 16);
    }
    while ( v63 != v61 );
    v62 = *(unsigned int *)(a1 + 328);
  }
  *(_DWORD *)(a1 + 376) = 0;
  if ( !(_DWORD)v62 )
    goto LABEL_82;
  v118 = *(__int64 **)(a1 + 320);
  *(_QWORD *)(a1 + 384) = 0;
  v119 = v118 + 1;
  v120 = &v118[v62];
  v121 = v118 + 1;
  v144 = *v118 + 4096;
  *(__m128 *)(a1 + 304) = _mm_loadh_ps((const double *)&v144);
  if ( v120 != v118 + 1 )
  {
    while ( 1 )
    {
      v123 = (unsigned int)(v121 - v118) >> 7;
      if ( v123 > 0x1D )
      {
        v122 = *v121++;
        operator delete(v122, 0x40000000000LL, 16);
        if ( v120 == v121 )
          goto LABEL_162;
      }
      else
      {
        v124 = *v121++;
        operator delete(v124, 4096LL << v123, 16);
        if ( v121 == v120 )
        {
LABEL_162:
          v118 = *(__int64 **)(a1 + 320);
          v119 = v118 + 1;
          v121 = v118 + 1;
          break;
        }
      }
      v118 = *(__int64 **)(a1 + 320);
    }
  }
  *(_DWORD *)(a1 + 328) = 1;
  v125 = v118;
  while ( 1 )
  {
    v126 = 0x40000000000LL;
    v127 = (unsigned int)(v118 - v125) >> 7;
    if ( v127 <= 0x1D )
      v126 = 4096LL << v127;
    operator delete(*v118, v126, 16);
    v118 = v119;
    if ( v119 == v121 )
      break;
    v125 = *(__int64 **)(a1 + 320);
    ++v119;
  }
  v128 = *(__int64 **)(a1 + 368);
  v66 = &v128[2 * *(unsigned int *)(a1 + 376)];
  if ( v128 != v66 )
  {
    do
    {
      v129 = v128[1];
      v130 = *v128;
      v128 += 2;
      operator delete(v130, v129, 16);
    }
    while ( v66 != v128 );
LABEL_82:
    v66 = *(__int64 **)(a1 + 368);
  }
  if ( v66 != (__int64 *)(a1 + 384) )
    free(v66);
  v67 = *(void **)(a1 + 320);
  if ( v67 != (void *)(a1 + 336) )
    free(v67);
  v68 = *(__int64 **)(a1 + 272);
  v69 = *(unsigned int *)(a1 + 232);
  v70 = &v68[2 * *(unsigned int *)(a1 + 280)];
  if ( v68 != v70 )
  {
    do
    {
      v71 = v68[1];
      v72 = *v68;
      v68 += 2;
      operator delete(v72, v71, 16);
    }
    while ( v70 != v68 );
    v69 = *(unsigned int *)(a1 + 232);
  }
  *(_DWORD *)(a1 + 280) = 0;
  if ( !(_DWORD)v69 )
    goto LABEL_91;
  v105 = *(__int64 **)(a1 + 224);
  *(_QWORD *)(a1 + 288) = 0;
  v106 = v105 + 1;
  v107 = &v105[v69];
  v108 = v105 + 1;
  v144 = *v105 + 4096;
  *(__m128 *)(a1 + 208) = _mm_loadh_ps((const double *)&v144);
  if ( v107 != v105 + 1 )
  {
    while ( 1 )
    {
      v110 = (unsigned int)(v108 - v105) >> 7;
      if ( v110 > 0x1D )
      {
        v109 = *v108++;
        operator delete(v109, 0x40000000000LL, 16);
        if ( v107 == v108 )
          goto LABEL_147;
      }
      else
      {
        v111 = *v108++;
        operator delete(v111, 4096LL << v110, 16);
        if ( v108 == v107 )
        {
LABEL_147:
          v105 = *(__int64 **)(a1 + 224);
          v106 = v105 + 1;
          v108 = v105 + 1;
          break;
        }
      }
      v105 = *(__int64 **)(a1 + 224);
    }
  }
  *(_DWORD *)(a1 + 232) = 1;
  v112 = v105;
  while ( 1 )
  {
    v113 = 0x40000000000LL;
    v114 = (unsigned int)(v105 - v112) >> 7;
    if ( v114 <= 0x1D )
      v113 = 4096LL << v114;
    operator delete(*v105, v113, 16);
    v105 = v106;
    if ( v106 == v108 )
      break;
    v112 = *(__int64 **)(a1 + 224);
    ++v106;
  }
  v115 = *(__int64 **)(a1 + 272);
  v73 = &v115[2 * *(unsigned int *)(a1 + 280)];
  if ( v115 != v73 )
  {
    do
    {
      v116 = v115[1];
      v117 = *v115;
      v115 += 2;
      operator delete(v117, v116, 16);
    }
    while ( v73 != v115 );
LABEL_91:
    v73 = *(__int64 **)(a1 + 272);
  }
  if ( v73 != (__int64 *)(a1 + 288) )
    free(v73);
  v74 = *(void **)(a1 + 224);
  if ( v74 != (void *)(a1 + 240) )
    free(v74);
  v75 = *(__int64 **)(a1 + 128);
  v76 = &v75[*(unsigned int *)(a1 + 136)];
  if ( v75 != v76 )
  {
    for ( m = *(_QWORD *)(a1 + 128); ; m = *(_QWORD *)(a1 + 128) )
    {
      v78 = 0x40000000000LL;
      v79 = (unsigned int)(((__int64)v75 - m) >> 3) >> 7;
      if ( v79 <= 0x1D )
        v78 = 4096LL << v79;
      v80 = *v75++;
      operator delete(v80, v78, 16);
      if ( v76 == v75 )
        break;
    }
  }
  v81 = *(__int64 **)(a1 + 176);
  v82 = &v81[2 * *(unsigned int *)(a1 + 184)];
  if ( v81 != v82 )
  {
    do
    {
      v83 = v81[1];
      v84 = *v81;
      v81 += 2;
      operator delete(v84, v83, 16);
    }
    while ( v82 != v81 );
    v82 = *(__int64 **)(a1 + 176);
  }
  if ( v82 != (__int64 *)(a1 + 192) )
    free(v82);
  v85 = *(void **)(a1 + 128);
  if ( v85 != (void *)(a1 + 144) )
    free(v85);
  v86 = *(void **)(a1 + 80);
  if ( v86 )
  {
    sub_2270460(*(__int64 **)(a1 + 80));
    operator delete(v86, 0x10u);
  }
  v87 = *(void ***)(a1 + 48);
  v88 = *(void ***)(a1 + 40);
  if ( v87 != v88 )
  {
    do
    {
      while ( *v88 != v88 + 2 )
      {
        operator delete(*v88);
        v88 += 4;
        if ( v87 == v88 )
          goto LABEL_114;
      }
      v88 += 4;
    }
    while ( v87 != v88 );
LABEL_114:
    v88 = *(void ***)(a1 + 40);
  }
  if ( v88 )
    operator delete(v88);
  v89 = *(__int64 **)(a1 + 24);
  v90 = *(__int64 **)(a1 + 16);
  if ( v89 != v90 )
  {
    do
    {
      v91 = v90;
      v90 += 3;
      sub_2239BD0(v91);
    }
    while ( v89 != v90 );
    v90 = *(__int64 **)(a1 + 16);
  }
  if ( v90 )
    operator delete(v90);
}
