void __fastcall sub_1081610(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // r15
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const char *v25; // rax
  char v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  size_t v33; // rdx
  char v34; // cl
  const void *v35; // r13
  _BYTE *v36; // rax
  __int64 v37; // r13
  _QWORD *v38; // rdx
  __int64 v39; // rax
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  __int64 v42; // r13
  __m128i *v43; // rdx
  unsigned __int64 v44; // rax
  _BYTE *v45; // rax
  _BYTE *v46; // rax
  __int64 v47; // r13
  __m128i *v48; // rdx
  unsigned __int64 v49; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rax
  __int64 v52; // r13
  __m128i *v53; // rdx
  unsigned __int64 v54; // rax
  _BYTE *v55; // rax
  _BYTE *v56; // rax
  __int64 v57; // r13
  __m128i *v58; // rdx
  unsigned __int64 v59; // rax
  _BYTE *v60; // rax
  _BYTE *v61; // rax
  __int64 v62; // r15
  __int64 v63; // rax
  _QWORD *v64; // rdx
  _BYTE *v65; // rax
  _BYTE *v66; // rax
  __int64 v67; // r15
  __m128i *v68; // rcx
  unsigned __int64 v69; // rdx
  _BYTE *v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  _BYTE *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rax
  _BYTE *v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  _BYTE *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r15
  __m128i *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rbx
  __m128i *v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  char *v115; // rax
  const char *v116; // rax
  __m128i si128; // xmm0
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rax
  __m128i *v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rax
  __m128i *v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __m128i v147; // xmm0
  __m128i v148; // xmm0
  __m128i v149; // xmm0
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  const char *v153; // rax
  char *v154; // rax
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rcx
  __int64 *v160; // rdi
  __int64 *v161; // rsi
  char *v162; // rax
  __int64 *v163; // rdi
  __int64 *v164; // rsi
  __int64 v165; // r8
  __int64 v166; // r9
  const char *v167; // rax
  __int64 v168; // rcx
  __int64 *v169; // rdi
  __int64 *v170; // rsi
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rcx
  __int64 *v174; // rdi
  __int64 *v175; // rsi
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rcx
  __int64 *v179; // rdi
  __int64 *v180; // rsi
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 *v184; // rdi
  __int64 *v185; // rsi
  __int64 v186; // [rsp-30h] [rbp-128h] BYREF
  __int64 v187; // [rsp-28h] [rbp-120h]
  __int64 v188; // [rsp-20h] [rbp-118h]
  __int64 v189; // [rsp-18h] [rbp-110h]
  __int64 v190; // [rsp-10h] [rbp-108h]
  __int64 v191; // [rsp+0h] [rbp-F8h]
  __int64 v192; // [rsp+8h] [rbp-F0h]
  void *v193[2]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v194[16]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v195[4]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v196; // [rsp+50h] [rbp-A8h]
  _QWORD v197[4]; // [rsp+60h] [rbp-98h] BYREF
  __int16 v198; // [rsp+80h] [rbp-78h]
  __int64 v199; // [rsp+90h] [rbp-68h] BYREF
  __int64 v200; // [rsp+98h] [rbp-60h]
  __int64 v201; // [rsp+A0h] [rbp-58h]
  __int64 v202; // [rsp+A8h] [rbp-50h]
  __int64 v203; // [rsp+B0h] [rbp-48h]

  v5 = *a3;
  v198 = 259;
  v195[0] = "__qdsp6__";
  v6 = *(_QWORD **)(v5 + 32);
  v196 = 259;
  LOWORD(v203) = 257;
  v7 = *(_QWORD *)(v5 + 24);
  v191 = a2;
  v197[0] = "1";
  if ( (unsigned __int64)(v7 - (_QWORD)v6) > 7 )
  {
    *v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_227BF10(v5, "#define ", 8);
  }
  sub_2254180(v195, v5);
  v8 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v5 + 24) )
  {
    v5 = sub_227BA10(v5, 32);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v8 + 1;
    *v8 = 32;
  }
  sub_2254180(v197, v5);
  v9 = *(_BYTE **)(v5 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v5 + 24) )
  {
    sub_227BA10(v5, 10);
  }
  else
  {
    *(_QWORD *)(v5 + 32) = v9 + 1;
    *v9 = 10;
  }
  v10 = *a3;
  v11 = *(__m128i **)(*a3 + 32);
  v12 = *(_QWORD *)(*a3 + 24) - (_QWORD)v11;
  if ( (unsigned __int8)v203 > 1u )
  {
    if ( v12 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v11[1].m128i_i8[8] = 40;
      v11[1].m128i_i64[0] = 0x6465746163657270LL;
      *v11 = si128;
      *(_QWORD *)(v10 + 32) += 25LL;
    }
    else
    {
      v10 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v10);
    v94 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v94) > 2 )
    {
      *(_BYTE *)(v94 + 2) = 34;
      *(_WORD *)v94 = 8236;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      v10 = sub_227BF10(v10, ", \"", 3);
    }
    sub_2254180(&v199, v10);
    v95 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v95) > 2 )
    {
      *(_BYTE *)(v95 + 2) = 10;
      *(_WORD *)v95 = 10530;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v10, "\")\n", 3);
    }
    v10 = *a3;
    v11 = *(__m128i **)(*a3 + 32);
    v12 = *(_QWORD *)(*a3 + 24) - (_QWORD)v11;
  }
  v197[0] = "1";
  v195[0] = "__hexagon__";
  v198 = 259;
  v196 = 259;
  LOWORD(v203) = 257;
  if ( v12 > 7 )
  {
    v11->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v10 + 32) += 8LL;
  }
  else
  {
    v10 = sub_227BF10(v10, "#define ", 8);
  }
  sub_2254180(v195, v10);
  v13 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v10 + 24) )
  {
    v10 = sub_227BA10(v10, 32);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v13 + 1;
    *v13 = 32;
  }
  sub_2254180(v197, v10);
  v14 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v14 + 1;
    *v14 = 10;
  }
  if ( (unsigned __int8)v203 > 1u )
  {
    v90 = *a3;
    v91 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v91 > 0x18u )
    {
      v118 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v91[1].m128i_i8[8] = 40;
      v91[1].m128i_i64[0] = 0x6465746163657270LL;
      *v91 = v118;
      *(_QWORD *)(v90 + 32) += 25LL;
    }
    else
    {
      v90 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v90);
    v92 = *(_QWORD *)(v90 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v90 + 24) - v92) > 2 )
    {
      *(_BYTE *)(v92 + 2) = 34;
      *(_WORD *)v92 = 8236;
      *(_QWORD *)(v90 + 32) += 3LL;
    }
    else
    {
      v90 = sub_227BF10(v90, ", \"", 3);
    }
    sub_2254180(&v199, v90);
    v93 = *(_QWORD *)(v90 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v90 + 24) - v93) > 2 )
    {
      *(_BYTE *)(v93 + 2) = 10;
      *(_WORD *)v93 = 10530;
      *(_QWORD *)(v90 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v90, "\")\n", 3);
    }
  }
  if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv5") )
  {
    v62 = *a3;
    v198 = 259;
    v195[0] = "__HEXAGON_V5__";
    v63 = *(_QWORD *)(v62 + 24);
    v196 = 259;
    v64 = *(_QWORD **)(v62 + 32);
    v197[0] = "1";
    LOWORD(v203) = 257;
    if ( (unsigned __int64)(v63 - (_QWORD)v64) > 7 )
    {
      *v64 = 0x20656E6966656423LL;
      *(_QWORD *)(v62 + 32) += 8LL;
    }
    else
    {
      v62 = sub_227BF10(v62, "#define ", 8);
    }
    sub_2254180(v195, v62);
    v65 = *(_BYTE **)(v62 + 32);
    if ( (unsigned __int64)v65 >= *(_QWORD *)(v62 + 24) )
    {
      v62 = sub_227BA10(v62, 32);
    }
    else
    {
      *(_QWORD *)(v62 + 32) = v65 + 1;
      *v65 = 32;
    }
    sub_2254180(v197, v62);
    v66 = *(_BYTE **)(v62 + 32);
    if ( (unsigned __int64)v66 >= *(_QWORD *)(v62 + 24) )
    {
      sub_227BA10(v62, 10);
    }
    else
    {
      *(_QWORD *)(v62 + 32) = v66 + 1;
      *v66 = 10;
    }
    v67 = *a3;
    v68 = *(__m128i **)(*a3 + 32);
    v69 = *(_QWORD *)(*a3 + 24) - (_QWORD)v68;
    if ( (unsigned __int8)v203 > 1u )
    {
      if ( v69 > 0x18 )
      {
        v148 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v68[1].m128i_i8[8] = 40;
        v68[1].m128i_i64[0] = 0x6465746163657270LL;
        *v68 = v148;
        *(_QWORD *)(v67 + 32) += 25LL;
      }
      else
      {
        v67 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v195, v67);
      v135 = *(_QWORD *)(v67 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v67 + 24) - v135) > 2 )
      {
        *(_BYTE *)(v135 + 2) = 34;
        *(_WORD *)v135 = 8236;
        *(_QWORD *)(v67 + 32) += 3LL;
      }
      else
      {
        v67 = sub_227BF10(v67, ", \"", 3);
      }
      sub_2254180(&v199, v67);
      v136 = *(_QWORD *)(v67 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v67 + 24) - v136) > 2 )
      {
        *(_BYTE *)(v136 + 2) = 10;
        *(_WORD *)v136 = 10530;
        *(_QWORD *)(v67 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v67, "\")\n", 3);
      }
      v67 = *a3;
      v68 = *(__m128i **)(*a3 + 32);
      v69 = *(_QWORD *)(*a3 + 24) - (_QWORD)v68;
    }
    v197[0] = "5";
    v198 = 259;
    v195[0] = "__HEXAGON_ARCH__";
    v196 = 259;
    LOWORD(v203) = 257;
    if ( v69 > 7 )
    {
      v68->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v67 + 32) += 8LL;
    }
    else
    {
      v67 = sub_227BF10(v67, "#define ", 8);
    }
    sub_2254180(v195, v67);
    v70 = *(_BYTE **)(v67 + 32);
    if ( (unsigned __int64)v70 >= *(_QWORD *)(v67 + 24) )
    {
      v67 = sub_227BA10(v67, 32);
    }
    else
    {
      *(_QWORD *)(v67 + 32) = v70 + 1;
      *v70 = 32;
    }
    sub_2254180(v197, v67);
    v73 = *(_BYTE **)(v67 + 32);
    if ( (unsigned __int64)v73 >= *(_QWORD *)(v67 + 24) )
    {
      sub_227BA10(v67, 10);
      if ( (unsigned __int8)v203 <= 1u )
        goto LABEL_79;
    }
    else
    {
      *(_QWORD *)(v67 + 32) = v73 + 1;
      *v73 = 10;
      if ( (unsigned __int8)v203 <= 1u )
      {
LABEL_79:
        if ( (*(_BYTE *)(v191 + 107) & 2) == 0 )
          goto LABEL_20;
        v198 = 259;
        v195[0] = "__QDSP6_V5__";
        v196 = 259;
        LOWORD(v203) = 257;
        v197[0] = "1";
        sub_1039E30(a3, (__int64)v195, (__int64)v197, 257, v71, v72, v199, v200, v201, v202, 1u);
        v23 = 257;
        v24 = 259;
        v197[0] = "5";
        v25 = "__QDSP6_ARCH__";
        LOWORD(v203) = 257;
        v198 = 259;
        goto LABEL_18;
      }
    }
    v129 = *a3;
    v130 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v130 > 0x18u )
    {
      v147 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v130[1].m128i_i8[8] = 40;
      v130[1].m128i_i64[0] = 0x6465746163657270LL;
      *v130 = v147;
      *(_QWORD *)(v129 + 32) += 25LL;
    }
    else
    {
      v129 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v192 = v129;
    sub_2254180(v195, v129);
    v131 = v192;
    v132 = *(_QWORD *)(v192 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v192 + 24) - v132) > 2 )
    {
      *(_BYTE *)(v132 + 2) = 34;
      *(_WORD *)v132 = 8236;
      *(_QWORD *)(v131 + 32) += 3LL;
    }
    else
    {
      v131 = sub_227BF10(v192, ", \"", 3);
    }
    v192 = v131;
    sub_2254180(&v199, v131);
    v133 = v192;
    v134 = *(_QWORD *)(v192 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v192 + 24) - v134) > 2 )
    {
      *(_BYTE *)(v134 + 2) = 10;
      *(_WORD *)v134 = 10530;
      *(_QWORD *)(v133 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v192, "\")\n", 3);
    }
    goto LABEL_79;
  }
  if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv55") )
  {
    LOWORD(v203) = 257;
    v198 = 259;
    v196 = 259;
    v195[0] = "__HEXAGON_V55__";
    v197[0] = "1";
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v15, 257, 259, v199, v200, v201, v202, 1u);
    v198 = 259;
    v195[0] = "__HEXAGON_ARCH__";
    LOWORD(v203) = 257;
    v196 = 259;
    v197[0] = "55";
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v16, v17, v18, v199, v200, v201, v202, 1u);
    LOWORD(v203) = 257;
    v198 = 259;
    v195[0] = "__QDSP6_V55__";
    v196 = 259;
    v197[0] = "1";
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v19, v20, v21, v199, v200, v201, v202, 1u);
    v197[0] = "55";
    v198 = 259;
    LOWORD(v203) = 257;
    v25 = "__QDSP6_ARCH__";
