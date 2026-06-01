void __fastcall sub_FD6C20(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // r12
  __int64 i; // rax
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdi
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi
  _DWORD *v14; // rbp
  char *v15; // rdi
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 j; // rax
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 k; // rax
  __int64 v30; // rsi
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 *v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi
  __int64 *v41; // rbp
  __int64 v42; // rdx
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 *v46; // r12
  void *v47; // rdi
  __int64 *v48; // r14
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rdx
  unsigned int v52; // ecx
  __int64 v53; // r12
  bool v54; // cf
  __int64 v55; // rcx
  unsigned __int64 v56; // r12
  unsigned __int64 m; // rbp
  __int64 v58; // rdi
  _QWORD *v59; // r12
  _QWORD *v60; // r13
  unsigned __int64 v61; // r14
  unsigned __int64 n; // rbp
  __int64 v63; // rdi
  __int64 *v64; // rbp
  __int64 *v65; // r12
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 *v69; // r12
  void *v70; // rdi
  void *v71; // rdi
  volatile signed __int32 *v72; // rdi
  int v73; // eax
  __int64 v74; // r12
  __int64 v75; // r13
  _QWORD *v76; // rax
  __int64 *v77; // rax
  __int64 *v78; // r12
  __int64 *v79; // r13
  __int64 *v80; // rbp
  __int64 v81; // rsi
  unsigned int v82; // ecx
  __int64 v83; // rdi
  __int64 *v84; // rdx
  __int64 v85; // rsi
  unsigned int v86; // ecx
  __int64 *v87; // rbp
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 *v90; // rax
  __int64 *v91; // r12
  __int64 *v92; // r13
  __int64 *v93; // rbp
  __int64 v94; // rsi
  unsigned int v95; // ecx
  __int64 v96; // rdi
  __int64 *v97; // rdx
  __int64 v98; // rsi
  unsigned int v99; // ecx
  __int64 *v100; // rbp
  __int64 v101; // rsi
  __int64 v102; // rdi
  double v103[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 800);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *(__int64 **)(a1 + 696);
  v4 = &v3[*(unsigned int *)(a1 + 704)];
  if ( v3 != v4 )
  {
    for ( i = *(_QWORD *)(a1 + 696); ; i = *(_QWORD *)(a1 + 696) )
    {
      v6 = 0x40000000000LL;
      v7 = (unsigned int)(((__int64)v3 - i) >> 3) >> 7;
      if ( v7 <= 0x1D )
        v6 = 4096LL << v7;
      v8 = *v3++;
      operator delete(v8, v6, 16);
      if ( v4 == v3 )
        break;
    }
  }
  v9 = *(__int64 **)(a1 + 744);
  v10 = &v9[2 * *(unsigned int *)(a1 + 752)];
  if ( v9 != v10 )
  {
    do
    {
      v11 = v9[1];
      v12 = *v9;
      v9 += 2;
      operator delete(v12, v11, 16);
    }
    while ( v10 != v9 );
    v10 = *(__int64 **)(a1 + 744);
  }
  if ( v10 != (__int64 *)(a1 + 760) )
    free(v10);
  v13 = *(void **)(a1 + 696);
  if ( v13 != (void *)(a1 + 712) )
    free(v13);
  operator delete(*(_QWORD *)(a1 + 656), 24LL * *(unsigned int *)(a1 + 672), 8);
  v14 = *(_DWORD **)(a1 + 640);
  if ( v14 )
  {
    v15 = *(char **)v14;
    if ( v14[3] )
    {
      v73 = v14[2];
      if ( v73 )
      {
        v74 = 0;
        v75 = 8LL * (unsigned int)(v73 - 1) + 8;
        do
        {
          v76 = *(_QWORD **)&v15[v74];
          if ( v76 && v76 != (_QWORD *)-8LL )
          {
            operator delete(*(_QWORD *)&v15[v74], *v76 + 33LL, 8);
            v15 = *(char **)v14;
          }
          v74 += 8;
        }
        while ( v75 != v74 );
      }
    }
    free(v15);
    operator delete(v14, 0x18u);
  }
  v16 = *(__int64 **)(a1 + 560);
  v17 = &v16[*(unsigned int *)(a1 + 568)];
  if ( v16 != v17 )
  {
    for ( j = *(_QWORD *)(a1 + 560); ; j = *(_QWORD *)(a1 + 560) )
    {
      v19 = 0x40000000000LL;
      v20 = (unsigned int)(((__int64)v16 - j) >> 3) >> 7;
      if ( v20 <= 0x1D )
        v19 = 4096LL << v20;
      v21 = *v16++;
      operator delete(v21, v19, 16);
      if ( v17 == v16 )
        break;
    }
  }
  v22 = *(__int64 **)(a1 + 608);
  v23 = &v22[2 * *(unsigned int *)(a1 + 616)];
  if ( v22 != v23 )
  {
    do
    {
      v24 = v22[1];
      v25 = *v22;
      v22 += 2;
      operator delete(v25, v24, 16);
    }
    while ( v23 != v22 );
    v23 = *(__int64 **)(a1 + 608);
  }
  if ( v23 != (__int64 *)(a1 + 624) )
    free(v23);
  v26 = *(void **)(a1 + 560);
  if ( v26 != (void *)(a1 + 576) )
    free(v26);
  free(*(void **)(a1 + 520));
  v27 = *(__int64 **)(a1 + 440);
  v28 = &v27[*(unsigned int *)(a1 + 448)];
  if ( v27 != v28 )
  {
    for ( k = *(_QWORD *)(a1 + 440); ; k = *(_QWORD *)(a1 + 440) )
    {
      v30 = 0x40000000000LL;
      v31 = (unsigned int)(((__int64)v27 - k) >> 3) >> 7;
      if ( v31 <= 0x1D )
        v30 = 4096LL << v31;
      v32 = *v27++;
      operator delete(v32, v30, 16);
      if ( v28 == v27 )
        break;
    }
  }
  v33 = *(__int64 **)(a1 + 488);
  v34 = &v33[2 * *(unsigned int *)(a1 + 496)];
  if ( v33 != v34 )
  {
    do
    {
      v35 = v33[1];
      v36 = *v33;
      v33 += 2;
      operator delete(v36, v35, 16);
    }
    while ( v34 != v33 );
    v34 = *(__int64 **)(a1 + 488);
  }
  if ( v34 != (__int64 *)(a1 + 504) )
    free(v34);
  v37 = *(void **)(a1 + 440);
  if ( v37 != (void *)(a1 + 456) )
    free(v37);
  free(*(void **)(a1 + 400));
  v38 = *(void **)(a1 + 384);
  if ( (void *)(a1 + 400) != v38 )
    free(v38);
  v39 = *(void **)(a1 + 336);
  if ( v39 != (void *)(a1 + 352) )
    free(v39);
  v40 = *(void **)(a1 + 288);
  if ( v40 != (void *)(a1 + 304) )
    free(v40);
  operator delete(*(_QWORD *)(a1 + 264), 24LL * *(unsigned int *)(a1 + 280), 8);
  operator delete(*(_QWORD *)(a1 + 240), 24LL * *(unsigned int *)(a1 + 256), 8);
  v41 = *(__int64 **)(a1 + 208);
  v42 = *(unsigned int *)(a1 + 168);
  v43 = &v41[2 * *(unsigned int *)(a1 + 216)];
  if ( v41 != v43 )
  {
    do
    {
      v44 = v41[1];
      v45 = *v41;
      v41 += 2;
      operator delete(v45, v44, 16);
    }
    while ( v43 != v41 );
    v42 = *(unsigned int *)(a1 + 168);
  }
  *(_DWORD *)(a1 + 216) = 0;
  if ( !(_DWORD)v42 )
    goto LABEL_55;
  v90 = *(__int64 **)(a1 + 160);
  *(_QWORD *)(a1 + 224) = 0;
  v91 = v90 + 1;
  v92 = &v90[v42];
  v93 = v90 + 1;
  *(_QWORD *)&v103[0] = *v90 + 4096;
  *(__m128 *)(a1 + 144) = _mm_loadh_ps(v103);
  if ( v92 != v90 + 1 )
  {
    do
    {
      v94 = 0x40000000000LL;
      v95 = (unsigned int)(v93 - v90) >> 7;
      if ( v95 <= 0x1D )
        v94 = 4096LL << v95;
      v96 = *v93++;
      operator delete(v96, v94, 16);
      v90 = *(__int64 **)(a1 + 160);
    }
    while ( v92 != v93 );
    v91 = v90 + 1;
    v93 = v90 + 1;
  }
  *(_DWORD *)(a1 + 168) = 1;
  v97 = v90;
  while ( 1 )
  {
    v98 = 0x40000000000LL;
    v99 = (unsigned int)(v90 - v97) >> 7;
    if ( v99 <= 0x1D )
      v98 = 4096LL << v99;
    operator delete(*v90, v98, 16);
    v90 = v91;
    if ( v91 == v93 )
      break;
    v97 = *(__int64 **)(a1 + 160);
    ++v91;
  }
  v100 = *(__int64 **)(a1 + 208);
  v46 = &v100[2 * *(unsigned int *)(a1 + 216)];
  if ( v100 != v46 )
  {
    do
    {
      v101 = v100[1];
      v102 = *v100;
      v100 += 2;
      operator delete(v102, v101, 16);
    }
    while ( v46 != v100 );
LABEL_55:
    v46 = *(__int64 **)(a1 + 208);
  }
  if ( v46 != (__int64 *)(a1 + 224) )
    free(v46);
  v47 = *(void **)(a1 + 160);
  if ( v47 != (void *)(a1 + 176) )
    free(v47);
  v48 = *(__int64 **)(a1 + 64);
  v49 = *(unsigned int *)(a1 + 72);
  v50 = &v48[v49];
  if ( v48 != v50 )
  {
    v51 = *(_QWORD *)(a1 + 64);
    while ( 1 )
    {
      v52 = (unsigned int)(((__int64)v48 - v51) >> 3) >> 7;
      v53 = 4096LL << v52;
      v54 = v52 < 0x1E;
      v55 = *v48;
      if ( !v54 )
        v53 = 0x40000000000LL;
      v56 = v55 + v53;
      if ( v55 == *(_QWORD *)(v51 + 8 * v49 - 8) )
        v56 = *(_QWORD *)(a1 + 48);
      for ( m = ((v55 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 96; m <= v56; m += 96LL )
      {
        v58 = m - 96;
        sub_FD63F0(v58);
      }
      if ( v50 == ++v48 )
        break;
      v51 = *(_QWORD *)(a1 + 64);
      v49 = *(unsigned int *)(a1 + 72);
    }
  }
  v59 = *(_QWORD **)(a1 + 112);
  v60 = &v59[2 * *(unsigned int *)(a1 + 120)];
  if ( v59 != v60 )
  {
    do
    {
      v61 = *v59 + v59[1];
      for ( n = ((*v59 + 7LL) & 0xFFFFFFFFFFFFFFF8LL) + 96; v61 >= n; n += 96LL )
      {
        v63 = n - 96;
        sub_FD63F0(v63);
      }
      v59 += 2;
    }
    while ( v60 != v59 );
    v64 = *(__int64 **)(a1 + 112);
    v65 = &v64[2 * *(unsigned int *)(a1 + 120)];
    while ( v65 != v64 )
    {
      v66 = v64[1];
      v67 = *v64;
      v64 += 2;
      operator delete(v67, v66, 16);
    }
  }
  v68 = *(unsigned int *)(a1 + 72);
  *(_DWORD *)(a1 + 120) = 0;
  if ( !(_DWORD)v68 )
    goto LABEL_77;
  *(_QWORD *)(a1 + 128) = 0;
  v77 = *(__int64 **)(a1 + 64);
  v78 = v77 + 1;
  v79 = &v77[v68];
  v80 = v77 + 1;
  *(_QWORD *)&v103[0] = *v77 + 4096;
  *(__m128 *)(a1 + 48) = _mm_loadh_ps(v103);
  if ( v79 != v77 + 1 )
  {
    do
    {
      v81 = 0x40000000000LL;
      v82 = (unsigned int)(v80 - v77) >> 7;
      if ( v82 <= 0x1D )
        v81 = 4096LL << v82;
      v83 = *v80++;
      operator delete(v83, v81, 16);
      v77 = *(__int64 **)(a1 + 64);
    }
    while ( v79 != v80 );
    v78 = v77 + 1;
    v80 = v77 + 1;
  }
  *(_DWORD *)(a1 + 72) = 1;
  v84 = v77;
  while ( 1 )
  {
    v85 = 0x40000000000LL;
    v86 = (unsigned int)(v77 - v84) >> 7;
    if ( v86 <= 0x1D )
      v85 = 4096LL << v86;
    operator delete(*v77, v85, 16);
    v77 = v78;
    if ( v78 == v80 )
      break;
    v84 = *(__int64 **)(a1 + 64);
    ++v78;
  }
  v87 = *(__int64 **)(a1 + 112);
  v69 = &v87[2 * *(unsigned int *)(a1 + 120)];
  if ( v87 != v69 )
  {
    do
    {
      v88 = v87[1];
      v89 = *v87;
      v87 += 2;
      operator delete(v89, v88, 16);
    }
    while ( v69 != v87 );
LABEL_77:
    v69 = *(__int64 **)(a1 + 112);
  }
  if ( v69 != (__int64 *)(a1 + 128) )
    free(v69);
  v70 = *(void **)(a1 + 64);
  if ( v70 != (void *)(a1 + 80) )
    free(v70);
  v71 = *(void **)(a1 + 16);
  if ( v71 != (void *)(a1 + 32) )
    operator delete(v71);
  v72 = *(volatile signed __int32 **)(a1 + 8);
  if ( v72 )
  {
    if ( !_InterlockedSub(v72 + 2, 1u) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
  }
}
