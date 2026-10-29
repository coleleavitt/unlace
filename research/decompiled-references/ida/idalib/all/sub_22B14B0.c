int __fastcall sub_22B14B0(const char *s1, char *n, __int64 a3, __int64 a4)
{
  const char *v4; // r13
  size_t v5; // rbp
  char **v7; // rax
  char **v8; // rbx
  char **v9; // r12
  char **v10; // r14
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  _BYTE *v15; // rax
  const char *v16; // rsi
  size_t v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // ebp
  __int64 *v20; // r12
  __int64 *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r13d
  __int64 *v24; // r12
  __int64 *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // r13d
  __int64 *v28; // r12
  __int64 *v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // r13d
  __int64 *v32; // r12
  __int64 *v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // r13d
  __int64 *v36; // r12
  __int64 *v37; // rax
  unsigned int v38; // eax
  unsigned int v39; // r13d
  __int64 *v40; // r12
  __int64 *v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // r13d
  __int64 *v44; // r12
  __int64 *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // r13d
  __int64 *v48; // r12
  __int64 *v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r13d
  __int64 *v52; // r12
  __int64 *v53; // rax
  unsigned int v54; // eax
  unsigned int v55; // r13d
  __int64 *v56; // r12
  __int64 *v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // r13d
  __int64 *v60; // r12
  __int64 *v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // r13d
  __int64 *v64; // r12
  __int64 *v65; // rax
  unsigned int v66; // eax
  unsigned int v67; // r13d
  __int64 *v68; // r12
  __int64 *v69; // rax
  unsigned int v70; // eax
  unsigned int v71; // r13d
  __int64 *v72; // r12
  __int64 *v73; // rax
  unsigned int v74; // eax
  unsigned int v75; // r13d
  __int64 *v76; // r12
  __int64 *v77; // rax
  unsigned int v78; // eax
  unsigned int v79; // r13d
  __int64 *v80; // r12
  __int64 *v81; // rax
  unsigned int v82; // eax
  unsigned int v83; // r13d
  __int64 *v84; // r12
  char ***v85; // rax
  __int64 v86; // rax
  unsigned int v87; // eax
  __int64 v88; // rax
  __m128i v89; // xmm0
  unsigned int v90; // eax
  __int64 v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rax
  unsigned int v94; // eax
  __int64 v95; // rax
  unsigned int v96; // eax
  __int64 v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rax
  unsigned int v100; // eax
  __int64 v101; // rax
  unsigned int v102; // eax
  __int64 v103; // rax
  unsigned int v104; // eax
  __int64 v105; // rax
  unsigned int v106; // eax
  __int64 v107; // rax
  unsigned int v108; // eax
  __int64 v109; // rax
  unsigned int v110; // eax
  __int64 v111; // rax
  __m128i v112; // xmm0
  unsigned int v113; // eax
  __int64 v114; // rax
  __m128i v115; // xmm0
  unsigned int v116; // eax
  __int64 v117; // rax
  __m128i v118; // xmm0
  unsigned int v119; // eax
  __m128i *v120; // rax
  unsigned int v121; // eax
  __int64 v122; // rax
  __m128i si128; // xmm0
  __m128i v124; // xmm0
  unsigned int v125; // eax
  size_t v126; // rax
  size_t v127; // rax
  size_t v128; // rax
  size_t v129; // rax
  size_t v130; // rax
  size_t v131; // rax
  _BYTE *v132; // rax
  size_t v133; // rax
  size_t v134; // rax
  size_t v135; // rax
  size_t v136; // rax
  size_t v137; // rax
  size_t v138; // rax
  size_t v139; // rax
  size_t v140; // rax
  size_t v141; // rax
  size_t v142; // rax
  size_t v143; // rax
  size_t v144; // rax
  size_t v145; // rax
  size_t v146; // rax
  size_t v147; // rax
  size_t v148; // rax
  size_t v149; // rax
  size_t v150; // rax
  size_t v151; // rax
  size_t v152; // rax
  size_t v153; // rax
  size_t v154; // rax
  size_t v155; // rax
  size_t v156; // rax
  size_t v157; // rax
  size_t v158; // rax
  size_t v159; // rax
  size_t v160; // rax
  size_t v161; // rax
  size_t v162; // rax
  size_t v163; // rax
  size_t v164; // rax
  size_t v165; // rax
  size_t v166; // rax
  size_t v167; // rax
  size_t v168; // rax
  size_t v169; // rax
  size_t v170; // rax
  size_t v171; // rax
  size_t v172; // rax
  size_t v173; // rax
  size_t v174; // rax
  size_t v175; // rax
  size_t v176; // rax
  size_t v177; // rax
  size_t v178; // rax
  size_t v179; // rax
  size_t v180; // rax
  size_t v181; // rax
  size_t v182; // rax
  size_t v183; // rax
  size_t v184; // rax
  size_t v185; // rax
  size_t v186; // rax
  size_t v187; // rax
  size_t v188; // rax
  size_t v189; // rax
  size_t v190; // rax
  size_t v191; // rax
  size_t v192; // rax
  size_t v193; // rax
  size_t v194; // rax
  size_t v195; // rax
  size_t v196; // rax
  size_t v197; // rax
  size_t v198; // rax
  size_t v199; // rax
  size_t v200; // rax
  size_t v201; // rax
  size_t v202; // rax
  size_t v203; // rax
  size_t v204; // rax
  size_t v205; // rax
  size_t v206; // rax
  size_t v207; // rax
  size_t v208; // rax
  size_t v209; // rax
  size_t v210; // rax
  size_t v211; // rax
  size_t v212; // rax
  size_t v213; // rax
  size_t v214; // rax
  size_t v215; // rax
  size_t v216; // rax
  size_t v217; // rax
  size_t v218; // rax
  size_t v219; // rax
  size_t v220; // rax
  size_t v221; // rax
  size_t v222; // rax
  size_t v223; // rax
  size_t v224; // rax
  size_t v225; // rax
  size_t v226; // rax
  size_t v227; // rax
  size_t v228; // rax
  size_t v229; // rax
  size_t v230; // rax
  size_t v231; // rax
  size_t v232; // rax
  size_t v233; // rax
  size_t v234; // rax
  size_t v235; // rax
  __int64 *v237[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = s1;
  v5 = (size_t)n;
  LODWORD(v7) = *(_DWORD *)(a3 + 32);
  if ( (unsigned int)((_DWORD)v7 - 49) <= 2 )
  {
    if ( *(_DWORD *)(a3 + 44) != 23 )
    {
LABEL_3:
      v8 = &off_2BF6320;
      if ( !n )
      {
        v4 = "r600";
        v5 = 4;
      }
      while ( 1 )
      {
        if ( v8[1] == (char *)v5 )
        {
          LODWORD(v7) = memcmp(v4, *v8, v5);
          if ( !(_DWORD)v7 )
            break;
        }
        v8 += 5;
      }
      return (int)v7;
    }
    *(_BYTE *)sub_102FB20(a4, "16-bit-insts", 0xCu) = 1;
    *(_BYTE *)sub_102FB20(a4, "ashr-pk-insts", 0xDu) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-buffer-pk-add-bf16-inst", 0x1Eu) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-buffer-global-pk-add-f16-insts", 0x25u) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-ds-pk-add-16-insts", 0x19u) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", 0x15u) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-flat-pk-add-16-insts", 0x1Bu) = 1;
    *(_BYTE *)sub_102FB20(a4, "atomic-global-pk-add-bf16-inst", 0x1Eu) = 1;
    *(_BYTE *)sub_102FB20(a4, "bf8-cvt-scale-insts", 0x13u) = 1;
    *(_BYTE *)sub_102FB20(a4, "bitop3-insts", 0xCu) = 1;
    *(_BYTE *)sub_102FB20(a4, "ci-insts", 8u) = 1;
    *(_BYTE *)sub_102FB20(a4, "dl-insts", 8u) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot1-insts", 0xAu) = 1;
    v18 = sub_2244B30((__int64)"dot2-insts", 10);
    v19 = sub_2244CB0(a4, "dot2-insts", 0xAu, v18);
    v20 = (__int64 *)(*(_QWORD *)a4 + 8LL * v19);
    if ( *v20 )
    {
      if ( *v20 != -8 )
      {
        sub_10298F0(v237, v20, 0);
        v21 = v237[0];
        goto LABEL_35;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v86 = sub_22300B0(27, 8);
    strcpy((char *)(v86 + 16), "dot2-insts");
    *(_QWORD *)v86 = 10;
    *(_BYTE *)(v86 + 8) = 0;
    *v20 = v86;
    ++*(_DWORD *)(a4 + 12);
    v87 = sub_22450D0(a4, v19);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v87), 0);
    v21 = v237[0];
LABEL_35:
    *(_BYTE *)(*v21 + 8) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot3-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot4-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot5-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot6-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot7-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot8-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot9-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot10-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot11-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot12-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dot13-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "dpp", 3u) = 1;
    v22 = sub_2244B30((__int64)"f16bf16-to-fp6bf6-cvt-scale-insts", 33);
    v23 = sub_2244CB0(a4, "f16bf16-to-fp6bf6-cvt-scale-insts", 0x21u, v22);
    v24 = (__int64 *)(*(_QWORD *)a4 + 8LL * v23);
    if ( *v24 )
    {
      if ( *v24 != -8 )
      {
        sub_10298F0(v237, v24, 0);
        v25 = v237[0];
        goto LABEL_38;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v122 = sub_22300B0(50, 8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABE30);
    *(_BYTE *)(v122 + 48) = 115;
    *(__m128i *)(v122 + 16) = si128;
    v124 = _mm_load_si128((const __m128i *)&xmmword_23ABE40);
    *(_BYTE *)(v122 + 49) = 0;
    *(__m128i *)(v122 + 32) = v124;
    *(_QWORD *)v122 = 33;
    *(_BYTE *)(v122 + 8) = 0;
    *v24 = v122;
    ++*(_DWORD *)(a4 + 12);
    v125 = sub_22450D0(a4, v23);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v125), 0);
    v25 = v237[0];
