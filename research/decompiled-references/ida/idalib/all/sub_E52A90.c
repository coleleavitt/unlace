void __fastcall sub_E52A90(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  unsigned __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // eax
  const void *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r12d
  char *v32; // rdi
  __int64 v33; // rsi
  const __m128i *v34; // r12
  __int64 v35; // rax
  void *v36; // rsi
  __int64 v37; // rdx
  __m128i v38; // xmm3
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // eax
  void *v46; // rax
  __int64 v47; // rdx
  const void *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  void *v54; // rax
  __int64 v55; // rdx
  const void *v56; // rsi
  int v57; // r14d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rsi
  void **v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _BYTE *v68; // rdi
  __int64 v69; // rsi
  const __m128i *v70; // r14
  __int64 v71; // rax
  void *v72; // rdx
  __int64 v73; // rcx
  __m128i v74; // xmm1
  const __m128i *v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rax
  int v78; // r11d
  __int64 v79; // rsi
  _BYTE *v80; // r8
  __int64 v81; // rax
  __int64 v82; // rax
  const __m128i *v83; // r9
  void *v84; // rsi
  __int64 v85; // rdx
  __m128i v86; // xmm2
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  size_t v91; // rdx
  __int64 v92; // rdi
  char *v93; // rsi
  void *v94; // rdx
  void *v95; // rcx
  void *v96; // rax
  __int64 v97; // rdx
  const void *v98; // rsi
  __int64 v99; // rdx
  unsigned __int64 *v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // rax
  unsigned __int64 *v104; // rax
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rcx
  unsigned __int64 v107; // rax
  const __m128i *v108; // [rsp+8h] [rbp-370h]
  int v109; // [rsp+8h] [rbp-370h]
  __int64 v110; // [rsp+8h] [rbp-370h]
  char *v111; // [rsp+10h] [rbp-368h]
  int v112; // [rsp+1Ch] [rbp-35Ch]
  __int64 (__fastcall **v113)(); // [rsp+20h] [rbp-358h] BYREF
  int v114; // [rsp+28h] [rbp-350h]
  __int128 v115; // [rsp+30h] [rbp-348h]
  __int64 v116; // [rsp+40h] [rbp-338h]
  char v117; // [rsp+48h] [rbp-330h]
  int v118; // [rsp+4Ch] [rbp-32Ch]
  void **v119; // [rsp+50h] [rbp-328h]
  void *ptr; // [rsp+60h] [rbp-318h] BYREF
  __int64 v121; // [rsp+68h] [rbp-310h]
  _BYTE v122[64]; // [rsp+70h] [rbp-308h] BYREF
  void *v123; // [rsp+B0h] [rbp-2C8h] BYREF
  __int64 v124; // [rsp+B8h] [rbp-2C0h]
  _BYTE v125[64]; // [rsp+C0h] [rbp-2B8h] BYREF
  void *v126; // [rsp+100h] [rbp-278h] BYREF
  _BYTE v127[24]; // [rsp+108h] [rbp-270h] BYREF
  __int64 v128; // [rsp+120h] [rbp-258h]
  char v129; // [rsp+128h] [rbp-250h]
  int v130; // [rsp+12Ch] [rbp-24Ch]
  __int64 v131; // [rsp+220h] [rbp-158h] BYREF
  void **v132; // [rsp+228h] [rbp-150h]
  _WORD v133[4]; // [rsp+230h] [rbp-148h] BYREF
  __int64 v134; // [rsp+238h] [rbp-140h]
  int v135; // [rsp+240h] [rbp-138h]
  int v136; // [rsp+244h] [rbp-134h]
  unsigned int v137; // [rsp+248h] [rbp-130h]
  unsigned int v138; // [rsp+24Ch] [rbp-12Ch]
  void **p_base; // [rsp+250h] [rbp-128h] BYREF
  void *base; // [rsp+258h] [rbp-120h] BYREF
  __int64 v141; // [rsp+260h] [rbp-118h]
  _BYTE v142[64]; // [rsp+268h] [rbp-110h] BYREF
  _BYTE *v143; // [rsp+2A8h] [rbp-D0h]
  __int64 v144; // [rsp+2B0h] [rbp-C8h]
  _BYTE v145[64]; // [rsp+2B8h] [rbp-C0h] BYREF
  void ***p_p_base; // [rsp+2F8h] [rbp-80h]
  __int64 v147; // [rsp+300h] [rbp-78h]
  void *v148; // [rsp+308h] [rbp-70h]
  __int64 v149; // [rsp+310h] [rbp-68h]
  unsigned int v150; // [rsp+318h] [rbp-60h]
  void *v151; // [rsp+320h] [rbp-58h]
  __int64 v152; // [rsp+328h] [rbp-50h]
  unsigned int v153; // [rsp+330h] [rbp-48h]

  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !(unsigned __int8)sub_E6F1E0(*(_QWORD *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    sub_E51920(a1, a2, a3, a4);
    return;
  }
  if ( *(_BYTE *)(a1 + 18) )
  {
    ptr = v122;
    v121 = 0x400000000LL;
    goto LABEL_4;
  }
  a4 = 0;
  memset(v133, 0, 3);
  *(_DWORD *)v127 = 0;
  v126 = &off_2BEBF60;
  v14 = *(_QWORD *)a1;
  v143 = v145;
  v131 = v14;
  v132 = &v126;
  v15 = *(_QWORD *)(a1 + 24);
  v129 = 0;
  v134 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 32);
  v130 = 1;
  v135 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 40);
  v128 = 0;
  v137 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 44);
  *(_OWORD *)&v127[8] = 0;
  v138 = v15;
  base = v142;
  v141 = 0x400000000LL;
  v144 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v136 = 0;
  v147 = 0;
  v148 = nullptr;
  v149 = 0;
  v150 = 0;
  operator delete(0, 0, 8);
  v20 = *(_DWORD *)(a1 + 248);
  v150 = v20;
  if ( v20 )
  {
    v96 = (void *)sub_22300B0(16LL * v20, 8, v16, v17, v18, v19);
    v97 = *(_QWORD *)(a1 + 240);
    v98 = *(const void **)(a1 + 232);
    v148 = v96;
    v149 = v97;
    memcpy(v96, v98, 16LL * v150);
  }
  else
  {
    v148 = nullptr;
    v149 = 0;
  }
  v21 = nullptr;
  v151 = nullptr;
  v152 = 0;
  v153 = 0;
  operator delete(0, 0, 8);
  v26 = *(unsigned int *)(a1 + 272);
  v153 = v26;
  if ( (_DWORD)v26 )
  {
    v27 = (void *)sub_22300B0(24 * v26, 8, v22, v23, v24, v25);
    v28 = *(_QWORD *)(a1 + 264);
    v21 = *(const void **)(a1 + 256);
    v151 = v27;
    v152 = v28;
    memcpy(v27, v21, 24LL * v153);
  }
  else
  {
    v151 = nullptr;
    v152 = 0;
  }
  v29 = *(_QWORD *)(v7 + 48);
  *(_WORD *)((char *)v133 + 1) = 257;
  v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v30 + 16) - 25 > 1 )
  {
    v99 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v99 > 1 )
      BUG();
    v30 = sub_F63050(v30, v21, v99, 257);
  }
  v31 = v138;
  v138 = ((v138 & 0xFFFFFFFE) + 2) | 1;
  sub_E3FB80(&v131, *(_QWORD *)(v30 + 24));
  v138 = v31;
  v32 = (char *)base;
  v33 = 16LL * (unsigned int)v141;
  if ( (unsigned __int64)v33 > 0x10 )
  {
    qsort(base, v33 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v32 = (char *)base;
    v33 = 16LL * (unsigned int)v141;
  }
  v34 = (const __m128i *)&v32[v33];
  v35 = sub_E38C40((__int64)v32, (__int64)&v32[v33]);
  v36 = base;
  v37 = ((_BYTE *)base + 16 * (unsigned int)v141 - (_BYTE *)v34) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v141 - (_BYTE *)v34 > 0 )
  {
    do
    {
      v38 = _mm_loadu_si128(v34);
      v35 += 16;
      ++v34;
      *(__m128i *)(v35 - 16) = v38;
      --v37;
    }
    while ( v37 );
    v36 = base;
  }
  v121 = 0x400000000LL;
  LODWORD(v141) = (v35 - (__int64)v36) >> 4;
  ptr = v122;
  if ( (_DWORD)v141 )
    sub_E3BE20((__int64 *)&ptr, (__int64 *)&base);
  sub_E3B410((__int64)&v131);
  sub_227B480(&v126);
  if ( !(_DWORD)v121 )
  {
LABEL_4:
    v8 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 44) = (v8 & 0xFFFFFFFE) + 2;
    sub_E51920(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 44) = v8;
    sub_E52820(a1, v7, v9, v10, v11, v12, a4);
    v13 = ptr;
    if ( ptr == v122 )
      return;
    goto LABEL_5;
  }
  v114 = 2;
  *(__m128i *)v127 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  v126 = &v127[16];
  v119 = &v126;
  v115 = 0;
  v113 = &off_2BEBEE0;
  v117 = 0;
  v118 = 1;
  v116 = 0;
  sub_227B8B0(&v113, 0, 0, 0);
  v39 = *(_QWORD *)a1;
  v132 = (void **)&v113;
  v131 = v39;
  memset(v133, 0, 3);
  v40 = *(_QWORD *)(a1 + 24);
  v143 = v145;
  v134 = v40;
  v135 = *(_DWORD *)(a1 + 32);
  LODWORD(v40) = *(_DWORD *)(a1 + 40);
  v136 = 0;
  v137 = v40;
  LODWORD(v40) = *(_DWORD *)(a1 + 44);
  v147 = 0;
  v138 = v40;
  base = v142;
  v141 = 0x400000000LL;
  v144 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v148 = nullptr;
  v149 = 0;
  v150 = 0;
  operator delete(0, 0, 8);
  v45 = *(_DWORD *)(a1 + 248);
  v150 = v45;
  if ( v45 )
  {
    v46 = (void *)sub_22300B0(16LL * v45, 8, v41, v42, v43, v44);
    v47 = *(_QWORD *)(a1 + 240);
    v48 = *(const void **)(a1 + 232);
    v148 = v46;
    v149 = v47;
    memcpy(v46, v48, 16LL * v150);
  }
  else
  {
    v148 = nullptr;
    v149 = 0;
  }
  v151 = nullptr;
  v152 = 0;
  v153 = 0;
  operator delete(0, 0, 8);
  v53 = *(unsigned int *)(a1 + 272);
  v153 = v53;
  if ( (_DWORD)v53 )
  {
    v54 = (void *)sub_22300B0(24 * v53, 8, v49, v50, v51, v52);
    v55 = *(_QWORD *)(a1 + 264);
    v56 = *(const void **)(a1 + 256);
    v151 = v54;
    v152 = v55;
    memcpy(v54, v56, 24LL * v153);
  }
  else
  {
    v151 = nullptr;
    v152 = 0;
  }
  v57 = *(_DWORD *)(a1 + 44);
  LOBYTE(v133[1]) = 1;
  *(_DWORD *)(a1 + 44) = (v57 & 0xFFFFFFFE) + 2;
  v62 = v7;
  if ( sub_B79B80(v7) )
  {
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    {
LABEL_60:
      v62 = v7 | ((*(_BYTE *)(sub_B8C5D0(v7) + 89) >> 2) ^ 1) & 1;
      goto LABEL_25;
    }
    v100 = sub_B8C3D0(v7, v7, v58, v59, v60, v61);
    v101 = *v100;
    v102 = *v100 + 8LL * *((unsigned int *)v100 + 2);
    if ( *v100 >= v102 )
    {
      if ( v101 == v102 )
        goto LABEL_60;
      while ( *(_WORD *)(*(_QWORD *)v102 + 36LL) != 64 )
      {
        v102 += 8LL;
        if ( v101 == v102 )
          goto LABEL_60;
      }
    }
    else
    {
      v103 = *v100;
      while ( *(_WORD *)(*(_QWORD *)v103 + 36LL) != 64 )
      {
        v103 += 8LL;
        if ( v102 == v103 )
          goto LABEL_60;
      }
      if ( v102 == v103 )
        goto LABEL_60;
    }
    v62 = v7;
  }
