double __fastcall ClpPredictorCorrector::findDirectionVector(ClpPredictorCorrector *this)
{
  double v2; // xmm1_8
  double v3; // xmm6_8
  double v4; // xmm0_8
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  double *v8; // rbp
  __int64 v9; // rax
  int v10; // esi
  int v11; // r15d
  double *v12; // rdi
  double *v13; // rsi
  double *v14; // r8
  int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rax
  double *v20; // r11
  double *v21; // r10
  double *v22; // rcx
  signed int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  double v26; // xmm0_8
  double *v27; // rsi
  double *v28; // rdi
  double *v29; // r9
  int v30; // r8d
  unsigned int v31; // edx
  unsigned int v32; // r13d
  __int64 v33; // rcx
  __int64 v34; // rax
  double *v35; // r11
  double *v36; // r10
  double *v37; // rcx
  signed int v38; // r8d
  __int64 v39; // rax
  int v40; // r8d
  int v41; // eax
  double v42; // xmm4_8
  int v43; // r12d
  double *v44; // r13
  double *v45; // rdi
  unsigned __int64 v46; // rsi
  double v47; // xmm0_8
  __int64 v48; // rax
  double *v49; // rdx
  unsigned __int64 v50; // rdx
  double v51; // xmm4_8
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  double v57; // xmm2_8
  double v58; // xmm3_8
  double v59; // xmm5_8
  double v60; // xmm1_8
  int v61; // ecx
  double v62; // xmm0_8
  double v63; // xmm1_8
  __int64 v64; // rcx
  double v65; // xmm6_8
  double v66; // xmm3_8
  CoinMessageHandler *v67; // rax
  CoinMessageHandler *v68; // rax
  CoinMessageHandler *v69; // rax
  CoinMessageHandler *v70; // rax
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  char v78; // dl
  double v79; // xmm0_8
  double *v80; // rdx
  double v81; // xmm2_8
  double v82; // xmm1_8
  double v83; // xmm3_8
  double *v84; // rdx
  double v85; // xmm1_8
  double v86; // xmm2_8
  double v87; // xmm3_8
  double *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdx
  double *v92; // rcx
  __int64 v93; // r9
  __int64 v94; // xmm0_8
  __int64 v95; // rdx
  double *v96; // rcx
  _QWORD *v97; // rdx
  double *v98; // rdx
  double *v99; // rcx
  __int64 v100; // xmm0_8
  _QWORD *v101; // rax
  double v102; // xmm1_8
  double v103; // xmm2_8
  double v104; // xmm4_8
  __m128d v105; // rt1
  double v106; // xmm0_8
  int v107; // ecx
  __int64 v108; // rdx
  double *v109; // r9
  double *v110; // r10
  int v111; // r8d
  __int64 v112; // rax
  unsigned int v113; // esi
  unsigned int v114; // edi
  __int64 v115; // rcx
  __int64 v116; // rax
  unsigned int v117; // r14d
  double *v118; // r11
  unsigned __int64 v119; // rdi
  unsigned int v120; // r14d
  double *v121; // rcx
  __int64 v122; // rax
  int v123; // r8d
  double v124; // xmm0_8
  char v125; // r11
  int v126; // r10d
  bool v127; // r9
  double *v128; // r8
  double *v129; // rcx
  double *v130; // rax
  __int64 v131; // rdx
  double v132; // xmm0_8
  __int64 v133; // rax
  double *v134; // rcx
  double *v135; // rax
  double *v136; // r10
  double *v137; // rax
  double *v138; // rdx
  double *v139; // rcx
  double v140; // xmm0_8
  double *v141; // rcx
  double *v142; // rax
  double v143; // xmm0_8
  __int64 v144; // rax
  double *v145; // rax
  double *v146; // rdx
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  unsigned __int64 v151; // rax
  int v152; // esi
  __int64 v153; // rdx
  double *v154; // r10
  unsigned __int64 v155; // rsi
  double *v156; // r9
  __int64 v157; // rax
  unsigned int v158; // ecx
  unsigned int v159; // r8d
  __int64 v160; // rdx
  __int64 v161; // rax
  unsigned __int64 v162; // rdi
  double *v163; // r11
  double *v164; // rdx
  signed int v165; // eax
  __int64 v166; // rdx
  int v167; // eax
  _QWORD *v168; // rax
  __int64 v169; // rcx
  _QWORD *v170; // rcx
  unsigned __int64 v171; // rax
  unsigned __int64 v172; // rax
  unsigned __int64 v173; // rax
  double i; // [rsp+0h] [rbp-C8h]
  double v175; // [rsp+0h] [rbp-C8h]
  int v176; // [rsp+8h] [rbp-C0h]
  double v177; // [rsp+10h] [rbp-B8h]
  double v178; // [rsp+10h] [rbp-B8h]
  double v179; // [rsp+10h] [rbp-B8h]
  unsigned int v180; // [rsp+10h] [rbp-B8h]
  double v181; // [rsp+18h] [rbp-B0h]
  double *v182; // [rsp+28h] [rbp-A0h]
  double v183; // [rsp+30h] [rbp-98h]
  double v184; // [rsp+38h] [rbp-90h]
  double v185; // [rsp+48h] [rbp-80h]
  int v186; // [rsp+54h] [rbp-74h]
  __int64 v187; // [rsp+58h] [rbp-70h]
  unsigned int v188; // [rsp+60h] [rbp-68h]
  int v189; // [rsp+64h] [rbp-64h]
  __int64 v190; // [rsp+68h] [rbp-60h]
  __int64 v191; // [rsp+80h] [rbp-48h]
  int v192; // [rsp+88h] [rbp-40h]

  v2 = *((double *)this + 120);
  v3 = 0.9 * *((double *)this + 121) / *((double *)this + 110);
  v4 = *((double *)this + 4);
  if ( v3 <= v4 )
    v185 = fmin(v4, v2);
  else
    v185 = fmin(v3, v2);
  v5 = *((int *)this + 26);
  if ( v5 > 0xFFFFFFFFFFFFFFFLL )
LABEL_268:
    __cxa_throw_bad_array_new_length();
  v6 = operator new[](8 * v5);
  v7 = *((_QWORD *)this + 161);
  v8 = (double *)v6;
  v9 = *((int *)this + 27);
  v10 = *((_DWORD *)this + 26);
  v11 = v10 + v9;
  if ( *(int *)(v7 + 8) <= 19 && *(_BYTE *)(v7 + 12) != 1 )
  {
    v12 = *((double **)this + 145);
    if ( v11 <= 0 )
    {
      v188 = v11 - 1;
    }
    else
    {
      v13 = *((double **)this + 144);
      v14 = *((double **)this + 143);
      if ( (unsigned int)v11 > 0xE && (v13 >= v12 + 2 || v12 >= v13 + 2) && (v14 >= v12 + 2 || v12 >= v14 + 2) )
      {
        v15 = 0;
        if ( (((unsigned __int64)v13 >> 3) & 1) != 0 )
        {
          v15 = 1;
          *v12 = *v13 - *v14;
        }
        v16 = 0;
        v17 = v11 - (((unsigned __int64)v13 >> 3) & 1);
        v18 = ((unsigned __int64)v13 >> 3) & 1;
        v19 = 0;
        v20 = &v13[v18];
        v21 = &v14[v18];
        v22 = &v12[v18];
        do
        {
          ++v16;
          *(__m128d *)&v22[v19] = _mm_sub_pd(*(__m128d *)&v20[v19], *(__m128d *)&v21[v19]);
          v19 += 2;
        }
        while ( v17 >> 1 > v16 );
        v23 = (v17 & 0xFFFFFFFE) + v15;
        if ( v17 != (v17 & 0xFFFFFFFE) )
        {
          v24 = v23;
          v25 = v23 + 1;
          v12[v24] = v13[v24] - v14[v24];
          if ( v25 < v11 )
            v12[v25] = v13[v25] - v14[v25];
        }
        v188 = v11 - 1;
      }
      else
      {
        v188 = v11 - 1;
        v173 = 0;
        do
        {
          v12[v173 / 8] = v13[v173 / 8] - v14[v173 / 8];
          v173 += 8LL;
        }
        while ( v173 != 8LL * (unsigned int)(v11 - 1) + 8 );
      }
      v9 = *((int *)this + 27);
      v10 = *((_DWORD *)this + 26);
    }
    multiplyAdd(&v12[v9], v10, -1.0, *((double **)this + 146), 0.0);
    v26 = 1.0;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 145),
      *((_QWORD *)this + 146),
      1.0);
    goto LABEL_30;
  }
  multiplyAdd((const double *)(*((_QWORD *)this + 143) + 8 * v9), v10, 1.0, v8, 0.0);
  (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 143),
    v8,
    -1.0);
  if ( v11 <= 0 )
  {
    v28 = *((double **)this + 145);
LABEL_240:
    v188 = v11 - 1;
    goto LABEL_29;
  }
  v27 = *((double **)this + 144);
  v28 = *((double **)this + 145);
  v29 = *((double **)this + 143);
  if ( (unsigned int)v11 <= 0xE || v27 < v28 + 2 && v28 < v27 + 2 || v29 < v28 + 2 && v28 < v29 + 2 )
  {
    v188 = v11 - 1;
    v171 = 0;
    do
    {
      v28[v171 / 8] = v27[v171 / 8] - v29[v171 / 8];
      v171 += 8LL;
    }
    while ( v171 != 8LL * (unsigned int)(v11 - 1) + 8 );
    goto LABEL_29;
  }
  v30 = 0;
  if ( (((unsigned __int64)v27 >> 3) & 1) != 0 )
  {
    v30 = 1;
    *v28 = *v27 - *v29;
  }
  v31 = 0;
  v32 = v11 - (((unsigned __int64)v27 >> 3) & 1);
  v33 = ((unsigned __int64)v27 >> 3) & 1;
  v34 = 0;
  v35 = &v27[v33];
  v36 = &v29[v33];
  v37 = &v28[v33];
  do
  {
    ++v31;
    *(__m128d *)&v37[v34] = _mm_sub_pd(*(__m128d *)&v35[v34], *(__m128d *)&v36[v34]);
    v34 += 2;
  }
  while ( v32 >> 1 > v31 );
  v38 = (v32 & 0xFFFFFFFE) + v30;
  if ( v32 == (v32 & 0xFFFFFFFE) )
    goto LABEL_240;
  v39 = v38;
  v40 = v38 + 1;
  v28[v39] = v27[v39] - v29[v39];
  if ( v11 <= v40 )
    goto LABEL_240;
  v28[v40] = v27[v40] - v29[v40];
  v188 = v11 - 1;
