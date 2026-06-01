__int64 __fastcall ClpSimplex::tightenPrimalBounds(
        ClpSimplex *this,
        double a2,
        int a3,
        char a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  double v11; // xmm0_8
  __int64 v12; // rdi
  __int64 (*v13)(void); // rax
  const CoinPackedMatrix *v14; // rsi
  void (*v15)(void); // rax
  __int64 v16; // r15
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  double *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rsi
  double v25; // xmm0_8
  __int64 v26; // rax
  __int64 *v27; // rax
  int v28; // esi
  __int64 *v29; // rcx
  double *v30; // rdx
  __int64 v31; // r8
  __int64 *v32; // rdi
  double v33; // xmm0_8
  __int64 v34; // rax
  char *v35; // rdi
  double v36; // xmm7_8
  int v37; // r13d
  double v38; // xmm14_8
  __int64 v39; // rcx
  int v40; // r14d
  double v41; // xmm4_8
  double v42; // xmm6_8
  int v43; // r11d
  int v44; // r12d
  double v45; // xmm3_8
  int v46; // edi
  int v47; // esi
  __int64 v48; // r8
  __int64 v49; // rax
  double v50; // xmm8_8
  double v51; // xmm2_8
  double v52; // xmm2_8
  double v53; // xmm0_8
  __int64 v54; // rdx
  double v55; // xmm2_8
  double v56; // xmm2_8
  double v57; // xmm7_8
  double v58; // xmm3_8
  double v59; // xmm8_8
  double *v60; // rdx
  int *v61; // r8
  __int64 v62; // r11
  double v63; // xmm15_8
  double v64; // xmm10_8
  double v65; // xmm0_8
  double v66; // xmm8_8
  double v67; // xmm15_8
  double v68; // xmm10_8
  __int64 v69; // r9
  double v70; // xmm2_8
  double *v71; // r10
  double *v72; // rax
  double v73; // xmm9_8
  double v74; // xmm10_8
  double v75; // xmm15_8
  double v76; // xmm0_8
  double v77; // xmm0_8
  double v78; // xmm15_8
  int v79; // eax
  CoinMessageHandler *v80; // rax
  __int64 v81; // rax
  double v82; // xmm3_8
  int v83; // ecx
  __int64 v84; // rax
  int v85; // edx
  double *v86; // rcx
  double v87; // xmm1_8
  double *v88; // rcx
  double *v89; // rcx
  double *v90; // r8
  double v91; // xmm1_8
  double v92; // xmm2_8
  double v93; // xmm1_8
  __int64 v94; // rdx
  __int64 v95; // rax
  double *v96; // rsi
  __m128d v97; // xmm9
  __m128d v98; // xmm0
  __m128d v99; // xmm2
  __m128d v100; // xmm2
  double *v101; // rsi
  __m128d v102; // xmm9
  __m128d v103; // xmm2
  __m128d v104; // xmm2
  CoinMessageHandler *v105; // rax
  __int64 v106; // rax
  CoinMessageHandler *v108; // rax
  __int64 v109; // rax
  int v110; // ecx
  _QWORD *v111; // rsi
  bool v112; // al
  _QWORD *v113; // rax
  __int64 *v114; // rdx
  __int64 v115; // r8
  __int64 v116; // xmm0_8
  __int64 v117; // rax
  _QWORD *v118; // rdx
  __int64 *v119; // rsi
  __int64 *v120; // rdx
  __int64 *v121; // rax
  __int64 v122; // r8
  __int64 v123; // xmm0_8
  __int64 v124; // rax
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdi
  __int64 v129; // r8
  double v130; // xmm5_8
  __int64 v131; // r10
  __int64 v132; // rax
  double v133; // xmm4_8
  double v134; // xmm1_8
  double v135; // xmm2_8
  double v136; // xmm1_8
  double v137; // xmm2_8
  __int64 v138; // r8
  __int64 v139; // rdx
  __int64 v140; // rdi
  __int64 v141; // rsi
  unsigned __int64 v142; // rax
  double v143; // xmm5_8
  double v144; // xmm1_8
  double v145; // xmm2_8
  double v146; // xmm1_8
  double v147; // xmm2_8
  std::ostream *v148; // r13
  _BYTE *v149; // r12
  char v150; // si
  std::ostream *v151; // rax
  double v152; // xmm1_8
  double v153; // xmm1_8
  unsigned __int64 v154; // rax
  double v155; // xmm1_8
  unsigned __int64 v156; // rax
  int v157; // edx
  double *v158; // rcx
  __int64 v159; // r9
  __int64 v160; // rax
  double v161; // xmm4_8
  double v162; // xmm5_8
  __int64 (__fastcall *v163)(__int64, unsigned int); // rax
  double v164; // xmm4_8
  double v165; // xmm5_8
  double v167; // [rsp+0h] [rbp-F8h]
  __int64 v168; // [rsp+8h] [rbp-F0h]
  __int64 v169; // [rsp+10h] [rbp-E8h]
  unsigned int v170; // [rsp+18h] [rbp-E0h]
  double v171; // [rsp+18h] [rbp-E0h]
  int v172; // [rsp+24h] [rbp-D4h]
  int v173; // [rsp+28h] [rbp-D0h]
  int v174; // [rsp+2Ch] [rbp-CCh]
  _QWORD *v175; // [rsp+30h] [rbp-C8h]
  __int64 *v176; // [rsp+38h] [rbp-C0h]
  double v177; // [rsp+48h] [rbp-B0h]
  double v178; // [rsp+50h] [rbp-A8h]
  _BYTE v181[32]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v182; // [rsp+80h] [rbp-78h]
  __int64 v183; // [rsp+88h] [rbp-70h]
  __int64 v184; // [rsp+90h] [rbp-68h]
  __int64 v185; // [rsp+98h] [rbp-60h]

  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v181);
  CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v181, 0.0);
  v11 = 0.0;
  CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v181, 0.0);
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
  {
    v13 = **(__int64 (***)(void))v12;
    if ( (char *)v13 == (char *)ClpPackedMatrix::getPackedMatrix )
      v14 = *(const CoinPackedMatrix **)(v12 + 88);
    else
      v14 = (const CoinPackedMatrix *)v13();
  }
  else
  {
    v14 = nullptr;
  }
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v181, v14);
  v15 = *(void (**)(void))(**((_QWORD **)this + 24) + 264LL);
  if ( (char *)v15 != (char *)ClpPackedMatrix::releasePackedMatrix )
    v15();
  v16 = v183;
  v17 = v182;
  v178 = *((double *)this + 94);
  v168 = v184;
  v169 = v185;
  v18 = *((int *)this + 27);
  v177 = *((double *)this + 4);
  if ( v18 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v19 = (_QWORD *)operator new[](8 * v18);
  v20 = *((int *)this + 27);
  v175 = v19;
  v21 = *((_QWORD *)this + 22);
  if ( (_DWORD)v20 && (_QWORD *)v21 != v19 )
  {
    if ( (int)v20 >> 3 > 0 )
    {
      v22 = *((double **)this + 22);
      v23 = (unsigned int)(((int)v20 >> 3) - 1);
      v24 = &v19[8 * v23 + 8];
      do
      {
        v25 = *v22;
        v19 += 8;
        v22 += 8;
        *((double *)v19 - 8) = v25;
        *(v19 - 7) = *((_QWORD *)v22 - 7);
        *(v19 - 6) = *((_QWORD *)v22 - 6);
        *(v19 - 5) = *((_QWORD *)v22 - 5);
        *(v19 - 4) = *((_QWORD *)v22 - 4);
        *(v19 - 3) = *((_QWORD *)v22 - 3);
        *(v19 - 2) = *((_QWORD *)v22 - 2);
        v11 = *(v22 - 1);
        *((double *)v19 - 1) = v11;
      }
      while ( v24 != v19 );
      v26 = ((int)v23 + 1LL) << 6;
      v21 += v26;
      v19 = (_QWORD *)((char *)v175 + v26);
    }
    switch ( (int)v20 % 8 )
    {
      case 1:
        goto LABEL_20;
      case 2:
        goto LABEL_19;
      case 3:
        goto LABEL_18;
      case 4:
        goto LABEL_17;
      case 5:
        goto LABEL_16;
      case 6:
        goto LABEL_15;
      case 7:
        v19[6] = *(_QWORD *)(v21 + 48);
LABEL_15:
        v19[5] = *(_QWORD *)(v21 + 40);
LABEL_16:
        v19[4] = *(_QWORD *)(v21 + 32);
LABEL_17:
        v19[3] = *(_QWORD *)(v21 + 24);
LABEL_18:
        v19[2] = *(_QWORD *)(v21 + 16);
LABEL_19:
        v19[1] = *(_QWORD *)(v21 + 8);
LABEL_20:
        v11 = *(double *)v21;
        *v19 = *(_QWORD *)v21;
        break;
      default:
        break;
    }
  }
  if ( v20 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v27 = (__int64 *)operator new[](8 * v20);
  v28 = *((_DWORD *)this + 27);
  v176 = v27;
  v29 = *((__int64 **)this + 23);
  if ( v28 && v29 != v27 )
  {
    if ( v28 >> 3 <= 0 )
    {
      v35 = *((char **)this + 23);
    }
    else
    {
      v30 = *((double **)this + 23);
      v31 = (unsigned int)((v28 >> 3) - 1);
      v32 = &v27[8 * v31 + 8];
      do
      {
        v33 = *v30;
        v27 += 8;
        v30 += 8;
        *((double *)v27 - 8) = v33;
        *(v27 - 7) = *((_QWORD *)v30 - 7);
        *(v27 - 6) = *((_QWORD *)v30 - 6);
        *(v27 - 5) = *((_QWORD *)v30 - 5);
        *(v27 - 4) = *((_QWORD *)v30 - 4);
        *(v27 - 3) = *((_QWORD *)v30 - 3);
        *(v27 - 2) = *((_QWORD *)v30 - 2);
        v11 = *(v30 - 1);
        *((double *)v27 - 1) = v11;
      }
      while ( v32 != v27 );
      v34 = ((int)v31 + 1LL) << 6;
      v35 = (char *)v29 + v34;
      v27 = (__int64 *)((char *)v176 + v34);
    }
    switch ( v28 % 8 )
    {
      case 1:
        goto LABEL_35;
      case 2:
        goto LABEL_34;
      case 3:
        goto LABEL_33;
      case 4:
        goto LABEL_32;
      case 5:
        goto LABEL_31;
      case 6:
        goto LABEL_30;
      case 7:
        v27[6] = *((_QWORD *)v35 + 6);
LABEL_30:
        v27[5] = *((_QWORD *)v35 + 5);
LABEL_31:
        v27[4] = *((_QWORD *)v35 + 4);
LABEL_32:
        v27[3] = *((_QWORD *)v35 + 3);
LABEL_33:
        v27[2] = *((_QWORD *)v35 + 2);
LABEL_34:
        v27[1] = *((_QWORD *)v35 + 1);
LABEL_35:
        v11 = *(double *)v35;
        *v27 = *(_QWORD *)v35;
        break;
      default:
        break;
    }
  }
  v36 = a2;
  if ( a2 != 1.797693134862316e308 )
  {
    v153 = 0.0;
    if ( a2 != 0.0 )
    {
      if ( a2 <= 0.0 )
      {
        v155 = -a2;
      }
      else
      {
        if ( v28 > 0 )
        {
          v154 = 0;
          do
          {
            v11 = *(double *)&v29[v154 / 8] - *(double *)(*((_QWORD *)this + 22) + v154);
            if ( v11 > v177 )
            {
              v11 = fabs(*(double *)(*((_QWORD *)this + 15) + v154));
              v153 = fmax(v153, v11);
            }
            v154 += 8LL;
          }
          while ( 8LL * (unsigned int)(v28 - 1) + 8 != v154 );
        }
        v155 = v153 * a2;
      }
      if ( v28 > 0 )
      {
        v156 = 0;
        v157 = 0;
        while ( 1 )
        {
          v158 = (double *)&v29[v156 / 8];
          v11 = *v158;
          if ( *v158 - *(double *)(*((_QWORD *)this + 22) + v156) > v177 )
          {
            *v158 = fmin(v11, v155);
            v11 = -v155;
            *(double *)(v156 + *((_QWORD *)this + 22)) = fmax(*(double *)(v156 + *((_QWORD *)this + 22)), -v155);
            v28 = *((_DWORD *)this + 27);
          }
          ++v157;
          v156 += 8LL;
          if ( v157 >= v28 )
            break;
          v29 = *((__int64 **)this + 23);
        }
      }
    }
    v37 = *((_DWORD *)this + 26);
    goto LABEL_38;
  }
  v11 = 1.0e10;
  v37 = *((_DWORD *)this + 26);
  if ( *((double *)this + 98) != 1.0e10 )
    goto LABEL_38;
  if ( v37 <= 0 )
  {
    v36 = 1.0e-12;
    v171 = 1.0e-12;
    v167 = 1.0e-12;
    goto LABEL_229;
  }
  v125 = *((_QWORD *)this + 28);
  v126 = *((_QWORD *)this + 14);
  v127 = (unsigned int)(v37 - 1);
  v128 = *((_QWORD *)this + 18);
  v129 = *((_QWORD *)this + 19);
  if ( !v125 )
  {
    v130 = 1.0e-12;
    v159 = 8 * v127 + 8;
    v160 = 0;
    v133 = 1.0e-12;
    while ( 1 )
    {
      a7 = *(double *)(v126 + v160);
      a5 = *(double *)(v129 + v160) - a7;
      a6 = a7 - *(double *)(v128 + v160);
      if ( a6 < 1.0e12 )
      {
        v133 = fmax(v133, a6);
        if ( a5 >= 1.0e12 )
          goto LABEL_296;
      }
      else if ( a5 >= 1.0e12 )
      {
        if ( a6 < 1.0e12 )
LABEL_296:
          v130 = fmax(v130, a6);
        if ( a5 >= 1.0e12 )
          goto LABEL_290;
        goto LABEL_289;
      }
      v133 = fmax(v133, a5);
      if ( a6 < 1.0e12 )
        goto LABEL_296;
LABEL_289:
      v130 = fmax(v130, a5);
LABEL_290:
      v160 += 8;
      if ( v159 == v160 )
        goto LABEL_228;
    }
  }
  v130 = 1.0e-12;
  v131 = 8 * v127 + 8;
  v132 = 0;
  v133 = 1.0e-12;
  do
  {
    v134 = *(double *)(v126 + v132);
    v135 = *(double *)(v129 + v132) - v134;
    v136 = v134 - *(double *)(v128 + v132);
    a7 = v135;
    if ( v136 < 1.0e12 )
      v133 = fmax(v133, v136);
    if ( v135 < 1.0e12 )
      v133 = fmax(v133, v135);
    v137 = *(double *)(v125 + v132);
    a5 = v136 * v137;
    a6 = v137 * a7;
    if ( a5 < 1.0e12 )
      v130 = fmax(v130, a5);
    if ( a6 < 1.0e12 )
      v130 = fmax(v130, a6);
    v132 += 8;
  }
  while ( v131 != v132 );
LABEL_228:
  v167 = v133;
  v171 = v130;
LABEL_229:
  if ( v28 <= 0 )
    goto LABEL_242;
  v138 = *((_QWORD *)this + 29);
  v139 = *((_QWORD *)this + 15);
  v140 = *((_QWORD *)this + 22);
  v141 = 8LL * (unsigned int)(v28 - 1) + 8;
  v142 = 0;
  if ( !v138 )
  {
    v164 = v167;
    v165 = v171;
    while ( 1 )
    {
      a7 = *(double *)(v139 + v142);
      a5 = *(double *)&v29[v142 / 8] - a7;
      a6 = a7 - *(double *)(v140 + v142);
      if ( a6 < 1.0e12 )
      {
        v164 = fmax(v164, a6);
        if ( a5 >= 1.0e12 )
          goto LABEL_312;
      }
      else if ( a5 >= 1.0e12 )
      {
        if ( a6 < 1.0e12 )
LABEL_312:
          v165 = fmax(v165, a6);
        if ( a5 >= 1.0e12 )
          goto LABEL_306;
        goto LABEL_305;
      }
      v164 = fmax(v164, a5);
      if ( a6 < 1.0e12 )
        goto LABEL_312;
LABEL_305:
      v165 = fmax(v165, a5);
LABEL_306:
      v142 += 8LL;
      if ( v141 == v142 )
      {
        v167 = v164;
        goto LABEL_242;
      }
    }
  }
  v143 = v167;
  a10 = v171;
  do
  {
    v144 = *(double *)(v139 + v142);
    v145 = *(double *)&v29[v142 / 8] - v144;
    v146 = v144 - *(double *)(v140 + v142);
    a7 = v145;
    if ( v146 < 1.0e12 )
      v143 = fmax(v143, v146);
    if ( v145 < 1.0e12 )
      v143 = fmax(v143, v145);
    v147 = 1.0 / *(double *)(v138 + v142);
    a5 = v146 * v147;
    a6 = v147 * a7;
    if ( a5 < 1.0e12 )
      a10 = fmax(a10, a5);
    if ( a6 < 1.0e12 )
      a10 = fmax(a10, a6);
    v142 += 8LL;
  }
  while ( v142 != v141 );
  v167 = v143;
LABEL_242:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v148 = (std::ostream *)std::ostream::_M_insert<double>();
  v149 = *(_BYTE **)((char *)v148 + *(_QWORD *)(*(_QWORD *)v148 - 24LL) + 240);
  if ( !v149 )
    std::__throw_bad_cast();
  if ( v149[56] )
  {
    v150 = v149[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v150 = 10;
    v163 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v149 + 48LL);
    if ( v163 != std::ctype<char>::do_widen )
      v150 = ((__int64 (__fastcall *)(_BYTE *, __int64, double, double, double, double, double, double, double, double))v163)(
               v149,
               10,
               v167,
               a5,
               a6,
               a7,
               v161,
               v162,
               a10,
               v36);
  }
  v151 = (std::ostream *)std::ostream::put(v148, v150);
  std::ostream::flush(v151);
  v152 = 1.00001e10;
  if ( v167 * 100.0 < 1.00001e10 )
    v152 = fmax(10001000.0, v167 * 100.0);
  v11 = v152;
  *((double *)this + 98) = v152;
  v37 = *((_DWORD *)this + 26);
LABEL_38:
  v173 = -1;
  v174 = 0;
  v172 = 0;
  v38 = -v178;
  while ( 2 )
  {
    ++v172;
    if ( v37 <= 0 )
    {
      if ( v172 == 1 )
        goto LABEL_127;
      v40 = 0;
      goto LABEL_125;
    }
    v39 = 0;
    v170 = 0;
    v40 = 0;
LABEL_43:
    while ( 2 )
    {
      v41 = *(double *)(*((_QWORD *)this + 18) + 8 * v39);
      v42 = *(double *)(*((_QWORD *)this + 19) + 8 * v39);
      if ( v41 <= v38 && v178 <= v42 )
        goto LABEL_42;
      v43 = *(_DWORD *)(v168 + 4 * v39);
      v44 = v43 + *(_DWORD *)(v169 + 4 * v39);
      if ( v43 >= v44 )
      {
        v46 = 0;
        v59 = 0.0;
        v47 = 0;
        v11 = 0.0;
        v58 = 0.0;
        v57 = 0.0;
        goto LABEL_58;
      }
      v45 = 0.0;
      v46 = 0;
      v47 = 0;
      v48 = (unsigned int)(*(_DWORD *)(v169 + 4 * v39) - 1) + 1LL;
      v49 = 0;
      v50 = 0.0;
      do
      {
        while ( 1 )
        {
          v53 = *(double *)(v17 + 8LL * v43 + 8 * v49);
          v54 = *(int *)(v16 + 4LL * v43 + 4 * v49);
          if ( v53 > 0.0 )
          {
            v51 = *(double *)(*((_QWORD *)this + 23) + 8 * v54);
            if ( v51 < v178 )
              v50 = v50 + v51 * v53;
            else
              ++v47;
            v52 = *(double *)(*((_QWORD *)this + 22) + 8 * v54);
            if ( v38 < v52 )
              v45 = v45 + v53 * v52;
            else
              ++v46;
            goto LABEL_50;
          }
          if ( v53 < 0.0 )
            break;
LABEL_50:
          if ( ++v49 == v48 )
            goto LABEL_57;
        }
        v55 = *(double *)(*((_QWORD *)this + 23) + 8 * v54);
        if ( v55 < v178 )
          v45 = v45 + v55 * v53;
        else
          ++v46;
        v56 = *(double *)(*((_QWORD *)this + 22) + 8 * v54);
        if ( v38 < v56 )
        {
          v50 = v50 + v53 * v56;
          goto LABEL_50;
        }
        ++v49;
        ++v47;
      }
      while ( v49 != v48 );
LABEL_57:
      v57 = fabs(v50) * 0.00000001 + v50;
      v58 = v45 - fabs(v45) * 0.00000001;
      v59 = v58 - (double)v46 * 1.0e31;
      v11 = (double)v47 * 1.0e31 + v57;
LABEL_58:
      if ( v177 + v42 >= v11 && v59 >= v41 - v177 )
      {
LABEL_42:
        if ( (int)++v39 >= v37 )
          goto LABEL_122;
        continue;
      }
      break;
    }
    if ( v41 - 100.0 * v177 <= v11 && v59 <= 100.0 * v177 + v42 )
    {
      if ( v43 >= v44 )
        goto LABEL_42;
      v60 = (double *)(v17 + 8LL * v43);
      v61 = (int *)(v16 + 4LL * v43);
      v62 = v17 + 8 * ((unsigned int)(*(_DWORD *)(v169 + 4 * v39) - 1) + (__int64)v43) + 8;
      while ( 1 )
      {
        v69 = *v61;
        v70 = *v60;
        v71 = (double *)(8 * v69 + *((_QWORD *)this + 22));
        v72 = (double *)(*((_QWORD *)this + 23) + 8 * v69);
        v66 = *v71;
        v73 = *v72;
        if ( *v60 <= 0.0 )
        {
          if ( v41 > v38 )
          {
            if ( v47 )
            {
              if ( v47 == 1 && v38 > v66 )
              {
                v74 = (v41 - v57) / v70;
                goto LABEL_93;
              }
              v74 = 1.797693134862316e308;
              v11 = 1.0e-12;
            }
            else
            {
              v74 = (v41 - v57) / v70 + v66;
LABEL_93:
              v11 = 1.0e-12;
              v75 = fabs(v57);
              if ( v75 > 100000000.0 )
                v74 = v74 + v75 * 1.0e-12;
            }
            if ( v73 - 1.0e-12 > v74 && v178 > v74 )
            {
              ++v40;
              if ( v66 > v74 )
              {
                if ( -100.0 * v177 <= v74 - v66 )
                  v74 = *v71;
                else
                  ++v170;
              }
              *v72 = v74;
              if ( v73 > v178 )
              {
                --v46;
                v76 = v74;
              }
              else
              {
                v76 = v74 - v73;
              }
              v11 = v76 * v70;
              v73 = v74;
              v58 = v58 + v11;
            }
          }
          if ( v178 <= v42 )
            goto LABEL_88;
          if ( v46 )
          {
            if ( v46 == 1 && v73 > v178 )
            {
              v77 = (v42 - v58) / v70;
              goto LABEL_106;
            }
            v68 = -1.797693134862316e308;
          }
          else
          {
            v77 = (v42 - v58) / v70 + v73;
LABEL_106:
            v68 = v77;
            v78 = fabs(v58);
            if ( v78 > 100000000.0 )
              v68 = v77 - v78 * 1.0e-12;
          }
          v11 = v66 + 1.0e-12;
          if ( v68 <= v66 + 1.0e-12 || v68 <= v38 )
            goto LABEL_88;
          ++v40;
          if ( v68 > v73 )
          {
            v11 = v73 - v68;
            if ( -100.0 * v177 <= v73 - v68 )
              v68 = v73;
            else
              ++v170;
          }
          *(double *)(*((_QWORD *)this + 22) + 8 * v69) = v68;
          if ( v38 <= v66 )
          {
            v68 = v68 - v66;
            goto LABEL_87;
          }
          goto LABEL_175;
        }
        if ( v41 > v38 )
          break;
LABEL_76:
        if ( v178 > v42 )
        {
          if ( v46 )
          {
            if ( v46 == 1 && v38 > v66 )
            {
              v11 = 1.0e-12;
              v67 = fabs(v58);
              v68 = (v42 - v58) / v70;
              if ( v67 > 100000000.0 )
LABEL_79:
                v68 = v68 + v67 * 1.0e-12;
            }
            else
            {
              v68 = 1.797693134862316e308;
              v11 = 1.0e-12;
            }
          }
          else
          {
            v11 = 1.0e-12;
            v67 = fabs(v58);
            v68 = (v42 - v58) / v70 + v66;
            if ( v67 > 100000000.0 )
              goto LABEL_79;
          }
          if ( v73 - 1.0e-12 <= v68 || v178 <= v68 )
            goto LABEL_88;
          ++v40;
          if ( v66 > v68 )
          {
            v11 = v68 - v66;
            if ( -100.0 * v177 <= v68 - v66 )
              v68 = v66;
            else
              ++v170;
          }
          *(double *)(*((_QWORD *)this + 23) + 8 * v69) = v68;
          if ( v73 <= v178 )
          {
            v68 = v68 - v73;
LABEL_87:
            v57 = v57 + v70 * v68;
            goto LABEL_88;
          }
LABEL_175:
          --v47;
          goto LABEL_87;
        }
LABEL_88:
        ++v60;
        ++v61;
        if ( (double *)v62 == v60 )
        {
          v37 = *((_DWORD *)this + 26);
          if ( (int)++v39 >= v37 )
            goto LABEL_122;
          goto LABEL_43;
        }
      }
      if ( v47 )
      {
        if ( v47 == 1 && v73 > v178 )
        {
          v63 = fabs(v57);
          v64 = (v41 - v57) / v70;
          if ( v63 > 100000000.0 )
LABEL_67:
            v64 = v64 - v63 * 1.0e-12;
        }
        else
        {
          v64 = -1.797693134862316e308;
        }
      }
      else
      {
        v63 = fabs(v57);
        v64 = (v41 - v57) / v70 + v73;
        if ( v63 > 100000000.0 )
          goto LABEL_67;
      }
      v11 = v66 + 1.0e-12;
      if ( v64 > v66 + 1.0e-12 && v64 > v38 )
      {
        ++v40;
        if ( v64 > v73 )
        {
          if ( -100.0 * v177 <= v73 - v64 )
            v64 = *v72;
          else
            ++v170;
        }
        *v71 = v64;
        if ( v38 > v66 )
        {
          --v46;
          v65 = v64;
        }
        else
        {
          v65 = v64 - v66;
        }
        v11 = v65 * v70;
        v66 = v64;
        v58 = v58 + v11;
      }
      goto LABEL_76;
    }
    ++v170;
LABEL_122:
    v174 += v40;
    v79 = v40 >> 4;
    if ( v172 != 1 )
      v79 = v173;
    v173 = v79;
    if ( !v170 )
    {
LABEL_125:
      if ( v173 >= v40 || v172 == 10 )
      {
LABEL_127:
        v80 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      10,
                                      (ClpSimplex *)((char *)this + 416));
        v81 = CoinMessageHandler::operator<<(v80);
        CoinMessageHandler::operator<<(v81, 0, v11);
        if ( a3 <= 0 )
        {
          v82 = 0.001;
        }
        else
        {
          v82 = 0.0;
          if ( a3 <= 10 )
          {
            switch ( a3 )
            {
              case 1:
                v82 = 0.0001;
                break;
              case 2:
                v82 = 0.00001;
                break;
              case 3:
                v82 = 0.000001;
                break;
              case 4:
                v82 = 0.0000001;
                break;
              case 5:
                v82 = 0.00000001;
                break;
              case 6:
                v82 = 0.000000001;
                break;
              case 7:
                v82 = 1.000000000000001e-10;
                break;
              case 8:
                v82 = 1.000000000000001e-11;
                break;
              default:
                v82 = 1.000000000000001e-13;
                if ( a3 == 9 )
                  v82 = 1.000000000000001e-12;
                break;
            }
          }
        }
        v83 = *((_DWORD *)this + 27);
        if ( v83 <= 0 )
        {
LABEL_146:
          if ( !a4 )
            goto LABEL_255;
          v94 = *((_QWORD *)this + 34);
          if ( !v94 || v83 <= 0 )
            goto LABEL_255;
          v95 = 0;
          v170 = 0;
          while ( 1 )
          {
            if ( *(_BYTE *)(v94 + v95) )
            {
              v96 = (double *)(8 * v95 + *((_QWORD *)this + 22));
              v97 = (__m128d)*(unsigned __int64 *)v96;
              v98.m128d_f64[0] = *v96 + 0.5;
              if ( fabs(v98.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v99 = 0;
                v99.m128d_f64[0] = (double)(int)v98.m128d_f64[0];
                *(_QWORD *)&v98.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v99.m128d_f64[0]
                                               - COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v99, v98).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | *(_QWORD *)&v98.m128d_f64[0] & 0x8000000000000000LL;
              }
              if ( fabs(v98.m128d_f64[0] - v97.m128d_f64[0]) > *((double *)this + 110) )
              {
                v98.m128d_f64[0] = *v96;
                if ( fabs(v97.m128d_f64[0]) < 4.503599627370496e15 )
                {
                  v100.m128d_f64[0] = (double)(int)v97.m128d_f64[0];
                  *(_QWORD *)&v98.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                   COERCE_DOUBLE(
                                                     *(_QWORD *)&_mm_cmpgt_sd(v97, v100).m128d_f64[0]
                                                   & 0x3FF0000000000000LL)
                                                 + v100.m128d_f64[0])
                                               | *(_QWORD *)&v97.m128d_f64[0] & 0x8000000000000000LL;
                }
              }
              *v96 = v98.m128d_f64[0];
              v101 = (double *)(8 * v95 + *((_QWORD *)this + 23));
              v102.m128d_f64[0] = *v101;
              v98.m128d_f64[0] = *v101 + 0.5;
              if ( fabs(v98.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v103 = 0;
                v103.m128d_f64[0] = (double)(int)v98.m128d_f64[0];
                *(_QWORD *)&v98.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v103.m128d_f64[0]
                                               - COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v103, v98).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | *(_QWORD *)&v98.m128d_f64[0] & 0x8000000000000000LL;
              }
              if ( fabs(v98.m128d_f64[0] - v102.m128d_f64[0]) > *((double *)this + 110) )
              {
                v98.m128d_f64[0] = *v101;
                if ( fabs(v102.m128d_f64[0]) < 4.503599627370496e15 )
                {
                  v104 = 0;
                  v104.m128d_f64[0] = (double)(int)v102.m128d_f64[0];
                  *(_QWORD *)&v98.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                   v104.m128d_f64[0]
                                                 - COERCE_DOUBLE(
                                                     *(_QWORD *)&_mm_cmpgt_sd(v104, v102).m128d_f64[0]
                                                   & 0x3FF0000000000000LL))
                                               | *(_QWORD *)&v102.m128d_f64[0] & 0x8000000000000000LL;
                }
              }
              *v101 = v98.m128d_f64[0];
              v11 = *(double *)(*((_QWORD *)this + 22) + 8 * v95);
              if ( v11 > *(double *)(*((_QWORD *)this + 23) + 8 * v95) )
                ++v170;
              v83 = *((_DWORD *)this + 27);
            }
            if ( v83 <= (int)++v95 )
              break;
            v94 = *((_QWORD *)this + 34);
          }
          if ( v170 )
          {
            v105 = (CoinMessageHandler *)CoinMessageHandler::message(
                                           *((CoinMessageHandler **)this + 43),
                                           11,
                                           (ClpSimplex *)((char *)this + 416));
            v106 = CoinMessageHandler::operator<<(v105);
            CoinMessageHandler::operator<<(v106, 0, v11);
            CoinMemcpyN<double>(v175, *((unsigned int *)this + 27), *((_QWORD *)this + 22));
            CoinMemcpyN<double>(v176, *((unsigned int *)this + 27), *((_QWORD *)this + 23));
          }
          else
          {
LABEL_255:
            v170 = 0;
          }
          goto LABEL_168;
        }
        v84 = 0;
        v85 = 0;
        while ( 1 )
        {
LABEL_133:
          v87 = *(double *)&v175[v84];
          v11 = *(double *)&v176[v84];
          if ( v11 <= v87 + v177 )
            goto LABEL_132;
          if ( v11 > 1.0e30 )
          {
            v88 = (double *)(v84 * 8 + *((_QWORD *)this + 23));
            if ( *v88 > 1.0e10 )
            {
              *v88 = 1.797693134862316e308;
              v87 = *(double *)&v175[v84];
            }
          }
          v89 = (double *)(v84 * 8 + *((_QWORD *)this + 22));
          v11 = *v89;
          if ( v87 < -1.0e30 && v11 < -1.0e10 )
          {
            *v89 = -1.797693134862316e308;
            v89 = (double *)(v84 * 8 + *((_QWORD *)this + 22));
            v11 = *v89;
          }
          v90 = (double *)(v84 * 8 + *((_QWORD *)this + 23));
          v91 = *v90;
          if ( v82 + 0.00000001 > *v90 - v11 )
            break;
          v92 = *(double *)&v176[v84];
          if ( v92 > v91 )
          {
            *v90 = fmin(v91 + v82 * 100.0, v92);
            v89 = (double *)(v84 * 8 + *((_QWORD *)this + 22));
            v11 = *v89;
          }
          v93 = *(double *)&v175[v84];
          if ( v11 > v93 )
          {
            v11 = fmax(v11 - v82 * 100.0, v93);
            *v89 = v11;
          }
          v83 = *((_DWORD *)this + 27);
          ++v85;
          ++v84;
          if ( v85 >= v83 )
            goto LABEL_146;
        }
        *v89 = fmax(*(double *)&v175[v84], v11 - v82 * 100.0);
        v86 = (double *)(v84 * 8 + *((_QWORD *)this + 23));
        v11 = v82 * 100.0 + *v86;
        *v86 = fmin(*(double *)&v176[v84], v11);
        v83 = *((_DWORD *)this + 27);
LABEL_132:
        ++v85;
        ++v84;
        if ( v85 >= v83 )
          goto LABEL_146;
        goto LABEL_133;
      }
      continue;
    }
    break;
  }
  v108 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 43),
                                 11,
                                 (ClpSimplex *)((char *)this + 416));
  v109 = CoinMessageHandler::operator<<(v108);
  CoinMessageHandler::operator<<(v109, 0, v11);
  v110 = *((_DWORD *)this + 27);
  v111 = *((_QWORD **)this + 22);
  v112 = v110 == 0;
  if ( v111 != v175 && v110 )
  {
    if ( v110 >> 3 <= 0 )
    {
      v118 = v175;
    }
    else
    {
      v113 = *((_QWORD **)this + 22);
      v114 = v175;
      v115 = (unsigned int)((v110 >> 3) - 1);
      do
      {
        v116 = *v114;
        v113 += 8;
        v114 += 8;
        *(v113 - 8) = v116;
        *(v113 - 7) = *(v114 - 7);
        *(v113 - 6) = *(v114 - 6);
        *(v113 - 5) = *(v114 - 5);
        *(v113 - 4) = *(v114 - 4);
        *(v113 - 3) = *(v114 - 3);
        *(v113 - 2) = *(v114 - 2);
        *(v113 - 1) = *(v114 - 1);
      }
      while ( v113 != &v111[8 * v115 + 8] );
      v117 = ((int)v115 + 1LL) << 6;
      v118 = (_QWORD *)((char *)v175 + v117);
      v111 = (_QWORD *)((char *)v111 + v117);
    }
    switch ( v110 % 8 )
    {
      case 1:
        goto LABEL_207;
      case 2:
        goto LABEL_206;
      case 3:
        goto LABEL_205;
      case 4:
        goto LABEL_204;
      case 5:
        goto LABEL_203;
      case 6:
        goto LABEL_202;
      case 7:
        v111[6] = v118[6];
LABEL_202:
        v111[5] = v118[5];
LABEL_203:
        v111[4] = v118[4];
LABEL_204:
        v111[3] = v118[3];
LABEL_205:
        v111[2] = v118[2];
LABEL_206:
        v111[1] = v118[1];
LABEL_207:
        *v111 = *v118;
        break;
      default:
        break;
    }
    v110 = *((_DWORD *)this + 27);
    v112 = v110 == 0;
  }
  v119 = *((__int64 **)this + 23);
  v120 = v176;
  if ( v119 != v176 && !v112 )
  {
    if ( v110 >> 3 > 0 )
    {
      v121 = *((__int64 **)this + 23);
      v122 = (unsigned int)((v110 >> 3) - 1);
      do
      {
        v123 = *v120;
        v121 += 8;
        v120 += 8;
        *(v121 - 8) = v123;
        *(v121 - 7) = *(v120 - 7);
        *(v121 - 6) = *(v120 - 6);
        *(v121 - 5) = *(v120 - 5);
        *(v121 - 4) = *(v120 - 4);
        *(v121 - 3) = *(v120 - 3);
        *(v121 - 2) = *(v120 - 2);
        *(v121 - 1) = *(v120 - 1);
      }
      while ( &v119[8 * v122 + 8] != v121 );
      v124 = ((int)v122 + 1LL) << 6;
      v120 = (__int64 *)((char *)v176 + v124);
      v119 = (__int64 *)((char *)v119 + v124);
    }
    switch ( v110 % 8 )
    {
      case 1:
        goto LABEL_254;
      case 2:
        goto LABEL_253;
      case 3:
        goto LABEL_252;
      case 4:
        goto LABEL_251;
      case 5:
        goto LABEL_250;
      case 6:
        goto LABEL_249;
      case 7:
        v119[6] = v120[6];
LABEL_249:
        v119[5] = v120[5];
LABEL_250:
        v119[4] = v120[4];
LABEL_251:
        v119[3] = v120[3];
LABEL_252:
        v119[2] = v120[2];
LABEL_253:
        v119[1] = v120[1];
LABEL_254:
        *v119 = *v120;
        break;
      default:
        break;
    }
  }
LABEL_168:
  operator delete[](v175);
  operator delete[](v176);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v181);
  return v170;
}

