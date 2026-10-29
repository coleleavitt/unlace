void __fastcall sub_E2ED50(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
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
  unsigned __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // r12d
  char *v33; // rdi
  __int64 v34; // rsi
  const __m128i *v35; // r12
  __int64 v36; // rax
  void *v37; // rsi
  __int64 v38; // rdx
  __m128i v39; // xmm3
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // eax
  void *v47; // rax
  __int64 v48; // rdx
  const void *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  void *v55; // rax
  __int64 v56; // rdx
  const void *v57; // rsi
  int v58; // r14d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rsi
  void **v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  _BYTE *v69; // rdi
  __int64 v70; // rsi
  const __m128i *v71; // r14
  __int64 v72; // rax
  void *v73; // rdx
  __int64 v74; // rcx
  __m128i v75; // xmm1
  const __m128i *v76; // r9
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // r11d
  __int64 v80; // rsi
  _BYTE *v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  const __m128i *v84; // r9
  void *v85; // rsi
  __int64 v86; // rdx
  __m128i v87; // xmm2
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  size_t v92; // rdx
  __int64 v93; // rdi
  char *v94; // rsi
  void *v95; // rdx
  void *v96; // rcx
  void *v97; // rax
  __int64 v98; // rdx
  const void *v99; // rsi
  __int64 v100; // rdx
  unsigned __int64 *v101; // rax
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  unsigned __int64 *v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  const __m128i *v109; // [rsp+8h] [rbp-370h]
  int v110; // [rsp+8h] [rbp-370h]
  __int64 v111; // [rsp+8h] [rbp-370h]
  char *v112; // [rsp+10h] [rbp-368h]
  int v113; // [rsp+1Ch] [rbp-35Ch]
  __int64 (__fastcall **v114)(); // [rsp+20h] [rbp-358h] BYREF
  int v115; // [rsp+28h] [rbp-350h]
  __int128 v116; // [rsp+30h] [rbp-348h]
  __int64 v117; // [rsp+40h] [rbp-338h]
  char v118; // [rsp+48h] [rbp-330h]
  int v119; // [rsp+4Ch] [rbp-32Ch]
  void **v120; // [rsp+50h] [rbp-328h]
  void *ptr; // [rsp+60h] [rbp-318h] BYREF
  __int64 v122; // [rsp+68h] [rbp-310h]
  _BYTE v123[64]; // [rsp+70h] [rbp-308h] BYREF
  void *v124; // [rsp+B0h] [rbp-2C8h] BYREF
  __int64 v125; // [rsp+B8h] [rbp-2C0h]
  _BYTE v126[64]; // [rsp+C0h] [rbp-2B8h] BYREF
  void *v127; // [rsp+100h] [rbp-278h] BYREF
  _BYTE v128[24]; // [rsp+108h] [rbp-270h] BYREF
  __int64 v129; // [rsp+120h] [rbp-258h]
  char v130; // [rsp+128h] [rbp-250h]
  int v131; // [rsp+12Ch] [rbp-24Ch]
  __int64 v132; // [rsp+220h] [rbp-158h] BYREF
  void **v133; // [rsp+228h] [rbp-150h]
  _WORD v134[4]; // [rsp+230h] [rbp-148h] BYREF
  __int64 v135; // [rsp+238h] [rbp-140h]
  int v136; // [rsp+240h] [rbp-138h]
  int v137; // [rsp+244h] [rbp-134h]
  unsigned int v138; // [rsp+248h] [rbp-130h]
  unsigned int v139; // [rsp+24Ch] [rbp-12Ch]
  void **p_base; // [rsp+250h] [rbp-128h] BYREF
  void *base; // [rsp+258h] [rbp-120h] BYREF
  __int64 v142; // [rsp+260h] [rbp-118h]
  _BYTE v143[64]; // [rsp+268h] [rbp-110h] BYREF
  _BYTE *v144; // [rsp+2A8h] [rbp-D0h]
  __int64 v145; // [rsp+2B0h] [rbp-C8h]
  _BYTE v146[64]; // [rsp+2B8h] [rbp-C0h] BYREF
  void ***p_p_base; // [rsp+2F8h] [rbp-80h]
  __int64 v148; // [rsp+300h] [rbp-78h]
  void *v149; // [rsp+308h] [rbp-70h]
  __int64 v150; // [rsp+310h] [rbp-68h]
  unsigned int v151; // [rsp+318h] [rbp-60h]
  void *v152; // [rsp+320h] [rbp-58h]
  __int64 v153; // [rsp+328h] [rbp-50h]
  unsigned int v154; // [rsp+330h] [rbp-48h]

  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !(unsigned __int8)sub_E4B4A0(*(_QWORD *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    sub_E2DBE0(a1, a2, a3, a4);
    return;
  }
  if ( *(_BYTE *)(a1 + 18) )
  {
    ptr = v123;
    v122 = 0x400000000LL;
    goto LABEL_4;
  }
  a4 = 0;
  memset(v134, 0, 3);
  *(_DWORD *)v128 = 0;
  v127 = &off_2BC1FC0;
  v14 = *(_QWORD *)a1;
  v144 = v146;
  v132 = v14;
  v133 = &v127;
  v15 = *(_QWORD *)(a1 + 24);
  v130 = 0;
  v135 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 32);
  v131 = 1;
  v136 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 40);
  v129 = 0;
  v138 = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 44);
  *(_OWORD *)&v128[8] = 0;
  v139 = v15;
  base = v143;
  v142 = 0x400000000LL;
  v145 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v137 = 0;
  v148 = 0;
  v149 = nullptr;
  v150 = 0;
  v151 = 0;
  operator delete();
  v20 = *(_DWORD *)(a1 + 248);
  v151 = v20;
  if ( v20 )
  {
    v97 = (void *)sub_220C370(16LL * v20, 8, v16, v17, v18, v19);
    v98 = *(_QWORD *)(a1 + 240);
    v99 = *(const void **)(a1 + 232);
    v149 = v97;
    v150 = v98;
    memcpy(v97, v99, 16LL * v151);
  }
  else
  {
    v149 = nullptr;
    v150 = 0;
  }
  v21 = nullptr;
  v152 = nullptr;
  v153 = 0;
  v154 = 0;
  operator delete();
  v26 = *(unsigned int *)(a1 + 272);
  v154 = v26;
  if ( (_DWORD)v26 )
  {
    v27 = (void *)sub_220C370(24 * v26, 8, v22, v23, v24, v25);
    v28 = *(_QWORD *)(a1 + 264);
    v21 = *(const void **)(a1 + 256);
    v152 = v27;
    v153 = v28;
    memcpy(v27, v21, 24LL * v154);
  }
  else
  {
    v152 = nullptr;
    v153 = 0;
  }
  v29 = *(_QWORD *)(v7 + 48);
  v30 = 257;
  *(_WORD *)((char *)v134 + 1) = 257;
  v31 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v31 + 16) - 25 > 1 )
  {
    v100 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v100 > 1 )
      BUG();
    v31 = sub_F3F310(v31, v21, v100, 257);
  }
  v32 = v139;
  v139 = ((v139 & 0xFFFFFFFE) + 2) | 1;
  sub_E1BE40((__int64)&v132, *(_QWORD *)(v31 + 24), v139, v30, v24);
  v139 = v32;
  v33 = (char *)base;
  v34 = 16LL * (unsigned int)v142;
  if ( (unsigned __int64)v34 > 0x10 )
  {
    qsort(base, v34 >> 4, 0x10u, (__compar_fn_t)sub_E15630);
    v33 = (char *)base;
    v34 = 16LL * (unsigned int)v142;
  }
  v35 = (const __m128i *)&v33[v34];
  v36 = sub_E14F00((__int64)v33, (__int64)&v33[v34]);
  v37 = base;
  v38 = ((_BYTE *)base + 16 * (unsigned int)v142 - (_BYTE *)v35) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v142 - (_BYTE *)v35 > 0 )
  {
    do
    {
      v39 = _mm_loadu_si128(v35);
      v36 += 16;
      ++v35;
      *(__m128i *)(v36 - 16) = v39;
      --v38;
    }
    while ( v38 );
    v37 = base;
  }
  v122 = 0x400000000LL;
  LODWORD(v142) = (v36 - (__int64)v37) >> 4;
  ptr = v123;
  if ( (_DWORD)v142 )
    sub_E180E0((__int64 *)&ptr, (__int64 *)&base);
  sub_E176D0((__int64)&v132);
  sub_2257740(&v127);
  if ( !(_DWORD)v122 )
  {
LABEL_4:
    v8 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 44) = (v8 & 0xFFFFFFFE) + 2;
    sub_E2DBE0(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 44) = v8;
    sub_E2EAE0(a1, v7, v9, v10, v11, v12, a4);
    v13 = ptr;
    if ( ptr == v123 )
      return;
    goto LABEL_5;
  }
  v115 = 2;
  *(__m128i *)v128 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  v127 = &v128[16];
  v120 = &v127;
  v116 = 0;
  v114 = &off_2BC1F40;
  v118 = 0;
  v119 = 1;
  v117 = 0;
  sub_2257B70(&v114, 0, 0, 0);
  v40 = *(_QWORD *)a1;
  v133 = (void **)&v114;
  v132 = v40;
  memset(v134, 0, 3);
  v41 = *(_QWORD *)(a1 + 24);
  v144 = v146;
  v135 = v41;
  v136 = *(_DWORD *)(a1 + 32);
  LODWORD(v41) = *(_DWORD *)(a1 + 40);
  v137 = 0;
  v138 = v41;
  LODWORD(v41) = *(_DWORD *)(a1 + 44);
  v148 = 0;
  v139 = v41;
  base = v143;
  v142 = 0x400000000LL;
  v145 = 0x400000000LL;
  p_p_base = &p_base;
  p_base = &base;
  v149 = nullptr;
  v150 = 0;
  v151 = 0;
  operator delete();
  v46 = *(_DWORD *)(a1 + 248);
  v151 = v46;
  if ( v46 )
  {
    v47 = (void *)sub_220C370(16LL * v46, 8, v42, v43, v44, v45);
    v48 = *(_QWORD *)(a1 + 240);
    v49 = *(const void **)(a1 + 232);
    v149 = v47;
    v150 = v48;
    memcpy(v47, v49, 16LL * v151);
  }
  else
  {
    v149 = nullptr;
    v150 = 0;
  }
  v152 = nullptr;
  v153 = 0;
  v154 = 0;
  operator delete();
  v54 = *(unsigned int *)(a1 + 272);
  v154 = v54;
  if ( (_DWORD)v54 )
  {
    v55 = (void *)sub_220C370(24 * v54, 8, v50, v51, v52, v53);
    v56 = *(_QWORD *)(a1 + 264);
    v57 = *(const void **)(a1 + 256);
    v152 = v55;
    v153 = v56;
    memcpy(v55, v57, 24LL * v154);
  }
  else
  {
    v152 = nullptr;
    v153 = 0;
  }
  v58 = *(_DWORD *)(a1 + 44);
  LOBYTE(v134[1]) = 1;
  *(_DWORD *)(a1 + 44) = (v58 & 0xFFFFFFFE) + 2;
  v63 = v7;
  if ( sub_B55E40(v7) )
  {
    if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    {
LABEL_60:
      v63 = v7 | ((*(_BYTE *)(sub_B68890(v7) + 89) >> 2) ^ 1) & 1;
      goto LABEL_25;
    }
    v101 = sub_B68690(v7, v7, v59, v60, v61, v62);
    v102 = *v101;
    v103 = *v101 + 8LL * *((unsigned int *)v101 + 2);
    if ( *v101 >= v103 )
    {
      if ( v102 == v103 )
        goto LABEL_60;
      while ( *(_WORD *)(*(_QWORD *)v103 + 36LL) != 64 )
      {
        v103 += 8LL;
        if ( v102 == v103 )
          goto LABEL_60;
      }
    }
    else
    {
      v104 = *v101;
      while ( *(_WORD *)(*(_QWORD *)v104 + 36LL) != 64 )
      {
        v104 += 8LL;
        if ( v103 == v104 )
          goto LABEL_60;
      }
      if ( v103 == v104 )
        goto LABEL_60;
    }
    v63 = v7;
  }