LABEL_29:
  multiplyAdd(&v28[*((int *)this + 27)], *((_DWORD *)this + 26), -1.0, *((double **)this + 146), 0.0);
  v26 = 1.0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 145),
    *((_QWORD *)this + 146),
    1.0);
LABEL_30:
  v41 = v11 + 7;
  v42 = 0.0;
  v182 = nullptr;
  if ( v11 >= 0 )
    v41 = v11;
  v43 = 0;
  v189 = v11 >> 3;
  v44 = nullptr;
  v192 = v41 >> 3;
  v183 = 0.0;
  v184 = 0.0;
  v181 = 0.0;
  v186 = v11 % 8;
  v191 = 8LL * v188 + 8;
  v45 = *((double **)this + 146);
  v190 = ((unsigned int)((v41 >> 3) - 1) + 1LL) << 6;
  LODWORD(v46) = *((_DWORD *)this + 26);
  v187 = ((unsigned int)((v11 >> 3) - 1) + 1LL) << 6;
  for ( i = 1.797693134862316e308; ; i = v66 )
  {
    v177 = v42;
    maximumAbsElement(v45, v46);
    v47 = fmax(v26, 1.0e-12);
    if ( !v43 )
      v181 = v47;
    v48 = *((_QWORD *)this + 161);
    v49 = *((double **)this + 146);
    if ( *(int *)(v48 + 8) > 19 || *(_BYTE *)(v48 + 12) == 1 )
    {
      ClpPredictorCorrector::solveSystem(
        this,
        *((double **)this + 145),
        v49,
        *((const double **)this + 144),
        v8,
        v182,
        v44,
        i > 0.00001);
      v50 = *((_QWORD *)this + 145);
      v51 = v177;
    }
    else
    {
      if ( v47 <= 1.0e-30 )
      {
        v103 = 0.0;
        v102 = 0.0;
      }
      else
      {
        if ( v47 <= 0.5 )
        {
          v102 = 1.0;
          do
          {
            v47 = v47 + v47;
            v102 = v102 + v102;
          }
          while ( v47 <= 0.5 );
        }
        else if ( v47 < 2.0 )
        {
          v102 = 1.0;
        }
        else
        {
          v102 = 1.0;
          if ( v47 <= 1.797693134862316e308 )
          {
            do
            {
              v124 = v47 * 0.5;
              v102 = v102 * 0.5;
              if ( v124 < 2.0 )
                break;
              v47 = v124 * 0.5;
              v102 = v102 * 0.5;
            }
            while ( v47 >= 2.0 );
          }
        }
        v103 = *((double *)this + 124) / v102;
      }
      multiplyAdd(nullptr, *((_DWORD *)this + 26), 0.0, v49, v102);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 161) + 24LL))(
        *((_QWORD *)this + 161),
        *((_QWORD *)this + 146));
      multiplyAdd(nullptr, *((_DWORD *)this + 26), 0.0, *((double **)this + 146), v103);
      v104 = v177;
      if ( v43 )
      {
        v105.m128d_f64[0] = i;
        v106 = _mm_cmplt_sd((__m128d)0x3EE4F8B588E368F1uLL, v105).m128d_f64[0];
        multiplyAdd(
          v44,
          *((_DWORD *)this + 26),
          1.0,
          *((double **)this + 146),
          COERCE_DOUBLE(*(_QWORD *)&v106 & 0x3FE999999999999ALL | ~*(_QWORD *)&v106 & 0x3FF0000000000000LL));
        v104 = v177;
      }
      v179 = v104;
      multiplyAdd(
        *((const double **)this + 146),
        *((_DWORD *)this + 26),
        -1.0,
        (double *)(*((_QWORD *)this + 145) + 8LL * *((int *)this + 27)),
        0.0);
      v107 = *((_DWORD *)this + 27);
      v108 = *((_QWORD *)this + 145);
      if ( v107 )
      {
        if ( v107 / 8 <= 0 )
        {
          v148 = *((_QWORD **)this + 145);
        }
        else
        {
          v147 = *((_QWORD **)this + 145);
          do
          {
            *v147 = 0;
            v147[1] = 0;
            v147 += 8;
            *(v147 - 6) = 0;
            *(v147 - 5) = 0;
            *(v147 - 4) = 0;
            *(v147 - 3) = 0;
            *(v147 - 2) = 0;
            *(v147 - 1) = 0;
          }
          while ( v147 != (_QWORD *)(v108 + (((unsigned int)(v107 / 8 - 1) + 1LL) << 6)) );
          v148 = (_QWORD *)(v108 + ((v107 / 8 - 1 + 1LL) << 6));
        }
        switch ( v107 % 8 )
        {
          case 1:
            goto LABEL_211;
          case 2:
            goto LABEL_210;
          case 3:
            goto LABEL_209;
          case 4:
            goto LABEL_208;
          case 5:
            goto LABEL_207;
          case 6:
            goto LABEL_206;
          case 7:
            v148[6] = 0;
LABEL_206:
            v148[5] = 0;
LABEL_207:
            v148[4] = 0;
LABEL_208:
            v148[3] = 0;
LABEL_209:
            v148[2] = 0;
LABEL_210:
            v148[1] = 0;
LABEL_211:
            *v148 = 0;
            break;
          default:
            break;
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, double))(**((_QWORD **)this + 24) + 376LL))(
        *((_QWORD *)this + 24),
        *((_QWORD *)this + 146),
        v108,
        1.0);
      v50 = *((_QWORD *)this + 145);
      v51 = v179;
      if ( v11 > 0 )
      {
        v109 = *((double **)this + 142);
        v110 = *((double **)this + 144);
        if ( (unsigned int)v11 > 8
          && ((unsigned __int64)v109 >= v50 + 16 || v50 >= (unsigned __int64)(v109 + 2))
          && ((unsigned __int64)v110 >= v50 + 16 || v50 >= (unsigned __int64)(v110 + 2)) )
        {
          v111 = 0;
          v112 = (v50 >> 3) & 1;
          if ( (int)v112 + 1 > v188 )
            goto LABEL_134;
          if ( (_DWORD)v112 )
          {
            v111 = 1;
            *(double *)v50 = *(double *)v50 * *v109 - *v110;
          }
          v113 = 0;
          v114 = v11 - v112;
          v115 = (v50 >> 3) & 1;
          v116 = 0;
          v117 = v114;
          v180 = v114;
          v118 = &v109[v115];
          v119 = v50 + v115 * 8;
          v120 = v117 >> 1;
          v121 = &v110[v115];
          do
          {
            ++v113;
            *(__m128d *)(v119 + v116 * 8) = _mm_sub_pd(
                                              _mm_mul_pd(*(__m128d *)&v118[v116], *(__m128d *)(v119 + v116 * 8)),
                                              *(__m128d *)&v121[v116]);
            v116 += 2;
          }
          while ( v120 > v113 );
          v111 += v180 & 0xFFFFFFFE;
          if ( v180 != (v180 & 0xFFFFFFFE) )
          {
LABEL_134:
            v122 = v111;
            v123 = v111 + 1;
            *(double *)(v50 + 8 * v122) = v109[v122] * *(double *)(v50 + 8 * v122) - v110[v122];
            if ( v123 < v11 )
              *(double *)(v50 + 8LL * v123) = v109[v123] * *(double *)(v50 + 8LL * v123) - v110[v123];
          }
        }
        else
        {
          v151 = 0;
          do
          {
            *(double *)(v50 + v151) = *(double *)(v50 + v151) * v109[v151 / 8] - v110[v151 / 8];
            v151 += 8LL;
          }
          while ( v151 != v191 );
        }
      }
    }
    v178 = v51;
    ++v43;
    multiplyAdd((const double *)(v50 + 8LL * *((int *)this + 27)), *((_DWORD *)this + 26), -1.0, v8, 0.0);
    v26 = 1.0;
    (*(void (__fastcall **)(_QWORD, _QWORD, double *, double))(**((_QWORD **)this + 24) + 360LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 145),
      v8,
      1.0);
    v46 = *((int *)this + 26);
    v52 = *((_QWORD *)this + 161);
    v42 = v178;
    v53 = *(_QWORD *)(v52 + 56);
    if ( (int)v46 <= 0 )
    {
      v57 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v54 = *((_QWORD *)this + 138);
      v55 = 0;
      v56 = 1;
      v57 = 0.0;
      v58 = 0.0;
      do
      {
        while ( 1 )
        {
          v62 = v8[v55];
          v63 = *(double *)(v54 + v55 * 8);
          v59 = v62;
          if ( !*(_BYTE *)(v53 + v56 - 1) )
            break;
          if ( v178 > v62 )
            v59 = -v62;
          v26 = v62 + v63;
          v64 = *((_QWORD *)this + 146);
          v8[v55] = v26;
          *(_QWORD *)(v64 + v55 * 8) = 0;
          v46 = *((int *)this + 26);
          LODWORD(v64) = v56;
          ++v55;
          ++v56;
          v57 = fmax(v59, v57);
          if ( (int)v46 <= (int)v64 )
            goto LABEL_49;
        }
        if ( v178 > v62 )
          v59 = -v62;
        v26 = v62 + v63;
        v57 = fmax(v59, v57);
        v60 = v26;
        if ( v178 > v26 )
          v60 = -v26;
        v61 = v56;
        v8[v55] = v26;
        ++v56;
        ++v55;
        v58 = fmax(v60, v58);
      }
      while ( (int)v46 > v61 );
    }
