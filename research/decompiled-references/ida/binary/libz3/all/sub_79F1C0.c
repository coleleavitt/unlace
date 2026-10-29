__int64 __fastcall sub_79F1C0(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int *v5; // rax
  int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  int i; // ebx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rdi
  void (__fastcall ***v20)(_QWORD); // rbx
  void (__fastcall ***v21)(void *); // rbx
  bool v22; // zf
  void *v23; // rdi
  __int64 *v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // r13
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  __int64 v41; // rax
  _QWORD *v42; // r13
  void *v43; // rdi
  __int64 *v44; // rbx
  __int64 *v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 *v48; // rbx
  __int64 *v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rdi
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  void (__fastcall ***v60)(_QWORD); // rbx
  void *v61; // rdi
  _QWORD *v62; // rbx
  _QWORD *v63; // r14
  void (__fastcall ***v64)(_QWORD); // r13
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 *v67; // rbx
  __int64 *v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdi
  void *v71; // rdi
  void *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 *v80; // rbx
  __int64 *v81; // r13
  __int64 v82; // rsi
  __int64 v83; // rdi
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  void *v88; // rdi
  void *v89; // rdi
  __int64 *v90; // rbx
  __int64 *v91; // r13
  __int64 v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rax
  void *v95; // rdi
  void *v96; // rdi
  void *v97; // rdi
  __int64 v98; // rax
  _QWORD *v99; // rbx
  _QWORD *v100; // r14
  void (__fastcall ***v101)(_QWORD); // r13
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  void *v110; // rdi
  void *v111; // rbx
  __int64 *v112; // rbx
  __int64 *v113; // r13
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rax
  void *v118; // rdi
  void *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  _QWORD *v123; // rbx
  __int64 v124; // rax
  _QWORD *v125; // r12
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  void **v130; // rbx
  void **v131; // r12
  _QWORD *v132; // r12
  _QWORD *v133; // rax
  _QWORD *v134; // rbx
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  void (__fastcall *v140)(__int64, __int64, __int64); // rax
  void (__fastcall *v141)(__int64, __int64, __int64); // rax
  __int64 v142; // rax
  __int64 result; // rax

  v1 = _mm_loadl_epi64((const __m128i *)&off_1C547D0);
  *(_QWORD *)a1 = &off_1C6A700;
  *(_QWORD *)(a1 + 32) = off_1C6A900;
  *(_QWORD *)(a1 + 72) = off_1C6A9A8;
  v3 = *(_QWORD *)(a1 + 2408);
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)off_1C6A980);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 2416);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(unsigned int **)(a1 + 2136);
  if ( !v5 )
  {
    v7 = a1 + 2144;
    goto LABEL_16;
  }
  v6 = *(v5 - 1);
  v7 = a1 + 2144;
  if ( !v6 )
    goto LABEL_16;
  v8 = *(_QWORD *)(a1 + 2128);
  v9 = *v5;
  v10 = 8 * v9;
  v11 = v8 + 8 * v9;
  if ( v8 )
  {
    v12 = 8LL * *(unsigned int *)(v8 - 4);
    v13 = v8 + v12;
    if ( v10 != v12 )
      goto LABEL_9;
    *(_DWORD *)(v8 - 4) = v9;
  }
  else
  {
    v13 = 0;
    if ( v10 )
    {
      do
      {
LABEL_9:
        v14 = *(_QWORD *)(v13 - 8);
        v13 -= 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      while ( v11 != v13 );
      v15 = *(_QWORD *)(a1 + 2128);
      v5 = *(unsigned int **)(a1 + 2136);
      if ( v15 )
        *(_DWORD *)(v15 - 4) = v9;
      if ( !v5 )
        goto LABEL_14;
    }
  }
  *(v5 - 1) = 0;
LABEL_14:
  v7 = a1 + 2144;
  for ( i = 0; i != v6; ++i )
    sub_180C2E0(a1 + 2144);
LABEL_16:
  v17 = *(_QWORD *)(a1 + 2128);
  if ( v17 )
  {
    v18 = v17 + 8LL * *(unsigned int *)(v17 - 4);
    if ( v17 == v18 )
      goto LABEL_20;
    do
    {
      v19 = *(_QWORD *)(v18 - 8);
      v18 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    while ( v17 != v18 );
    v18 = *(_QWORD *)(a1 + 2128);
    if ( v18 )
LABEL_20:
      *(_DWORD *)(v18 - 4) = 0;
  }
  v20 = *(void (__fastcall ****)(_QWORD))(a1 + 8408);
  if ( v20 )
  {
    (**v20)(*(_QWORD *)(a1 + 8408));
    sub_186B220(v20);
  }
  v21 = *(void (__fastcall ****)(void *))(a1 + 8400);
  if ( v21 )
  {
    v22 = (*((_DWORD *)v21 + 4))-- == 1;
    if ( v22 )
    {
      (**v21)(v21);
      sub_186B220(v21);
    }
  }
  v23 = *(void **)(a1 + 8376);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(__int64 **)(a1 + 8368);
  if ( v24 )
  {
    v25 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 >= v25 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v26 = *v24;
        if ( *v24 )
        {
          v27 = *(_QWORD *)(a1 + 8360);
          v22 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v24 >= v25 )
          goto LABEL_35;
      }
      sub_15D7BC0(v27, v26);
      ++v24;
    }
    while ( v24 < v25 );
LABEL_35:
    v24 = *(__int64 **)(a1 + 8368);
    if ( v24 )
LABEL_36:
      sub_186B220(v24 - 1);
  }
  v28 = *(_QWORD *)(a1 + 8352);
  if ( v28 )
  {
    v29 = *(unsigned int *)(v28 - 4);
    if ( (_DWORD)v29 )
    {
      v30 = v28 + 24 * v29;
      do
      {
        while ( 1 )
        {
          v31 = *(_QWORD *)(v28 + 8);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v28 + 16);
            v22 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v22 )
              break;
          }
          v28 += 24;
          if ( v28 == v30 )
            goto LABEL_44;
        }
        sub_15D7BC0(v32, v31);
        v28 += 24;
      }
      while ( v28 != v30 );
