__int64 __fastcall ClpSimplex::gutsOfSolution(ClpSimplex *this, double *a2, const double *a3, bool a4, double a5)
{
  const double *v10; // rdx
  const double *v11; // rsi
  unsigned __int64 v12; // rdi
  double *v13; // rbp
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdi
  const double *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // xmm0_8
  __int64 v25; // rax
  const double *v26; // rdx
  ClpNonLinearCost *v27; // rdi
  __int64 v28; // rax
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rsi
  __int64 v32; // rax
  char v33; // dl
  double v34; // xmm1_8
  double v35; // xmm0_8
  int *v36; // rdi
  double v37; // xmm0_8
  CoinMessageHandler *v38; // rax
  CoinMessageHandler *v39; // rax
  double v40; // xmm0_8
  __int64 v41; // rax
  int v42; // eax
  bool v43; // dl
  unsigned int v44; // r9d
  int v45; // eax
  __int64 v46; // rax
  CoinFactorization *v47; // rdi
  double v48; // xmm0_8
  double v49; // xmm0_8
  __int64 v51; // rax
  double *v52; // rdi
  double v53; // xmm0_8
  double v54; // xmm3_8
  __int64 v55; // rax
  double v56; // xmm2_8
  double v57; // xmm1_8
  __int64 v58; // rax
  CoinFactorization *v59; // rdi
  double v60; // xmm2_8
  double v61; // xmm0_8
  double v62; // xmm0_8
  double v63; // xmm0_8
  double v64; // xmm2_8
  double v65; // xmm3_8
  double v66; // xmm1_8
  unsigned __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // ecx
  double v71; // xmm1_8
  double *v72; // rsi
  double v73; // xmm0_8
  int v74; // esi
  __int64 v75; // r9
  int v76; // r8d
  __int64 v77; // rdx
  __int64 v78; // rdi
  int v79; // r10d
  int v80; // ecx
  __int64 v81; // rsi
  double v82; // xmm0_8
  __int64 v83; // r11
  int v84; // eax
  int *v85; // rsi
  __int64 v86; // r8
  __int64 v87; // rdi
  int v88; // ecx
  _BYTE *v89; // rdx
  double *v90; // rdx
  double v91; // xmm0_8
  unsigned int v92; // eax
  double v93; // xmm1_8
  double v94; // xmm6_8
  double v95; // xmm0_8
  int v96; // edx
  double v97; // xmm4_8
  double v98; // xmm1_8
  double v99; // xmm3_8
  double v100; // xmm8_8
  double v101; // xmm5_8
  double v102; // xmm9_8
  double v103; // xmm2_8
  double v104; // xmm1_8
  double v105; // xmm1_8
  CoinMessageHandler *v106; // rax
  CoinMessageHandler *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  int v110; // eax
  _QWORD *v111; // rsi
  int v112; // eax
  __int64 v113; // rdi
  _QWORD *v114; // rax
  int v115; // ecx
  _QWORD *v116; // rdi
  double v117; // xmm1_8
  __int64 v118; // xmm0_8
  int v119; // edx
  int v120; // esi
  unsigned int v121; // edi
  unsigned int *v122; // r8
  int v123; // esi
  int v124; // ebx
  int v125; // r11d
  unsigned int *v126; // rax
  unsigned int v127; // ecx
  __m128i si128; // xmm14
  __m128i v129; // xmm13
  __m128i v130; // xmm12
  __m128i v131; // xmm0
  __m128i v132; // xmm11
  __m128i v133; // xmm10
  __m128i v134; // xmm9
  __m128i v135; // xmm2
  __m128i v136; // xmm4
  __m128i v137; // xmm2
  __m128i v138; // xmm5
  __m128i v139; // xmm7
  __m128i v140; // xmm3
  __m128i v141; // xmm1
  __m128i v142; // xmm5
  __m128i v143; // xmm15
  __m128i v144; // xmm7
  __m128i v145; // xmm3
  __m128i v146; // xmm15
  __m128i v147; // xmm8
  __m128i v148; // xmm6
  __m128i v149; // xmm15
  __m128i v150; // xmm8
  __m128i v151; // xmm4
  __m128i v152; // xmm8
  __m128i v153; // xmm7
  __m128i v154; // xmm2
  __m128i v155; // xmm7
  __m128i v156; // xmm3
  __m128i v157; // xmm5
  __m128i v158; // xmm3
  __m128i v159; // xmm15
  __m128i v160; // xmm1
  __m128i v161; // xmm15
  unsigned int v162; // ecx
  unsigned int *v163; // rax
  double *v164; // rdi
  __int64 v165; // rax
  double v166; // xmm1_8
  __int64 v167; // rdx
  CoinOtherFactorization *v168; // rdi
  __int64 v169; // rax
  CoinOtherFactorization *v170; // rdi
  double v171; // [rsp+10h] [rbp-78h]
  unsigned int v172; // [rsp+10h] [rbp-78h]
  unsigned int v173; // [rsp+10h] [rbp-78h]
  unsigned int v174; // [rsp+10h] [rbp-78h]
  double v175; // [rsp+18h] [rbp-70h]
  double v176; // [rsp+20h] [rbp-68h]
  int v177; // [rsp+20h] [rbp-68h]
  unsigned int v178; // [rsp+20h] [rbp-68h]
  void *v179; // [rsp+20h] [rbp-68h]
  void *v180; // [rsp+20h] [rbp-68h]
  double v181; // [rsp+28h] [rbp-60h]
  double v182; // [rsp+30h] [rbp-58h]
  int *v183; // [rsp+40h] [rbp-48h]
  int v184; // [rsp+4Ch] [rbp-3Ch]

  v10 = *((const double **)this + 152);
  v11 = *((const double **)this + 151);
  v181 = *((double *)this + 95);
  v175 = *((double *)this + 96);
  if ( a4 )
  {
    ClpSimplex::checkPrimalSolution(this, v11, v10);
    a5 = *((double *)this + 110);
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)this + 165), a5);
    v12 = *((int *)this + 26);
    v176 = *(double *)(*((_QWORD *)this + 165) + 24LL);
    if ( v12 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_225;
    v13 = (double *)operator new[](8 * v12);
    v14 = *((_DWORD *)this + 26);
    if ( v14 <= 0 )
    {
      v10 = *((const double **)this + 152);
      v11 = *((const double **)this + 151);
    }
    else
    {
      v15 = (unsigned int)(v14 - 1);
      v16 = *((_QWORD *)this + 157);
      v17 = *((_QWORD *)this + 150);
      v18 = 0;
      v19 = v15 + 1;
      do
      {
        a5 = *(double *)(v17 + 8LL * *(int *)(v16 + 4 * v18));
        v13[v18++] = a5;
      }
      while ( v19 != v18 );
      v10 = *((const double **)this + 152);
      v11 = *((const double **)this + 151);
    }
  }
  else
  {
    v13 = nullptr;
    v176 = 0.0;
  }
  ClpSimplex::computePrimals(this, v11, v10);
  if ( a3 )
  {
    v20 = *((_DWORD *)this + 27);
    v21 = *((_QWORD *)this + 152);
    if ( v20 && (const double *)v21 != a3 )
    {
      if ( v20 >> 3 <= 0 )
      {
        v26 = a3;
      }
      else
      {
        v22 = a3;
        v23 = *((_QWORD *)this + 152);
        do
        {
          v24 = *(_QWORD *)v22;
          v23 += 64;
          v22 += 8;
          *(_QWORD *)(v23 - 64) = v24;
          *(double *)(v23 - 56) = *(v22 - 7);
          *(double *)(v23 - 48) = *(v22 - 6);
          *(double *)(v23 - 40) = *(v22 - 5);
          *(double *)(v23 - 32) = *(v22 - 4);
          *(double *)(v23 - 24) = *(v22 - 3);
          *(double *)(v23 - 16) = *(v22 - 2);
          *(double *)(v23 - 8) = *(v22 - 1);
        }
        while ( v23 != v21 + (((unsigned int)((v20 >> 3) - 1) + 1LL) << 6) );
        v25 = ((v20 >> 3) - 1 + 1LL) << 6;
        v26 = (const double *)((char *)a3 + v25);
        v21 += v25;
      }
      switch ( v20 % 8 )
      {
        case 1:
          goto LABEL_22;
        case 2:
          goto LABEL_21;
        case 3:
          goto LABEL_20;
        case 4:
          goto LABEL_19;
        case 5:
          goto LABEL_18;
        case 6:
          goto LABEL_17;
        case 7:
          *(double *)(v21 + 48) = v26[6];
LABEL_17:
          *(double *)(v21 + 40) = v26[5];
LABEL_18:
          *(double *)(v21 + 32) = v26[4];
LABEL_19:
          *(double *)(v21 + 24) = v26[3];
LABEL_20:
          *(double *)(v21 + 16) = v26[2];
LABEL_21:
          *(double *)(v21 + 8) = v26[1];
LABEL_22:
          *(double *)v21 = *v26;
          break;
        default:
          break;
      }
    }
    memset(*((void **)this + 151), 0, 8LL * *((int *)this + 26));
    a5 = -1.0;
    ClpModel::times(this, -1.0, *((const double **)this + 152), *((double **)this + 151));
  }
  v171 = 0.0;
  if ( *((int *)this + 325) > 0 )
  {
    v27 = *((ClpNonLinearCost **)this + 165);
    if ( v27 )
    {
      if ( (*((_BYTE *)this + 336) & 4) != 0 )
      {
        a5 = 0.0;
        ClpNonLinearCost::checkInfeasibilities(v27, 0.0);
      }
      else
      {
        a5 = *((double *)this + 110);
        ClpNonLinearCost::checkInfeasibilities(v27, a5);
      }
      v28 = *((_QWORD *)this + 165);
      v171 = *(double *)v28 + 0.0;
      if ( *(_DWORD *)(v28 + 112) )
      {
        v106 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       30,
                                       (ClpSimplex *)((char *)this + 416));
        a5 = **((double **)this + 165);
        v107 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v106);
        v108 = CoinMessageHandler::operator<<(v107);
        CoinMessageHandler::operator<<(v108, 0, a5);
      }
    }
  }
  if ( !a4
    || (v182 = *(double *)(*((_QWORD *)this + 165) + 24LL),
        maximumAbsElement(*((const double **)this + 150), *((_DWORD *)this + 26) + *((_DWORD *)this + 27)),
        v64 = *((double *)this + 171),
        v65 = *((double *)this + 172),
        v66 = fmin(*((double *)this + 95), 100000.0 / (a5 + 1.0)),
        v64 <= v176)
    && v182 <= fmax(10.0 * v65, v176 * 100.0)
    || v182 <= fmax(v64, v65) && v66 <= 0.001 )
  {
    if ( !v13 )
      goto LABEL_33;
LABEL_32:
    operator delete[](v13);
    goto LABEL_33;
  }
  if ( *((int *)this + 325) > 1 )
  {
    ClpSimplex::allSlackBasis(this, 1);
    v119 = *((_DWORD *)this + 26);
    if ( !v119 )
    {
LABEL_193:
      v44 = 1;
      if ( v13 )
      {
        operator delete[](v13);
        return 1;
      }
      return v44;
    }
    v120 = v119 + 7;
    v121 = *((_DWORD *)this + 27);
    v122 = *((unsigned int **)this + 157);
    if ( v119 >= 0 )
      v120 = *((_DWORD *)this + 26);
    v123 = v120 >> 3;
    v124 = v123;
    if ( v123 <= 0 )
    {
LABEL_185:
      switch ( v119 % 8 )
      {
        case 1:
          goto LABEL_192;
        case 2:
          goto LABEL_191;
        case 3:
          goto LABEL_190;
        case 4:
          goto LABEL_189;
        case 5:
          goto LABEL_188;
        case 6:
          goto LABEL_187;
        case 7:
          v122[6] = v121 + 6;
LABEL_187:
          v122[5] = v121 + 5;
LABEL_188:
          v122[4] = v121 + 4;
LABEL_189:
          v122[3] = v121 + 3;
LABEL_190:
          v122[2] = v121 + 2;
LABEL_191:
          v122[1] = v121 + 1;
LABEL_192:
          *v122 = v121;
          break;
        default:
          goto LABEL_193;
      }
      goto LABEL_193;
    }
    v125 = v123 - 1;
    if ( v123 - 1 <= 2 )
    {
      v163 = v122;
      v162 = v121;
    }
    else
    {
      v126 = v122;
      v127 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_290830);
      v129 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v130 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
      v131 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v121), 0), (__m128i)xmmword_290820);
      v132 = _mm_load_si128((const __m128i *)&xmmword_290840);
      v133 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v134 = _mm_load_si128((const __m128i *)&xmmword_290850);
      do
      {
        ++v127;
        v135 = _mm_add_epi32(v131, v133);
        v126 += 32;
        v136 = _mm_unpacklo_epi32(v131, v135);
        v137 = _mm_unpackhi_epi32(v131, v135);
        v138 = _mm_add_epi32(v131, v129);
        v139 = _mm_add_epi32(v131, v134);
        v140 = _mm_add_epi32(v131, v130);
        v141 = _mm_unpackhi_epi32(v138, v139);
        v142 = _mm_unpacklo_epi32(v138, v139);
        v143 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), v131);
        v144 = _mm_unpacklo_epi32(v140, v143);
        v145 = _mm_unpackhi_epi32(v140, v143);
        v146 = _mm_add_epi32(v131, v132);
        v147 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), v131);
        v148 = _mm_unpackhi_epi32(v146, v147);
        v131 = _mm_add_epi32(v131, si128);
        v149 = _mm_unpacklo_epi32(v146, v147);
        v150 = v136;
        v151 = _mm_unpackhi_epi32(v136, v144);
        v152 = _mm_unpacklo_epi32(v150, v144);
        v153 = v137;
        v154 = _mm_unpackhi_epi32(v137, v145);
        v155 = _mm_unpacklo_epi32(v153, v145);
        v156 = v142;
        v157 = _mm_unpackhi_epi32(v142, v149);
        v158 = _mm_unpacklo_epi32(v156, v149);
        v159 = v141;
        v160 = _mm_unpackhi_epi32(v141, v148);
        v161 = _mm_unpacklo_epi32(v159, v148);
        *((__m128i *)v126 - 8) = _mm_unpacklo_epi32(v152, v158);
        *((__m128i *)v126 - 6) = _mm_unpacklo_epi32(v151, v157);
        *((__m128i *)v126 - 7) = _mm_unpackhi_epi32(v152, v158);
        *((__m128i *)v126 - 4) = _mm_unpacklo_epi32(v155, v161);
        *((__m128i *)v126 - 5) = _mm_unpackhi_epi32(v151, v157);
        *((__m128i *)v126 - 3) = _mm_unpackhi_epi32(v155, v161);
        *((__m128i *)v126 - 2) = _mm_unpacklo_epi32(v154, v160);
        *((__m128i *)v126 - 1) = _mm_unpackhi_epi32(v154, v160);
      }
      while ( v127 < (unsigned int)v123 >> 2 );
      v124 = v123 - (v123 & 0xFFFFFFFC);
      v162 = v121 + 8 * (v123 & 0xFFFFFFFC);
      v163 = &v122[8 * (v123 & 0xFFFFFFFC)];
      if ( (v123 & 0xFFFFFFFC) == v123 )
      {
LABEL_184:
        v121 += 8 * v125 + 8;
        v122 += 8 * v125 + 8;
        goto LABEL_185;
      }
    }
    *v163 = v162;
    v163[1] = v162 + 1;
    v163[2] = v162 + 2;
    v163[3] = v162 + 3;
    v163[4] = v162 + 4;
    v163[5] = v162 + 5;
    v163[6] = v162 + 6;
    v163[7] = v162 + 7;
    if ( v124 != 1 )
    {
      v163[8] = v162 + 8;
      v163[9] = v162 + 9;
      v163[10] = v162 + 10;
      v163[11] = v162 + 11;
      v163[12] = v162 + 12;
      v163[13] = v162 + 13;
      v163[14] = v162 + 14;
      v163[15] = v162 + 15;
      if ( v124 != 2 )
      {
        v163[16] = v162 + 16;
        v163[17] = v162 + 17;
        v163[18] = v162 + 18;
        v163[19] = v162 + 19;
        v163[20] = v162 + 20;
        v163[21] = v162 + 21;
        v163[23] = v162 + 23;
        v163[22] = v162 + 22;
      }
    }
    goto LABEL_184;
  }
  v177 = 1000;
  if ( v65 != 10.0 )
    v177 = 100;
  v67 = *((int *)this + 26);
  if ( v67 > 0x1FFFFFFFFFFFFFFELL )
