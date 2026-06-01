void __fastcall sub_107BAC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // r15
  __m128i *v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  __int64 v14; // rax
  _BYTE *v15; // rsi
  signed __int64 v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // r15
  __m128i *v24; // rcx
  unsigned __int64 v25; // rdx
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  __int64 v28; // r15
  __m128i *v29; // rcx
  unsigned __int64 v30; // rdx
  _BYTE *v31; // rdx
  _BYTE *v32; // rdx
  unsigned __int64 v33; // r15
  char *v34; // rcx
  char *v35; // rsi
  char *v36; // rax
  __int64 v37; // r15
  _QWORD *v38; // rdx
  __int64 v39; // rax
  _BYTE *v40; // rax
  _BYTE *v41; // rax
  int *v42; // rax
  const char *v43; // r15
  int *v44; // rcx
  __int64 v45; // r14
  _QWORD *v46; // rdx
  _BYTE *v47; // rax
  _BYTE *v48; // rax
  __int64 v49; // r15
  __m128i *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rbp
  __m128i *v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __m128i *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __m128i v68; // xmm0
  __m128i si128; // xmm0
  __m128i v70; // xmm0
  __int64 v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rax
  _BYTE *v75; // rdx
  _BYTE *v76; // rdx
  __int64 v77; // rax
  _QWORD *v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  _BYTE *v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  _BYTE *v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  _QWORD *v93; // rcx
  __int64 v94; // rax
  _BYTE *v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  _BYTE *v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rcx
  __int64 v102; // rax
  _BYTE *v103; // rdx
  _BYTE *v104; // rdx
  __int64 v105; // rax
  __m128i *v106; // rcx
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  _BYTE *v109; // rdx
  _BYTE *v110; // rdx
  __int64 v111; // rbp
  __m128i *v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rax
  __m128i *v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rcx
  __m128i v120; // xmm0
  __m128i v121; // xmm0
  __m128i v122; // xmm0
  __m128i v123; // xmm0
  __int64 v124; // rax
  __m128i *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rax
  __m128i *v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rcx
  __int64 v137; // rax
  __m128i *v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rcx
  __m128i v141; // xmm0
  __m128i v142; // xmm0
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  __m128i v145; // xmm0
  char *src; // [rsp+8h] [rbp-130h]
  _QWORD *srca; // [rsp+8h] [rbp-130h]
  _QWORD *srcb; // [rsp+8h] [rbp-130h]
  char *srcc; // [rsp+8h] [rbp-130h]
  char *srcp; // [rsp+8h] [rbp-130h]
  _QWORD *srcd; // [rsp+8h] [rbp-130h]
  _QWORD *srce; // [rsp+8h] [rbp-130h]
  _QWORD *srcf; // [rsp+8h] [rbp-130h]
  _QWORD *srcg; // [rsp+8h] [rbp-130h]
  _QWORD *srch; // [rsp+8h] [rbp-130h]
  _QWORD *srci; // [rsp+8h] [rbp-130h]
  _QWORD *srcj; // [rsp+8h] [rbp-130h]
  _QWORD *srck; // [rsp+8h] [rbp-130h]
  _QWORD *srcl; // [rsp+8h] [rbp-130h]
  _QWORD *srcm; // [rsp+8h] [rbp-130h]
  _QWORD *srcn; // [rsp+8h] [rbp-130h]
  _QWORD *srco; // [rsp+8h] [rbp-130h]
  char **endptr; // [rsp+18h] [rbp-120h]
  int *v164; // [rsp+20h] [rbp-118h]
  __int64 v165; // [rsp+20h] [rbp-118h]
  __int64 v166; // [rsp+20h] [rbp-118h]
  __int64 v167; // [rsp+20h] [rbp-118h]
  __int64 v168; // [rsp+20h] [rbp-118h]
  __int64 v169; // [rsp+20h] [rbp-118h]
  __int64 v170; // [rsp+20h] [rbp-118h]
  __int64 v171; // [rsp+20h] [rbp-118h]
  __int64 v172; // [rsp+20h] [rbp-118h]
  int v173; // [rsp+2Ch] [rbp-10Ch]
  void *v174; // [rsp+30h] [rbp-108h] BYREF
  unsigned __int64 v175; // [rsp+38h] [rbp-100h]
  _QWORD v176[2]; // [rsp+40h] [rbp-F8h] BYREF
  char *nptr[2]; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v178[2]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v179[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v180; // [rsp+90h] [rbp-A8h]
  _QWORD v181[4]; // [rsp+A0h] [rbp-98h] BYREF
  __int16 v182; // [rsp+C0h] [rbp-78h]
  char *v183; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v184; // [rsp+D8h] [rbp-60h]
  __int64 v185; // [rsp+E0h] [rbp-58h]
  __int64 v186; // [rsp+E8h] [rbp-50h]
  __int64 v187; // [rsp+F0h] [rbp-48h]

  v4 = *a3;
  v182 = 259;
  v179[0] = "__bpf__";
  v5 = *(_QWORD **)(v4 + 32);
  v180 = 259;
  LOWORD(v187) = 257;
  v6 = *(_QWORD *)(v4 + 24);
  v181[0] = "1";
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 7 )
  {
    *v5 = 0x20656E6966656423LL;
    *(_QWORD *)(v4 + 32) += 8LL;
  }
  else
  {
    v4 = sub_227BF10(v4, "#define ", 8);
  }
  sub_2254180(v179, v4);
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
  sub_2254180(v181, v4);
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
  if ( (unsigned __int8)v187 > 1u )
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
    sub_2254180(v179, v9);
    v53 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v53) > 2 )
    {
      *(_BYTE *)(v53 + 2) = 34;
      *(_WORD *)v53 = 8236;
      *(_QWORD *)(v9 + 32) += 3LL;
    }
    else
    {
      v9 = sub_227BF10(v9, ", \"", 3);
    }
    sub_2254180(&v183, v9);
    v54 = *(_QWORD *)(v9 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v9 + 24) - v54) > 2 )
    {
      *(_BYTE *)(v54 + 2) = 10;
      *(_WORD *)v54 = 10530;
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
  v181[0] = "1";
  v182 = 259;
  v179[0] = "__BPF__";
  v180 = 259;
  LOWORD(v187) = 257;
  if ( v11 > 7 )
  {
    v10->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v9 + 32) += 8LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "#define ", 8);
  }
  sub_2254180(v179, v9);
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
  sub_2254180(v181, v9);
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
  if ( (unsigned __int8)v187 > 1u )
  {
    v49 = *a3;
    v50 = *(__m128i **)(*a3 + 32);
    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v50 > 0x18u )
    {
      v68 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v50[1].m128i_i8[8] = 40;
      v50[1].m128i_i64[0] = 0x6465746163657270LL;
      *v50 = v68;
      *(_QWORD *)(v49 + 32) += 25LL;
    }
    else
    {
      v49 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v179, v49);
    v51 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v51) > 2 )
    {
      *(_BYTE *)(v51 + 2) = 34;
      *(_WORD *)v51 = 8236;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      v49 = sub_227BF10(v49, ", \"", 3);
    }
    sub_2254180(&v183, v49);
    v52 = *(_QWORD *)(v49 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v49 + 24) - v52) > 2 )
    {
      *(_BYTE *)(v52 + 2) = 10;
      *(_WORD *)v52 = 10530;
      *(_QWORD *)(v49 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v49, "\")\n", 3);
    }
  }
  v14 = *(_QWORD *)(a1 + 208);
  v15 = *(_BYTE **)(v14 + 64);
  v16 = *(_QWORD *)(v14 + 72);
  v174 = v176;
  if ( &v15[v16] && !v15 )
    goto LABEL_211;
  if ( (unsigned __int64)v16 > 0xF )
  {
    if ( v16 < 0 )
      goto LABEL_276;
    v17 = (_QWORD *)operator new(v16 + 1);
    v176[0] = v16;
    v174 = v17;
LABEL_83:
    memcpy(v17, v15, v16);
    v17 = v174;
    goto LABEL_20;
  }
  if ( v16 == 1 )
  {
    LOBYTE(v176[0]) = *v15;
    v17 = v176;
    goto LABEL_20;
  }
  v17 = v176;
  if ( v16 )
    goto LABEL_83;