LABEL_25:
  sub_E2D850(&v132, v63, 0, 0, (__m128)0LL);
  v64 = v120;
  *(_DWORD *)(a1 + 44) = v58;
  v112 = (char *)v64[1];
  sub_E2EAE0((__int64)&v132, v7, v65, v66, v67, v68, (__m128)0LL);
  v69 = base;
  v70 = 16LL * (unsigned int)v142;
  if ( (unsigned __int64)v70 > 0x10 )
  {
    qsort(base, v70 >> 4, 0x10u, (__compar_fn_t)sub_E15630);
    v69 = base;
    v70 = 16LL * (unsigned int)v142;
  }
  v71 = (const __m128i *)&v69[v70];
  v72 = sub_E14F00((__int64)v69, (__int64)&v69[v70]);
  v73 = base;
  v74 = ((_BYTE *)base + 16 * (unsigned int)v142 - &v69[v70]) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v142 - &v69[v70] > 0 )
  {
    do
    {
      v75 = _mm_loadu_si128(v71);
      v72 += 16;
      ++v71;
      *(__m128i *)(v72 - 16) = v75;
      --v74;
    }
    while ( v74 );
    v73 = base;
  }
  v76 = (const __m128i *)v126;
  v125 = 0x400000000LL;
  v77 = (unsigned int)((v72 - (__int64)v73) >> 4);
  LODWORD(v142) = (v72 - (__int64)v73) >> 4;
  v78 = (unsigned int)v122;
  v124 = v126;
  v79 = v122;
  if ( (_DWORD)v122 )
  {
    v80 = (unsigned int)v122;
    v81 = v126;
    if ( (unsigned int)v122 > 4uLL )
    {
      v113 = v122;
      v111 = (unsigned int)v122;
      sub_22134E0(&v124, v126, (unsigned int)v122, 16);
      v80 = (unsigned int)v122;
      v81 = v124;
      v77 = (unsigned int)v142;
      v78 = v111;
      v79 = v113;
      v76 = (const __m128i *)((char *)v124 + 16 * (unsigned int)v125);
    }
    v82 = 16 * v78;
    if ( &v81[v82] != (_BYTE *)v76 )
    {
      do
      {
        v76->m128i_i64[0] = 0;
        ++v76;
        v76[-1].m128i_i64[1] = 0;
      }
      while ( &v81[v82] != (_BYTE *)v76 );
      v81 = v124;
      v76 = (const __m128i *)((char *)v124 + v82);
    }
    LODWORD(v125) = v79;
    v73 = base;
  }
  else
  {
    v80 = 0;
    v81 = v126;
  }
  v109 = v76;
  v83 = sub_E15280((__int64)ptr, (__int64)ptr + 16 * v80, (__int64)v73, (__int64)v73 + 16 * v77, (__int64)v81);
  v84 = v109;
  v85 = v124;
  v86 = ((_BYTE *)v124 + 16 * (unsigned int)v125 - (_BYTE *)v109) >> 4;
  if ( (_BYTE *)v124 + 16 * (unsigned int)v125 - (_BYTE *)v109 > 0 )
  {
    do
    {
      v87 = _mm_loadu_si128(v84);
      v83 += 16;
      ++v84;
      *(__m128i *)(v83 - 16) = v87;
      --v86;
    }
    while ( v86 );
    v85 = v124;
  }
  LODWORD(v125) = (v83 - (__int64)v85) >> 4;
  v110 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = (v110 & 0xFFFFFFFE) + 2;
  if ( !sub_B55E40(v7) )
    goto LABEL_41;
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
  {
LABEL_62:
    v7 |= ((*(_BYTE *)(sub_B68890(v7) + 89) >> 2) ^ 1) & 1;
    goto LABEL_41;
  }
  v105 = sub_B68690(v7, (__int64)v85, v88, v89, v90, v91);
  v106 = *v105;
  v107 = *v105 + 8LL * *((unsigned int *)v105 + 2);
  if ( *v105 >= v107 )
  {
    if ( v106 == v107 )
      goto LABEL_62;
    while ( *(_WORD *)(*(_QWORD *)v107 + 36LL) != 64 )
    {
      v107 += 8LL;
      if ( v106 == v107 )
        goto LABEL_62;
    }
  }
  else
  {
    v108 = *v105;
    while ( *(_WORD *)(*(_QWORD *)v108 + 36LL) != 64 )
    {
      v108 += 8LL;
      if ( v107 == v108 )
        goto LABEL_62;
    }
    if ( v108 == v107 )
      goto LABEL_62;
  }
