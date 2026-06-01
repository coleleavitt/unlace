__int64 __fastcall sub_61EBA0(__int64 a1, const char *a2, _DWORD *a3, int a4, __int64 *a5, unsigned __int8 a6)
{
  __int64 result; // rax
  int v9; // r10d
  _QWORD *v13; // rdi
  char v14; // dl
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
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
  int v66; // ecx
  unsigned int v67; // eax
  int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // eax
  int v74; // ecx
  unsigned int v75; // ecx
  unsigned int v76; // eax
  int v77; // ecx
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  unsigned int v80; // eax
  int v81; // ecx
  unsigned int v82; // ecx
  unsigned int v83; // eax
  int v84; // ecx
  unsigned int v85; // ecx
  unsigned int v86; // eax
  int v87; // ecx
  unsigned int v88; // ecx
  unsigned int v89; // eax
  int v90; // ecx
  unsigned int v91; // ecx
  unsigned int v92; // eax
  int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // eax
  int v98; // ecx
  unsigned int v99; // ecx
  unsigned int v100; // eax
  int v101; // ecx
  unsigned int v102; // ecx
  unsigned int v103; // eax
  int v104; // ecx
  unsigned int v105; // ecx
  int v106; // eax
  unsigned int v107; // ecx
  __m128i v108; // xmm0
  __int64 v109; // rdx
  char v110; // al
  int v111; // eax
  int v112; // edx
  int v113; // edx
  int v114; // eax
  __int64 v115; // rax
  __int16 v116; // dx
  int v117; // ecx
  unsigned int v118; // eax
  int v119; // ecx
  unsigned int v120; // ecx
  unsigned int v121; // eax
  int v122; // ecx
  unsigned int v123; // ecx
  unsigned int v124; // eax
  int v125; // ecx
  unsigned int v126; // ecx
  unsigned int v127; // ecx
  unsigned int v128; // ecx
  unsigned int v129; // eax
  int v130; // ecx
  unsigned int v131; // ecx
  unsigned int v132; // eax
  int v133; // ecx
  unsigned int v134; // ecx
  unsigned int v135; // eax
  int v136; // ecx
  unsigned int v137; // ecx
  unsigned int v138; // ecx
  unsigned int v139; // eax
  int v140; // ecx
  unsigned int v141; // ecx
  unsigned int v142; // ecx
  unsigned int v143; // ecx
  unsigned int v144; // eax
  int v145; // ecx
  unsigned int v146; // ecx
  unsigned int v147; // eax
  int v148; // ecx
  unsigned int v149; // ecx
  unsigned int v150; // eax
  int v151; // ecx
  unsigned int v152; // ecx
  size_t v153; // rax
  size_t v154; // r12
  __int64 v155; // rcx
  void *v156; // rdi
  size_t v157; // r14
  __int64 v158; // rax
  _QWORD v159[39]; // [rsp+0h] [rbp-138h] BYREF

  result = 0;
  v159[33] = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return result;
  v9 = a4;
  memset(v159, 0, 0x108u);
  qmemcpy(v159, "IDA", 3);
  LOWORD(v159[11]) = 257;
  *(_WORD *)((char *)&v159[16] + 7) = 257;
  *(_WORD *)((char *)&v159[6] + 5) = -1;
  *(_WORD *)((char *)&v159[10] + 3) = 258;
  v13 = v159;
  BYTE5(v159[2]) = 1;
  *(_QWORD *)((char *)&v159[4] + 5) = -1;
  *(_QWORD *)((char *)&v159[5] + 5) = -1;
  *(_DWORD *)((char *)&v159[8] + 3) = -1;
  *(_DWORD *)((char *)&v159[9] + 3) = 16;
  HIBYTE(v159[9]) = 10;
  HIBYTE(v159[10]) = 2;
  *(_WORD *)((char *)&v159[11] + 3) = 513;
  BYTE6(v159[11]) = 1;
  BYTE4(v159[12]) = 15;
  HIBYTE(v159[12]) = 1;
  *(_DWORD *)((char *)&v159[13] + 2) = 252772609;
  BYTE6(v159[13]) = 97;
  BYTE1(v159[17]) = 1;
  *(_QWORD *)((char *)&v159[19] + 2) = 0x706400007LL;
  *(_DWORD *)((char *)&v159[20] + 6) = 33526781;
  WORD2(v159[21]) = 80;
  LODWORD(v159[24]) = 67372051;
  *(_WORD *)((char *)&v159[24] + 5) = 1026;
  HIBYTE(v159[24]) = 8;
  BYTE5(v159[28]) = 1;
  *(__m128i *)((char *)&v159[17] + 2) = _mm_load_si128((const __m128i *)&xmmword_2383D50);
  v159[30] = 0xFF100000FF000000LL;
  if ( (unsigned __int64)a4 > 0x108 )
    a4 = 264;
  v14 = a4;
  if ( (unsigned int)a4 >= 8 )
  {
    v155 = (unsigned int)a4 >> 3;
    v15 = 0;
    qmemcpy(v159, a3, 8 * v155);
    a3 += 2 * v155;
    v13 = &v159[v155];
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
    if ( v9 > 256 )
      goto LABEL_9;
    goto LABEL_127;
  }
LABEL_119:
  *(_WORD *)((char *)v13 + v15) = *(_WORD *)((char *)a3 + v15);
  v15 += 2;
  if ( (v14 & 1) != 0 )
    goto LABEL_117;
LABEL_8:
  if ( v9 > 256 )
  {
LABEL_9:
    BYTE4(v159[2]) = 0;
    goto LABEL_10;
  }
LABEL_127:
  memmove((char *)&v159[2] + 5, (char *)&v159[1] + 5, 0xEBu);
  *(_QWORD *)((char *)&v159[1] + 5) = 0;
LABEL_10:
  sub_613490(a1, (__int64)a2);
  v16 = _mm_loadu_si128((const __m128i *)((char *)v159 + 5));
  *(_WORD *)(a1 + 4) = *(_WORD *)((char *)v159 + 3);
  *(__m128i *)(a1 + 6) = v16;
  sub_61D8B0((__int64)v159, a2, a6, v17, v18, v19);
  v20 = BYTE1(v159[11]);
  *(_DWORD *)(a1 + 24) = 0;
  *(_WORD *)(a1 + 22) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 40) = 0x300000000LL;
  *(_WORD *)(a1 + 4) = *(_WORD *)((char *)v159 + 3);
  setinf_flag(2, 1, v20);
  setinf_flag(2, 128, BYTE3(v159[16]) != 0);
  v21 = *(_WORD *)(a1 + 22);
  v22 = v21 & 0xFFFD;
  v23 = v21 | 2;
  if ( (v159[11] & 0x200000000LL) != 0 )
    v22 = v23;
  v24 = v22;
  v25 = v22 & 0xFFFB;
  v26 = v24 | 4;
  if ( (v159[11] & 0x400000000LL) != 0 )
    v25 = v26;
  v27 = v25;
  v28 = v25 & 0xFFF7;
  v29 = v27 | 8;
  if ( (v159[11] & 0x800000000LL) != 0 )
    v28 = v29;
  v30 = v28;
  v31 = v28 & 0xFFEF;
  v32 = v30 | 0x10;
  if ( (v159[11] & 0x1000000000LL) != 0 )
    v31 = v32;
  v33 = v31;
  v34 = v31 & 0xFFDF;
  v35 = v33 | 0x20;
  if ( (v159[17] & 0x100LL) != 0 )
    v34 = v35;
  v36 = v34;
  v37 = v34 & 0xFFBF;
  v38 = v36 | 0x40;
  v39 = BYTE5(v159[2]);
  if ( (v159[17] & 0x200LL) != 0 )
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
  if ( BYTE6(v159[16]) )
    v57 = v53 | 0x20;
  v58 = v57 & 0xFFFFFFBF;
  if ( LOBYTE(v159[10]) )
    v58 = v57 | 0x40;
  *(_DWORD *)(a1 + 24) = v58;
  v59 = BYTE3(v159[13]);
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
  v63 = *(_WORD *)((char *)&v159[5] + 1);
  v64 = _mm_loadu_si128((const __m128i *)((char *)&v159[6] + 3));
  *(_BYTE *)(a1 + 132) = BYTE6(v159[2]);
  v65 = *(_WORD *)((char *)&v159[2] + 7);
  *(__m128i *)(a1 + 76) = v64;
  *(_WORD *)(a1 + 32) = v65;
  *(_DWORD *)(a1 + 34) = *(_DWORD *)((char *)&v159[4] + 1);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)((char *)&v159[4] + 5);
  v66 = *(_DWORD *)(a1 + 40);
  v67 = v66 & 0xFFF7FFFF;
  v68 = v66 | 0x80000;
  if ( (v63 & 1) != 0 )
    v67 = v68;
  v69 = v67;
  v70 = v67 & 0xFFFFFFFD;
  v71 = v69 | 2;
  if ( (v63 & 2) != 0 )
    v70 = v71;
  v72 = v70;
  v73 = v70 & 0xFFFFFFDF;
  v74 = v72 | 0x20;
  if ( (v63 & 4) != 0 )
    v73 = v74;
  v75 = v73;
  v76 = v73 & 0xFFFFFFFE;
  v77 = v75 | 1;
  if ( (v63 & 8) != 0 )
    v76 = v77;
  v78 = v76;
  LOBYTE(v76) = v76 & 0x7F;
  LOBYTE(v78) = v78 | 0x80;
  if ( (v63 & 0x10) != 0 )
    v76 = v78;
  v79 = v76;
  v80 = v76 & 0xFFFFFFEF;
  v81 = v79 | 0x10;
  if ( (v63 & 0x20) != 0 )
    v80 = v81;
  v82 = v80;
  v83 = v80 & 0xFF7FFFFF;
  v84 = v82 | 0x800000;
  if ( (v63 & 0x40) != 0 )
    v83 = v84;
  v85 = v83;
  v86 = v83 & 0xFFFFFFBF;
  v87 = v85 | 0x40;
  if ( (v63 & 0x80u) != 0 )
    v86 = v87;
  v88 = v86;
  v89 = v86 & 0xF7FFFFFF;
  v90 = v88 | 0x8000000;
  if ( (v63 & 0x100) != 0 )
    v89 = v90;
  v91 = v89;
  v92 = v89 & 0xEFFFFFFF;
  v93 = v91 | 0x10000000;
  if ( (v63 & 0x200) != 0 )
    v92 = v93;
  v94 = v92;
  BYTE1(v92) &= ~2u;
  BYTE1(v94) |= 2u;
  if ( (v63 & 0x400) != 0 )
    v92 = v94;
  v95 = v92;
  BYTE1(v92) &= ~0x10u;
  BYTE1(v95) |= 0x10u;
  if ( (v63 & 0x800) != 0 )
    v92 = v95;
  v96 = v92;
  v97 = v92 & 0xFFFDFFFF;
  v98 = v96 | 0x20000;
  if ( (v63 & 0x1000) != 0 )
    v97 = v98;
  v99 = v97;
  v100 = v97 & 0xFFDFFFFF;
  v101 = v99 | 0x200000;
  if ( (v63 & 0x2000) != 0 )
    v100 = v101;
  v102 = v100;
  v103 = v100 & 0xFFEFFFFF;
  v104 = v102 | 0x100000;
  if ( (v63 & 0x4000) != 0 )
    v103 = v104;
  v105 = v103;
  v106 = v103 & 0x7FFFFFFF;
  v107 = v105 | 0x80000000;
  if ( v63 < 0 )
    v106 = v107;
  *(_DWORD *)(a1 + 40) = v106;
  *(_QWORD *)(a1 + 60) = *(_QWORD *)((char *)&v159[5] + 3);
  *(_QWORD *)(a1 + 92) = *(_QWORD *)((char *)&v159[8] + 3);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)((char *)&v159[9] + 3);
  *(_BYTE *)(a1 + 150) = HIBYTE(v159[9]);
  *(_WORD *)(a1 + 134) = *(_WORD *)((char *)&v159[10] + 1);
  *(_BYTE *)(a1 + 116) = BYTE3(v159[10]);
  *(_BYTE *)(a1 + 39) = BYTE5(v159[10]);
  *(_BYTE *)(a1 + 117) = HIBYTE(v159[10]);
  *(_BYTE *)(a1 + 145) = BYTE2(v159[11]);
  *(_BYTE *)(a1 + 38) = HIBYTE(v159[11]);
  v108 = _mm_loadu_si128((const __m128i *)((char *)&v159[13] + 6));
  v109 = BYTE6(v159[10]);
  *(_DWORD *)(a1 + 48) = v159[12];
  v110 = BYTE4(v159[12]);
  *(__m128i *)(a1 + 156) = v108;
  *(_BYTE *)(a1 + 119) = v110;
  *(_WORD *)(a1 + 146) = *(_WORD *)((char *)&v159[12] + 5);
  *(_BYTE *)(a1 + 144) = HIBYTE(v159[12]);
  *(_BYTE *)(a1 + 122) = v159[13];
  *(_BYTE *)(a1 + 148) = BYTE2(v159[13]);
  *(_BYTE *)(a1 + 149) = BYTE4(v159[13]);
  *(_BYTE *)(a1 + 133) = BYTE5(v159[13]);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)((char *)&v159[15] + 6);
  *(_BYTE *)(a1 + 151) = BYTE2(v159[16]);
  setinf_flag(44, 2, v109);
  setinf_flag(44, 4, LOBYTE(v159[11]));
  setinf_flag(44, 16, BYTE3(v159[11]) != 0);
  setinf_flag(44, 32, BYTE5(v159[11]));
  setinf_flag(44, 64, BYTE6(v159[11]) != 0);
  setinf_flag(44, 1024, 1);
  v111 = *(_DWORD *)(a1 + 140);
  v112 = v111;
  LOBYTE(v111) = v111 & 0x7F;
  LOBYTE(v112) = v112 | 0x80;
  if ( (v159[11] & 0x100000000LL) != 0 )
    v111 = v112;
  v113 = v111;
  BYTE1(v113) = BYTE1(v111) & 0xFE;
  if ( HIBYTE(v159[16]) )
  {
    BYTE1(v111) |= 1u;
    v113 = v111;
  }
  v114 = v113;
  BYTE1(v114) = BYTE1(v113) & 0xFD;
  if ( LOBYTE(v159[17]) )
  {
    v114 = v113;
    BYTE1(v114) = BYTE1(v113) | 2;
  }
  *(_DWORD *)(a1 + 140) = v114;
  v115 = *(_QWORD *)((char *)&v159[17] + 2);
  v116 = HIWORD(v159[20]);
  *(_DWORD *)(a1 + 44) |= 2u;
  *(_QWORD *)(a1 + 52) = v115;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)((char *)&v159[18] + 2);
  *(_QWORD *)(a1 + 124) = *(_QWORD *)((char *)&v159[18] + 6);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)((char *)&v159[19] + 6);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)((char *)&v159[20] + 2);
  v117 = *(_DWORD *)(a1 + 40);
  v118 = v117 & 0xFFFFFFFB;
  v119 = v117 | 4;
  if ( (v116 & 1) != 0 )
    v118 = v119;
  v120 = v118;
  v121 = v118 & 0xDFFFFFFF;
  v122 = v120 | 0x20000000;
  if ( (v116 & 2) != 0 )
    v121 = v122;
  v123 = v121;
  v124 = v121 & 0xFBFFFFFF;
  v125 = v123 | 0x4000000;
  if ( (v116 & 4) != 0 )
    v124 = v125;
  v126 = v124;
  BYTE1(v124) &= ~4u;
  BYTE1(v126) |= 4u;
  if ( (v116 & 8) != 0 )
    v124 = v126;
  v127 = v124;
  BYTE1(v124) &= ~8u;
  BYTE1(v127) |= 8u;
  if ( (v116 & 0x10) != 0 )
    v124 = v127;
  v128 = v124;
  v129 = v124 & 0xFFFBFFFF;
  v130 = v128 | 0x40000;
  if ( (v116 & 0x20) != 0 )
    v129 = v130;
  v131 = v129;
  v132 = v129 & 0xFEFFFFFF;
  v133 = v131 | 0x1000000;
  if ( (v116 & 0x40) != 0 )
    v132 = v133;
  v134 = v132;
  v135 = v132 & 0xFDFFFFFF;
  v136 = v134 | 0x2000000;
  if ( (v116 & 0x80u) != 0 )
    v135 = v136;
  v137 = v135;
  BYTE1(v135) &= ~1u;
  BYTE1(v137) |= 1u;
  if ( (v116 & 0x100) != 0 )
    v135 = v137;
  v138 = v135;
  v139 = v135 & 0xFFBFFFFF;
  v140 = v138 | 0x400000;
  if ( (v116 & 0x200) != 0 )
    v139 = v140;
  v141 = v139;
  BYTE1(v139) &= ~0x40u;
  BYTE1(v141) |= 0x40u;
  if ( (v116 & 0x400) != 0 )
    v139 = v141;
  v142 = v139;
  BYTE1(v139) &= ~0x20u;
  BYTE1(v142) |= 0x20u;
  if ( (v116 & 0x800) != 0 )
    v139 = v142;
  v143 = v139;
  v144 = v139 & 0xBFFFFFFF;
  v145 = v143 | 0x40000000;
  if ( (v116 & 0x1000) != 0 )
    v144 = v145;
  v146 = v144;
  v147 = v144 & 0xFFFEFFFF;
  v148 = v146 | 0x10000;
  if ( (v116 & 0x2000) != 0 )
    v147 = v148;
  v149 = v147;
  v150 = v147 & 0xFFFFFFF7;
  v151 = v149 | 8;
  if ( (v116 & 0x4000) != 0 )
    v150 = v151;
  v152 = v150;
  BYTE1(v150) &= ~0x80u;
  BYTE1(v152) |= 0x80u;
  if ( v116 < 0 )
    v150 = v152;
  *(_DWORD *)(a1 + 40) = v150;
  *(_WORD *)(a1 + 120) = v159[21];
  *(_DWORD *)(a1 + 136) = *(_DWORD *)((char *)&v159[21] + 2);
  *(_QWORD *)(a1 + 180) = *(_QWORD *)((char *)&v159[23] + 7);
  *(_BYTE *)(a1 + 188) = HIBYTE(v159[24]);
  *(_BYTE *)(a1 + 189) = BYTE4(v159[25]);
  *(_DWORD *)(a1 + 28) = v159[25];
  *(_DWORD *)(a1 + 200) = *(_DWORD *)((char *)&v159[25] + 5);
  v153 = strlen((const char *)&v159[26] + 1);
  v154 = v153;
  if ( v153 )
  {
    v156 = (void *)*a5;
    v157 = v153 + 1;
    if ( a5[2] < v153 + 1 )
    {
      v158 = qvector_reserve(a5, *a5, v153 + 1, 1);
      *a5 = v158;
      v156 = (void *)v158;
    }
    a5[1] = v157;
    memmove(v156, (char *)&v159[26] + 1, v154);
    *(_BYTE *)(*a5 + v154) = 0;
  }
  else
  {
    a5[1] = 0;
  }
  *(_DWORD *)(a1 + 196) = *(_DWORD *)((char *)&v159[28] + 1);
  *(_BYTE *)(a1 + 118) = BYTE5(v159[28]);
  *(_DWORD *)(a1 + 112) = HIDWORD(v159[29]);
  *(_QWORD *)(a1 + 104) = v159[30];
  return 1;
}