LABEL_225:
    __cxa_throw_bad_array_new_length();
  v68 = operator new[](4 * v67);
  if ( *((int *)this + 26) <= 0 )
    goto LABEL_214;
  v69 = 0;
  v70 = 0;
  do
  {
    v71 = v13[v69];
    ++v70;
    v72 = (double *)(*((_QWORD *)this + 150) + 8LL * *(int *)(*((_QWORD *)this + 157) + v69 * 4));
    v73 = *v72;
    *v72 = v71;
    v74 = *((_DWORD *)this + 26);
    v13[v69++] = fabs(v73 - v71);
  }
  while ( v74 > v70 );
  if ( v74 <= 0 )
  {
LABEL_214:
    v180 = (void *)v68;
    CoinSort_2<double,int>(v13, v13, v68);
    operator delete[](v180);
    if ( !v13 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v75 = *((_QWORD *)this + 157);
  v76 = *((_DWORD *)this + 27);
  v77 = 0;
  v78 = (unsigned int)(v74 - 1) + 1LL;
  v79 = 0;
  v80 = 0;
  do
  {
    v81 = *(int *)(v75 + 4 * v77);
    if ( v76 > (int)v81 )
    {
      v82 = v13[v77];
      if ( v82 > 0.0001 )
      {
        v83 = v80++;
        *(_DWORD *)(v68 + 4 * v83) = v77;
        v13[v83] = -v82;
        v79 += (*(_BYTE *)(*((_QWORD *)this + 33) + v81) & 7) == 1;
      }
    }
    ++v77;
  }
  while ( v77 != v78 );
  if ( !v79 )
  {
    v179 = (void *)v68;
    CoinSort_2<double,int>(v13, v13, v68);
    operator delete[](v179);
    goto LABEL_32;
  }
  v184 = v80;
  v183 = (int *)v68;
  CoinSort_2<double,int>(v13, &v13[v80], v68);
  v84 = v177;
  if ( v184 <= v177 )
    v84 = v184;
  if ( v84 > 0 )
  {
    v85 = v183;
    do
    {
      v86 = *v85;
      v87 = *(int *)(*((_QWORD *)this + 157) + 4 * v86);
      v88 = *v85;
      *(_BYTE *)(v87 + *((_QWORD *)this + 33)) = *(_BYTE *)(v87 + *((_QWORD *)this + 33)) & 0xF8 | 4;
      v89 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v86 + *((_DWORD *)this + 27));
      *v89 = *v89 & 0xF8 | 1;
      *(_DWORD *)(*((_QWORD *)this + 157) + 4 * v86) = *((_DWORD *)this + 27) + v88;
      v90 = (double *)(*((_QWORD *)this + 150) + 8 * v87);
      if ( fabs(*v90) > 1.0e10 )
      {
        v91 = *(double *)(*((_QWORD *)this + 126) + 8 * v87);
        if ( v91 >= 0.0 && (v91 = *(double *)(*((_QWORD *)this + 123) + 8 * v87), v91 <= 0.0) )
          *v90 = 0.0;
        else
          *v90 = v91;
      }
      ++v85;
    }
    while ( &v183[v84 - 1 + 1] != v85 );
  }
  v178 = v84;
  operator delete[](v183);
  operator delete[](v13);
  v44 = v178;
  if ( v178 )
    return v44;
LABEL_33:
  if ( *((char *)this + 728) < 0 && !*((_DWORD *)this + 77) )
  {
    v29 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    if ( v29 )
    {
      v110 = v29 + 7;
      v111 = *((_QWORD **)this + 129);
      if ( v29 >= 0 )
        v110 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
      v112 = v110 >> 3;
      if ( v112 > 0 )
      {
        v113 = (unsigned int)(v112 - 1);
        v114 = *((_QWORD **)this + 129);
        v115 = v113;
        v116 = &v111[8 * v113 + 8];
        do
        {
          *v114 = 0;
          v114[1] = 0;
          v114 += 8;
          *(v114 - 6) = 0;
          *(v114 - 5) = 0;
          *(v114 - 4) = 0;
          *(v114 - 3) = 0;
          *(v114 - 2) = 0;
          *(v114 - 1) = 0;
        }
        while ( v114 != v116 );
        v111 += 8 * v115 + 8;
      }
      switch ( v29 % 8 )
      {
        case 1:
          goto LABEL_167;
        case 2:
          goto LABEL_166;
        case 3:
          goto LABEL_165;
        case 4:
          goto LABEL_164;
        case 5:
          goto LABEL_163;
        case 6:
          goto LABEL_162;
        case 7:
          v111[6] = 0;
LABEL_162:
          v111[5] = 0;
LABEL_163:
          v111[4] = 0;
LABEL_164:
          v111[3] = 0;
LABEL_165:
          v111[2] = 0;
LABEL_166:
          v111[1] = 0;
LABEL_167:
          *v111 = 0;
          break;
        default:
          break;
      }
    }
  }
  ClpSimplex::computeDuals(this, a2);
  if ( *((char *)this + 728) < 0 && !*((_DWORD *)this + 77) )
  {
    v30 = *((_DWORD *)this + 27);
    v31 = *((_QWORD *)this + 34);
    if ( v30 > 0 )
    {
      v32 = 0;
      do
      {
        if ( *(_BYTE *)(v31 + v32) )
        {
          v33 = *(_BYTE *)(*((_QWORD *)this + 33) + v32) & 7;
          if ( v33 != 1 )
          {
            v34 = *(double *)(*((_QWORD *)this + 147) + 8 * v32);
            if ( v33 == 3 )
            {
              v35 = fmax(-v34, *(double *)(*((_QWORD *)this + 174) + 8 * v32) * 10.0);
            }
            else
            {
              v35 = 0.0;
              if ( v33 == 2 )
                v35 = fmin(-v34, -10.0 * *(double *)(*((_QWORD *)this + 174) + 8 * v32));
            }
            *(double *)(*((_QWORD *)this + 129) + 8 * v32) = v35;
            *(double *)(*((_QWORD *)this + 147) + 8 * v32) = v35 + *(double *)(*((_QWORD *)this + 147) + 8 * v32);
            v30 = *((_DWORD *)this + 27);
          }
        }
        ++v32;
      }
      while ( v30 > (int)v32 );
    }
  }
  ClpSimplex::checkBothSolutions(this);
  v36 = *((int **)this + 43);
  *((double *)this + 9) = *((double *)this + 9) + v171 / (*((double *)this + 11) * *((double *)this + 12));
  if ( v36[26] > 3 || (v37 = *((double *)this + 95), v37 > 0.01) || *((double *)this + 96) > 0.01 )
  {
    v38 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  (CoinMessageHandler *)v36,
                                  8,
                                  (ClpSimplex *)((char *)this + 416));
    v39 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v38);
    v40 = *((double *)this + 96);
    v41 = CoinMessageHandler::operator<<(v39);
    CoinMessageHandler::operator<<(v41, 0, v40);
    v37 = *((double *)this + 95);
  }
  v42 = *((_DWORD *)this + 77);
  if ( v37 > 0.1 && *((int *)this + 26) > 100 )
  {
    if ( !v42 )
    {
LABEL_53:
      v43 = 1;
      v44 = 0;
      goto LABEL_54;
    }
    v51 = *((_QWORD *)this + 158);
    v52 = *(double **)(v51 + 8);
    if ( v52 )
    {
      if ( v52[1] <= 1.0e-18 )
      {
        if ( *((_DWORD *)this + 326) > 2u )
          goto LABEL_76;
        goto LABEL_74;
      }
      CoinFactorization::zeroTolerance((CoinFactorization *)v52, 1.0e-18);
      v42 = *((_DWORD *)this + 77);
    }
    else
    {
      v164 = *(double **)(v51 + 16);
      if ( v164[2] <= 1.0e-18 )
      {
        if ( *((_DWORD *)this + 326) > 2u )
          goto LABEL_76;
        goto LABEL_197;
      }
      CoinOtherFactorization::zeroTolerance((CoinOtherFactorization *)v164, 1.0e-18);
      v42 = *((_DWORD *)this + 77);
    }
  }
  if ( !v42 )
    goto LABEL_53;
  if ( *((_DWORD *)this + 326) <= 2u )
  {
    v51 = *((_QWORD *)this + 158);
    v52 = *(double **)(v51 + 8);
    if ( v52 )
    {
LABEL_74:
      v53 = *v52;
LABEL_75:
      if ( v53 >= 0.9899999999 )
        goto LABEL_53;
      goto LABEL_76;
    }
LABEL_197:
    v165 = *(_QWORD *)(v51 + 16);
    if ( !v165 )
      goto LABEL_76;
    v53 = *(double *)(v165 + 8);
    goto LABEL_75;
  }