LABEL_49:
    v65 = fmin(1.0e31, v58 / v181);
    v66 = v65;
    if ( v43 == 1 )
      v184 = v65;
    if ( i <= v65 )
      break;
    *((double *)this + 137) = v57;
    if ( v43 > 3 || v65 <= v185 )
    {
      v183 = v65;
      i = v65;
      goto LABEL_55;
    }
    if ( v44 )
    {
      v125 = *(_BYTE *)(v52 + 12);
      v126 = *(_DWORD *)(v52 + 8);
      goto LABEL_142;
    }
    if ( v46 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_268;
    v44 = (double *)operator new[](8 * v46);
    v149 = *((_QWORD *)this + 161);
    v42 = v178;
    v66 = v65;
    v126 = *(_DWORD *)(v149 + 8);
    if ( *(_BYTE *)(v149 + 12) || v126 > 19 )
    {
      if ( (unsigned __int64)v11 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_268;
      v182 = (double *)operator new[](8LL * v11);
      v150 = *((_QWORD *)this + 161);
      LODWORD(v46) = *((_DWORD *)this + 26);
      v42 = v178;
      v126 = *(_DWORD *)(v150 + 8);
      v125 = *(_BYTE *)(v150 + 12);
LABEL_142:
      v45 = *((double **)this + 146);
      v127 = (_DWORD)v46 == 0;
      v128 = v45;
      if ( v45 == v44 || !(_DWORD)v46 )
        goto LABEL_156;
      goto LABEL_144;
    }
    LODWORD(v46) = *((_DWORD *)this + 26);
    v45 = *((double **)this + 146);
    v128 = v45;
    v127 = (_DWORD)v46 == 0;
    v125 = (_DWORD)v46 == 0 || v44 == v45;
    if ( v125 )
      goto LABEL_237;
LABEL_144:
    if ( (int)v46 >> 3 <= 0 )
    {
      v135 = v44;
      v134 = v45;
    }
    else
    {
      v129 = v44;
      v130 = v45;
      v131 = (unsigned int)(((int)v46 >> 3) - 1);
      do
      {
        v132 = *v130;
        v130 += 8;
        v129 += 8;
        *(v129 - 8) = v132;
        *(v129 - 7) = *(v130 - 7);
        *(v129 - 6) = *(v130 - 6);
        *(v129 - 5) = *(v130 - 5);
        *(v129 - 4) = *(v130 - 4);
        *(v129 - 3) = *(v130 - 3);
        *(v129 - 2) = *(v130 - 2);
        v26 = *(v130 - 1);
        *(v129 - 1) = v26;
      }
      while ( v130 != &v45[8 * v131 + 8] );
      v133 = ((int)v131 + 1LL) << 6;
      v134 = (double *)((char *)v45 + v133);
      v135 = (double *)((char *)v44 + v133);
    }
    switch ( (int)v46 % 8 )
    {
      case 1:
        goto LABEL_155;
      case 2:
        goto LABEL_154;
      case 3:
        goto LABEL_153;
      case 4:
        goto LABEL_152;
      case 5:
        goto LABEL_151;
      case 6:
        goto LABEL_150;
      case 7:
        v135[6] = v134[6];
LABEL_150:
        v135[5] = v134[5];
LABEL_151:
        v135[4] = v134[4];
LABEL_152:
        v135[3] = v134[3];
LABEL_153:
        v135[2] = v134[2];
LABEL_154:
        v135[1] = v134[1];
LABEL_155:
        v26 = *v134;
        *v135 = *v134;
        break;
      default:
        break;
    }
LABEL_156:
    if ( v126 <= 19 && v125 != 1 )
    {
LABEL_237:
      v26 = -1.0;
      v175 = v42;
      multiplyAdd(v8, v46, -1.0, v45, 0.0);
      LODWORD(v46) = *((_DWORD *)this + 26);
      v45 = *((double **)this + 146);
      v42 = v175;
      goto LABEL_186;
    }
    v136 = *((double **)this + 145);
    if ( v11 )
    {
      v137 = v182;
      if ( v136 != v182 )
      {
        v138 = v182;
        if ( v189 > 0 )
        {
          v138 = (double *)((char *)v182 + v187);
          v139 = *((double **)this + 145);
          do
          {
            v140 = *v139;
            v137 += 8;
            v139 += 8;
            *(v137 - 8) = v140;
            *(v137 - 7) = *(v139 - 7);
            *(v137 - 6) = *(v139 - 6);
            *(v137 - 5) = *(v139 - 5);
            *(v137 - 4) = *(v139 - 4);
            *(v137 - 3) = *(v139 - 3);
            *(v137 - 2) = *(v139 - 2);
            v26 = *(v139 - 1);
            *(v137 - 1) = v26;
          }
          while ( v138 != v137 );
          v136 = (double *)((char *)v136 + v187);
        }
        switch ( v186 )
        {
          case 1:
            goto LABEL_171;
          case 2:
            goto LABEL_170;
          case 3:
            goto LABEL_169;
          case 4:
            goto LABEL_168;
          case 5:
            goto LABEL_167;
          case 6:
            goto LABEL_166;
          case 7:
            v138[6] = v136[6];
LABEL_166:
            v138[5] = v136[5];
LABEL_167:
            v138[4] = v136[4];
LABEL_168:
            v138[3] = v136[3];
LABEL_169:
            v138[2] = v136[2];
LABEL_170:
            v138[1] = v136[1];
LABEL_171:
            v26 = *v136;
            *v138 = *v136;
            break;
          default:
            break;
        }
      }
    }
    if ( v8 != v45 && !v127 )
    {
      if ( (int)v46 >> 3 <= 0 )
      {
        v145 = v8;
      }
      else
      {
        v141 = v45;
        v142 = v8;
        do
        {
          v143 = *v141;
          v142 += 8;
          v141 += 8;
          *(v142 - 8) = v143;
          *(v142 - 7) = *(v141 - 7);
          *(v142 - 6) = *(v141 - 6);
          *(v142 - 5) = *(v141 - 5);
          *(v142 - 4) = *(v141 - 4);
          *(v142 - 3) = *(v141 - 3);
          *(v142 - 2) = *(v141 - 2);
          v26 = *(v141 - 1);
          *(v142 - 1) = v26;
        }
        while ( &v8[8 * (unsigned int)(((int)v46 >> 3) - 1) + 8] != v142 );
        v144 = (((int)v46 >> 3) - 1 + 1LL) << 6;
        v128 = (double *)((char *)v45 + v144);
        v145 = (double *)((char *)v8 + v144);
      }
      switch ( (int)v46 % 8 )
      {
        case 1:
          goto LABEL_185;
        case 2:
          goto LABEL_184;
        case 3:
          goto LABEL_183;
        case 4:
          goto LABEL_182;
        case 5:
          goto LABEL_181;
        case 6:
          goto LABEL_180;
        case 7:
          v145[6] = v128[6];
LABEL_180:
          v145[5] = v128[5];
LABEL_181:
          v145[4] = v128[4];
LABEL_182:
          v145[3] = v128[3];
LABEL_183:
          v145[2] = v128[2];
LABEL_184:
          v145[1] = v128[1];
LABEL_185:
          v26 = *v128;
          *v145 = *v128;
          break;
        default:
          break;
      }
    }
LABEL_186:
    v183 = v66;
  }
  v89 = *((double **)this + 145);
  v90 = *((_QWORD *)this + 146);
  if ( v44 )
  {
    if ( (_DWORD)v46 && v44 != (double *)v90 )
    {
      if ( (int)v46 >> 3 <= 0 )
      {
        v97 = *((_QWORD **)this + 146);
        v96 = v44;
      }
      else
      {
        v91 = *((_QWORD *)this + 146);
        v92 = v44;
        v93 = (unsigned int)(((int)v46 >> 3) - 1);
        do
        {
          v94 = *(_QWORD *)v92;
          v91 += 64;
          v92 += 8;
          *(_QWORD *)(v91 - 64) = v94;
          *(double *)(v91 - 56) = *(v92 - 7);
          *(double *)(v91 - 48) = *(v92 - 6);
          *(double *)(v91 - 40) = *(v92 - 5);
          *(double *)(v91 - 32) = *(v92 - 4);
          *(double *)(v91 - 24) = *(v92 - 3);
          *(double *)(v91 - 16) = *(v92 - 2);
          *(double *)(v91 - 8) = *(v92 - 1);
        }
        while ( v91 != v90 + ((v93 + 1) << 6) );
        v95 = ((int)v93 + 1LL) << 6;
        v96 = (double *)((char *)v44 + v95);
        v97 = (_QWORD *)(v90 + v95);
      }
      switch ( (int)v46 % 8 )
      {
        case 1:
          goto LABEL_86;
        case 2:
          goto LABEL_85;
        case 3:
          goto LABEL_84;
        case 4:
          goto LABEL_83;
        case 5:
          goto LABEL_82;
        case 6:
          goto LABEL_81;
        case 7:
          v97[6] = *((_QWORD *)v96 + 6);
LABEL_81:
          v97[5] = *((_QWORD *)v96 + 5);
LABEL_82:
          v97[4] = *((_QWORD *)v96 + 4);
LABEL_83:
          v97[3] = *((_QWORD *)v96 + 3);
LABEL_84:
          v97[2] = *((_QWORD *)v96 + 2);
LABEL_85:
          v97[1] = *((_QWORD *)v96 + 1);
LABEL_86:
          *v97 = *(_QWORD *)v96;
          break;
        default:
          break;
      }
    }
    if ( *(_BYTE *)(v52 + 12) == 1 || *(int *)(v52 + 8) > 19 )
    {
      if ( v11 )
      {
        v98 = v182;
        if ( v89 != v182 )
        {
          if ( v189 > 0 )
          {
            v99 = (double *)((char *)v89 + v187);
            do
            {
              v100 = *(_QWORD *)v98;
              v89 += 8;
              v98 += 8;
              *((_QWORD *)v89 - 8) = v100;
              *(v89 - 7) = *(v98 - 7);
              *(v89 - 6) = *(v98 - 6);
              *(v89 - 5) = *(v98 - 5);
              *(v89 - 4) = *(v98 - 4);
              *(v89 - 3) = *(v98 - 3);
              *(v89 - 2) = *(v98 - 2);
              *(v89 - 1) = *(v98 - 1);
            }
            while ( v89 != v99 );
            v98 = (double *)((char *)v182 + v187);
          }
          switch ( v186 )
          {
            case 1:
              goto LABEL_102;
            case 2:
              goto LABEL_101;
            case 3:
              goto LABEL_100;
            case 4:
              goto LABEL_99;
            case 5:
              goto LABEL_98;
            case 6:
              goto LABEL_97;
            case 7:
              v89[6] = v98[6];
LABEL_97:
              v89[5] = v98[5];
LABEL_98:
              v89[4] = v98[4];
LABEL_99:
              v89[3] = v98[3];
LABEL_100:
              v89[2] = v98[2];
LABEL_101:
              v89[1] = v98[1];
LABEL_102:
              *v89 = *v98;
              break;
            default:
              goto LABEL_55;
          }
        }
      }
      goto LABEL_55;
    }
    multiplyAdd((const double *)v90, *((_DWORD *)this + 26), -1.0, &v89[*((int *)this + 27)], 0.0);
    v152 = *((_DWORD *)this + 27);
    v153 = *((_QWORD *)this + 145);
    if ( v152 )
    {
      if ( v152 / 8 <= 0 )
      {
        v170 = *((_QWORD **)this + 145);
      }
      else
      {
        v168 = *((_QWORD **)this + 145);
        v169 = (unsigned int)(v152 / 8 - 1);
        do
        {
          *v168 = 0;
          v168[1] = 0;
          v168 += 8;
          *(v168 - 6) = 0;
          *(v168 - 5) = 0;
          *(v168 - 4) = 0;
          *(v168 - 3) = 0;
          *(v168 - 2) = 0;
          *(v168 - 1) = 0;
        }
        while ( v168 != (_QWORD *)(v153 + ((v169 + 1) << 6)) );
        v170 = (_QWORD *)(v153 + (((int)v169 + 1LL) << 6));
      }
      switch ( v152 % 8 )
      {
        case 1:
          goto LABEL_252;
        case 2:
          goto LABEL_251;
        case 3:
          goto LABEL_250;
        case 4:
          goto LABEL_249;
        case 5:
          goto LABEL_248;
        case 6:
          goto LABEL_247;
        case 7:
          v170[6] = 0;
LABEL_247:
          v170[5] = 0;
LABEL_248:
          v170[4] = 0;
LABEL_249:
          v170[3] = 0;
LABEL_250:
          v170[2] = 0;
LABEL_251:
          v170[1] = 0;
LABEL_252:
          *v170 = 0;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, double, double, double, double))(**((_QWORD **)this + 24) + 376LL))(
      *((_QWORD *)this + 24),
      *((_QWORD *)this + 146),
      v153,
      1.0,
      0.0,
      v57,
      v65);
    if ( v11 > 0 )
    {
      v154 = *((double **)this + 142);
      v155 = *((_QWORD *)this + 145);
      v156 = *((double **)this + 144);
      if ( (unsigned int)v11 <= 8
        || (unsigned __int64)v154 < v155 + 16 && v155 < (unsigned __int64)(v154 + 2)
        || (unsigned __int64)v156 < v155 + 16 && v155 < (unsigned __int64)(v156 + 2) )
      {
        v172 = 0;
        do
        {
          *(double *)(v155 + v172) = v154[v172 / 8] * *(double *)(v155 + v172) - v156[v172 / 8];
          v172 += 8LL;
        }
        while ( v172 != v191 );
        goto LABEL_55;
      }
      v157 = (v155 >> 3) & 1;
      if ( 2 - (unsigned int)((_DWORD)v157 == 0) > v188 )
      {
        v167 = 1;
        *(double *)v155 = *(double *)v155 * *v154 - *v156;
LABEL_235:
        *(double *)(v155 + 8LL * v167) = v154[v167] * *(double *)(v155 + 8LL * v167) - v156[v167];
        goto LABEL_55;
      }
      v176 = 0;
      if ( (_DWORD)v157 )
      {
        v176 = 1;
        *(double *)v155 = *v154 * *(double *)v155 - *v156;
      }
      v158 = 0;
      v159 = v11 - v157;
      v160 = (v155 >> 3) & 1;
      v161 = 0;
      v162 = v155 + v160 * 8;
      v163 = &v154[v160];
      v164 = &v156[v160];
      do
      {
        ++v158;
        *(__m128d *)(v162 + v161 * 8) = _mm_sub_pd(
                                          _mm_mul_pd(*(__m128d *)&v163[v161], *(__m128d *)(v162 + v161 * 8)),
                                          *(__m128d *)&v164[v161]);
        v161 += 2;
      }
      while ( v158 < v159 >> 1 );
      v165 = (v159 & 0xFFFFFFFE) + v176;
      if ( v159 != (v159 & 0xFFFFFFFE) )
      {
        v166 = v165;
        v167 = v165 + 1;
        *(double *)(v155 + 8 * v166) = v154[v166] * *(double *)(v155 + 8 * v166) - v156[v166];
        if ( v167 < v11 )
          goto LABEL_235;
      }
    }
  }
  else
  {
    if ( v11 )
    {
      if ( v192 > 0 )
      {
        v146 = (double *)((char *)v89 + v190);
        do
        {
          *v89 = 1.0;
          v89 += 8;
          *(v89 - 7) = 1.0;
          *(v89 - 6) = 1.0;
          *(v89 - 5) = 1.0;
          *(v89 - 4) = 1.0;
          *(v89 - 3) = 1.0;
          *(v89 - 2) = 1.0;
          *(v89 - 1) = 1.0;
        }
        while ( v89 != v146 );
      }
      switch ( v186 )
      {
        case 1:
          goto LABEL_198;
        case 2:
          goto LABEL_197;
        case 3:
          goto LABEL_196;
        case 4:
          goto LABEL_195;
        case 5:
          goto LABEL_194;
        case 6:
          goto LABEL_193;
        case 7:
          v89[6] = 1.0;
LABEL_193:
          v89[5] = 1.0;
LABEL_194:
          v89[4] = 1.0;
LABEL_195:
          v89[3] = 1.0;
LABEL_196:
          v89[2] = 1.0;
LABEL_197:
          v89[1] = 1.0;
LABEL_198:
          *v89 = 1.0;
          break;
        default:
          break;
      }
      LODWORD(v46) = *((_DWORD *)this + 26);
    }
    if ( (_DWORD)v46 )
    {
      if ( (int)v46 / 8 > 0 )
      {
        v101 = (_QWORD *)v90;
        do
        {
          *v101 = 0x3FF0000000000000LL;
          v101 += 8;
          *(v101 - 7) = 0x3FF0000000000000LL;
          *(v101 - 6) = 0x3FF0000000000000LL;
          *(v101 - 5) = 0x3FF0000000000000LL;
          *(v101 - 4) = 0x3FF0000000000000LL;
          *(v101 - 3) = 0x3FF0000000000000LL;
          *(v101 - 2) = 0x3FF0000000000000LL;
          *(v101 - 1) = 0x3FF0000000000000LL;
        }
        while ( v101 != (_QWORD *)(v90 + (((unsigned int)((int)v46 / 8 - 1) + 1LL) << 6)) );
        v90 += ((int)v46 / 8 - 1 + 1LL) << 6;
      }
      switch ( (int)v46 % 8 )
      {
        case 1:
          goto LABEL_116;
        case 2:
          goto LABEL_115;
        case 3:
          goto LABEL_114;
        case 4:
          goto LABEL_113;
        case 5:
          goto LABEL_112;
        case 6:
          goto LABEL_111;
        case 7:
          *(_QWORD *)(v90 + 48) = 0x3FF0000000000000LL;
LABEL_111:
          *(_QWORD *)(v90 + 40) = 0x3FF0000000000000LL;
LABEL_112:
          *(_QWORD *)(v90 + 32) = 0x3FF0000000000000LL;
LABEL_113:
          *(_QWORD *)(v90 + 24) = 0x3FF0000000000000LL;
LABEL_114:
          *(_QWORD *)(v90 + 16) = 0x3FF0000000000000LL;
LABEL_115:
          *(_QWORD *)(v90 + 8) = 0x3FF0000000000000LL;
LABEL_116:
          *(_QWORD *)v90 = 0x3FF0000000000000LL;
          break;
        default:
          break;
      }
    }
  }
