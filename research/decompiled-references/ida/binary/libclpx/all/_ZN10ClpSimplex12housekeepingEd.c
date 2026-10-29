__int64 __fastcall ClpSimplex::housekeeping(ClpSimplex *this, double a2)
{
  __int64 v3; // rdx
  double v4; // xmm3_8
  __int64 v5; // rax
  double v6; // xmm1_8
  int *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  double *v11; // rdi
  double *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  double v15; // xmm0_8
  double v16; // xmm2_8
  double v17; // xmm0_8
  __int64 v18; // rax
  double v19; // xmm2_8
  double v20; // xmm5_8
  _BYTE *v21; // rax
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // eax
  int *v27; // rdi
  unsigned int v28; // ebp
  __int64 v29; // rax
  int v30; // r12d
  char v31; // r12
  __int64 v32; // rdi
  int v33; // r13d
  ClpFactorization *v34; // rdi
  __int64 v35; // rax
  int v36; // edx
  int v37; // r13d
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  __int64 v46; // rcx
  int v47; // eax
  _BYTE *v49; // rdx
  double v50; // xmm2_8
  double v51; // xmm0_8
  double v52; // xmm2_8
  char v53; // al
  char v54; // cl
  char v55; // al
  CoinMessageHandler *v56; // rax
  CoinMessageHandler *v57; // rax
  CoinMessageHandler *v58; // rax
  CoinMessageHandler *v59; // rax
  CoinMessageHandler *v60; // rax
  CoinMessageHandler *v61; // rax
  double v62; // xmm0_8
  __int64 v63; // rax
  CoinMessageHandler *v64; // rax
  __int64 v65; // rax
  CoinMessageHandler *v66; // rax
  CoinMessageHandler *v67; // rax
  CoinMessageHandler *v68; // rax
  CoinMessageHandler *v69; // rdi
  CoinMessageHandler *v70; // rax
  CoinMessageHandler *v71; // rdi
  CoinMessageHandler *v72; // rax
  CoinMessageHandler *v73; // rax
  CoinMessageHandler *v74; // rax
  CoinMessageHandler *v75; // rax
  double v76; // xmm0_8
  __int64 v77; // rax
  int v78; // r14d
  int *v79; // r13
  unsigned __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r10
  int v83; // edx
  double v84; // xmm2_8
  __int64 v85; // r8
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r9
  double v92; // xmm1_8
  double v93; // xmm0_8
  double v94; // xmm3_8
  double v95; // xmm3_8
  __m128d v96; // xmm0
  __m128d v97; // xmm1
  __int64 v98; // rdx
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rdx
  int v103; // eax
  __m128i si128; // xmm0
  int v105; // edx
  int v106; // r13d
  int v107; // esi
  int v108; // ecx
  int v109; // eax
  double i; // xmm1_8
  __int64 v111; // rdx
  __int64 v112; // rax
  int v113; // eax
  int v114; // ebp
  int *v115; // rdi
  int v116; // r15d
  unsigned __int64 v117; // rdi
  unsigned __int64 v118; // r15
  _QWORD *v119; // rax
  int v120; // ecx
  unsigned __int64 v121; // rdi
  __int64 v122; // rdx
  unsigned int v123; // esi
  int v124; // r11d
  __int64 v125; // r8
  unsigned int v126; // r10d
  __int64 v127; // rdx
  unsigned int v128; // r10d
  unsigned __int64 v129; // r9
  _QWORD *v130; // r8
  signed int v131; // edx
  __int64 v132; // rsi
  int v133; // edx
  __int64 v134; // rax
  signed int v135; // ecx
  _DWORD *v136; // r15
  unsigned __int64 v137; // rdi
  unsigned int v138; // edx
  unsigned int v139; // r9d
  unsigned int v140; // r8d
  __int64 v141; // rsi
  __int64 v142; // rdx
  unsigned __int64 v143; // r10
  _DWORD *v144; // rsi
  signed int v145; // r12d
  int v146; // eax
  signed int v147; // r12d
  __int64 v148; // r8
  __int64 v149; // rdx
  __int64 v150; // r8
  double v151; // xmm1_8
  double v152; // xmm0_8
  double v153; // xmm3_8
  __m128d v154; // xmm0
  __m128d v155; // xmm1
  CoinMessageHandler *v156; // rax
  CoinMessageHandler *v157; // rdi
  __int64 v158; // rax
  unsigned __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rcx
  unsigned __int64 v162; // rax
  __int64 v163; // rax
  int v165; // [rsp+8h] [rbp-90h]
  int v166; // [rsp+8h] [rbp-90h]
  signed int v167; // [rsp+8h] [rbp-90h]
  int v168; // [rsp+8h] [rbp-90h]
  _QWORD *v169; // [rsp+10h] [rbp-88h]
  int v170; // [rsp+28h] [rbp-70h] BYREF
  int v171; // [rsp+2Ch] [rbp-6Ch] BYREF
  _OWORD v172[2]; // [rsp+30h] [rbp-68h]
  int v173; // [rsp+50h] [rbp-48h]
  int v174; // [rsp+54h] [rbp-44h]

  v3 = *((_QWORD *)this + 150);
  v4 = *(double *)(v3 + 8LL * *((int *)this + 288));
  v5 = *((int *)this + 288);
  v6 = *(double *)(v3 + 8LL * *((int *)this + 290));
  ++*((_DWORD *)this + 77);
  ++*((_DWORD *)this + 324);
  v7 = *((int **)this + 43);
  if ( v7[26] > 7 )
  {
    v56 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  (CoinMessageHandler *)v7,
                                  28,
                                  (ClpSimplex *)((char *)this + 416));
    v57 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v56);
    v58 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v57);
    v59 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v58);
    v60 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v59);
    v61 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v60);
    v62 = *((double *)this + 99);
    v63 = CoinMessageHandler::operator<<(v61);
    CoinMessageHandler::operator<<(v63, 0, v62);
    v5 = *((int *)this + 288);
    if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v5) & 7) == 0 )
    {
      v64 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    31,
                                    (ClpSimplex *)((char *)this + 416));
      v65 = CoinMessageHandler::operator<<(v64);
      CoinMessageHandler::operator<<(v65, 0, v62);
      v5 = *((int *)this + 288);
    }
  }
  v8 = *((int *)this + 292);
  if ( (int)v8 >= 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 157) + 4 * v8) = v5;
    v5 = *((int *)this + 288);
  }
  if ( *(double *)(*((_QWORD *)this + 126) + 8 * v5) > 1.0e20 && *(double *)(*((_QWORD *)this + 123) + 8 * v5) < -1.0e20 )
    *((_DWORD *)this + 336) |= 2u;
  *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v5) = *((_QWORD *)this + 102);
  v9 = *((int *)this + 290);
  v10 = *((_DWORD *)this + 290);
  v11 = (double *)(8 * v9 + *((_QWORD *)this + 126));
  v12 = (double *)(*((_QWORD *)this + 123) + 8 * v9);
  if ( *v11 - *v12 < 1.0e-12 )
    *((_DWORD *)this + 336) |= 1u;
  v13 = *((int *)this + 288);
  v14 = *((_QWORD *)this + 33);
  if ( v10 == (_DWORD)v13 )
  {
    v49 = (_BYTE *)(v9 + v14);
    v50 = *((double *)this + 102);
    v51 = v50 - *v11;
    v52 = v50 - *v12;
    v53 = *v49 & 0xF8;
    v54 = v53 | 2;
    v55 = v53 | 3;
    if ( fabs(v51) > fabs(v52) )
      v54 = v55;
    *v49 = v54;
  }
  else
  {
    v15 = *((double *)this + 97);
    if ( v15 > 0.0 )
    {
      v16 = fabs(*((double *)this + 99));
      if ( v16 <= 1.0 )
        v17 = v15 / v16;
      else
        v17 = v15 * v16;
      *((double *)this + 97) = v17;
    }
    *(_BYTE *)(v13 + v14) = *(_BYTE *)(v13 + v14) & 0xF8 | 1;
    v18 = *((int *)this + 290);
    v19 = *(double *)(*((_QWORD *)this + 126) + 8 * v18);
    v20 = *(double *)(*((_QWORD *)this + 123) + 8 * v18);
    if ( v19 - v20 <= 0.0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 33) + v18) = *(_BYTE *)(*((_QWORD *)this + 33) + v18) & 0xF8 | 5;
      v25 = 8LL * *((int *)this + 290);
    }
    else
    {
      v21 = (_BYTE *)(*((_QWORD *)this + 33) + v18);
      v22 = *v21 & 0xF8;
      if ( fabs(*((double *)this + 106) - v19) <= fabs(*((double *)this + 106) - v20) )
      {
        *v21 = v22 | 2;
        v23 = *((int *)this + 290);
        v24 = *((_QWORD *)this + 126);
      }
      else
      {
        *v21 = v22 | 3;
        v23 = *((int *)this + 290);
        v24 = *((_QWORD *)this + 123);
      }
      v25 = 8 * v23;
      v6 = *(double *)(v24 + 8 * v23);
    }
    *(_QWORD *)(*((_QWORD *)this + 150) + v25) = *((_QWORD *)this + 106);
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, double, double))(**((_QWORD **)this + 24) + 328LL))(
          *((_QWORD *)this + 24),
          this,
          v4,
          v6);
  v27 = *((int **)this + 43);
  v28 = v26;
  *((double *)this + 9) = *((double *)this + 9) + a2 / (*((double *)this + 11) * *((double *)this + 12));
  if ( v27[26] > 7 )
  {
    v66 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  (CoinMessageHandler *)v27,
                                  29,
                                  (ClpSimplex *)((char *)this + 416));
    v67 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v66);
    v68 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v67);
    v69 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v68);
    v70 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v69);
    v71 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v70);
    CoinMessageHandler::operator<<(v71);
    v72 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                  *((CoinMessageHandler **)this + 43),
                                  *((int *)this + 325) < 0);
    v73 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v72);
    CoinMessageHandler::operator<<(v73);
    v74 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                  *((CoinMessageHandler **)this + 43),
                                  *((_DWORD *)this + 325) > 0);
    v75 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v74);
    v76 = *((double *)this + 100);
    CoinMessageHandler::operator<<(v75);
    v77 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
    CoinMessageHandler::operator<<(v77, 0, v76);
  }
  v29 = *((_QWORD *)this + 36);
  if ( v29 )
  {
    v30 = *(_DWORD *)v29;
    if ( *(_DWORD *)v29 == 1 && *((int *)this + 325) > 0 )
    {
      if ( *((_QWORD *)this + 34) )
      {
        v78 = *(_DWORD *)(*((_QWORD *)this + 165) + 112LL);
        if ( !v78 && (fabs(*((double *)this + 100)) > 0.000001 || !*((_DWORD *)this + 77)) )
        {
          v79 = *(int **)(v29 + 8);
          if ( *v79 != v79[1] )
            goto LABEL_59;
          v165 = *v79;
          v116 = 3 * *v79 / 2 + 10;
          v79[1] = v116;
          if ( (unsigned __int64)v116 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_157;
          v117 = 8LL * v116;
          v118 = 4LL * v116;
          v119 = (_QWORD *)operator new[](v117);
          v120 = v165;
          if ( v165 <= 0 )
          {
            v121 = *((_QWORD *)v79 + 2);
            if ( !v121 )
            {
              *((_QWORD *)v79 + 2) = v119;
              v163 = operator new[](v118);
              v137 = *((_QWORD *)v79 + 3);
              v136 = (_DWORD *)v163;
              goto LABEL_132;
            }
          }
          else
          {
            v121 = *((_QWORD *)v79 + 2);
            if ( ((unsigned __int64)v119 >= v121 + 16 || v121 >= (unsigned __int64)(v119 + 2))
              && (unsigned int)v165 > 0x18 )
            {
              v166 = 0;
              v122 = (v121 >> 3) & 1;
              if ( ((v121 >> 3) & 1) != 0 )
              {
                v166 = 1;
                *v119 = *(_QWORD *)v121;
              }
              v123 = 0;
              v124 = v120 - v122;
              v125 = (v121 >> 3) & 1;
              v126 = v120 - v122;
              v127 = 0;
              v128 = v126 >> 1;
              v129 = v121 + v125 * 8;
              v130 = &v119[v125];
              do
              {
                ++v123;
                *(__m128i *)&v130[v127] = _mm_load_si128((const __m128i *)(v129 + v127 * 8));
                v127 += 2;
              }
              while ( v128 > v123 );
              v131 = (v124 & 0xFFFFFFFE) + v166;
              if ( (v124 & 0xFFFFFFFE) != v124 )
              {
                v132 = v131;
                v133 = v131 + 1;
                v119[v132] = *(_QWORD *)(v121 + 8 * v132);
                if ( v120 > v133 )
                  v119[v133] = *(_QWORD *)(v121 + 8LL * v133);
              }
              if ( !v121 )
              {
                *((_QWORD *)v79 + 2) = v119;
                v167 = v120;
                v134 = operator new[](v118);
                v135 = v167;
                v136 = (_DWORD *)v134;
LABEL_117:
                v137 = *((_QWORD *)v79 + 3);
                if ( ((unsigned __int64)v136 >= v137 + 16 || v137 >= (unsigned __int64)(v136 + 4))
                  && (unsigned int)v135 > 0xC )
                {
                  v138 = -(int)(v137 >> 2) & 3;
                  if ( v138 )
                  {
                    *v136 = *(_DWORD *)v137;
                    if ( v138 != 1 )
                    {
                      v30 = 2;
                      v136[1] = *(_DWORD *)(v137 + 4);
                      if ( v138 != 2 )
                      {
                        v30 = 3;
                        v136[2] = *(_DWORD *)(v137 + 8);
                      }
                    }
                  }
                  else
                  {
                    v30 = 0;
                  }
                  v139 = 0;
                  v140 = v135 - v138;
                  v141 = v138;
                  v142 = 0;
                  v143 = v137 + v141 * 4;
                  v144 = &v136[v141];
                  do
                  {
                    ++v139;
                    *(__m128i *)&v144[v142] = _mm_load_si128((const __m128i *)(v143 + v142 * 4));
                    v142 += 4;
                  }
                  while ( v140 >> 2 > v139 );
                  v145 = (v140 & 0xFFFFFFFC) + v30;
                  if ( (v140 & 0xFFFFFFFC) != v140 )
                  {
                    v136[v145] = *(_DWORD *)(v137 + 4LL * v145);
                    if ( v135 > v145 + 1 )
                    {
                      v136[v145 + 1] = *(_DWORD *)(v137 + 4LL * (v145 + 1));
                      if ( v135 > v145 + 2 )
                      {
                        v136[v145 + 2] = *(_DWORD *)(v137 + 4LL * (v145 + 2));
                        if ( v135 > v145 + 3 )
                        {
                          v136[v145 + 3] = *(_DWORD *)(v137 + 4LL * (v145 + 3));
                          v146 = v145 + 4;
                          if ( v135 > v145 + 4 )
                          {
                            v147 = v145 + 5;
                            v136[v146] = *(_DWORD *)(v137 + 4LL * v146);
                            if ( v135 > v147 )
                              v136[v147] = *(_DWORD *)(v137 + 4LL * v147);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v161 = 4LL * (unsigned int)(v135 - 1) + 4;
                  v162 = 0;
                  do
                  {
                    v136[v162 / 4] = *(_DWORD *)(v137 + v162);
                    v162 += 4LL;
                  }
                  while ( v162 != v161 );
                }
                goto LABEL_132;
              }
            }
            else
            {
              v159 = 0;
              do
              {
                v119[v159 / 8] = *(_QWORD *)(v121 + v159);
                v159 += 8LL;
              }
              while ( v159 != 8LL * (unsigned int)(v165 - 1) + 8 );
            }
          }
          v168 = v120;
          v169 = v119;
          operator delete[]((void *)v121);
          *((_QWORD *)v79 + 2) = v169;
          v160 = operator new[](v118);
          v135 = v168;
          v136 = (_DWORD *)v160;
          if ( v168 > 0 )
            goto LABEL_117;
          v137 = *((_QWORD *)v79 + 3);
LABEL_132:
          if ( v137 )
            operator delete[]((void *)v137);
          *((_QWORD *)v79 + 3) = v136;
LABEL_59:
          v80 = *((int *)this + 27);
          if ( v80 <= 0xFFFFFFFFFFFFFFFLL )
          {
            v81 = operator new[](8 * v80);
            v82 = *v79;
            *(_QWORD *)(*((_QWORD *)v79 + 2) + 8 * v82) = v81;
            v83 = *((_DWORD *)this + 27);
            v84 = 10.0 * *((double *)this + 110);
            if ( v83 > 0 )
            {
              v85 = *((_QWORD *)this + 29);
              v86 = *((_QWORD *)this + 126);
              v87 = *((_QWORD *)this + 123);
              v88 = *((_QWORD *)this + 150);
              if ( v85 )
              {
                v89 = (unsigned int)(v83 - 1);
                v90 = 0;
                v91 = v89 + 1;
                do
                {
                  *(double *)(v81 + 8 * v90) = *(double *)(v85 + 8 * v90) * *(double *)(v88 + 8 * v90);
                  v92 = *(double *)(v86 + 8 * v90);
                  v93 = *(double *)(v87 + 8 * v90);
                  if ( v92 > v93 )
                  {
                    v94 = *(double *)(v88 + 8 * v90);
                    if ( v94 > v93 + v84 && v92 - v84 > v94 && *(_BYTE *)(*((_QWORD *)this + 34) + v90) )
                    {
                      v95 = v94 * *(double *)(v85 + 8 * v90);
                      v96.m128d_f64[0] = v95 + 0.5;
                      if ( fabs(v95 + 0.5) < 4.503599627370496e15 )
                      {
                        v97 = 0;
                        v97.m128d_f64[0] = (double)(int)v96.m128d_f64[0];
                        *(_QWORD *)&v96.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                         v97.m128d_f64[0]
                                                       - COERCE_DOUBLE(
                                                           COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v97, v96).m128d_f64[0]))
                                                         & 0x3FF0000000000000LL))
                                                     | *(_QWORD *)&v96.m128d_f64[0] & 0x8000000000000000LL;
                      }
                      v78 += fabs(v95 - v96.m128d_f64[0]) > 0.0001;
                    }
                  }
                  ++v90;
                }
                while ( v90 != v91 );
              }
              else
              {
                v148 = (unsigned int)(v83 - 1);
                v149 = 0;
                v150 = v148 + 1;
                do
                {
                  *(_QWORD *)(v81 + 8 * v149) = *(_QWORD *)(v88 + 8 * v149);
                  v151 = *(double *)(v86 + 8 * v149);
                  v152 = *(double *)(v87 + 8 * v149);
                  if ( v151 > v152 )
                  {
                    v153 = *(double *)(v88 + 8 * v149);
                    if ( v153 > v152 + v84 && v151 - v84 > v153 && *(_BYTE *)(*((_QWORD *)this + 34) + v149) )
                    {
                      v154.m128d_f64[0] = v153 + 0.5;
                      if ( fabs(v153 + 0.5) < 4.503599627370496e15 )
                      {
                        v155 = 0;
                        v155.m128d_f64[0] = (double)(int)v154.m128d_f64[0];
                        *(_QWORD *)&v154.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                          v155.m128d_f64[0]
                                                        - COERCE_DOUBLE(
                                                            COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v155, v154).m128d_f64[0]))
                                                          & 0x3FF0000000000000LL))
                                                      | *(_QWORD *)&v154.m128d_f64[0] & 0x8000000000000000LL;
                      }
                      v78 += fabs(v153 - v154.m128d_f64[0]) > 0.0001;
                    }
                  }
                  ++v149;
                }
                while ( v150 != v149 );
              }
            }
            v98 = *((_QWORD *)v79 + 3);
            *v79 = v82 + 1;
            *(_DWORD *)(v98 + 4 * v82) = v78;
            goto LABEL_23;
          }
LABEL_157:
          __cxa_throw_bad_array_new_length();
        }
      }
    }
  }