LABEL_76:
  if ( v175 == 0.0 && v181 == 0.0 )
    goto LABEL_53;
  v54 = *((double *)this + 96);
  if ( *((int *)this + 325) > 0 && (v55 = *((_QWORD *)this + 165)) != 0 && *(double *)(v55 + 32) != 0.0 )
  {
    v166 = 0.000001 * *((double *)this + 113);
    if ( v166 <= 1000.0 )
    {
      v56 = *((double *)this + 96);
      if ( v166 >= 1.0 )
      {
        v56 = v54 / v166;
        v175 = v175 / v166;
      }
    }
    else
    {
      v56 = v54 / 1000.0;
      v175 = v175 / 1000.0;
    }
  }
  else
  {
    v56 = *((double *)this + 96);
  }
  v57 = *((double *)this + 95);
  if ( (v57 <= 1000.0 || v57 <= v181 * 100.0) && (v56 <= 1000.0 || v56 <= v175 * 100.0) )
    goto LABEL_53;
  v58 = *((_QWORD *)this + 158);
  v59 = *(CoinFactorization **)(v58 + 8);
  if ( v59 )
  {
    v60 = *(double *)v59;
LABEL_88:
    v61 = 2.0;
    if ( v57 <= 1.0e10 && v54 <= 1.0e10 )
      v61 = 1.2;
    if ( v60 < 0.1 )
    {
      v62 = 0.1;
      if ( v59 )
      {
LABEL_94:
        CoinFactorization::pivotTolerance(v59, v62);
        v58 = *((_QWORD *)this + 158);
        v59 = *(CoinFactorization **)(v58 + 8);
        goto LABEL_95;
      }
      if ( *(_QWORD *)(v58 + 16) )
      {
        CoinOtherFactorization::pivotTolerance(*(CoinOtherFactorization **)(v58 + 16), 0.1);
        v58 = *((_QWORD *)this + 158);
        v59 = *(CoinFactorization **)(v58 + 8);
        goto LABEL_95;
      }
    }
    else
    {
      if ( v60 >= 0.9899999900000001 )
        goto LABEL_95;
      v62 = fmin(0.99, v61 * v60);
      if ( v59 )
        goto LABEL_94;
      v170 = *(CoinOtherFactorization **)(v58 + 16);
      if ( v170 )
      {
        CoinOtherFactorization::pivotTolerance(v170, v62);
        v58 = *((_QWORD *)this + 158);
        v59 = *(CoinFactorization **)(v58 + 8);
LABEL_95:
        if ( v59 )
        {
          v63 = *(double *)v59;
          goto LABEL_97;
        }
        v169 = *(_QWORD *)(v58 + 16);
        if ( v169 )
        {
          v63 = *(double *)(v169 + 8);
          goto LABEL_97;
        }
      }
    }
    v63 = 0.00000001;
    goto LABEL_97;
  }
  v167 = *(_QWORD *)(v58 + 16);
  if ( v167 )
  {
    v60 = *(double *)(v167 + 8);
    goto LABEL_88;
  }
  if ( v57 <= 1.0e10 )
  {
    v60 = 0.00000001;
    v63 = 0.00000001;
  }
  else
  {
    v63 = 0.00000001;
    v60 = 0.00000001;
  }