LABEL_55:
  if ( v184 > 0.00000001 || v43 != 1 )
  {
    v67 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  69,
                                  (ClpPredictorCorrector *)((char *)this + 416));
    v68 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v67);
    v69 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v68);
    v70 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v69);
    v71 = CoinMessageHandler::operator<<(v70);
    CoinMessageHandler::operator<<(v71, 0, v183);
  }
  if ( v44 )
    operator delete[](v44);
  if ( v182 )
    operator delete[](v182);
  operator delete[](v8);
  if ( *((_DWORD *)this + 27) + *((_DWORD *)this + 26) > 0 )
  {
    v72 = *((_QWORD *)this + 149);
    v73 = *((_QWORD *)this + 150);
    v74 = 0;
    v75 = *((_QWORD *)this + 147);
    v76 = *((_QWORD *)this + 148);
    do
    {
      *(_QWORD *)(v72 + 8 * v74) = 0;
      *(_QWORD *)(v73 + 8 * v74) = 0;
      v77 = 8 * v74;
      *(_QWORD *)(v75 + 8 * v74) = 0;
      *(_QWORD *)(v76 + 8 * v74) = 0;
      v78 = *(_BYTE *)(*((_QWORD *)this + 33) + v74);
      if ( (v78 & 2) == 0 )
      {
        v79 = *(double *)(*((_QWORD *)this + 145) + 8 * v74);
        if ( (v78 & 8) != 0 )
        {
          v80 = (double *)(v77 + *((_QWORD *)this + 159));
          v81 = *(double *)(*((_QWORD *)this + 155) + 8 * v74);
          v82 = *v80 * v81 + *(double *)(*((_QWORD *)this + 156) + 8 * v74);
          v83 = *(double *)(*((_QWORD *)this + 141) + 8 * v74) + 1.0e-12;
          *(double *)(v73 + 8 * v74) = v79 - v81;
          *(double *)(v75 + 8 * v74) = (v82 - *v80 * v79) / v83;
          v78 = *(_BYTE *)(*((_QWORD *)this + 33) + v74);
        }
        if ( (v78 & 0x10) != 0 )
        {
          v84 = (double *)(v77 + *((_QWORD *)this + 160));
          v85 = *(double *)(*((_QWORD *)this + 154) + 8 * v74);
          v86 = *(double *)(*((_QWORD *)this + 157) + 8 * v74) - *v84 * v85;
          v87 = *(double *)(*((_QWORD *)this + 140) + 8 * v74) + 1.0e-12;
          *(double *)(v72 + 8 * v74) = v85 - v79;
          *(double *)(v76 + 8 * v74) = (v79 * *v84 + v86) / v87;
        }
      }
      ++v74;
    }
    while ( (int)v74 < *((_DWORD *)this + 26) + *((_DWORD *)this + 27) );
  }
  return i;
}