LABEL_25:
  sub_E51590(&v131, v62, 0, 0, (__m128)0LL);
  v63 = v119;
  *(_DWORD *)(a1 + 44) = v57;
  v111 = (char *)v63[1];
  sub_E52820((__int64)&v131, v7, v64, v65, v66, v67, (__m128)0LL);
  v68 = base;
  v69 = 16LL * (unsigned int)v141;
  if ( (unsigned __int64)v69 > 0x10 )
  {
    qsort(base, v69 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v68 = base;
    v69 = 16LL * (unsigned int)v141;
  }
  v70 = (const __m128i *)&v68[v69];
  v71 = sub_E38C40((__int64)v68, (__int64)&v68[v69]);
  v72 = base;
  v73 = ((_BYTE *)base + 16 * (unsigned int)v141 - &v68[v69]) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v141 - &v68[v69] > 0 )
  {
    do
    {
      v74 = _mm_loadu_si128(v70);
      v71 += 16;
      ++v70;
      *(__m128i *)(v71 - 16) = v74;
      --v73;
    }
    while ( v73 );
    v72 = base;
  }
  v75 = (const __m128i *)v125;
  v124 = 0x400000000LL;
  v76 = (unsigned int)((v71 - (__int64)v72) >> 4);
  LODWORD(v141) = (v71 - (__int64)v72) >> 4;
  v77 = (unsigned int)v121;
  v123 = v125;
  v78 = v121;
  if ( (_DWORD)v121 )
  {
    v79 = (unsigned int)v121;
    v80 = v125;
    if ( (unsigned int)v121 > 4uLL )
    {
      v112 = v121;
      v110 = (unsigned int)v121;
      sub_2237220(&v123, v125, (unsigned int)v121, 16);
      v79 = (unsigned int)v121;
      v80 = v123;
      v76 = (unsigned int)v141;
      v77 = v110;
      v78 = v112;
      v75 = (const __m128i *)((char *)v123 + 16 * (unsigned int)v124);
    }
    v81 = 16 * v77;
    if ( &v80[v81] != (_BYTE *)v75 )
    {
      do
      {
        v75->m128i_i64[0] = 0;
        ++v75;
        v75[-1].m128i_i64[1] = 0;
      }
      while ( &v80[v81] != (_BYTE *)v75 );
      v80 = v123;
      v75 = (const __m128i *)((char *)v123 + v81);
    }
    LODWORD(v124) = v78;
    v72 = base;
  }
  else
  {
    v79 = 0;
    v80 = v125;
  }
  v108 = v75;
  v82 = sub_E38FC0((__int64)ptr, (__int64)ptr + 16 * v79, (__int64)v72, (__int64)v72 + 16 * v76, (__int64)v80);
  v83 = v108;
  v84 = v123;
  v85 = ((_BYTE *)v123 + 16 * (unsigned int)v124 - (_BYTE *)v108) >> 4;
  if ( (_BYTE *)v123 + 16 * (unsigned int)v124 - (_BYTE *)v108 > 0 )
  {
    do
    {
      v86 = _mm_loadu_si128(v83);
      v82 += 16;
      ++v83;
      *(__m128i *)(v82 - 16) = v86;
      --v85;
    }
    while ( v85 );
    v84 = v123;
  }
  LODWORD(v124) = (v82 - (__int64)v84) >> 4;
  v109 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = (v109 & 0xFFFFFFFE) + 2;
  if ( !sub_B79B80(v7) )
    goto LABEL_41;
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
  {
LABEL_62:
    v7 |= ((*(_BYTE *)(sub_B8C5D0(v7) + 89) >> 2) ^ 1) & 1;
    goto LABEL_41;
  }
  v104 = sub_B8C3D0(v7, (__int64)v84, v87, v88, v89, v90);
  v105 = *v104;
  v106 = *v104 + 8LL * *((unsigned int *)v104 + 2);
  if ( *v104 >= v106 )
  {
    if ( v105 == v106 )
      goto LABEL_62;
    while ( *(_WORD *)(*(_QWORD *)v106 + 36LL) != 64 )
    {
      v106 += 8LL;
      if ( v105 == v106 )
        goto LABEL_62;
    }
  }
  else
  {
    v107 = *v104;
    while ( *(_WORD *)(*(_QWORD *)v107 + 36LL) != 64 )
    {
      v107 += 8LL;
      if ( v106 == v107 )
        goto LABEL_62;
    }
    if ( v107 == v106 )
      goto LABEL_62;
  }
