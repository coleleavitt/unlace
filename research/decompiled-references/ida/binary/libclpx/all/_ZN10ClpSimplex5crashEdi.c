__int64 __fastcall ClpSimplex::crash(
        ClpSimplex *this,
        double a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // r10d
  int v12; // edx
  __m128i v13; // xmm2
  int v14; // r11d
  __m128i si128; // xmm7
  unsigned int v16; // eax
  const __m128i *v17; // rcx
  unsigned int v18; // edi
  __m128i v19; // xmm5
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm3
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm8
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  int v29; // eax
  __int64 result; // rax
  __int64 v31; // rax
  __int64 (__fastcall ***v32)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  double *v33; // rbp
  unsigned __int64 v34; // rax
  __m128d v35; // xmm1
  __m128d v36; // xmm0
  int v37; // r8d
  int v38; // edi
  __int64 v39; // rdx
  int v40; // r9d
  unsigned int v41; // ecx
  __int64 v42; // rsi
  __m128d v43; // xmm2
  unsigned int v44; // r10d
  __int64 v45; // rdx
  unsigned __int64 v46; // r11
  unsigned int v47; // r10d
  double *v48; // rsi
  signed int v49; // edi
  __int64 v50; // rdx
  int v51; // edi
  __int64 v52; // rdx
  int v53; // r8d
  double v54; // xmm0_8
  _BYTE *v55; // rcx
  double v56; // xmm1_8
  char v57; // al
  double v58; // xmm4_8
  double v59; // xmm5_8
  int v60; // eax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdi
  const CoinPackedMatrix *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v66; // r14
  __int64 (*v67)(void); // rax
  __m128d v68; // xmm0
  int v69; // r15d
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  double v73; // xmm1_8
  int v74; // edx
  int v75; // r12d
  int v76; // eax
  char *v77; // r15
  double v78; // xmm8_8
  double *v79; // r14
  int v80; // ebp
  __int64 v81; // rcx
  char *v82; // rdx
  char v83; // r9
  __m128d v84; // xmm4
  __m128d v85; // xmm2
  __int64 v86; // rax
  int v87; // r8d
  __m128d v88; // xmm6
  int v89; // r10d
  double v90; // xmm5_8
  int *v91; // rsi
  double *v92; // rdi
  double v93; // xmm3_8
  int v94; // r13d
  __int64 v95; // rdx
  __int64 v96; // r8
  __m128d v97; // xmm1
  int v98; // eax
  double v99; // xmm6_8
  double v100; // xmm10_8
  __m128d v101; // xmm1
  __m128d v102; // xmm1
  __int64 v103; // xmm10_8
  double v104; // xmm12_8
  __m128d v105; // xmm10
  bool v106; // zf
  int v107; // eax
  double *v108; // rbp
  void *v109; // r14
  int v110; // r15d
  __int64 v111; // rax
  double v112; // xmm1_8
  double v113; // xmm1_8
  _BYTE *v114; // rsi
  char v115; // cl
  CoinMessageHandler *v116; // rax
  CoinMessageHandler *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r11
  __int64 v121; // rax
  __int64 v122; // r9
  __int64 v123; // r10
  __int64 v124; // rdx
  double *v125; // rsi
  int *v126; // rdi
  int v127; // r8d
  int v128; // edx
  int v129; // esi
  __int64 v130; // rdi
  __int64 (__fastcall *v131)(ClpPackedMatrix *); // rax
  _QWORD *v132; // rax
  __int64 v133; // r14
  __int64 v134; // rbp
  int v135; // r12d
  __int64 v136; // r15
  __m128i v137; // xmm4
  __int64 v138; // rax
  int v139; // edx
  __int64 v140; // r10
  double v141; // xmm2_8
  __int64 v142; // r8
  double v143; // xmm1_8
  __int64 v144; // r13
  __int64 v145; // r11
  __int64 v146; // rax
  int v147; // edi
  bool v148; // cc
  double v149; // xmm0_8
  __int64 v150; // xmm0_8
  _BYTE *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // r12
  __int64 v154; // r14
  __int64 v155; // r13
  __int64 v156; // rbp
  int v157; // edx
  __int64 v158; // rax
  unsigned __int64 v159; // rdx
  int v160; // eax
  __int64 v161; // [rsp+0h] [rbp-118h]
  __m128i v162; // [rsp+0h] [rbp-118h]
  double v163; // [rsp+10h] [rbp-108h]
  int v164; // [rsp+18h] [rbp-100h]
  __int64 v165; // [rsp+18h] [rbp-100h]
  int v166; // [rsp+20h] [rbp-F8h]
  __int64 v167; // [rsp+20h] [rbp-F8h]
  int v170; // [rsp+34h] [rbp-E4h]
  int v171; // [rsp+34h] [rbp-E4h]
  int v172; // [rsp+38h] [rbp-E0h]
  __int64 v173; // [rsp+38h] [rbp-E0h]
  __int64 v174; // [rsp+40h] [rbp-D8h]
  __int64 v175; // [rsp+50h] [rbp-C8h]
  __int64 v176; // [rsp+58h] [rbp-C0h]
  int v177; // [rsp+60h] [rbp-B8h]
  int v178; // [rsp+64h] [rbp-B4h]
  void *v179; // [rsp+68h] [rbp-B0h]
  __int64 v180; // [rsp+70h] [rbp-A8h]
  _BYTE v181[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v182; // [rsp+A0h] [rbp-78h]
  __int64 v183; // [rsp+A8h] [rbp-70h]
  __int64 v184; // [rsp+B0h] [rbp-68h]
  __int64 v185; // [rsp+B8h] [rbp-60h]

  v163 = *((double *)this + 3);
  if ( !*((_QWORD *)this + 33) )
    ClpSimplex::createStatus(this);
  v8 = *((int *)this + 27);
  if ( (int)v8 <= 0 )
    goto LABEL_30;
  a6 = *((_BYTE **)this + 33);
  v9 = -*((_DWORD *)this + 66) & 0xF;
  v10 = v9 + 15;
  if ( (unsigned int)(v9 + 15) < 0x11 )
    v10 = 17;
  if ( v10 > (int)v8 - 1 )
  {
    v29 = 0;
    LODWORD(a4) = 0;
LABEL_26:
    a4 = (int)a4;
    do
    {
      LOBYTE(a5) = (a6[a4++] & 7) == 1;
      a5 = (unsigned __int8)a5;
      v29 += (unsigned __int8)a5;
    }
    while ( (int)v8 > (int)a4 );
    goto LABEL_28;
  }
  if ( (_DWORD)v9 )
  {
    v11 = (*a6 & 7) == 1;
    if ( (_DWORD)v9 == 1 )
    {
      v12 = 1;
    }
    else
    {
      v11 += (a6[1] & 7) == 1;
      if ( (_DWORD)v9 == 2 )
      {
        v12 = 2;
      }
      else
      {
        v11 += (a6[2] & 7) == 1;
        if ( (_DWORD)v9 == 3 )
        {
          v12 = 3;
        }
        else
        {
          v11 += (a6[3] & 7) == 1;
          if ( (_DWORD)v9 == 4 )
          {
            v12 = 4;
          }
          else
          {
            v11 += (a6[4] & 7) == 1;
            if ( (_DWORD)v9 == 5 )
            {
              v12 = 5;
            }
            else
            {
              v11 += (a6[5] & 7) == 1;
              if ( (_DWORD)v9 == 6 )
              {
                v12 = 6;
              }
              else
              {
                v11 += (a6[6] & 7) == 1;
                if ( (_DWORD)v9 == 7 )
                {
                  v12 = 7;
                }
                else
                {
                  v11 += (a6[7] & 7) == 1;
                  if ( (_DWORD)v9 == 8 )
                  {
                    v12 = 8;
                  }
                  else
                  {
                    v11 += (a6[8] & 7) == 1;
                    if ( (_DWORD)v9 == 9 )
                    {
                      v12 = 9;
                    }
                    else
                    {
                      v11 += (a6[9] & 7) == 1;
                      if ( (_DWORD)v9 == 10 )
                      {
                        v12 = 10;
                      }
                      else
                      {
                        v11 += (a6[10] & 7) == 1;
                        if ( (_DWORD)v9 == 11 )
                        {
                          v12 = 11;
                        }
                        else
                        {
                          v11 += (a6[11] & 7) == 1;
                          if ( (_DWORD)v9 == 12 )
                          {
                            v12 = 12;
                          }
                          else
                          {
                            v11 += (a6[12] & 7) == 1;
                            if ( (_DWORD)v9 == 13 )
                            {
                              v12 = 13;
                            }
                            else
                            {
                              v11 += (a6[13] & 7) == 1;
                              if ( (_DWORD)v9 == 14 )
                              {
                                v12 = 14;
                              }
                              else
                              {
                                v12 = 15;
                                v11 += (a6[14] & 7) == 1;
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
    v11 = 0;
    v12 = 0;
  }
  v13 = 0;
  v14 = v8 - v9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_290800);
  v16 = (unsigned int)(v8 - v9) >> 4;
  v17 = (const __m128i *)&a6[v9];
  v18 = 0;
  v19 = _mm_load_si128((const __m128i *)&xmmword_28D010);
  do
  {
    v20 = _mm_load_si128(v17);
    ++v18;
    ++v17;
    v21 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(v20, si128), v19), v19);
    v22 = _mm_cmpgt_epi8((__m128i)0LL, v21);
    v23 = _mm_unpacklo_epi8(v21, v22);
    v24 = _mm_unpackhi_epi8(v21, v22);
    v25 = _mm_cmpgt_epi16((__m128i)0LL, v23);
    v26 = _mm_add_epi32(_mm_add_epi32(v13, _mm_unpacklo_epi16(v23, v25)), _mm_unpackhi_epi16(v23, v25));
    v27 = _mm_cmpgt_epi16((__m128i)0LL, v24);
    v13 = _mm_add_epi32(_mm_add_epi32(v26, _mm_unpacklo_epi16(v24, v27)), _mm_unpackhi_epi16(v24, v27));
  }
  while ( v16 > v18 );
  a5 = v14 & 0xFFFFFFF0;
  v28 = _mm_add_epi32(v13, _mm_srli_si128(v13, 8));
  a4 = (unsigned int)(a5 + v12);
  v29 = v11 + _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
  if ( (_DWORD)a5 != v14 )
    goto LABEL_26;
LABEL_28:
  if ( v29 )
  {
    result = 0;
    if ( a3 != 3 )
      return result;
  }
LABEL_30:
  if ( a3 != 3 )
    goto LABEL_254;
  v130 = *((_QWORD *)this + 24);
  if ( !v130 )
    BUG();
  v131 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v130;
  if ( v131 == ClpPackedMatrix::getPackedMatrix )
  {
    v132 = *(_QWORD **)(v130 + 88);
  }
  else
  {
    LOBYTE(a7) = a3 == 3;
    v132 = (_QWORD *)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64, _BYTE *, __int64))v131)(
                       v130,
                       v8,
                       a4,
                       a5,
                       a6,
                       a7);
    v8 = *((int *)this + 27);
  }
  v165 = v132[5];
  v167 = v132[4];
  if ( (int)v8 <= 0 )
    goto LABEL_254;
  v133 = v132[7];
  v134 = 0;
  v135 = 0;
  v136 = v132[6];
  v137 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  do
  {
    if ( *(double *)(*((_QWORD *)this + 22) + 8 * v134) < -1.0e20
      && *(double *)(*((_QWORD *)this + 23) + 8 * v134) > 1.0e20 )
    {
      v138 = *(int *)(v136 + 4 * v134);
      v139 = *(_DWORD *)(v133 + 4 * v134);
      if ( (int)v138 < (int)v138 + v139 )
      {
        v140 = *((_QWORD *)this + 33);
        v141 = 0.0;
        v142 = (unsigned int)(v139 - 1) + 1LL;
        v143 = 0.0;
        v144 = v165 + 4 * v138;
        v145 = v167 + 8 * v138;
        v146 = 0;
        v147 = -1;
        do
        {
          while ( 1 )
          {
            v150 = *(_QWORD *)(v145 + 8 * v146) & v137.m128i_i64[0];
            if ( (*(_BYTE *)(v140 + (int)v8 + *(_DWORD *)(v144 + 4 * v146)) & 0x40) == 0 )
              break;
            ++v146;
            v141 = fmax(*(double *)&v150, v141);
            if ( v142 == v146 )
              goto LABEL_198;
          }
          v148 = *(double *)&v150 <= v143;
          v149 = fmax(*(double *)&v150, v143);
          if ( !v148 )
            v147 = *(_DWORD *)(v144 + 4 * v146);
          ++v146;
          v143 = v149;
        }
        while ( v142 != v146 );
LABEL_198:
        if ( v147 >= 0 && v143 * 2.5 >= v141 )
        {
          ++v135;
          *(_BYTE *)(v134 + v140) = *(_BYTE *)(v134 + v140) & 0xF8 | 1;
          v151 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v147);
          *v151 = COERCE_DOUBLE(*(_QWORD *)(*((_QWORD *)this + 19) + 8LL * v147) & v137.m128i_i64[0]) <= COERCE_DOUBLE(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * v147) & v137.m128i_i64[0])
                ? *v151 & 0xF8 | 2
                : *v151 & 0xF8 | 3;
          v152 = *(int *)(v136 + 4 * v134);
          v8 = *((int *)this + 27);
          if ( (int)v152 < (int)v152 + *(_DWORD *)(v133 + 4 * v134) )
          {
            v171 = v135;
            v153 = v133;
            v154 = v134;
            v155 = (int)v152 + 1;
            v156 = v165 + 4 * (v152 - v155);
            while ( 1 )
            {
              v162 = v137;
              ClpSimplex::setFlagged(this, *(_DWORD *)(v156 + 4 * v155) + v8);
              v157 = v155++;
              v137 = v162;
              if ( *(_DWORD *)(v136 + 4 * v154) + *(_DWORD *)(v153 + 4 * v154) <= v157 )
                break;
              LODWORD(v8) = *((_DWORD *)this + 27);
            }
            v134 = v154;
            v133 = v153;
            v8 = *((int *)this + 27);
            v135 = v171;
          }
        }
      }
    }
    ++v134;
  }
  while ( (int)v8 > (int)v134 );
  if ( !v135 )
  {
LABEL_254:
    if ( v8 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_251;
    v31 = operator new[](8 * v8);
    v32 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
    v33 = (double *)v31;
    v180 = *((_QWORD *)this + 15);
    v34 = 0;
    if ( v32 )
      v34 = (**v32)(v32, 0, 0, v181, 0, 2);
    v35 = (__m128d)*(unsigned __int64 *)this;
    if ( v35.m128d_f64[0] != 0.0 )
    {
      v36 = (__m128d)0x3FF0000000000000uLL;
      v36.m128d_f64[0] = 1.0 / v35.m128d_f64[0];
      v35 = v36;
    }
    v37 = *((_DWORD *)this + 27);
    if ( v37 > 0 )
    {
      if ( ((unsigned __int64)v33 >= v34 + 16 || v34 >= (unsigned __int64)(v33 + 2)) && (unsigned int)v37 > 0xE )
      {
        v38 = 0;
        v39 = (v34 >> 3) & 1;
        if ( ((v34 >> 3) & 1) != 0 )
        {
          v38 = 1;
          *v33 = *(double *)v34 * v35.m128d_f64[0];
        }
        v40 = v37 - v39;
        v41 = 0;
        v42 = (v34 >> 3) & 1;
        v43 = _mm_unpacklo_pd(v35, v35);
        v44 = v37 - v39;
        v45 = 0;
        v46 = v34 + v42 * 8;
        v47 = v44 >> 1;
        v48 = &v33[v42];
        do
        {
          ++v41;
          *(__m128d *)&v48[v45] = _mm_mul_pd(*(__m128d *)(v46 + v45 * 8), v43);
          v45 += 2;
        }
        while ( v41 < v47 );
        v49 = (v40 & 0xFFFFFFFE) + v38;
        if ( (v40 & 0xFFFFFFFE) != v40 )
        {
          v50 = v49;
          v51 = v49 + 1;
          v33[v50] = *(double *)(v34 + 8 * v50) * v35.m128d_f64[0];
          if ( v51 < v37 )
            v33[v51] = v35.m128d_f64[0] * *(double *)(v34 + 8LL * v51);
        }
      }
      else
      {
        v159 = 0;
        do
        {
          v33[v159 / 8] = *(double *)(v34 + v159) * v35.m128d_f64[0];
          v159 += 8LL;
        }
        while ( 8LL * (unsigned int)(v37 - 1) + 8 != v159 );
      }
      v52 = 0;
      v53 = 0;
      while ( 1 )
      {
        v54 = *(double *)(*((_QWORD *)this + 22) + 8 * v52);
        v55 = (_BYTE *)(v52 + *((_QWORD *)this + 33));
        v56 = *(double *)(*((_QWORD *)this + 23) + 8 * v52);
        v57 = *v55 & 0xF8;
        if ( v54 <= -1.0e20 && v56 >= 1.0e20 )
        {
          *v55 = v57;
          v53 += fabs(v33[v52]) > v163;
          goto LABEL_49;
        }
        if ( fabs(v54) > fabs(v56) )
          break;
        *v55 = v57 | 3;
        *(double *)(v180 + 8 * v52) = v54;
        v59 = v33[v52];
        if ( -*((double *)this + 109) <= v59 )
          goto LABEL_49;
        if ( a2 < v56 - v54 )
        {
          if ( a3 < 0 )
          {
            *(double *)(*((_QWORD *)this + 15) + 8 * v52) = v54 + a2;
LABEL_215:
            *(_BYTE *)(v52 + *((_QWORD *)this + 33)) = *(_BYTE *)(v52 + *((_QWORD *)this + 33)) & 0xF8 | 4;
            goto LABEL_49;
          }
          v53 += -v163 > v59;
LABEL_49:
          if ( *((_DWORD *)this + 27) <= (int)++v52 )
            goto LABEL_60;
        }
        else
        {
          *(double *)(*((_QWORD *)this + 15) + 8 * v52) = v56;
          *(_BYTE *)(v52 + *((_QWORD *)this + 33)) = *(_BYTE *)(v52 + *((_QWORD *)this + 33)) & 0xF8 | 2;
          if ( *((_DWORD *)this + 27) <= (int)++v52 )
          {
LABEL_60:
            v166 = v53;
            v60 = v53 | a3;
            goto LABEL_61;
          }
        }
      }
      *v55 = v57 | 2;
      *(double *)(v180 + 8 * v52) = v56;
      v58 = v33[v52];
      if ( -*((double *)this + 109) > v58 || v58 <= *((double *)this + 109) )
        goto LABEL_49;
      if ( a2 >= v56 - v54 )
      {
        *(double *)(*((_QWORD *)this + 15) + 8 * v52) = v54;
        *(_BYTE *)(v52 + *((_QWORD *)this + 33)) = *(_BYTE *)(v52 + *((_QWORD *)this + 33)) & 0xF8 | 3;
      }
      else
      {
        if ( a3 < 0 )
        {
          *(double *)(*((_QWORD *)this + 15) + 8 * v52) = v56 - a2;
          goto LABEL_215;
        }
        v53 += v58 > v163;
      }
      goto LABEL_49;
    }
    v60 = a3;
    v166 = 0;
LABEL_61:
    if ( !v60 )
    {
      operator delete[](v33);
      return 0xFFFFFFFFLL;
    }
    if ( a3 <= 0 )
    {
      operator delete[](v33);
      return 1;
    }
    v61 = *((int *)this + 26);
    if ( v61 > 0xFFFFFFFFFFFFFFFLL
      || (v179 = (void *)operator new[](8 * v61),
          memset(v179, 0, 8LL * *((int *)this + 26)),
          v62 = *((int *)this + 27),
          v62 > 0x1FFFFFFFFFFFFFFELL) )
    {
LABEL_251:
      __cxa_throw_bad_array_new_length();
    }
    v63 = nullptr;
    v64 = operator new[](4 * v62);
    v65 = *((_QWORD *)this + 24);
    v66 = v64;
    if ( v65 )
    {
      v67 = **(__int64 (***)(void))v65;
      if ( (char *)v67 == (char *)ClpPackedMatrix::getPackedMatrix )
        v63 = *(const CoinPackedMatrix **)(v65 + 88);
      else
        v63 = (const CoinPackedMatrix *)v67();
    }
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v181);
    CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v181, 0.0);
    v68.m128d_f64[0] = 0.0;
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v181, 0.0);
    CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v181, v63);
    v69 = *((_DWORD *)this + 27);
    v176 = v183;
    v161 = v184;
    v174 = v185;
    v175 = v182;
    if ( v69 > 0 )
    {
      v70 = *((_QWORD *)this + 22);
      v71 = *((_QWORD *)this + 23);
      v72 = 0;
      v73 = -v163;
      do
      {
        v68.m128d_f64[0] = *(double *)(v71 + 8 * v72);
        if ( v68.m128d_f64[0] <= *(double *)(v70 + 8 * v72) )
        {
LABEL_126:
          v74 = 100;
        }
        else
        {
          switch ( *(_BYTE *)(*((_QWORD *)this + 33) + v72) & 7 )
          {
            case 0:
            case 4:
              v68.m128d_f64[0] = v33[v72];
              v74 = 1;
              if ( v73 <= v68.m128d_f64[0] )
                v74 = -(v68.m128d_f64[0] > v163);
              break;
            case 1:
              v74 = 0;
              break;
            case 2:
              v68.m128d_f64[0] = v33[v72];
              v74 = -1;
              if ( v68.m128d_f64[0] <= v163 )
                v74 = (v73 <= v68.m128d_f64[0]) - 3;
              break;
            case 3:
              v68.m128d_f64[0] = v33[v72];
              v74 = 1;
              if ( v73 <= v68.m128d_f64[0] )
                v74 = (v68.m128d_f64[0] > v163) + 2;
              break;
            default:
              goto LABEL_126;
          }
        }
        *(_DWORD *)(v66 + 4 * v72++) = v74;
      }
      while ( (unsigned int)(v69 - 1) + 1LL != v72 );
    }
    v75 = *((_DWORD *)this + 26);
    v76 = v69;
    v178 = 5;
    v77 = (char *)v66;
    v164 = -100000;
    v78 = -v163;
    v79 = v33;
    v170 = 0;
    v80 = v76;
LABEL_75:
    if ( v164 + v75 / 100 >= v170 || v75 <= 0 )
    {
LABEL_131:
      v107 = v80;
      v108 = v79;
      v109 = v77;
      v110 = v107;
      goto LABEL_132;
    }
    v164 = v170;
    v81 = 0;
LABEL_79:
    v82 = (char *)(*((_QWORD *)this + 33) + v80 + (int)v81);
    v83 = *v82;
    if ( (*v82 & 7) != 1 )
      goto LABEL_78;
    v84 = (__m128d)0xBFF0000000000000LL;
    if ( *(double *)(*((_QWORD *)this + 18) + 8 * v81) >= -1.0e20 )
      v84 = (__m128d)0x7FEFFFFFFFFFFFFFuLL;
    v85 = (__m128d)0xBFF0000000000000LL;
    v68.m128d_f64[0] = *(double *)(*((_QWORD *)this + 19) + 8 * v81);
    if ( v68.m128d_f64[0] <= 1.0e20 )
      v85 = (__m128d)0x7FEFFFFFFFFFFFFFuLL;
    v86 = *(int *)(v161 + 4 * v81);
    v87 = *(_DWORD *)(v174 + 4 * v81);
    if ( (int)v86 >= (int)v86 + v87 )
    {
      if ( v163 < v84.m128d_f64[0] )
      {
        v90 = 0.0;
        v89 = -1;
        v93 = 0.0;
        v172 = -1;
        v94 = -1;
        goto LABEL_165;
      }
      if ( v163 < v85.m128d_f64[0] )
      {
        v94 = -1;
        v93 = 0.0;
        v89 = -1;
        v90 = 0.0;
        goto LABEL_97;
      }
      goto LABEL_78;
    }
    v88 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
    v89 = -1;
    v90 = 0.0;
    v91 = (int *)(v176 + 4 * v86);
    v92 = (double *)(v175 + 8 * v86);
    v93 = 0.0;
    v94 = -1;
    v172 = -1;
    v177 = -1;
    v95 = v176 + 4 * ((unsigned int)(v87 - 1) + v86) + 4;
    while ( 1 )
    {
      v68.m128d_f64[0] = *v92;
      v96 = *v91;
      v97 = (__m128d)*(unsigned __int64 *)&v79[v96];
      v98 = *(_DWORD *)&v77[4 * v96];
      if ( v98 != 100 )
      {
        switch ( v98 )
        {
          case -3:
            v105 = _mm_xor_pd(v97, v88);
            if ( v68.m128d_f64[0] <= 0.0 )
            {
              if ( COERCE_DOUBLE(*(_QWORD *)&v84.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) * v68.m128d_f64[0] > v105.m128d_f64[0] )
                goto LABEL_116;
            }
            else if ( v68.m128d_f64[0] * v85.m128d_f64[0] > v105.m128d_f64[0] )
            {
              v85.m128d_f64[1] = v105.m128d_f64[1];
              v172 = *v91;
              v85.m128d_f64[0] = v105.m128d_f64[0] / v68.m128d_f64[0];
            }
            break;
          case -2:
            v101 = _mm_cmplt_sd((__m128d)0LL, v68);
            v84 = _mm_and_pd(v84, v101);
            v68 = _mm_andn_pd(v101, v85);
            v85 = v68;
            break;
          case -1:
            v100 = v97.m128d_f64[0] - v163;
            if ( v68.m128d_f64[0] > 0.0 )
            {
              if ( v100 > v68.m128d_f64[0] * v84.m128d_f64[0] )
                goto LABEL_169;
              if ( v97.m128d_f64[0] > v68.m128d_f64[0] * v90 )
                goto LABEL_208;
              goto LABEL_107;
            }
            if ( v100 > COERCE_DOUBLE(*(_QWORD *)&v85.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) * v68.m128d_f64[0] )
              goto LABEL_169;
            if ( v97.m128d_f64[0] <= COERCE_DOUBLE(*(_QWORD *)&v93 ^ *(_QWORD *)&v88.m128d_f64[0]) * v68.m128d_f64[0] )
              goto LABEL_212;
            v89 = *v91;
            v84 = 0;
            v93 = COERCE_DOUBLE(*(_QWORD *)&v97.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) / v68.m128d_f64[0];
            break;
          case 0:
            v84 = (__m128d)0xBFF0000000000000LL;
            v85 = (__m128d)0xBFF0000000000000LL;
            break;
          case 1:
            v103 = *(_QWORD *)&v97.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0];
            v104 = COERCE_DOUBLE(*(_QWORD *)&v97.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) - v163;
            if ( v68.m128d_f64[0] <= 0.0 )
            {
              if ( v104 <= COERCE_DOUBLE(*(_QWORD *)&v84.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) * v68.m128d_f64[0] )
              {
                if ( *(double *)&v103 <= COERCE_DOUBLE(*(_QWORD *)&v90 ^ *(_QWORD *)&v88.m128d_f64[0])
                                       * v68.m128d_f64[0] )
                {
LABEL_107:
                  v85 = 0;
                }
                else
                {
LABEL_208:
                  v94 = *v91;
                  v85 = 0;
                  v90 = v97.m128d_f64[0] / v68.m128d_f64[0];
                }
                break;
              }
            }
            else if ( v104 <= v68.m128d_f64[0] * v85.m128d_f64[0] )
            {
              if ( *(double *)&v103 <= v68.m128d_f64[0] * v93 )
              {
LABEL_212:
                v84 = 0;
              }
              else
              {
                v89 = *v91;
                v84 = 0;
                v93 = *(double *)&v103 / v68.m128d_f64[0];
              }
              break;
            }
LABEL_169:
            v84 = 0;
            v85 = 0;
            break;
          case 2:
            v102 = _mm_cmplt_sd((__m128d)0LL, v68);
            v85 = _mm_and_pd(v85, v102);
            v68 = _mm_andn_pd(v102, v84);
            v84 = v68;
            break;
          case 3:
            if ( v68.m128d_f64[0] <= 0.0 )
            {
              if ( COERCE_DOUBLE(*(_QWORD *)&v85.m128d_f64[0] ^ *(_QWORD *)&v88.m128d_f64[0]) * v68.m128d_f64[0] > v97.m128d_f64[0] )
              {
                v172 = *v91;
                v85 = _mm_xor_pd(v97, v88);
                v85.m128d_f64[0] = v85.m128d_f64[0] / v68.m128d_f64[0];
              }
            }
            else if ( v68.m128d_f64[0] * v84.m128d_f64[0] > v97.m128d_f64[0] )
            {
LABEL_116:
              v84.m128d_f64[1] = 0.0;
              v177 = *v91;
              v84.m128d_f64[0] = v97.m128d_f64[0] / v68.m128d_f64[0];
            }
            break;
          default:
            break;
        }
      }
      ++v91;
      ++v92;
      if ( v91 == (int *)v95 )
      {
        if ( v94 < 0 )
          v94 = v177;
        v82 = (char *)(*((_QWORD *)this + 33) + v80 + (int)v81);
        if ( v163 >= v84.m128d_f64[0] )
        {
          v99 = v163;
          v94 = -1;
          goto LABEL_94;
        }
LABEL_165:
        v99 = v163;
        if ( v90 > v84.m128d_f64[0] )
          v94 = -1;
LABEL_94:
        if ( v89 < 0 )
          v89 = v172;
        if ( v99 >= v85.m128d_f64[0] )
        {
LABEL_143:
          if ( v94 < 0 )
            goto LABEL_78;
          goto LABEL_144;
        }
LABEL_97:
        if ( v93 > v85.m128d_f64[0] )
          goto LABEL_143;
        if ( v94 >= 0 )
        {
          if ( v89 < 0 )
          {
LABEL_100:
            if ( v94 < 0 )
            {
              if ( v93 <= 0.0 )
                goto LABEL_213;
              goto LABEL_102;
            }
          }
          else if ( v85.m128d_f64[0] > v84.m128d_f64[0] )
          {
            if ( v93 <= 0.0 )
            {
LABEL_213:
              v90 = -v85.m128d_f64[0];
LABEL_103:
              *v82 = v83 & 0xF8 | 3;
LABEL_147:
              ++v170;
              *(_BYTE *)(*((_QWORD *)this + 33) + v89) = *(_BYTE *)(*((_QWORD *)this + 33) + v89) & 0xF8 | 1;
              *((double *)v179 + v81) = v90;
              v119 = *(int *)(v161 + 4 * v81);
              if ( (int)v119 < (int)v119 + *(_DWORD *)(v174 + 4 * v81) )
              {
                v120 = *((_QWORD *)this + 23);
                v121 = (int)v119 + 1;
                v173 = *((_QWORD *)this + 22);
                v122 = v175 + -8 * v121 + 8 * v119;
                v123 = v176 + -4 * v121 + 4 * v119;
                do
                {
                  v124 = *(int *)(v123 + 4 * v121);
                  v125 = &v79[v124];
                  v126 = (int *)&v77[4 * v124];
                  v127 = *v126;
                  v68.m128d_f64[0] = *v125 - *(double *)(v122 + 8 * v121) * v90;
                  *v125 = v68.m128d_f64[0];
                  if ( ((*v126 >> 31) ^ v127) - (*v126 >> 31) == 1 )
                  {
                    --v166;
                    v164 = -1000000;
                  }
                  if ( *(double *)(v120 + 8 * v124) <= *(double *)(v173 + 8 * v124) )
                  {
LABEL_162:
                    v128 = 100;
                  }
                  else
                  {
                    switch ( *(_BYTE *)(*((_QWORD *)this + 33) + v124) & 7 )
                    {
                      case 0:
                      case 4:
                        v128 = 1;
                        if ( v78 <= v68.m128d_f64[0] )
                          v128 = -(v68.m128d_f64[0] > v163);
                        break;
                      case 1:
                        v128 = 0;
                        break;
                      case 2:
                        v128 = -1;
                        if ( v68.m128d_f64[0] <= v163 )
                          v128 = (v78 <= v68.m128d_f64[0]) - 3;
                        break;
                      case 3:
                        v128 = 1;
                        if ( v78 <= v68.m128d_f64[0] )
                          v128 = (v68.m128d_f64[0] > v163) + 2;
                        break;
                      default:
                        goto LABEL_162;
                    }
                  }
                  *v126 = v128;
                  v129 = v121++;
                }
                while ( *(_DWORD *)(v161 + 4 * v81) + *(_DWORD *)(v174 + 4 * v81) > v129 );
              }
              v75 = *((_DWORD *)this + 26);
              v80 = *((_DWORD *)this + 27);
              goto LABEL_78;
            }
LABEL_102:
            v90 = -v93;
            goto LABEL_103;
          }
LABEL_144:
          if ( v90 <= 0.0 )
            v90 = v84.m128d_f64[0];
          v89 = v94;
          *v82 = v83 & 0xF8 | 2;
          goto LABEL_147;
        }
        if ( v89 >= 0 )
          goto LABEL_100;
LABEL_78:
        if ( (int)++v81 < v75 )
          goto LABEL_79;
        if ( v170 == v164 || v166 )
          goto LABEL_131;
        if ( a3 != 1 )
        {
          v106 = v178-- == 1;
          v166 = 0;
          if ( v106 )
            goto LABEL_131;
          goto LABEL_75;
        }
        v160 = v80;
        v108 = v79;
        v109 = v77;
        v110 = v160;
LABEL_132:
        if ( v110 <= 0 )
        {
LABEL_141:
          operator delete[](v179);
          operator delete[](v108);
          operator delete[](v109);
          v116 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)this + 43),
                                         47,
                                         (ClpSimplex *)((char *)this + 416));
          v117 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v116);
          v118 = CoinMessageHandler::operator<<(v117);
          CoinMessageHandler::operator<<(v118, 0, v68.m128d_f64[0]);
          CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v181);
          return 0xFFFFFFFFLL;
        }
        v111 = 0;
        while ( 2 )
        {
          v112 = *(double *)(*((_QWORD *)this + 22) + 8 * v111);
          v68.m128d_f64[0] = *(double *)(*((_QWORD *)this + 23) + 8 * v111);
          if ( a2 >= v68.m128d_f64[0] - v112 && v68.m128d_f64[0] > v112 )
          {
            v113 = v108[v111];
            v114 = (_BYTE *)(v111 + *((_QWORD *)this + 33));
            v115 = *v114 & 7;
            if ( v115 == 2 )
            {
              if ( v113 > v163 )
                goto LABEL_139;
            }
            else if ( v115 == 3 && -v163 > v113 )
            {
LABEL_139:
              *v114 = *v114 & 0xF8 | 2;
              *(double *)(v180 + 8 * v111) = v68.m128d_f64[0];
              v110 = *((_DWORD *)this + 27);
            }
          }
          if ( v110 <= (int)++v111 )
            goto LABEL_141;
          continue;
        }
      }
    }
  }
  if ( *((int *)this + 26) > 0 )
  {
    v158 = 0;
    do
    {
      *(_BYTE *)(v158 + *((_QWORD *)this + 33)) &= ~0x40u;
      ++v158;
    }
    while ( *((_DWORD *)this + 26) > (int)v158 );
  }
  printf("%d free variables put in basis\n", v135);
  return 0;
}