LABEL_44:
      v28 = *(_QWORD *)(a1 + 8352);
    }
    sub_186B220((void *)(v28 - 8));
  }
  v33 = *(__int64 **)(a1 + 8344);
  if ( v33 )
  {
    v34 = *((unsigned int *)v33 - 1);
    if ( (_DWORD)v34 )
    {
      v35 = &v33[4 * v34];
      do
      {
        v38 = v33[2];
        if ( v38 )
        {
          v39 = v33[3];
          v22 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v39, v38);
        }
        v36 = *v33;
        if ( *v33 )
        {
          v37 = v33[1];
          v22 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v37, v36);
        }
        v33 += 4;
      }
      while ( v33 != v35 );
      v33 = *(__int64 **)(a1 + 8344);
    }
    sub_186B220(v33 - 1);
  }
  v40 = *(_QWORD **)(a1 + 8336);
  if ( v40 )
  {
    v41 = *((unsigned int *)v40 - 1);
    if ( (_DWORD)v41 )
    {
      v42 = &v40[v41];
      do
      {
        while ( *v40 )
        {
          v43 = (void *)(*v40++ - 8LL);
          sub_186B220(v43);
          if ( v42 == v40 )
          {
            v40 = *(_QWORD **)(a1 + 8336);
            goto LABEL_64;
          }
        }
        ++v40;
      }
      while ( v40 != v42 );
      v40 = *(_QWORD **)(a1 + 8336);
    }
LABEL_64:
    sub_186B220(v40 - 1);
  }
  v44 = *(__int64 **)(a1 + 8328);
  if ( v44 )
  {
    v45 = &v44[*((unsigned int *)v44 - 1)];
    if ( v44 >= v45 )
      goto LABEL_73;
    do
    {
      while ( 1 )
      {
        v46 = *v44;
        if ( *v44 )
        {
          v47 = *(_QWORD *)(a1 + 8320);
          v22 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v44 >= v45 )
          goto LABEL_72;
      }
      sub_15D7BC0(v47, v46);
      ++v44;
    }
    while ( v44 < v45 );
LABEL_72:
    v44 = *(__int64 **)(a1 + 8328);
    if ( v44 )
LABEL_73:
      sub_186B220(v44 - 1);
  }
  v48 = *(__int64 **)(a1 + 8312);
  if ( v48 )
  {
    v49 = &v48[*((unsigned int *)v48 - 1)];
    if ( v48 >= v49 )
      goto LABEL_82;
    do
    {
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          v51 = *(_QWORD *)(a1 + 8304);
          v22 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v48 >= v49 )
          goto LABEL_81;
      }
      sub_15D7BC0(v51, v50);
      ++v48;
    }
    while ( v48 < v49 );