LABEL_41:
  sub_E2D850((__int64 *)a1, v7, 0, (__int64)&v124, (__m128)0LL);
  v92 = 0;
  v93 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 44) = v110;
  v94 = (char *)v120[1];
  if ( v94 >= v112 )
  {
    v92 = v94 - v112;
    v94 = v112;
  }
  sub_9717A0(v93, &v94[(_QWORD)*v120], v92);
  if ( v138 > *(_DWORD *)(a1 + 40) )
  {
    v95 = *(void **)(a1 + 232);
    v96 = v149;
    *(_DWORD *)(a1 + 40) = v138;
    *(_QWORD *)(a1 + 232) = v96;
    v149 = v95;
    LODWORD(v95) = *(_DWORD *)(a1 + 240);
    *(_DWORD *)(a1 + 240) = v150;
    LODWORD(v150) = (_DWORD)v95;
    LODWORD(v95) = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(a1 + 244) = HIDWORD(v150);
    HIDWORD(v150) = (_DWORD)v95;
    LODWORD(v95) = *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 248) = v151;
    v151 = (unsigned int)v95;
  }
  if ( v124 != v126 )
    free(v124);
  sub_E176D0((__int64)&v132);
  v114 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v114);
  if ( v127 != &v128[16] )
    free(v127);
  v13 = ptr;
  if ( ptr != v123 )
LABEL_5:
    free(v13);
}