LABEL_20:
  v175 = v16;
  *((_BYTE *)v17 + v16) = 0;
  if ( sub_9B4AA0((__int64)&v174, "probe") )
  {
    v18 = *a3;
    v182 = 259;
    v179[0] = "__BPF_FEATURE_ADDR_SPACE_CAST";
    v19 = *(_QWORD *)(v18 + 24);
    v180 = 259;
    v20 = *(_QWORD **)(v18 + 32);
    v181[0] = "1";
    LOWORD(v187) = 257;
    if ( (unsigned __int64)(v19 - (_QWORD)v20) > 7 )
    {
      *v20 = 0x20656E6966656423LL;
      *(_QWORD *)(v18 + 32) += 8LL;
    }
    else
    {
      v18 = sub_227BF10(v18, "#define ", 8);
    }
    sub_2254180(v179, v18);
    v21 = *(_BYTE **)(v18 + 32);
    if ( (unsigned __int64)v21 >= *(_QWORD *)(v18 + 24) )
    {
      v18 = sub_227BA10(v18, 32);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v21 + 1;
      *v21 = 32;
    }
    sub_2254180(v181, v18);
    v22 = *(_BYTE **)(v18 + 32);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(v18 + 24) )
    {
      sub_227BA10(v18, 10);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v22 + 1;
      *v22 = 10;
    }
    v23 = *a3;
    v24 = *(__m128i **)(*a3 + 32);
    v25 = *(_QWORD *)(*a3 + 24) - (_QWORD)v24;
    if ( (unsigned __int8)v187 > 1u )
    {
      if ( v25 > 0x18 )
      {
        v122 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v24[1].m128i_i8[8] = 40;
        v24[1].m128i_i64[0] = 0x6465746163657270LL;
        *v24 = v122;
        *(_QWORD *)(v23 + 32) += 25LL;
      }
      else
      {
        v23 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v179, v23);
      v59 = *(_QWORD *)(v23 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v23 + 24) - v59) > 2 )
      {
        *(_BYTE *)(v59 + 2) = 34;
        *(_WORD *)v59 = 8236;
        *(_QWORD *)(v23 + 32) += 3LL;
      }
      else
      {
        v23 = sub_227BF10(v23, ", \"", 3);
      }
      sub_2254180(&v183, v23);
      v60 = *(_QWORD *)(v23 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v23 + 24) - v60) > 2 )
      {
        *(_BYTE *)(v60 + 2) = 10;
        *(_WORD *)v60 = 10530;
        *(_QWORD *)(v23 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v23, "\")\n", 3);
      }
      v23 = *a3;
      v24 = *(__m128i **)(*a3 + 32);
      v25 = *(_QWORD *)(*a3 + 24) - (_QWORD)v24;
    }
    v181[0] = "1";
    v182 = 259;
    v179[0] = "__BPF_FEATURE_MAY_GOTO";
    v180 = 259;
    LOWORD(v187) = 257;
    if ( v25 > 7 )
    {
      v24->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v23 + 32) += 8LL;
    }
    else
    {
      v23 = sub_227BF10(v23, "#define ", 8);
    }
    sub_2254180(v179, v23);
    v26 = *(_BYTE **)(v23 + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(v23 + 24) )
    {
      v23 = sub_227BA10(v23, 32);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v26 + 1;
      *v26 = 32;
    }
    sub_2254180(v181, v23);
    v27 = *(_BYTE **)(v23 + 32);
    if ( (unsigned __int64)v27 >= *(_QWORD *)(v23 + 24) )
    {
      sub_227BA10(v23, 10);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v27 + 1;
      *v27 = 10;
    }
    v28 = *a3;
    v29 = *(__m128i **)(*a3 + 32);
    v30 = *(_QWORD *)(*a3 + 24) - (_QWORD)v29;
    if ( (unsigned __int8)v187 > 1u )
    {
      if ( v30 > 0x18 )
      {
        v121 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v29[1].m128i_i8[8] = 40;
        v29[1].m128i_i64[0] = 0x6465746163657270LL;
        *v29 = v121;
        *(_QWORD *)(v28 + 32) += 25LL;
      }
      else
      {
        v28 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(v179, v28);
      v66 = *(_QWORD *)(v28 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v28 + 24) - v66) > 2 )
      {
        *(_BYTE *)(v66 + 2) = 34;
        *(_WORD *)v66 = 8236;
        *(_QWORD *)(v28 + 32) += 3LL;
      }
      else
      {
        v28 = sub_227BF10(v28, ", \"", 3);
      }
      sub_2254180(&v183, v28);
      v67 = *(_QWORD *)(v28 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v28 + 24) - v67) > 2 )
      {
        *(_BYTE *)(v67 + 2) = 10;
        *(_WORD *)v67 = 10530;
        *(_QWORD *)(v28 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v28, "\")\n", 3);
      }
      v28 = *a3;
      v29 = *(__m128i **)(*a3 + 32);
      v30 = *(_QWORD *)(*a3 + 24) - (_QWORD)v29;
    }
    v181[0] = "1";
    v182 = 259;
    v179[0] = "__BPF_FEATURE_ATOMIC_MEM_ORDERING";
    v180 = 259;
    LOWORD(v187) = 257;
    if ( v30 > 7 )
    {
      v29->m128i_i64[0] = 0x20656E6966656423LL;
      *(_QWORD *)(v28 + 32) += 8LL;
    }
    else
    {
      v28 = sub_227BF10(v28, "#define ", 8);
    }
    sub_2254180(v179, v28);
    v31 = *(_BYTE **)(v28 + 32);
    if ( (unsigned __int64)v31 >= *(_QWORD *)(v28 + 24) )
    {
      v28 = sub_227BA10(v28, 32);
    }
    else
    {
      *(_QWORD *)(v28 + 32) = v31 + 1;
      *v31 = 32;
    }
    sub_2254180(v181, v28);
    v32 = *(_BYTE **)(v28 + 32);
    if ( (unsigned __int64)v32 >= *(_QWORD *)(v28 + 24) )
    {
      sub_227BA10(v28, 10);
    }
    else
    {
      *(_QWORD *)(v28 + 32) = v32 + 1;
      *v32 = 10;
    }
    if ( (unsigned __int8)v187 > 1u )
    {
      v61 = *a3;
      v62 = *(__m128i **)(*a3 + 32);
      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v62 > 0x18u )
      {
        v120 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v62[1].m128i_i8[8] = 40;
        v62[1].m128i_i64[0] = 0x6465746163657270LL;
        *v62 = v120;
        *(_QWORD *)(v61 + 32) += 25LL;
      }
      else
      {
        v61 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
      }
      srca = (_QWORD *)v61;
      sub_2254180(v179, v61);
      v63 = (__int64)srca;
      v64 = srca[4];
      if ( (unsigned __int64)(srca[3] - v64) > 2 )
      {
        *(_BYTE *)(v64 + 2) = 34;
        *(_WORD *)v64 = 8236;
        srca[4] += 3LL;
      }
      else
      {
        v63 = sub_227BF10(srca, ", \"", 3);
      }
      srcb = (_QWORD *)v63;
      sub_2254180(&v183, v63);
      v65 = srcb[4];
      if ( (unsigned __int64)(srcb[3] - v65) > 2 )
      {
        *(_BYTE *)(v65 + 2) = 10;
        *(_WORD *)v65 = 10530;
        srcb[4] += 3LL;
      }
      else
      {
        sub_227BF10(srcb, "\")\n", 3);
      }
    }
    if ( !v175 )
      sub_99BDC0(&v174, 0, 0, "v3", 2u);
    if ( sub_9B4AA0((__int64)&v174, "generic") && sub_9B4AA0((__int64)&v174, "v1") )
    {
      v33 = v175;
      if ( !v175 )
        goto LABEL_278;
      v34 = (char *)(v175 - 1);
      nptr[0] = (char *)v178;
      v35 = (char *)v174 + 1;
      if ( !((char *)v174 + v175) || v174 != (void *)-1LL )
      {
        if ( (unsigned __int64)v34 <= 0xF )
        {
          if ( v175 == 2 )
          {
            LOBYTE(v178[0]) = *((_BYTE *)v174 + 1);
            v36 = (char *)v178;
LABEL_52:
            nptr[1] = v34;
            v36[v33 - 1] = 0;
            LOWORD(v187) = 257;
            v37 = *a3;
            v181[0] = nptr;
            v179[0] = "__BPF_CPU_VERSION__";
            v38 = *(_QWORD **)(v37 + 32);
            v182 = 260;
            v39 = *(_QWORD *)(v37 + 24);
            v180 = 259;
            if ( (unsigned __int64)(v39 - (_QWORD)v38) > 7 )
            {
              *v38 = 0x20656E6966656423LL;
              *(_QWORD *)(v37 + 32) += 8LL;
            }
            else
            {
              v37 = sub_227BF10(v37, "#define ", 8);
            }
            sub_2254180(v179, v37);
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
            sub_2254180(v181, v37);
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
            if ( (unsigned __int8)v187 > 1u )
            {
              v115 = *a3;
              v116 = *(__m128i **)(*a3 + 32);
              if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v116 > 0x18u )
              {
                v123 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                v116[1].m128i_i8[8] = 40;
                v116[1].m128i_i64[0] = 0x6465746163657270LL;
                *v116 = v123;
                *(_QWORD *)(v115 + 32) += 25LL;
              }
              else
              {
                v115 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
              }
              srcj = (_QWORD *)v115;
              sub_2254180(v179, v115);
              v117 = (__int64)srcj;
              v118 = srcj[4];
              if ( (unsigned __int64)(srcj[3] - v118) > 2 )
              {
                *(_BYTE *)(v118 + 2) = 34;
                *(_WORD *)v118 = 8236;
                srcj[4] += 3LL;
              }
              else
              {
                v117 = sub_227BF10(srcj, ", \"", 3);
              }
              srck = (_QWORD *)v117;
              sub_2254180(&v183, v117);
              v119 = srck[4];
              if ( (unsigned __int64)(srck[3] - v119) > 2 )
              {
                *(_BYTE *)(v119 + 2) = 10;
                *(_WORD *)v119 = 10530;
                srck[4] += 3LL;
              }
              else
              {
                sub_227BF10(srck, "\")\n", 3);
              }
            }
            v42 = __errno_location();
            v43 = nptr[0];
            v44 = v42;
            LODWORD(v42) = *v42;
            *v44 = 0;
            v164 = v44;
            v173 = (int)v42;
            src = (char *)strtol(v43, &v183, 10);
            if ( v43 != v183 )
            {
              if ( *v164 == 34 || (unsigned __int64)(src + 0x80000000LL) > 0xFFFFFFFF )
                std::__throw_out_of_range("stoi");
              if ( !*v164 )
                *v164 = v173;
              if ( (__int64)src > 1 )
              {
                v179[0] = "__BPF_FEATURE_JMP_EXT";
                v71 = *a3;
                v182 = 259;
                v72 = *(_QWORD *)(v71 + 24);
                v73 = *(_QWORD **)(v71 + 32);
                v181[0] = "1";
                v180 = 259;
                LOWORD(v187) = 257;
                if ( (unsigned __int64)(v72 - (_QWORD)v73) > 7 )
                {
                  *v73 = 0x20656E6966656423LL;
                  *(_QWORD *)(v71 + 32) += 8LL;
                }
                else
                {
                  v71 = sub_227BF10(v71, "#define ", 8);
                }
                v165 = v71;
                sub_2254180(v179, v71);
                v74 = v165;
                v75 = *(_BYTE **)(v165 + 32);
                if ( (unsigned __int64)v75 >= *(_QWORD *)(v165 + 24) )
                {
                  v74 = sub_227BA10(v165, 32);
                }
                else
                {
                  *(_QWORD *)(v165 + 32) = v75 + 1;
                  *v75 = 32;
                }
                v166 = v74;
                sub_2254180(v181, v74);
                v76 = *(_BYTE **)(v166 + 32);
                if ( (unsigned __int64)v76 >= *(_QWORD *)(v166 + 24) )
                {
                  sub_227BA10(v166, 10);
                }
                else
                {
                  *(_QWORD *)(v166 + 32) = v76 + 1;
                  *v76 = 10;
                }
                if ( (unsigned __int8)v187 > 1u )
                {
                  v124 = *a3;
                  v125 = *(__m128i **)(*a3 + 32);
                  if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v125 > 0x18u )
                  {
                    v141 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                    v125[1].m128i_i8[8] = 40;
                    v125[1].m128i_i64[0] = 0x6465746163657270LL;
                    *v125 = v141;
                    *(_QWORD *)(v124 + 32) += 25LL;
                  }
                  else
                  {
                    v124 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
                  }
                  v169 = v124;
                  sub_2254180(v179, v124);
                  v126 = v169;
                  v127 = *(_QWORD *)(v169 + 32);
                  if ( (unsigned __int64)(*(_QWORD *)(v169 + 24) - v127) > 2 )
                  {
                    *(_BYTE *)(v127 + 2) = 34;
                    *(_WORD *)v127 = 8236;
                    *(_QWORD *)(v169 + 32) += 3LL;
                  }
                  else
                  {
                    v126 = sub_227BF10(v169, ", \"", 3);
                  }
                  v170 = v126;
                  sub_2254180(&v183, v126);
                  v128 = *(_QWORD *)(v170 + 32);
                  if ( (unsigned __int64)(*(_QWORD *)(v170 + 24) - v128) > 2 )
                  {
                    *(_BYTE *)(v128 + 2) = 10;
                    *(_WORD *)v128 = 10530;
                    *(_QWORD *)(v170 + 32) += 3LL;
                  }
                  else
                  {
                    sub_227BF10(v170, "\")\n", 3);
                  }
                }
                if ( src != (_BYTE *)&dword_0 + 2 )
                {
                  v179[0] = "__BPF_FEATURE_JMP32";
                  v77 = *a3;
                  v181[0] = "1";
                  v78 = *(_QWORD **)(v77 + 32);
                  v79 = *(_QWORD *)(v77 + 24);
                  v182 = 259;
                  v180 = 259;
                  LOWORD(v187) = 257;
                  if ( (unsigned __int64)(v79 - (_QWORD)v78) > 7 )
                  {
                    *v78 = 0x20656E6966656423LL;
                    *(_QWORD *)(v77 + 32) += 8LL;
                  }
                  else
                  {
                    v77 = sub_227BF10(v77, "#define ", 8);
                  }
                  v167 = v77;
                  sub_2254180(v179, v77);
                  v80 = v167;
                  v81 = *(_BYTE **)(v167 + 32);
                  if ( (unsigned __int64)v81 >= *(_QWORD *)(v167 + 24) )
                  {
                    v80 = sub_227BA10(v167, 32);
                  }
                  else
                  {
                    *(_QWORD *)(v167 + 32) = v81 + 1;
                    *v81 = 32;
                  }
                  v168 = v80;
                  sub_2254180(v181, v80);
                  v84 = *(_BYTE **)(v168 + 32);
                  if ( (unsigned __int64)v84 >= *(_QWORD *)(v168 + 24) )
                  {
                    sub_227BA10(v168, 10);
                  }
                  else
                  {
                    *(_QWORD *)(v168 + 32) = v84 + 1;
                    *v84 = 10;
                  }
                  if ( (unsigned __int8)v187 > 1u )
                  {
                    v129 = *a3;
                    v130 = *(__m128i **)(*a3 + 32);
                    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v130 > 0x18u )
                    {
                      v142 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                      v130[1].m128i_i8[8] = 40;
                      v130[1].m128i_i64[0] = 0x6465746163657270LL;
                      *v130 = v142;
                      *(_QWORD *)(v129 + 32) += 25LL;
                    }
                    else
                    {
                      v129 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
                    }
                    v171 = v129;
                    sub_2254180(v179, v129);
                    v131 = v171;
                    v132 = *(_QWORD *)(v171 + 32);
                    if ( (unsigned __int64)(*(_QWORD *)(v171 + 24) - v132) > 2 )
                    {
                      *(_BYTE *)(v132 + 2) = 34;
                      *(_WORD *)v132 = 8236;
                      *(_QWORD *)(v171 + 32) += 3LL;
                    }
                    else
                    {
                      v131 = sub_227BF10(v171, ", \"", 3);
                    }
                    v172 = v131;
                    sub_2254180(&v183, v131);
                    v133 = *(_QWORD *)(v172 + 32);
                    if ( (unsigned __int64)(*(_QWORD *)(v172 + 24) - v133) > 2 )
                    {
                      *(_BYTE *)(v133 + 2) = 10;
                      *(_WORD *)v133 = 10530;
                      *(_QWORD *)(v172 + 32) += 3LL;
                    }
                    else
                    {
                      sub_227BF10(v172, "\")\n", 3);
                    }
                  }
                  LOWORD(v187) = 257;
                  v180 = 259;
                  v181[0] = "1";
                  v182 = 259;
                  v179[0] = "__BPF_FEATURE_ALU32";
                  sub_1039E30(a3, (__int64)v179, (__int64)v181, 259, v82, v83, (char)v183, v184, v185, v186, 1u);
                  if ( src != (_BYTE *)&dword_0 + 3 )
                  {
                    v182 = 259;
                    v180 = 259;
                    LOWORD(v187) = 257;
                    v179[0] = "__BPF_FEATURE_LDSX";
                    v181[0] = "1";
                    sub_1039E30(a3, (__int64)v179, (__int64)v181, v85, 259, 259, (char)v183, v184, v185, v186, 1u);
                    LOWORD(v187) = 257;
                    v182 = 259;
                    v179[0] = "__BPF_FEATURE_MOVSX";
                    v181[0] = "1";
                    v180 = 259;
                    sub_1039E30(a3, (__int64)v179, (__int64)v181, v86, v87, v88, (char)v183, v184, v185, v186, 1u);
                    LOWORD(v187) = 257;
                    v182 = 259;
                    v179[0] = "__BPF_FEATURE_BSWAP";
                    v180 = 259;
                    v181[0] = "1";
                    sub_1039E30(a3, (__int64)v179, (__int64)v181, v89, v90, v91, (char)v183, v184, v185, v186, 1u);
                    v181[0] = "1";
                    v182 = 259;
                    v179[0] = "__BPF_FEATURE_SDIV_SMOD";
                    v180 = 259;
                    LOWORD(v187) = 257;
                    v92 = *a3;
                    v93 = *(_QWORD **)(*a3 + 32);
                    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v93 > 7u )
                    {
                      *v93 = 0x20656E6966656423LL;
                      *(_QWORD *)(v92 + 32) += 8LL;
                    }
                    else
                    {
                      v92 = sub_227BF10(*a3, "#define ", 8);
                    }
                    srcd = (_QWORD *)v92;
                    sub_2254180(v179, v92);
                    v94 = (__int64)srcd;
                    v95 = (_BYTE *)srcd[4];
                    if ( (unsigned __int64)v95 >= srcd[3] )
                    {
                      v94 = sub_227BA10(srcd, 32);
                    }
                    else
                    {
                      srcd[4] = v95 + 1;
                      *v95 = 32;
                    }
                    srce = (_QWORD *)v94;
                    sub_2254180(v181, v94);
                    v98 = (_BYTE *)srce[4];
                    if ( (unsigned __int64)v98 >= srce[3] )
                    {
                      sub_227BA10(srce, 10);
                    }
                    else
                    {
                      v99 = (__int64)(v98 + 1);
                      srce[4] = v98 + 1;
                      *v98 = 10;
                    }
                    if ( (unsigned __int8)v187 > 1u )
                    {
                      v137 = *a3;
                      v138 = *(__m128i **)(*a3 + 32);
                      if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v138 > 0x18u )
                      {
                        v145 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                        v138[1].m128i_i8[8] = 40;
                        v138[1].m128i_i64[0] = 0x6465746163657270LL;
                        *v138 = v145;
                        *(_QWORD *)(v137 + 32) += 25LL;
                      }
                      else
                      {
                        v137 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
                      }
                      srcn = (_QWORD *)v137;
                      sub_2254180(v179, v137);
                      v139 = (__int64)srcn;
                      v140 = srcn[4];
                      if ( (unsigned __int64)(srcn[3] - v140) > 2 )
                      {
                        *(_BYTE *)(v140 + 2) = 34;
                        *(_WORD *)v140 = 8236;
                        srcn[4] += 3LL;
                      }
                      else
                      {
                        v139 = sub_227BF10(srcn, ", \"", 3);
                      }
                      srco = (_QWORD *)v139;
                      sub_2254180(&v183, v139);
                      v99 = srco[4];
                      if ( (unsigned __int64)(srco[3] - v99) > 2 )
                      {
                        *(_BYTE *)(v99 + 2) = 10;
                        *(_WORD *)v99 = 10530;
                        srco[4] += 3LL;
                      }
                      else
                      {
                        sub_227BF10(srco, "\")\n", 3);
                      }
                    }
                    LOWORD(v187) = 257;
                    v179[0] = "__BPF_FEATURE_GOTOL";
                    v180 = 259;
                    v181[0] = "1";
                    v182 = 259;
                    sub_1039E30(a3, (__int64)v179, (__int64)v181, v99, v96, v97, (char)v183, v184, v185, v186, 1u);
                    v181[0] = "1";
                    v182 = 259;
                    v179[0] = "__BPF_FEATURE_ST";
                    v180 = 259;
                    LOWORD(v187) = 257;
                    v100 = *a3;
                    v101 = *(_QWORD **)(*a3 + 32);
                    if ( *(_QWORD *)(*a3 + 24) - (_QWORD)v101 > 7u )
                    {
                      *v101 = 0x20656E6966656423LL;
                      *(_QWORD *)(v100 + 32) += 8LL;
                    }
                    else
                    {
                      v100 = sub_227BF10(*a3, "#define ", 8);
                    }
                    srcf = (_QWORD *)v100;
                    sub_2254180(v179, v100);
                    v102 = (__int64)srcf;
                    v103 = (_BYTE *)srcf[4];
                    if ( (unsigned __int64)v103 >= srcf[3] )
                    {
                      v102 = sub_227BA10(srcf, 32);
                    }
                    else
                    {
                      srcf[4] = v103 + 1;
                      *v103 = 32;
                    }
                    srcg = (_QWORD *)v102;
                    sub_2254180(v181, v102);
                    v104 = (_BYTE *)srcg[4];
                    if ( (unsigned __int64)v104 >= srcg[3] )
                    {
                      sub_227BA10(srcg, 10);
                    }
                    else
                    {
                      srcg[4] = v104 + 1;
                      *v104 = 10;
                    }
                    v105 = *a3;
                    v106 = *(__m128i **)(*a3 + 32);
                    v107 = *(_QWORD *)(*a3 + 24) - (_QWORD)v106;
                    if ( (unsigned __int8)v187 > 1u )
                    {
                      if ( v107 > 0x18 )
                      {
                        v144 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                        v106[1].m128i_i8[8] = 40;
                        v106[1].m128i_i64[0] = 0x6465746163657270LL;
                        *v106 = v144;
                        *(_QWORD *)(v105 + 32) += 25LL;
                      }
                      else
                      {
                        v105 = sub_227BF10(*a3, "#pragma clang deprecated(", 25);
                      }
                      srcl = (_QWORD *)v105;
                      sub_2254180(v179, v105);
                      v134 = (__int64)srcl;
                      v135 = srcl[4];
                      if ( (unsigned __int64)(srcl[3] - v135) > 2 )
                      {
                        *(_BYTE *)(v135 + 2) = 34;
                        *(_WORD *)v135 = 8236;
                        srcl[4] += 3LL;
                      }
                      else
                      {
                        v134 = sub_227BF10(srcl, ", \"", 3);
                      }
                      srcm = (_QWORD *)v134;
                      sub_2254180(&v183, v134);
                      v136 = srcm[4];
                      if ( (unsigned __int64)(srcm[3] - v136) > 2 )
                      {
                        *(_BYTE *)(v136 + 2) = 10;
                        *(_WORD *)v136 = 10530;
                        srcm[4] += 3LL;
                      }
                      else
                      {
                        sub_227BF10(srcm, "\")\n", 3);
                      }
                      v105 = *a3;
                      v106 = *(__m128i **)(*a3 + 32);
                      v107 = *(_QWORD *)(*a3 + 24) - (_QWORD)v106;
                    }
                    v181[0] = "1";
                    v182 = 259;
                    v179[0] = "__BPF_FEATURE_LOAD_ACQ_STORE_REL";
                    v180 = 259;
                    LOWORD(v187) = 257;
                    if ( v107 > 7 )
                    {
                      v106->m128i_i64[0] = 0x20656E6966656423LL;
                      *(_QWORD *)(v105 + 32) += 8LL;
                    }
                    else
                    {
                      v105 = sub_227BF10(v105, "#define ", 8);
                    }
                    srch = (_QWORD *)v105;
                    sub_2254180(v179, v105);
                    v108 = (__int64)srch;
                    v109 = (_BYTE *)srch[4];
                    if ( (unsigned __int64)v109 >= srch[3] )
                    {
                      v108 = sub_227BA10(srch, 32);
                    }
                    else
                    {
                      srch[4] = v109 + 1;
                      *v109 = 32;
                    }
                    srci = (_QWORD *)v108;
                    sub_2254180(v181, v108);
                    v110 = (_BYTE *)srci[4];
                    if ( (unsigned __int64)v110 >= srci[3] )
                    {
                      sub_227BA10(srci, 10);
                    }
                    else
                    {
                      srci[4] = v110 + 1;
                      *v110 = 10;
                    }
                    if ( (unsigned __int8)v187 > 1u )
                    {
                      v111 = *a3;
                      v112 = *(__m128i **)(v111 + 32);
                      if ( *(_QWORD *)(v111 + 24) - (_QWORD)v112 > 0x18u )
                      {
                        v143 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
                        v112[1].m128i_i8[8] = 40;
                        v112[1].m128i_i64[0] = 0x6465746163657270LL;
                        *v112 = v143;
                        *(_QWORD *)(v111 + 32) += 25LL;
                      }
                      else
                      {
                        v111 = sub_227BF10(v111, "#pragma clang deprecated(", 25);
                      }
                      sub_2254180(v179, v111);
                      v113 = *(_QWORD *)(v111 + 32);
                      if ( (unsigned __int64)(*(_QWORD *)(v111 + 24) - v113) > 2 )
                      {
                        *(_BYTE *)(v113 + 2) = 34;
                        *(_WORD *)v113 = 8236;
                        *(_QWORD *)(v111 + 32) += 3LL;
                      }
                      else
                      {
                        v111 = sub_227BF10(v111, ", \"", 3);
                      }
                      sub_2254180(&v183, v111);
                      v114 = *(_QWORD *)(v111 + 32);
                      if ( (unsigned __int64)(*(_QWORD *)(v111 + 24) - v114) > 2 )
                      {
                        *(_BYTE *)(v114 + 2) = 10;
                        *(_WORD *)v114 = 10530;
                        *(_QWORD *)(v111 + 32) += 3LL;
                      }
                      else
                      {
                        sub_227BF10(v111, "\")\n", 3);
                      }
                    }
                  }
                }
              }
              if ( (_QWORD *)nptr[0] != v178 )
                operator delete(nptr[0]);
              goto LABEL_77;
            }
            std::__throw_invalid_argument("stoi");