LABEL_23:
  v31 = ClpModel::hitMaximumIterations(this);
  if ( v31 )
    return 2;
  v32 = *((_QWORD *)this + 24);
  v170 = *((_DWORD *)this + 288);
  v171 = *((_DWORD *)this + 290);
  (*(void (__fastcall **)(__int64, ClpSimplex *, int *, int *))(*(_QWORD *)v32 + 352LL))(v32, this, &v170, &v171);
  v33 = ClpSimplexProgress::cycle(
          (ClpSimplex *)((char *)this + 1408),
          v170,
          v171,
          *((_DWORD *)this + 289),
          *((_DWORD *)this + 291));
  if ( v33 > 0 && *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 && *(int *)(*((_QWORD *)this + 24) + 52LL) <= 14 )
  {
    if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 62 )
      printf("Cycle of %d\n", v33);
    ClpSimplexProgress::startCheck((ClpSimplex *)((char *)this + 1408));
    v100 = 1664525 * *((_DWORD *)this + 89);
    v101 = *((_QWORD *)this + 158);
    v173 = 3;
    v174 = 4;
    v102 = *(_QWORD *)(v101 + 8);
    v172[0] = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v103 = v100 + 1013904223;
    si128 = _mm_load_si128((const __m128i *)&xmmword_290810);
    *((_DWORD *)this + 89) = v103;
    v172[1] = si128;
    if ( v102 )
      v105 = *(_DWORD *)(v102 + 68);
    else
      v105 = *(_DWORD *)(*(_QWORD *)(v101 + 16) + 52LL);
    if ( v33 >= v105 )
    {
      v114 = *((_DWORD *)this + 290);
      v115 = *((int **)this + 43);
      if ( v115[26] > 62 )
      {
        v156 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       (CoinMessageHandler *)v115,
                                       12,
                                       (ClpSimplex *)((char *)this + 416));
        v157 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v156);
        v158 = CoinMessageHandler::operator<<(v157);
        CoinMessageHandler::operator<<(v158, 0, *(double *)si128.m128i_i64);
      }
      ClpSimplex::setFlagged(this, v114);
    }
    else
    {
      v106 = v33 - *((_DWORD *)v172 + (int)((double)v103 * 2.328306436538696e-10 * 9.999000000000001));
      if ( v106 <= 0 )
        v106 = 1;
      *((_DWORD *)this + 326) = v106;
    }
    return 1;
  }
  v34 = *((ClpFactorization **)this + 158);
  v35 = *((_QWORD *)v34 + 1);
  if ( v35 )
  {
    v36 = *(_DWORD *)(v35 + 68);
    v37 = *(_DWORD *)(v35 + 64);
  }
  else
  {
    v99 = *((_QWORD *)v34 + 2);
    v36 = *(_DWORD *)(v99 + 52);
    v37 = *(_DWORD *)(v99 + 48);
  }
  if ( (*((_BYTE *)this + 337) & 0x40) != 0 )
    v31 = 3 * *((_DWORD *)this + 77) > 2 * *((_DWORD *)this + 74);
  if ( v37 == v36 || v37 <= 1 || (unsigned __int8)ClpFactorization::timeToRefactorize(v34) == 1 && !v31 || v28 )
    return 1;
  v38 = *((_DWORD *)this + 326);
  if ( v38 > 0 )
  {
    v39 = *((_QWORD *)this + 158);
    v40 = *(_QWORD *)(v39 + 8);
    v41 = v40 ? *(_DWORD *)(v40 + 68) : *(_DWORD *)(*(_QWORD *)(v39 + 16) + 52LL);
    if ( v38 == v41 )
    {
      v42 = 5 * v38;
      v43 = 5 * v38 + 6;
      v44 = v42 + 3;
      if ( v44 >= 0 )
        v43 = v44;
      v45 = v43 >> 2;
      *((_DWORD *)this + 326) = v45;
      v46 = *(_QWORD *)(v39 + 8);
      if ( v46 )
        v47 = *(_DWORD *)(v46 + 64);
      else
        v47 = *(_DWORD *)(*(_QWORD *)(v39 + 16) + 48LL);
      if ( v45 > v47 )
        *((_DWORD *)this + 326) = -1;
      return 1;
    }
  }
  v107 = *((_DWORD *)this + 77);
  v108 = 10 * (*((_DWORD *)this + 26) + (*((int *)this + 27) >> 2));
  if ( v107 > v108 + 1000 && *(int *)(*((_QWORD *)this + 24) + 52LL) <= 14 )
  {
    v109 = 1664525 * *((_DWORD *)this + 89) + 1013904223;
    *((_DWORD *)this + 89) = v109;
    for ( i = 2.328306436538696e-10 * (double)v109; i < 0.45; i = i + i )
      ;
    if ( v38 >= 0 && v38 < v37 )
      v37 = v38;
    v111 = *((_QWORD *)this + 158);
    v112 = *(_QWORD *)(v111 + 8);
    v113 = v112 ? *(_DWORD *)(v112 + 68) : *(_DWORD *)(*(_QWORD *)(v111 + 16) + 52LL);
    if ( (double)v113 >= (double)v37 * i || v107 > v108 + 1000000 && v107 <= v108 + 1000999 )
      return 1;
  }
  return v28;
}