LABEL_97:
  v43 = v63 == v60;
  v44 = 0;
  if ( v60 < 0.9899999 )
  {
    *((_QWORD *)this + 95) = 0;
    *((_QWORD *)this + 96) = 0;
    v44 = -123456789;
  }
LABEL_54:
  v45 = *((_DWORD *)this + 419);
  if ( v45 > 0 && *((_DWORD *)this + 423) - v45 <= 14 )
  {
    v46 = *((_QWORD *)this + 158);
    v47 = *(CoinFactorization **)(v46 + 8);
    if ( v47 )
    {
      v48 = *(double *)v47;
    }
    else
    {
      v109 = *(_QWORD *)(v46 + 16);
      if ( !v109 )
        goto LABEL_62;
      v48 = *(double *)(v109 + 8);
    }
    if ( v48 < 0.25 && v43 )
    {
      v49 = v48 * 1.5;
      if ( v47 )
      {
        v172 = v44;
        CoinFactorization::pivotTolerance(v47, v49);
        v44 = v172;
      }
      else
      {
        v168 = *(CoinOtherFactorization **)(v46 + 16);
        if ( v168 )
        {
          v174 = v44;
          CoinOtherFactorization::pivotTolerance(v168, v49);
          v44 = v174;
        }
      }
    }
  }
