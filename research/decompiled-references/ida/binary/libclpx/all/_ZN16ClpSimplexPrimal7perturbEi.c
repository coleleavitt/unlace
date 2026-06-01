void __fastcall ClpSimplexPrimal::perturb(ClpSimplexPrimal *this, int a2)
{
  int v2; // ebp
  int v3; // r12d
  ClpSimplexPrimal *v4; // rbx
  ClpNonLinearCost *v5; // rdi
  __m128d v6; // xmm4
  int v7; // ecx
  int v8; // edx
  double v9; // xmm2_8
  double v10; // xmm6_8
  __int64 v11; // r8
  int v12; // edi
  __m128d v13; // xmm7
  int v14; // esi
  int v15; // r11d
  __int64 v16; // rcx
  double v17; // xmm6_8
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // xmm1_8
  double v21; // xmm0_8
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm2_8
  double v25; // xmm6_8
  __int64 v26; // xmm14_8
  __int64 v27; // xmm15_8
  double v28; // xmm11_8
  __int64 v29; // rcx
  _BYTE *v30; // r9
  __int64 v31; // r10
  unsigned int v32; // eax
  int v33; // r13d
  int v34; // edx
  __m128i v35; // xmm2
  int v36; // r11d
  __m128i si128; // xmm13
  const __m128i *v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // r10d
  __m128i v41; // xmm9
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __m128i v45; // xmm3
  __m128i v46; // xmm0
  __m128i v47; // xmm5
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm2
  __int64 v51; // rdx
  int v52; // eax
  bool v53; // cl
  char v54; // r8
  CoinMessageHandler *v55; // rax
  CoinMessageHandler *v56; // rax
  CoinMessageHandler *v57; // rax
  CoinMessageHandler *v58; // rax
  CoinMessageHandler *v59; // rax
  __int64 v60; // rax
  int v61; // edi
  __int64 v62; // rax
  int v63; // r15d
  double *v64; // r14
  __m128d v65; // xmm4
  __m128d v66; // xmm8
  __int64 v67; // rsi
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  double v70; // xmm0_8
  double v71; // xmm1_8
  __m128d v72; // xmm5
  double v73; // xmm0_8
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  double *v76; // r13
  double *v77; // rcx
  double v78; // xmm3_8
  double v79; // xmm1_8
  double v80; // xmm0_8
  double *v81; // rax
  int v82; // esi
  double *v83; // rax
  double *v84; // rax
  int v85; // edx
  double v86; // xmm0_8
  double v87; // xmm0_8
  double v88; // xmm8_8
  bool v89; // di
  __int64 v90; // rcx
  __int64 v91; // rax
  double v92; // xmm5_8
  double v93; // xmm9_8
  double v94; // xmm14_8
  double *v95; // r9
  double *v96; // rdx
  double v97; // xmm2_8
  double v98; // xmm10_8
  double v99; // xmm13_8
  double v100; // xmm12_8
  int v101; // r8d
  double v102; // xmm0_8
  __int64 v103; // rdx
  char v104; // al
  double *v105; // r9
  double *v106; // rdx
  unsigned __int64 v107; // xmm5_8
  double *v108; // rcx
  double v109; // xmm9_8
  __int64 v110; // r10
  double v111; // xmm13_8
  double v112; // xmm11_8
  double v113; // xmm12_8
  double v114; // xmm1_8
  double v115; // xmm2_8
  int v116; // r12d
  int v117; // eax
  double v118; // xmm0_8
  double v119; // xmm0_8
  double v120; // xmm6_8
  double v121; // xmm12_8
  double v122; // xmm6_8
  double v123; // xmm0_8
  __int64 v124; // rax
  __int64 v125; // r8
  int v126; // edx
  __int64 v127; // r11
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // r10
  __int64 v131; // r9
  __int64 v132; // rcx
  double v133; // xmm15_8
  __int64 v134; // r8
  __int64 v135; // rcx
  double v136; // xmm1_8
  double v137; // xmm0_8
  __m128d v138; // xmm2
  double v139; // xmm2_8
  double v140; // xmm11_8
  double v141; // xmm2_8
  double v142; // xmm14_8
  double v143; // xmm13_8
  double v144; // xmm11_8
  double v145; // xmm2_8
  double *v146; // r9
  double v147; // xmm1_8
  double v148; // xmm0_8
  double *v149; // rax
  double v150; // xmm1_8
  double *v151; // rax
  double v152; // xmm0_8
  double v153; // [rsp+0h] [rbp-A8h]
  double *v154; // [rsp+0h] [rbp-A8h]
  double *v155; // [rsp+0h] [rbp-A8h]
  __m128d v156; // [rsp+0h] [rbp-A8h]
  double *v157; // [rsp+0h] [rbp-A8h]
  double v158; // [rsp+18h] [rbp-90h]
  double v159; // [rsp+18h] [rbp-90h]
  __m128d v160; // [rsp+20h] [rbp-88h]
  __m128d v161; // [rsp+20h] [rbp-88h]
  __m128d v162; // [rsp+20h] [rbp-88h]
  __m128d v163; // [rsp+20h] [rbp-88h]
  double *v164; // [rsp+48h] [rbp-60h]
  __int64 v165; // [rsp+50h] [rbp-58h] BYREF
  __int64 v166; // [rsp+58h] [rbp-50h] BYREF
  double v167; // [rsp+60h] [rbp-48h] BYREF
  double v168[8]; // [rsp+68h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 327);
  if ( v2 <= 100 )
  {
    if ( v2 == 100 )
    {
      v3 = a2;
      v82 = *((_DWORD *)this + 77);
      *((_DWORD *)this + 327) = 50;
      v2 = 50;
      v4 = this;
      if ( v82 )
      {
LABEL_4:
        v5 = *((ClpNonLinearCost **)v4 + 165);
        if ( !v5 )
        {
LABEL_6:
          (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, double *, double *))(**((_QWORD **)v4 + 24) + 200LL))(
            *((_QWORD *)v4 + 24),
            &v165,
            &v166,
            &v167,
            v168);
          v6 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
          v7 = *((_DWORD *)v4 + 77);
          v8 = *((_DWORD *)v4 + 327);
          v9 = fmax(COERCE_DOUBLE(v166 & *(_QWORD *)&v6.m128d_f64[0]), v168[0]);
          v10 = fmin(COERCE_DOUBLE(v165 & *(_QWORD *)&v6.m128d_f64[0]), v167);
          v168[0] = v9;
          v167 = v10;
          if ( v7 || v8 != 50 )
          {
LABEL_7:
            if ( v8 <= 49 )
            {
              v162 = v6;
              v87 = pow(10.0, (double)v8);
              v11 = *((int *)v4 + 27);
              v12 = *((_DWORD *)v4 + 26);
              v25 = v87;
              *(double *)&v27 = 1.0;
              v153 = 0.1;
              v14 = v11 + v12;
              v13.m128d_f64[0] = *((double *)v4 + 110);
              *(double *)&v26 = 0.01;
              v28 = 1.0;
              v6 = v162;
              goto LABEL_28;
            }
            v11 = *((int *)v4 + 27);
            v12 = *((_DWORD *)v4 + 26);
            v13.m128d_f64[0] = *((double *)v4 + 110);
            v14 = v12 + v11;
            if ( v12 + (int)v11 <= 0 )
              goto LABEL_89;
            v15 = 0;
            v16 = 8LL * (unsigned int)(v14 - 1) + 8;
            v17 = 0.0001;
            v18 = 0;
            while ( 1 )
            {
              while ( 1 )
              {
                v22 = *(double *)(*((_QWORD *)v4 + 123) + v18);
                v23 = *(double *)(*((_QWORD *)v4 + 126) + v18);
                if ( v23 > v22 + v13.m128d_f64[0] )
                  break;
LABEL_15:
                v18 += 8;
                if ( v18 == v16 )
                  goto LABEL_21;
              }
              v24 = v23 - v22;
              if ( v22 > -1.0e20 )
                break;
              if ( v23 < 1.0e20 )
              {
                v19 = 0;
LABEL_85:
                v20 = *(_QWORD *)&v23 & *(_QWORD *)&v6.m128d_f64[0];
                goto LABEL_12;
              }
              v21 = v23 - v22;
              if ( v24 <= 0.0 )
                goto LABEL_13;
              v18 += 8;
              if ( v18 == v16 )
              {
LABEL_21:
                if ( v15 )
                {
                  v25 = v17 / (double)v15;
                  if ( (unsigned int)(v8 - 51) > 3 )
                    goto LABEL_23;
LABEL_90:
                  v28 = 0.25;
                  v25 = v25 * 0.25;
                  if ( v8 != 54 )
                  {
                    v25 = v25 * 0.25;
                    if ( v8 == 53 )
                    {
                      v28 = 0.0625;
                    }
                    else
                    {
                      v25 = v25 * 0.25;
                      if ( v8 == 52 )
                      {
                        v28 = 0.015625;
                      }
                      else
                      {
                        v25 = v25 * 0.25;
                        v28 = 0.00390625;
                      }
                    }
                  }
                  *((_DWORD *)v4 + 327) = 55;
                  *(double *)&v26 = 0.0000001;
                  v153 = 0.000001;
                  *(double *)&v27 = 0.00001;
                  goto LABEL_28;
                }
LABEL_89:
                v25 = 0.1;
                if ( (unsigned int)(v8 - 51) <= 3 )
                  goto LABEL_90;
LABEL_23:
                if ( (unsigned int)(v8 - 55) <= 4 )
                {
                  for ( ; v8 != 55; v25 = v25 * 4.0 )
                    --v8;
                  *((_DWORD *)v4 + 327) = 50;
                }
                *(double *)&v26 = 0.0000001;
                v153 = 0.000001;
                *(double *)&v27 = 0.00001;
                v28 = 1.0;
LABEL_28:
                if ( v12 <= 0 )
                {
                  v52 = 0;
                }
                else
                {
                  v29 = *((_QWORD *)v4 + 33);
                  v30 = (_BYTE *)(v29 + (int)v11);
                  v31 = -((_DWORD)v29 + (_DWORD)v11) & 0xF;
                  v32 = v31 + 15;
                  if ( (unsigned int)(v31 + 15) < 0x11 )
                    v32 = 17;
                  if ( v32 > v12 - 1 )
                  {
                    LODWORD(v51) = 0;
                    v52 = 0;
                    goto LABEL_51;
                  }
                  if ( (_DWORD)v31 )
                  {
                    v33 = (*v30 & 7) == 1;
                    if ( (_DWORD)v31 == 1 )
                    {
                      v34 = 1;
                    }
                    else
                    {
                      v33 += (*(_BYTE *)(v29 + (int)v11 + 1) & 7) == 1;
                      if ( (_DWORD)v31 == 2 )
                      {
                        v34 = 2;
                      }
                      else
                      {
                        v33 += (*(_BYTE *)(v29 + (int)v11 + 2) & 7) == 1;
                        if ( (_DWORD)v31 == 3 )
                        {
                          v34 = 3;
                        }
                        else
                        {
                          v33 += (*(_BYTE *)(v29 + (int)v11 + 3) & 7) == 1;
                          if ( (_DWORD)v31 == 4 )
                          {
                            v34 = 4;
                          }
                          else
                          {
                            v33 += (*(_BYTE *)(v29 + (int)v11 + 4) & 7) == 1;
                            if ( (_DWORD)v31 == 5 )
                            {
                              v34 = 5;
                            }
                            else
                            {
                              v33 += (*(_BYTE *)(v29 + (int)v11 + 5) & 7) == 1;
                              if ( (_DWORD)v31 == 6 )
                              {
                                v34 = 6;
                              }
                              else
                              {
                                v33 += (*(_BYTE *)(v29 + (int)v11 + 6) & 7) == 1;
                                if ( (_DWORD)v31 == 7 )
                                {
                                  v34 = 7;
                                }
                                else
                                {
                                  v33 += (*(_BYTE *)(v29 + (int)v11 + 7) & 7) == 1;
                                  if ( (_DWORD)v31 == 8 )
                                  {
                                    v34 = 8;
                                  }
                                  else
                                  {
                                    v33 += (*(_BYTE *)(v29 + (int)v11 + 8) & 7) == 1;
                                    if ( (_DWORD)v31 == 9 )
                                    {
                                      v34 = 9;
                                    }
                                    else
                                    {
                                      v33 += (*(_BYTE *)(v29 + (int)v11 + 9) & 7) == 1;
                                      if ( (_DWORD)v31 == 10 )
                                      {
                                        v34 = 10;
                                      }
                                      else
                                      {
                                        v33 += (*(_BYTE *)(v29 + (int)v11 + 10) & 7) == 1;
                                        if ( (_DWORD)v31 == 11 )
                                        {
                                          v34 = 11;
                                        }
                                        else
                                        {
                                          v33 += (*(_BYTE *)(v29 + (int)v11 + 11) & 7) == 1;
                                          if ( (_DWORD)v31 == 12 )
                                          {
                                            v34 = 12;
                                          }
                                          else
                                          {
                                            v33 += (*(_BYTE *)(v29 + (int)v11 + 12) & 7) == 1;
                                            if ( (_DWORD)v31 == 13 )
                                            {
                                              v34 = 13;
                                            }
                                            else
                                            {
                                              v33 += (*(_BYTE *)(v29 + (int)v11 + 13) & 7) == 1;
                                              if ( (_DWORD)v31 == 14 )
                                              {
                                                v34 = 14;
                                              }
                                              else
                                              {
                                                v34 = 15;
                                                v33 += (*(_BYTE *)(v29 + (int)v11 + 14) & 7) == 1;
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
                    v34 = 0;
                    v33 = 0;
                  }
                  v35 = 0;
                  v36 = v12 - v31;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_290800);
                  v38 = (const __m128i *)((int)v11 + v31 + v29);
                  v39 = (unsigned int)(v12 - v31) >> 4;
                  v40 = 0;
                  v41 = _mm_load_si128((const __m128i *)&xmmword_28D010);
                  do
                  {
                    v42 = _mm_load_si128(v38);
                    ++v40;
                    ++v38;
                    v43 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(v42, si128), v41), v41);
                    v44 = _mm_cmpgt_epi8((__m128i)0LL, v43);
                    v45 = _mm_unpacklo_epi8(v43, v44);
                    v46 = _mm_unpackhi_epi8(v43, v44);
                    v47 = _mm_cmpgt_epi16((__m128i)0LL, v45);
                    v48 = _mm_add_epi32(_mm_add_epi32(_mm_unpacklo_epi16(v45, v47), v35), _mm_unpackhi_epi16(v45, v47));
                    v49 = _mm_cmpgt_epi16((__m128i)0LL, v46);
                    v35 = _mm_add_epi32(_mm_add_epi32(v48, _mm_unpacklo_epi16(v46, v49)), _mm_unpackhi_epi16(v46, v49));
                  }
                  while ( v39 > v40 );
                  v50 = _mm_add_epi32(v35, _mm_srli_si128(v35, 8));
                  LODWORD(v51) = (v36 & 0xFFFFFFF0) + v34;
                  v52 = v33 + _mm_cvtsi128_si32(_mm_add_epi32(v50, _mm_srli_si128(v50, 4)));
                  if ( (v36 & 0xFFFFFFF0) != v36 )
                  {
LABEL_51:
                    v51 = (int)v51;
                    do
                    {
                      v53 = (v30[v51++] & 7) == 1;
                      v52 += v53;
                    }
                    while ( v12 > (int)v51 );
                  }
                }
                if ( *((double *)v4 + 12) <= 100.0 )
                {
                  *(double *)&v26 = v153;
                  v153 = *(double *)&v27;
                }
                if ( v2 == 51 )
                {
                  v153 = *(double *)&v26;
                  v25 = fmin(0.1, v25);
                }
                v88 = v13.m128d_f64[0] * 10.0;
                v89 = v3 == 1 || v52 != v12;
                if ( v89 )
                {
                  if ( v14 <= 0 )
                    goto LABEL_131;
                  v90 = *((_QWORD *)v4 + 33);
                  v91 = 0;
                  v92 = 0.0;
                  v93 = 0.0;
                  v94 = 0.0;
                  while ( 2 )
                  {
                    if ( (*(_BYTE *)(v90 + v91) & 7) == 1 )
                    {
                      v95 = (double *)(8 * v91 + *((_QWORD *)v4 + 123));
                      v96 = (double *)(*((_QWORD *)v4 + 126) + 8 * v91);
                      v97 = *v95;
                      v98 = *v96;
                      if ( *v96 > *v95 + v88 )
                      {
                        v99 = *(double *)(*((_QWORD *)v4 + 150) + 8 * v91);
                        v100 = COERCE_DOUBLE(*(_QWORD *)&v99 & *(_QWORD *)&v6.m128d_f64[0]) + 1.0;
                        v101 = 1664525 * *((_DWORD *)v4 + 89) + 1013904223;
                        *((_DWORD *)v4 + 89) = v101;
                        v102 = (double)v101
                             * 2.328306436538696e-10
                             * fmax(fmin(v153 * (fmin(fmin(v98 - v97, v25), v100) + v28), 0.1), v13.m128d_f64[0]);
                        if ( v102 == 0.0 )
                        {
                          if ( v13.m128d_f64[0] >= v99 - v97 )
                            goto LABEL_121;
LABEL_129:
                          if ( v13.m128d_f64[0] >= v98 - v99 )
                          {
                            *v96 = v98 + v102;
                            goto LABEL_122;
                          }
                        }
                        else
                        {
                          while ( v88 > v102 )
                            v102 = v102 * 3.0;
                          if ( v13.m128d_f64[0] < v99 - v97 )
                            goto LABEL_129;
LABEL_121:
                          *v95 = v97 - v102;
LABEL_122:
                          v90 = *((_QWORD *)v4 + 33);
                          if ( v102 != 0.0 )
                          {
                            if ( v99 == 0.0 )
                            {
                              v94 = fmax(v94, v102);
                            }
                            else
                            {
                              v93 = fmax(v93, v102);
                              if ( v102 > v100 * v92 )
                                v92 = v102 / v100;
                            }
                          }
                        }
                      }
                    }
                    if ( ++v91 == (unsigned int)(v14 - 1) + 1LL )
                    {
                      v89 = v94 != 0.0;
                      v54 = v93 != 0.0;
LABEL_133:
                      v103 = 0;
                      while ( 1 )
                      {
                        v104 = *(_BYTE *)(v90 + v103) & 7;
                        if ( v104 == 3 || v104 == 5 )
                        {
                          *(_QWORD *)(*((_QWORD *)v4 + 150) + 8 * v103) = *(_QWORD *)(*((_QWORD *)v4 + 123) + 8 * v103);
                        }
                        else if ( v104 == 2 )
                        {
                          *(_QWORD *)(*((_QWORD *)v4 + 150) + 8 * v103) = *(_QWORD *)(*((_QWORD *)v4 + 126) + 8 * v103);
                        }
                        if ( v14 <= (int)++v103 )
                          break;
                        v90 = *((_QWORD *)v4 + 33);
                      }
                      v54 |= v89;
                      goto LABEL_55;
                    }
                    continue;
                  }
                }
                if ( (int)v11 <= 0 )
                {
                  v124 = 0;
                  *(double *)&v107 = 0.0;
                  v109 = 0.0;
                }
                else
                {
                  v105 = *((double **)v4 + 123);
                  v106 = *((double **)v4 + 126);
                  *(double *)&v107 = 0.0;
                  v108 = v105 + 1;
                  v109 = 0.0;
                  v110 = (__int64)&v105[(unsigned int)(v11 - 1) + 1];
                  v111 = v25;
                  while ( 1 )
                  {
                    v114 = *v105;
                    v115 = *v106;
                    if ( *v106 > *v105 + v13.m128d_f64[0] )
                    {
                      v116 = 1664525 * *((_DWORD *)v4 + 89) + 1013904223;
                      v117 = 1664525 * v116 + 1013904223;
                      *((_DWORD *)v4 + 89) = v117;
                      v118 = (double)v117
                           * 2.328306436538696e-10
                           * (fmin(v153 * v111, 0.1)
                            * ((double)v116
                             * 2.328306436538696e-10));
                      if ( v2 != 50 && v13.m128d_f64[0] >= COERCE_DOUBLE(*(_QWORD *)&v118 & *(_QWORD *)&v6.m128d_f64[0])
                        || v118 == 0.0 )
                      {
                        v119 = v115;
                        v120 = v114;
                      }
                      else
                      {
                        v122 = fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v114 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001)
                             * v118;
                        if ( v88 >= v122 )
                        {
                          do
                          {
                            v122 = v122 * 10.0;
                            if ( v88 < v122 )
                              break;
                            v122 = v122 * 10.0;
                          }
                          while ( v88 >= v122 );
                        }
                        else
                        {
                          for ( ; v122 > 0.001; v122 = v122 * 0.1 )
                          {
                            v122 = v122 * 0.1;
                            if ( v122 <= 0.001 )
                              break;
                          }
                        }
                        if ( v114 == 0.0 || v114 <= -1.0e20 )
                          v120 = v114;
                        else
                          v120 = v114 - v122;
                        v123 = v118
                             * fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v115 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001);
                        if ( v88 >= v123 )
                        {
                          do
                          {
                            v123 = v123 * 10.0;
                            if ( v88 < v123 )
                              break;
                            v123 = v123 * 10.0;
                          }
                          while ( v88 >= v123 );
                        }
                        else
                        {
                          for ( ; v123 > 0.001; v123 = v123 * 0.1 )
                          {
                            v123 = v123 * 0.1;
                            if ( v123 <= 0.001 )
                              break;
                          }
                        }
                        if ( v115 >= 1.0e20 || v115 == 0.0 )
                          v119 = v115;
                        else
                          v119 = v123 + v115;
                      }
                      if ( v120 != v114 )
                      {
                        *(_QWORD *)&v121 = COERCE_UNSIGNED_INT64(v120 - v114) & *(_QWORD *)&v6.m128d_f64[0];
                        v109 = fmax(v109, v121);
                        if ( v121 > COERCE_DOUBLE(*(_QWORD *)&v114 & *(_QWORD *)&v6.m128d_f64[0]) * *(double *)&v107 )
                          v107 = COERCE_UNSIGNED_INT64((v120 - v114) / v114) & *(_QWORD *)&v6.m128d_f64[0];
                      }
                      if ( v119 == v115
                        || (*(_QWORD *)&v112 = COERCE_UNSIGNED_INT64(v119 - v115) & *(_QWORD *)&v6.m128d_f64[0],
                            v109 = fmax(v109, v112),
                            v112 <= COERCE_DOUBLE(*(_QWORD *)&v115 & *(_QWORD *)&v6.m128d_f64[0]) * *(double *)&v107) )
                      {
                        v115 = v119;
                        v114 = v120;
                      }
                      else
                      {
                        v113 = (v119 - v115) / v115;
                        v114 = v120;
                        v115 = v119;
                        v107 = *(_QWORD *)&v113 & *(_QWORD *)&v6.m128d_f64[0];
                      }
                    }
                    *v105 = v114;
                    ++v106;
                    v105 = v108;
                    *(v106 - 1) = v115;
                    if ( v108 == (double *)v110 )
                      break;
                    ++v108;
                  }
                  v25 = v111;
                  v124 = (int)v11;
                }
                v125 = 8 * v11;
                if ( (int)v124 >= v14 )
                  goto LABEL_199;
                v126 = *((_DWORD *)v4 + 89);
                v127 = 8LL * (unsigned int)(v14 - 1 - v124) + 8;
                v128 = 8 * v124;
                v129 = 0;
                v130 = v128 + *((_QWORD *)v4 + 123);
                v131 = v128 + *((_QWORD *)v4 + 126);
                v132 = v128 - v125;
                v133 = fmin(v153 * v25, 0.1);
                v134 = *((_QWORD *)v4 + 18) + v132;
                v135 = *((_QWORD *)v4 + 19) + v132;
                while ( 2 )
                {
                  v136 = *(double *)(v130 + v129);
                  v137 = *(double *)(v131 + v129);
                  v126 = 1664525 * v126 + 1013904223;
                  if ( *(double *)(v134 + v129) != *(double *)(v135 + v129) && v137 > v136 + v88 )
                  {
                    v138 = 0;
                    v138.m128d_f64[0] = (double)v126 * 2.328306436538696e-10 * v133;
                    if ( v2 != 50 )
                    {
                      *(_QWORD *)&v139 = *(_QWORD *)&v138.m128d_f64[0]
                                       & *(_QWORD *)&_mm_cmpgt_sd(_mm_and_pd(v138, v6), v13).m128d_f64[0];
                      v140 = *(double *)(v130 + v129);
                      if ( v136 > -1.0e20 && v136 != 0.0 )
                        v140 = v136
                             - fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v136 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001)
                             * v139;
                      if ( v137 == 0.0 || v137 >= 1.0e20 )
                        goto LABEL_190;
                      v141 = v139 * fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v137 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001)
                           + v137;
                      goto LABEL_191;
                    }
                    if ( v138.m128d_f64[0] != 0.0 )
                    {
                      v144 = fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v136 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001)
                           * v138.m128d_f64[0];
                      if ( v88 >= v144 )
                      {
                        do
                          v144 = v144 * 10.0;
                        while ( v88 >= v144 );
                      }
                      else
                      {
                        for ( ; v144 > 1.0; v144 = v144 * 0.1 )
                          ;
                      }
                      if ( v136 == 0.0 || v136 <= -1.0e20 )
                        v140 = *(double *)(v130 + v129);
                      else
                        v140 = v136 - v144;
                      v145 = v138.m128d_f64[0]
                           * fmax(0.01, COERCE_DOUBLE(*(_QWORD *)&v137 & *(_QWORD *)&v6.m128d_f64[0]) * 0.00001);
                      if ( v88 >= v145 )
                      {
                        do
                          v145 = v145 * 10.0;
                        while ( v88 >= v145 );
                      }
                      else
                      {
                        for ( ; v145 > 1.0; v145 = v145 * 0.1 )
                          ;
                      }
                      if ( v137 == 0.0 || v137 >= 1.0e20 )
LABEL_190:
                        v141 = *(double *)(v131 + v129);
                      else
                        v141 = v145 + v137;
LABEL_191:
                      if ( v140 != v136 )
                      {
                        *(_QWORD *)&v142 = COERCE_UNSIGNED_INT64(v140 - v136) & *(_QWORD *)&v6.m128d_f64[0];
                        v109 = fmax(v109, v142);
                        if ( v142 > COERCE_DOUBLE(*(_QWORD *)&v136 & *(_QWORD *)&v6.m128d_f64[0]) * *(double *)&v107 )
                          v107 = COERCE_UNSIGNED_INT64((v140 - v136) / v136) & *(_QWORD *)&v6.m128d_f64[0];
                      }
                      if ( v141 != v137 )
                      {
                        *(_QWORD *)&v143 = COERCE_UNSIGNED_INT64(v141 - v137) & *(_QWORD *)&v6.m128d_f64[0];
                        v109 = fmax(v109, v143);
                        if ( v143 > COERCE_DOUBLE(*(_QWORD *)&v137 & *(_QWORD *)&v6.m128d_f64[0]) * *(double *)&v107 )
                          v107 = COERCE_UNSIGNED_INT64((v141 - v137) / v137) & *(_QWORD *)&v6.m128d_f64[0];
                      }
                      *(double *)(v130 + v129) = v140;
                      *(double *)(v131 + v129) = v141;
                      v129 += 8;
                      if ( v129 == v127 )
                      {
                        *((_DWORD *)v4 + 89) = v126;
LABEL_199:
                        v54 = v109 != 0.0;
                        if ( v14 > 0 )
                        {
                          v90 = *((_QWORD *)v4 + 33);
                          v94 = 0.0;
                          goto LABEL_133;
                        }
                        v94 = 0.0;
LABEL_55:
                        if ( v54 )
                        {
                          v55 = (CoinMessageHandler *)CoinMessageHandler::message(
                                                        *((CoinMessageHandler **)v4 + 43),
                                                        16,
                                                        (ClpSimplexPrimal *)((char *)v4 + 416));
                          v56 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v55);
                          v57 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v56);
                          v58 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v57);
                          v59 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v58);
                          v60 = CoinMessageHandler::operator<<(v59);
                          CoinMessageHandler::operator<<(v60, 0, v94);
                          *((_DWORD *)v4 + 327) = 101;
                          return;
                        }
LABEL_131:
                        *((_DWORD *)v4 + 327) = 102;
                        return;
                      }
                      continue;
                    }
                  }
                  break;
                }
                v141 = *(double *)(v131 + v129);
                v140 = *(double *)(v130 + v129);
                goto LABEL_191;
              }
            }
            v19 = *(_QWORD *)&v22 & *(_QWORD *)&v6.m128d_f64[0];
            if ( v23 < 1.0e20 )
              goto LABEL_85;
            v20 = 0;
LABEL_12:
            v21 = fmin(fmax(*(double *)&v19, *(double *)&v20), v24);
LABEL_13:
            if ( v21 != 0.0 )
            {
              v17 = v17 + v21;
              ++v15;
            }
            goto LABEL_15;
          }
          v61 = *((_DWORD *)v4 + 26);
          if ( *((_DWORD *)v4 + 27) >= v61 )
            v61 = *((_DWORD *)v4 + 27);
          v160 = v6;
          if ( (unsigned __int64)v61 > 0xFFFFFFFFFFFFFFFLL )
            __cxa_throw_bad_array_new_length();
          v62 = operator new[](8LL * v61);
          v63 = *((_DWORD *)v4 + 26);
          v64 = (double *)v62;
          v65 = v160;
          if ( v63 > 0 )
          {
            v66.m128d_f64[0] = 1.0e20;
            v67 = *((_QWORD *)v4 + 18);
            v68 = *((_QWORD *)v4 + 19);
            v69 = 0;
            do
            {
              v70 = *(double *)(v67 + v69);
              v71 = *(double *)(v68 + v69);
              v72 = _mm_and_pd((__m128d)*(unsigned __int64 *)&v71, v160);
              if ( v70 == 0.0 || (*(_QWORD *)&v73 = *(_QWORD *)&v70 & *(_QWORD *)&v160.m128d_f64[0], v73 >= 1.0e20) )
              {
                v73 = 0.0;
                if ( v71 != 0.0 )
                  *(_QWORD *)&v73 = *(_QWORD *)&_mm_cmplt_sd(v72, v66).m128d_f64[0] & *(_QWORD *)&v72.m128d_f64[0];
              }
              else if ( v71 != 0.0 && v72.m128d_f64[0] < 1.0e20 )
              {
                v73 = (v73 + v72.m128d_f64[0]) * 0.5;
              }
              v64[v69 / 8] = v73;
              v69 += 8LL;
            }
            while ( v69 != 8LL * (unsigned int)(v63 - 1) + 8 );
          }
          v74 = v63;
          if ( &v64[v74] != v64 )
          {
            _BitScanReverse64(&v75, (v74 * 8) >> 3);
            v154 = &v64[v74];
            sub_16CBD0(v64, (char *)&v64[v74], 2 * (63LL - (int)(v75 ^ 0x3F)));
            v76 = v64 + 1;
            v77 = v154;
            v65 = v160;
            if ( (8LL * v63 - 128 < 0) ^ __OFADD__(-128, 8LL * v63) | (8LL * v63 == 128) )
            {
              v63 = *((_DWORD *)v4 + 26);
              v78 = *v64;
              if ( v154 != v64 + 1 )
              {
                do
                {
                  v79 = *v76;
                  if ( v78 > *v76 )
                  {
                    if ( v76 != v64 )
                    {
                      v158 = *v76;
                      v155 = v77;
                      v161 = v65;
                      memmove(v64 + 1, v64, (char *)v76 - (char *)v64);
                      v77 = v155;
                      v79 = v158;
                      v65 = v161;
                    }
                    v78 = v79;
                    *v64 = v79;
                  }
                  else
                  {
                    v80 = *(v76 - 1);
                    v81 = v76 - 1;
                    if ( v80 > v79 )
                    {
                      while ( 1 )
                      {
                        v81[1] = v80;
                        v80 = *(v81 - 1);
                        if ( v80 <= v79 )
                          break;
                        --v81;
                      }
                    }
                    else
                    {
                      v81 = v76;
                    }
                    *v81 = v79;
                    v78 = *v64;
                  }
                  ++v76;
                }
                while ( v77 != v76 );
              }
              goto LABEL_97;
            }
            v146 = v64 + 16;
            v164 = v154;
            do
            {
              v147 = *v76;
              if ( *v64 > *v76 )
              {
                if ( v76 != v64 )
                {
                  v159 = *v76;
                  v157 = v146;
                  v163 = v65;
                  memmove(v64 + 1, v64, (char *)v76 - (char *)v64);
                  v146 = v157;
                  v147 = v159;
                  v65 = v163;
                }
                *v64 = v147;
              }
              else
              {
                v148 = *(v76 - 1);
                v149 = v76 - 1;
                if ( v148 > v147 )
                {
                  while ( 1 )
                  {
                    v149[1] = v148;
                    v148 = *(v149 - 1);
                    if ( v148 <= v147 )
                      break;
                    --v149;
                  }
                }
                else
                {
                  v149 = v76;
                }
                *v149 = v147;
              }
              ++v76;
            }
            while ( v146 != v76 );
            v63 = *((_DWORD *)v4 + 26);
            if ( v164 != v146 )
            {
              do
              {
                while ( 1 )
                {
                  v150 = *v76;
                  v151 = v76 - 1;
                  v152 = *(v76 - 1);
                  if ( v152 > *v76 )
                    break;
                  v83 = v76++;
                  *v83 = v150;
                  if ( v164 == v76 )
                    goto LABEL_96;
                }
                while ( 1 )
                {
                  v151[1] = v152;
                  v152 = *(v151 - 1);
                  if ( v152 <= v150 )
                    break;
                  --v151;
                }
                ++v76;
                *v151 = v150;
              }
              while ( v164 != v76 );
            }
          }
LABEL_96:
          v78 = *v64;
LABEL_97:
          if ( v63 <= 1 )
            goto LABEL_104;
          v84 = v64 + 1;
          v85 = 1;
          do
          {
            v86 = *v84;
            if ( *v84 != v78 )
              ++v85;
            ++v84;
            v78 = v86;
          }
          while ( v84 != &v64[(unsigned int)(v63 - 2) + 2] );
          if ( v63 < 4 * v85 || v9 / v10 > 1.0e12 )
          {
LABEL_104:
            *((_DWORD *)v4 + 327) = 100;
            operator delete[](v64);
            return;
          }
          v156 = v65;
          operator delete[](v64);
          if ( *((int *)v4 + 27) < 0 )
          {
            *((_DWORD *)v4 + 327) = 100;
            return;
          }
          v8 = *((_DWORD *)v4 + 327);
          v6 = v156;
          goto LABEL_7;
        }
LABEL_5:
        ClpNonLinearCost::checkInfeasibilities(v5, 0.0);
        goto LABEL_6;
      }
    }
    else
    {
      v3 = a2;
      v4 = this;
      if ( *((_DWORD *)this + 77) )
        goto LABEL_4;
    }
    ClpSimplex::cleanStatus(this);
    v5 = *((ClpNonLinearCost **)v4 + 165);
    if ( !v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
}