LABEL_38:
    *(_BYTE *)(*v25 + 8) = 1;
    v26 = sub_2244B30((__int64)"f32-to-f16bf16-cvt-sr-insts", 27);
    v27 = sub_2244CB0(a4, "f32-to-f16bf16-cvt-sr-insts", 0x1Bu, v26);
    v28 = (__int64 *)(*(_QWORD *)a4 + 8LL * v27);
    if ( *v28 )
    {
      if ( *v28 != -8 )
      {
        sub_10298F0(v237, v28, 0);
        v29 = v237[0];
        goto LABEL_41;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v120 = (__m128i *)sub_22300B0(44, 8);
    v120[1] = _mm_load_si128((const __m128i *)&xmmword_23ABE50);
    strcpy(v120[2].m128i_i8, "vt-sr-insts");
    v120->m128i_i64[0] = 27;
    v120->m128i_i8[8] = 0;
    *v28 = (__int64)v120;
    ++*(_DWORD *)(a4 + 12);
    v121 = sub_22450D0(a4, v27);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v121), 0);
    v29 = v237[0];
LABEL_41:
    *(_BYTE *)(*v29 + 8) = 1;
    v30 = sub_2244B30((__int64)"fp4-cvt-scale-insts", 19);
    v31 = sub_2244CB0(a4, "fp4-cvt-scale-insts", 0x13u, v30);
    v32 = (__int64 *)(*(_QWORD *)a4 + 8LL * v31);
    if ( *v32 )
    {
      if ( *v32 != -8 )
      {
        sub_10298F0(v237, v32, 0);
        v33 = v237[0];
        goto LABEL_44;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v117 = sub_22300B0(36, 8);
    v118 = _mm_load_si128((const __m128i *)&xmmword_23ABE60);
    *(_WORD *)(v117 + 32) = 29811;
    *(_BYTE *)(v117 + 34) = 115;
    *(__m128i *)(v117 + 16) = v118;
    *(_BYTE *)(v117 + 35) = 0;
    *(_QWORD *)v117 = 19;
    *(_BYTE *)(v117 + 8) = 0;
    *v32 = v117;
    ++*(_DWORD *)(a4 + 12);
    v119 = sub_22450D0(a4, v31);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v119), 0);
    v33 = v237[0];