LABEL_18:
    v195[0] = v25;
    v196 = 259;
    v190 = v203;
    v189 = v202;
    v188 = v201;
    v187 = v200;
    v186 = v199;
LABEL_19:
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v22, v23, v24, v186, v187, v188, v189, v190);
LABEL_20:
    v26 = 0;
    goto LABEL_21;
  }
  if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv60") )
  {
    v197[0] = "1";
    v198 = 259;
    LOWORD(v203) = 257;
    v195[0] = "__HEXAGON_V60__";
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v108, v109, v110, v199, v200, v201, v202, 1u);
    LOWORD(v203) = 257;
    v198 = 259;
    v195[0] = "__HEXAGON_ARCH__";
    v196 = 259;
    v197[0] = "60";
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v124, v125, v126, v199, v200, v201, v202, 1u);
    LOWORD(v203) = 257;
    v198 = 259;
    v195[0] = "__QDSP6_V60__";
    v197[0] = "1";
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, 259, v127, v128, v199, v200, v201, v202, 1u);
    v197[0] = "60";
    LOWORD(v203) = 257;
    v116 = "__QDSP6_ARCH__";
    v198 = 259;
    goto LABEL_171;
  }
  if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv62") )
  {
    if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv65") )
    {
      LOWORD(v203) = 257;
      v195[0] = "__HEXAGON_V65__";
      v196 = 259;
      v197[0] = "1";
      v198 = 259;
      sub_1039E30(a3, (__int64)v195, (__int64)v197, 259, v142, v143, v199, v200, v201, v202, 1u);
      v115 = "65";
      LOWORD(v203) = 257;
      goto LABEL_154;
    }
    if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv66") )
    {
      v197[0] = "1";
      LOWORD(v203) = 257;
      v198 = 259;
      v195[0] = "__HEXAGON_V66__";
      v196 = 259;
      sub_1039E30(a3, (__int64)v195, (__int64)v197, v144, v145, v146, v199, v200, v201, v202, 1u);
      LOWORD(v203) = 257;
      v115 = "66";
      goto LABEL_154;
    }
    if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv67") )
    {
      v197[0] = "1";
      v153 = "__HEXAGON_V67__";
      LOWORD(v203) = 257;
      v198 = 259;
LABEL_228:
      v195[0] = v153;
      v196 = 259;
      sub_1039E30(a3, (__int64)v195, (__int64)v197, v150, v151, v152, v199, v200, v201, v202, v203);
      v23 = 257;
      v154 = "67";
      LOWORD(v203) = 257;
LABEL_229:
      v197[0] = v154;
      v198 = 259;
      v25 = "__HEXAGON_ARCH__";
      goto LABEL_18;
    }
    if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv67t") )
    {
      v152 = 257;
      v197[0] = "1";
      v153 = "__HEXAGON_V67T__";
      LOWORD(v203) = 257;
      v198 = 259;
      goto LABEL_228;
    }
    if ( !sub_9B4AA0((__int64)(a1 + 64), "hexagonv68") )
    {
      v197[0] = "1";
      LOWORD(v203) = 257;
      v198 = 259;
      v195[0] = "__HEXAGON_V68__";
      v196 = 259;
      sub_1039E30(a3, (__int64)v195, (__int64)v197, 259, v155, v156, v199, v200, v201, v202, 1u);
      v154 = "68";
      LOWORD(v203) = 257;
      goto LABEL_229;
    }
    if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv69") )
    {
      if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv71") )
      {
        if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv71t") )
        {
          if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv73") )
          {
            if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv75") )
            {
              if ( sub_9B4AA0((__int64)(a1 + 64), "hexagonv79") )
                goto LABEL_20;
              v197[0] = "1";
              v195[0] = "__HEXAGON_V79__";
              v183 = 10;
              LOWORD(v203) = 257;
              v198 = 259;
              v196 = 259;
              v184 = &v186;
              v185 = &v199;
              while ( v183 )
              {
                *(_DWORD *)v184 = *(_DWORD *)v185;
                v185 = (__int64 *)((char *)v185 + 4);
                v184 = (__int64 *)((char *)v184 + 4);
                --v183;
              }
              sub_1039E30(a3, (__int64)v195, (__int64)v197, 0, v181, v182, v186, v187, v188, v189, v190);
              v162 = "79";
              LOWORD(v203) = 257;
            }
            else
            {
              v197[0] = "1";
              v195[0] = "__HEXAGON_V75__";
              v178 = 10;
              LOWORD(v203) = 257;
              v198 = 259;
              v196 = 259;
              v179 = &v186;
              v180 = &v199;
              while ( v178 )
              {
                *(_DWORD *)v179 = *(_DWORD *)v180;
                v180 = (__int64 *)((char *)v180 + 4);
                v179 = (__int64 *)((char *)v179 + 4);
                --v178;
              }
              sub_1039E30(a3, (__int64)v195, (__int64)v197, 0, v176, v177, v186, v187, v188, v189, v190);
              v162 = "75";
              LOWORD(v203) = 257;
            }
          }
          else
          {
            v197[0] = "1";
            v195[0] = "__HEXAGON_V73__";
            v173 = 10;
            LOWORD(v203) = 257;
            v198 = 259;
            v196 = 259;
            v174 = &v186;
            v175 = &v199;
            while ( v173 )
            {
              *(_DWORD *)v174 = *(_DWORD *)v175;
              v175 = (__int64 *)((char *)v175 + 4);
              v174 = (__int64 *)((char *)v174 + 4);
              --v173;
            }
            sub_1039E30(a3, (__int64)v195, (__int64)v197, 0, v171, v172, v186, v187, v188, v189, v190);
            v162 = "73";
            LOWORD(v203) = 257;
          }
          goto LABEL_239;
        }
        v197[0] = "1";
        v167 = "__HEXAGON_V71T__";
        LOWORD(v203) = 257;
        v198 = 259;
      }
      else
      {
        v197[0] = "1";
        v167 = "__HEXAGON_V71__";
        LOWORD(v203) = 257;
        v198 = 259;
      }
      v195[0] = v167;
      v168 = 10;
      v196 = 259;
      v169 = &v186;
      v170 = &v199;
      while ( v168 )
      {
        *(_DWORD *)v169 = *(_DWORD *)v170;
        v170 = (__int64 *)((char *)v170 + 4);
        v169 = (__int64 *)((char *)v169 + 4);
        --v168;
      }
      sub_1039E30(a3, (__int64)v195, (__int64)v197, 0, v165, v166, v186, v187, v188, v189, v190);
      v162 = "71";
      LOWORD(v203) = 257;
    }
    else
    {
      v197[0] = "1";
      v195[0] = "__HEXAGON_V69__";
      v159 = 10;
      LOWORD(v203) = 257;
      v198 = 259;
      v196 = 259;
      v160 = &v186;
      v161 = &v199;
      while ( v159 )
      {
        *(_DWORD *)v160 = *(_DWORD *)v161;
        v161 = (__int64 *)((char *)v161 + 4);
        v160 = (__int64 *)((char *)v160 + 4);
        --v159;
      }
      sub_1039E30(a3, (__int64)v195, (__int64)v197, 0, v157, v158, v186, v187, v188, v189, v190);
      v162 = "69";
      LOWORD(v203) = 257;
    }
LABEL_239:
    v197[0] = v162;
    v22 = 10;
    v163 = &v186;
    v198 = 259;
    v164 = &v199;
    v195[0] = "__HEXAGON_ARCH__";
    v196 = 259;
    while ( v22 )
    {
      *(_DWORD *)v163 = *(_DWORD *)v164;
      v164 = (__int64 *)((char *)v164 + 4);
      v163 = (__int64 *)((char *)v163 + 4);
      --v22;
    }
    goto LABEL_19;
  }
  v197[0] = "1";
  v195[0] = "__HEXAGON_V62__";
  LOWORD(v203) = 257;
  v198 = 259;
  v196 = 259;
  sub_1039E30(a3, (__int64)v195, (__int64)v197, v111, 257, 259, v199, v200, v201, v202, 1u);
  v115 = "62";
  LOWORD(v203) = 257;