LABEL_278:
            std::__throw_out_of_range_fmt(
              "%s: __pos (which is %zu) > this->size() (which is %zu)",
              "basic_string::substr",
              1u,
              0);
          }
          v36 = (char *)v178;
          if ( v175 == 1 )
            goto LABEL_52;
LABEL_142:
          srcp = v34;
          memcpy(v36, v35, (size_t)v34);
          v36 = nptr[0];
          v34 = srcp;
          goto LABEL_52;
        }
        endptr = (char **)(v175 - 1);
        srcc = (char *)v174 + 1;
        if ( (__int64)v175 > 0 )
        {
          v36 = (char *)operator new(v175);
          v34 = (char *)endptr;
          v35 = srcc;
          nptr[0] = v36;
          v178[0] = endptr;
          goto LABEL_142;
        }
LABEL_276:
        std::__throw_length_error("basic_string::_M_create");
      }
LABEL_211:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    }
    v181[0] = "1";
  }
  else
  {
    v181[0] = "0";
  }
  v45 = *a3;
  v182 = 259;
  v179[0] = "__BPF_CPU_VERSION__";
  v180 = 259;
  LOWORD(v187) = 257;
  v46 = *(_QWORD **)(v45 + 32);
  if ( *(_QWORD *)(v45 + 24) - (_QWORD)v46 > 7u )
  {
    *v46 = 0x20656E6966656423LL;
    *(_QWORD *)(v45 + 32) += 8LL;
  }
  else
  {
    v45 = sub_227BF10(v45, "#define ", 8);
  }
  sub_2254180(v179, v45);
  v47 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v47 >= *(_QWORD *)(v45 + 24) )
  {
    v45 = sub_227BA10(v45, 32);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v47 + 1;
    *v47 = 32;
  }
  sub_2254180(v181, v45);
  v48 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v48 >= *(_QWORD *)(v45 + 24) )
  {
    sub_227BA10(v45, 10);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v48 + 1;
    *v48 = 10;
  }
  if ( (unsigned __int8)v187 > 1u )
  {
    v55 = *a3;
    v56 = *(__m128i **)(v55 + 32);
    if ( *(_QWORD *)(v55 + 24) - (_QWORD)v56 > 0x18u )
    {
      v70 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v56[1].m128i_i8[8] = 40;
      v56[1].m128i_i64[0] = 0x6465746163657270LL;
      *v56 = v70;
      *(_QWORD *)(v55 + 32) += 25LL;
    }
    else
    {
      v55 = sub_227BF10(v55, "#pragma clang deprecated(", 25);
    }
    sub_2254180(v179, v55);
    v57 = *(_QWORD *)(v55 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - v57) > 2 )
    {
      *(_BYTE *)(v57 + 2) = 34;
      *(_WORD *)v57 = 8236;
      *(_QWORD *)(v55 + 32) += 3LL;
    }
    else
    {
      v55 = sub_227BF10(v55, ", \"", 3);
    }
    sub_2254180(&v183, v55);
    v58 = *(_QWORD *)(v55 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v55 + 24) - v58) > 2 )
    {
      *(_BYTE *)(v58 + 2) = 10;
      *(_WORD *)v58 = 10530;
      *(_QWORD *)(v55 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v55, "\")\n", 3);
    }
  }
LABEL_77:
  if ( v174 != v176 )
    operator delete(v174);
}
