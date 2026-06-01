CoinPresolveMatrix *__fastcall slack_singleton_action::presolve(
        slack_singleton_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3,
        double *a4)
{
  slack_singleton_action *v4; // r11
  int v5; // ecx
  unsigned __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rbp
  int v10; // edx
  CoinPrePostsolveMatrix *v11; // r11
  __int64 v12; // r9
  __int64 v13; // r11
  __m128i v14; // xmm5
  bool v15; // dl
  __int64 v16; // rbx
  __int64 v17; // r8
  double v18; // xmm12_8
  unsigned __int64 v19; // r10
  __int64 v20; // rbp
  __int64 v21; // r12
  int v22; // r13d
  double *v23; // r14
  _DWORD *v24; // r15
  __int64 v25; // rax
  double v26; // xmm1_8
  double v27; // xmm10_8
  double v28; // xmm2_8
  int v29; // ecx
  __int64 v30; // rdx
  int v31; // ecx
  int *v32; // rdi
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // r12
  bool v36; // cl
  bool v37; // dl
  __int64 v38; // rax
  double v39; // xmm4_8
  double v40; // xmm6_8
  double v41; // xmm9_8
  __m128d v42; // xmm10
  double v43; // xmm3_8
  __m128d v44; // xmm10
  double v45; // xmm3_8
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // xmm4_8
  int *v49; // rcx
  __int64 v50; // rdx
  __int64 *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // xmm4_8
  double v54; // xmm3_8
  int v55; // eax
  int v56; // edi
  __int64 v57; // rcx
  double v58; // xmm2_8
  __int64 m128i_i64; // rcx
  int v60; // edi
  __int64 v61; // rsi
  __int64 v62; // rax
  _DWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdi
  __int64 v67; // rcx
  int v68; // esi
  __int64 v69; // rax
  _BYTE *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  double v73; // xmm3_8
  double v74; // xmm2_8
  double v75; // xmm6_8
  double v76; // xmm4_8
  double v77; // xmm2_8
  __int64 v78; // rsi
  int v79; // ebp
  _DWORD *v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  int *v84; // r12
  int v85; // ecx
  __int64 v86; // rax
  CoinPresolveMatrix *v87; // rbx
  __int64 v88; // rbp
  __int64 v89; // rdx
  const __m128i *v90; // rax
  __m128i v91; // xmm0
  __int64 v92; // rax
  const __m128i *v93; // rdx
  __m128i *v94; // rax
  const CoinPresolveAction *v95; // r9
  int v97; // edi
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  unsigned int v100; // edx
  int v101; // r9d
  int v102; // ebp
  __m128i v103; // xmm2
  const __m128i *v104; // rdx
  unsigned int v105; // r10d
  unsigned int v106; // eax
  __m128i v107; // xmm0
  __m128i v108; // xmm2
  unsigned int v109; // r9d
  int v110; // esi
  int v111; // r8d
  int v112; // esi
  unsigned __int64 v113; // rdi
  __int64 v114; // rax
  unsigned int v115; // edx
  int v116; // r10d
  int v117; // ebp
  __m128i v118; // xmm2
  const __m128i *v119; // rcx
  unsigned int v120; // r12d
  unsigned int v121; // eax
  __m128i v122; // xmm0
  __m128i v123; // xmm2
  unsigned int v124; // r10d
  int v125; // edx
  __int64 v126; // rax
  unsigned int v127; // edx
  int v128; // edi
  int v129; // r9d
  __m128i v130; // xmm1
  const __m128i *v131; // rdx
  unsigned int v132; // r8d
  unsigned int v133; // eax
  __m128i si128; // xmm0
  __m128i v135; // xmm1
  unsigned int v136; // eax
  int v137; // ebx
  int v138; // ebx
  int v139; // ebx
  int v140; // ebx
  int v141; // eax
  signed int v142; // edi
  unsigned __int64 v143; // rbx
  __int64 v144; // rax
  unsigned int v145; // edx
  int v146; // esi
  int v147; // r9d
  __m128i v148; // xmm1
  const __m128i *v149; // rdx
  unsigned int v150; // r8d
  unsigned int v151; // eax
  __m128i v152; // xmm0
  __m128i v153; // xmm1
  unsigned int v154; // esi
  int v155; // ebx
  int v156; // ebx
  int v157; // ebx
  int v158; // ebx
  __int64 v159; // rax
  __m128d v160; // xmm4
  __m128d v161; // xmm4
  CoinPrePostsolveMatrix *v162; // [rsp+8h] [rbp-260h]
  CoinPrePostsolveMatrix *v163; // [rsp+8h] [rbp-260h]
  __int64 v165; // [rsp+10h] [rbp-258h]
  __int64 v166; // [rsp+18h] [rbp-250h]
  __m128i *src; // [rsp+20h] [rbp-248h]
  __int64 v168; // [rsp+28h] [rbp-240h]
  int v169; // [rsp+28h] [rbp-240h]
  double v170; // [rsp+30h] [rbp-238h]
  int *v171; // [rsp+30h] [rbp-238h]
  __int64 v172; // [rsp+38h] [rbp-230h]
  _QWORD *v173; // [rsp+38h] [rbp-230h]
  __int64 v174; // [rsp+40h] [rbp-228h]
  __int64 v175; // [rsp+48h] [rbp-220h]
  __int64 v176; // [rsp+50h] [rbp-218h]
  __int64 v177; // [rsp+58h] [rbp-210h]
  int v178; // [rsp+64h] [rbp-204h]
  double *v179; // [rsp+68h] [rbp-200h]
  int v180; // [rsp+70h] [rbp-1F8h]
  int v181; // [rsp+74h] [rbp-1F4h]
  CoinPresolveMatrix *v182; // [rsp+78h] [rbp-1F0h]
  __int64 v184; // [rsp+88h] [rbp-1E0h]
  __int64 v185; // [rsp+90h] [rbp-1D8h]
  unsigned int v186; // [rsp+98h] [rbp-1D0h]
  int v187; // [rsp+9Ch] [rbp-1CCh]
  unsigned __int64 v189; // [rsp+A8h] [rbp-1C0h]
  __int64 v190; // [rsp+B0h] [rbp-1B8h]
  __int64 v191; // [rsp+B8h] [rbp-1B0h]
  double *v192; // [rsp+C0h] [rbp-1A8h]
  double *v193; // [rsp+C8h] [rbp-1A0h]
  __int64 v194; // [rsp+D0h] [rbp-198h]
  __int64 v195; // [rsp+E0h] [rbp-188h]
  double v196; // [rsp+E8h] [rbp-180h]
  int v197; // [rsp+F0h] [rbp-178h]
  bool v198; // [rsp+F7h] [rbp-171h]
  __int64 v199; // [rsp+F8h] [rbp-170h]
  __m128i *v200; // [rsp+100h] [rbp-168h]
  int v201; // [rsp+100h] [rbp-168h]
  __m128i v202; // [rsp+100h] [rbp-168h]
  double v203; // [rsp+110h] [rbp-158h]
  _DWORD *v204; // [rsp+130h] [rbp-138h]
  __int64 v205; // [rsp+140h] [rbp-128h]
  __int64 v206; // [rsp+148h] [rbp-120h]
  __m128i v207; // [rsp+150h] [rbp-118h]
  unsigned __int64 v208; // [rsp+150h] [rbp-118h]
  __int64 v209; // [rsp+170h] [rbp-F8h]
  __int64 v210; // [rsp+180h] [rbp-E8h]
  __int64 v211; // [rsp+188h] [rbp-E0h]
  unsigned __int64 v212; // [rsp+190h] [rbp-D8h]
  __int64 v213; // [rsp+198h] [rbp-D0h]
  struct rusage usage; // [rsp+1A0h] [rbp-C8h] BYREF

  v4 = this;
  if ( !*((_BYTE *)this + 321) )
  {
    v5 = *((_DWORD *)this + 1);
    v180 = 0;
    v181 = 0;
    v6 = *((_QWORD *)this + 6);
    v196 = 0.0;
    v189 = *((_QWORD *)this + 36);
    goto LABEL_3;
  }
  getrusage(RUSAGE_SELF, &usage);
  v4 = this;
  v5 = *((_DWORD *)this + 1);
  v196 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  if ( v5 <= 0 )
  {
    v181 = 0;
    v189 = *((_QWORD *)this + 36);
    goto LABEL_166;
  }
  v189 = *((_QWORD *)this + 36);
  v126 = -(int)(v189 >> 2) & 3;
  v127 = v126 + 3;
  if ( (unsigned int)(v126 + 3) < 5 )
    v127 = 5;
  if ( v5 - 1 < v127 )
  {
    v181 = 0;
    v136 = 0;
LABEL_160:
    v181 += *(_DWORD *)(v189 + 4LL * (int)v136) == 0;
    if ( v5 > (int)(v136 + 1) )
    {
      v137 = (*(_DWORD *)(v189 + 4LL * (int)(v136 + 1)) == 0) + v181;
      v181 = v137;
      if ( v5 > (int)(v136 + 2) )
      {
        v138 = (*(_DWORD *)(v189 + 4LL * (int)(v136 + 2)) == 0) + v137;
        v181 = v138;
        if ( v5 > (int)(v136 + 3) )
        {
          v139 = (*(_DWORD *)(v189 + 4LL * (int)(v136 + 3)) == 0) + v138;
          v181 = v139;
          if ( v5 > (int)(v136 + 4) )
          {
            v140 = (*(_DWORD *)(v189 + 4LL * (int)(v136 + 4)) == 0) + v139;
            v141 = v136 + 5;
            v181 = v140;
            if ( v5 > v141 )
              v181 = (*(_DWORD *)(v189 + 4LL * v141) == 0) + v140;
          }
        }
      }
    }
    goto LABEL_166;
  }
  if ( (_DWORD)v126 )
  {
    v128 = 1;
    v129 = *(_DWORD *)v189 == 0;
    if ( (_DWORD)v126 != 1 )
    {
      v128 = 2;
      v129 += *(_DWORD *)(v189 + 4) == 0;
      if ( (_DWORD)v126 != 2 )
      {
        v128 = 3;
        v129 += *(_DWORD *)(v189 + 8) == 0;
      }
    }
  }
  else
  {
    v129 = 0;
    v128 = 0;
  }
  v130 = 0;
  v131 = (const __m128i *)(v189 + 4 * v126);
  v132 = v5 - v126;
  v133 = 0;
  do
  {
    si128 = _mm_load_si128(v131);
    ++v133;
    ++v131;
    v130 = _mm_sub_epi32(v130, _mm_cmpeq_epi32(si128, (__m128i)0LL));
  }
  while ( v132 >> 2 > v133 );
  v135 = _mm_add_epi32(v130, _mm_srli_si128(v130, 8));
  v181 = v129 + _mm_cvtsi128_si32(_mm_add_epi32(v135, _mm_srli_si128(v135, 4)));
  v136 = (v132 & 0xFFFFFFFC) + v128;
  if ( v132 != (v132 & 0xFFFFFFFC) )
    goto LABEL_160;
LABEL_166:
  v142 = *(_DWORD *)this;
  v143 = *((_QWORD *)this + 6);
  v6 = v143;
  if ( *(int *)this <= 0 )
  {
    v180 = 0;
  }
  else
  {
    v144 = -(int)(v143 >> 2) & 3;
    v145 = v144 + 3;
    if ( (unsigned int)(v144 + 3) < 5 )
      v145 = 5;
    if ( v145 > v142 - 1 )
    {
      v154 = 0;
      v180 = 0;
    }
    else
    {
      if ( (_DWORD)v144 )
      {
        v146 = 1;
        v147 = *(_DWORD *)v143 == 0;
        if ( (_DWORD)v144 != 1 )
        {
          v146 = 2;
          v147 += *(_DWORD *)(v143 + 4) == 0;
          if ( (_DWORD)v144 != 2 )
          {
            v146 = 3;
            v147 += *(_DWORD *)(v143 + 8) == 0;
          }
        }
      }
      else
      {
        v146 = 0;
        v147 = 0;
      }
      v148 = 0;
      v149 = (const __m128i *)(v143 + 4 * v144);
      v150 = v142 - v144;
      v151 = 0;
      do
      {
        v152 = _mm_load_si128(v149);
        ++v151;
        ++v149;
        v148 = _mm_sub_epi32(v148, _mm_cmpeq_epi32(v152, (__m128i)0LL));
      }
      while ( v150 >> 2 > v151 );
      v153 = _mm_add_epi32(v148, _mm_srli_si128(v148, 8));
      v180 = v147 + _mm_cvtsi128_si32(_mm_add_epi32(v153, _mm_srli_si128(v153, 4)));
      v154 = (v150 & 0xFFFFFFFC) + v146;
      if ( (v150 & 0xFFFFFFFC) == v150 )
        goto LABEL_3;
    }
    v180 += *(_DWORD *)(v143 + 4LL * (int)v154) == 0;
    if ( v142 > (int)(v154 + 1) )
    {
      v155 = (*(_DWORD *)(v143 + 4LL * (int)(v154 + 1)) == 0) + v180;
      v180 = v155;
      if ( v142 > (int)(v154 + 2) )
      {
        v156 = (*(_DWORD *)(v6 + 4LL * (int)(v154 + 2)) == 0) + v155;
        v180 = v156;
        if ( v142 > (int)(v154 + 3) )
        {
          v157 = (*(_DWORD *)(v6 + 4LL * (int)(v154 + 3)) == 0) + v156;
          v180 = v157;
          if ( v142 > (int)(v154 + 4) )
          {
            v158 = (*(_DWORD *)(v6 + 4LL * (int)(v154 + 4)) == 0) + v157;
            v180 = v158;
            if ( v142 > (int)(v154 + 5) )
              v180 = (*(_DWORD *)(v6 + 4LL * (int)(v154 + 5)) == 0) + v158;
          }
        }
      }
    }
  }
LABEL_3:
  v7 = *((_DWORD *)v4 + 94);
  v8 = *((_QWORD *)v4 + 25);
  v165 = *((_QWORD *)v4 + 8);
  v170 = *((double *)v4 + 17);
  v168 = *((_QWORD *)v4 + 9);
  v174 = *((_QWORD *)v4 + 7);
  v166 = *((_QWORD *)v4 + 5);
  v176 = *((_QWORD *)v4 + 11);
  v177 = *((_QWORD *)v4 + 12);
  v194 = *((_QWORD *)v4 + 37);
  v184 = *((_QWORD *)v4 + 38);
  v195 = *((_QWORD *)v4 + 35);
  v190 = *((_QWORD *)v4 + 13);
  v191 = *((_QWORD *)v4 + 14);
  v199 = *((_QWORD *)v4 + 22);
  v185 = *((_QWORD *)v4 + 20);
  v175 = *((_QWORD *)v4 + 39);
  v187 = v7;
  v162 = v4;
  v9 = *((_QWORD *)v4 + 46);
  v10 = v5 / 10;
  if ( v5 / 10 > v7 )
    v10 = *((_DWORD *)v4 + 94);
  v197 = v10 + 1;
  if ( (unsigned __int64)(v10 + 1) > 0x2AAAAAAAAAAAAAALL
    || (src = (__m128i *)operator new[](48LL * (v10 + 1)), (unsigned __int64)v7 > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_213:
    __cxa_throw_bad_array_new_length();
  }
  v172 = v168;
  v182 = (CoinPresolveMatrix *)operator new[](4LL * v7);
  v11 = v162;
  if ( v7 <= 0 )
  {
    v87 = a2;
    goto LABEL_112;
  }
  v186 = 0;
  v169 = 0;
  v12 = v172;
  v13 = v9;
  v14 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v15 = v185 != 0 && v8 != 0;
  v16 = 0;
  v198 = v15;
  v17 = (unsigned int)(v7 - 1) + 1LL;
  v18 = v170;
  v19 = v6;
  do
  {
    while ( 1 )
    {
      v20 = *(int *)(v13 + 4 * v16);
      v21 = 8 * v20;
      v22 = *(_DWORD *)(v13 + 4 * v16);
      v23 = (double *)(v12 + 8 * v20);
      if ( *v23 != 0.0 )
        goto LABEL_9;
      v24 = (_DWORD *)(v19 + 4 * v20);
      if ( *v24 != 1 )
        goto LABEL_9;
      v171 = (int *)(v166 + 4 * v20);
      v25 = *v171;
      v26 = *(double *)(v165 + 8 * v25);
      if ( COERCE_DOUBLE(*(_QWORD *)&v26 & v14.m128i_i64[0]) < 1.0e-10 )
        goto LABEL_9;
      v27 = *(double *)(v177 + 8 * v20);
      v173 = (_QWORD *)(v177 + v21);
      v28 = *(double *)(v176 + 8 * v20);
      v179 = (double *)(v176 + v21);
      if ( v18 > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v27 - v28) & v14.m128i_i64[0]) )
        goto LABEL_9;
      v29 = *(_DWORD *)(v174 + 4 * v25);
      v178 = v29;
      if ( v175 && *(_BYTE *)(v175 + v20) )
      {
        if ( COERCE_DOUBLE(*(_QWORD *)&v26 & v14.m128i_i64[0]) != 1.0 )
          goto LABEL_9;
        if ( *(double *)(v191 + 8LL * v29) == 1.0 && *(double *)(v190 + 8LL * v29) == 1.0 && v26 == 1.0 )
        {
          v30 = *(int *)(v195 + 4LL * v29);
          v31 = *(_DWORD *)(v189 + 4LL * v29);
          if ( (int)v30 >= (int)v30 + v31 )
            goto LABEL_9;
          v32 = (int *)(v184 + 4 * v30);
          v33 = (_QWORD *)(v194 + 8 * v30);
          if ( *(_BYTE *)(v175 + *v32) && COERCE_DOUBLE(*v33 & v14.m128i_i64[0]) == 1.0 )
          {
            v34 = 0;
            v35 = (unsigned int)(v31 - 1);
            do
            {
              if ( v34 == v35 )
                goto LABEL_9;
              v36 = *(_BYTE *)(v175 + v32[v34 + 1]) == 0;
              v37 = COERCE_DOUBLE(v33[++v34] & v14.m128i_i64[0]) != 1.0;
            }
            while ( !v37 && !v36 );
            v21 = 8 * v20;
          }
        }
      }
      if ( (*(_BYTE *)(*((_QWORD *)v162 + 45) + v20) & 2) != 0 )
        goto LABEL_9;
      v38 = 8LL * v178;
      v192 = (double *)(v38 + v190);
      v193 = (double *)(v38 + v191);
      if ( a3 )
      {
        if ( *((double *)a3 + v178) != 0.0 )
          goto LABEL_9;
      }
      v203 = *v192;
      v39 = *(double *)(v38 + v191);
      if ( v26 < 0.0 )
      {
        v40 = 1.797693134862316e308;
        if ( v39 <= 1.0e20 && v27 <= 1.0e20 )
        {
          v40 = v39 - v27 * v26;
          if ( v40 > 1.0e20 )
            v40 = 1.797693134862316e308;
        }
        v41 = -1.797693134862316e308;
        if ( v203 >= -1.0e20 && v28 >= -1.0e20 )
        {
          v41 = v203 - v28 * v26;
          if ( v41 < -1.0e20 )
LABEL_194:
            v41 = -1.797693134862316e308;
        }
      }
      else
      {
        if ( v39 <= 1.0e20 )
        {
          v40 = 1.797693134862316e308;
          if ( v28 >= -1.0e20 )
          {
            v40 = v39 - v28 * v26;
            if ( v40 > 1.0e20 )
              v40 = 1.797693134862316e308;
          }
        }
        else
        {
          v40 = 1.797693134862316e308;
        }
        v41 = -1.797693134862316e308;
        if ( v203 >= -1.0e20 && v27 <= 1.0e20 )
        {
          v41 = v203 - v27 * v26;
          if ( v41 < -1.0e20 )
            goto LABEL_194;
        }
      }
      if ( !v175 || !*(_BYTE *)(v175 + v20) )
        goto LABEL_53;
      if ( v41 <= -1.0e30 )
        goto LABEL_44;
      v42.m128d_f64[0] = v41 + 0.5;
      v43 = v41 + 0.5;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41 + 0.5) & v14.m128i_i64[0]) < 4.503599627370496e15 )
      {
        v161 = 0;
        v161.m128d_f64[0] = (double)(int)v42.m128d_f64[0];
        *(_QWORD *)&v43 = COERCE_UNSIGNED_INT64(
                            v161.m128d_f64[0]
                          - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v161, v42).m128d_f64[0] & 0x3FF0000000000000LL))
                        | ~v14.m128i_i64[0] & *(_QWORD *)&v42.m128d_f64[0];
      }
      if ( v43 == v41 )
      {
LABEL_44:
        if ( v40 >= 1.0e30 )
          break;
        v44.m128d_f64[0] = v40 + 0.5;
        v45 = v40 + 0.5;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v40 + 0.5) & v14.m128i_i64[0]) < 4.503599627370496e15 )
        {
          v160 = 0;
          v160.m128d_f64[0] = (double)(int)v44.m128d_f64[0];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(
                              v160.m128d_f64[0]
                            - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v160, v44).m128d_f64[0] & 0x3FF0000000000000LL))
                          | ~v14.m128i_i64[0] & *(_QWORD *)&v44.m128d_f64[0];
        }
        if ( v45 == v40 )
          break;
      }