LABEL_154:
  v197[0] = v115;
  v198 = 259;
  v116 = "__HEXAGON_ARCH__";
LABEL_171:
  v195[0] = v116;
  v196 = 259;
  v26 = 1;
  sub_1039E30(a3, (__int64)v195, (__int64)v197, v112, v113, v114, v199, v200, v201, v202, v203);
LABEL_21:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 584LL))(a1, "hvx-length64b", 13) )
  {
    v197[0] = "1";
    LOWORD(v203) = 257;
    v195[0] = "__HVX__";
    v198 = 259;
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v27, 259, 259, v199, v200, v201, v202, 1u);
    v197[0] = a1 + 68;
    v195[0] = "__HVX_ARCH__";
    LOWORD(v203) = 257;
    v81 = *a3;
    v198 = 260;
    v82 = *(_QWORD **)(v81 + 32);
    v83 = *(_QWORD *)(v81 + 24);
    v196 = 259;
    if ( (unsigned __int64)(v83 - (_QWORD)v82) > 7 )
    {
      *v82 = 0x20656E6966656423LL;
      *(_QWORD *)(v81 + 32) += 8LL;
    }
    else
    {
      v81 = sub_227BF10(v81, "#define ", 8);
    }
    v191 = v81;
    sub_2254180(v195, v81);
    v84 = v191;
    v85 = *(_BYTE **)(v191 + 32);
    if ( (unsigned __int64)v85 >= *(_QWORD *)(v191 + 24) )
    {
      v84 = sub_227BA10(v191, 32);
    }
    else
    {
      *(_QWORD *)(v191 + 32) = v85 + 1;
      *v85 = 32;
    }
    v191 = v84;
    sub_2254180(v197, v84);
    v88 = *(_BYTE **)(v191 + 32);
    if ( (unsigned __int64)v88 >= *(_QWORD *)(v191 + 24) )
    {
      sub_227BA10(v191, 10);
      if ( (unsigned __int8)v203 <= 1u )
        goto LABEL_89;
    }
    else
    {
      v89 = (__int64)(v88 + 1);
      *(_QWORD *)(v191 + 32) = v88 + 1;
      *v88 = 10;
      if ( (unsigned __int8)v203 <= 1u )
      {
LABEL_89:
        LOWORD(v203) = 257;
        v197[0] = "64";
        v198 = 259;
        v195[0] = "__HVX_LENGTH__";
        v196 = 259;
        sub_1039E30(a3, (__int64)v195, (__int64)v197, v89, v86, v87, v199, v200, v201, v202, 1u);
        goto LABEL_22;
      }
    }
    v137 = *a3;
    v138 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v138 > 0x18u )
    {
      v149 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v138[1].m128i_i8[8] = 40;
      v138[1].m128i_i64[0] = 0x6465746163657270LL;
      *v138 = v149;
      *(_QWORD *)(v137 + 32) += 25LL;
    }
    else
    {
      v137 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v191 = v137;
    sub_2254180(v195, v137);
    v139 = v191;
    v140 = *(_QWORD *)(v191 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v191 + 24) - v140) > 2 )
    {
      *(_BYTE *)(v140 + 2) = 34;
      *(_WORD *)v140 = 8236;
      *(_QWORD *)(v139 + 32) += 3LL;
    }
    else
    {
      v139 = sub_227BF10(v191, ", \"", 3);
    }
    v191 = v139;
    sub_2254180(&v199, v139);
    v141 = v191;
    v89 = *(_QWORD *)(v191 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v191 + 24) - v89) > 2 )
    {
      *(_BYTE *)(v89 + 2) = 10;
      *(_WORD *)v89 = 10530;
      *(_QWORD *)(v141 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v191, "\")\n", 3);
    }
    goto LABEL_89;
  }
