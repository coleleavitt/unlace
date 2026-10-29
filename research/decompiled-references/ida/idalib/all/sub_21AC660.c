_QWORD *__fastcall sub_21AC660(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // al
  char *v5; // r14
  char *v7; // rsi
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // r14d
  unsigned __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r12
  char *v20; // r11
  __int64 v21; // rdx
  __int64 *v22; // rsi
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 *v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // edi
  __int64 *v38; // r10
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // r9
  __int64 v43; // rax
  int v44; // eax
  const __m128i *v45; // rsi
  __int8 *v46; // rsi
  const __m128i *v47; // rsi
  __int64 v48; // rcx
  const __m128i *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  char *v55; // rax
  __int64 *v56; // r11
  char *v57; // r10
  __int64 *v58; // r12
  size_t v59; // rdx
  char *v60; // rax
  __int64 *v61; // rax
  char v62; // si
  int v63; // r8d
  int v64; // r8d
  __int64 v65; // rdx
  int v66; // ecx
  char *v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  char *v73; // rax
  __int64 *v74; // r11
  char *v75; // r10
  unsigned __int64 v76; // r8
  __int64 *v77; // r12
  size_t v78; // rdx
  char *v79; // rax
  __int64 *v80; // rax
  char v81; // si
  __int64 v82; // rdx
  int v83; // ecx
  char *v84; // rsi
  __int64 v85; // rdi
  int v86; // r11d
  __int64 *v87; // r12
  __int64 v88; // r8
  bool v89; // zf
  __int64 v90; // rcx
  unsigned int v91; // edx
  size_t v92; // rdx
  int v93; // r8d
  __int64 v94; // rdx
  __int64 *v95; // rcx
  __int64 *v96; // r10
  int v97; // esi
  int v98; // r11d
  __int64 *v99; // r12
  __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rsi
  const __m128i *v103; // rax
  __int64 v104; // rdx
  __m128i v105; // xmm1
  __int64 v106; // rax
  int v107; // esi
  size_t v108; // rdx
  __int64 *v109; // rcx
  char **v110; // [rsp+8h] [rbp-1B0h]
  char v111; // [rsp+16h] [rbp-1A2h]
  char v112; // [rsp+17h] [rbp-1A1h]
  unsigned __int64 v113; // [rsp+18h] [rbp-1A0h]
  __int64 v114; // [rsp+18h] [rbp-1A0h]
  unsigned int v115; // [rsp+18h] [rbp-1A0h]
  __int64 v116; // [rsp+18h] [rbp-1A0h]
  __int64 v117; // [rsp+18h] [rbp-1A0h]
  unsigned int v118; // [rsp+18h] [rbp-1A0h]
  __int64 v119; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v120; // [rsp+18h] [rbp-1A0h]
  int v121; // [rsp+18h] [rbp-1A0h]
  unsigned __int64 v122; // [rsp+18h] [rbp-1A0h]
  int v123; // [rsp+18h] [rbp-1A0h]
  char *v125; // [rsp+28h] [rbp-190h]
  __int64 *v126; // [rsp+30h] [rbp-188h]
  __int64 v127; // [rsp+30h] [rbp-188h]
  unsigned int v128; // [rsp+30h] [rbp-188h]
  __int64 v129; // [rsp+30h] [rbp-188h]
  int v130; // [rsp+30h] [rbp-188h]
  int v131; // [rsp+30h] [rbp-188h]
  __int64 v132; // [rsp+30h] [rbp-188h]
  __int64 v133; // [rsp+30h] [rbp-188h]
  __int64 v134; // [rsp+38h] [rbp-180h]
  __int64 *v135; // [rsp+38h] [rbp-180h]
  unsigned int v136; // [rsp+38h] [rbp-180h]
  __int64 *v137; // [rsp+40h] [rbp-178h]
  __int64 v138; // [rsp+40h] [rbp-178h]
  char *v139; // [rsp+40h] [rbp-178h]
  int v140; // [rsp+48h] [rbp-170h]
  char *v141; // [rsp+48h] [rbp-170h]
  int v142; // [rsp+50h] [rbp-168h]
  __int64 v143; // [rsp+60h] [rbp-158h] BYREF
  __int64 v144; // [rsp+68h] [rbp-150h] BYREF
  __int64 v145; // [rsp+70h] [rbp-148h] BYREF
  unsigned __int64 v146; // [rsp+78h] [rbp-140h] BYREF
  __int64 v147; // [rsp+80h] [rbp-138h] BYREF
  __int64 v148; // [rsp+88h] [rbp-130h]
  unsigned int v149; // [rsp+90h] [rbp-128h]
  __int64 v150; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v151; // [rsp+A8h] [rbp-110h]
  unsigned int v152; // [rsp+B0h] [rbp-108h]
  char *v153; // [rsp+C0h] [rbp-F8h] BYREF
  __int64 v154; // [rsp+C8h] [rbp-F0h]
  unsigned int v155; // [rsp+D0h] [rbp-E8h]
  __m128 v156; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v157; // [rsp+F0h] [rbp-C8h]
  __m128i v158; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v159[10]; // [rsp+110h] [rbp-A8h] BYREF

  v4 = *(_BYTE *)(a2 + 612);
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v153 = nullptr;
  v154 = 0;
  v155 = 0;
  v112 = v4;
  if ( v4 )
  {
    v112 = 0;
  }
  else if ( !*(_BYTE *)(a2 + 613) )
  {
    v36 = *(_QWORD *)(a2 + 560);
    v112 = 1;
    if ( *(_QWORD *)(a2 + 568) != v36 )
      *(_QWORD *)(a2 + 568) = v36;
  }
  v5 = *(char **)(a3 + 8);
  while ( 1 )
  {
    v7 = *(char **)(a3 + 16);
    if ( v7 <= v5 )
      break;
    *(_QWORD *)(a3 + 8) = v5 + 1;
    v111 = *v5;
    v110 = (char **)(a3 + 8);
    v8 = sub_21A29A0((char **)(a3 + 8), v7);
    if ( v8 > 0xFFFFFFFF )
LABEL_179:
      sub_2221C70("LEB is outside Varuint32 range", 1);
    v5 = (char *)(*(_QWORD *)(a3 + 8) + v8);
    if ( (unsigned __int8)v111 > 9u || ((1LL << v111) & 0x282) == 0 )
    {
      *(_QWORD *)(a3 + 8) = v5;
      continue;
    }
    v9 = sub_21A2A40(a3);
    if ( !v9 )
      goto LABEL_41;
    v125 = v5;
    v10 = v9 - 1;
    do
    {
      v11 = sub_21A29A0(v110, *(char **)(a3 + 16));
      if ( v11 > 0xFFFFFFFF )
        goto LABEL_179;
      v12 = sub_21A29A0(v110, *(char **)(a3 + 16));
      v15 = *(_QWORD *)(a3 + 8);
      v16 = v12;
      v17 = v15 + v12;
      if ( v17 > *(_QWORD *)(a3 + 16) )
        sub_2221C70("EOF while reading string", 1);
      *(_QWORD *)(a3 + 8) = v17;
      memset(v159, 0, 0x68u);
      v18 = 0;
      v158.m128i_i64[0] = v15;
      v158.m128i_i64[1] = v16;
      v159[5].m128i_i32[0] = v11;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      if ( v111 == 1 )
      {
        v31 = v149;
        v146 = v11;
        if ( v149 )
        {
          v32 = v147;
          LODWORD(v33) = (v149 - 1) & (((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (484763065 * v11));
          v34 = (__int64 *)(v147 + 8LL * (unsigned int)v33);
          v35 = *v34;
          if ( *v34 == v11 )
          {
LABEL_25:
            sub_20124D0(&v156, v34, (__int64 *)(v147 + 8LL * v149), (__int64)&v147, 1);
            v24 = "function named more than once";
            goto LABEL_18;
          }
          v98 = 1;
          v99 = nullptr;
          if ( v35 != -1 )
          {
            while ( 1 )
            {
              if ( v35 == -2 && !v99 )
                v99 = v34;
              v14 = (unsigned int)(v98 + 1);
              v33 = (v149 - 1) & ((_DWORD)v33 + v98);
              v34 = (__int64 *)(v147 + 8 * v33);
              v35 = *v34;
              if ( v11 == *v34 )
                goto LABEL_25;
              if ( v35 == -1 )
                break;
              ++v98;
            }
            if ( v99 )
              v34 = v99;
          }
          v156.m128_u64[0] = (unsigned __int64)v34;
          v13 = (unsigned int)(v148 + 1);
          if ( 4 * (int)v13 < 3 * v149 )
          {
            if ( v149 - HIDWORD(v148) - (unsigned int)v13 > v149 >> 3 )
            {
              v100 = v11;
LABEL_111:
              v89 = *v34 == -1;
              LODWORD(v148) = v13;
              if ( !v89 )
                --HIDWORD(v148);
              *v34 = v100;
              v122 = v15;
              sub_20124D0(&v156, v34, (__int64 *)(v32 + 8 * v31), (__int64)&v147, 1);
              v101 = *(_QWORD *)(a2 + 536);
              v102 = *(unsigned int *)(a2 + 680);
              if ( v102 + ((*(_QWORD *)(a2 + 544) - v101) >> 7) <= v11 || !v16 )
              {
                v24 = "invalid function name entry";
                goto LABEL_18;
              }
              v42 = v122;
              if ( (unsigned int)v102 > (unsigned int)v11 )
              {
                v159[0].m128i_i32[1] |= 0x10u;
                v44 = 0;
              }
              else
              {
                v103 = (const __m128i *)(v101 + ((unsigned __int64)(unsigned int)(v11 - v102) << 7));
                v104 = v103->m128i_u32[1];
                v103[6].m128i_i64[1] = v122;
                v103[7].m128i_i64[0] = v16;
                v89 = v103[5].m128i_i8[0] == 0;
                v143 = *(_QWORD *)(a2 + 304) + (v104 << 6);
                if ( v89 )
                {
                  v159[0].m128i_i32[1] |= 2u;
                }
                else
                {
                  v105 = _mm_loadu_si128(v103 + 4);
                  v106 = v103[5].m128i_i64[0];
                  *(__m128i *)((char *)&v159[3] + 8) = v105;
                  v159[4].m128i_i64[1] = v106;
                }
                v44 = 0;
              }
              goto LABEL_36;
            }
            v133 = v15;
            v107 = v149;
LABEL_126:
            sub_2018680((__int64)&v147, v107, v13, (__int64)&v147, v14, v15);
            sub_20182D0(&v147, (__int64 *)&v146, &v156);
            v100 = v146;
            v32 = v147;
            v31 = v149;
            LODWORD(v13) = v148 + 1;
            v34 = (__int64 *)v156.m128_u64[0];
            v15 = v133;
            goto LABEL_111;
          }
        }
        else
        {
          v156.m128_u64[0] = 0;
        }
        v133 = v15;
        v107 = 2 * v149;
        goto LABEL_126;
      }
      if ( v111 != 7 )
      {
        v19 = v155;
        v20 = v153;
        if ( !v155 )
          goto LABEL_47;
        v18 = v155 - 1;
        v21 = ((unsigned int)((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (484763065 * (_DWORD)v11)) & (v155 - 1);
        v14 = ((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (0xBF58476D1CE4E5B9LL * v11);
        v22 = (__int64 *)&v153[8 * v21];
        v23 = *v22;
        if ( v11 == *v22 )
        {
LABEL_17:
          sub_20124D0(&v156, v22, (__int64 *)&v153[8 * v155], (__int64)&v153, 1);
          v24 = "segment named more than once";
LABEL_18:
          sub_21A2C10((__int64 *)&v156, v24);
          *a1 = v156.m128_u64[0];
          goto LABEL_19;
        }
        v37 = 1;
        v38 = nullptr;
        if ( v23 != -1 )
        {
          while ( 1 )
          {
            if ( !v38 && v23 == -2 )
              v38 = v22;
            LODWORD(v21) = v18 & (v37 + v21);
            v22 = (__int64 *)&v153[8 * (unsigned int)v21];
            v23 = *v22;
            if ( v11 == *v22 )
              goto LABEL_17;
            if ( v23 == -1 )
              break;
            ++v37;
          }
          if ( v38 )
            v22 = v38;
        }
        v39 = v154 + 1;
        if ( 4 * ((int)v154 + 1) < 3 * v155 )
        {
          if ( v155 - HIDWORD(v154) - v39 > v155 >> 3 )
          {
LABEL_32:
            v40 = *v22;
            LODWORD(v154) = v39;
            if ( v40 != -1 )
              goto LABEL_33;
            goto LABEL_34;
          }
          v135 = (__int64 *)v153;
          v117 = v15;
          v70 = (v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2);
          v71 = v70 >> 4;
          v72 = (((((v71 | v70) >> 8) | v71 | v70) >> 16) | ((v71 | v70) >> 8) | v71 | v70) + 1;
          if ( (unsigned int)v72 < 0x40 )
            LODWORD(v72) = 64;
          v155 = v72;
          v73 = (char *)sub_22300B0(8LL * (unsigned int)v72, 8, 64, v71, v14, v15);
          v74 = v135;
          v15 = v117;
          v75 = v73;
          v153 = v73;
          v76 = ((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (0xBF58476D1CE4E5B9LL * v11);
          if ( v135 )
          {
            v154 = 0;
            v138 = 8 * v19;
            v77 = &v135[v19];
            v118 = v155;
            v78 = 8LL * v155;
            if ( v73 != &v73[v78] )
            {
              v129 = v15;
              v79 = (char *)memset(v73, 255, v78);
              v15 = v129;
              v76 = ((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (0xBF58476D1CE4E5B9LL * v11);
              v74 = v135;
              v75 = v79;
            }
            v80 = v74;
            v81 = 0;
            v130 = 0;
            v136 = v118 - 1;
            do
            {
              while ( 1 )
              {
                v82 = *v80;
                if ( (unsigned __int64)(*v80 + 2) > 1 )
                  break;
                if ( v77 == ++v80 )
                  goto LABEL_75;
              }
              if ( !v118 )
                goto LABEL_201;
              v83 = v136 & (((0xBF58476D1CE4E5B9LL * v82) >> 31) ^ (484763065 * v82));
              v84 = &v75[8 * v83];
              v85 = *(_QWORD *)v84;
              if ( *(_QWORD *)v84 != v82 && v85 != -1 )
              {
                v142 = 1;
                v141 = nullptr;
                while ( 1 )
                {
                  if ( v85 == -2 )
                  {
                    if ( v141 )
                      v84 = v141;
                    v141 = v84;
                  }
                  v83 = v136 & (v142 + v83);
                  ++v142;
                  v84 = &v75[8 * v83];
                  v85 = *(_QWORD *)v84;
                  if ( v82 == *(_QWORD *)v84 )
                    break;
                  if ( v85 == -1 )
                  {
                    if ( v141 )
                      v84 = v141;
                    break;
                  }
                }
              }
              ++v80;
              *(_QWORD *)v84 = v82;
              v81 = 1;
              ++v130;
            }
            while ( v77 != v80 );
LABEL_75:
            if ( v81 )
              LODWORD(v154) = v130;
            v131 = v76;
            v119 = v15;
            operator delete(v74, v138, 8);
            v15 = v119;
            LODWORD(v76) = v131;
            v20 = v153;
            v19 = v155;
            v39 = v154 + 1;
          }
          else
          {
            v154 = 0;
            v19 = v155;
            v92 = 8LL * v155;
            if ( v73 != &v73[v92] )
            {
              v73 = (char *)memset(v73, 255, v92);
              v15 = v117;
              LODWORD(v76) = ((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (484763065 * v11);
            }
            v20 = v73;
            v39 = 1;
          }
          if ( !(_DWORD)v19 )
            goto LABEL_202;
          v93 = (v19 - 1) & v76;
          v22 = (__int64 *)&v20[8 * v93];
          v94 = *v22;
          if ( v11 != *v22 )
          {
            if ( v94 != -1 )
            {
              v121 = 1;
              v95 = nullptr;
              while ( 1 )
              {
                if ( v94 != -2 || v95 )
                  v22 = v95;
                v93 = (v19 - 1) & (v121 + v93);
                v96 = (__int64 *)&v20[8 * v93];
                v94 = *v96;
                if ( v11 == *v96 )
                  goto LABEL_103;
                if ( v94 == -1 )
                  goto LABEL_186;
                ++v121;
                v95 = v22;
                v22 = (__int64 *)&v20[8 * v93];
              }
            }
LABEL_142:
            LODWORD(v154) = v39;
            goto LABEL_34;
          }
        }
        else
        {
LABEL_47:
          v126 = (__int64 *)v153;
          v114 = v15;
          v53 = (((((((2 * v155 - 1) | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 2)
                  | (2 * v155 - 1)
                  | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 4)
                | (((2 * v155 - 1) | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 2)
                | (2 * v155 - 1)
                | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 8)
              | (((((2 * v155 - 1) | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 2)
                | (2 * v155 - 1)
                | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 4)
              | (((2 * v155 - 1) | ((unsigned __int64)(2 * v155 - 1) >> 1)) >> 2)
              | (2 * v155 - 1)
              | ((unsigned __int64)(2 * v155 - 1) >> 1);
          v54 = ((v53 >> 16) | v53) + 1;
          if ( (unsigned int)v54 < 0x40 )
            LODWORD(v54) = 64;
          v155 = v54;
          v55 = (char *)sub_22300B0(8LL * (unsigned int)v54, 8, 64, v18, v14, v15);
          v56 = v126;
          v15 = v114;
          v57 = v55;
          v153 = v55;
          if ( v126 )
          {
            v154 = 0;
            v134 = 8 * v19;
            v58 = &v126[v19];
            v115 = v155;
            v59 = 8LL * v155;
            if ( v55 != &v55[v59] )
            {
              v137 = v126;
              v127 = v15;
              v60 = (char *)memset(v55, 255, v59);
              v15 = v127;
              v56 = v137;
              v57 = v60;
            }
            v61 = v56;
            v62 = 0;
            v63 = 0;
            v128 = v115 - 1;
            if ( v56 != v58 )
            {
              do
              {
                while ( 1 )
                {
                  v69 = *v61;
                  if ( (unsigned __int64)(*v61 + 2) > 1 )
                    break;
                  if ( v58 == ++v61 )
                    goto LABEL_62;
                }
                if ( !v115 )
                {
LABEL_201:
                  *(_QWORD *)&dword_0 = 0;
                  BUG();
                }
                v66 = v128 & (((0xBF58476D1CE4E5B9LL * v69) >> 31) ^ (484763065 * v69));
                v67 = &v57[8 * v66];
                v68 = *(_QWORD *)v67;
                if ( *(_QWORD *)v67 != v69 && v68 != -1 )
                {
                  v140 = 1;
                  v139 = nullptr;
                  while ( 1 )
                  {
                    if ( !v139 )
                    {
                      if ( v68 != -2 )
                        v67 = nullptr;
                      v139 = v67;
                    }
                    v66 = v128 & (v140 + v66);
                    ++v140;
                    v67 = &v57[8 * v66];
                    v68 = *(_QWORD *)v67;
                    if ( v69 == *(_QWORD *)v67 )
                      break;
                    if ( v68 == -1 )
                    {
                      if ( v139 )
                        v67 = v139;
                      break;
                    }
                  }
                }
                ++v61;
                *(_QWORD *)v67 = v69;
                ++v63;
                v62 = 1;
              }
              while ( v58 != v61 );
LABEL_62:
              if ( v62 )
                LODWORD(v154) = v63;
            }
            v116 = v15;
            operator delete(v56, v134, 8);
            v15 = v116;
            v20 = v153;
            v19 = v155;
            v39 = v154 + 1;
          }
          else
          {
            v154 = 0;
            v19 = v155;
            v108 = 8LL * v155;
            if ( v55 != &v55[v108] )
            {
              v55 = (char *)memset(v55, 255, v108);
              v15 = v114;
            }
            v20 = v55;
            v39 = 1;
          }
          if ( !(_DWORD)v19 )
          {
LABEL_202:
            LODWORD(v154) = v154 + 1;
            BUG();
          }
          v64 = (v19 - 1) & (((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (484763065 * v11));
          v22 = (__int64 *)&v20[8 * v64];
          v65 = *v22;
          if ( v11 != *v22 )
          {
            if ( v65 == -1 )
              goto LABEL_142;
            v123 = 1;
            v109 = nullptr;
            while ( 1 )
            {
              if ( v109 || v65 != -2 )
                v22 = v109;
              v64 = (v19 - 1) & (v123 + v64);
              v96 = (__int64 *)&v20[8 * v64];
              v65 = *v96;
              if ( v11 == *v96 )
                break;
              if ( v65 == -1 )
              {
LABEL_186:
                if ( v22 )
                  goto LABEL_32;
                v22 = v96;
                goto LABEL_142;
              }
              ++v123;
              v109 = v22;
              v22 = (__int64 *)&v20[8 * v64];
            }
LABEL_103:
            v22 = v96;
          }
        }
        LODWORD(v154) = v39;
LABEL_33:
        --HIDWORD(v154);
LABEL_34:
        *v22 = v11;
        v113 = v15;
        sub_20124D0(&v156, v22, (__int64 *)&v20[8 * v19], (__int64)&v153, 1);
        v41 = *(_QWORD *)(a2 + 496);
        v42 = v113;
        if ( 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD *)(a2 + 504) - v41) >> 3) < v11 )
        {
          v24 = "invalid data segment name entry";
          goto LABEL_18;
        }
        v159[0].m128i_i32[1] |= 2u;
        v159[0].m128i_i8[0] = 1;
        v43 = *(_QWORD *)(v41 + 104 * v11 + 64);
        v159[5].m128i_i32[0] = v11;
        v159[5].m128i_i64[1] = 0;
        v159[6].m128i_i64[0] = v43;
        v44 = 2;
        goto LABEL_36;
      }
      v26 = v152;
      v146 = v11;
      if ( !v152 )
      {
        v156.m128_u64[0] = 0;
LABEL_105:
        v132 = v15;
        v97 = 2 * v152;
LABEL_106:
        sub_2018680((__int64)&v150, v97, v13, (__int64)&v150, v14, v15);
        sub_20182D0(&v150, (__int64 *)&v146, &v156);
        v88 = v146;
        v27 = v150;
        v26 = v152;
        LODWORD(v13) = v151 + 1;
        v29 = (__int64 *)v156.m128_u64[0];
        v15 = v132;
        goto LABEL_84;
      }
      v27 = v150;
      LODWORD(v28) = (v152 - 1) & (((0xBF58476D1CE4E5B9LL * v11) >> 31) ^ (484763065 * v11));
      v29 = (__int64 *)(v150 + 8LL * (unsigned int)v28);
      v30 = *v29;
      if ( v11 == *v29 )
      {
LABEL_22:
        sub_20124D0(&v156, v29, (__int64 *)(v150 + 8LL * v152), (__int64)&v150, 1);
        sub_21A2C10((__int64 *)&v156, "global named more than once");
        *a1 = v156.m128_u64[0];
        goto LABEL_19;
      }
      v86 = 1;
      v87 = nullptr;
      if ( v30 != -1 )
      {
        while ( 1 )
        {
          if ( v30 == -2 && !v87 )
            v87 = v29;
          v28 = (v152 - 1) & ((_DWORD)v28 + v86);
          v29 = (__int64 *)(v150 + 8 * v28);
          v30 = *v29;
          if ( v11 == *v29 )
            goto LABEL_22;
          if ( v30 == -1 )
            break;
          ++v86;
        }
        if ( v87 )
          v29 = v87;
      }
      v156.m128_u64[0] = (unsigned __int64)v29;
      v13 = (unsigned int)(v151 + 1);
      v14 = (unsigned int)(4 * v13);
      if ( (unsigned int)v14 >= 3 * v152 )
        goto LABEL_105;
      v14 = v152 >> 3;
      if ( v152 - HIDWORD(v151) - (unsigned int)v13 <= (unsigned int)v14 )
      {
        v132 = v15;
        v97 = v152;
        goto LABEL_106;
      }
      v88 = v11;
LABEL_84:
      v89 = *v29 == -1;
      LODWORD(v151) = v13;
      if ( !v89 )
        --HIDWORD(v151);
      *v29 = v88;
      v120 = v15;
      sub_20124D0(&v156, v29, (__int64 *)(v27 + 8 * v26), (__int64)&v150, 1);
      v90 = *(_QWORD *)(a2 + 376);
      v91 = *(_DWORD *)(a2 + 672);
      if ( (unsigned __int64)v91 - 0x71C71C71C71C71C7LL * ((*(_QWORD *)(a2 + 384) - v90) >> 3) <= v11 || !v16 )
      {
        v24 = "invalid global name entry";
        goto LABEL_18;
      }
      v159[0].m128i_i8[0] = 2;
      v42 = v120;
      if ( v91 > (unsigned int)v11 )
        v159[0].m128i_i32[1] |= 0x10u;
      else
        v144 = v90 + 72LL * ((unsigned int)v11 - v91) + 4;
      v44 = 1;
LABEL_36:
      v156.m128_u64[0] = __PAIR64__(v11, v44);
      v45 = *(const __m128i **)(a2 + 592);
      v156.m128_u64[1] = v42;
      v157 = v16;
      if ( v45 == *(const __m128i **)(a2 + 600) )
      {
        sub_21AA060(a2 + 584, v45, (const __m128i *)&v156);
      }
      else
      {
        v46 = &v45[1].m128i_i8[8];
        *(__m128i *)(v46 - 24) = _mm_load_si128((const __m128i *)&v156);
        *((_QWORD *)v46 - 1) = v157;
        *(_QWORD *)(a2 + 592) = v46;
      }
      if ( v112 )
      {
        v47 = *(const __m128i **)(a2 + 568);
        if ( v47 == *(const __m128i **)(a2 + 576) )
        {
          sub_21A5310(a2 + 560, v47, &v158, &v144, &v145, &v143);
        }
        else
        {
          v48 = v144;
          v49 = v47 + 9;
          v50 = v145;
          v51 = v143;
          v49[-9] = _mm_load_si128(&v158);
          v49[-8] = _mm_load_si128(v159);
          v49[-7] = _mm_load_si128(&v159[1]);
          v49[-6] = _mm_load_si128(&v159[2]);
          v49[-5] = _mm_load_si128(&v159[3]);
          v49[-4] = _mm_load_si128(&v159[4]);
          v49[-3] = _mm_load_si128(&v159[5]);
          v52 = v159[6].m128i_i64[0];
          v49[-2].m128i_i64[1] = v48;
          v49[-2].m128i_i64[0] = v52;
          v49[-1].m128i_i64[0] = v50;
          v49[-1].m128i_i64[1] = v51;
          *(_QWORD *)(a2 + 568) = v49;
        }
      }
      --v10;
    }
    while ( v10 != -1 );
    v5 = v125;
LABEL_41:
    if ( *(char **)(a3 + 8) != v5 )
    {
      sub_21A2C10(v158.m128i_i64, "name sub-section ended prematurely");
      *a1 = v158.m128i_i64[0];
      goto LABEL_19;
    }
  }
  if ( v7 == v5 )
  {
    *a1 = 0;
  }
  else
  {
    sub_21A2C10(v158.m128i_i64, "name section ended prematurely");
    *a1 = v158.m128i_i64[0];
  }
LABEL_19:
  operator delete(v153, 8LL * v155, 8);
  operator delete(v150, 8LL * v152, 8);
  operator delete(v147, 8LL * v149, 8);
  return a1;
}