LABEL_9:
      if ( ++v16 == v17 )
        goto LABEL_96;
    }
    v46 = *(int *)(v195 + 4LL * v178);
    v47 = *(_DWORD *)(v189 + 4LL * v178);
    if ( (int)v46 < (int)v46 + v47 )
    {
      v48 = *(_QWORD *)(v194 + 8 * v46) & v14.m128i_i64[0];
      if ( *(_BYTE *)(v175 + *(int *)(v184 + 4 * v46)) )
      {
        v49 = (int *)(v184 + 4 * v46 + 4);
        v50 = v184 + 4 * ((unsigned int)(v47 - 1) + v46) + 4;
        v51 = (__int64 *)(v194 + 8 * v46 + 8);
        while ( 1 )
        {
          v54 = *(double *)&v48 + 0.5;
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(double *)&v48 + 0.5) & v14.m128i_i64[0]) < 4.503599627370496e15 )
            *(_QWORD *)&v54 = COERCE_UNSIGNED_INT64((double)(int)v54)
                            | ~v14.m128i_i64[0] & COERCE_UNSIGNED_INT64(*(double *)&v48 + 0.5);
          if ( v54 != *(double *)&v48 )
            break;
          if ( v49 == (int *)v50 )
            goto LABEL_53;
          v52 = *v49;
          v53 = *v51;
          ++v49;
          ++v51;
          v48 = v53 & v14.m128i_i64[0];
          if ( !*(_BYTE *)(v175 + v52) )
            goto LABEL_9;
        }
      }
      goto LABEL_9;
    }
