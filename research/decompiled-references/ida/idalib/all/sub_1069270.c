void __fastcall sub_1069270(__int64 a1, _BYTE *a2, __int64 *a3)
{
  __int64 *v3; // rbp
  __int64 v5; // r13
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // r13
  __m128i *v11; // rdx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // r13
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // rdi
  char v24; // r13
  void *v25; // rax
  size_t v26; // rdx
  size_t v27; // r14
  char *v28; // rsi
  size_t v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _BYTE *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _BYTE *v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // r13
  __int64 v40; // rax
  _QWORD *v41; // rdx
  _BYTE *v42; // rax
  _BYTE *v43; // rax
  __int64 v44; // r14
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  int v47; // ecx
  _BYTE *v48; // rax
  _BYTE *v49; // rax
  _BYTE *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _BYTE *v54; // rax
  __int32 v55; // ecx
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // r14
  __m128i *v59; // rdx
  unsigned __int64 v60; // rax
  __int32 v61; // ecx
  _BYTE *v62; // rax
  _BYTE *v63; // rax
  __int64 v64; // r13
  __m128i *v65; // rdx
  unsigned __int64 v66; // rax
  __int32 v67; // ecx
  _BYTE *v68; // rax
  _BYTE *v69; // rax
  size_t v70; // rdx
  __int64 v71; // r13
  __m128i *v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  char *v77; // rdi
  unsigned int v78; // eax
  char *v79; // rax
  __int64 v80; // rbx
  __m128i *v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // r14
  __m128i *v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // r13
  __m128i *v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __m128i si128; // xmm0
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  __m128i v98; // xmm0
  __m128i v99; // xmm0
  __m128i v100; // xmm0
  __int64 v101; // r13
  __m128i *v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // r13
  __m128i *v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  char v116; // al
  __m128i **v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  char v121; // al
  __m128i **v122; // rdx
  void **v123; // rcx
  const char *v124; // r14
  _BYTE *v125; // rbp
  __int64 v126; // r13
  unsigned int v127; // eax
  int v128; // eax
  __int64 *v129; // r15
  char *v130; // rax
  char *v131; // rdx
  __int64 v132; // rax
  bool v133; // zf
  char *v134; // rax
  __m128i v135; // xmm0
  __m128i v136; // xmm0
  __m128i v137; // xmm0
  __m128i v138; // xmm0
  __int64 v139; // rdi
  __m128i v140; // xmm1
  _BYTE *v141; // rax
  __int64 v142; // rdx
  __m128i v143; // xmm6
  __m128i v144; // xmm3
  void *src; // [rsp+10h] [rbp-1F8h]
  void *v147; // [rsp+20h] [rbp-1E8h]
  char *v148; // [rsp+20h] [rbp-1E8h]
  void **v149; // [rsp+28h] [rbp-1E0h]
  __int64 *v150; // [rsp+30h] [rbp-1D8h]
  _QWORD v151[2]; // [rsp+50h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+60h] [rbp-1A8h] BYREF
  __m128i v153; // [rsp+68h] [rbp-1A0h]
  _BYTE v154[24]; // [rsp+78h] [rbp-190h] BYREF
  void *v155; // [rsp+90h] [rbp-178h] BYREF
  __int64 v156; // [rsp+98h] [rbp-170h]
  __m128i v157; // [rsp+A0h] [rbp-168h] BYREF
  char v158; // [rsp+B0h] [rbp-158h]
  __m128i v159; // [rsp+C0h] [rbp-148h] BYREF
  __m128i v160; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v161; // [rsp+E0h] [rbp-128h]
  __m128i *v162; // [rsp+F0h] [rbp-118h] BYREF
  void *v163; // [rsp+F8h] [rbp-110h]
  char *v164; // [rsp+100h] [rbp-108h]
  __int64 v165; // [rsp+108h] [rbp-100h]
  __int16 v166; // [rsp+110h] [rbp-F8h]
  __m128i v167; // [rsp+120h] [rbp-E8h] BYREF
  __m128i v168; // [rsp+130h] [rbp-D8h]
  __int64 v169; // [rsp+140h] [rbp-C8h]
  __m128i *v170; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v171; // [rsp+158h] [rbp-B0h]
  __m128i v172; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v173; // [rsp+170h] [rbp-98h]
  const char *v174; // [rsp+180h] [rbp-88h] BYREF
  __int64 v175; // [rsp+188h] [rbp-80h]
  __int64 v176; // [rsp+190h] [rbp-78h] BYREF
  __int64 v177; // [rsp+198h] [rbp-70h]
  __int64 v178; // [rsp+1A0h] [rbp-68h]

  v3 = a3;
  v5 = *a3;
  v170 = (__m128i *)"1";
  v167.m128i_i64[0] = (__int64)"__AMD__";
  v6 = *(_QWORD **)(v5 + 32);
  v7 = *(_QWORD *)(v5 + 24);
  LOWORD(v173) = 259;
  LOWORD(v169) = 259;
  LOWORD(v178) = 257;
  if ( (unsigned __int64)(v7 - (_QWORD)v6) > 7 )
  {
    *v6 = 0x20656E6966656423LL;
    *(_QWORD *)(v5 + 32) += 8LL;
  }
  else
  {
    v5 = sub_227BF10(v5, "#define ", 8);
  }
  sub_2254180(&v167, v5);
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
  sub_2254180(&v170, v5);
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
  v10 = *v3;
  v11 = *(__m128i **)(*v3 + 32);
  v12 = *(_QWORD *)(*v3 + 24) - (_QWORD)v11;
  if ( (unsigned __int8)v178 > 1u )
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
      v10 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v167, v10);
    v75 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v75) > 2 )
    {
      *(_BYTE *)(v75 + 2) = 34;
      *(_WORD *)v75 = 8236;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      v10 = sub_227BF10(v10, ", \"", 3);
    }
    sub_2254180(&v174, v10);
    v76 = *(_QWORD *)(v10 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v76) > 2 )
    {
      *(_BYTE *)(v76 + 2) = 10;
      *(_WORD *)v76 = 10530;
      *(_QWORD *)(v10 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v10, "\")\n", 3);
    }
    v10 = *v3;
    v11 = *(__m128i **)(*v3 + 32);
    v12 = *(_QWORD *)(*v3 + 24) - (_QWORD)v11;
  }
  v170 = (__m128i *)"1";
  LOWORD(v173) = 259;
  v167.m128i_i64[0] = (__int64)"__AMDGPU__";
  LOWORD(v169) = 259;
  LOWORD(v178) = 257;
  if ( v12 > 7 )
  {
    v11->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v10 + 32) += 8LL;
  }
  else
  {
    v10 = sub_227BF10(v10, "#define ", 8);
  }
  sub_2254180(&v167, v10);
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
  sub_2254180(&v170, v10);
  v17 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 10);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v17 + 1;
    *v17 = 10;
  }
  if ( (unsigned __int8)v178 > 1u )
  {
    v71 = *v3;
    v72 = *(__m128i **)(*v3 + 32);
    if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v72 > 0x18u )
    {
      v96 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v72[1].m128i_i8[8] = 40;
      v72[1].m128i_i64[0] = 0x6465746163657270LL;
      *v72 = v96;
      *(_QWORD *)(v71 + 32) += 25LL;
    }
    else
    {
      v71 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v167, v71);
    v73 = *(_QWORD *)(v71 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - v73) > 2 )
    {
      *(_BYTE *)(v73 + 2) = 34;
      *(_WORD *)v73 = 8236;
      *(_QWORD *)(v71 + 32) += 3LL;
    }
    else
    {
      v71 = sub_227BF10(v71, ", \"", 3);
    }
    sub_2254180(&v174, v71);
    v74 = *(_QWORD *)(v71 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v71 + 24) - v74) > 2 )
    {
      *(_BYTE *)(v74 + 2) = 10;
      *(_WORD *)v74 = 10530;
      *(_QWORD *)(v71 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v71, "\")\n", 3);
    }
  }
  if ( *(_DWORD *)(a1 + 248) == 26 )
  {
    LOWORD(v178) = 257;
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    v167.m128i_i64[0] = (__int64)"__AMDGCN__";
    LOWORD(v169) = 259;
    sub_1039E30(v3, (__int64)&v167, (__int64)&v170, v14, v15, v16, (char)v174, v175, v176, v177, 1u);
  }
  else
  {
    LOWORD(v169) = 259;
    v18 = *v3;
    v170 = (__m128i *)"1";
    v167.m128i_i64[0] = (__int64)"__R600__";
    v19 = *(_QWORD **)(v18 + 32);
    LOWORD(v173) = 259;
    v20 = *(_QWORD *)(v18 + 24);
    LOWORD(v178) = 257;
    if ( (unsigned __int64)(v20 - (_QWORD)v19) > 7 )
    {
      *v19 = 0x20656E6966656423LL;
      *(_QWORD *)(v18 + 32) += 8LL;
    }
    else
    {
      v18 = sub_227BF10(v18, "#define ", 8);
    }
    sub_2254180(&v167, v18);
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
    sub_2254180(&v170, v18);
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
    if ( (unsigned __int8)v178 > 1u )
    {
      v91 = *v3;
      v92 = *(__m128i **)(*v3 + 32);
      if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v92 > 0x18u )
      {
        v135 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v92[1].m128i_i8[8] = 40;
        v92[1].m128i_i64[0] = 0x6465746163657270LL;
        *v92 = v135;
        *(_QWORD *)(v91 + 32) += 25LL;
      }
      else
      {
        v91 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(&v167, v91);
      v93 = *(_QWORD *)(v91 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - v93) > 2 )
      {
        *(_BYTE *)(v93 + 2) = 34;
        *(_WORD *)v93 = 8236;
        *(_QWORD *)(v91 + 32) += 3LL;
      }
      else
      {
        v91 = sub_227BF10(v91, ", \"", 3);
      }
      sub_2254180(&v174, v91);
      v94 = *(_QWORD *)(v91 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v91 + 24) - v94) > 2 )
      {
        *(_BYTE *)(v94 + 2) = 10;
        *(_WORD *)v94 = 10530;
        *(_QWORD *)(v91 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v91, "\")\n", 3);
      }
    }
  }
  v23 = *(unsigned int *)(a1 + 512);
  if ( (a2[60] & 0x20) == 0 || (a2[89] & 4) != 0 )
  {
    if ( !(_DWORD)v23 )
      return;
    v24 = 0;
    if ( *(_DWORD *)(a1 + 248) != 26 )
      goto LABEL_26;
  }
  else
  {
    v24 = 1;
    if ( *(_DWORD *)(a1 + 248) != 26 )
    {
LABEL_26:
      v25 = (void *)sub_22B0B70(v23);
      v27 = v26;
      goto LABEL_27;
    }
  }
  v25 = (void *)sub_22B0B00(v23);
  v27 = v70;
