char *__fastcall sub_1F73520(__int64 *a1, char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *v4; // r8
  char *v6; // r12
  __int64 v7; // rbp
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  __int64 v12; // rax
  char *v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rsi
  size_t v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rsi
  __m128i *v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __m128i v25; // xmm0
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __m128i v29; // xmm2
  __m128i v30; // xmm7
  __m128i v31; // xmm3
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm0
  __m128i v35; // xmm7
  __m128i v36; // xmm8
  __m128i v37; // xmm3
  __m128i v38; // xmm8
  __m128i v39; // xmm7
  __m128i v40; // xmm3
  __m128i v41; // xmm1
  __m128i v42; // xmm7
  __m128i v43; // xmm3
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __m128i v46; // xmm3
  __m128i v47; // xmm1
  __int64 v48; // rcx
  char *v49; // rax
  char *v50; // rbx
  unsigned __int64 v51; // rdx
  const __m128i *v52; // rcx
  unsigned __int64 v53; // rdx
  __m128i v54; // xmm0
  __m128i v55; // xmm2
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __m128i v58; // xmm3
  __m128i v59; // xmm7
  __m128i v60; // xmm2
  __m128i v61; // xmm1
  __m128i v62; // xmm3
  __m128i v63; // xmm0
  __m128i v64; // xmm7
  __m128i v65; // xmm8
  __m128i v66; // xmm2
  __m128i v67; // xmm8
  __m128i v68; // xmm7
  __m128i v69; // xmm2
  __m128i v70; // xmm1
  __m128i v71; // xmm2
  __m128i v72; // xmm3
  __m128i v73; // xmm1
  unsigned __int64 v74; // rdx
  char *v75; // rsi
  _QWORD *v76; // rax
  __int64 k; // rax
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rdx
  const __m128i *v81; // rax
  __m128i v82; // xmm1
  __m128i v83; // xmm2
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  __m128i v86; // xmm3
  __m128i v87; // xmm7
  __m128i v88; // xmm2
  __m128i v89; // xmm0
  __m128i v90; // xmm3
  __m128i v91; // xmm1
  __m128i v92; // xmm7
  __m128i v93; // xmm8
  __m128i v94; // xmm2
  __m128i v95; // xmm8
  __m128i v96; // xmm7
  __m128i v97; // xmm2
  __m128i v98; // xmm0
  __m128i v99; // xmm2
  __m128i v100; // xmm7
  __m128i v101; // xmm0
  unsigned __int64 v102; // rdx
  char *v103; // rbx
  _QWORD *v104; // rax
  __int64 v105; // r10
  signed __int64 v106; // rax
  char *v107; // r15
  void *v108; // rdi
  __int64 v109; // r11
  unsigned __int64 v110; // rdx
  const __m128i *v111; // rdx
  __m128i *v112; // rax
  __m128i v113; // xmm1
  __m128i v114; // xmm2
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm2
  __m128i v118; // xmm7
  __m128i v119; // xmm3
  __m128i v120; // xmm0
  __m128i v121; // xmm2
  __m128i v122; // xmm1
  __m128i v123; // xmm7
  __m128i v124; // xmm8
  __m128i v125; // xmm3
  __m128i v126; // xmm8
  __m128i v127; // xmm7
  __m128i v128; // xmm3
  __m128i v129; // xmm0
  __m128i v130; // xmm7
  __m128i v131; // xmm3
  __m128i v132; // xmm0
  __m128i v133; // xmm2
  __m128i v134; // xmm3
  __m128i v135; // xmm0
  unsigned __int64 v136; // rdx
  char *v137; // rbx
  char *v138; // rax
  __int64 m; // rax
  __int64 i; // rax
  __int64 j; // rax
  size_t v142; // [rsp+8h] [rbp-60h]
  __int64 *v143; // [rsp+8h] [rbp-60h]
  __int64 v144; // [rsp+8h] [rbp-60h]
  __int64 *v145; // [rsp+8h] [rbp-60h]
  char *v146; // [rsp+10h] [rbp-58h]
  char *v147; // [rsp+10h] [rbp-58h]
  char *v148; // [rsp+10h] [rbp-58h]
  __int64 v149; // [rsp+10h] [rbp-58h]
  __int64 *v150; // [rsp+18h] [rbp-50h]
  char *v151; // [rsp+18h] [rbp-50h]
  int v152; // [rsp+20h] [rbp-48h]
  signed __int64 v153; // [rsp+20h] [rbp-48h]
  __int64 v154; // [rsp+28h] [rbp-40h]

  v4 = a1;
  v6 = a2;
  v7 = a4 - a3;
  v9 = *((unsigned int *)a1 + 2);
  v10 = *a1;
  v11 = *((unsigned int *)a1 + 3);
  v12 = 8 * v9;
  v13 = &a2[-*a1];
  v14 = v9 + v7;
  v15 = *a1 + 8 * v9;
  if ( a2 == (char *)v15 )
  {
    if ( v11 < v14 )
    {
      v148 = &a2[-*a1];
      sub_2237220(a1, a1 + 2, v14, 8);
      v4 = a1;
      v13 = v148;
      v10 = *a1;
      v9 = *((unsigned int *)a1 + 2);
    }
    v79 = v10 + 8 * v9;
    if ( v7 <= 0 )
    {
      LODWORD(v9) = v7 + v9;
    }
    else
    {
      v9 += v7;
      if ( (a4 <= v79 || a3 >= v10 + 8 * v9) && (unsigned __int64)(v7 - 1) > 0xE )
      {
        v80 = v79;
        v81 = (const __m128i *)a3;
        do
        {
          v82 = _mm_loadu_si128(v81++);
          v80 += 128LL;
          v83 = _mm_cmpgt_epi8((__m128i)0LL, v82);
          v84 = _mm_unpacklo_epi8(v82, v83);
          v85 = _mm_unpackhi_epi8(v82, v83);
          v86 = _mm_cmpgt_epi16((__m128i)0LL, v84);
          v87 = _mm_cmpgt_epi16((__m128i)0LL, v85);
          v88 = _mm_unpacklo_epi16(v84, v86);
          v89 = _mm_unpackhi_epi16(v84, v86);
          v90 = _mm_unpacklo_epi16(v85, v87);
          v91 = _mm_unpackhi_epi16(v85, v87);
          v92 = _mm_cmpgt_epi32((__m128i)0LL, v88);
          v93 = v88;
          v94 = _mm_unpackhi_epi32(v88, v92);
          v95 = _mm_unpacklo_epi32(v93, v92);
          v96 = v89;
          *(__m128i *)(v80 - 112) = v94;
          v97 = _mm_cmpgt_epi32((__m128i)0LL, v89);
          *(__m128i *)(v80 - 128) = v95;
          *(__m128i *)(v80 - 80) = _mm_unpackhi_epi32(v89, v97);
          v98 = _mm_cmpgt_epi32((__m128i)0LL, v90);
          *(__m128i *)(v80 - 96) = _mm_unpacklo_epi32(v96, v97);
          v99 = _mm_unpacklo_epi32(v90, v98);
          v100 = _mm_unpackhi_epi32(v90, v98);
          v101 = _mm_cmpgt_epi32((__m128i)0LL, v91);
          *(__m128i *)(v80 - 64) = v99;
          *(__m128i *)(v80 - 48) = v100;
          *(__m128i *)(v80 - 32) = _mm_unpacklo_epi32(v91, v101);
          *(__m128i *)(v80 - 16) = _mm_unpackhi_epi32(v91, v101);
        }
        while ( v81 != (const __m128i *)(a3 + (v7 & 0xFFFFFFFFFFFFFFF0LL)) );
        v102 = v7 - (v7 & 0xFFFFFFFFFFFFFFF0LL);
        v103 = (char *)((v7 & 0xFFFFFFFFFFFFFFF0LL) + a3);
        v104 = (_QWORD *)(v79 + 8 * (v7 & 0xFFFFFFFFFFFFFFF0LL));
        if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != v7 )
        {
          *v104 = *v103;
          if ( v102 != 1 )
          {
            v104[1] = v103[1];
            if ( v102 != 2 )
            {
              v104[2] = v103[2];
              if ( v102 != 3 )
              {
                v104[3] = v103[3];
                if ( v102 != 4 )
                {
                  v104[4] = v103[4];
                  if ( v102 != 5 )
                  {
                    v104[5] = v103[5];
                    if ( v102 != 6 )
                    {
                      v104[6] = v103[6];
                      if ( v102 != 7 )
                      {
                        v104[7] = v103[7];
                        if ( v102 != 8 )
                        {
                          v104[8] = v103[8];
                          if ( v102 != 9 )
                          {
                            v104[9] = v103[9];
                            if ( v102 != 10 )
                            {
                              v104[10] = v103[10];
                              if ( v102 != 11 )
                              {
                                v104[11] = v103[11];
                                if ( v102 != 12 )
                                {
                                  v104[12] = v103[12];
                                  if ( v102 != 13 )
                                  {
                                    v104[13] = v103[13];
                                    if ( v102 != 14 )
                                      v104[14] = v103[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        for ( i = 0; i != v7; ++i )
          *(_QWORD *)(v79 + 8 * i) = *(char *)(a3 + i);
      }
    }
    *((_DWORD *)v4 + 2) = v9;
    return &v13[v10];
  }
  else
  {
    v16 = *a1;
    v17 = v9;
    if ( v11 < v14 )
    {
      v146 = v13;
      v143 = v4;
      sub_2237220(v4, v4 + 2, v14, 8);
      v4 = v143;
      v13 = v146;
      v17 = *((unsigned int *)v143 + 2);
      v16 = *v143;
      v12 = 8 * v17;
      v6 = &v146[*v143];
      v15 = *v143 + 8 * v17;
    }
    v18 = v12 - (_QWORD)v13;
    v19 = (v12 - (__int64)v13) >> 3;
    if ( v19 >= v7 )
    {
      v105 = 8 * (v17 - v7);
      v106 = v12 - v105;
      v107 = (char *)(v16 + v105);
      v108 = (void *)v15;
      v109 = v106 >> 3;
      v110 = (v106 >> 3) + v17;
      if ( v110 > *((unsigned int *)v4 + 3) )
      {
        v154 = v106 >> 3;
        v153 = v106;
        v151 = v13;
        v149 = 8 * (v17 - v7);
        v145 = v4;
        sub_2237220(v4, v4 + 2, v110, 8);
        v4 = v145;
        LODWORD(v109) = v154;
        v106 = v153;
        v13 = v151;
        v17 = *((unsigned int *)v145 + 2);
        v105 = v149;
        v108 = (void *)(*v145 + 8 * v17);
      }
      if ( v107 != (char *)v15 )
      {
        v152 = v109;
        v150 = v4;
        v147 = v13;
        v144 = v105;
        memmove(v108, v107, v106);
        v4 = v150;
        LODWORD(v109) = v152;
        v13 = v147;
        v105 = v144;
        LODWORD(v17) = *((_DWORD *)v150 + 2);
      }
      *((_DWORD *)v4 + 2) = v109 + v17;
      if ( v107 != v6 )
        memmove((void *)(v15 - (v105 - (_QWORD)v13)), v6, v105 - (_QWORD)v13);
      if ( v7 > 0 )
      {
        if ( (a4 <= (unsigned __int64)v6 || a3 >= (unsigned __int64)&v6[8 * v7]) && (unsigned __int64)(v7 - 1) > 0xE )
        {
          v111 = (const __m128i *)a3;
          v112 = (__m128i *)v6;
          do
          {
            v113 = _mm_loadu_si128(v111++);
            v112 += 8;
            v114 = _mm_cmpgt_epi8((__m128i)0LL, v113);
            v115 = _mm_unpacklo_epi8(v113, v114);
            v116 = _mm_unpackhi_epi8(v113, v114);
            v117 = _mm_cmpgt_epi16((__m128i)0LL, v115);
            v118 = _mm_cmpgt_epi16((__m128i)0LL, v116);
            v119 = _mm_unpacklo_epi16(v115, v117);
            v120 = _mm_unpackhi_epi16(v115, v117);
            v121 = _mm_unpacklo_epi16(v116, v118);
            v122 = _mm_unpackhi_epi16(v116, v118);
            v123 = _mm_cmpgt_epi32((__m128i)0LL, v119);
            v124 = v119;
            v125 = _mm_unpackhi_epi32(v119, v123);
            v126 = _mm_unpacklo_epi32(v124, v123);
            v127 = v120;
            v112[-7] = v125;
            v128 = _mm_cmpgt_epi32((__m128i)0LL, v120);
            v112[-8] = v126;
            v129 = _mm_unpackhi_epi32(v120, v128);
            v130 = _mm_unpacklo_epi32(v127, v128);
            v131 = v121;
            v112[-5] = v129;
            v132 = _mm_cmpgt_epi32((__m128i)0LL, v121);
            v112[-6] = v130;
            v133 = _mm_unpackhi_epi32(v121, v132);
            v134 = _mm_unpacklo_epi32(v131, v132);
            v135 = _mm_cmpgt_epi32((__m128i)0LL, v122);
            v112[-3] = v133;
            v112[-4] = v134;
            v112[-2] = _mm_unpacklo_epi32(v122, v135);
            v112[-1] = _mm_unpackhi_epi32(v122, v135);
          }
          while ( v111 != (const __m128i *)(a3 + (v7 & 0xFFFFFFFFFFFFFFF0LL)) );
          v136 = v7 - (v7 & 0xFFFFFFFFFFFFFFF0LL);
          v137 = (char *)((v7 & 0xFFFFFFFFFFFFFFF0LL) + a3);
          v138 = &v6[8 * (v7 & 0xFFFFFFFFFFFFFFF0LL)];
          if ( v7 != (v7 & 0xFFFFFFFFFFFFFFF0LL) )
          {
            *(_QWORD *)v138 = *v137;
            if ( v136 != 1 )
            {
              *((_QWORD *)v138 + 1) = v137[1];
              if ( v136 != 2 )
              {
                *((_QWORD *)v138 + 2) = v137[2];
                if ( v136 != 3 )
                {
                  *((_QWORD *)v138 + 3) = v137[3];
                  if ( v136 != 4 )
                  {
                    *((_QWORD *)v138 + 4) = v137[4];
                    if ( v136 != 5 )
                    {
                      *((_QWORD *)v138 + 5) = v137[5];
                      if ( v136 != 6 )
                      {
                        *((_QWORD *)v138 + 6) = v137[6];
                        if ( v136 != 7 )
                        {
                          *((_QWORD *)v138 + 7) = v137[7];
                          if ( v136 != 8 )
                          {
                            *((_QWORD *)v138 + 8) = v137[8];
                            if ( v136 != 9 )
                            {
                              *((_QWORD *)v138 + 9) = v137[9];
                              if ( v136 != 10 )
                              {
                                *((_QWORD *)v138 + 10) = v137[10];
                                if ( v136 != 11 )
                                {
                                  *((_QWORD *)v138 + 11) = v137[11];
                                  if ( v136 != 12 )
                                  {
                                    *((_QWORD *)v138 + 12) = v137[12];
                                    if ( v136 != 13 )
                                    {
                                      *((_QWORD *)v138 + 13) = v137[13];
                                      if ( v136 != 14 )
                                        *((_QWORD *)v138 + 14) = v137[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( j = 0; j != v7; ++j )
            *(_QWORD *)&v6[8 * j] = *(char *)(a3 + j);
        }
      }
    }
    else
    {
      *((_DWORD *)v4 + 2) = v7 + v17;
      if ( (char *)v15 != v6 )
      {
        v142 = v12 - (_QWORD)v13;
        memcpy((void *)(v16 + 8LL * (unsigned int)(v7 + v17) - v18), v6, v18);
        v18 = v142;
      }
      if ( v19 )
      {
        v20 = a3 + v19;
        if ( ((unsigned __int64)v6 >= a3 + v19 || a3 >= (unsigned __int64)&v6[v18]) && v19 - 1 > 0xE )
        {
          v21 = (__m128i *)v6;
          v22 = 0;
          v23 = ((v19 - 16) >> 4) + 1;
          do
          {
            v24 = v22++;
            v21 += 8;
            v25 = _mm_loadu_si128((const __m128i *)(a3 + 16 * v24));
            v26 = _mm_cmpgt_epi8((__m128i)0LL, v25);
            v27 = _mm_unpacklo_epi8(v25, v26);
            v28 = _mm_unpackhi_epi8(v25, v26);
            v29 = _mm_cmpgt_epi16((__m128i)0LL, v27);
            v30 = _mm_cmpgt_epi16((__m128i)0LL, v28);
            v31 = _mm_unpacklo_epi16(v27, v29);
            v32 = _mm_unpackhi_epi16(v27, v29);
            v33 = _mm_unpacklo_epi16(v28, v30);
            v34 = _mm_unpackhi_epi16(v28, v30);
            v35 = _mm_cmpgt_epi32((__m128i)0LL, v31);
            v36 = v31;
            v37 = _mm_unpackhi_epi32(v31, v35);
            v38 = _mm_unpacklo_epi32(v36, v35);
            v39 = v32;
            v21[-7] = v37;
            v40 = _mm_cmpgt_epi32((__m128i)0LL, v32);
            v21[-8] = v38;
            v41 = _mm_unpackhi_epi32(v32, v40);
            v42 = _mm_unpacklo_epi32(v39, v40);
            v43 = v33;
            v21[-5] = v41;
            v44 = _mm_cmpgt_epi32((__m128i)0LL, v33);
            v21[-6] = v42;
            v45 = _mm_unpackhi_epi32(v33, v44);
            v46 = _mm_unpacklo_epi32(v43, v44);
            v47 = _mm_cmpgt_epi32((__m128i)0LL, v34);
            v21[-3] = v45;
            v21[-4] = v46;
            v21[-2] = _mm_unpacklo_epi32(v34, v47);
            v21[-1] = _mm_unpackhi_epi32(v34, v47);
          }
          while ( v23 > v22 );
          v48 = 16 * v23;
          v49 = &v6[128 * v23];
          v50 = (char *)(v48 + a3);
          v51 = v19 - v48;
          if ( v19 != v48 )
          {
            *(_QWORD *)v49 = *v50;
            if ( v51 != 1 )
            {
              *((_QWORD *)v49 + 1) = v50[1];
              if ( v51 != 2 )
              {
                *((_QWORD *)v49 + 2) = v50[2];
                if ( v51 != 3 )
                {
                  *((_QWORD *)v49 + 3) = v50[3];
                  if ( v51 != 4 )
                  {
                    *((_QWORD *)v49 + 4) = v50[4];
                    if ( v51 != 5 )
                    {
                      *((_QWORD *)v49 + 5) = v50[5];
                      if ( v51 != 6 )
                      {
                        *((_QWORD *)v49 + 6) = v50[6];
                        if ( v51 != 7 )
                        {
                          *((_QWORD *)v49 + 7) = v50[7];
                          if ( v51 != 8 )
                          {
                            *((_QWORD *)v49 + 8) = v50[8];
                            if ( v51 != 9 )
                            {
                              *((_QWORD *)v49 + 9) = v50[9];
                              if ( v51 != 10 )
                              {
                                *((_QWORD *)v49 + 10) = v50[10];
                                if ( v51 != 11 )
                                {
                                  *((_QWORD *)v49 + 11) = v50[11];
                                  if ( v51 != 12 )
                                  {
                                    *((_QWORD *)v49 + 12) = v50[12];
                                    if ( v51 != 13 )
                                    {
                                      *((_QWORD *)v49 + 13) = v50[13];
                                      if ( v51 != 14 )
                                        *((_QWORD *)v49 + 14) = v50[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( k = 0; k != v19; ++k )
            *(_QWORD *)&v6[8 * k] = *(char *)(a3 + k);
        }
        v7 = a4 - v20;
      }
      else
      {
        v20 = a3;
      }
      if ( v7 > 0 )
      {
        if ( (v15 >= v20 + v7 || v20 >= v15 + 8 * v7) && (unsigned __int64)(v7 - 1) > 0xE )
        {
          v52 = (const __m128i *)v20;
          v53 = v15;
          do
          {
            v54 = _mm_loadu_si128(v52++);
            v53 += 128LL;
            v55 = _mm_cmpgt_epi8((__m128i)0LL, v54);
            v56 = _mm_unpacklo_epi8(v54, v55);
            v57 = _mm_unpackhi_epi8(v54, v55);
            v58 = _mm_cmpgt_epi16((__m128i)0LL, v56);
            v59 = _mm_cmpgt_epi16((__m128i)0LL, v57);
            v60 = _mm_unpacklo_epi16(v56, v58);
            v61 = _mm_unpackhi_epi16(v56, v58);
            v62 = _mm_unpacklo_epi16(v57, v59);
            v63 = _mm_unpackhi_epi16(v57, v59);
            v64 = _mm_cmpgt_epi32((__m128i)0LL, v60);
            v65 = v60;
            v66 = _mm_unpackhi_epi32(v60, v64);
            v67 = _mm_unpacklo_epi32(v65, v64);
            v68 = v61;
            *(__m128i *)(v53 - 112) = v66;
            v69 = _mm_cmpgt_epi32((__m128i)0LL, v61);
            *(__m128i *)(v53 - 128) = v67;
            *(__m128i *)(v53 - 80) = _mm_unpackhi_epi32(v61, v69);
            v70 = _mm_cmpgt_epi32((__m128i)0LL, v62);
            *(__m128i *)(v53 - 96) = _mm_unpacklo_epi32(v68, v69);
            v71 = _mm_unpacklo_epi32(v62, v70);
            v72 = _mm_unpackhi_epi32(v62, v70);
            v73 = _mm_cmpgt_epi32((__m128i)0LL, v63);
            *(__m128i *)(v53 - 64) = v71;
            *(__m128i *)(v53 - 48) = v72;
            *(__m128i *)(v53 - 32) = _mm_unpacklo_epi32(v63, v73);
            *(__m128i *)(v53 - 16) = _mm_unpackhi_epi32(v63, v73);
          }
          while ( v52 != (const __m128i *)(v20 + (v7 & 0xFFFFFFFFFFFFFFF0LL)) );
          v74 = v7 - (v7 & 0xFFFFFFFFFFFFFFF0LL);
          v75 = (char *)((v7 & 0xFFFFFFFFFFFFFFF0LL) + v20);
          v76 = (_QWORD *)(v15 + 8 * (v7 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v7 != (v7 & 0xFFFFFFFFFFFFFFF0LL) )
          {
            *v76 = *v75;
            if ( v74 != 1 )
            {
              v76[1] = v75[1];
              if ( v74 != 2 )
              {
                v76[2] = v75[2];
                if ( v74 != 3 )
                {
                  v76[3] = v75[3];
                  if ( v74 != 4 )
                  {
                    v76[4] = v75[4];
                    if ( v74 != 5 )
                    {
                      v76[5] = v75[5];
                      if ( v74 != 6 )
                      {
                        v76[6] = v75[6];
                        if ( v74 != 7 )
                        {
                          v76[7] = v75[7];
                          if ( v74 != 8 )
                          {
                            v76[8] = v75[8];
                            if ( v74 != 9 )
                            {
                              v76[9] = v75[9];
                              if ( v74 != 10 )
                              {
                                v76[10] = v75[10];
                                if ( v74 != 11 )
                                {
                                  v76[11] = v75[11];
                                  if ( v74 != 12 )
                                  {
                                    v76[12] = v75[12];
                                    if ( v74 != 13 )
                                    {
                                      v76[13] = v75[13];
                                      if ( v74 != 14 )
                                        v76[14] = v75[14];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          for ( m = 0; m != v7; ++m )
            *(_QWORD *)(v15 + 8 * m) = *(char *)(v20 + m);
        }
      }
    }
    return v6;
  }
}