LABEL_81:
    v48 = *(__int64 **)(a1 + 8312);
    if ( v48 )
LABEL_82:
      sub_186B220(v48 - 1);
  }
  v52 = *(_QWORD *)(a1 + 8248);
  if ( v52 )
    sub_186B220((void *)(v52 - 8));
  v53 = *(_QWORD *)(a1 + 8240);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  v54 = *(_QWORD *)(a1 + 8232);
  if ( v54 )
    sub_186B220((void *)(v54 - 8));
  v55 = *(_QWORD *)(a1 + 8224);
  if ( v55 )
    sub_186B220((void *)(v55 - 8));
  v56 = *(void **)(a1 + 0x2000);
  if ( v56 )
    sub_186B220(v56);
  v57 = *(void **)(a1 + 8168);
  if ( v57 )
    sub_186B220(v57);
  v58 = *(_QWORD *)(a1 + 8152);
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  v59 = *(_QWORD *)(a1 + 8144);
  if ( v59 )
    sub_186B220((void *)(v59 - 8));
  sub_11ECBE0(a1 + 7480);
  sub_11C05E0(a1 + 3216);
  v60 = *(void (__fastcall ****)(_QWORD))(a1 + 3200);
  if ( v60 )
  {
    (**v60)(*(_QWORD *)(a1 + 3200));
    sub_186B220(v60);
  }
  v61 = *(void **)(a1 + 3176);
  if ( v61 )
    sub_186B220(v61);
  v62 = *(_QWORD **)(a1 + 3168);
  if ( v62 )
  {
    v63 = &v62[*((unsigned int *)v62 - 1)];
    if ( v62 == v63 )
      goto LABEL_109;
    do
    {
      v64 = (void (__fastcall ***)(_QWORD))*v62;
      if ( *v62 )
      {
        (**v64)(*v62);
        sub_186B220(v64);
      }
      ++v62;
    }
    while ( v63 != v62 );
    v63 = *(_QWORD **)(a1 + 3168);
    if ( v63 )
    {
LABEL_109:
      *((_DWORD *)v63 - 1) = 0;
      sub_186B220(v63 - 1);
    }
  }
  sub_18572D0((void *)(a1 + 3152));
  v65 = *(_QWORD *)(a1 + 3128);
  if ( v65 )
    sub_186B220((void *)(v65 - 8));
  v66 = *(_QWORD *)(a1 + 3064);
  if ( v66 )
    sub_186B220((void *)(v66 - 8));
  v67 = *(__int64 **)(a1 + 3056);
  if ( v67 )
  {
    v68 = &v67[*((unsigned int *)v67 - 1)];
    if ( v67 >= v68 )
      goto LABEL_122;
    do
    {
      while ( 1 )
      {
        v69 = *v67;
        if ( *v67 )
        {
          v70 = *(_QWORD *)(a1 + 3048);
          v22 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v67 >= v68 )
          goto LABEL_121;
      }
      sub_15D7BC0(v70, v69);
      ++v67;
    }
    while ( v67 < v68 );
LABEL_121:
    v67 = *(__int64 **)(a1 + 3056);
    if ( v67 )
LABEL_122:
      sub_186B220(v67 - 1);
  }
  v71 = *(void **)(a1 + 3040);
  *(_QWORD *)(a1 + 2992) = &off_1C62200;
  if ( v71 )
    sub_186B220(v71);
  v72 = *(void **)(a1 + 3016);
  if ( v72 )
    sub_186B220(v72);
  v73 = *(_QWORD *)(a1 + 2984);
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  v74 = *(_QWORD *)(a1 + 2976);
  if ( v74 )
    sub_186B220((void *)(v74 - 8));
  v75 = *(_QWORD *)(a1 + 2968);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  v76 = *(_QWORD *)(a1 + 2960);
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  v77 = *(_QWORD *)(a1 + 2952);
  if ( v77 )
    sub_186B220((void *)(v77 - 8));
  v78 = *(_QWORD *)(a1 + 2944);
  if ( v78 )
    sub_186B220((void *)(v78 - 8));
  v79 = *(_QWORD *)(a1 + 2928);
  if ( v79 )
    sub_186B220((void *)(v79 - 8));
  v80 = *(__int64 **)(a1 + 2920);
  if ( v80 )
  {
    v81 = &v80[*((unsigned int *)v80 - 1)];
    if ( v80 >= v81 )
      goto LABEL_149;
    do
    {
      while ( 1 )
      {
        v82 = *v80;
        if ( *v80 )
        {
          v83 = *(_QWORD *)(a1 + 2912);
          v22 = (*(_DWORD *)(v82 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v80 >= v81 )
          goto LABEL_148;
      }
      sub_15D7BC0(v83, v82);
      ++v80;
    }
    while ( v80 < v81 );
LABEL_148:
    v80 = *(__int64 **)(a1 + 2920);
    if ( v80 )
LABEL_149:
      sub_186B220(v80 - 1);
  }
  v84 = *(void **)(a1 + 2904);
  if ( v84 )
    sub_186B220(v84);
  v85 = *(_QWORD *)(a1 + 2880);
  if ( v85 )
    sub_186B220((void *)(v85 - 8));
  v86 = *(_QWORD *)(a1 + 2864);
  if ( v86 )
    sub_186B220((void *)(v86 - 8));
  v87 = *(_QWORD *)(a1 + 2848);
  if ( v87 )
    sub_186B220((void *)(v87 - 8));
  v88 = *(void **)(a1 + 2824);
  *(_QWORD *)(a1 + 2464) = &off_1C63D10;
  if ( v88 )
    sub_186B220(v88);
  v89 = *(void **)(a1 + 2816);
  if ( v89 )
    sub_186B220(v89);
  v90 = *(__int64 **)(a1 + 2744);
  if ( v90 )
  {
    v91 = &v90[*((unsigned int *)v90 - 1)];
    if ( v90 >= v91 )
      goto LABEL_170;
    do
    {
      while ( 1 )
      {
        v92 = *v90;
        if ( *v90 )
        {
          v93 = *(_QWORD *)(a1 + 2736);
          v22 = (*(_DWORD *)(v92 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v90 >= v91 )
          goto LABEL_169;
      }
      sub_15D7BC0(v93, v92);
      ++v90;
    }
    while ( v90 < v91 );
LABEL_169:
    v90 = *(__int64 **)(a1 + 2744);
    if ( v90 )
LABEL_170:
      sub_186B220(v90 - 1);
  }
  v94 = *(_QWORD *)(a1 + 2728);
  if ( v94 )
    sub_186B220((void *)(v94 - 8));
  v95 = *(void **)(a1 + 2496);
  *(_QWORD *)(a1 + 2464) = qword_1C7A350;
  if ( v95 )
    sub_186B220(v95);
  v96 = *(void **)(a1 + 2472);
  if ( v96 )
    sub_186B220(v96);
  v97 = *(void **)(a1 + 2440);
  if ( v97 )
    sub_186B220(v97);
  v98 = *(_QWORD *)(a1 + 2400);
  if ( v98 )
    sub_186B220((void *)(v98 - 8));
  v99 = *(_QWORD **)(a1 + 2392);
  if ( v99 )
  {
    v100 = &v99[*((unsigned int *)v99 - 1)];
    if ( v99 == v100 )
      goto LABEL_187;
    do
    {
      v101 = (void (__fastcall ***)(_QWORD))*v99;
      if ( *v99 )
      {
        (**v101)(*v99);
        sub_186B220(v101);
      }
      ++v99;
    }
    while ( v100 != v99 );
    v100 = *(_QWORD **)(a1 + 2392);
    if ( v100 )
    {
LABEL_187:
      *((_DWORD *)v100 - 1) = 0;
      sub_186B220(v100 - 1);
    }
  }
  v102 = *(_QWORD *)(a1 + 2384);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  v103 = *(_QWORD *)(a1 + 2376);
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  v104 = *(_QWORD *)(a1 + 2360);
  if ( v104 )
    sub_186B220((void *)(v104 - 8));
  v105 = *(_QWORD *)(a1 + 2352);
  if ( v105 )
    sub_186B220((void *)(v105 - 8));
  v106 = *(_QWORD *)(a1 + 2344);
  if ( v106 )
    sub_186B220((void *)(v106 - 8));
  v107 = *(_QWORD *)(a1 + 2336);
  if ( v107 )
    sub_186B220((void *)(v107 - 8));
  v108 = *(_QWORD *)(a1 + 2328);
  if ( v108 )
    sub_186B220((void *)(v108 - 8));
  v109 = *(_QWORD *)(a1 + 2320);
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  v110 = *(void **)(a1 + 2288);
  if ( v110 != (void *)(a1 + 2304) )
    operator delete(v110, *(_QWORD *)(a1 + 2304) + 1LL);
  v111 = *(void **)(a1 + 2248);
  if ( v111 )
  {
    sub_7F3C30(*(_QWORD *)(a1 + 2248));
    sub_186B220(v111);
  }
  v112 = *(__int64 **)(a1 + 2216);
  if ( v112 )
  {
    v113 = &v112[*((unsigned int *)v112 - 1)];
    if ( v112 >= v113 )
      goto LABEL_216;
    do
    {
      while ( 1 )
      {
        v114 = *v112;
        if ( *v112 )
        {
          v115 = *(_QWORD *)(a1 + 2208);
          v22 = (*(_DWORD *)(v114 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v112 >= v113 )
          goto LABEL_215;
      }
      sub_15D7BC0(v115, v114);
      ++v112;
    }
    while ( v112 < v113 );
LABEL_215:
    v112 = *(__int64 **)(a1 + 2216);
    if ( v112 )
LABEL_216:
      sub_186B220(v112 - 1);
  }
  sub_14B63F0(a1 + 2192);
  sub_180C0E0(v7);
  v116 = *(_QWORD *)(a1 + 2136);
  if ( v116 )
    sub_186B220((void *)(v116 - 8));
  v117 = *(_QWORD *)(a1 + 2128);
  if ( v117 )
    sub_186B220((void *)(v117 - 8));
  sub_13D37B0(a1 + 1592);
  v118 = *(void **)(a1 + 968);
  if ( v118 != (void *)(a1 + 984) )
    operator delete(v118, *(_QWORD *)(a1 + 984) + 1LL);
  v119 = *(void **)(a1 + 936);
  if ( v119 != (void *)(a1 + 952) )
    operator delete(v119, *(_QWORD *)(a1 + 952) + 1LL);
  v120 = *(_QWORD *)(a1 + 824);
  if ( v120 )
    sub_186B220((void *)(v120 - 8));
  v121 = *(_QWORD *)(a1 + 816);
  if ( v121 )
    sub_186B220((void *)(v121 - 8));
  v122 = *(_QWORD *)(a1 + 808);
  if ( v122 )
    sub_186B220((void *)(v122 - 8));
  v123 = *(_QWORD **)(a1 + 792);
  if ( v123 )
  {
    v124 = *((unsigned int *)v123 - 1);
    if ( (_DWORD)v124 )
    {
      v125 = &v123[v124];
      do
      {
        while ( *v123 )
        {
          v126 = (void *)(*v123++ - 8LL);
          sub_186B220(v126);
          if ( v125 == v123 )
          {
            v123 = *(_QWORD **)(a1 + 792);
            goto LABEL_237;
          }
        }
        ++v123;
      }
      while ( v123 != v125 );
      v123 = *(_QWORD **)(a1 + 792);
    }
LABEL_237:
    sub_186B220(v123 - 1);
  }
  v127 = *(_QWORD *)(a1 + 784);
  if ( v127 )
    sub_186B220((void *)(v127 - 8));
  v128 = *(_QWORD *)(a1 + 776);
  if ( v128 )
    sub_186B220((void *)(v128 - 8));
  v129 = *(_QWORD *)(a1 + 768);
  if ( v129 )
    sub_186B220((void *)(v129 - 8));
  v130 = *(void ***)(a1 + 224);
  if ( v130 )
  {
    v131 = &v130[*((unsigned int *)v130 - 1)];
    if ( v130 == v131 )
      goto LABEL_250;
    do
    {
      if ( *v130 )
        sub_186B220(*v130);
      ++v130;
    }
    while ( v131 != v130 );
    v131 = *(void ***)(a1 + 224);
    if ( v131 )
LABEL_250:
      *((_DWORD *)v131 - 1) = 0;
  }
  v132 = (_QWORD *)(a1 + 240);
  v133 = (_QWORD *)(a1 + 240);
  do
  {
    if ( *v133 )
      *(_DWORD *)(*v133 - 4LL) = 0;
    ++v133;
  }
  while ( v133 != (_QWORD *)(a1 + 760) );
  *(_QWORD *)(a1 + 216) = 0;
  v134 = v133;
  *(_QWORD *)(a1 + 232) = 0;
  do
  {
    while ( 1 )
    {
      v135 = *--v134;
      if ( !v135 )
        break;
      sub_186B220((void *)(v135 - 8));
      if ( v134 == v132 )
        goto LABEL_258;
    }
  }
  while ( v134 != v132 );
LABEL_258:
  v136 = *(_QWORD *)(a1 + 224);
  if ( v136 )
    sub_186B220((void *)(v136 - 8));
  v137 = *(_QWORD *)(a1 + 200);
  if ( v137 )
    sub_186B220((void *)(v137 - 8));
  v138 = *(_QWORD *)(a1 + 184);
  if ( v138 )
    sub_186B220((void *)(v138 - 8));
  v139 = *(_QWORD *)(a1 + 176);
  if ( v139 )
    sub_186B220((void *)(v139 - 8));
  v140 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 128);
  if ( v140 )
    v140(a1 + 112, a1 + 112, 3);
  v141 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 96);
  if ( v141 )
    v141(a1 + 80, a1 + 80, 3);
  *(_QWORD *)(a1 + 32) = off_1C6A6A8;
  v142 = *(_QWORD *)(a1 + 48);
  if ( v142 )
    sub_186B220((void *)(v142 - 8));
  result = *(_QWORD *)(a1 + 40);
  if ( result )
    return sub_186B220((void *)(result - 8));
  return result;
}