LABEL_27:
  v28 = v154;
  v29 = v27;
  ptr = v154;
  v153 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  if ( v27 > 0x10 )
  {
    src = v25;
    sub_2236E10(&ptr, v154, v27, 1);
    v25 = src;
    v77 = (char *)ptr + v153.m128i_i64[0];
  }
  else
  {
    if ( !v27 )
    {
      v153.m128i_i64[0] = 0;
      goto LABEL_30;
    }
    v77 = v154;
  }
  memcpy(v77, v25, v27);
  v29 = v27 + v153.m128i_i64[0];
  v78 = *(_DWORD *)(a1 + 512) - 63;
  v153.m128i_i64[0] += v27;
  if ( v78 > 5 )
  {
    v28 = (char *)ptr;
  }
  else
  {
    v79 = (char *)ptr;
    v28 = (char *)ptr + v29;
    if ( ptr != (char *)ptr + v29 )
    {
      do
      {
        if ( *v79 == 45 )
          *v79 = 95;
        ++v79;
      }
      while ( v28 != v79 );
      v28 = (char *)ptr;
      v29 = v153.m128i_i64[0];
    }
  }
LABEL_30:
  v30 = *v3;
  v165 = v29;
  LOWORD(v173) = 259;
  v31 = *(_QWORD *)(v30 + 24);
  v167.m128i_i64[0] = (__int64)&v162;
  v32 = *(_QWORD **)(v30 + 32);
  v170 = (__m128i *)"1";
  v164 = v28;
  v162 = (__m128i *)"__";
  v166 = 1283;
  v168.m128i_i64[0] = (__int64)"__";
  LOWORD(v169) = 770;
  LOWORD(v178) = 257;
  if ( (unsigned __int64)(v31 - (_QWORD)v32) > 7 )
  {
    *v32 = 0x20656E6966656423LL;
    *(_QWORD *)(v30 + 32) += 8LL;
  }
  else
  {
    v30 = sub_227BF10(v30, "#define ", 8);
  }
  sub_2254180(&v167, v30);
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
  sub_2254180(&v170, v30);
  v36 = *(_BYTE **)(v30 + 32);
  if ( (unsigned __int64)v36 >= *(_QWORD *)(v30 + 24) )
  {
    sub_227BA10(v30, 10);
  }
  else
  {
    v37 = (__int64)(v36 + 1);
    *(_QWORD *)(v30 + 32) = v36 + 1;
    *v36 = 10;
  }
  if ( (unsigned __int8)v178 > 1u )
  {
    v88 = *v3;
    v89 = *(__m128i **)(*v3 + 32);
    if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v89 > 0x18u )
    {
      v97 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v89[1].m128i_i8[8] = 40;
      v89[1].m128i_i64[0] = 0x6465746163657270LL;
      *v89 = v97;
      *(_QWORD *)(v88 + 32) += 25LL;
    }
    else
    {
      v88 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v167, v88);
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
    sub_2254180(&v174, v88);
    v37 = *(_QWORD *)(v88 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v88 + 24) - v37) > 2 )
    {
      *(_BYTE *)(v37 + 2) = 10;
      *(_WORD *)v37 = 10530;
      *(_QWORD *)(v88 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v88, "\")\n", 3);
    }
  }
  if ( *(_DWORD *)(a1 + 248) == 26 && !v24 )
  {
    v111 = sub_22B0A20(*(unsigned int *)(a1 + 512));
    v162 = (__m128i *)"__";
    v151[0] = v111;
    LOWORD(v178) = 257;
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    v166 = 259;
    v151[1] = v112;
    sub_2246780(&v155, v151);
    v159.m128i_i64[0] = (__int64)"__";
    LOWORD(v161) = 1027;
    v116 = v166;
    v160.m128i_i64[0] = (__int64)&v155;
    if ( (_BYTE)v166 )
    {
      if ( (_BYTE)v166 == 1 )
      {
        v144 = _mm_load_si128(&v160);
        v167 = _mm_load_si128(&v159);
        v168 = v144;
        v169 = v161;
      }
      else
      {
        if ( HIBYTE(v166) == 1 )
        {
          v117 = (__m128i **)v162;
          v147 = v163;
        }
        else
        {
          v117 = &v162;
          v116 = 2;
        }
        v168.m128i_i64[0] = (__int64)v117;
        v167.m128i_i64[0] = (__int64)&v159;
        v113 = (__int64)v147;
        LOBYTE(v169) = 2;
        v168.m128i_i64[1] = (__int64)v147;
        BYTE1(v169) = v116;
      }
    }
    else
    {
      LOWORD(v169) = 256;
    }
    sub_1039E30(v3, (__int64)&v167, (__int64)&v170, v113, v114, v115, (char)v174, v175, v176, v177, v178);
    if ( v155 != &v157 )
      operator delete(v155);
    LOWORD(v178) = 257;
    v164 = (char *)ptr;
    v162 = (__m128i *)"\"";
    v165 = v153.m128i_i64[0];
    v166 = 1283;
    v167.m128i_i64[0] = (__int64)&v162;
    v168.m128i_i64[0] = (__int64)"\"";
    LOWORD(v169) = 770;
    v170 = (__m128i *)"__amdgcn_processor__";
    LOWORD(v173) = 259;
    sub_1039E30(v3, (__int64)&v170, (__int64)&v167, v118, 1283, 770, (char)v174, v175, v176, v177, 1u);
    v162 = (__m128i *)"\"";
    LOWORD(v178) = 257;
    v166 = 259;
    if ( *(_DWORD *)(a1 + 248) != 26 )
    {
      v158 = 0;
      v159.m128i_i64[0] = (__int64)"\"";
      LOWORD(v161) = 1027;
      v160.m128i_i64[0] = (__int64)&v155;
      v121 = 3;
      goto LABEL_220;
    }
    v139 = *(unsigned int *)(a1 + 512);
    if ( !(_DWORD)v139 )
    {
      v172.m128i_i8[0] = 0;
      v156 = 0;
      v140 = _mm_load_si128(&v172);
      v160.m128i_i64[0] = (__int64)&v155;
      v158 = 1;
      v159.m128i_i64[0] = (__int64)"\"";
      LOWORD(v161) = 1027;
      v155 = &v157;
      v121 = 3;
      v157 = v140;
      goto LABEL_273;
    }
    v141 = (_BYTE *)sub_22B0B00(v139);
    sub_102A6F0((__int64)&v170, v141, v142, a1 + 528);
    v155 = &v157;
    if ( v170 == &v172 )
    {
      v157 = _mm_load_si128(&v172);
    }
    else
    {
      v155 = v170;
      v157.m128i_i64[0] = v172.m128i_i64[0];
    }
    v123 = &v155;
    v158 = 1;
    v159.m128i_i64[0] = (__int64)"\"";
    v156 = v171;
    v121 = v166;
    v160.m128i_i64[0] = (__int64)&v155;
    LOWORD(v161) = 1027;
    if ( (_BYTE)v166 )
    {
      if ( (_BYTE)v166 != 1 )
      {
LABEL_220:
        if ( HIBYTE(v166) != 1 )
        {
          v122 = &v162;
          v121 = 2;
LABEL_222:
          v168.m128i_i64[0] = (__int64)v122;
          v167.m128i_i64[0] = (__int64)&v159;
          v123 = v149;
          LOBYTE(v169) = 2;
          v168.m128i_i64[1] = (__int64)v149;
          BYTE1(v169) = v121;
          goto LABEL_223;
        }
LABEL_273:
        v122 = (__m128i **)v162;
        v149 = (void **)v163;
        goto LABEL_222;
      }
      v143 = _mm_load_si128(&v160);
      v167 = _mm_load_si128(&v159);
      v168 = v143;
      v169 = v161;
    }
    else
    {
      LOWORD(v169) = 256;
    }
LABEL_223:
    v170 = (__m128i *)"__amdgcn_target_id__";
    LOWORD(v173) = 259;
    sub_1039E30(v3, (__int64)&v170, (__int64)&v167, (__int64)v123, v119, v120, (char)v174, v175, v176, v177, v178);
    if ( v158 && v155 != &v157 )
      operator delete(v155);
    sub_10296E0((__int64)&v174, a1 + 216, ptr, v153.m128i_u64[0]);
    v148 = (char *)&v174[16 * (unsigned int)v175];
    if ( v174 != v148 )
    {
      v124 = v174;
      v150 = v3;
      do
      {
        v125 = *(_BYTE **)v124;
        v126 = *((_QWORD *)v124 + 1);
        v127 = sub_2244B30(*(_QWORD *)v124, v126);
        v128 = sub_2244E60(a1 + 528, v125, v126, v127);
        if ( v128 == -1 )
          sub_EC0F90((__int64 **)&v170, (__int64 *)(*(_QWORD *)(a1 + 528) + 8LL * *(unsigned int *)(a1 + 536)), 1);
        else
          sub_EC0F90((__int64 **)&v170, (__int64 *)(*(_QWORD *)(a1 + 528) + 8LL * v128), 1);
        v129 = (__int64 *)v170;
        sub_EC0F90((__int64 **)&v170, (__int64 *)(*(_QWORD *)(a1 + 528) + 8LL * *(unsigned int *)(a1 + 536)), 1);
        if ( v170 != (__m128i *)v129 )
        {
          if ( v125 )
          {
            v155 = &v157;
            sub_1069080(&v155, v125, (__int64)&v125[v126]);
            v130 = (char *)v155;
            v131 = (char *)v155 + v156;
            if ( v155 != (char *)v155 + v156 )
            {
              do
              {
                if ( *v130 == 45 )
                  *v130 = 95;
                ++v130;
              }
              while ( v130 != v131 );
            }
          }
          else
          {
            v157.m128i_i8[0] = 0;
            v156 = 0;
            v155 = &v157;
          }
          v132 = *v129;
          LOWORD(v173) = 257;
          v133 = *(_BYTE *)(v132 + 8) == 0;
          v134 = "0";
          LOWORD(v169) = 259;
          if ( !v133 )
            v134 = "1";
          v160.m128i_i64[0] = (__int64)&v155;
          LOWORD(v161) = 1027;
          v167.m128i_i64[0] = (__int64)v134;
          v159.m128i_i64[0] = (__int64)"__amdgcn_feature_";
          v163 = nullptr;
          v162 = &v159;
          v164 = "__";
          v166 = 770;
          sub_1039E30(
            v150,
            (__int64)&v162,
            (__int64)&v167,
            (__int64)"1",
            257,
            259,
            (char)v170,
            v171,
            v172.m128i_i32[0],
            v172.m128i_i32[2],
            v173);
          if ( v155 != &v157 )
            operator delete(v155);
        }
        v124 += 16;
      }
      while ( v148 != v124 );
      v3 = v150;
      v148 = (char *)v174;
    }
    v37 = (__int64)v148;
    if ( v148 != (char *)&v176 )
      free(v148);
  }
  if ( a2[863] )
  {
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    LOWORD(v169) = 259;
    LOWORD(v178) = 257;
    v167.m128i_i64[0] = (__int64)"__AMDGCN_UNSAFE_FP_ATOMICS__";
    sub_1039E30(v3, (__int64)&v167, (__int64)&v170, 257, v34, v35, (char)v174, v175, v176, v177, 1u);
  }
  if ( *(_DWORD *)(a1 + 248) == 26 || (v38 = *(_DWORD *)(a1 + 516), (v38 & 2) != 0) )
  {
    v39 = *v3;
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    v167.m128i_i64[0] = (__int64)"__HAS_FMAF__";
    LOWORD(v169) = 259;
    v40 = *(_QWORD *)(v39 + 24);
    LOWORD(v178) = 257;
    v41 = *(_QWORD **)(v39 + 32);
    if ( (unsigned __int64)(v40 - (_QWORD)v41) > 7 )
    {
      *v41 = 0x20656E6966656423LL;
      *(_QWORD *)(v39 + 32) += 8LL;
    }
    else
    {
      v39 = sub_227BF10(v39, "#define ", 8);
    }
    sub_2254180(&v167, v39);
    v42 = *(_BYTE **)(v39 + 32);
    if ( (unsigned __int64)v42 >= *(_QWORD *)(v39 + 24) )
    {
      v39 = sub_227BA10(v39, 32);
    }
    else
    {
      *(_QWORD *)(v39 + 32) = v42 + 1;
      *v42 = 32;
    }
    sub_2254180(&v170, v39);
    v43 = *(_BYTE **)(v39 + 32);
    if ( (unsigned __int64)v43 >= *(_QWORD *)(v39 + 24) )
    {
      sub_227BA10(v39, 10);
    }
    else
    {
      *(_QWORD *)(v39 + 32) = v43 + 1;
      *v43 = 10;
    }
    if ( (unsigned __int8)v178 > 1u )
    {
      v107 = *v3;
      v108 = *(__m128i **)(*v3 + 32);
      if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v108 > 0x18u )
      {
        v136 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v108[1].m128i_i8[8] = 40;
        v108[1].m128i_i64[0] = 0x6465746163657270LL;
        *v108 = v136;
        *(_QWORD *)(v107 + 32) += 25LL;
      }
      else
      {
        v107 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(&v167, v107);
      v109 = *(_QWORD *)(v107 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v107 + 24) - v109) > 2 )
      {
        *(_BYTE *)(v109 + 2) = 34;
        *(_WORD *)v109 = 8236;
        *(_QWORD *)(v107 + 32) += 3LL;
      }
      else
      {
        v107 = sub_227BF10(v107, ", \"", 3);
      }
      sub_2254180(&v174, v107);
      v110 = *(_QWORD *)(v107 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v107 + 24) - v110) > 2 )
      {
        *(_BYTE *)(v110 + 2) = 10;
        *(_WORD *)v110 = 10530;
        *(_QWORD *)(v107 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v107, "\")\n", 3);
      }
    }
    v38 = *(_DWORD *)(a1 + 516);
  }
  if ( (v38 & 0x10) != 0 )
  {
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    v167.m128i_i64[0] = (__int64)"FP_FAST_FMAF";
    LOWORD(v178) = 257;
    LOWORD(v169) = 259;
    sub_1039E30(v3, (__int64)&v167, (__int64)&v170, v37, v34, v35, (char)v174, v175, v176, v177, 1u);
  }
  v44 = *v3;
  v45 = *(_QWORD *)(*v3 + 32);
  v46 = *(_QWORD *)(*v3 + 24) - v45;
  if ( *(_DWORD *)(a1 + 248) == 26 || (v47 = *(_DWORD *)(a1 + 516), (v47 & 4) != 0) )
  {
    v170 = (__m128i *)"1";
    LOWORD(v173) = 259;
    v167.m128i_i64[0] = (__int64)"__HAS_LDEXPF__";
    LOWORD(v169) = 259;
    LOWORD(v178) = 257;
    if ( v46 > 7 )
    {
      *(_QWORD *)v45 = 0x20656E6966656423LL;
      *(_QWORD *)(v44 + 32) += 8LL;
    }
    else
    {
      v44 = sub_227BF10(v44, "#define ", 8);
    }
    sub_2254180(&v167, v44);
    v48 = *(_BYTE **)(v44 + 32);
    if ( (unsigned __int64)v48 >= *(_QWORD *)(v44 + 24) )
    {
      v44 = sub_227BA10(v44, 32);
    }
    else
    {
      *(_QWORD *)(v44 + 32) = v48 + 1;
      *v48 = 32;
    }
    sub_2254180(&v170, v44);
    v49 = *(_BYTE **)(v44 + 32);
    if ( (unsigned __int64)v49 >= *(_QWORD *)(v44 + 24) )
    {
      sub_227BA10(v44, 10);
    }
    else
    {
      *(_QWORD *)(v44 + 32) = v49 + 1;
      *v49 = 10;
    }
    v44 = *v3;
    v45 = *(_QWORD *)(*v3 + 32);
    v46 = *(_QWORD *)(*v3 + 24) - v45;
    if ( (unsigned __int8)v178 > 1u )
    {
      if ( v46 > 0x18 )
      {
        v138 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        *(_BYTE *)(v45 + 24) = 40;
        *(_QWORD *)(v45 + 16) = 0x6465746163657270LL;
        *(__m128i *)v45 = v138;
        *(_QWORD *)(v44 + 32) += 25LL;
      }
      else
      {
        v44 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(&v167, v44);
      v105 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v105) > 2 )
      {
        *(_BYTE *)(v105 + 2) = 34;
        *(_WORD *)v105 = 8236;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        v44 = sub_227BF10(v44, ", \"", 3);
      }
      sub_2254180(&v174, v44);
      v106 = *(_QWORD *)(v44 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v44 + 24) - v106) > 2 )
      {
        *(_BYTE *)(v106 + 2) = 10;
        *(_WORD *)v106 = 10530;
        *(_QWORD *)(v44 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v44, "\")\n", 3);
      }
      v44 = *v3;
      v45 = *(_QWORD *)(*v3 + 32);
      v46 = *(_QWORD *)(*v3 + 24) - v45;
    }
    if ( *(_DWORD *)(a1 + 248) == 26 )
    {
LABEL_65:
      v170 = (__m128i *)"1";
      LOWORD(v173) = 259;
      v167.m128i_i64[0] = (__int64)"__HAS_FP64__";
      LOWORD(v169) = 259;
      LOWORD(v178) = 257;
      if ( v46 > 7 )
      {
        *(_QWORD *)v45 = 0x20656E6966656423LL;
        *(_QWORD *)(v44 + 32) += 8LL;
      }
      else
      {
        v44 = sub_227BF10(v44, "#define ", 8);
      }
      sub_2254180(&v167, v44);
      v50 = *(_BYTE **)(v44 + 32);
      if ( (unsigned __int64)v50 >= *(_QWORD *)(v44 + 24) )
      {
        v44 = sub_227BA10(v44, 32);
      }
      else
      {
        *(_QWORD *)(v44 + 32) = v50 + 1;
        *v50 = 32;
      }
      sub_2254180(&v170, v44);
      v54 = *(_BYTE **)(v44 + 32);
      if ( (unsigned __int64)v54 >= *(_QWORD *)(v44 + 24) )
      {
        sub_227BA10(v44, 10);
        if ( (unsigned __int8)v178 <= 1u )
          goto LABEL_71;
      }
      else
      {
        *(_QWORD *)(v44 + 32) = v54 + 1;
        *v54 = 10;
        if ( (unsigned __int8)v178 <= 1u )
        {
LABEL_71:
          if ( *(_DWORD *)(a1 + 248) == 26 )
          {
            v170 = (__m128i *)"1";
            v167.m128i_i64[0] = (__int64)"FP_FAST_FMA";
            LOWORD(v173) = 259;
            LOWORD(v169) = 259;
            LOWORD(v178) = 257;
            sub_1039E30(v3, (__int64)&v167, (__int64)&v170, v51, v52, v53, (char)v174, v175, v176, v177, 1u);
          }
          v44 = *v3;
          v45 = *(_QWORD *)(*v3 + 32);
          v46 = *(_QWORD *)(*v3 + 24) - v45;
          goto LABEL_74;
        }
      }
      v101 = *v3;
      v102 = *(__m128i **)(*v3 + 32);
      if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v102 > 0x18u )
      {
        v137 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
        v102[1].m128i_i8[8] = 40;
        v102[1].m128i_i64[0] = 0x6465746163657270LL;
        *v102 = v137;
        *(_QWORD *)(v101 + 32) += 25LL;
      }
      else
      {
        v101 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
      }
      sub_2254180(&v167, v101);
      v103 = *(_QWORD *)(v101 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v103) > 2 )
      {
        *(_BYTE *)(v103 + 2) = 34;
        *(_WORD *)v103 = 8236;
        *(_QWORD *)(v101 + 32) += 3LL;
      }
      else
      {
        v101 = sub_227BF10(v101, ", \"", 3);
      }
      sub_2254180(&v174, v101);
      v104 = *(_QWORD *)(v101 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v101 + 24) - v104) > 2 )
      {
        *(_BYTE *)(v104 + 2) = 10;
        *(_WORD *)v104 = 10530;
        *(_QWORD *)(v101 + 32) += 3LL;
      }
      else
      {
        sub_227BF10(v101, "\")\n", 3);
      }
      goto LABEL_71;
    }
    v47 = *(_DWORD *)(a1 + 516);
  }
  if ( (v47 & 8) != 0 )
    goto LABEL_65;