LABEL_53:
    if ( v169 < v197 )
    {
      v57 = 3LL * v169;
    }
    else
    {
      v213 = v17;
      v212 = v19;
      v211 = v13;
      v210 = v12;
      v55 = v187 - v16;
      if ( v187 - (int)v16 > v197 )
        v55 = v197;
      v56 = v55 + v197;
      v197 = v56;
      v207 = v14;
      if ( (unsigned __int64)v56 > 0x2AAAAAAAAAAAAAALL )
        goto LABEL_213;
      v200 = (__m128i *)operator new[](48LL * v56);
      memcpy(v200, src, 48LL * v169);
      operator delete[](src);
      v57 = 3LL * v169;
      v12 = v210;
      v13 = v211;
      v17 = v213;
      src = v200;
      v19 = v212;
      v28 = *v179;
      v14 = v207;
    }
    m128i_i64 = (__int64)src[v57].m128i_i64;
    ++v169;
    *(double *)m128i_i64 = v28;
    *(_DWORD *)(m128i_i64 + 40) = v22;
    *(_QWORD *)(m128i_i64 + 8) = *v173;
    *(_DWORD *)(m128i_i64 + 44) = v178;
    *(double *)(m128i_i64 + 16) = *v192;
    v58 = *v193;
    *(double *)(m128i_i64 + 32) = v26;
    *(double *)(m128i_i64 + 24) = v58;
    LODWORD(m128i_i64) = *(_DWORD *)(v195 + 4LL * v178);
    v60 = *(_DWORD *)(v189 + 4LL * v178);
    v204 = (_DWORD *)(v189 + 4LL * v178);
    v61 = (int)m128i_i64;
    v201 = m128i_i64 + v60;
    v62 = 4LL * (int)m128i_i64;
    v63 = (_DWORD *)(v62 + v184);
    if ( (int)m128i_i64 >= (int)m128i_i64 + v60 || v22 == *v63 )
    {
      m128i_i64 = (int)m128i_i64;
    }
    else
    {
      m128i_i64 = (int)m128i_i64 + 1LL;
      v64 = v184 + v62 + 4;
      v65 = v184 + 4 * ((unsigned int)(v60 - 1) + v61) + 4;
      while ( 1 )
      {
        v63 = (_DWORD *)v64;
        if ( v64 == v65 )
          break;
        v64 += 4;
        if ( v22 == *v63 )
          break;
        ++m128i_i64;
      }
    }
    *v63 = *(_DWORD *)(v184 + 4LL * v201 - 4);
    *(_QWORD *)(v194 + 8 * m128i_i64) = *(_QWORD *)(v194 + 8LL * v201 - 8);
    if ( (*v204)-- == 1 )
    {
      v67 = *((_QWORD *)v162 + 33);
      v68 = *(_DWORD *)(v67 + 8LL * v178);
      v69 = *(int *)(v67 + 8LL * v178 + 4);
      if ( v68 >= 0 )
        *(_DWORD *)(v67 + 8LL * v68 + 4) = v69;
      if ( (int)v69 >= 0 )
        *(_DWORD *)(v67 + 8 * v69) = v68;
      *(_QWORD *)(v67 + 8LL * v178) = 0xFC06BF56FC06BF56LL;
    }
    v70 = (_BYTE *)(*((_QWORD *)v162 + 50) + v178);
    if ( (*v70 & 1) == 0 )
    {
      *v70 |= 1u;
      v71 = *((int *)v162 + 108);
      v72 = *((_QWORD *)v162 + 53);
      *((_DWORD *)v162 + 108) = v71 + 1;
      *(_DWORD *)(v72 + 4 * v71) = v178;
    }
    *v192 = v41;
    *v193 = v40;
    if ( v198 )
    {
      v73 = *(double *)(v185 + 8 * v20);
      if ( *(double *)v173 - v18 > v73 && v73 > *v179 + v18 || (*(_BYTE *)(*((_QWORD *)v162 + 24) + v20) & 7) == 1 )
        *(_BYTE *)(*((_QWORD *)v162 + 25) + v178) = *(_BYTE *)(*((_QWORD *)v162 + 25) + v178) & 0xF8 | 1;
      v209 = v17;
      v208 = v19;
      v206 = v13;
      v205 = v12;
      v202 = v14;
      CoinPrePostsolveMatrix::setColumnStatusUsingValue(v162, v22);
      v17 = v209;
      v19 = v208;
      v13 = v206;
      v12 = v205;
      v14 = v202;
    }
    *v179 = 0.0;
    *v173 = 0;
    if ( a3 && *v23 != 0.0 )
    {
      v74 = -*v23 / v26;
      *((double *)a3 + v178) = v74;
      *((double *)v162 + 34) = *((double *)v162 + 34) - v74 * v203;
    }
    if ( v185 )
    {
      v75 = *(double *)(v21 + v185);
      v76 = *v179;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v75 - *(double *)v173) & v14.m128i_i64[0]) <= COERCE_DOUBLE(
                                                                                               COERCE_UNSIGNED_INT64(v75 - *v179)
                                                                                             & v14.m128i_i64[0]) )
      {
        v76 = *(double *)v173;
        v77 = *(double *)v173 - v75;
      }
      else
      {
        v77 = v76 - v75;
      }
      *(double *)(v21 + v185) = v76;
      if ( v77 != 0.0 )
        *(double *)(v199 + 8LL * v178) = v26 * v77 + *(double *)(v199 + 8LL * v178);
    }
    v78 = *v171;
    v79 = v78 + *v24;
    v80 = (_DWORD *)(v174 + 4 * v78);
    if ( (int)v78 >= v79 || v178 == *v80 )
    {
      v81 = *v171;
    }
    else
    {
      v81 = v78 + 1;
      v82 = v174 + 4 * v78 + 4;
      while ( 1 )
      {
        v80 = (_DWORD *)v82;
        if ( v82 == v174 + 4 * ((unsigned int)(*v24 - 1) + v78) + 4 )
          break;
        v82 += 4;
        if ( v178 == *v80 )
          break;
        ++v81;
      }
    }
    *v80 = *(_DWORD *)(v174 + 4LL * v79 - 4);
    *(_QWORD *)(v165 + 8 * v81) = *(_QWORD *)(v165 + 8LL * v79 - 8);
    --*v24;
    v83 = *((_QWORD *)v162 + 32);
    v84 = (int *)(v83 + v21);
    v85 = *v84;
    v86 = v84[1];
    if ( *v84 >= 0 )
      *(_DWORD *)(v83 + 8LL * v85 + 4) = v86;
    if ( (int)v86 >= 0 )
      *(_DWORD *)(v83 + 8 * v86) = v85;
    ++v16;
    *(_QWORD *)v84 = 0xFC06BF56FC06BF56LL;
    *((_DWORD *)v182 + (int)v186++) = v22;
  }
  while ( v16 != v17 );