LABEL_41:
  sub_E51590((__int64 *)a1, v7, 0, (__int64)&v123, (__m128)0LL);
  v91 = 0;
  v92 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 44) = v109;
  v93 = (char *)v119[1];
  if ( v93 >= v111 )
  {
    v91 = v93 - v111;
    v93 = v111;
  }
  sub_9954E0(v92, &v93[(_QWORD)*v119], v91);
  if ( v137 > *(_DWORD *)(a1 + 40) )
  {
    v94 = *(void **)(a1 + 232);
    v95 = v148;
    *(_DWORD *)(a1 + 40) = v137;
    *(_QWORD *)(a1 + 232) = v95;
    v148 = v94;
    LODWORD(v94) = *(_DWORD *)(a1 + 240);
    *(_DWORD *)(a1 + 240) = v149;
    LODWORD(v149) = (_DWORD)v94;
    LODWORD(v94) = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(a1 + 244) = HIDWORD(v149);
    HIDWORD(v149) = (_DWORD)v94;
    LODWORD(v94) = *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 248) = v150;
    v150 = (unsigned int)v94;
  }
  if ( v123 != v125 )
    free(v123);
  sub_E3B410((__int64)&v131);
  v113 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v113);
  if ( v126 != &v127[16] )
    free(v126);
  v13 = ptr;
  if ( ptr != v122 )
LABEL_5:
    free(v13);
}