LABEL_74:
  v55 = *(_DWORD *)(a1 + 520);
  v174 = "compile-time-constant access to the wavefront size will be removed in a future release";
  v167.m128i_i32[0] = v55;
  LOWORD(v169) = 265;
  v170 = (__m128i *)"__AMDGCN_WAVEFRONT_SIZE__";
  LOWORD(v173) = 259;
  LOWORD(v178) = 259;
  if ( v46 > 7 )
  {
    *(_QWORD *)v45 = 0x20656E6966656423LL;
    *(_QWORD *)(v44 + 32) += 8LL;
  }
  else
  {
    v44 = sub_227BF10(v44, "#define ", 8);
  }
  sub_2254180(&v170, v44);
  v56 = *(_BYTE **)(v44 + 32);
  if ( (unsigned __int64)v56 >= *(_QWORD *)(v44 + 24) )
  {
    v44 = sub_227BA10(v44, 32);
  }
  else
  {
    *(_QWORD *)(v44 + 32) = v56 + 1;
    *v56 = 32;
  }
  sub_2254180(&v167, v44);
  v57 = *(_BYTE **)(v44 + 32);
  if ( (unsigned __int64)v57 >= *(_QWORD *)(v44 + 24) )
  {
    sub_227BA10(v44, 10);
  }
  else
  {
    *(_QWORD *)(v44 + 32) = v57 + 1;
    *v57 = 10;
  }
  v58 = *v3;
  v59 = *(__m128i **)(*v3 + 32);
  v60 = *(_QWORD *)(*v3 + 24) - (_QWORD)v59;
  if ( (unsigned __int8)v178 > 1u )
  {
    if ( v60 > 0x18 )
    {
      v98 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v59[1].m128i_i8[8] = 40;
      v59[1].m128i_i64[0] = 0x6465746163657270LL;
      *v59 = v98;
      *(_QWORD *)(v58 + 32) += 25LL;
    }
    else
    {
      v58 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v170, v58);
    v86 = *(_QWORD *)(v58 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v58 + 24) - v86) > 2 )
    {
      *(_BYTE *)(v86 + 2) = 34;
      *(_WORD *)v86 = 8236;
      *(_QWORD *)(v58 + 32) += 3LL;
    }
    else
    {
      v58 = sub_227BF10(v58, ", \"", 3);
    }
    sub_2254180(&v174, v58);
    v87 = *(_QWORD *)(v58 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v58 + 24) - v87) > 2 )
    {
      *(_BYTE *)(v87 + 2) = 10;
      *(_WORD *)v87 = 10530;
      *(_QWORD *)(v58 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v58, "\")\n", 3);
    }
    v58 = *v3;
    v59 = *(__m128i **)(*v3 + 32);
    v60 = *(_QWORD *)(*v3 + 24) - (_QWORD)v59;
  }
  v61 = *(_DWORD *)(a1 + 520);
  v174 = "compile-time-constant access to the wavefront size will be removed in a future release";
  LOWORD(v169) = 265;
  v167.m128i_i32[0] = v61;
  v170 = (__m128i *)"__AMDGCN_WAVEFRONT_SIZE";
  LOWORD(v173) = 259;
  LOWORD(v178) = 259;
  if ( v60 > 7 )
  {
    v59->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v58 + 32) += 8LL;
  }
  else
  {
    v58 = sub_227BF10(v58, "#define ", 8);
  }
  sub_2254180(&v170, v58);
  v62 = *(_BYTE **)(v58 + 32);
  if ( (unsigned __int64)v62 >= *(_QWORD *)(v58 + 24) )
  {
    v58 = sub_227BA10(v58, 32);
  }
  else
  {
    *(_QWORD *)(v58 + 32) = v62 + 1;
    *v62 = 32;
  }
  sub_2254180(&v167, v58);
  v63 = *(_BYTE **)(v58 + 32);
  if ( (unsigned __int64)v63 >= *(_QWORD *)(v58 + 24) )
  {
    sub_227BA10(v58, 10);
  }
  else
  {
    *(_QWORD *)(v58 + 32) = v63 + 1;
    *v63 = 10;
  }
  v64 = *v3;
  v65 = *(__m128i **)(*v3 + 32);
  v66 = *(_QWORD *)(*v3 + 24) - (_QWORD)v65;
  if ( (unsigned __int8)v178 > 1u )
  {
    if ( v66 > 0x18 )
    {
      v99 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v65[1].m128i_i8[8] = 40;
      v65[1].m128i_i64[0] = 0x6465746163657270LL;
      *v65 = v99;
      *(_QWORD *)(v64 + 32) += 25LL;
    }
    else
    {
      v64 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v170, v64);
    v84 = *(_QWORD *)(v64 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v64 + 24) - v84) > 2 )
    {
      *(_BYTE *)(v84 + 2) = 34;
      *(_WORD *)v84 = 8236;
      *(_QWORD *)(v64 + 32) += 3LL;
    }
    else
    {
      v64 = sub_227BF10(v64, ", \"", 3);
    }
    sub_2254180(&v174, v64);
    v85 = *(_QWORD *)(v64 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v64 + 24) - v85) > 2 )
    {
      *(_BYTE *)(v85 + 2) = 10;
      *(_WORD *)v85 = 10530;
      *(_QWORD *)(v64 + 32) += 3LL;
    }
    else
    {
      sub_227BF10(v64, "\")\n", 3);
    }
    v64 = *v3;
    v65 = *(__m128i **)(*v3 + 32);
    v66 = *(_QWORD *)(*v3 + 24) - (_QWORD)v65;
  }
  v67 = *(unsigned __int8 *)(a1 + 524);
  LOWORD(v169) = 266;
  v167.m128i_i32[0] = v67;
  v170 = (__m128i *)"__AMDGCN_CUMODE__";
  LOWORD(v173) = 259;
  LOWORD(v178) = 257;
  if ( v66 > 7 )
  {
    v65->m128i_i64[0] = 0x20656E6966656423LL;
    *(_QWORD *)(v64 + 32) += 8LL;
  }
  else
  {
    v64 = sub_227BF10(v64, "#define ", 8);
  }
  sub_2254180(&v170, v64);
  v68 = *(_BYTE **)(v64 + 32);
  if ( (unsigned __int64)v68 >= *(_QWORD *)(v64 + 24) )
  {
    v64 = sub_227BA10(v64, 32);
  }
  else
  {
    *(_QWORD *)(v64 + 32) = v68 + 1;
    *v68 = 32;
  }
  sub_2254180(&v167, v64);
  v69 = *(_BYTE **)(v64 + 32);
  if ( (unsigned __int64)v69 >= *(_QWORD *)(v64 + 24) )
  {
    sub_227BA10(v64, 10);
  }
  else
  {
    *(_QWORD *)(v64 + 32) = v69 + 1;
    *v69 = 10;
  }
  if ( (unsigned __int8)v178 > 1u )
  {
    v80 = *v3;
    v81 = *(__m128i **)(*v3 + 32);
    if ( *(_QWORD *)(*v3 + 24) - (_QWORD)v81 > 0x18u )
    {
      v100 = _mm_load_si128((const __m128i *)&xmmword_23A9650);
      v81[1].m128i_i8[8] = 40;
      v81[1].m128i_i64[0] = 0x6465746163657270LL;
      *v81 = v100;
      *(_QWORD *)(v80 + 32) += 25LL;
    }
    else
    {
      v80 = sub_227BF10(*v3, "#pragma clang deprecated(", 25);
    }
    sub_2254180(&v170, v80);
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
    sub_2254180(&v174, v80);
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
  if ( ptr != v154 )
    free(ptr);
}