LABEL_96:
  v11 = v162;
  v87 = a2;
  if ( v169 )
  {
    v88 = operator new[](48LL * v169);
    if ( src != (__m128i *)v88 )
    {
      if ( v169 >> 3 <= 0 )
      {
        v93 = src;
        v94 = (__m128i *)v88;
      }
      else
      {
        v89 = v88;
        v90 = src;
        do
        {
          v91 = _mm_loadu_si128(v90);
          v90 += 24;
          v89 += 384;
          *(__m128i *)(v89 - 384) = v91;
          *(__m128i *)(v89 - 368) = _mm_loadu_si128(v90 - 23);
          *(__m128i *)(v89 - 352) = _mm_loadu_si128(v90 - 22);
          *(__m128i *)(v89 - 336) = _mm_loadu_si128(v90 - 21);
          *(__m128i *)(v89 - 320) = _mm_loadu_si128(v90 - 20);
          *(__m128i *)(v89 - 304) = _mm_loadu_si128(v90 - 19);
          *(__m128i *)(v89 - 288) = _mm_loadu_si128(v90 - 18);
          *(__m128i *)(v89 - 272) = _mm_loadu_si128(v90 - 17);
          *(__m128i *)(v89 - 256) = _mm_loadu_si128(v90 - 16);
          *(__m128i *)(v89 - 240) = _mm_loadu_si128(v90 - 15);
          *(__m128i *)(v89 - 224) = _mm_loadu_si128(v90 - 14);
          *(__m128i *)(v89 - 208) = _mm_loadu_si128(v90 - 13);
          *(__m128i *)(v89 - 192) = _mm_loadu_si128(v90 - 12);
          *(__m128i *)(v89 - 176) = _mm_loadu_si128(v90 - 11);
          *(__m128i *)(v89 - 160) = _mm_loadu_si128(v90 - 10);
          *(__m128i *)(v89 - 144) = _mm_loadu_si128(v90 - 9);
          *(__m128i *)(v89 - 128) = _mm_loadu_si128(v90 - 8);
          *(__m128i *)(v89 - 112) = _mm_loadu_si128(v90 - 7);
          *(__m128i *)(v89 - 96) = _mm_loadu_si128(v90 - 6);
          *(__m128i *)(v89 - 80) = _mm_loadu_si128(v90 - 5);
          *(__m128i *)(v89 - 64) = _mm_loadu_si128(v90 - 4);
          *(__m128i *)(v89 - 48) = _mm_loadu_si128(v90 - 3);
          *(__m128i *)(v89 - 32) = _mm_loadu_si128(v90 - 2);
          *(__m128i *)(v89 - 16) = _mm_loadu_si128(v90 - 1);
        }
        while ( v90 != &src[24 * (unsigned int)((v169 >> 3) - 1) + 24] );
        v92 = (3LL * ((v169 >> 3) - 1) + 3) << 7;
        v93 = (__m128i *)((char *)src + v92);
        v94 = (__m128i *)(v88 + v92);
      }
      switch ( v169 & 7 )
      {
        case 0:
          break;
        case 1:
          goto LABEL_109;
        case 2:
          goto LABEL_108;
        case 3:
          goto LABEL_107;
        case 4:
          goto LABEL_106;
        case 5:
          goto LABEL_105;
        case 6:
          goto LABEL_104;
        case 7:
          v94[18] = _mm_loadu_si128(v93 + 18);
          v94[19] = _mm_loadu_si128(v93 + 19);
          v94[20] = _mm_loadu_si128(v93 + 20);
LABEL_104:
          v94[15] = _mm_loadu_si128(v93 + 15);
          v94[16] = _mm_loadu_si128(v93 + 16);
          v94[17] = _mm_loadu_si128(v93 + 17);
LABEL_105:
          v94[12] = _mm_loadu_si128(v93 + 12);
          v94[13] = _mm_loadu_si128(v93 + 13);
          v94[14] = _mm_loadu_si128(v93 + 14);
LABEL_106:
          v94[9] = _mm_loadu_si128(v93 + 9);
          v94[10] = _mm_loadu_si128(v93 + 10);
          v94[11] = _mm_loadu_si128(v93 + 11);
LABEL_107:
          v94[6] = _mm_loadu_si128(v93 + 6);
          v94[7] = _mm_loadu_si128(v93 + 7);
          v94[8] = _mm_loadu_si128(v93 + 8);
LABEL_108:
          v94[3] = _mm_loadu_si128(v93 + 3);
          v94[4] = _mm_loadu_si128(v93 + 4);
          v94[5] = _mm_loadu_si128(v93 + 5);
LABEL_109:
          *v94 = _mm_loadu_si128(v93);
          v94[1] = _mm_loadu_si128(v93 + 1);
          v94[2] = _mm_loadu_si128(v93 + 2);
          break;
      }
    }
    v87 = (CoinPresolveMatrix *)operator new(0x20u);
    *((_QWORD *)v87 + 3) = v88;
    v11 = v162;
    *((_QWORD *)v87 + 1) = a2;
    *(_QWORD *)v87 = &off_4D1FB0;
    *((_DWORD *)v87 + 4) = v169;
    if ( v186 )
    {
      v159 = make_fixed_action::presolve(v162, v182, (int *)v186, 1, (bool)v87, v95);
      v11 = v162;
      v87 = (CoinPresolveMatrix *)v159;
    }
  }
