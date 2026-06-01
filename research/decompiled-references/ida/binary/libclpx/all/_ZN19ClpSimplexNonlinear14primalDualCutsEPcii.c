__int64 __fastcall ClpSimplexNonlinear::primalDualCuts(
        ClpSimplexNonlinear *this,
        char *a2,
        int a3,
        int a4,
        double a5,
        __m128i a6,
        __m128i a7,
        __m128i a8,
        double a9,
        double a10,
        __m128i si128,
        __m128i a12)
{
  int v13; // r14d
  int v14; // eax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int *v19; // r12
  int v20; // esi
  char *v21; // r11
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // r8d
  int v25; // edx
  __m128i v26; // xmm2
  int v27; // edi
  unsigned int v28; // r9d
  const __m128i *v29; // rax
  unsigned int v30; // r10d
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm3
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm2
  __m128i v37; // xmm2
  int v38; // eax
  __int64 v39; // rdx
  void *v40; // rdi
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // esi
  double v48; // xmm0_8
  double v49; // xmm2_8
  void *v51; // rdi
  __int64 v52; // rax
  int v53; // esi
  double v54; // xmm0_8
  double v55; // xmm0_8
  int v56; // eax
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 v59; // rax
  int v60; // esi
  __int64 v61; // r9
  int v62; // esi
  char v63; // r8
  __int64 v64; // rdx
  int v65; // edi
  double v66; // xmm0_8
  __int64 v67; // r8
  size_t v68; // rdx
  int v69; // edi
  int *v70; // rax
  __int64 v71; // rdx
  double v72; // xmm4_8
  double v73; // xmm5_8
  _QWORD *v74; // rdi
  __int64 v75; // rax
  __int64 (__fastcall *v76)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v77)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v78)(ClpPackedMatrix *); // rax
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rdi
  int v82; // r15d
  int v83; // eax
  int v84; // edx
  __int64 v85; // rsi
  int *v86; // rax
  __int64 v87; // r9
  int v88; // esi
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  int v92; // r14d
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  double v96; // xmm4_8
  double v97; // xmm5_8
  __int64 (__fastcall *v98)(double, double, double, double, double, double, double, double); // rax
  int v99; // ecx
  int v100; // esi
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rax
  char v104; // dl
  __int64 v105; // rsi
  _BYTE *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  int v109; // r10d
  int v110; // edi
  unsigned __int64 v111; // rcx
  unsigned int v112; // eax
  int v113; // eax
  int v114; // ecx
  int v115; // eax
  __int64 v116; // rcx
  int v117; // edi
  __int64 v118; // r8
  int v119; // r11d
  int v120; // r10d
  __int64 v121; // rsi
  double *v122; // r9
  double v123; // xmm1_8
  double v124; // xmm0_8
  bool v125; // cc
  ClpSimplex *v126; // rax
  double v127; // xmm0_8
  double v128; // xmm4_8
  double v129; // xmm5_8
  int v130; // r9d
  _QWORD *v131; // rsi
  __int64 v132; // rax
  bool v133; // zf
  double v134; // xmm1_8
  double v135; // xmm0_8
  double v136; // xmm0_8
  size_t v137; // rdx
  int v138; // r14d
  int *v139; // rax
  __int64 v140; // rdx
  int v141; // esi
  unsigned __int64 *v142; // rax
  double v143; // xmm0_8
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // [rsp+18h] [rbp-778h]
  __int64 v147; // [rsp+20h] [rbp-770h]
  __int64 v148; // [rsp+28h] [rbp-768h]
  int v149; // [rsp+30h] [rbp-760h]
  int v150; // [rsp+34h] [rbp-75Ch]
  int v151; // [rsp+40h] [rbp-750h]
  int *v152; // [rsp+50h] [rbp-740h]
  int v153; // [rsp+58h] [rbp-738h]
  int v154; // [rsp+5Ch] [rbp-734h]
  int v155; // [rsp+60h] [rbp-730h]
  int v156; // [rsp+60h] [rbp-730h]
  int v157; // [rsp+60h] [rbp-730h]
  ClpPresolve *v158; // [rsp+60h] [rbp-730h]
  char *s; // [rsp+68h] [rbp-728h]
  _BYTE v160[104]; // [rsp+70h] [rbp-720h] BYREF
  int v161; // [rsp+D8h] [rbp-6B8h]
  int v162; // [rsp+DCh] [rbp-6B4h]
  __int64 v163; // [rsp+E8h] [rbp-6A8h]
  _QWORD *v164; // [rsp+130h] [rbp-660h]
  __int64 v165; // [rsp+178h] [rbp-618h]
  int v166; // [rsp+1A4h] [rbp-5ECh]
  int v167; // [rsp+1B0h] [rbp-5E0h]
  CoinMessageHandler *v168; // [rsp+1C8h] [rbp-5C8h]
  double v169; // [rsp+3F0h] [rbp-3A0h]

  s = a2;
  if ( !a2 )
  {
    if ( a4 <= 0 )
      return ClpSimplex::dual(this, a3, 0);
    else
      return ClpSimplex::primal(this, a3, 0);
  }
  v13 = *((_DWORD *)this + 26);
  v14 = v13 / 20;
  if ( 2 * *((_DWORD *)this + 27) <= v13 / 20 )
    v14 = 2 * *((_DWORD *)this + 27);
  v149 = v14;
  if ( (unsigned __int64)v13 > 0xFFFFFFFFFFFFFFFLL
    || (v15 = operator new[](8LL * v13),
        v16 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27),
        v16 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v17 = operator new[](4 * v16);
  v18 = *((int *)this + 26);
  v19 = (int *)v17;
  v20 = *((_DWORD *)this + 26);
  v152 = (int *)(v17 + 4 * v18);
  if ( (int)v18 > 0 )
  {
    v21 = s;
    v22 = -(int)s & 0xF;
    v23 = v22 + 15;
    if ( (unsigned int)(v22 + 15) < 0x12 )
      v23 = 18;
    if ( v23 > (int)v18 - 1 )
    {
      LODWORD(v39) = 0;
      v38 = 0;
    }
    else
    {
      if ( (_DWORD)v22 )
      {
        v24 = *s != 0;
        if ( (_DWORD)v22 == 1 )
        {
          v25 = 1;
        }
        else
        {
          if ( s[1] )
            ++v24;
          if ( (_DWORD)v22 == 2 )
          {
            v25 = 2;
            v21 = s;
          }
          else
          {
            if ( s[2] )
              ++v24;
            if ( (_DWORD)v22 == 3 )
            {
              v25 = 3;
              v21 = s;
            }
            else
            {
              if ( s[3] )
                ++v24;
              if ( (_DWORD)v22 == 4 )
              {
                v25 = 4;
                v21 = s;
              }
              else
              {
                if ( s[4] )
                  ++v24;
                if ( (_DWORD)v22 == 5 )
                {
                  v25 = 5;
                  v21 = s;
                }
                else
                {
                  if ( s[5] )
                    ++v24;
                  if ( (_DWORD)v22 == 6 )
                  {
                    v25 = 6;
                    v21 = s;
                  }
                  else
                  {
                    if ( s[6] )
                      ++v24;
                    if ( (_DWORD)v22 == 7 )
                    {
                      v25 = 7;
                      v21 = s;
                    }
                    else
                    {
                      if ( s[7] )
                        ++v24;
                      if ( (_DWORD)v22 == 8 )
                      {
                        v25 = 8;
                        v21 = s;
                      }
                      else
                      {
                        if ( s[8] )
                          ++v24;
                        if ( (_DWORD)v22 == 9 )
                        {
                          v25 = 9;
                          v21 = s;
                        }
                        else
                        {
                          if ( s[9] )
                            ++v24;
                          if ( (_DWORD)v22 == 10 )
                          {
                            v25 = 10;
                            v21 = s;
                          }
                          else
                          {
                            if ( s[10] )
                              ++v24;
                            if ( (_DWORD)v22 == 11 )
                            {
                              v25 = 11;
                              v21 = s;
                            }
                            else
                            {
                              if ( s[11] )
                                ++v24;
                              if ( (_DWORD)v22 == 12 )
                              {
                                v25 = 12;
                                v21 = s;
                              }
                              else
                              {
                                if ( s[12] )
                                  ++v24;
                                if ( (_DWORD)v22 == 13 )
                                {
                                  v25 = 13;
                                  v21 = s;
                                }
                                else
                                {
                                  if ( s[13] )
                                    ++v24;
                                  if ( (_DWORD)v22 == 14 )
                                  {
                                    v25 = 14;
                                    v21 = s;
                                  }
                                  else
                                  {
                                    if ( s[14] )
                                      ++v24;
                                    v21 = s;
                                    v25 = 15;
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
        v25 = 0;
        v24 = 0;
      }
      v26 = 0;
      v27 = v20 - v22;
      si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      v28 = (unsigned int)(v20 - v22) >> 4;
      v29 = (const __m128i *)&v21[v22];
      v30 = 0;
      do
      {
        ++v30;
        v31 = _mm_cmpeq_epi8(_mm_load_si128(v29++), (__m128i)0LL);
        v32 = _mm_andnot_si128(v31, si128);
        v33 = _mm_cmpgt_epi8((__m128i)0LL, v32);
        v34 = _mm_unpacklo_epi8(v32, v33);
        v35 = _mm_unpackhi_epi8(v32, v33);
        a12 = _mm_cmpgt_epi16((__m128i)0LL, v34);
        v36 = _mm_add_epi32(_mm_add_epi32(v26, _mm_unpacklo_epi16(v34, a12)), _mm_unpackhi_epi16(v34, a12));
        a6 = _mm_cmpgt_epi16((__m128i)0LL, v35);
        a8 = _mm_unpacklo_epi16(v35, a6);
        v26 = _mm_add_epi32(_mm_add_epi32(v36, a8), _mm_unpackhi_epi16(v35, a6));
      }
      while ( v28 > v30 );
      s = v21;
      v37 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
      a7 = _mm_add_epi32(v37, _mm_srli_si128(v37, 4));
      v38 = v24 + _mm_cvtsi128_si32(a7);
      LODWORD(v39) = (v27 & 0xFFFFFFF0) + v25;
      if ( (v27 & 0xFFFFFFF0) == v27 )
      {
LABEL_61:
        if ( v38 )
          goto LABEL_62;
        goto LABEL_73;
      }
    }
    v39 = (int)v39;
    do
    {
      if ( s[v39] )
        ++v38;
      ++v39;
    }
    while ( v20 > (int)v39 );
    goto LABEL_61;
  }
LABEL_73:
  v51 = *((void **)this + 14);
  *((_DWORD *)this + 308) = 0;
  *((_QWORD *)this + 112) = 0;
  memset(v51, 0, 8 * v18);
  ClpModel::times(this, 1.0, *((const double **)this + 15), *((double **)this + 14));
  v18 = *((int *)this + 26);
  if ( (int)v18 > 0 )
  {
    v52 = 0;
    v53 = 0;
    si128.m128i_i64[0] = 0x4024000000000000LL;
    do
    {
      while ( 1 )
      {
        *(double *)a8.m128i_i64 = *((double *)this + 110) * -10.0;
        *(double *)a7.m128i_i64 = *(double *)(*((_QWORD *)this + 14) + 8 * v52)
                                - *(double *)(*((_QWORD *)this + 18) + 8 * v52);
        v54 = *(double *)(*((_QWORD *)this + 14) + 8 * v52) - *(double *)(*((_QWORD *)this + 19) + 8 * v52);
        if ( *(double *)a8.m128i_i64 <= *(double *)a7.m128i_i64 )
        {
          *(double *)a6.m128i_i64 = *((double *)this + 110) * 10.0;
          if ( v54 <= *(double *)a6.m128i_i64 )
            break;
        }
        ++*((_DWORD *)this + 308);
        a6.m128i_i64[0] = *((_QWORD *)this + 112);
        if ( *(double *)a7.m128i_i64 < 0.0 )
          v55 = *(double *)a6.m128i_i64 - *(double *)a7.m128i_i64;
        else
          v55 = v54 + *(double *)a6.m128i_i64;
        *((double *)this + 112) = v55;
        s[v52] = 1;
        v18 = *((int *)this + 26);
        if ( (int)++v52 >= (int)v18 )
          goto LABEL_83;
      }
      if ( (*(_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + (int)v52) & 7) != 1 )
      {
        s[v52] = 1;
        v18 = *((int *)this + 26);
        ++v53;
      }
      ++v52;
    }
    while ( (int)v52 < (int)v18 );
LABEL_83:
    v56 = v13 / 2;
    if ( v13 / 2 < 100 )
      v56 = 100;
    if ( v56 <= v53 )
    {
      if ( (int)v18 > 0 )
      {
        v57 = *((_QWORD *)this + 18);
        v58 = *((_QWORD *)this + 19);
        a7.m128i_i64[0] = 0x4A5335AE8A5456DDLL;
        v59 = 0;
        v60 = 0;
        do
        {
          *(_QWORD *)(v15 + 8 * v59) = 0x4A5335AE8A5456DDLL;
          if ( *(double *)(v57 + 8 * v59) == *(double *)(v58 + 8 * v59) )
          {
            v61 = v60;
            *(_QWORD *)(v15 + 8 * v59) = 0;
            ++v60;
            v19[v61] = v59;
          }
          ++v59;
        }
        while ( (unsigned int)(v18 - 1) + 1LL != v59 );
        v62 = v60 >> 1;
        a8.m128i_i64[0] = 0x3DF0000000000000LL;
        v63 = 0;
        v64 = 0;
        *(double *)a6.m128i_i64 = (double)(int)v18;
        v65 = *(_DWORD *)CoinDrand48(bool,unsigned int)::last;
        v66 = (double)(v149 - v62) / (double)(int)v18;
        do
        {
          if ( *(double *)(v15 + 8 * v64) == 1.123e50 )
          {
            v65 = 1664525 * v65 + 1013904223;
            v63 = 1;
            *(double *)a6.m128i_i64 = (double)v65 * 2.328306436538696e-10;
            if ( v66 > *(double *)a6.m128i_i64 )
            {
              v67 = v62++;
              v19[v67] = v64;
              v63 = 1;
            }
          }
          ++v64;
        }
        while ( v64 != v59 );
        if ( v63 )
          *(_DWORD *)CoinDrand48(bool,unsigned int)::last = v65;
      }
      CoinSort_2<double,int>(v15, v15 + 8 * v18, v19);
      v68 = *((int *)this + 26);
      v69 = v149;
      if ( v149 > (int)v68 )
        v69 = *((_DWORD *)this + 26);
      memset(s, 0, v68);
      if ( v69 > 0 )
      {
        v70 = v19;
        do
        {
          v71 = *v70++;
          s[v71] = 1;
        }
        while ( v70 != &v19[v69 - 1 + 1] );
      }
      v18 = *((int *)this + 26);
    }
  }
LABEL_62:
  v40 = *((void **)this + 14);
  *((_DWORD *)this + 308) = 0;
  memset(v40, 0, 8 * v18);
  ClpModel::times(this, 1.0, *((const double **)this + 15), *((double **)this + 14));
  v41 = *((_DWORD *)this + 26);
  if ( v41 <= 0 )
  {
    v47 = *((_DWORD *)this + 308);
    v48 = *((double *)this + 112);
  }
  else
  {
    si128.m128i_i64[0] = *((_QWORD *)this + 110);
    v42 = *((_QWORD *)this + 14);
    v43 = 8LL * (unsigned int)(v41 - 1) + 8;
    v44 = *((_QWORD *)this + 18);
    v45 = *((_QWORD *)this + 19);
    v46 = 0;
    *(double *)a8.m128i_i64 = -10.0 * *(double *)si128.m128i_i64;
    v47 = *((_DWORD *)this + 308);
    v48 = *((double *)this + 112);
    a12.m128i_i64[0] = 0x4024000000000000LL;
    do
    {
      v49 = *(double *)(v42 + v46);
      *(double *)a6.m128i_i64 = v49 - *(double *)(v45 + v46);
      *(double *)a7.m128i_i64 = v49 - *(double *)(v44 + v46);
      if ( *(double *)a8.m128i_i64 > *(double *)a7.m128i_i64
        || *(double *)a6.m128i_i64 > *(double *)si128.m128i_i64 * 10.0 )
      {
        if ( *(double *)a7.m128i_i64 >= 0.0 )
          v48 = v48 + *(double *)a6.m128i_i64;
        else
          v48 = v48 - *(double *)a7.m128i_i64;
        ++v47;
        *((double *)this + 112) = v48;
        *((_DWORD *)this + 308) = v47;
      }
      v46 += 8;
    }
    while ( v43 != v46 );
  }
  printf("Initial infeasibilities - %g (%d)\n", v48, v47);
  v74 = *((_QWORD **)this + 24);
  v75 = *v74;
  v76 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v74 + 56LL);
  if ( v76 == ClpPackedMatrix::getVectorStarts )
  {
    v77 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v75 + 64);
    v148 = *(_QWORD *)(v74[11] + 48LL);
    if ( v77 == ClpPackedMatrix::getVectorLengths )
      goto LABEL_106;
LABEL_205:
    v145 = ((__int64 (__fastcall *)(double, double, double, double, double, double, double, double))v77)(
             v48,
             *(double *)a6.m128i_i64,
             *(double *)a7.m128i_i64,
             *(double *)a8.m128i_i64,
             v72,
             v73,
             *(double *)si128.m128i_i64,
             *(double *)a12.m128i_i64);
    v74 = *((_QWORD **)this + 24);
    v147 = v145;
    v78 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v74 + 48LL);
    if ( v78 == ClpPackedMatrix::getIndices )
      goto LABEL_107;
LABEL_206:
    v146 = ((__int64 (__fastcall *)(double, double, double, double, double, double, double, double))v78)(
             v48,
             *(double *)a6.m128i_i64,
             *(double *)a7.m128i_i64,
             *(double *)a8.m128i_i64,
             v72,
             v73,
             *(double *)si128.m128i_i64,
             *(double *)a12.m128i_i64);
    goto LABEL_108;
  }
  v144 = ((__int64 (__fastcall *)(double, double, double, double, double, double, double, double))v76)(
           v48,
           *(double *)a6.m128i_i64,
           *(double *)a7.m128i_i64,
           *(double *)a8.m128i_i64,
           v72,
           v73,
           *(double *)si128.m128i_i64,
           *(double *)a12.m128i_i64);
  v74 = *((_QWORD **)this + 24);
  v148 = v144;
  v75 = *v74;
  v77 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v74 + 64LL);
  if ( v77 != ClpPackedMatrix::getVectorLengths )
    goto LABEL_205;
LABEL_106:
  v78 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(v75 + 48);
  v147 = *(_QWORD *)(v74[11] + 56LL);
  if ( v78 != ClpPackedMatrix::getIndices )
    goto LABEL_206;
LABEL_107:
  v146 = *(_QWORD *)(v74[11] + 40LL);
LABEL_108:
  *((_DWORD *)this + 80) = 1;
  v154 = 0;
  v150 = (v15 >> 3) & 1;
  while ( 1 )
  {
    printf("Start of pass %d\n", v154);
    v79 = *((_DWORD *)this + 27);
    if ( v79 <= 0 )
    {
      v82 = 0;
    }
    else
    {
      v80 = 0;
      v81 = (unsigned int)(v79 - 1) + 1LL;
      v82 = 0;
      do
      {
        v83 = *(_DWORD *)(v148 + 4 * v80);
        v84 = *(_DWORD *)(v147 + 4 * v80);
        if ( v83 < v83 + v84 )
        {
          v85 = v83;
          v86 = (int *)(v146 + 4LL * v83);
          v87 = v146 + 4 + 4 * ((unsigned int)(v84 - 1) + v85);
          v88 = 0;
          do
          {
            if ( s[*v86] )
              ++v88;
            ++v86;
          }
          while ( (int *)v87 != v86 );
          if ( v88 )
          {
            v89 = v82++;
            v152[v89] = v80;
          }
        }
        ++v80;
      }
      while ( v80 != v81 );
    }
    v90 = *((_DWORD *)this + 26);
    if ( v90 <= 0 )
    {
      v92 = 0;
    }
    else
    {
      v91 = (unsigned int)(v90 - 1);
      v92 = 0;
      v93 = 0;
      v94 = v91 + 1;
      do
      {
        if ( s[v93] )
        {
          v95 = v92++;
          v19[v95] = v93;
        }
        ++v93;
      }
      while ( v94 != v93 );
    }
    ClpSimplex::ClpSimplex((ClpSimplex *)v160, this, v92, v19, v82, v152, 1, 1, 0);
    v98 = *(__int64 (__fastcall **)(double, double, double, double, double, double, double, double))(*v164 + 16LL);
    if ( (char *)v98 == (char *)ClpPackedMatrix::getNumElements )
      v99 = *(_DWORD *)(v164[11] + 72LL);
    else
      v99 = v98(
              v48,
              *(double *)a6.m128i_i64,
              *(double *)a7.m128i_i64,
              *(double *)a8.m128i_i64,
              v96,
              v97,
              *(double *)si128.m128i_i64,
              *(double *)a12.m128i_i64);
    printf("Small model has %d rows, %d columns and %d elements\n", v161, v162, v99);
    ClpSimplex::setFactorizationFrequency((ClpSimplex *)v160, v92 / 0xC8u + 100);
    v100 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) - 1;
    if ( v100 < 0 )
      v100 = 0;
    CoinMessageHandler::setLogLevel(v168, v100);
    if ( v154 > 20 )
    {
      if ( *((double *)this + 112) > 0.1 )
      {
        ClpSimplex::dual((ClpSimplex *)v160, 0, 0);
        goto LABEL_131;
      }
LABEL_164:
      ClpSimplex::primal((ClpSimplex *)v160, 1, 0);
      goto LABEL_131;
    }
    v158 = (ClpPresolve *)operator new(0x68u);
    ClpPresolve::ClpPresolve(v158);
    v126 = (ClpSimplex *)ClpPresolve::presolvedModel(v158, (ClpSimplex *)v160, 0.00001, 1, 5, 0, 0, nullptr, nullptr);
    v127 = *((double *)this + 112);
    if ( v127 <= 0.1 )
      ClpSimplex::primal(v126, 1, 0);
    else
      ClpSimplex::dual(v126, 0, 0);
    (*(void (__fastcall **)(ClpPresolve *, __int64, double, double, double, double, double, double, double, double))(*(_QWORD *)v158 + 16LL))(
      v158,
      1,
      v127,
      *(double *)a6.m128i_i64,
      *(double *)a7.m128i_i64,
      *(double *)a8.m128i_i64,
      v128,
      v129,
      *(double *)si128.m128i_i64,
      *(double *)a12.m128i_i64);
    (*(void (__fastcall **)(ClpPresolve *))(*(_QWORD *)v158 + 8LL))(v158);
    if ( v169 > 1.0 )
      goto LABEL_164;
LABEL_131:
    v101 = v163;
    v155 = v167;
    if ( v82 )
    {
      v102 = 0;
      do
      {
        v103 = v152[v102];
        *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v103) = *(_QWORD *)(v101 + 8 * v102);
        v104 = *(_BYTE *)(v165 + v102++);
        *(_BYTE *)(*((_QWORD *)this + 33) + v103) = *(_BYTE *)(*((_QWORD *)this + 33) + v103) & 0xF8 | v104 & 7;
      }
      while ( (unsigned int)(v82 - 1) + 1LL != v102 );
    }
    if ( v92 )
    {
      v105 = 0;
      do
      {
        v106 = (_BYTE *)(*((_QWORD *)this + 33) + v19[v105] + *((_DWORD *)this + 27));
        v107 = (int)v105++ + v162;
        *v106 = *v106 & 0xF8 | *(_BYTE *)(v165 + v107) & 7;
      }
      while ( (unsigned int)(v92 - 1) + 1LL != v105 );
    }
    memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
    ClpModel::times(this, 1.0, *((const double **)this + 15), *((double **)this + 14));
    if ( v154 == 49 )
      break;
    v108 = *((int *)this + 26);
    v109 = v166;
    if ( (int)v108 <= 0 )
    {
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
      if ( !v92 )
      {
        v151 = 0;
        v153 = 0;
        v157 = 0;
        goto LABEL_176;
      }
      goto LABEL_151;
    }
    if ( (unsigned int)(v108 - 1) <= 4 )
    {
      v113 = 0;
LABEL_145:
      a7.m128i_i64[0] = 0x4A5335AE8A5456DDLL;
      *(_QWORD *)(v15 + 8LL * v113) = 0x4A5335AE8A5456DDLL;
      if ( (int)v108 > v113 + 1 )
      {
        *(_QWORD *)(v15 + 8LL * (v113 + 1)) = 0x4A5335AE8A5456DDLL;
        if ( v113 + 2 < (int)v108 )
        {
          *(_QWORD *)(v15 + 8LL * (v113 + 2)) = 0x4A5335AE8A5456DDLL;
          v114 = v113 + 3;
          if ( v113 + 3 < (int)v108 )
          {
            v115 = v113 + 4;
            *(_QWORD *)(v15 + 8LL * v114) = 0x4A5335AE8A5456DDLL;
            if ( (int)v108 > v115 )
              *(_QWORD *)(v15 + 8LL * v115) = 0x4A5335AE8A5456DDLL;
          }
        }
      }
      goto LABEL_150;
    }
    if ( v150 )
      *(_QWORD *)v15 = 0x4A5335AE8A5456DDLL;
    v110 = v108 - v150;
    v111 = v15 + 8 * ((v15 >> 3) & 1);
    v112 = 0;
    si128.m128i_i64[0] = 0x4A5335AE8A5456DDLL;
    do
    {
      ++v112;
      v111 += 16LL;
      *(_OWORD *)(v111 - 16) = xmmword_291B90;
    }
    while ( (unsigned int)(v108 - v150) >> 1 > v112 );
    v113 = (v110 & 0xFFFFFFFE) + ((v15 >> 3) & 1);
    if ( (v110 & 0xFFFFFFFE) != v110 )
      goto LABEL_145;
LABEL_150:
    *((_DWORD *)this + 308) = 0;
    *((_QWORD *)this + 112) = 0;
    if ( !v92 )
    {
      v151 = 0;
      v153 = 0;
      v157 = 0;
LABEL_171:
      a7.m128i_i64[0] = 0x4A5335AE8A5456DDLL;
      v132 = 0;
      do
      {
        v133 = *(double *)(v15 + 8 * v132) == 1.123e50;
        v19[v132] = v132;
        if ( v133 )
        {
          v134 = *(double *)(*((_QWORD *)this + 14) + 8 * v132);
          v135 = fmax(
                   v134 - *(double *)(*((_QWORD *)this + 19) + 8 * v132),
                   *(double *)(*((_QWORD *)this + 18) + 8 * v132) - v134);
          *(double *)a6.m128i_i64 = -v135;
          v125 = v135 <= *((double *)this + 110);
          *(double *)(v15 + 8 * v132) = -v135;
          if ( !v125 )
          {
            v136 = v135 + *((double *)this + 112);
            ++*((_DWORD *)this + 308);
            *((double *)this + 112) = v136;
          }
        }
        ++v132;
      }
      while ( (int)v108 > (int)v132 );
      goto LABEL_176;
    }
LABEL_151:
    v116 = 0;
    v117 = *((_DWORD *)this + 27);
    v118 = *((_QWORD *)this + 33);
    if ( v154 <= 29 && v155 != 2 )
    {
      v156 = v109;
      v119 = 0;
      v151 = 0;
      a7.m128i_i64[0] = 0xCA511B0EC57E649ALL;
      v120 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v121 = v19[v116];
          v122 = (double *)(v15 + 8 * v121);
          if ( (*(_BYTE *)(v118 + v117 + v19[v116]) & 7) == 1 )
            break;
          *v122 = -1.0e50;
          ++v120;
          ++v119;
LABEL_155:
          if ( v92 <= (int)++v116 )
            goto LABEL_160;
        }
        v123 = *(double *)(*((_QWORD *)this + 14) + 8 * v121);
        v124 = fmax(
                 v123 - *(double *)(*((_QWORD *)this + 19) + 8 * v121),
                 *(double *)(*((_QWORD *)this + 18) + 8 * v121) - v123);
        *(double *)a6.m128i_i64 = -v124;
        v125 = v124 <= *((double *)this + 110);
        *v122 = -v124;
        if ( !v125 && v156 )
        {
          v143 = v124 + *((double *)this + 112);
          ++*((_DWORD *)this + 308);
          *((double *)this + 112) = v143;
          goto LABEL_155;
        }
        ++v116;
        ++v151;
        *v122 = 1.0;
        if ( v92 <= (int)v116 )
        {
LABEL_160:
          v157 = v120;
          v153 = v119;
          goto LABEL_170;
        }
      }
    }
    v130 = 0;
    a6.m128i_i64[0] = 0xC83D6329F1C35CA5LL;
    do
    {
      while ( 1 )
      {
        v131 = (_QWORD *)(v15 + 8LL * v19[v116]);
        if ( (*(_BYTE *)(v118 + v117 + v19[v116]) & 7) == 1 )
          break;
        ++v116;
        ++v130;
        *v131 = 0xCA511B0EC57E649ALL;
        if ( v92 <= (int)v116 )
          goto LABEL_169;
      }
      ++v116;
      *v131 = 0xC83D6329F1C35CA5LL;
    }
    while ( v92 > (int)v116 );
LABEL_169:
    v153 = v130;
    v157 = v92;
    v151 = 0;
LABEL_170:
    if ( (int)v108 > 0 )
      goto LABEL_171;
LABEL_176:
    CoinSort_2<double,int>(v15, v15 + 8 * v108, v19);
    v137 = *((int *)this + 26);
    v138 = v157 + v149;
    if ( v157 + v149 > (int)v137 )
      v138 = *((_DWORD *)this + 26);
    memset(s, 0, v137);
    if ( v138 > 0 )
    {
      v139 = v19;
      do
      {
        v140 = *v139++;
        s[v140] = 1;
      }
      while ( &v19[v138 - 1 + 1] != v139 );
    }
    printf(
      "%d rows binding, %d rows kept, %d rows dropped - new size %d rows, %d columns\n",
      v153,
      v157,
      v151,
      v138,
      v82);
    printf("%d rows are infeasible - sum is %g\n", *((_DWORD *)this + 308), *((double *)this + 112));
    if ( !*((_DWORD *)this + 308) )
    {
      *((_DWORD *)this + 80) = 0;
      puts("Exiting as looks optimal");
      ClpSimplex::~ClpSimplex((ClpSimplex *)v160);
      goto LABEL_200;
    }
    *((_DWORD *)this + 308) = 0;
    *((_QWORD *)this + 112) = 0;
    if ( v138 <= 0 )
    {
      v141 = 0;
      v48 = 0.0;
    }
    else
    {
      v48 = 0.0;
      a7.m128i_i64[0] = 0xC6293E5939A08CEALL;
      a8.m128i_i64[0] = 0xBE45798EE2308C3ALL;
      v141 = 0;
      v142 = (unsigned __int64 *)v15;
      do
      {
        a6.m128i_i64[0] = *v142;
        if ( *(double *)v142 > -1.0e30 && *(double *)a6.m128i_i64 < -0.00000001 )
        {
          v48 = v48 - *(double *)a6.m128i_i64;
          *((_DWORD *)this + 308) = ++v141;
          *((double *)this + 112) = v48;
        }
        ++v142;
      }
      while ( v142 != (unsigned __int64 *)(v15 + 8LL * (unsigned int)(v138 - 1) + 8) );
    }
    printf("in small model %d rows are infeasible - sum is %g\n", v141, v48);
    ClpSimplex::~ClpSimplex((ClpSimplex *)v160);
    ++v154;
  }
  *((_DWORD *)this + 80) = -1;
  ClpSimplex::~ClpSimplex((ClpSimplex *)v160);
LABEL_200:
  operator delete[]((void *)v15);
  operator delete[](v19);
  return 0;
}

