void __fastcall sub_10AFED0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  __int64 v9; // r15
  __m128i *v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  __int64 v14; // r15
  __m128i *v15; // rcx
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdx
  _BYTE *v18; // rdx
  __int64 v19; // r15
  __m128i *v20; // rcx
  unsigned __int64 v21; // rdx
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  __int64 v24; // r15
  __m128i *v25; // rcx
  unsigned __int64 v26; // rdx
  int v27; // esi
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  __int64 v30; // r15
  __m128i *v31; // rcx
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rdx
  _BYTE *v34; // rdx
  __int64 v35; // r15
  __m128i *v36; // rcx
  unsigned __int64 v37; // rdx
  _BYTE *v38; // rdx
  _BYTE *v39; // rdx
  __int64 v40; // r15
  __m128i *v41; // rcx
  unsigned __int64 v42; // rdx
  _BYTE *v43; // rdx
  _BYTE *v44; // rdx
  __int64 v45; // r15
  __m128i *v46; // rcx
  unsigned __int64 v47; // rdx
  _BYTE *v48; // rdx
  _BYTE *v49; // rdx
  __int64 v50; // rax
  int v51; // rdx^4
  int v52; // edx
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  Elf64_Sym *v55; // rsi
  int v56; // ecx
  unsigned __int64 v57; // rax
  int v58; // edx
  unsigned int v59; // eax
  char *v60; // rsi
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  char v63; // dl
  _QWORD *v64; // rax
  _BYTE *v65; // r14
  _BYTE *v66; // rdi
  size_t v67; // r14
  unsigned __int64 v68; // rax
  _BYTE *v69; // rdi
  __int64 v70; // r14
  _QWORD *v71; // rdx
  __int64 v72; // rax
  _BYTE *v73; // rax
  _BYTE *v74; // rax
  __int64 v75; // r13
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _BYTE *v78; // rax
  _BYTE *v79; // rax
  __int64 v80; // r13
  __m128i *v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r13
  _QWORD *v85; // rdx
  _BYTE *v86; // rax
  _BYTE *v87; // rax
  __int64 v88; // r13
  __m128i *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rax
  _BYTE *v96; // rdx
  _BYTE *v97; // rdx
  __int64 v98; // rax
  __m128i *v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  __m128i *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rbx
  __m128i *v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rdx
  __m128i v128; // xmm0
  __m128i v129; // xmm0
  __m128i v130; // xmm0
  __m128i v131; // xmm0
  __m128i v132; // xmm0
  __m128i v133; // xmm0
  __m128i v134; // xmm0
  __m128i v135; // xmm0
  __m128i si128; // xmm0
  __m128i v137; // xmm0
  __m128i v138; // xmm0
  __m128i v139; // xmm0
  __m128i v140; // xmm0
  __int64 v142; // [rsp+8h] [rbp-F0h]
  __int64 v143; // [rsp+8h] [rbp-F0h]
  __int64 v144; // [rsp+8h] [rbp-F0h]
  __int64 v145; // [rsp+8h] [rbp-F0h]
  __int64 v146; // [rsp+8h] [rbp-F0h]
  __int64 v147; // [rsp+8h] [rbp-F0h]
  void *v148; // [rsp+10h] [rbp-E8h] BYREF
  size_t v149; // [rsp+18h] [rbp-E0h]
  char v150[16]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v151[4]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v152; // [rsp+50h] [rbp-A8h]
  _QWORD v153[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v154[15]; // [rsp+71h] [rbp-87h] BYREF
  __int16 v155; // [rsp+80h] [rbp-78h]
  void *src; // [rsp+90h] [rbp-68h] BYREF
  size_t n; // [rsp+98h] [rbp-60h]
  _QWORD v158[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v159; // [rsp+B0h] [rbp-48h]

  v4 = *a3;
  v155 = 259;
  v5 = *(_QWORD **)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  v151[0] = "__s390__";
  v152 = 259;
  v153[0] = "1";
  v159 = 257;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v151, v4);
  v7 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
  {
    v4 = sub_227BA10(v4, 32);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v7 + 1;
    *v7 = 32;
  }
  sub_2254180(v153, v4);
  v8 = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
  {
    sub_227BA10(v4, 10);
  }
  else
  {
    *(_QWORD *)(v4 + 32) = v8 + 1;
    *v8 = 10;
  }
  v9 = *a3;
  v10 = *(__m128i **)(*a3 + 32);
  v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v11 > 0x18 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v10[1].m128i_i8[8] = 40;
      v10[1].m128i_i64[0] = 0x6465746163657270LL;
      *v10 = si128;
      *(_QWORD *)(v9 + 32) += 25LL;
    }
    else
    {
      v9 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v9);
    v122 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v122) > 2 )
    {
      *(_BYTE *)(v122 + 2) = 34;
      *(_WORD *)v122 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_227BF10(v9, ", \"", 3);
    }
    sub_2254180(&src, v9);
    v123 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v123) > 2 )
    {
      *(_BYTE *)(v123 + 2) = 10;
      *(_WORD *)v123 = 10530;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v9, "\")\n", 3);
    }
    v9 = *a3;
    v10 = *(__m128i **)(*a3 + 32);
    v11 = *(_QWORD *)(*a3 + 24) - (_QWORD)v10;
  }
  v153[0] = "1";
  v151[0] = "__s390x__";
  v155 = 259;
  v152 = 259;
  v159 = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "#define ", 8);
  }
  sub_2254180(v151, v9);
  v12 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v9 + 24) )
  {
    v9 = sub_227BA10(v9, 32);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v12 + 1;
    *v12 = 32;
  }
  sub_2254180(v153, v9);
  v13 = *(_BYTE **)(v9 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v9 + 24) )
  {
    sub_227BA10(v9, 10);
  }
  else
  {
    *(_QWORD *)(v9 + 32) = v13 + 1;
    *v13 = 10;
  }
  v14 = *a3;
  v15 = *(__m128i **)(*a3 + 32);
  v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v16 > 0x18 )
    {
      v133 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v15[1].m128i_i8[8] = 40;
      v15[1].m128i_i64[0] = 0x6465746163657270LL;
      *v15 = v133;
      *(_QWORD *)(v14 + 32) += 25LL;
    }
    else
    {
      v14 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v14);
    v120 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v120) > 2 )
    {
      *(_BYTE *)(v120 + 2) = 34;
      *(_WORD *)v120 = 8236;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      v14 = sub_227BF10(v14, ", \"", 3);
    }
    sub_2254180(&src, v14);
    v121 = *(_QWORD *)(v14 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v121) > 2 )
    {
      *(_BYTE *)(v121 + 2) = 10;
      *(_WORD *)v121 = 10530;
      *(_QWORD *)(v14 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v14, "\")\n", 3);
    }
    v14 = *a3;
    v15 = *(__m128i **)(*a3 + 32);
    v16 = *(_QWORD *)(*a3 + 24) - (_QWORD)v15;
  }
  v153[0] = "1";
  v155 = 259;
  v151[0] = "__zarch__";
  v152 = 259;
  v159 = 257;
  if ( v16 > 7 )
  {
    v15->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v14 + 32) += 8LL;
  }
  else
  {
    v14 = sub_227BF10(v14, "#define ", 8);
  }
  sub_2254180(v151, v14);
  v17 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(v14 + 24) )
  {
    v14 = sub_227BA10(v14, 32);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v17 + 1;
    *v17 = 32;
  }
  sub_2254180(v153, v14);
  v18 = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v14 + 24) )
  {
    sub_227BA10(v14, 10);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v18 + 1;
    *v18 = 10;
  }
  v19 = *a3;
  v20 = *(__m128i **)(*a3 + 32);
  v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v21 > 0x18 )
    {
      v134 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v20[1].m128i_i8[8] = 40;
      v20[1].m128i_i64[0] = 0x6465746163657270LL;
      *v20 = v134;
      *(_QWORD *)(v19 + 32) += 25LL;
    }
    else
    {
      v19 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v19);
    v118 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v118) > 2 )
    {
      *(_BYTE *)(v118 + 2) = 34;
      *(_WORD *)v118 = 8236;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      v19 = sub_227BF10(v19, ", \"", 3);
    }
    sub_2254180(&src, v19);
    v119 = *(_QWORD *)(v19 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v19 + 24) - v119) > 2 )
    {
      *(_BYTE *)(v119 + 2) = 10;
      *(_WORD *)v119 = 10530;
      *(_QWORD *)(v19 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v19, "\")\n", 3);
    }
    v19 = *a3;
    v20 = *(__m128i **)(*a3 + 32);
    v21 = *(_QWORD *)(*a3 + 24) - (_QWORD)v20;
  }
  v153[0] = "1";
  v155 = 259;
  v151[0] = "__LONG_DOUBLE_128__";
  v152 = 259;
  v159 = 257;
  if ( v21 > 7 )
  {
    v20->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v19 + 32) += 8LL;
  }
  else
  {
    v19 = sub_227BF10(v19, "#define ", 8);
  }
  sub_2254180(v151, v19);
  v22 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v19 + 24) )
  {
    v19 = sub_227BA10(v19, 32);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = v22 + 1;
    *v22 = 32;
  }
  sub_2254180(v153, v19);
  v23 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v23 >= *(_QWORD *)(v19 + 24) )
  {
    sub_227BA10(v19, 10);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = v23 + 1;
    *v23 = 10;
  }
  v24 = *a3;
  v25 = *(__m128i **)(*a3 + 32);
  v26 = *(_QWORD *)(*a3 + 24) - (_QWORD)v25;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v26 > 0x18 )
    {
      v129 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v25[1].m128i_i8[8] = 40;
      v25[1].m128i_i64[0] = 0x6465746163657270LL;
      *v25 = v129;
      *(_QWORD *)(v24 + 32) += 25LL;
    }
    else
    {
      v24 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v24);
    v116 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v116) > 2 )
    {
      *(_BYTE *)(v116 + 2) = 34;
      *(_WORD *)v116 = 8236;
      *(_QWORD *)(v24 + 32) += 3LL;
    }
    else
    {
      v24 = sub_227BF10(v24, ", \"", 3);
    }
    sub_2254180(&src, v24);
    v117 = *(_QWORD *)(v24 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v117) > 2 )
    {
      *(_BYTE *)(v117 + 2) = 10;
      *(_WORD *)v117 = 10530;
      *(_QWORD *)(v24 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v24, "\")\n", 3);
    }
    v24 = *a3;
    v25 = *(__m128i **)(*a3 + 32);
    v26 = *(_QWORD *)(*a3 + 24) - (_QWORD)v25;
  }
  v27 = *(_DWORD *)(a1 + 512);
  v152 = 266;
  LODWORD(v151[0]) = v27;
  v153[0] = "__ARCH__";
  v155 = 259;
  v159 = 257;
  if ( v26 > 7 )
  {
    v25->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v24 + 32) += 8LL;
  }
  else
  {
    v24 = sub_227BF10(v24, "#define ", 8);
  }
  sub_2254180(v153, v24);
  v28 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v28 >= *(_QWORD *)(v24 + 24) )
  {
    v24 = sub_227BA10(v24, 32);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v28 + 1;
    *v28 = 32;
  }
  sub_2254180(v151, v24);
  v29 = *(_BYTE **)(v24 + 32);
  if ( (unsigned __int64)v29 >= *(_QWORD *)(v24 + 24) )
  {
    sub_227BA10(v24, 10);
  }
  else
  {
    *(_QWORD *)(v24 + 32) = v29 + 1;
    *v29 = 10;
  }
  v30 = *a3;
  v31 = *(__m128i **)(*a3 + 32);
  v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v32 > 0x18 )
    {
      v131 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v31[1].m128i_i8[8] = 40;
      v31[1].m128i_i64[0] = 0x6465746163657270LL;
      *v31 = v131;
      *(_QWORD *)(v30 + 32) += 25LL;
    }
    else
    {
      v30 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v153, v30);
    v114 = *(_QWORD *)(v30 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v114) > 2 )
    {
      *(_BYTE *)(v114 + 2) = 34;
      *(_WORD *)v114 = 8236;
      *(_QWORD *)(v30 + 32) += 3LL;
    }
    else
    {
      v30 = sub_227BF10(v30, ", \"", 3);
    }
    sub_2254180(&src, v30);
    v115 = *(_QWORD *)(v30 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v30 + 24) - v115) > 2 )
    {
      *(_BYTE *)(v115 + 2) = 10;
      *(_WORD *)v115 = 10530;
      *(_QWORD *)(v30 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v30, "\")\n", 3);
    }
    v30 = *a3;
    v31 = *(__m128i **)(*a3 + 32);
    v32 = *(_QWORD *)(*a3 + 24) - (_QWORD)v31;
  }
  v153[0] = "1";
  v155 = 259;
  v151[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1";
  v152 = 259;
  v159 = 257;
  if ( v32 > 7 )
  {
    v31->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v30 + 32) += 8LL;
  }
  else
  {
    v30 = sub_227BF10(v30, "#define ", 8);
  }
  sub_2254180(v151, v30);
  v33 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v30 + 24) )
  {
    v30 = sub_227BA10(v30, 32);
  }
  else
  {
    *(_QWORD *)(v30 + 32) = v33 + 1;
    *v33 = 32;
  }
  sub_2254180(v153, v30);
  v34 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v30 + 24) )
  {
    sub_227BA10(v30, 10);
  }
  else
  {
    *(_QWORD *)(v30 + 32) = v34 + 1;
    *v34 = 10;
  }
  v35 = *a3;
  v36 = *(__m128i **)(*a3 + 32);
  v37 = *(_QWORD *)(*a3 + 24) - (_QWORD)v36;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v37 > 0x18 )
    {
      v128 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v36[1].m128i_i8[8] = 40;
      v36[1].m128i_i64[0] = 0x6465746163657270LL;
      *v36 = v128;
      *(_QWORD *)(v35 + 32) += 25LL;
    }
    else
    {
      v35 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v35);
    v112 = *(_QWORD *)(v35 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v112) > 2 )
    {
      *(_BYTE *)(v112 + 2) = 34;
      *(_WORD *)v112 = 8236;
      *(_QWORD *)(v35 + 32) += 3LL;
    }
    else
    {
      v35 = sub_227BF10(v35, ", \"", 3);
    }
    sub_2254180(&src, v35);
    v113 = *(_QWORD *)(v35 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v35 + 24) - v113) > 2 )
    {
      *(_BYTE *)(v113 + 2) = 10;
      *(_WORD *)v113 = 10530;
      *(_QWORD *)(v35 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v35, "\")\n", 3);
    }
    v35 = *a3;
    v36 = *(__m128i **)(*a3 + 32);
    v37 = *(_QWORD *)(*a3 + 24) - (_QWORD)v36;
  }
  v153[0] = "1";
  v151[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2";
  v155 = 259;
  v152 = 259;
  v159 = 257;
  if ( v37 > 7 )
  {
    v36->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v35 + 32) += 8LL;
  }
  else
  {
    v35 = sub_227BF10(v35, "#define ", 8);
  }
  sub_2254180(v151, v35);
  v38 = *(_BYTE **)(v35 + 32);
  if ( (unsigned __int64)v38 >= *(_QWORD *)(v35 + 24) )
  {
    v35 = sub_227BA10(v35, 32);
  }
  else
  {
    *(_QWORD *)(v35 + 32) = v38 + 1;
    *v38 = 32;
  }
  sub_2254180(v153, v35);
  v39 = *(_BYTE **)(v35 + 32);
  if ( (unsigned __int64)v39 >= *(_QWORD *)(v35 + 24) )
  {
    sub_227BA10(v35, 10);
  }
  else
  {
    *(_QWORD *)(v35 + 32) = v39 + 1;
    *v39 = 10;
  }
  v40 = *a3;
  v41 = *(__m128i **)(*a3 + 32);
  v42 = *(_QWORD *)(*a3 + 24) - (_QWORD)v41;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v42 > 0x18 )
    {
      v135 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v41[1].m128i_i8[8] = 40;
      v41[1].m128i_i64[0] = 0x6465746163657270LL;
      *v41 = v135;
      *(_QWORD *)(v40 + 32) += 25LL;
    }
    else
    {
      v40 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v40);
    v110 = *(_QWORD *)(v40 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v40 + 24) - v110) > 2 )
    {
      *(_BYTE *)(v110 + 2) = 34;
      *(_WORD *)v110 = 8236;
      *(_QWORD *)(v40 + 32) += 3LL;
    }
    else
    {
      v40 = sub_227BF10(v40, ", \"", 3);
    }
    sub_2254180(&src, v40);
    v111 = *(_QWORD *)(v40 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v40 + 24) - v111) > 2 )
    {
      *(_BYTE *)(v111 + 2) = 10;
      *(_WORD *)v111 = 10530;
      *(_QWORD *)(v40 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v40, "\")\n", 3);
    }
    v40 = *a3;
    v41 = *(__m128i **)(*a3 + 32);
    v42 = *(_QWORD *)(*a3 + 24) - (_QWORD)v41;
  }
  v153[0] = "1";
  v155 = 259;
  v151[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4";
  v152 = 259;
  v159 = 257;
  if ( v42 > 7 )
  {
    v41->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v40 + 32) += 8LL;
  }
  else
  {
    v40 = sub_227BF10(v40, "#define ", 8);
  }
  sub_2254180(v151, v40);
  v43 = *(_BYTE **)(v40 + 32);
  if ( (unsigned __int64)v43 >= *(_QWORD *)(v40 + 24) )
  {
    v40 = sub_227BA10(v40, 32);
  }
  else
  {
    *(_QWORD *)(v40 + 32) = v43 + 1;
    *v43 = 32;
  }
  sub_2254180(v153, v40);
  v44 = *(_BYTE **)(v40 + 32);
  if ( (unsigned __int64)v44 >= *(_QWORD *)(v40 + 24) )
  {
    sub_227BA10(v40, 10);
  }
  else
  {
    *(_QWORD *)(v40 + 32) = v44 + 1;
    *v44 = 10;
  }
  v45 = *a3;
  v46 = *(__m128i **)(*a3 + 32);
  v47 = *(_QWORD *)(*a3 + 24) - (_QWORD)v46;
  if ( (unsigned __int8)v159 > 1u )
  {
    if ( v47 > 0x18 )
    {
      v132 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v46[1].m128i_i8[8] = 40;
      v46[1].m128i_i64[0] = 0x6465746163657270LL;
      *v46 = v132;
      *(_QWORD *)(v45 + 32) += 25LL;
    }
    else
    {
      v45 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v151, v45);
    v108 = *(_QWORD *)(v45 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v108) > 2 )
    {
      *(_BYTE *)(v108 + 2) = 34;
      *(_WORD *)v108 = 8236;
      *(_QWORD *)(v45 + 32) += 3LL;
    }
    else
    {
      v45 = sub_227BF10(v45, ", \"", 3);
    }
    sub_2254180(&src, v45);
    v109 = *(_QWORD *)(v45 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v45 + 24) - v109) > 2 )
    {
      *(_BYTE *)(v109 + 2) = 10;
      *(_WORD *)v109 = 10530;
      *(_QWORD *)(v45 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v45, "\")\n", 3);
    }
    v45 = *a3;
    v46 = *(__m128i **)(*a3 + 32);
    v47 = *(_QWORD *)(*a3 + 24) - (_QWORD)v46;
  }
  v153[0] = "1";
  v155 = 259;
  v151[0] = "__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8";
  v152 = 259;
  v159 = 257;
  if ( v47 > 7 )
  {
    v46->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v45 + 32) += 8LL;
  }
  else
  {
    v45 = sub_227BF10(v45, "#define ", 8);
  }
  sub_2254180(v151, v45);
  v48 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v48 >= *(_QWORD *)(v45 + 24) )
  {
    v45 = sub_227BA10(v45, 32);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v48 + 1;
    *v48 = 32;
  }
  sub_2254180(v153, v45);
  v49 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v49 >= *(_QWORD *)(v45 + 24) )
  {
    sub_227BA10(v45, 10);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v49 + 1;
    *v49 = 10;
  }
  if ( (unsigned __int8)v159 > 1u )
  {
    v103 = *a3;
    v104 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v104 > 0x18u )
    {
      v130 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v104[1].m128i_i8[8] = 40;
      v104[1].m128i_i64[0] = 0x6465746163657270LL;
      *v104 = v130;
      *(_QWORD *)(v103 + 32) += 25LL;
    }
    else
    {
      v103 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    v146 = v103;
    sub_2254180(v151, v103);
    v105 = v146;
    v106 = *(_QWORD *)(v146 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v146 + 24) - v106) > 2 )
    {
      *(_BYTE *)(v106 + 2) = 34;
      *(_WORD *)v106 = 8236;
      *(_QWORD *)(v146 + 32) += 3LL;
    }
    else
    {
      v105 = sub_227BF10(v146, ", \"", 3);
    }
    v147 = v105;
    sub_2254180(&src, v105);
    v107 = *(_QWORD *)(v147 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v147 + 24) - v107) > 2 )
    {
      *(_BYTE *)(v107 + 2) = 10;
      *(_WORD *)v107 = 10530;
      *(_QWORD *)(v147 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v147, "\")\n", 3);
    }
  }
  if ( *(_BYTE *)(a1 + 516) )
  {
    v153[0] = "1";
    v151[0] = "__HTM__";
    v92 = *a3;
    v155 = 259;
    v93 = *(_QWORD **)(v92 + 32);
    v94 = *(_QWORD *)(v92 + 24);
    v152 = 259;
    v159 = 257;
    if ( (unsigned __int64)(v94 - (_QWORD)v93) > 7 )
    {
      *v93 = 0x20656E6966656423LL;
      *(_QWORD *)(v92 + 32) += 8LL;
    }
    else
    {
      v92 = sub_227BF10(v92, "#define ", 8);
    }
    v142 = v92;
    sub_2254180(v151, v92);
    v95 = v142;
    v96 = *(_BYTE **)(v142 + 32);
    if ( (unsigned __int64)v96 >= *(_QWORD *)(v142 + 24) )
    {
      v95 = sub_227BA10(v142, 32);
    }
    else
    {
      *(_QWORD *)(v142 + 32) = v96 + 1;
      *v96 = 32;
    }
    v143 = v95;
    sub_2254180(v153, v95);
    v97 = *(_BYTE **)(v143 + 32);
    if ( (unsigned __int64)v97 >= *(_QWORD *)(v143 + 24) )
    {
      sub_227BA10(v143, 10);
    }
    else
    {
      *(_QWORD *)(v143 + 32) = v97 + 1;
      *v97 = 10;
    }
    if ( (unsigned __int8)v159 > 1u )
    {
      v98 = *a3;
      v99 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v99 > 0x18u )
      {
        v140 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v99[1].m128i_i8[8] = 40;
        v99[1].m128i_i64[0] = 0x6465746163657270LL;
        *v99 = v140;
        *(_QWORD *)(v98 + 32) += 25LL;
      }
      else
      {
        v98 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      v144 = v98;
      sub_2254180(v151, v98);
      v100 = v144;
      v101 = *(_QWORD *)(v144 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v144 + 24) - v101) > 2 )
      {
        *(_BYTE *)(v101 + 2) = 34;
        *(_WORD *)v101 = 8236;
        *(_QWORD *)(v144 + 32) += 3LL;
      }
      else
      {
        v100 = sub_227BF10(v144, ", \"", 3);
      }
      v145 = v100;
      sub_2254180(&src, v100);
      v102 = *(_QWORD *)(v145 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v145 + 24) - v102) > 2 )
      {
        *(_BYTE *)(v102 + 2) = 10;
        *(_WORD *)v102 = 10530;
        *(_QWORD *)(v145 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v145, "\")\n", 3);
      }
    }
  }
  if ( *(_BYTE *)(a1 + 517) )
  {
    v153[0] = "1";
    v84 = *a3;
    v155 = 259;
    v151[0] = "__VX__";
    v85 = *(_QWORD **)(v84 + 32);
    v152 = 259;
    v159 = 257;
    if ( *(_QWORD *)(v84 + 24) - (_QWORD)v85 > 7u )
    {
      *v85 = 0x20656E6966656423LL;
      *(_QWORD *)(v84 + 32) += 8LL;
    }
    else
    {
      v84 = sub_227BF10(v84, "#define ", 8);
    }
    sub_2254180(v151, v84);
    v86 = *(_BYTE **)(v84 + 32);
    if ( (unsigned __int64)v86 >= *(_QWORD *)(v84 + 24) )
    {
      v84 = sub_227BA10(v84, 32);
    }
    else
    {
      *(_QWORD *)(v84 + 32) = v86 + 1;
      *v86 = 32;
    }
    sub_2254180(v153, v84);
    v87 = *(_BYTE **)(v84 + 32);
    if ( (unsigned __int64)v87 >= *(_QWORD *)(v84 + 24) )
    {
      sub_227BA10(v84, 10);
    }
    else
    {
      *(_QWORD *)(v84 + 32) = v87 + 1;
      *v87 = 10;
    }
    if ( (unsigned __int8)v159 > 1u )
    {
      v88 = *a3;
      v89 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v89 > 0x18u )
      {
        v138 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v89[1].m128i_i8[8] = 40;
        v89[1].m128i_i64[0] = 0x6465746163657270LL;
        *v89 = v138;
        *(_QWORD *)(v88 + 32) += 25LL;
      }
      else
      {
        v88 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v151, v88);
      v90 = *(_QWORD *)(v88 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - v90) > 2 )
      {
        *(_BYTE *)(v90 + 2) = 34;
        *(_WORD *)v90 = 8236;
        *(_QWORD *)(v88 + 32) += 3LL;
      }
      else
      {
        v88 = sub_227BF10(v88, ", \"", 3);
      }
      sub_2254180(&src, v88);
      v91 = *(_QWORD *)(v88 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - v91) > 2 )
      {
        *(_BYTE *)(v91 + 2) = 10;
        *(_WORD *)v91 = 10530;
        *(_QWORD *)(v88 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v88, "\")\n", 3);
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 13) & 4) != 0 )
  {
    v153[0] = "10305";
    v155 = 259;
    v75 = *a3;
    v151[0] = "__VEC__";
    v159 = 257;
    v76 = *(_QWORD **)(v75 + 32);
    v77 = *(_QWORD *)(v75 + 24);
    v152 = 259;
    if ( (unsigned __int64)(v77 - (_QWORD)v76) > 7 )
    {
      *v76 = 0x20656E6966656423LL;
      *(_QWORD *)(v75 + 32) += 8LL;
    }
    else
    {
      v75 = sub_227BF10(v75, "#define ", 8);
    }
    sub_2254180(v151, v75);
    v78 = *(_BYTE **)(v75 + 32);
    if ( (unsigned __int64)v78 >= *(_QWORD *)(v75 + 24) )
    {
      v75 = sub_227BA10(v75, 32);
    }
    else
    {
      *(_QWORD *)(v75 + 32) = v78 + 1;
      *v78 = 32;
    }
    sub_2254180(v153, v75);
    v79 = *(_BYTE **)(v75 + 32);
    if ( (unsigned __int64)v79 >= *(_QWORD *)(v75 + 24) )
    {
      sub_227BA10(v75, 10);
    }
    else
    {
      *(_QWORD *)(v75 + 32) = v79 + 1;
      *v79 = 10;
    }
    if ( (unsigned __int8)v159 > 1u )
    {
      v80 = *a3;
      v81 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v81 > 0x18u )
      {
        v139 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v81[1].m128i_i8[8] = 40;
        v81[1].m128i_i64[0] = 0x6465746163657270LL;
        *v81 = v139;
        *(_QWORD *)(v80 + 32) += 25LL;
      }
      else
      {
        v80 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v151, v80);
      v82 = *(_QWORD *)(v80 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v80 + 24) - v82) > 2 )
      {
        *(_BYTE *)(v82 + 2) = 34;
        *(_WORD *)v82 = 8236;
        *(_QWORD *)(v80 + 32) += 3LL;
      }
      else
      {
        v80 = sub_227BF10(v80, ", \"", 3);
      }
      sub_2254180(&src, v80);
      v83 = *(_QWORD *)(v80 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v80 + 24) - v83) > 2 )
      {
        *(_BYTE *)(v83 + 2) = 10;
        *(_WORD *)v83 = 10530;
        *(_QWORD *)(v80 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v80, "\")\n", 3);
      }
    }
  }
  v50 = sub_22B7B00(a1 + 216);
  if ( (v52 | HIDWORD(v50)) & 0x7FFFFFFF | (unsigned int)v50 | v51 & 0x7FFFFFFF )
  {
    v53 = sub_22B7B00(a1 + 216);
    v55 = &stru_10000;
    v148 = v150;
    v56 = (_DWORD)v53 << 24;
    strcpy(v150, "0x");
    v149 = 2;
    if ( v53 < 0 )
      LODWORD(v55) = HIDWORD(v53) << 16;
    v57 = v54 >> 24;
    v58 = v56 | v54 & 0x7FFFFFFF;
    if ( (v57 & 0x80u) != 0LL )
      v56 = v58;
    v59 = (unsigned int)v55 | v56;
    v60 = v154;
    v61 = v59 | 0x40000000;
    do
    {
      --v60;
      v62 = v61 & 0xF;
      v61 >>= 4;
      v63 = a0123456789abcd_3[v62];
      *v60 = v63;
    }
    while ( v61 );
    v64 = v158;
    v65 = (_BYTE *)(v154 - v60);
    src = v158;
    if ( (unsigned __int64)(v154 - v60) > 0xF )
    {
      if ( (__int64)v65 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v64 = (_QWORD *)operator new((unsigned __int64)(v65 + 1));
      v158[0] = v154 - v60;
      src = v64;
    }
    else
    {
      if ( v65 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v158[0]) = v63;
LABEL_77:
        n = v154 - v60;
        v65[(_QWORD)v64] = 0;
        v66 = v148;
        v67 = n + v149;
        if ( v148 == v150 )
          v68 = 15;
        else
          v68 = *(_QWORD *)v150;
        if ( v67 > v68 )
        {
          sub_998B30((__int64)&v148, v149, 0, src, n);
          v66 = v148;
        }
        else if ( n )
        {
          v69 = (char *)v148 + v149;
          if ( n == 1 )
            *v69 = *(_BYTE *)src;
          else
            memcpy(v69, src, n);
          v66 = v148;
        }
        v149 = v67;
        v66[v67] = 0;
        if ( src != v158 )
          operator delete(src);
        v155 = 257;
        if ( *(_BYTE *)v148 )
        {
          v153[0] = v148;
          LOBYTE(v155) = 3;
        }
        v70 = *a3;
        v151[0] = "__TARGET_LIB__";
        v71 = *(_QWORD **)(v70 + 32);
        v72 = *(_QWORD *)(v70 + 24);
        v152 = 259;
        v159 = 257;
        if ( (unsigned __int64)(v72 - (_QWORD)v71) > 7 )
        {
          *v71 = 0x20656E6966656423LL;
          *(_QWORD *)(v70 + 32) += 8LL;
        }
        else
        {
          v70 = sub_227BF10(v70, "#define ", 8);
        }
        sub_2254180(v151, v70);
        v73 = *(_BYTE **)(v70 + 32);
        if ( (unsigned __int64)v73 >= *(_QWORD *)(v70 + 24) )
        {
          v70 = sub_227BA10(v70, 32);
        }
        else
        {
          *(_QWORD *)(v70 + 32) = v73 + 1;
          *v73 = 32;
        }
        sub_2254180(v153, v70);
        v74 = *(_BYTE **)(v70 + 32);
        if ( (unsigned __int64)v74 >= *(_QWORD *)(v70 + 24) )
        {
          sub_227BA10(v70, 10);
        }
        else
        {
          *(_QWORD *)(v70 + 32) = v74 + 1;
          *v74 = 10;
        }
        if ( (unsigned __int8)v159 > 1u )
        {
          v124 = *a3;
          v125 = *(__m128i **)(v124 + 32);
          if ( *(_QWORD *)(v124 + 24) - (_QWORD)v125 > 0x18u )
          {
            v137 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
            v125[1].m128i_i8[8] = 40;
            v125[1].m128i_i64[0] = 0x6465746163657270LL;
            *v125 = v137;
            *(_QWORD *)(v124 + 32) += 25LL;
          }
          else
          {
            v124 = sub_227BF10(v124, "#pragma clang deprecated(", 25);
          }
          sub_2254180(v151, v124);
          v126 = *(_QWORD *)(v124 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v124 + 24) - v126) > 2 )
          {
            *(_BYTE *)(v126 + 2) = 34;
            *(_WORD *)v126 = 8236;
            *(_QWORD *)(v124 + 32) += 3LL;
          }
          else
          {
            v124 = sub_227BF10(v124, ", \"", 3);
          }
          sub_2254180(&src, v124);
          v127 = *(_QWORD *)(v124 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v124 + 24) - v127) > 2 )
          {
            *(_BYTE *)(v127 + 2) = 10;
            *(_WORD *)v127 = 10530;
            *(_QWORD *)(v124 + 32) += 3LL;
          }
          else
          {
            sub_227BF10(v124, "\")\n", 3);
          }
        }
        if ( v148 != v150 )
          operator delete(v148);
        return;
      }
      if ( !v65 )
        goto LABEL_77;
    }
    memcpy(v64, v60, (size_t)v65);
    v64 = src;
    goto LABEL_77;
  }
}