LABEL_44:
    *(_BYTE *)(*v33 + 8) = 1;
    v34 = sub_2244B30((__int64)"fp6bf6-cvt-scale-insts", 22);
    v35 = sub_2244CB0(a4, "fp6bf6-cvt-scale-insts", 0x16u, v34);
    v36 = (__int64 *)(*(_QWORD *)a4 + 8LL * v35);
    if ( *v36 )
    {
      if ( *v36 != -8 )
      {
        sub_10298F0(v237, v36, 0);
        v37 = v237[0];
        goto LABEL_47;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v114 = sub_22300B0(39, 8);
    v115 = _mm_load_si128((const __m128i *)&xmmword_23ABE70);
    strcpy((char *)(v114 + 32), "-insts");
    *(__m128i *)(v114 + 16) = v115;
    *(_QWORD *)v114 = 22;
    *(_BYTE *)(v114 + 8) = 0;
    *v36 = v114;
    ++*(_DWORD *)(a4 + 12);
    v116 = sub_22450D0(a4, v35);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v116), 0);
    v37 = v237[0];
LABEL_47:
    *(_BYTE *)(*v37 + 8) = 1;
    *(_BYTE *)sub_102FB20(a4, "fp8-insts", 9u) = 1;
    *(_BYTE *)sub_102FB20(a4, "fp8-conversion-insts", 0x14u) = 1;
    v38 = sub_2244B30((__int64)"fp8-cvt-scale-insts", 19);
    v39 = sub_2244CB0(a4, "fp8-cvt-scale-insts", 0x13u, v38);
    v40 = (__int64 *)(*(_QWORD *)a4 + 8LL * v39);
    if ( *v40 )
    {
      if ( *v40 != -8 )
      {
        sub_10298F0(v237, v40, 0);
        v41 = v237[0];
        goto LABEL_50;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v111 = sub_22300B0(36, 8);
    v112 = _mm_load_si128((const __m128i *)&xmmword_23ABE80);
    *(_WORD *)(v111 + 32) = 29811;
    *(__m128i *)(v111 + 16) = v112;
    *(_BYTE *)(v111 + 34) = 115;
    *(_BYTE *)(v111 + 35) = 0;
    *(_QWORD *)v111 = 19;
    *(_BYTE *)(v111 + 8) = 0;
    *v40 = v111;
    ++*(_DWORD *)(a4 + 12);
    v113 = sub_22450D0(a4, v39);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v113), 0);
    v41 = v237[0];
LABEL_50:
    *(_BYTE *)(*v41 + 8) = 1;
    v42 = sub_2244B30((__int64)"gfx8-insts", 10);
    v43 = sub_2244CB0(a4, "gfx8-insts", 0xAu, v42);
    v44 = (__int64 *)(*(_QWORD *)a4 + 8LL * v43);
    if ( *v44 )
    {
      if ( *v44 != -8 )
      {
        sub_10298F0(v237, v44, 0);
        v45 = v237[0];
        goto LABEL_53;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v109 = sub_22300B0(27, 8);
    strcpy((char *)(v109 + 16), "gfx8-insts");
    *(_QWORD *)v109 = 10;
    *(_BYTE *)(v109 + 8) = 0;
    *v44 = v109;
    ++*(_DWORD *)(a4 + 12);
    v110 = sub_22450D0(a4, v43);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v110), 0);
    v45 = v237[0];
LABEL_53:
    *(_BYTE *)(*v45 + 8) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx9-insts", 0xAu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx90a-insts", 0xCu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx940-insts", 0xCu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx950-insts", 0xCu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx10-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx10-3-insts", 0xDu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx11-insts", 0xBu) = 1;
    *(_BYTE *)sub_102FB20(a4, "gfx12-insts", 0xBu) = 1;
    v46 = sub_2244B30((__int64)"gws", 3);
    v47 = sub_2244CB0(a4, "gws", 3u, v46);
    v48 = (__int64 *)(*(_QWORD *)a4 + 8LL * v47);
    if ( *v48 )
    {
      if ( *v48 != -8 )
      {
        sub_10298F0(v237, v48, 0);
        v49 = v237[0];
        goto LABEL_56;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v107 = sub_22300B0(20, 8);
    *(_WORD *)(v107 + 16) = 30567;
    *(_BYTE *)(v107 + 18) = 115;
    *(_BYTE *)(v107 + 19) = 0;
    *(_QWORD *)v107 = 3;
    *(_BYTE *)(v107 + 8) = 0;
    *v48 = v107;
    ++*(_DWORD *)(a4 + 12);
    v108 = sub_22450D0(a4, v47);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v108), 0);
    v49 = v237[0];