LABEL_62:
  if ( !a4 && *((int *)this + 325) > 0 )
    *((_DWORD *)this + 337) = -1;
  if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
  {
    v173 = v44;
    printf(
      "end getsolution algorithm %d status %d npinf %d sum,relaxed %g,%g ndinf %d sum,relaxed %g,%g\n",
      *((_DWORD *)this + 325),
      *((_DWORD *)this + 80),
      *((_DWORD *)this + 308),
      *((double *)this + 112),
      *((double *)this + 115),
      *((_DWORD *)this + 306),
      *((double *)this + 111),
      *((double *)this + 114));
    v44 = v173;
  }
  if ( *((char *)this + 730) < 0 && *((int *)this + 325) < 0 )
  {
    v92 = v44;
    v93 = *((double *)this + 115);
    v94 = *((double *)this + 117) + 1.0e-15;
    v95 = *((double *)this + 110);
    do
    {
      while ( v93 == 0.0 && v95 > v94 )
      {
        v117 = fmax(0.25 * v95, *((double *)this + 117));
        *((double *)this + 110) = v117;
        printf("Resetting primal tolerance from %g to %g\n", v95, v117);
        v118 = *((_QWORD *)this + 110);
        *((_DWORD *)this + 182) &= ~0x800000u;
        *((_QWORD *)this + 4) = v118;
        v92 = ClpSimplex::gutsOfSolution(this, a2, a3, a4);
        v93 = *((double *)this + 115);
        v95 = *((double *)this + 110);
      }
      v96 = *((_DWORD *)this + 182);
      if ( v95 > v94 )
      {
        *((_DWORD *)this + 182) = v96 | 0x800000;
      }
      else if ( (v96 & 0x800000) == 0 )
      {
        return v92;
      }
      v97 = *((double *)this + 119);
      v98 = *((double *)this + 112) / (double)*((int *)this + 308);
      v99 = *((double *)this + 120);
      v100 = *((double *)this + 121);
      v101 = *((double *)this + 122);
      v102 = *((double *)this + 118);
      *((double *)this + 119) = v99;
      *((double *)this + 118) = v97;
      *((double *)this + 120) = v100;
      *((double *)this + 121) = v101;
      *((double *)this + 122) = v98;
      v103 = fmin(fmin(fmin(fmin(1.797693134862316e308, v97), v99), v100), v101);
      if ( v97 == 1.797693134862316e308 )
      {
        v105 = v95;
      }
      else
      {
        if ( v102 == 1.797693134862316e308 )
          v104 = fmin(fmin(0.1, (v97 + v98 + v99 + v100 + v101) / 5.0 * 0.1), v98);
        else
          v104 = fmin(0.1 * v103, v95);
        v105 = fmax(v104, *((double *)this + 117));
        *((double *)this + 110) = v105;
      }
      if ( v105 == v95 )
        break;
      printf("Changing primal tolerance from %g to %g\n", v95, v105);
      *((_DWORD *)this + 182) &= ~0x800000u;
      v92 = ClpSimplex::gutsOfSolution(this, a2, a3, a4);
      v95 = *((double *)this + 110);
      if ( v95 > v94 )
        *((_DWORD *)this + 182) |= 0xC00000u;
      v93 = *((double *)this + 115);
    }
    while ( v93 == 0.0 );
    return v92;
  }
  return v44;
}

