__int64 __fastcall sub_63BBD0(__int64 a1, const char *a2, _DWORD *a3, int a4, __int64 *a5, unsigned __int8 a6)
{
  __int64 result; // rax
  int v9; // r10d
  _QWORD *v13; // rdi
  char v14; // dl
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // cx
  __int16 v24; // cx
  __int16 v25; // ax
  __int16 v26; // cx
  __int16 v27; // cx
  __int16 v28; // ax
  __int16 v29; // cx
  __int16 v30; // cx
  __int16 v31; // ax
  __int16 v32; // cx
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // ax
  __int16 v38; // cx
  char v39; // dl
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // edx
  unsigned int v58; // eax
  int v59; // r12d
  int v60; // esi
  unsigned int v61; // esi
  __int64 v62; // rsi
  __int16 v63; // dx
  __m128i v64; // xmm0
  __int16 v65; // ax
  __m128i v66; // xmm0
  int v67; // eax
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i v70; // xmm0
  int v71; // ecx
  int v72; // eax
  int v73; // ecx
  int v74; // ecx
  unsigned int v75; // eax
  int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  int v79; // ecx
  unsigned int v80; // ecx
  unsigned int v81; // eax
  int v82; // ecx
  unsigned int v83; // ecx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  int v86; // ecx
  unsigned int v87; // ecx
  unsigned int v88; // eax
  int v89; // ecx
  unsigned int v90; // ecx
  unsigned int v91; // eax
  int v92; // ecx
  unsigned int v93; // ecx
  unsigned int v94; // eax
  int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // eax
  int v98; // ecx
  unsigned int v99; // ecx
  unsigned int v100; // ecx
  unsigned int v101; // ecx
  unsigned int v102; // eax
  int v103; // ecx
  unsigned int v104; // ecx
  unsigned int v105; // eax
  int v106; // ecx
  unsigned int v107; // ecx
  unsigned int v108; // eax
  int v109; // ecx
  unsigned int v110; // ecx
  int v111; // eax
  unsigned int v112; // ecx
  __m128i v113; // xmm0
  __int64 v114; // rdx
  __int64 v115; // rax
  int v116; // eax
  int v117; // edx
  int v118; // edx
  int v119; // eax
  __int64 v120; // rax
  __int16 v121; // dx
  __m128i v122; // xmm0
  __int64 v123; // rax
  __m128i v124; // xmm1
  __m128i v125; // xmm0
  int v126; // ecx
  int v127; // eax
  int v128; // ecx
  int v129; // ecx
  unsigned int v130; // eax
  int v131; // ecx
  unsigned int v132; // ecx
  unsigned int v133; // eax
  int v134; // ecx
  unsigned int v135; // ecx
  unsigned int v136; // ecx
  unsigned int v137; // ecx
  unsigned int v138; // eax
  int v139; // ecx
  unsigned int v140; // ecx
  unsigned int v141; // eax
  int v142; // ecx
  unsigned int v143; // ecx
  unsigned int v144; // eax
  int v145; // ecx
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // eax
  int v149; // ecx
  unsigned int v150; // ecx
  unsigned int v151; // ecx
  unsigned int v152; // ecx
  unsigned int v153; // eax
  int v154; // ecx
  unsigned int v155; // ecx
  unsigned int v156; // eax
  int v157; // ecx
  unsigned int v158; // ecx
  unsigned int v159; // eax
  int v160; // ecx
  unsigned int v161; // ecx
  size_t v162; // rax
  size_t v163; // r12
  __m128i v164; // xmm0
  char v165; // al
  __int64 v166; // rcx
  void *v167; // rdi
  size_t v168; // r14
  __int64 v169; // rax
  _QWORD v170[51]; // [rsp+0h] [rbp-198h] BYREF

  result = 0;
  v170[45] = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return result;
  v9 = a4;
  memset(v170, 0, 0x168u);
  LOWORD(v170[0]) = 17481;
  *(_WORD *)((char *)&v170[6] + 5) = -1;
  LOWORD(v170[17]) = 257;
  *(_WORD *)((char *)&v170[23] + 7) = 257;
  *(_WORD *)((char *)&v170[16] + 3) = 258;
  v13 = v170;
  *(_OWORD *)((char *)&v170[6] + 7) = -1;
  if ( (unsigned __int64)a4 > 0x168 )
    a4 = 360;
  *(_OWORD *)((char *)&v170[24] + 2) = -1;
  BYTE2(v170[0]) = 65;
  v14 = a4;
  BYTE5(v170[2]) = 1;
  *(_QWORD *)((char *)&v170[5] + 5) = -1;
  *(_QWORD *)((char *)&v170[8] + 7) = -1;
  *(_QWORD *)((char *)&v170[12] + 7) = -1;
  *(_QWORD *)((char *)&v170[14] + 7) = 16;
  HIBYTE(v170[15]) = 10;
  HIBYTE(v170[16]) = 2;
  *(_WORD *)((char *)&v170[17] + 3) = 513;
  BYTE6(v170[17]) = 1;
  LOBYTE(v170[19]) = 15;
  BYTE3(v170[19]) = 1;
  *(_DWORD *)((char *)&v170[19] + 6) = 252772609;
  BYTE2(v170[20]) = 97;
  BYTE1(v170[24]) = 1;
  *(_QWORD *)((char *)&v170[26] + 2) = -1;
  *(_DWORD *)((char *)&v170[27] + 2) = 245612135;
  *(_DWORD *)((char *)&v170[28] + 2) = 104857607;
  *(_QWORD *)((char *)&v170[29] + 2) = 23;
  *(_DWORD *)((char *)&v170[31] + 2) = 33526781;
  LOWORD(v170[32]) = 80;
  HIDWORD(v170[34]) = 67372051;
  *(_WORD *)((char *)&v170[35] + 1) = 1026;
  BYTE3(v170[35]) = 8;
  BYTE1(v170[39]) = 1;
  *(__m128i *)&v170[41] = _mm_load_si128((const __m128i *)&xmmword_23A7D70);
  if ( (unsigned int)a4 >= 8 )
  {
    v166 = (unsigned int)a4 >> 3;
    v15 = 0;
    qmemcpy(v170, a3, 8 * v166);
    a3 += 2 * v166;
    v13 = &v170[v166];
    if ( (v14 & 4) == 0 )
    {
LABEL_6:
      if ( (v14 & 2) == 0 )
        goto LABEL_7;
      goto LABEL_119;
    }
  }
  else
  {
    v15 = 0;
    if ( (a4 & 4) == 0 )
      goto LABEL_6;
  }
  *(_DWORD *)v13 = *a3;
  v15 = 4;
  if ( (v14 & 2) == 0 )
  {
LABEL_7:
    if ( (v14 & 1) == 0 )
      goto LABEL_8;
LABEL_117:
    *((_BYTE *)v13 + v15) = *((_BYTE *)a3 + v15);
    if ( v9 > 352 )
      goto LABEL_9;
    goto LABEL_127;
  }
LABEL_119:
  *(_WORD *)((char *)v13 + v15) = *(_WORD *)((char *)a3 + v15);
  v15 += 2;
  if ( (v14 & 1) != 0 )
    goto LABEL_117;
LABEL_8:
  if ( v9 > 352 )
  {
LABEL_9:
    BYTE4(v170[2]) = 0;
    goto LABEL_10;
  }
LABEL_127:
  memmove((char *)&v170[2] + 5, (char *)&v170[1] + 5, 0x14Bu);
  *(_QWORD *)((char *)&v170[1] + 5) = 0;
LABEL_10:
  sub_62FF70(a1, (__int64)a2);
  v16 = _mm_loadu_si128((const __m128i *)((char *)v170 + 5));
  *(_WORD *)(a1 + 4) = *(_WORD *)((char *)v170 + 3);
  *(__m128i *)(a1 + 6) = v16;
  sub_63A7F0((__int64)v170, a2, a6, v17, v18, v19);
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 22) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  v20 = BYTE1(v170[17]);
  *(_QWORD *)(a1 + 40) = 0x300000000LL;
  *(_WORD *)(a1 + 4) = *(_WORD *)((char *)v170 + 3);
  setinf_flag(2, 1, v20);
  setinf_flag(2, 128, BYTE3(v170[23]) != 0);
  v21 = *(_WORD *)(a1 + 22);
  v22 = v21 & 0xFFFD;
  v23 = v21 | 2;
  if ( (v170[17] & 0x200000000LL) != 0 )
    v22 = v23;
  v24 = v22;
  v25 = v22 & 0xFFFB;
  v26 = v24 | 4;
  if ( (v170[17] & 0x400000000LL) != 0 )
    v25 = v26;
  v27 = v25;
  v28 = v25 & 0xFFF7;
  v29 = v27 | 8;
  if ( (v170[17] & 0x800000000LL) != 0 )
    v28 = v29;
  v30 = v28;
  v31 = v28 & 0xFFEF;
  v32 = v30 | 0x10;
  if ( (v170[17] & 0x1000000000LL) != 0 )
    v31 = v32;
  v33 = v31;
  v34 = v31 & 0xFFDF;
  v35 = v33 | 0x20;
  if ( (v170[24] & 0x100LL) != 0 )
    v34 = v35;
  v36 = v34;
  v37 = v34 & 0xFFBF;
  v38 = v36 | 0x40;
  v39 = BYTE5(v170[2]);
  if ( (v170[24] & 0x200LL) != 0 )
    v37 = v38;
  *(_WORD *)(a1 + 22) = v37;
  v40 = *(_DWORD *)(a1 + 24);
  v41 = v40 & 0xFFFFFFFE;
  v42 = v40 | 1;
  if ( (v39 & 1) != 0 )
    v41 = v42;
  v43 = v41;
  v44 = v41 & 0xFFFFFFFD;
  v45 = v43 | 2;
  if ( (v39 & 2) != 0 )
    v44 = v45;
  v46 = v44;
  v47 = v44 & 0xFFFFFFFB;
  v48 = v46 | 4;
  if ( (v39 & 4) != 0 )
    v47 = v48;
  v49 = v47;
  v50 = v47 & 0xFFFFFFF7;
  v51 = v49 | 8;
  if ( (v39 & 0x20) != 0 )
    v50 = v51;
  v52 = v50;
  v53 = v50 & 0xFFFFFFEF;
  v54 = v52 | 0x10;
  if ( v39 < 0 )
    v53 = v54;
  v55 = v53;
  LOBYTE(v53) = v53 & 0x7F;
  LOBYTE(v55) = v55 | 0x80;
  if ( (v39 & 8) != 0 )
    v53 = v55;
  v56 = v53;
  BYTE1(v53) &= ~1u;
  BYTE1(v56) |= 1u;
  if ( (v39 & 0x10) != 0 )
    v53 = v56;
  v57 = v53 & 0xFFFFFFDF;
  if ( BYTE6(v170[23]) )
    v57 = v53 | 0x20;
  v58 = v57 & 0xFFFFFFBF;
  if ( LOBYTE(v170[16]) )
    v58 = v57 | 0x40;
  *(_DWORD *)(a1 + 24) = v58;
  v59 = HIBYTE(v170[19]);
  getinf(3);
  v60 = getinf(3);
  if ( v59 == 2 )
  {
    v61 = v60 | 0x400;
  }
  else
  {
    v61 = v60 & 0xFFFFFBFF;
    if ( v59 == 1 )
    {
      v62 = v61 | 0x200;
      goto LABEL_43;
    }
  }
  v62 = v61 & 0xFFFFFDFF;