LABEL_56:
    *(_BYTE *)(*v49 + 8) = 1;
    v50 = sub_2244B30((__int64)"image-insts", 11);
    v51 = sub_2244CB0(a4, "image-insts", 0xBu, v50);
    v52 = (__int64 *)(*(_QWORD *)a4 + 8LL * v51);
    if ( *v52 )
    {
      if ( *v52 != -8 )
      {
        sub_10298F0(v237, v52, 0);
        v53 = v237[0];
        goto LABEL_59;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v105 = sub_22300B0(28, 8);
    strcpy((char *)(v105 + 16), "image-insts");
    *(_QWORD *)v105 = 11;
    *(_BYTE *)(v105 + 8) = 0;
    *v52 = v105;
    ++*(_DWORD *)(a4 + 12);
    v106 = sub_22450D0(a4, v51);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v106), 0);
    v53 = v237[0];
LABEL_59:
    *(_BYTE *)(*v53 + 8) = 1;
    v54 = sub_2244B30((__int64)"s-memrealtime", 13);
    v55 = sub_2244CB0(a4, "s-memrealtime", 0xDu, v54);
    v56 = (__int64 *)(*(_QWORD *)a4 + 8LL * v55);
    if ( *v56 )
    {
      if ( *v56 != -8 )
      {
        sub_10298F0(v237, v56, 0);
        v57 = v237[0];
        goto LABEL_62;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v103 = sub_22300B0(30, 8);
    strcpy((char *)(v103 + 16), "s-memrealtime");
    *(_QWORD *)v103 = 13;
    *(_BYTE *)(v103 + 8) = 0;
    *v56 = v103;
    ++*(_DWORD *)(a4 + 12);
    v104 = sub_22450D0(a4, v55);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v104), 0);
    v57 = v237[0];
LABEL_62:
    *(_BYTE *)(*v57 + 8) = 1;
    v58 = sub_2244B30((__int64)"s-memtime-inst", 14);
    v59 = sub_2244CB0(a4, "s-memtime-inst", 0xEu, v58);
    v60 = (__int64 *)(*(_QWORD *)a4 + 8LL * v59);
    if ( *v60 )
    {
      if ( *v60 != -8 )
      {
        sub_10298F0(v237, v60, 0);
        v61 = v237[0];
        goto LABEL_65;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v101 = sub_22300B0(31, 8);
    strcpy((char *)(v101 + 16), "s-memtime-inst");
    *(_QWORD *)v101 = 14;
    *(_BYTE *)(v101 + 8) = 0;
    *v60 = v101;
    ++*(_DWORD *)(a4 + 12);
    v102 = sub_22450D0(a4, v59);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v102), 0);
    v61 = v237[0];
LABEL_65:
    *(_BYTE *)(*v61 + 8) = 1;
    v62 = sub_2244B30((__int64)"mai-insts", 9);
    v63 = sub_2244CB0(a4, "mai-insts", 9u, v62);
    v64 = (__int64 *)(*(_QWORD *)a4 + 8LL * v63);
    if ( *v64 )
    {
      if ( *v64 != -8 )
      {
        sub_10298F0(v237, v64, 0);
        v65 = v237[0];
        goto LABEL_68;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v99 = sub_22300B0(26, 8);
    strcpy((char *)(v99 + 16), "mai-insts");
    *(_QWORD *)v99 = 9;
    *(_BYTE *)(v99 + 8) = 0;
    *v64 = v99;
    ++*(_DWORD *)(a4 + 12);
    v100 = sub_22450D0(a4, v63);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v100), 0);
    v65 = v237[0];
LABEL_68:
    *(_BYTE *)(*v65 + 8) = 1;
    v66 = sub_2244B30((__int64)"permlane16-swap", 15);
    v67 = sub_2244CB0(a4, "permlane16-swap", 0xFu, v66);
    v68 = (__int64 *)(*(_QWORD *)a4 + 8LL * v67);
    if ( *v68 )
    {
      if ( *v68 != -8 )
      {
        sub_10298F0(v237, v68, 0);
        v69 = v237[0];
        goto LABEL_71;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v97 = sub_22300B0(32, 8);
    strcpy((char *)(v97 + 16), "permlane16-swap");
    *(_QWORD *)v97 = 15;
    *(_BYTE *)(v97 + 8) = 0;
    *v68 = v97;
    ++*(_DWORD *)(a4 + 12);
    v98 = sub_22450D0(a4, v67);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v98), 0);
    v69 = v237[0];
LABEL_71:
    *(_BYTE *)(*v69 + 8) = 1;
    v70 = sub_2244B30((__int64)"permlane32-swap", 15);
    v71 = sub_2244CB0(a4, "permlane32-swap", 0xFu, v70);
    v72 = (__int64 *)(*(_QWORD *)a4 + 8LL * v71);
    if ( *v72 )
    {
      if ( *v72 != -8 )
      {
        sub_10298F0(v237, v72, 0);
        v73 = v237[0];
        goto LABEL_74;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v95 = sub_22300B0(32, 8);
    strcpy((char *)(v95 + 16), "permlane32-swap");
    *(_QWORD *)v95 = 15;
    *(_BYTE *)(v95 + 8) = 0;
    *v72 = v95;
    ++*(_DWORD *)(a4 + 12);
    v96 = sub_22450D0(a4, v71);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v96), 0);
    v73 = v237[0];