LABEL_112:
  v163 = v11;
  operator delete[](src);
  operator delete[](v182);
  if ( *((_BYTE *)v163 + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v97 = *((_DWORD *)v163 + 1);
    if ( v97 <= 0 )
    {
      v110 = 0;
      goto LABEL_131;
    }
    v98 = *((_QWORD *)v163 + 36);
    v99 = -(int)(v98 >> 2) & 3;
    v100 = v99 + 3;
    if ( (unsigned int)(v99 + 3) < 5 )
      v100 = 5;
    if ( v100 > v97 - 1 )
    {
      v110 = 0;
      v109 = 0;
    }
    else
    {
      if ( (_DWORD)v99 )
      {
        v101 = 1;
        v102 = *(_DWORD *)v98 == 0;
        if ( (_DWORD)v99 != 1 )
        {
          v101 = 2;
          v102 += *(_DWORD *)(v98 + 4) == 0;
          if ( (_DWORD)v99 != 2 )
          {
            v101 = 3;
            v102 += *(_DWORD *)(v98 + 8) == 0;
          }
        }
      }
      else
      {
        v102 = 0;
        v101 = 0;
      }
      v103 = 0;
      v104 = (const __m128i *)(v98 + 4 * v99);
      v105 = v97 - v99;
      v106 = 0;
      do
      {
        v107 = _mm_load_si128(v104);
        ++v106;
        ++v104;
        v103 = _mm_sub_epi32(v103, _mm_cmpeq_epi32(v107, (__m128i)0LL));
      }
      while ( v105 >> 2 > v106 );
      v108 = _mm_add_epi32(v103, _mm_srli_si128(v103, 8));
      v109 = (v105 & 0xFFFFFFFC) + v101;
      v110 = v102 + _mm_cvtsi128_si32(_mm_add_epi32(v108, _mm_srli_si128(v108, 4)));
      if ( (v105 & 0xFFFFFFFC) == v105 )
      {
LABEL_131:
        v111 = *(_DWORD *)v163;
        v112 = v110 - v181;
        if ( *(int *)v163 <= 0 )
        {
          v125 = 0;
        }
        else
        {
          v113 = *((_QWORD *)v163 + 6);
          v114 = -(int)(v113 >> 2) & 3;
          v115 = v114 + 3;
          if ( (unsigned int)(v114 + 3) < 5 )
            v115 = 5;
          if ( v115 > v111 - 1 )
          {
            v125 = 0;
            v124 = 0;
          }
          else
          {
            if ( (_DWORD)v114 )
            {
              v116 = 1;
              v117 = *(_DWORD *)v113 == 0;
              if ( (_DWORD)v114 != 1 )
              {
                v116 = 2;
                v117 += *(_DWORD *)(v113 + 4) == 0;
                if ( (_DWORD)v114 != 2 )
                {
                  v116 = 3;
                  v117 += *(_DWORD *)(v113 + 8) == 0;
                }
              }
            }
            else
            {
              v117 = 0;
              v116 = 0;
            }
            v118 = 0;
            v119 = (const __m128i *)(v113 + 4 * v114);
            v120 = v111 - v114;
            v121 = 0;
            do
            {
              v122 = _mm_load_si128(v119);
              ++v121;
              ++v119;
              v118 = _mm_sub_epi32(v118, _mm_cmpeq_epi32(v122, (__m128i)0LL));
            }
            while ( v120 >> 2 > v121 );
            v123 = _mm_add_epi32(v118, _mm_srli_si128(v118, 8));
            v124 = (v120 & 0xFFFFFFFC) + v116;
            v125 = v117 + _mm_cvtsi128_si32(_mm_add_epi32(v123, _mm_srli_si128(v123, 4)));
            if ( (v120 & 0xFFFFFFFC) == v120 )
              goto LABEL_148;
          }
          v125 += *(_DWORD *)(v113 + 4LL * (int)v124) == 0;
          if ( v111 > (int)(v124 + 1) )
          {
            v125 += *(_DWORD *)(v113 + 4LL * (int)(v124 + 1)) == 0;
            if ( v111 > (int)(v124 + 2) )
            {
              v125 += *(_DWORD *)(v113 + 4LL * (int)(v124 + 2)) == 0;
              if ( v111 > (int)(v124 + 3) )
              {
                v125 += *(_DWORD *)(v113 + 4LL * (int)(v124 + 3)) == 0;
                if ( v111 > (int)(v124 + 4) )
                {
                  v125 += *(_DWORD *)(v113 + 4LL * (int)(v124 + 4)) == 0;
                  if ( v111 > (int)(v124 + 5) )
                    v125 += *(_DWORD *)(v113 + 4LL * (int)(v124 + 5)) == 0;
                }
              }
            }
          }
        }
LABEL_148:
        printf(
          "CoinPresolveSingleton(3) - %d rows, %d columns dropped in time %g, total %g\n",
          v112,
          v125 - v180,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) - v196,
          (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
        + (double)SLODWORD(usage.ru_utime.tv_sec)
        - *((double *)v163 + 41));
        return v87;
      }
    }
    v110 += *(_DWORD *)(v98 + 4LL * (int)v109) == 0;
    if ( v97 > (int)(v109 + 1) )
    {
      v110 += *(_DWORD *)(v98 + 4LL * (int)(v109 + 1)) == 0;
      if ( v97 > (int)(v109 + 2) )
      {
        v110 += *(_DWORD *)(v98 + 4LL * (int)(v109 + 2)) == 0;
        if ( v97 > (int)(v109 + 3) )
        {
          v110 += *(_DWORD *)(v98 + 4LL * (int)(v109 + 3)) == 0;
          if ( v97 > (int)(v109 + 4) )
          {
            v110 += *(_DWORD *)(v98 + 4LL * (int)(v109 + 4)) == 0;
            if ( v97 > (int)(v109 + 5) )
              v110 += *(_DWORD *)(v98 + 4LL * (int)(v109 + 5)) == 0;
          }
        }
      }
    }
    goto LABEL_131;
  }
  return v87;
}