LABEL_22:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 584LL))(a1, "hvx-length128b", 14) )
  {
    LOWORD(v203) = 257;
    v198 = 259;
    v195[0] = "__HVX__";
    v196 = 259;
    v197[0] = "1";
    sub_1039E30(a3, (__int64)v195, (__int64)v197, 257, v28, v29, v199, v200, v201, v202, 1u);
    v197[0] = a1 + 68;
    LOWORD(v203) = 257;
    v198 = 260;
    v195[0] = "__HVX_ARCH__";
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v74, 257, 260, v199, v200, v201, v202, 1u);
    v197[0] = "128";
    v198 = 259;
    v195[0] = "__HVX_LENGTH__";
    LOWORD(v203) = 257;
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v75, v76, v77, v199, v200, v201, v202, 1u);
    if ( v26 )
    {
      LOWORD(v203) = 257;
      v198 = 259;
      v196 = 259;
      v197[0] = "1";
      v195[0] = "__HVXDBL__";
      sub_1039E30(a3, (__int64)v195, (__int64)v197, v78, v79, v80, v199, v200, v201, v202, 1u);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 584LL))(a1, "audio", 5) )
  {
    v197[0] = "1";
    LOWORD(v203) = 257;
    v198 = 259;
    v195[0] = "__HEXAGON_AUDIO__";
    v196 = 259;
    sub_1039E30(a3, (__int64)v195, (__int64)v197, v30, v31, v32, v199, v200, v201, v202, 1u);
  }
  v33 = a1[65];
  v34 = 52;
  if ( v33 )
  {
    v35 = (const void *)a1[64];
    LOBYTE(v191) = 52;
    v36 = memchr(v35, 116, v33);
    v34 = v191;
    if ( v36 )
      v34 = (v36 - (_BYTE *)v35 == -1) + 51;
  }
  v37 = *a3;
  v194[0] = v34;
  v196 = 259;
  v193[0] = v194;
  v38 = *(_QWORD **)(v37 + 32);
  v198 = 260;
  v195[0] = "__HEXAGON_PHYSICAL_SLOTS__";
  v39 = *(_QWORD *)(v37 + 24);
  v193[1] = &dword_0 + 1;
  v194[1] = 0;
  v197[0] = v193;
  LOWORD(v203) = 257;
  if ( (unsigned __int64)(v39 - (_QWORD)v38) > 7 )
  {
    *v38 = 0x20656E6966656423LL;
    *(_QWORD *)(v37 + 32) += 8LL;
  }
  else
  {
    v37 = sub_227BF10(v37, "#define ", 8);
  }
  sub_2254180(v195, v37);
  v40 = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)v40 >= *(_QWORD *)(v37 + 24) )
  {
    v37 = sub_227BA10(v37, 32);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v40 + 1;
    *v40 = 32;
  }
  sub_2254180(v197, v37);
  v41 = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)v41 >= *(_QWORD *)(v37 + 24) )
  {
    sub_227BA10(v37, 10);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v41 + 1;
    *v41 = 10;
  }
  v42 = *a3;
  v43 = *(__m128i **)(*a3 + 32);
  v44 = *(_QWORD *)(*a3 + 24) - (_QWORD)v43;
  if ( (unsigned __int8)v203 > 1u )
  {
    if ( v44 > 0x18 )
    {
      v121 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v43[1].m128i_i8[8] = 40;
      v43[1].m128i_i64[0] = 0x6465746163657270LL;
      *v43 = v121;
      *(_QWORD *)(v42 + 32) += 25LL;
    }
    else
    {
      v42 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v42);
    v106 = *(_QWORD *)(v42 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v42 + 24) - v106) > 2 )
    {
      *(_BYTE *)(v106 + 2) = 34;
      *(_WORD *)v106 = 8236;
      *(_QWORD *)(v42 + 32) += 3LL;
    }
    else
    {
      v42 = sub_227BF10(v42, ", \"", 3);
    }
    sub_2254180(&v199, v42);
    v107 = *(_QWORD *)(v42 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v42 + 24) - v107) > 2 )
    {
      *(_BYTE *)(v107 + 2) = 10;
      *(_WORD *)v107 = 10530;
      *(_QWORD *)(v42 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v42, "\")\n", 3);
    }
    v42 = *a3;
    v43 = *(__m128i **)(*a3 + 32);
    v44 = *(_QWORD *)(*a3 + 24) - (_QWORD)v43;
  }
  v197[0] = "1";
  v195[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v198 = 259;
  v196 = 259;
  LOWORD(v203) = 257;
  if ( v44 > 7 )
  {
    v43->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v42 + 32) += 8LL;
  }
  else
  {
    v42 = sub_227BF10(v42, "#define ", 8);
  }
  sub_2254180(v195, v42);
  v45 = *(_BYTE **)(v42 + 32);
  if ( (unsigned __int64)v45 >= *(_QWORD *)(v42 + 24) )
  {
    v42 = sub_227BA10(v42, 32);
  }
  else
  {
    *(_QWORD *)(v42 + 32) = v45 + 1;
    *v45 = 32;
  }
  sub_2254180(v197, v42);
  v46 = *(_BYTE **)(v42 + 32);
  if ( (unsigned __int64)v46 >= *(_QWORD *)(v42 + 24) )
  {
    sub_227BA10(v42, 10);
  }
  else
  {
    *(_QWORD *)(v42 + 32) = v46 + 1;
    *v46 = 10;
  }
  v47 = *a3;
  v48 = *(__m128i **)(*a3 + 32);
  v49 = *(_QWORD *)(*a3 + 24) - (_QWORD)v48;
  if ( (unsigned __int8)v203 > 1u )
  {
    if ( v49 > 0x18 )
    {
      v123 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v48[1].m128i_i8[8] = 40;
      v48[1].m128i_i64[0] = 0x6465746163657270LL;
      *v48 = v123;
      *(_QWORD *)(v47 + 32) += 25LL;
    }
    else
    {
      v47 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v47);
    v104 = *(_QWORD *)(v47 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v47 + 24) - v104) > 2 )
    {
      *(_BYTE *)(v104 + 2) = 34;
      *(_WORD *)v104 = 8236;
      *(_QWORD *)(v47 + 32) += 3LL;
    }
    else
    {
      v47 = sub_227BF10(v47, ", \"", 3);
    }
    sub_2254180(&v199, v47);
    v105 = *(_QWORD *)(v47 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v47 + 24) - v105) > 2 )
    {
      *(_BYTE *)(v105 + 2) = 10;
      *(_WORD *)v105 = 10530;
      *(_QWORD *)(v47 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v47, "\")\n", 3);
    }
    v47 = *a3;
    v48 = *(__m128i **)(*a3 + 32);
    v49 = *(_QWORD *)(*a3 + 24) - (_QWORD)v48;
  }
  v197[0] = "1";
  v195[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v198 = 259;
  v196 = 259;
  LOWORD(v203) = 257;
  if ( v49 > 7 )
  {
    v48->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v47 + 32) += 8LL;
  }
  else
  {
    v47 = sub_227BF10(v47, "#define ", 8);
  }
  sub_2254180(v195, v47);
  v50 = *(_BYTE **)(v47 + 32);
  if ( (unsigned __int64)v50 >= *(_QWORD *)(v47 + 24) )
  {
    v47 = sub_227BA10(v47, 32);
  }
  else
  {
    *(_QWORD *)(v47 + 32) = v50 + 1;
    *v50 = 32;
  }
  sub_2254180(v197, v47);
  v51 = *(_BYTE **)(v47 + 32);
  if ( (unsigned __int64)v51 >= *(_QWORD *)(v47 + 24) )
  {
    sub_227BA10(v47, 10);
  }
  else
  {
    *(_QWORD *)(v47 + 32) = v51 + 1;
    *v51 = 10;
  }
  v52 = *a3;
  v53 = *(__m128i **)(*a3 + 32);
  v54 = *(_QWORD *)(*a3 + 24) - (_QWORD)v53;
  if ( (unsigned __int8)v203 > 1u )
  {
    if ( v54 > 0x18 )
    {
      v122 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v53[1].m128i_i8[8] = 40;
      v53[1].m128i_i64[0] = 0x6465746163657270LL;
      *v53 = v122;
      *(_QWORD *)(v52 + 32) += 25LL;
    }
    else
    {
      v52 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v52);
    v102 = *(_QWORD *)(v52 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v102) > 2 )
    {
      *(_BYTE *)(v102 + 2) = 34;
      *(_WORD *)v102 = 8236;
      *(_QWORD *)(v52 + 32) += 3LL;
    }
    else
    {
      v52 = sub_227BF10(v52, ", \"", 3);
    }
    sub_2254180(&v199, v52);
    v103 = *(_QWORD *)(v52 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v52 + 24) - v103) > 2 )
    {
      *(_BYTE *)(v103 + 2) = 10;
      *(_WORD *)v103 = 10530;
      *(_QWORD *)(v52 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v52, "\")\n", 3);
    }
    v52 = *a3;
    v53 = *(__m128i **)(*a3 + 32);
    v54 = *(_QWORD *)(*a3 + 24) - (_QWORD)v53;
  }
  v197[0] = "1";
  v198 = 259;
  v195[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v196 = 259;
  LOWORD(v203) = 257;
  if ( v54 > 7 )
  {
    v53->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v52 + 32) += 8LL;
  }
  else
  {
    v52 = sub_227BF10(v52, "#define ", 8);
  }
  sub_2254180(v195, v52);
  v55 = *(_BYTE **)(v52 + 32);
  if ( (unsigned __int64)v55 >= *(_QWORD *)(v52 + 24) )
  {
    v52 = sub_227BA10(v52, 32);
  }
  else
  {
    *(_QWORD *)(v52 + 32) = v55 + 1;
    *v55 = 32;
  }
  sub_2254180(v197, v52);
  v56 = *(_BYTE **)(v52 + 32);
  if ( (unsigned __int64)v56 >= *(_QWORD *)(v52 + 24) )
  {
    sub_227BA10(v52, 10);
  }
  else
  {
    *(_QWORD *)(v52 + 32) = v56 + 1;
    *v56 = 10;
  }
  v57 = *a3;
  v58 = *(__m128i **)(*a3 + 32);
  v59 = *(_QWORD *)(*a3 + 24) - (_QWORD)v58;
  if ( (unsigned __int8)v203 > 1u )
  {
    if ( v59 > 0x18 )
    {
      v120 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v58[1].m128i_i8[8] = 40;
      v58[1].m128i_i64[0] = 0x6465746163657270LL;
      *v58 = v120;
      *(_QWORD *)(v57 + 32) += 25LL;
    }
    else
    {
      v57 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v57);
    v100 = *(_QWORD *)(v57 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v57 + 24) - v100) > 2 )
    {
      *(_BYTE *)(v100 + 2) = 34;
      *(_WORD *)v100 = 8236;
      *(_QWORD *)(v57 + 32) += 3LL;
    }
    else
    {
      v57 = sub_227BF10(v57, ", \"", 3);
    }
    sub_2254180(&v199, v57);
    v101 = *(_QWORD *)(v57 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v57 + 24) - v101) > 2 )
    {
      *(_BYTE *)(v101 + 2) = 10;
      *(_WORD *)v101 = 10530;
      *(_QWORD *)(v57 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v57, "\")\n", 3);
    }
    v57 = *a3;
    v58 = *(__m128i **)(*a3 + 32);
    v59 = *(_QWORD *)(*a3 + 24) - (_QWORD)v58;
  }
  v197[0] = "1";
  v195[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v198 = 259;
  v196 = 259;
  LOWORD(v203) = 257;
  if ( v59 > 7 )
  {
    v58->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v57 + 32) += 8LL;
  }
  else
  {
    v57 = sub_227BF10(v57, "#define ", 8);
  }
  sub_2254180(v195, v57);
  v60 = *(_BYTE **)(v57 + 32);
  if ( (unsigned __int64)v60 >= *(_QWORD *)(v57 + 24) )
  {
    v57 = sub_227BA10(v57, 32);
  }
  else
  {
    *(_QWORD *)(v57 + 32) = v60 + 1;
    *v60 = 32;
  }
  sub_2254180(v197, v57);
  v61 = *(_BYTE **)(v57 + 32);
  if ( (unsigned __int64)v61 >= *(_QWORD *)(v57 + 24) )
  {
    sub_227BA10(v57, 10);
  }
  else
  {
    *(_QWORD *)(v57 + 32) = v61 + 1;
    *v61 = 10;
  }
  if ( (unsigned __int8)v203 > 1u )
  {
    v96 = *a3;
    v97 = *(__m128i **)(v96 + 32);
    if ( *(_QWORD *)(v96 + 24) - (_QWORD)v97 > 0x18u )
    {
      v119 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v97[1].m128i_i8[8] = 40;
      v97[1].m128i_i64[0] = 0x6465746163657270LL;
      *v97 = v119;
      *(_QWORD *)(v96 + 32) += 25LL;
    }
    else
    {
      v96 = sub_227BF10(v96, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v195, v96);
    v98 = *(_QWORD *)(v96 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v96 + 24) - v98) > 2 )
    {
      *(_BYTE *)(v98 + 2) = 34;
      *(_WORD *)v98 = 8236;
      *(_QWORD *)(v96 + 32) += 3LL;
    }
    else
    {
      v96 = sub_227BF10(v96, ", \"", 3);
    }
    sub_2254180(&v199, v96);
    v99 = *(_QWORD *)(v96 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v96 + 24) - v99) > 2 )
    {
      *(_BYTE *)(v99 + 2) = 10;
      *(_WORD *)v99 = 10530;
      *(_QWORD *)(v96 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v96, "\")\n", 3);
    }
  }
  if ( v193[0] != v194 )
    operator delete(v193[0]);
}