LABEL_74:
    *(_BYTE *)(*v73 + 8) = 1;
    *(_BYTE *)sub_102FB20(a4, "prng-inst", 9u) = 1;
    v74 = sub_2244B30((__int64)"wavefrontsize32", 15);
    v75 = sub_2244CB0(a4, "wavefrontsize32", 0xFu, v74);
    v76 = (__int64 *)(*(_QWORD *)a4 + 8LL * v75);
    if ( *v76 )
    {
      if ( *v76 != -8 )
      {
        sub_10298F0(v237, v76, 0);
        v77 = v237[0];
        goto LABEL_77;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v93 = sub_22300B0(32, 8);
    strcpy((char *)(v93 + 16), "wavefrontsize32");
    *(_QWORD *)v93 = 15;
    *(_BYTE *)(v93 + 8) = 0;
    *v76 = v93;
    ++*(_DWORD *)(a4 + 12);
    v94 = sub_22450D0(a4, v75);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v94), 0);
    v77 = v237[0];
LABEL_77:
    *(_BYTE *)(*v77 + 8) = 1;
    v78 = sub_2244B30((__int64)"wavefrontsize64", 15);
    v79 = sub_2244CB0(a4, "wavefrontsize64", 0xFu, v78);
    v80 = (__int64 *)(*(_QWORD *)a4 + 8LL * v79);
    if ( *v80 )
    {
      if ( *v80 != -8 )
      {
        sub_10298F0(v237, v80, 0);
        v81 = v237[0];
        goto LABEL_80;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v91 = sub_22300B0(32, 8);
    strcpy((char *)(v91 + 16), "wavefrontsize64");
    *(_QWORD *)v91 = 15;
    *(_BYTE *)(v91 + 8) = 0;
    *v80 = v91;
    ++*(_DWORD *)(a4 + 12);
    v92 = sub_22450D0(a4, v79);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v92), 0);
    v81 = v237[0];
LABEL_80:
    *(_BYTE *)(*v81 + 8) = 1;
    v82 = sub_2244B30((__int64)"vmem-to-lds-load-insts", 22);
    v83 = sub_2244CB0(a4, "vmem-to-lds-load-insts", 0x16u, v82);
    v84 = (__int64 *)(*(_QWORD *)a4 + 8LL * v83);
    if ( *v84 )
    {
      if ( *v84 != -8 )
      {
        sub_10298F0(v237, v84, 0);
        v85 = (char ***)v237[0];
LABEL_83:
        v7 = *v85;
        *((_BYTE *)v7 + 8) = 1;
        return (int)v7;
      }
      --*(_DWORD *)(a4 + 16);
    }
    v88 = sub_22300B0(39, 8);
    v89 = _mm_load_si128(xmmword_23ABE90);
    strcpy((char *)(v88 + 32), "-insts");
    *(__m128i *)(v88 + 16) = v89;
    *(_QWORD *)v88 = 22;
    *(_BYTE *)(v88 + 8) = 0;
    *v84 = v88;
    ++*(_DWORD *)(a4 + 12);
    v90 = sub_22450D0(a4, v83);
    sub_10298F0(v237, (__int64 *)(*(_QWORD *)a4 + 8LL * v90), 0);
    v85 = (char ***)v237[0];
    goto LABEL_83;
  }
  if ( (_DWORD)v7 != 26 )
    goto LABEL_3;
  if ( n )
  {
    v9 = &off_2BF5820;
    while ( 1 )
    {
      v10 = v9;
      if ( v9[1] == n )
      {
        LODWORD(v7) = memcmp(s1, *v9, (size_t)n);
        if ( !(_DWORD)v7 )
          break;
      }
      v9 += 5;
      if ( &unk_2BF6310 == (_UNKNOWN *)v9 )
        return (int)v7;
    }
  }
  else
  {
    v7 = &off_2BF5820;
    while ( 1 )
    {
      v10 = v7;
      if ( !v7[1] )
        break;
      v7 += 5;
      if ( v7 == (char **)&unk_2BF6310 )
        return (int)v7;
    }
  }
  LODWORD(v7) = *((_DWORD *)v10 + 8);
  switch ( (int)v7 )
  {
    case 0:
      return (int)v7;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 68:
      goto LABEL_28;
    case 17:
    case 18:
    case 19:
      goto LABEL_26;
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
      goto LABEL_25;
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
      goto LABEL_24;
    case 31:
    case 32:
    case 33:
    case 36:
    case 38:
    case 63:
      goto LABEL_23;
    case 34:
      goto LABEL_22;
    case 35:
      goto LABEL_21;
    case 37:
      v11 = j__strlen("gfx90a-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx90a-insts", v11) = 1;
      v12 = j__strlen("atomic-buffer-global-pk-add-f16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-global-pk-add-f16-insts", v12) = 1;
      v13 = j__strlen("atomic-fadd-rtn-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", v13) = 1;
LABEL_21:
      *(_BYTE *)sub_102FB20(a4, "dot3-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot4-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot5-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot6-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "mai-insts", 9u) = 1;
LABEL_22:
      *(_BYTE *)sub_102FB20(a4, "dl-insts", 8u) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot1-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot2-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", 0xBu) = 1;
LABEL_23:
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "vmem-to-lds-load-insts", 0x16u) = 1;
LABEL_24:
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", 0xCu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dpp", 3u) = 1;
      *(_BYTE *)sub_102FB20(a4, "s-memrealtime", 0xDu) = 1;
LABEL_25:
      *(_BYTE *)sub_102FB20(a4, "ci-insts", 8u) = 1;
