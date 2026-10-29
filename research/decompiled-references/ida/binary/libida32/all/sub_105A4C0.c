void __fastcall sub_105A4C0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // r13
  __m128i *v10; // rdx
  unsigned __int64 v11; // rax
  _BYTE *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // r15
  int v23; // eax
  char *v24; // rdx
  _BYTE *v25; // rax
  _BYTE *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // r15
  bool v30; // zf
  char *v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rax
  __m128i *v34; // rax
  size_t v35; // rcx
  size_t v36; // r15
  size_t v37; // r9
  unsigned __int64 v38; // rcx
  __int64 v39; // r15
  size_t v40; // rax
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  _BYTE *v43; // rdx
  _BYTE *v44; // rdx
  __m128i *v45; // rax
  size_t v46; // rcx
  size_t v47; // r15
  size_t v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r15
  size_t v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _BYTE *v54; // rax
  _BYTE *v55; // rax
  __m128i *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  size_t v59; // rcx
  size_t v60; // r13
  size_t v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rcx
  void *v64; // rax
  __m128i *v65; // rax
  size_t v66; // rax
  unsigned __int64 v67; // r9
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  void *v70; // rax
  __int64 v71; // r15
  _QWORD *v72; // rdx
  __int64 v73; // rax
  _BYTE *v74; // rax
  _BYTE *v75; // rax
  __int64 v76; // r15
  _QWORD *v77; // rdx
  __int64 v78; // rax
  _BYTE *v79; // rax
  _BYTE *v80; // rax
  __int64 v81; // r14
  __int64 v82; // rax
  _QWORD *v83; // rdx
  _BYTE *v84; // rax
  __int64 v85; // r8
  __int64 v86; // r9
  _BYTE *v87; // rax
  size_t v88; // rdx
  void *v89; // rdx
  __int64 v90; // r13
  __m128i *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // r13
  __m128i *v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rax
  __m128i *v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // r15
  __m128i *v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // r15
  __m128i *v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r15
  __m128i *v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // r14
  __m128i *v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdx
  __m128i si128; // xmm0
  __m128i v144; // xmm0
  __m128i v145; // xmm0
  __m128i v146; // xmm0
  __m128i v147; // xmm0
  __m128i v148; // xmm0
  __m128i v149; // xmm0
  __m128i v150; // xmm0
  __m128i v151; // xmm0
  __m128i v152; // xmm0
  _QWORD *v153; // [rsp+10h] [rbp-298h]
  _QWORD *v154; // [rsp+10h] [rbp-298h]
  size_t v155; // [rsp+10h] [rbp-298h]
  size_t v156; // [rsp+18h] [rbp-290h]
  __int64 v157; // [rsp+20h] [rbp-288h]
  __int64 v158; // [rsp+20h] [rbp-288h]
  size_t v159; // [rsp+20h] [rbp-288h]
  size_t v160; // [rsp+28h] [rbp-280h]
  unsigned __int64 v161; // [rsp+28h] [rbp-280h]
  void *s1; // [rsp+30h] [rbp-278h] BYREF
  size_t n; // [rsp+38h] [rbp-270h]
  void *s2; // [rsp+40h] [rbp-268h] BYREF
  __int64 v165; // [rsp+48h] [rbp-260h]
  void *v166[2]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v167; // [rsp+60h] [rbp-248h] BYREF
  void *v168; // [rsp+70h] [rbp-238h] BYREF
  size_t v169; // [rsp+78h] [rbp-230h]
  __m128i v170; // [rsp+80h] [rbp-228h] BYREF
  void *v171[2]; // [rsp+90h] [rbp-218h] BYREF
  __int64 v172; // [rsp+A0h] [rbp-208h] BYREF
  void *v173; // [rsp+B0h] [rbp-1F8h] BYREF
  size_t v174; // [rsp+B8h] [rbp-1F0h]
  __m128i v175; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v176[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  __int64 v177; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v178; // [rsp+F0h] [rbp-1B8h] BYREF
  size_t v179; // [rsp+F8h] [rbp-1B0h]
  __m128i v180; // [rsp+100h] [rbp-1A8h] BYREF
  void *v181[2]; // [rsp+110h] [rbp-198h] BYREF
  __int64 v182; // [rsp+120h] [rbp-188h] BYREF
  void *v183; // [rsp+130h] [rbp-178h] BYREF
  size_t v184; // [rsp+138h] [rbp-170h]
  __m128i v185; // [rsp+140h] [rbp-168h] BYREF
  char *v186; // [rsp+150h] [rbp-158h] BYREF
  __int64 v187; // [rsp+158h] [rbp-150h]
  __int16 v188; // [rsp+170h] [rbp-138h]
  char *v189; // [rsp+180h] [rbp-128h] BYREF
  __int64 v190; // [rsp+188h] [rbp-120h]
  __int16 v191; // [rsp+1A0h] [rbp-108h]
  void *v192[2]; // [rsp+1B0h] [rbp-F8h] BYREF
  __m128i v193; // [rsp+1C0h] [rbp-E8h] BYREF
  __int16 v194; // [rsp+1D0h] [rbp-D8h]
  void *v195; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v196; // [rsp+1E8h] [rbp-C0h]
  __m128i v197; // [rsp+1F0h] [rbp-B8h] BYREF
  __int64 v198; // [rsp+200h] [rbp-A8h]
  void *v199[2]; // [rsp+210h] [rbp-98h] BYREF
  __m128i v200; // [rsp+220h] [rbp-88h] BYREF
  __int16 v201; // [rsp+230h] [rbp-78h]
  void **v202; // [rsp+240h] [rbp-68h] BYREF
  __int64 v203; // [rsp+248h] [rbp-60h]
  __int64 v204; // [rsp+250h] [rbp-58h]
  __int64 v205; // [rsp+258h] [rbp-50h]
  __int64 v206; // [rsp+260h] [rbp-48h]

  v4 = *a3;
  v195 = "__csky__";
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v199[0] = "2";
  LOWORD(v206) = 257;
  v201 = 259;
  LOWORD(v198) = 259;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_22581D0(v4, "#define ", 8);
  }
  sub_2230440(&v195, v4);
  v7 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
  {
    v4 = sub_2257CD0(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v7 + 1;
    *v7 = 32;
  }
  sub_2230440(v199, v4);
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_2257CD0(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 10;
  }
  v9 = *a3;
  v10 = *(__m128i **)(*a3 + 32);
  v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  if ( (unsigned __int8)v206 > 1u )
  {
    if ( v11 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v10[1].m128i_i8[8] = 40;
      v10[1].m128i_i64[0] = 0x6465746163657270LL;
      *v10 = si128;
      *(_QWORD *)(v9 + 32) += 25LL;
    }
    else
    {
      v9 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v9);
    v102 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v102) > 2 )
    {
      *(_BYTE *)(v102 + 2) = 34;
      *(_WORD *)v102 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_22581D0(v9, ", \"", 3);
    }
    sub_2230440(&v202, v9);
    v103 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v103) > 2 )
    {
      *(_BYTE *)(v103 + 2) = 10;
      *(_WORD *)v103 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v9, "\")\n", 3);
    }
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  }
  v199[0] = "2";
  v201 = 259;
  v195 = "__CSKY__";
  LOWORD(v198) = 259;
  LOWORD(v206) = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_22581D0(v9, "#define ", 8);
  }
  sub_2230440(&v195, v9);
  v12 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_2257CD0(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_2230440(v199, v9);
  v14 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v9 + 24) )
  {
    sub_2257CD0(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v14 + 1;
    *v14 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v98 = *a3;
    v99 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v99 > 0x18u )
    {
      v144 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v99[1].m128i_i8[8] = 40;
      v99[1].m128i_i64[0] = 0x6465746163657270LL;
      *v99 = v144;
      *(_QWORD *)(v98 + 32) += 25LL;
    }
    else
    {
      v98 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v98);
    v100 = *(_QWORD *)(v98 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v98 + 24) - v100) > 2 )
    {
      *(_BYTE *)(v100 + 2) = 34;
      *(_WORD *)v100 = 8236;
      *(_QWORD *)(v98 + 32) += 3LL;
    }
    else
    {
      v98 = sub_22581D0(v98, ", \"", 3);
    }
    sub_2230440(&v202, v98);
    v101 = *(_QWORD *)(v98 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v98 + 24) - v101) > 2 )
    {
      *(_BYTE *)(v101 + 2) = 10;
      *(_WORD *)v101 = 10530;
      *(_QWORD *)(v98 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v98, "\")\n", 3);
    }
  }
  v199[0] = "2";
  v195 = "__ckcore__";
  LOWORD(v206) = 257;
  v201 = 259;
  LOWORD(v198) = 259;
  sub_10160F0(a3, (__int64)&v195, (__int64)v199, v13, 257, 259, (char)v202, v203, v204, v205, 1u);
  LOWORD(v198) = 259;
  v15 = *a3;
  v195 = "__CKCORE__";
  v16 = *(_QWORD **)(v15 + 32);
  v17 = *(_QWORD *)(v15 + 24);
  v199[0] = "2";
  v201 = 259;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v17 - (_QWORD)v16) > 7 )
  {
    *v16 = 0x20656E6966656423LL;
    *(_QWORD *)(v15 + 32) += 8LL;
  }
  else
  {
    v15 = sub_22581D0(v15, "#define ", 8);
  }
  sub_2230440(&v195, v15);
  v18 = *(_BYTE **)(v15 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v15 + 24) )
  {
    v15 = sub_2257CD0(v15, 32);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v18 + 1;
    *v18 = 32;
  }
  sub_2230440(v199, v15);
  v19 = *(_BYTE **)(v15 + 32);
  if ( (unsigned __int64)v19 >= *(_QWORD *)(v15 + 24) )
  {
    sub_2257CD0(v15, 10);
  }
  else
  {
    *(_QWORD *)(v15 + 32) = v19 + 1;
    *v19 = 10;
  }
  v20 = *a3;
  v21 = *(_QWORD *)(*a3 + 32);
  v22 = *(_QWORD *)(*a3 + 24) - v21;
  if ( (unsigned __int8)v206 > 1u )
  {
    if ( v22 > 0x18 )
    {
      v146 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      *(_BYTE *)(v21 + 24) = 40;
      *(_QWORD *)(v21 + 16) = 0x6465746163657270LL;
      *(__m128i *)v21 = v146;
      *(_QWORD *)(v20 + 32) += 25LL;
    }
    else
    {
      v20 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v20);
    v96 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v96) > 2 )
    {
      *(_BYTE *)(v96 + 2) = 34;
      *(_WORD *)v96 = 8236;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      v20 = sub_22581D0(v20, ", \"", 3);
    }
    sub_2230440(&v202, v20);
    v97 = *(_QWORD *)(v20 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v97) > 2 )
    {
      *(_BYTE *)(v97 + 2) = 10;
      *(_WORD *)v97 = 10530;
      *(_QWORD *)(v20 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v20, "\")\n", 3);
    }
    v20 = *a3;
    v21 = *(_QWORD *)(*a3 + 32);
    v22 = *(_QWORD *)(*a3 + 24) - v21;
  }
  v153 = (_QWORD *)v21;
  v23 = sub_990D60(a1 + 512, "abiv2");
  v24 = "2";
  LOWORD(v206) = 257;
  if ( v23 )
    v24 = "1";
  v201 = 259;
  v199[0] = v24;
  v195 = "__CSKYABI__";
  LOWORD(v198) = 259;
  if ( v22 > 7 )
  {
    *v153 = 0x20656E6966656423LL;
    *(_QWORD *)(v20 + 32) += 8LL;
  }
  else
  {
    v20 = sub_22581D0(v20, "#define ", 8);
  }
  sub_2230440(&v195, v20);
  v25 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v25 >= *(_QWORD *)(v20 + 24) )
  {
    v20 = sub_2257CD0(v20, 32);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v25 + 1;
    *v25 = 32;
  }
  sub_2230440(v199, v20);
  v26 = *(_BYTE **)(v20 + 32);
  if ( (unsigned __int64)v26 >= *(_QWORD *)(v20 + 24) )
  {
    sub_2257CD0(v20, 10);
  }
  else
  {
    *(_QWORD *)(v20 + 32) = v26 + 1;
    *v26 = 10;
  }
  v27 = *a3;
  v28 = *(_QWORD *)(*a3 + 32);
  v29 = *(_QWORD *)(*a3 + 24) - v28;
  if ( (unsigned __int8)v206 > 1u )
  {
    if ( v29 > 0x18 )
    {
      v145 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      *(_BYTE *)(v28 + 24) = 40;
      *(_QWORD *)(v28 + 16) = 0x6465746163657270LL;
      *(__m128i *)v28 = v145;
      *(_QWORD *)(v27 + 32) += 25LL;
    }
    else
    {
      v27 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v27);
    v94 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v94) > 2 )
    {
      *(_BYTE *)(v94 + 2) = 34;
      *(_WORD *)v94 = 8236;
      *(_QWORD *)(v27 + 32) += 3LL;
    }
    else
    {
      v27 = sub_22581D0(v27, ", \"", 3);
    }
    sub_2230440(&v202, v27);
    v95 = *(_QWORD *)(v27 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v95) > 2 )
    {
      *(_BYTE *)(v95 + 2) = 10;
      *(_WORD *)v95 = 10530;
      *(_QWORD *)(v27 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v27, "\")\n", 3);
    }
    v27 = *a3;
    v28 = *(_QWORD *)(*a3 + 32);
    v29 = *(_QWORD *)(*a3 + 24) - v28;
  }
  v154 = (_QWORD *)v28;
  v30 = sub_990D60(a1 + 512, "abiv2") == 0;
  v31 = "2";
  if ( !v30 )
    v31 = "1";
  v199[0] = v31;
  v201 = 259;
  v195 = "__cskyabi__";
  LOWORD(v198) = 259;
  LOWORD(v206) = 257;
  if ( v29 > 7 )
  {
    *v154 = 0x20656E6966656423LL;
    *(_QWORD *)(v27 + 32) += 8LL;
  }
  else
  {
    v27 = sub_22581D0(v27, "#define ", 8);
  }
  sub_2230440(&v195, v27);
  v32 = *(_BYTE **)(v27 + 32);
  if ( (unsigned __int64)v32 >= *(_QWORD *)(v27 + 24) )
  {
    v27 = sub_2257CD0(v27, 32);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v32 + 1;
    *v32 = 32;
  }
  sub_2230440(v199, v27);
  v33 = *(_BYTE **)(v27 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v27 + 24) )
  {
    sub_2257CD0(v27, 10);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v33 + 1;
    *v33 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v90 = *a3;
    v91 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v91 > 0x18u )
    {
      v147 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v91[1].m128i_i8[8] = 40;
      v91[1].m128i_i64[0] = 0x6465746163657270LL;
      *v91 = v147;
      *(_QWORD *)(v90 + 32) += 25LL;
    }
    else
    {
      v90 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v90);
    v92 = *(_QWORD *)(v90 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v90 + 24) - v92) > 2 )
    {
      *(_BYTE *)(v92 + 2) = 34;
      *(_WORD *)v92 = 8236;
      *(_QWORD *)(v90 + 32) += 3LL;
    }
    else
    {
      v90 = sub_22581D0(v90, ", \"", 3);
    }
    sub_2230440(&v202, v90);
    v93 = *(_QWORD *)(v90 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v90 + 24) - v93) > 2 )
    {
      *(_BYTE *)(v93 + 2) = 10;
      *(_WORD *)v93 = 10530;
      *(_QWORD *)(v90 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v90, "\")\n", 3);
    }
  }
  n = 5;
  s1 = (void *)"ck810";
  s2 = (void *)"ck810";
  v165 = 5;
  if ( *(_DWORD *)(a1 + 544) )
  {
    s1 = (void *)sub_227CFA0();
    n = v88;
    v89 = *(void **)(a1 + 552);
    v165 = *(_QWORD *)(a1 + 560);
    s2 = v89;
  }
  v186 = "1";
  v188 = 259;
  sub_2222A40(v166, &s1);
  v34 = (__m128i *)sub_978080(v166, 0, 0, "__", 2u);
  v168 = &v170;
  if ( (__m128i *)v34->m128i_i64[0] == &v34[1] )
  {
    v170 = _mm_loadu_si128(v34 + 1);
  }
  else
  {
    v168 = (void *)v34->m128i_i64[0];
    v170.m128i_i64[0] = v34[1].m128i_i64[0];
  }
  v35 = v34->m128i_u64[1];
  v34[1].m128i_i8[0] = 0;
  v169 = v35;
  v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
  v34->m128i_i64[1] = 0;
  v36 = v169;
  if ( v169 == 0x7FFFFFFFFFFFFFFFLL || v169 == 9223372036854775806LL )
    goto LABEL_302;
  v37 = v169 + 2;
  if ( v168 == &v170 )
    v38 = 15;
  else
    v38 = v170.m128i_i64[0];
  if ( v37 > v38 )
  {
    v156 = v169 + 2;
    sub_974DF0((__int64)&v168, v169, 0, "__", 2u);
    v37 = v156;
  }
  else
  {
    *(_WORD *)((char *)v168 + v169) = 24415;
  }
  v169 = v37;
  *((_BYTE *)v168 + v36 + 2) = 0;
  v195 = &v197;
  if ( v168 == &v170 )
  {
    v197 = _mm_load_si128(&v170);
  }
  else
  {
    v195 = v168;
    v197.m128i_i64[0] = v170.m128i_i64[0];
  }
  v39 = *a3;
  v40 = v169;
  v169 = 0;
  v41 = *(_QWORD **)(v39 + 32);
  v42 = *(_QWORD *)(v39 + 24);
  v196 = v40;
  v168 = &v170;
  v170.m128i_i8[0] = 0;
  v201 = 260;
  v199[0] = &v195;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v42 - (_QWORD)v41) > 7 )
  {
    *v41 = 0x20656E6966656423LL;
    *(_QWORD *)(v39 + 32) += 8LL;
  }
  else
  {
    v39 = sub_22581D0(v39, "#define ", 8);
  }
  sub_2230440(v199, v39);
  v43 = *(_BYTE **)(v39 + 32);
  if ( (unsigned __int64)v43 >= *(_QWORD *)(v39 + 24) )
  {
    v39 = sub_2257CD0(v39, 32);
  }
  else
  {
    *(_QWORD *)(v39 + 32) = v43 + 1;
    *v43 = 32;
  }
  sub_2230440(&v186, v39);
  v44 = *(_BYTE **)(v39 + 32);
  if ( (unsigned __int64)v44 >= *(_QWORD *)(v39 + 24) )
  {
    sub_2257CD0(v39, 10);
  }
  else
  {
    *(_QWORD *)(v39 + 32) = v44 + 1;
    *v44 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v104 = *a3;
    v105 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v105 > 0x18u )
    {
      v148 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v105[1].m128i_i8[8] = 40;
      v105[1].m128i_i64[0] = 0x6465746163657270LL;
      *v105 = v148;
      *(_QWORD *)(v104 + 32) += 25LL;
    }
    else
    {
      v104 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    v157 = v104;
    sub_2230440(v199, v104);
    v106 = v157;
    v107 = *(_QWORD *)(v157 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v157 + 24) - v107) > 2 )
    {
      *(_BYTE *)(v107 + 2) = 34;
      *(_WORD *)v107 = 8236;
      *(_QWORD *)(v157 + 32) += 3LL;
    }
    else
    {
      v106 = sub_22581D0(v157, ", \"", 3);
    }
    v158 = v106;
    sub_2230440(&v202, v106);
    v108 = *(_QWORD *)(v158 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v158 + 24) - v108) > 2 )
    {
      *(_BYTE *)(v108 + 2) = 10;
      *(_WORD *)v108 = 10530;
      *(_QWORD *)(v158 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v158, "\")\n", 3);
    }
  }
  if ( v195 != &v197 )
    operator delete(v195);
  if ( v168 != &v170 )
    operator delete(v168);
  if ( v166[0] != &v167 )
    operator delete(v166[0]);
  v191 = 259;
  v189 = "1";
  sub_2222710(v171, &s1);
  v45 = (__m128i *)sub_978080(v171, 0, 0, "__", 2u);
  v173 = &v175;
  if ( (__m128i *)v45->m128i_i64[0] == &v45[1] )
  {
    v175 = _mm_loadu_si128(v45 + 1);
  }
  else
  {
    v173 = (void *)v45->m128i_i64[0];
    v175.m128i_i64[0] = v45[1].m128i_i64[0];
  }
  v46 = v45->m128i_u64[1];
  v45[1].m128i_i8[0] = 0;
  v174 = v46;
  v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
  v45->m128i_i64[1] = 0;
  v47 = v174;
  if ( v174 == 0x7FFFFFFFFFFFFFFFLL || v174 == 9223372036854775806LL )
    goto LABEL_302;
  v48 = v174 + 2;
  if ( v173 == &v175 )
    v49 = 15;
  else
    v49 = v175.m128i_i64[0];
  if ( v48 > v49 )
  {
    v155 = v174 + 2;
    sub_974DF0((__int64)&v173, v174, 0, "__", 2u);
    v48 = v155;
  }
  else
  {
    *(_WORD *)((char *)v173 + v174) = 24415;
  }
  v174 = v48;
  *((_BYTE *)v173 + v47 + 2) = 0;
  v195 = &v197;
  if ( v173 == &v175 )
  {
    v197 = _mm_load_si128(&v175);
  }
  else
  {
    v195 = v173;
    v197.m128i_i64[0] = v175.m128i_i64[0];
  }
  v50 = *a3;
  v51 = v174;
  v174 = 0;
  v196 = v51;
  v52 = *(_QWORD **)(v50 + 32);
  v173 = &v175;
  v53 = *(_QWORD *)(v50 + 24);
  v175.m128i_i8[0] = 0;
  v201 = 260;
  v199[0] = &v195;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v53 - (_QWORD)v52) > 7 )
  {
    *v52 = 0x20656E6966656423LL;
    *(_QWORD *)(v50 + 32) += 8LL;
  }
  else
  {
    v50 = sub_22581D0(v50, "#define ", 8);
  }
  sub_2230440(v199, v50);
  v54 = *(_BYTE **)(v50 + 32);
  if ( (unsigned __int64)v54 >= *(_QWORD *)(v50 + 24) )
  {
    v50 = sub_2257CD0(v50, 32);
  }
  else
  {
    *(_QWORD *)(v50 + 32) = v54 + 1;
    *v54 = 32;
  }
  sub_2230440(&v189, v50);
  v55 = *(_BYTE **)(v50 + 32);
  if ( (unsigned __int64)v55 >= *(_QWORD *)(v50 + 24) )
  {
    sub_2257CD0(v50, 10);
  }
  else
  {
    *(_QWORD *)(v50 + 32) = v55 + 1;
    *v55 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v109 = *a3;
    v110 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v110 > 0x18u )
    {
      v149 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v110[1].m128i_i8[8] = 40;
      v110[1].m128i_i64[0] = 0x6465746163657270LL;
      *v110 = v149;
      *(_QWORD *)(v109 + 32) += 25LL;
    }
    else
    {
      v109 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(v199, v109);
    v111 = *(_QWORD *)(v109 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v109 + 24) - v111) > 2 )
    {
      *(_BYTE *)(v111 + 2) = 34;
      *(_WORD *)v111 = 8236;
      *(_QWORD *)(v109 + 32) += 3LL;
    }
    else
    {
      v109 = sub_22581D0(v109, ", \"", 3);
    }
    sub_2230440(&v202, v109);
    v112 = *(_QWORD *)(v109 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v109 + 24) - v112) > 2 )
    {
      *(_BYTE *)(v112 + 2) = 10;
      *(_WORD *)v112 = 10530;
      *(_QWORD *)(v109 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v109, "\")\n", 3);
    }
  }
  if ( v195 != &v197 )
    operator delete(v195);
  if ( v173 != &v175 )
    operator delete(v173);
  if ( v171[0] != &v172 )
    operator delete(v171[0]);
  if ( n != v165 || n && memcmp(s1, s2, n) )
  {
    v192[0] = "1";
    LOWORD(v198) = 257;
    v194 = 259;
    sub_2222A40(v176, &s2);
    v56 = (__m128i *)sub_978080(v176, 0, 0, "__", 2u);
    v178 = &v180;
    if ( (__m128i *)v56->m128i_i64[0] == &v56[1] )
    {
      v180 = _mm_loadu_si128(v56 + 1);
    }
    else
    {
      v178 = (void *)v56->m128i_i64[0];
      v180.m128i_i64[0] = v56[1].m128i_i64[0];
    }
    v59 = v56->m128i_u64[1];
    v56[1].m128i_i8[0] = 0;
    v179 = v59;
    v56->m128i_i64[0] = (__int64)v56[1].m128i_i64;
    v56->m128i_i64[1] = 0;
    v60 = v179;
    if ( v179 != 0x7FFFFFFFFFFFFFFFLL && v179 != 9223372036854775806LL )
    {
      v61 = v179 + 2;
      if ( v178 == &v180 )
        v62 = 15;
      else
        v62 = v180.m128i_i64[0];
      if ( v61 > v62 )
      {
        v160 = v179 + 2;
        sub_974DF0((__int64)&v178, v179, 0, "__", 2u);
        v61 = v160;
      }
      else
      {
        v63 = 24415;
        *(_WORD *)((char *)v178 + v179) = 24415;
      }
      v179 = v61;
      *((_BYTE *)v178 + v60 + 2) = 0;
      v199[0] = &v200;
      if ( v178 == &v180 )
      {
        v200 = _mm_load_si128(&v180);
      }
      else
      {
        v199[0] = v178;
        v200.m128i_i64[0] = v180.m128i_i64[0];
      }
      v64 = (void *)v179;
      v179 = 0;
      v180.m128i_i8[0] = 0;
      v199[1] = v64;
      v178 = &v180;
      LOWORD(v206) = 260;
      v202 = v199;
      sub_10160F0(
        a3,
        (__int64)&v202,
        (__int64)v192,
        v63,
        v57,
        v58,
        (char)v195,
        v196,
        v197.m128i_i32[0],
        v197.m128i_i32[2],
        v198);
      if ( v199[0] != &v200 )
        operator delete(v199[0]);
      if ( v178 != &v180 )
        operator delete(v178);
      if ( v176[0] != &v177 )
        operator delete(v176[0]);
      LOWORD(v206) = 257;
      v199[0] = "1";
      v201 = 259;
      sub_2222710(v181, &s2);
      v65 = (__m128i *)sub_978080(v181, 0, 0, "__", 2u);
      v183 = &v185;
      if ( (__m128i *)v65->m128i_i64[0] == &v65[1] )
      {
        v185 = _mm_loadu_si128(v65 + 1);
      }
      else
      {
        v183 = (void *)v65->m128i_i64[0];
        v185.m128i_i64[0] = v65[1].m128i_i64[0];
      }
      v184 = v65->m128i_u64[1];
      v65->m128i_i64[0] = (__int64)v65[1].m128i_i64;
      v65->m128i_i64[1] = 0;
      v65[1].m128i_i8[0] = 0;
      v66 = v184;
      if ( v184 != 0x7FFFFFFFFFFFFFFFLL && v184 != 9223372036854775806LL )
      {
        v67 = v184 + 2;
        if ( v183 == &v185 )
          v68 = 15;
        else
          v68 = v185.m128i_i64[0];
        if ( v67 > v68 )
        {
          v161 = v184 + 2;
          v159 = v184;
          sub_974DF0((__int64)&v183, v184, 0, "__", 2u);
          v67 = v161;
          v66 = v159;
        }
        else
        {
          v69 = 24415;
          *(_WORD *)((char *)v183 + v184) = 24415;
        }
        v184 = v67;
        *((_BYTE *)v183 + v66 + 2) = 0;
        v192[0] = &v193;
        if ( v183 == &v185 )
        {
          v193 = _mm_load_si128(&v185);
        }
        else
        {
          v192[0] = v183;
          v193.m128i_i64[0] = v185.m128i_i64[0];
        }
        v70 = (void *)v184;
        LOWORD(v198) = 260;
        v184 = 0;
        v192[1] = v70;
        v183 = &v185;
        v185.m128i_i8[0] = 0;
        v195 = v192;
        sub_10160F0(a3, (__int64)&v195, (__int64)v199, v68, v69, v67, (char)v202, v203, v204, v205, v206);
        if ( v192[0] != &v193 )
          operator delete(v192[0]);
        if ( v183 != &v185 )
          operator delete(v183);
        if ( v181[0] != &v182 )
          operator delete(v181[0]);
        goto LABEL_119;
      }
    }
LABEL_302:
    std::__throw_length_error("basic_string::append");
  }