LABEL_43:
  setinf(3, v62);
  v63 = *(_WORD *)((char *)&v170[6] + 5);
  v64 = _mm_loadu_si128((const __m128i *)((char *)&v170[6] + 7));
  *(_BYTE *)(a1 + 200) = BYTE6(v170[2]);
  v65 = *(_WORD *)((char *)&v170[2] + 7);
  *(__m128i *)(a1 + 72) = v64;
  v66 = _mm_loadu_si128((const __m128i *)((char *)&v170[8] + 7));
  *(_WORD *)(a1 + 32) = v65;
  v67 = *(_DWORD *)((char *)&v170[5] + 1);
  *(__m128i *)(a1 + 104) = v66;
  v68 = _mm_loadu_si128((const __m128i *)((char *)&v170[10] + 7));
  *(_DWORD *)(a1 + 34) = v67;
  v69 = *(_QWORD *)((char *)&v170[5] + 5);
  *(__m128i *)(a1 + 120) = v68;
  v70 = _mm_loadu_si128((const __m128i *)((char *)&v170[12] + 7));
  *(_QWORD *)(a1 + 88) = v69;
  LODWORD(v69) = *(_DWORD *)(a1 + 40);
  *(__m128i *)(a1 + 136) = v70;
  v71 = v69;
  v72 = v69 & 0xFFF7FFFF;
  v73 = v71 | 0x80000;
  if ( (v63 & 1) != 0 )
    v72 = v73;
  v74 = v72;
  v75 = v72 & 0xFFFFFFFD;
  v76 = v74 | 2;
  if ( (v63 & 2) != 0 )
    v75 = v76;
  v77 = v75;
  v78 = v75 & 0xFFFFFFDF;
  v79 = v77 | 0x20;
  if ( (v63 & 4) != 0 )
    v78 = v79;
  v80 = v78;
  v81 = v78 & 0xFFFFFFFE;
  v82 = v80 | 1;
  if ( (v63 & 8) != 0 )
    v81 = v82;
  v83 = v81;
  LOBYTE(v81) = v81 & 0x7F;
  LOBYTE(v83) = v83 | 0x80;
  if ( (v63 & 0x10) != 0 )
    v81 = v83;
  v84 = v81;
  v85 = v81 & 0xFFFFFFEF;
  v86 = v84 | 0x10;
  if ( (v63 & 0x20) != 0 )
    v85 = v86;
  v87 = v85;
  v88 = v85 & 0xFF7FFFFF;
  v89 = v87 | 0x800000;
  if ( (v63 & 0x40) != 0 )
    v88 = v89;
  v90 = v88;
  v91 = v88 & 0xFFFFFFBF;
  v92 = v90 | 0x40;
  if ( (v63 & 0x80u) != 0 )
    v91 = v92;
  v93 = v91;
  v94 = v91 & 0xF7FFFFFF;
  v95 = v93 | 0x8000000;
  if ( (v63 & 0x100) != 0 )
    v94 = v95;
  v96 = v94;
  v97 = v94 & 0xEFFFFFFF;
  v98 = v96 | 0x10000000;
  if ( (v63 & 0x200) != 0 )
    v97 = v98;
  v99 = v97;
  BYTE1(v97) &= ~2u;
  BYTE1(v99) |= 2u;
  if ( (v63 & 0x400) != 0 )
    v97 = v99;
  v100 = v97;
  BYTE1(v97) &= ~0x10u;
  BYTE1(v100) |= 0x10u;
  if ( (v63 & 0x800) != 0 )
    v97 = v100;
  v101 = v97;
  v102 = v97 & 0xFFFDFFFF;
  v103 = v101 | 0x20000;
  if ( (v63 & 0x1000) != 0 )
    v102 = v103;
  v104 = v102;
  v105 = v102 & 0xFFDFFFFF;
  v106 = v104 | 0x200000;
  if ( (v63 & 0x2000) != 0 )
    v105 = v106;
  v107 = v105;
  v108 = v105 & 0xFFEFFFFF;
  v109 = v107 | 0x100000;
  if ( (v63 & 0x4000) != 0 )
    v108 = v109;
  v110 = v108;
  v111 = v108 & 0x7FFFFFFF;
  v112 = v110 | 0x80000000;
  if ( v63 < 0 )
    v111 = v112;
  *(_DWORD *)(a1 + 40) = v111;
  *(_QWORD *)(a1 + 152) = *(_QWORD *)((char *)&v170[14] + 7);
  *(_BYTE *)(a1 + 218) = HIBYTE(v170[15]);
  *(_WORD *)(a1 + 202) = *(_WORD *)((char *)&v170[16] + 1);
  *(_BYTE *)(a1 + 184) = BYTE3(v170[16]);
  *(_BYTE *)(a1 + 39) = BYTE5(v170[16]);
  *(_BYTE *)(a1 + 185) = HIBYTE(v170[16]);
  *(_BYTE *)(a1 + 213) = BYTE2(v170[17]);
  v113 = _mm_loadu_si128((const __m128i *)((char *)&v170[20] + 2));
  v114 = BYTE6(v170[16]);
  *(_BYTE *)(a1 + 38) = HIBYTE(v170[17]);
  v115 = v170[18];
  *(__m128i *)(a1 + 224) = v113;
  *(_QWORD *)(a1 + 48) = v115;
  *(_BYTE *)(a1 + 187) = v170[19];
  *(_WORD *)(a1 + 214) = *(_WORD *)((char *)&v170[19] + 1);
  *(_BYTE *)(a1 + 212) = BYTE3(v170[19]);
  *(_BYTE *)(a1 + 190) = BYTE4(v170[19]);
  *(_BYTE *)(a1 + 216) = BYTE6(v170[19]);
  *(_BYTE *)(a1 + 217) = v170[20];
  *(_BYTE *)(a1 + 201) = BYTE1(v170[20]);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)((char *)&v170[22] + 2);
  *(_BYTE *)(a1 + 219) = BYTE2(v170[23]);
  setinf_flag(44, 2, v114);
  setinf_flag(44, 4, LOBYTE(v170[17]));
  setinf_flag(44, 16, BYTE3(v170[17]) != 0);
  setinf_flag(44, 32, BYTE5(v170[17]));
  setinf_flag(44, 64, BYTE6(v170[17]) != 0);
  setinf_flag(44, 1024, 1);
  v116 = *(_DWORD *)(a1 + 208);
  v117 = v116;
  LOBYTE(v116) = v116 & 0x7F;
  LOBYTE(v117) = v117 | 0x80;
  if ( (v170[17] & 0x100000000LL) != 0 )
    v116 = v117;
  v118 = v116;
  BYTE1(v118) = BYTE1(v116) & 0xFE;
  if ( HIBYTE(v170[23]) )
  {
    BYTE1(v116) |= 1u;
    v118 = v116;
  }
  v119 = v118;
  BYTE1(v119) = BYTE1(v118) & 0xFD;
  if ( LOBYTE(v170[24]) )
  {
    v119 = v118;
    BYTE1(v119) = BYTE1(v118) | 2;
  }
  *(_DWORD *)(a1 + 208) = v119;
  v120 = *(_QWORD *)((char *)&v170[26] + 2);
  v121 = WORD1(v170[31]);
  *(_DWORD *)(a1 + 44) |= 2u;
  v122 = _mm_loadu_si128((const __m128i *)((char *)&v170[24] + 2));
  *(_QWORD *)(a1 + 96) = v120;
  v123 = *(_QWORD *)((char *)&v170[29] + 2);
  v124 = _mm_cvtsi32_si128(*(unsigned int *)((char *)&v170[28] + 2));
  *(__m128i *)(a1 + 56) = v122;
  v125 = _mm_cvtsi32_si128(*(unsigned int *)((char *)&v170[27] + 2));
  *(_QWORD *)(a1 + 248) = v123;
  *(_DWORD *)(a1 + 220) = *(_DWORD *)((char *)&v170[30] + 2);
  LODWORD(v123) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 192) = _mm_unpacklo_epi32(v125, v124).m128i_u64[0];
  v126 = v123;
  v127 = v123 & 0xFFFFFFFB;
  v128 = v126 | 4;
  if ( (v121 & 1) != 0 )
    v127 = v128;
  v129 = v127;
  v130 = v127 & 0xDFFFFFFF;
  v131 = v129 | 0x20000000;
  if ( (v121 & 2) != 0 )
    v130 = v131;
  v132 = v130;
  v133 = v130 & 0xFBFFFFFF;
  v134 = v132 | 0x4000000;
  if ( (v121 & 4) != 0 )
    v133 = v134;
  v135 = v133;
  BYTE1(v133) &= ~4u;
  BYTE1(v135) |= 4u;
  if ( (v121 & 8) != 0 )
    v133 = v135;
  v136 = v133;
  BYTE1(v133) &= ~8u;
  BYTE1(v136) |= 8u;
  if ( (v121 & 0x10) != 0 )
    v133 = v136;
  v137 = v133;
  v138 = v133 & 0xFFFBFFFF;
  v139 = v137 | 0x40000;
  if ( (v121 & 0x20) != 0 )
    v138 = v139;
  v140 = v138;
  v141 = v138 & 0xFEFFFFFF;
  v142 = v140 | 0x1000000;
  if ( (v121 & 0x40) != 0 )
    v141 = v142;
  v143 = v141;
  v144 = v141 & 0xFDFFFFFF;
  v145 = v143 | 0x2000000;
  if ( (v121 & 0x80u) != 0 )
    v144 = v145;
  v146 = v144;
  BYTE1(v144) &= ~1u;
  BYTE1(v146) |= 1u;
  if ( (v121 & 0x100) != 0 )
    v144 = v146;
  v147 = v144;
  v148 = v144 & 0xFFBFFFFF;
  v149 = v147 | 0x400000;
  if ( (v121 & 0x200) != 0 )
    v148 = v149;
  v150 = v148;
  BYTE1(v148) &= ~0x40u;
  BYTE1(v150) |= 0x40u;
  if ( (v121 & 0x400) != 0 )
    v148 = v150;
  v151 = v148;
  BYTE1(v148) &= ~0x20u;
  BYTE1(v151) |= 0x20u;
  if ( (v121 & 0x800) != 0 )
    v148 = v151;
  v152 = v148;
  v153 = v148 & 0xBFFFFFFF;
  v154 = v152 | 0x40000000;
  if ( (v121 & 0x1000) != 0 )
    v153 = v154;
  v155 = v153;
  v156 = v153 & 0xFFFEFFFF;
  v157 = v155 | 0x10000;
  if ( (v121 & 0x2000) != 0 )
    v156 = v157;
  v158 = v156;
  v159 = v156 & 0xFFFFFFF7;
  v160 = v158 | 8;
  if ( (v121 & 0x4000) != 0 )
    v159 = v160;
  v161 = v159;
  BYTE1(v159) &= ~0x80u;
  BYTE1(v161) |= 0x80u;
  if ( v121 < 0 )
    v159 = v161;
  *(_DWORD *)(a1 + 40) = v159;
  *(_WORD *)(a1 + 188) = WORD2(v170[31]);
  *(_DWORD *)(a1 + 204) = *(_DWORD *)((char *)&v170[31] + 6);
  *(_QWORD *)(a1 + 256) = *(_QWORD *)((char *)&v170[34] + 3);
  *(_BYTE *)(a1 + 264) = BYTE3(v170[35]);
  *(_BYTE *)(a1 + 265) = v170[36];
  *(_DWORD *)(a1 + 28) = HIDWORD(v170[35]);
  *(_DWORD *)(a1 + 276) = *(_DWORD *)((char *)&v170[36] + 1);
  v162 = strlen((const char *)&v170[36] + 5);
  v163 = v162;
  if ( v162 )
  {
    v167 = (void *)*a5;
    v168 = v162 + 1;
    if ( a5[2] < v162 + 1 )
    {
      v169 = qvector_reserve(a5, *a5, v162 + 1, 1);
      *a5 = v169;
      v167 = (void *)v169;
    }
    a5[1] = v168;
    memmove(v167, (char *)&v170[36] + 5, v163);
    *(_BYTE *)(*a5 + v163) = 0;
  }
  else
  {
    a5[1] = 0;
  }
  v164 = _mm_loadu_si128((const __m128i *)&v170[41]);
  *(_DWORD *)(a1 + 272) = *(_DWORD *)((char *)&v170[38] + 5);
  v165 = BYTE1(v170[39]);
  *(__m128i *)(a1 + 160) = v164;
  *(_BYTE *)(a1 + 186) = v165;
  *(_QWORD *)(a1 + 176) = v170[40];
  return 1;
}