LABEL_26:
      *(_BYTE *)sub_102FB20(a4, "image-insts", 0xBu) = 1;
      *(_BYTE *)sub_102FB20(a4, "s-memtime-inst", 0xEu) = 1;
      v7 = (char **)sub_102FB20(a4, "gws", 3u);
      *(_BYTE *)v7 = 1;
      return (int)v7;
    case 39:
      *(_BYTE *)sub_102FB20(a4, "fp8-insts", 9u) = 1;
      *(_BYTE *)sub_102FB20(a4, "fp8-conversion-insts", 0x14u) = 1;
      v14 = j__strlen("xf32-insts");
      *(_BYTE *)sub_102FB20(a4, "xf32-insts", v14) = 1;
      goto LABEL_28;
    case 40:
      v133 = j__strlen("bitop3-insts");
      *(_BYTE *)sub_102FB20(a4, "bitop3-insts", v133) = 1;
      v134 = j__strlen("fp6bf6-cvt-scale-insts");
      *(_BYTE *)sub_102FB20(a4, "fp6bf6-cvt-scale-insts", v134) = 1;
      v135 = j__strlen("fp4-cvt-scale-insts");
      *(_BYTE *)sub_102FB20(a4, "fp4-cvt-scale-insts", v135) = 1;
      v136 = j__strlen("bf8-cvt-scale-insts");
      *(_BYTE *)sub_102FB20(a4, "bf8-cvt-scale-insts", v136) = 1;
      v137 = j__strlen("fp8-cvt-scale-insts");
      *(_BYTE *)sub_102FB20(a4, "fp8-cvt-scale-insts", v137) = 1;
      v138 = j__strlen("f16bf16-to-fp6bf6-cvt-scale-insts");
      *(_BYTE *)sub_102FB20(a4, "f16bf16-to-fp6bf6-cvt-scale-insts", v138) = 1;
      v139 = j__strlen("f32-to-f16bf16-cvt-sr-insts");
      *(_BYTE *)sub_102FB20(a4, "f32-to-f16bf16-cvt-sr-insts", v139) = 1;
      v140 = j__strlen("prng-inst");
      *(_BYTE *)sub_102FB20(a4, "prng-inst", v140) = 1;
      v141 = j__strlen("permlane16-swap");
      *(_BYTE *)sub_102FB20(a4, "permlane16-swap", v141) = 1;
      v142 = j__strlen("permlane32-swap");
      *(_BYTE *)sub_102FB20(a4, "permlane32-swap", v142) = 1;
      v143 = j__strlen("ashr-pk-insts");
      *(_BYTE *)sub_102FB20(a4, "ashr-pk-insts", v143) = 1;
      v144 = j__strlen("dot12-insts");
      *(_BYTE *)sub_102FB20(a4, "dot12-insts", v144) = 1;
      v145 = j__strlen("dot13-insts");
      *(_BYTE *)sub_102FB20(a4, "dot13-insts", v145) = 1;
      v146 = j__strlen("atomic-buffer-pk-add-bf16-inst");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-pk-add-bf16-inst", v146) = 1;
      v147 = j__strlen("gfx950-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx950-insts", v147) = 1;
      *(_BYTE *)sub_102FB20(a4, "fp8-insts", 9u) = 1;
      *(_BYTE *)sub_102FB20(a4, "fp8-conversion-insts", 0x14u) = 1;
LABEL_28:
      *(_BYTE *)sub_102FB20(a4, "gfx940-insts", 0xCu) = 1;
      *(_BYTE *)sub_102FB20(a4, "atomic-ds-pk-add-16-insts", 0x19u) = 1;
      *(_BYTE *)sub_102FB20(a4, "atomic-flat-pk-add-16-insts", 0x1Bu) = 1;
      *(_BYTE *)sub_102FB20(a4, "atomic-global-pk-add-bf16-inst", 0x1Eu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx90a-insts", 0xCu) = 1;
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-global-pk-add-f16-insts", 0x25u) = 1;
      *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", 0x15u) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot3-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot4-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot5-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot6-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "mai-insts", 9u) = 1;
      *(_BYTE *)sub_102FB20(a4, "dl-insts", 8u) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot1-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot2-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", 0xBu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", 0xCu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dpp", 3u) = 1;
      v15 = (_BYTE *)sub_102FB20(a4, "s-memrealtime", 0xDu);
      v16 = "ci-insts";
      v17 = 8;
      *v15 = 1;
      goto LABEL_29;
    case 41:
    case 44:
    case 64:
      goto LABEL_119;
    case 42:
    case 43:
      v126 = j__strlen("dot1-insts");
      *(_BYTE *)sub_102FB20(a4, "dot1-insts", v126) = 1;
      v127 = j__strlen("dot2-insts");
      *(_BYTE *)sub_102FB20(a4, "dot2-insts", v127) = 1;
      v128 = j__strlen("dot5-insts");
      *(_BYTE *)sub_102FB20(a4, "dot5-insts", v128) = 1;
      v129 = j__strlen("dot6-insts");
      *(_BYTE *)sub_102FB20(a4, "dot6-insts", v129) = 1;
      v130 = j__strlen("dot7-insts");
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", v130) = 1;
      v131 = j__strlen("dot10-insts");
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", v131) = 1;
LABEL_119:
      *(_BYTE *)sub_102FB20(a4, "dl-insts", 8u) = 1;
      *(_BYTE *)sub_102FB20(a4, "ci-insts", 8u) = 1;
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", 0xCu) = 1;
      *(_BYTE *)sub_102FB20(a4, "dpp", 3u) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", 0xAu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gfx10-insts", 0xBu) = 1;
      v132 = (_BYTE *)sub_102FB20(a4, "image-insts", 0xBu);
      v16 = "s-memrealtime";
      v17 = 13;
      *v132 = 1;