LABEL_119:
  v71 = *a3;
  v183 = "__cskyLE__";
  v201 = 259;
  v72 = *(_QWORD **)(v71 + 32);
  v195 = "__cskyLE__";
  v73 = *(_QWORD *)(v71 + 24);
  v199[0] = "1";
  v184 = 10;
  LOWORD(v198) = 261;
  v196 = 10;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v73 - (_QWORD)v72) > 7 )
  {
    *v72 = 0x20656E6966656423LL;
    *(_QWORD *)(v71 + 32) += 8LL;
  }
  else
  {
    v71 = sub_22581D0(v71, "#define ", 8);
  }
  sub_2230440(&v195, v71);
  v74 = *(_BYTE **)(v71 + 32);
  if ( (unsigned __int64)v74 >= *(_QWORD *)(v71 + 24) )
  {
    v71 = sub_2257CD0(v71, 32);
  }
  else
  {
    *(_QWORD *)(v71 + 32) = v74 + 1;
    *v74 = 32;
  }
  sub_2230440(v199, v71);
  v75 = *(_BYTE **)(v71 + 32);
  if ( (unsigned __int64)v75 >= *(_QWORD *)(v71 + 24) )
  {
    sub_2257CD0(v71, 10);
  }
  else
  {
    *(_QWORD *)(v71 + 32) = v75 + 1;
    *v75 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v113 = *a3;
    v114 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v114 > 0x18u )
    {
      v151 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v114[1].m128i_i8[8] = 40;
      v114[1].m128i_i64[0] = 0x6465746163657270LL;
      *v114 = v151;
      *(_QWORD *)(v113 + 32) += 25LL;
    }
    else
    {
      v113 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v113);
    v115 = *(_QWORD *)(v113 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v113 + 24) - v115) > 2 )
    {
      *(_BYTE *)(v115 + 2) = 34;
      *(_WORD *)v115 = 8236;
      *(_QWORD *)(v113 + 32) += 3LL;
    }
    else
    {
      v113 = sub_22581D0(v113, ", \"", 3);
    }
    sub_2230440(&v202, v113);
    v116 = *(_QWORD *)(v113 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v113 + 24) - v116) > 2 )
    {
      *(_BYTE *)(v116 + 2) = 10;
      *(_WORD *)v116 = 10530;
      *(_QWORD *)(v113 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v113, "\")\n", 3);
    }
  }
  v199[0] = "1";
  v201 = 259;
  sub_2222A40(v192, &v183);
  v76 = *a3;
  LOWORD(v198) = 260;
  v77 = *(_QWORD **)(v76 + 32);
  v78 = *(_QWORD *)(v76 + 24);
  v195 = v192;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v78 - (_QWORD)v77) > 7 )
  {
    *v77 = 0x20656E6966656423LL;
    *(_QWORD *)(v76 + 32) += 8LL;
  }
  else
  {
    v76 = sub_22581D0(v76, "#define ", 8);
  }
  sub_2230440(&v195, v76);
  v79 = *(_BYTE **)(v76 + 32);
  if ( (unsigned __int64)v79 >= *(_QWORD *)(v76 + 24) )
  {
    v76 = sub_2257CD0(v76, 32);
  }
  else
  {
    *(_QWORD *)(v76 + 32) = v79 + 1;
    *v79 = 32;
  }
  sub_2230440(v199, v76);
  v80 = *(_BYTE **)(v76 + 32);
  if ( (unsigned __int64)v80 >= *(_QWORD *)(v76 + 24) )
  {
    sub_2257CD0(v76, 10);
  }
  else
  {
    *(_QWORD *)(v76 + 32) = v80 + 1;
    *v80 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v135 = *a3;
    v136 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v136 > 0x18u )
    {
      v152 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v136[1].m128i_i8[8] = 40;
      v136[1].m128i_i64[0] = 0x6465746163657270LL;
      *v136 = v152;
      *(_QWORD *)(v135 + 32) += 25LL;
    }
    else
    {
      v135 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v135);
    v137 = *(_QWORD *)(v135 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v135 + 24) - v137) > 2 )
    {
      *(_BYTE *)(v137 + 2) = 34;
      *(_WORD *)v137 = 8236;
      *(_QWORD *)(v135 + 32) += 3LL;
    }
    else
    {
      v135 = sub_22581D0(v135, ", \"", 3);
    }
    sub_2230440(&v202, v135);
    v138 = *(_QWORD *)(v135 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v135 + 24) - v138) > 2 )
    {
      *(_BYTE *)(v138 + 2) = 10;
      *(_WORD *)v138 = 10530;
      *(_QWORD *)(v135 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v135, "\")\n", 3);
    }
  }
  if ( v192[0] != &v193 )
    operator delete(v192[0]);
  v199[0] = "1";
  v201 = 259;
  sub_2222710(v192, &v183);
  v81 = *a3;
  LOWORD(v198) = 260;
  v82 = *(_QWORD *)(v81 + 24);
  v83 = *(_QWORD **)(v81 + 32);
  v195 = v192;
  LOWORD(v206) = 257;
  if ( (unsigned __int64)(v82 - (_QWORD)v83) > 7 )
  {
    *v83 = 0x20656E6966656423LL;
    *(_QWORD *)(v81 + 32) += 8LL;
  }
  else
  {
    v81 = sub_22581D0(v81, "#define ", 8);
  }
  sub_2230440(&v195, v81);
  v84 = *(_BYTE **)(v81 + 32);
  if ( (unsigned __int64)v84 >= *(_QWORD *)(v81 + 24) )
  {
    v81 = sub_2257CD0(v81, 32);
  }
  else
  {
    *(_QWORD *)(v81 + 32) = v84 + 1;
    *v84 = 32;
  }
  sub_2230440(v199, v81);
  v87 = *(_BYTE **)(v81 + 32);
  if ( (unsigned __int64)v87 >= *(_QWORD *)(v81 + 24) )
  {
    sub_2257CD0(v81, 10);
  }
  else
  {
    *(_QWORD *)(v81 + 32) = v87 + 1;
    *v87 = 10;
  }
  if ( (unsigned __int8)v206 > 1u )
  {
    v139 = *a3;
    v140 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v140 > 0x18u )
    {
      v150 = _mm_load_si128((const __m128i *)&xmmword_2385620);
      v140[1].m128i_i8[8] = 40;
      v140[1].m128i_i64[0] = 0x6465746163657270LL;
      *v140 = v150;
      *(_QWORD *)(v139 + 32) += 25LL;
    }
    else
    {
      v139 = sub_22581D0(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2230440(&v195, v139);
    v141 = *(_QWORD *)(v139 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v139 + 24) - v141) > 2 )
    {
      *(_BYTE *)(v141 + 2) = 34;
      *(_WORD *)v141 = 8236;
      *(_QWORD *)(v139 + 32) += 3LL;
    }
    else
    {
      v139 = sub_22581D0(v139, ", \"", 3);
    }
    sub_2230440(&v202, v139);
    v142 = *(_QWORD *)(v139 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v139 + 24) - v142) > 2 )
    {
      *(_BYTE *)(v142 + 2) = 10;
      *(_WORD *)v142 = 10530;
      *(_QWORD *)(v139 + 32) += 3LL;
    }
    else
    {
      sub_22581D0(v139, "\")\n", 3);
    }
  }
  if ( v192[0] != &v193 )
    operator delete(v192[0]);
  if ( *(_BYTE *)(a1 + 592) )
  {
    LOWORD(v206) = 257;
    v199[0] = "1";
    v201 = 259;
    v189 = "__CSKY_DSPV2__";
    v195 = "__CSKY_DSPV2__";
    v190 = 14;
    LOWORD(v198) = 261;
    v196 = 14;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, (__int64)"1", v85, v86, (char)v202, v203, v204, v205, 1u);
    v199[0] = "1";
    LOWORD(v206) = 257;
    v201 = 259;
    sub_2222710(v192, &v189);
    LOWORD(v198) = 260;
    v195 = v192;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v132, v133, v134, (char)v202, v203, v204, v205, v206);
    if ( v192[0] != &v193 )
      operator delete(v192[0]);
  }
  if ( *(_BYTE *)(a1 + 590) )
  {
    v199[0] = "1";
    v186 = "__CSKY_VDSPV2__";
    v195 = "__CSKY_VDSPV2__";
    v201 = 259;
    LOWORD(v206) = 257;
    LOWORD(v198) = 261;
    v187 = 15;
    v196 = 15;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, 259, v85, v86, (char)v202, v203, v204, v205, 1u);
    v199[0] = "1";
    LOWORD(v206) = 257;
    v201 = 259;
    sub_2222710(v192, &v186);
    v195 = v192;
    LOWORD(v198) = 260;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v127, v128, 260, (char)v202, v203, v204, v205, v206);
    if ( v192[0] != &v193 )
      operator delete(v192[0]);
    if ( *(_BYTE *)(a1 + 584) )
    {
      LOWORD(v206) = 257;
      v199[0] = "1";
      v201 = 259;
      v189 = "__CSKY_VDSPV2_F__";
      v195 = "__CSKY_VDSPV2_F__";
      v190 = 17;
      LOWORD(v198) = 261;
      v196 = 17;
      sub_10160F0(a3, (__int64)&v195, (__int64)v199, (__int64)"1", v85, v86, (char)v202, v203, v204, v205, 1u);
      v199[0] = "1";
      LOWORD(v206) = 257;
      v201 = 259;
      sub_2222710(v192, &v189);
      LOWORD(v198) = 260;
      v195 = v192;
      sub_10160F0(a3, (__int64)&v195, (__int64)v199, v129, v130, v131, (char)v202, v203, v204, v205, v206);
      if ( v192[0] != &v193 )
        operator delete(v192[0]);
    }
  }
  if ( *(_BYTE *)(a1 + 591) )
  {
    v189 = "__CSKY_VDSP128__";
    v199[0] = "1";
    v186 = "__CSKY_VDSP64__";
    v195 = "__CSKY_VDSP64__";
    v201 = 259;
    LOWORD(v206) = 257;
    LOWORD(v198) = 261;
    v187 = 15;
    v190 = 16;
    v196 = 15;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, 259, v85, v86, (char)v202, v203, v204, v205, 1u);
    v199[0] = "1";
    LOWORD(v206) = 257;
    v201 = 259;
    sub_2222710(v192, &v186);
    v195 = v192;
    LOWORD(v198) = 260;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v119, v120, 260, (char)v202, v203, v204, v205, v206);
    if ( v192[0] != &v193 )
      operator delete(v192[0]);
    v195 = v189;
    LOWORD(v206) = 257;
    v201 = 259;
    v196 = v190;
    v199[0] = "1";
    LOWORD(v198) = 261;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v121, v122, v123, (char)v202, v203, v204, v205, 1u);
    v199[0] = "1";
    LOWORD(v206) = 257;
    v201 = 259;
    sub_2222710(v192, &v189);
    LOWORD(v198) = 260;
    v195 = v192;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v124, v125, v126, (char)v202, v203, v204, v205, v206);
    if ( v192[0] != &v193 )
      operator delete(v192[0]);
  }
  if ( *(_BYTE *)(a1 + 593) )
  {
    v199[0] = "1";
    v189 = "__CSKY_3E3R1__";
    v201 = 259;
    v195 = "__CSKY_3E3R1__";
    LOWORD(v206) = 257;
    LOWORD(v198) = 261;
    v190 = 14;
    v196 = 14;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, 259, v85, v86, (char)v202, v203, v204, v205, 1u);
    v199[0] = "1";
    LOWORD(v206) = 257;
    v201 = 259;
    sub_2222710(v192, &v189);
    v195 = v192;
    LOWORD(v198) = 260;
    sub_10160F0(a3, (__int64)&v195, (__int64)v199, v117, v118, 260, (char)v202, v203, v204, v205, v206);
    if ( v192[0] != &v193 )
      operator delete(v192[0]);
  }
}