LABEL_29:
      *(_BYTE *)sub_102FB20(a4, v16, v17) = 1;
      *(_BYTE *)sub_102FB20(a4, "s-memtime-inst", 0xEu) = 1;
      *(_BYTE *)sub_102FB20(a4, "gws", 3u) = 1;
      v7 = (char **)sub_102FB20(a4, "vmem-to-lds-load-insts", 0x16u);
      *(_BYTE *)v7 = 1;
      break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 65:
      v217 = j__strlen("ci-insts");
      *(_BYTE *)sub_102FB20(a4, "ci-insts", v217) = 1;
      v218 = j__strlen("dot1-insts");
      *(_BYTE *)sub_102FB20(a4, "dot1-insts", v218) = 1;
      v219 = j__strlen("dot2-insts");
      *(_BYTE *)sub_102FB20(a4, "dot2-insts", v219) = 1;
      v220 = j__strlen("dot5-insts");
      *(_BYTE *)sub_102FB20(a4, "dot5-insts", v220) = 1;
      v221 = j__strlen("dot6-insts");
      *(_BYTE *)sub_102FB20(a4, "dot6-insts", v221) = 1;
      v222 = j__strlen("dot7-insts");
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", v222) = 1;
      v223 = j__strlen("dot10-insts");
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", v223) = 1;
      v224 = j__strlen("dl-insts");
      *(_BYTE *)sub_102FB20(a4, "dl-insts", v224) = 1;
      v225 = j__strlen("16-bit-insts");
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", v225) = 1;
      v226 = j__strlen("dpp");
      *(_BYTE *)sub_102FB20(a4, "dpp", v226) = 1;
      v227 = j__strlen("gfx8-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", v227) = 1;
      v228 = j__strlen("gfx9-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", v228) = 1;
      v229 = j__strlen("gfx10-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-insts", v229) = 1;
      v230 = j__strlen("gfx10-3-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-3-insts", v230) = 1;
      v231 = j__strlen("image-insts");
      *(_BYTE *)sub_102FB20(a4, "image-insts", v231) = 1;
      v232 = j__strlen("s-memrealtime");
      *(_BYTE *)sub_102FB20(a4, "s-memrealtime", v232) = 1;
      v233 = j__strlen("s-memtime-inst");
      *(_BYTE *)sub_102FB20(a4, "s-memtime-inst", v233) = 1;
      v234 = j__strlen("gws");
      *(_BYTE *)sub_102FB20(a4, "gws", v234) = 1;
      v235 = j__strlen("vmem-to-lds-load-insts");
      v7 = (char **)sub_102FB20(a4, "vmem-to-lds-load-insts", v235);
      *(_BYTE *)v7 = 1;
      break;
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 66:
      v199 = j__strlen("ci-insts");
      *(_BYTE *)sub_102FB20(a4, "ci-insts", v199) = 1;
      v200 = j__strlen("dot5-insts");
      *(_BYTE *)sub_102FB20(a4, "dot5-insts", v200) = 1;
      v201 = j__strlen("dot7-insts");
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", v201) = 1;
      v202 = j__strlen("dot8-insts");
      *(_BYTE *)sub_102FB20(a4, "dot8-insts", v202) = 1;
      v203 = j__strlen("dot9-insts");
      *(_BYTE *)sub_102FB20(a4, "dot9-insts", v203) = 1;
      v204 = j__strlen("dot10-insts");
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", v204) = 1;
      v205 = j__strlen("dot12-insts");
      *(_BYTE *)sub_102FB20(a4, "dot12-insts", v205) = 1;
      v206 = j__strlen("dl-insts");
      *(_BYTE *)sub_102FB20(a4, "dl-insts", v206) = 1;
      v207 = j__strlen("16-bit-insts");
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", v207) = 1;
      v208 = j__strlen("dpp");
      *(_BYTE *)sub_102FB20(a4, "dpp", v208) = 1;
      v209 = j__strlen("gfx8-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", v209) = 1;
      v210 = j__strlen("gfx9-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", v210) = 1;
      v211 = j__strlen("gfx10-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-insts", v211) = 1;
      v212 = j__strlen("gfx10-3-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-3-insts", v212) = 1;
      v213 = j__strlen("gfx11-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx11-insts", v213) = 1;
      v214 = j__strlen("atomic-fadd-rtn-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", v214) = 1;
      v215 = j__strlen("image-insts");
      *(_BYTE *)sub_102FB20(a4, "image-insts", v215) = 1;
      v216 = j__strlen("gws");
      v7 = (char **)sub_102FB20(a4, "gws", v216);
      *(_BYTE *)v7 = 1;
      break;
    case 60:
    case 61:
    case 67:
      v175 = j__strlen("ci-insts");
      *(_BYTE *)sub_102FB20(a4, "ci-insts", v175) = 1;
      v176 = j__strlen("dot7-insts");
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", v176) = 1;
      v177 = j__strlen("dot8-insts");
      *(_BYTE *)sub_102FB20(a4, "dot8-insts", v177) = 1;
      v178 = j__strlen("dot9-insts");
      *(_BYTE *)sub_102FB20(a4, "dot9-insts", v178) = 1;
      v179 = j__strlen("dot10-insts");
      *(_BYTE *)sub_102FB20(a4, "dot10-insts", v179) = 1;
      v180 = j__strlen("dot11-insts");
      *(_BYTE *)sub_102FB20(a4, "dot11-insts", v180) = 1;
      v181 = j__strlen("dot12-insts");
      *(_BYTE *)sub_102FB20(a4, "dot12-insts", v181) = 1;
      v182 = j__strlen("dl-insts");
      *(_BYTE *)sub_102FB20(a4, "dl-insts", v182) = 1;
      v183 = j__strlen("atomic-ds-pk-add-16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-ds-pk-add-16-insts", v183) = 1;
      v184 = j__strlen("atomic-flat-pk-add-16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-flat-pk-add-16-insts", v184) = 1;
      v185 = j__strlen("atomic-buffer-global-pk-add-f16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-global-pk-add-f16-insts", v185) = 1;
      v186 = j__strlen("atomic-buffer-pk-add-bf16-inst");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-pk-add-bf16-inst", v186) = 1;
      v187 = j__strlen("atomic-global-pk-add-bf16-inst");
      *(_BYTE *)sub_102FB20(a4, "atomic-global-pk-add-bf16-inst", v187) = 1;
      v188 = j__strlen("16-bit-insts");
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", v188) = 1;
      v189 = j__strlen("dpp");
      *(_BYTE *)sub_102FB20(a4, "dpp", v189) = 1;
      v190 = j__strlen("gfx8-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", v190) = 1;
      v191 = j__strlen("gfx9-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", v191) = 1;
      v192 = j__strlen("gfx10-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-insts", v192) = 1;
      v193 = j__strlen("gfx10-3-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-3-insts", v193) = 1;
      v194 = j__strlen("gfx11-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx11-insts", v194) = 1;
      v195 = j__strlen("gfx12-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx12-insts", v195) = 1;
      v196 = j__strlen("atomic-fadd-rtn-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", v196) = 1;
      v197 = j__strlen("image-insts");
      *(_BYTE *)sub_102FB20(a4, "image-insts", v197) = 1;
      v198 = j__strlen("fp8-conversion-insts");
      v7 = (char **)sub_102FB20(a4, "fp8-conversion-insts", v198);
      *(_BYTE *)v7 = 1;
      break;
    case 62:
      *(_BYTE *)sub_102FB20(a4, "ci-insts", 8u) = 1;
      v148 = j__strlen("dot7-insts");
      *(_BYTE *)sub_102FB20(a4, "dot7-insts", v148) = 1;
      v149 = j__strlen("dot8-insts");
      *(_BYTE *)sub_102FB20(a4, "dot8-insts", v149) = 1;
      v150 = j__strlen("dl-insts");
      *(_BYTE *)sub_102FB20(a4, "dl-insts", v150) = 1;
      v151 = j__strlen("16-bit-insts");
      *(_BYTE *)sub_102FB20(a4, "16-bit-insts", v151) = 1;
      v152 = j__strlen("dpp");
      *(_BYTE *)sub_102FB20(a4, "dpp", v152) = 1;
      v153 = j__strlen("gfx8-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx8-insts", v153) = 1;
      v154 = j__strlen("gfx9-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx9-insts", v154) = 1;
      v155 = j__strlen("gfx10-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-insts", v155) = 1;
      v156 = j__strlen("gfx10-3-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx10-3-insts", v156) = 1;
      v157 = j__strlen("gfx11-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx11-insts", v157) = 1;
      v158 = j__strlen("gfx12-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx12-insts", v158) = 1;
      v159 = j__strlen("gfx1250-insts");
      *(_BYTE *)sub_102FB20(a4, "gfx1250-insts", v159) = 1;
      v160 = j__strlen("bitop3-insts");
      *(_BYTE *)sub_102FB20(a4, "bitop3-insts", v160) = 1;
      v161 = j__strlen("prng-inst");
      *(_BYTE *)sub_102FB20(a4, "prng-inst", v161) = 1;
      v162 = j__strlen("transpose-load-f4f6-insts");
      *(_BYTE *)sub_102FB20(a4, "transpose-load-f4f6-insts", v162) = 1;
      v163 = j__strlen("bf16-trans-insts");
      *(_BYTE *)sub_102FB20(a4, "bf16-trans-insts", v163) = 1;
      v164 = j__strlen("fp8-conversion-insts");
      *(_BYTE *)sub_102FB20(a4, "fp8-conversion-insts", v164) = 1;
      v165 = j__strlen("fp8e5m3-insts");
      *(_BYTE *)sub_102FB20(a4, "fp8e5m3-insts", v165) = 1;
      v166 = j__strlen("permlane16-swap");
      *(_BYTE *)sub_102FB20(a4, "permlane16-swap", v166) = 1;
      v167 = j__strlen("ashr-pk-insts");
      *(_BYTE *)sub_102FB20(a4, "ashr-pk-insts", v167) = 1;
      v168 = j__strlen("atomic-buffer-pk-add-bf16-inst");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-pk-add-bf16-inst", v168) = 1;
      v169 = j__strlen("atomic-fadd-rtn-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-fadd-rtn-insts", v169) = 1;
      v170 = j__strlen("atomic-buffer-global-pk-add-f16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-buffer-global-pk-add-f16-insts", v170) = 1;
      v171 = j__strlen("atomic-flat-pk-add-16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-flat-pk-add-16-insts", v171) = 1;
      v172 = j__strlen("atomic-global-pk-add-bf16-inst");
      *(_BYTE *)sub_102FB20(a4, "atomic-global-pk-add-bf16-inst", v172) = 1;
      v173 = j__strlen("atomic-ds-pk-add-16-insts");
      *(_BYTE *)sub_102FB20(a4, "atomic-ds-pk-add-16-insts", v173) = 1;
      v174 = j__strlen("setprio-inc-wg-inst");
      v7 = (char **)sub_102FB20(a4, "setprio-inc-wg-inst", v174);
      *(_BYTE *)v7 = 1;
      break;
  }
  return (int)v7;
}
