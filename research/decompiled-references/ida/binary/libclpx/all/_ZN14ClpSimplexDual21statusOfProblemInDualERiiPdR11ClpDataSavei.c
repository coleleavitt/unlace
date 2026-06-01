int __fastcall ClpSimplexDual::statusOfProblemInDual(
        ClpSimplexDual *this,
        int *a2,
        int a3,
        double *a4,
        ClpDataSave *a5,
        int a6,
        double a7,
        double a8,
        __m128d a9,
        __m128d a10)
{
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // eax
  int *v18; // r9
  unsigned __int64 v19; // r8
  int *v20; // rdi
  __int64 v21; // r10
  double v22; // xmm0_8
  __m128d v23; // xmm0
  int v24; // r11d
  __int64 v25; // rdi
  double *v26; // r10
  unsigned int v27; // r14d
  unsigned int v28; // r9d
  __int64 v29; // rdi
  __int64 v30; // rdi
  int v31; // r11d
  __int64 v32; // r8
  __int64 v33; // rdi
  double v34; // xmm0_8
  int v35; // eax
  bool v36; // bp
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  double v40; // xmm1_8
  double v41; // xmm0_8
  int v42; // eax
  double v43; // xmm1_8
  double v44; // xmm4_8
  double v45; // xmm0_8
  int v46; // eax
  double v47; // xmm2_8
  double v48; // xmm0_8
  double v49; // xmm1_8
  int v50; // eax
  double v51; // xmm1_8
  double v52; // xmm0_8
  double v53; // xmm1_8
  int v54; // eax
  double v55; // xmm2_8
  double v56; // xmm0_8
  double v57; // xmm1_8
  double v58; // xmm1_8
  double v59; // xmm0_8
  double v60; // xmm1_8
  __m128i v61; // xmm0
  double v62; // xmm0_8
  __m128d v63; // xmm1
  int IterationNumber; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  bool v68; // bp
  double v69; // xmm0_8
  int v70; // eax
  int v71; // edx
  CoinMessageHandler *v72; // rax
  CoinMessageHandler *v73; // rax
  CoinMessageHandler *v74; // rax
  CoinMessageHandler *v75; // rax
  CoinMessageHandler *v76; // rax
  __m128d v77; // xmm0
  CoinMessageHandler *v78; // rax
  CoinMessageHandler *v79; // rax
  __int64 v80; // rax
  int v81; // eax
  int v82; // r14d
  int v83; // r13d
  int v84; // r12d
  bool v85; // al
  int v86; // ebp
  int v87; // edi
  __int64 v88; // rsi
  int v89; // r9d
  int i; // ecx
  _BYTE *v91; // rax
  __int64 v92; // rax
  CoinFactorization *v93; // rdi
  int v94; // eax
  __int64 v95; // rdi
  void (__fastcall *v96)(__int64, ClpSimplexDual *, __int64); // rax
  int v97; // esi
  int v98; // ecx
  char *v99; // rdx
  char *v100; // rdi
  int v101; // r8d
  __int64 v102; // rax
  unsigned int v103; // esi
  __int64 v104; // rax
  unsigned int v105; // ecx
  __int64 v106; // rax
  char *v107; // rcx
  char *v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 *v111; // r9
  __int64 *v112; // r10
  __int64 *v113; // r11
  __int64 *v114; // rax
  __int64 *v115; // rdx
  __int64 v116; // r8
  __int64 v117; // xmm0_8
  __int64 v118; // r8
  __int64 *v119; // rsi
  __int64 *v120; // rax
  __int64 *v121; // rdx
  __int64 v122; // r8
  __int64 v123; // xmm0_8
  __int64 v124; // r8
  __int64 v125; // rcx
  int v126; // r14d
  int v127; // edx
  int *v128; // rax
  int *v129; // rax
  int *v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // rax
  CoinMessageHandler *v133; // rax
  CoinMessageHandler *v134; // rdi
  __int64 v135; // rax
  __int64 v136; // rax
  CoinFactorization *v137; // rdi
  __int64 (__fastcall *v138)(ClpDualRowPivot *); // rax
  int v139; // eax
  void *v140; // rdi
  bool v141; // zf
  CoinMessageHandler *v142; // rdi
  __int64 v143; // rax
  _BYTE *v144; // rdi
  _BYTE *v145; // r8
  unsigned int v146; // esi
  __int64 v147; // rdx
  unsigned int v148; // ecx
  __int64 v149; // rdx
  _BYTE *v150; // rcx
  _BYTE *v151; // rdx
  __int64 v152; // rsi
  __int64 v153; // rdx
  double v154; // xmm2_8
  double v155; // xmm0_8
  int v156; // edx
  int v157; // esi
  __int64 v158; // rax
  CoinFactorization *v159; // rdi
  double v160; // xmm2_8
  int v161; // eax
  int v162; // eax
  __int64 v163; // rdi
  __int64 v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // rdi
  __int64 v167; // rax
  CoinMessageHandler *v168; // rax
  CoinMessageHandler *v169; // rdi
  __int64 v170; // rax
  __int64 v171; // rax
  double v172; // xmm0_8
  CoinFactorization *v173; // rdi
  int v174; // esi
  int v175; // eax
  __int64 v176; // rdx
  double *v177; // rax
  double v178; // xmm0_8
  double v179; // xmm0_8
  int v180; // eax
  double v181; // xmm4_8
  double v182; // xmm5_8
  __int64 v183; // rdx
  __int64 v184; // rax
  int v185; // edx
  unsigned int v186; // eax
  signed int v187; // ebp
  unsigned __int64 v188; // rax
  char *v189; // r13
  __int64 v190; // rax
  void *v191; // rbp
  size_t v192; // r14
  __int64 v193; // rax
  CoinMessageHandler *v194; // rax
  __int64 v195; // rax
  void *v196; // r8
  int v197; // edx
  int v198; // eax
  int v199; // eax
  int v200; // edx
  int v201; // eax
  size_t v202; // rdx
  __int64 v203; // rdx
  CoinFactorization *v204; // rdi
  int v205; // ebp
  int v206; // eax
  CoinOtherFactorization *v207; // rdi
  double *v208; // rdi
  int v209; // eax
  int v210; // r11d
  double v211; // xmm4_8
  int v212; // ebp
  __int64 v213; // rdx
  void *v214; // rdi
  __int64 v215; // rax
  CoinIndexedVector *v216; // rcx
  CoinIndexedVector *v217; // rdx
  CoinIndexedVector *v218; // rsi
  int v219; // r10d
  unsigned __int64 v220; // rdx
  void *v221; // rax
  unsigned __int64 v222; // rdx
  __int64 v223; // rdx
  __int64 v224; // rax
  int v225; // eax
  int v226; // eax
  double *v227; // rdi
  double *v228; // rdi
  __int64 v229; // rdx
  void *v230; // rdi
  unsigned __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rdx
  CoinFactorization *v234; // rdi
  int v235; // r14d
  int v236; // eax
  CoinOtherFactorization *v237; // rdi
  char *v238; // rcx
  char *v239; // rax
  char v240; // r9
  char *v241; // rcx
  _BYTE *v242; // rdx
  char v243; // r9
  __int64 v244; // rdx
  int v245; // r9d
  __int64 v246; // rax
  int v247; // edx
  int v248; // edi
  __int64 v249; // rcx
  __m128d v250; // xmm6
  int v251; // ebp
  int v252; // esi
  __int64 v253; // rax
  __m128d v254; // xmm3
  __m128d v255; // xmm0
  CoinIndexedVector *v256; // rsi
  int v257; // r12d
  int v258; // r13d
  int v259; // eax
  CoinIndexedVector *v260; // rdi
  __int64 v261; // rsi
  int v262; // eax
  __int64 v263; // rdi
  __int64 v264; // r9
  __int64 v265; // rax
  __int64 v266; // rdi
  __m128d v267; // xmm4
  __m128d v268; // xmm3
  int v269; // r11d
  __int64 v270; // rax
  __m128d v271; // xmm3
  __m128d v272; // xmm0
  __m128d v273; // xmm4
  __m128d v274; // xmm3
  __int64 v275; // rdx
  __int64 v276; // rdi
  unsigned __int64 v277; // rax
  char *v278; // r13
  __int64 v279; // rax
  void *v280; // rbp
  size_t v281; // r14
  __int64 v282; // rax
  __int64 v283; // rax
  CoinFactorization *v284; // rdi
  double v285; // xmm0_8
  double v286; // xmm0_8
  CoinMessageHandler *v287; // rax
  CoinMessageHandler *v288; // rdi
  __int64 v289; // rax
  int v290; // eax
  __int64 v291; // rdx
  CoinFactorization *v292; // rdi
  int v293; // ebp
  int v294; // eax
  CoinOtherFactorization *v295; // rdi
  __int64 v296; // rdx
  __int64 v297; // rdi
  __int64 v298; // rax
  double *v299; // rdi
  CoinOtherFactorization *v300; // rdi
  CoinOtherFactorization *v301; // rdi
  double v304; // [rsp+18h] [rbp-E0h]
  bool v305; // [rsp+18h] [rbp-E0h]
  int v306; // [rsp+20h] [rbp-D8h]
  int v307; // [rsp+30h] [rbp-C8h]
  double v308; // [rsp+40h] [rbp-B8h]
  double v309; // [rsp+40h] [rbp-B8h]
  int v310; // [rsp+48h] [rbp-B0h]
  int v311; // [rsp+48h] [rbp-B0h]
  int v313; // [rsp+5Ch] [rbp-9Ch]
  CoinMessages *v314; // [rsp+60h] [rbp-98h]
  __int64 v315; // [rsp+68h] [rbp-90h]
  __int64 v316; // [rsp+70h] [rbp-88h]
  double v317; // [rsp+78h] [rbp-80h]
  char v318; // [rsp+82h] [rbp-76h]
  bool v319; // [rsp+83h] [rbp-75h]
  char v320; // [rsp+84h] [rbp-74h]
  bool v321; // [rsp+85h] [rbp-73h]
  char v322; // [rsp+86h] [rbp-72h]
  bool v323; // [rsp+87h] [rbp-71h]
  void *src; // [rsp+88h] [rbp-70h]
  double srca; // [rsp+88h] [rbp-70h]
  void *srcb; // [rsp+88h] [rbp-70h]
  int v327; // [rsp+90h] [rbp-68h]
  void *v328; // [rsp+90h] [rbp-68h]
  void *v329; // [rsp+90h] [rbp-68h]
  void *v330; // [rsp+90h] [rbp-68h]
  void *v331; // [rsp+90h] [rbp-68h]
  void *v332; // [rsp+90h] [rbp-68h]
  void *v333; // [rsp+90h] [rbp-68h]
  size_t na; // [rsp+98h] [rbp-60h]
  __int64 nb; // [rsp+98h] [rbp-60h]
  const void *n; // [rsp+98h] [rbp-60h]
  __int64 v337; // [rsp+A0h] [rbp-58h]
  void *v338; // [rsp+A8h] [rbp-50h]
  double v339; // [rsp+B0h] [rbp-48h] BYREF
  double v340[8]; // [rsp+B8h] [rbp-40h] BYREF

  v14 = *((_DWORD *)this + 77);
  v15 = *((int *)this + 27);
  v16 = *((unsigned int *)this + 26);
  v17 = v16 + v15;
  if ( v14 > 4 * ((int)v16 + (int)v15) && *((double *)this + 11) == 1.0 && (int)v16 > 0 )
  {
    v18 = *((int **)this + 157);
    v19 = *((_QWORD *)this + 129);
    a9.m128d_f64[0] = 0.0;
    v20 = v18 + 1;
    v21 = (__int64)&v18[(unsigned int)(v16 - 1) + 1];
    while ( 1 )
    {
      v22 = *(double *)(v19 + 8LL * *v18);
      v18 = v20;
      a9.m128d_f64[0] = fmax(a9.m128d_f64[0], fabs(v22));
      if ( (int *)v21 == v20 )
        break;
      ++v20;
    }
    v23 = (__m128d)0x412E848000000000uLL;
    if ( a9.m128d_f64[0] > 1000000.0 )
    {
      v23.m128d_f64[0] = 1000000.0 / a9.m128d_f64[0];
      *((double *)this + 11) = 1000000.0 / a9.m128d_f64[0];
      if ( v17 > 0 )
      {
        v24 = 0;
        v25 = (v19 >> 3) & 1;
        if ( (unsigned int)(v17 - 1) <= 1 )
          goto LABEL_15;
        if ( (_DWORD)v25 )
        {
          v24 = 1;
          *(double *)v19 = *(double *)v19 * v23.m128d_f64[0];
        }
        v26 = (double *)(v19 + 8 * v25);
        v27 = v17 - v25;
        v28 = 0;
        v29 = 0;
        a9 = _mm_unpacklo_pd(v23, v23);
        do
        {
          ++v28;
          *(__m128d *)&v26[v29] = _mm_mul_pd(*(__m128d *)&v26[v29], a9);
          v29 += 2;
        }
        while ( v28 < v27 >> 1 );
        v24 += v27 & 0xFFFFFFFE;
        if ( (v27 & 0xFFFFFFFE) != v27 )
        {
LABEL_15:
          v30 = v24;
          v31 = v24 + 1;
          *(double *)(v19 + 8 * v30) = *(double *)(v19 + 8 * v30) * v23.m128d_f64[0];
          if ( v17 > v31 )
            *(double *)(v19 + 8LL * v31) = v23.m128d_f64[0] * *(double *)(v19 + 8LL * v31);
        }
      }
    }
  }
  v32 = *((_QWORD *)this + 158);
  v33 = *(_QWORD *)(v32 + 8);
  if ( v33 )
    v306 = *(_DWORD *)(v33 + 68);
  else
    v306 = *(_DWORD *)(*(_QWORD *)(v32 + 16) + 52LL);
  v34 = *((double *)this + 97);
  if ( a3 == 2 )
  {
    if ( v34 != -1.0 )
      *((_QWORD *)this + 97) = 0xC000000000000000LL;
    v144 = *((_BYTE **)this + 33);
    v145 = *((_BYTE **)this + 164);
    if ( v17 && v144 != v145 )
    {
      v146 = v17 >> 3;
      if ( v17 >> 3 > 0 )
      {
        if ( (v145 >= v144 + 16 || v144 >= v145 + 16) && v146 > 1 )
        {
          v147 = 0;
          v148 = 0;
          do
          {
            ++v148;
            *(__m128i *)&v144[v147] = _mm_loadu_si128((const __m128i *)&v145[v147]);
            v147 += 16;
          }
          while ( v148 < v146 >> 1 );
          v149 = 8LL * (v146 & 0xFFFFFFFE);
          v150 = &v145[v149];
          v151 = &v144[v149];
          if ( (v146 & 0xFFFFFFFE) != v146 )
          {
            *v151 = *v150;
            v151[1] = v150[1];
            v151[2] = v150[2];
            v151[3] = v150[3];
            v151[4] = v150[4];
            v151[5] = v150[5];
            v151[6] = v150[6];
            v151[7] = v150[7];
          }
          LODWORD(v152) = v146 - 1;
        }
        else
        {
          v241 = *((char **)this + 164);
          v152 = v146 - 1;
          v242 = *((_BYTE **)this + 33);
          do
          {
            v243 = *v241;
            v242 += 8;
            v241 += 8;
            *(v242 - 8) = v243;
            *(v242 - 7) = *(v241 - 7);
            *(v242 - 6) = *(v241 - 6);
            *(v242 - 5) = *(v241 - 5);
            *(v242 - 4) = *(v241 - 4);
            *(v242 - 3) = *(v241 - 3);
            *(v242 - 2) = *(v241 - 2);
            *(v242 - 1) = *(v241 - 1);
          }
          while ( &v144[8 * v152 + 8] != v242 );
        }
        v153 = 8LL * (int)v152 + 8;
        v145 += v153;
        v144 += v153;
      }
      switch ( v17 % 8 )
      {
        case 1:
          goto LABEL_231;
        case 2:
          goto LABEL_230;
        case 3:
          goto LABEL_229;
        case 4:
          goto LABEL_228;
        case 5:
          goto LABEL_227;
        case 6:
          goto LABEL_226;
        case 7:
          v144[6] = v145[6];
LABEL_226:
          v144[5] = v145[5];
LABEL_227:
          v144[4] = v145[4];
LABEL_228:
          v144[3] = v145[3];
LABEL_229:
          v144[2] = v145[2];
LABEL_230:
          v144[1] = v145[1];
LABEL_231:
          *v144 = *v145;
          break;
        default:
          break;
      }
      v15 = *((int *)this + 27);
      v16 = *((unsigned int *)this + 26);
    }
    CoinMemcpyN<double>(*((_QWORD *)this + 159) + 8 * v15, v16, *((_QWORD *)this + 151));
    CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
      *((_QWORD *)this + 24),
      this,
      6,
      v340);
    ++*((_DWORD *)this + 324);
    *((_DWORD *)this + 326) = 1;
    ClpSimplexDual::resetFakeBounds(this, 0);
    v313 = *((_DWORD *)this + 80);
    if ( !*((_DWORD *)this + 77) )
    {
      v35 = *((_DWORD *)this + 340);
      v34 = *((double *)this + 97);
      v307 = 2;
      v320 = 0;
      goto LABEL_24;
    }
    v34 = *((double *)this + 97);
    if ( !*((_DWORD *)this + 308) )
    {
      v320 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v313 = *((_DWORD *)this + 80);
    if ( v14 )
    {
      v320 = 1;
      if ( !*((_DWORD *)this + 308) )
        goto LABEL_22;
    }
  }
  v320 = 0;
LABEL_22:
  if ( a3 != 3 )
  {
LABEL_23:
    v35 = *((_DWORD *)this + 340);
    v307 = a3;
    goto LABEL_24;
  }
  v35 = 1;
  v307 = 1;
LABEL_24:
  if ( v34 >= 0.0 && v306 && v34 <= 10000.0 && v306 <= 20 || !(v36 = v313 >= -2 || v35 < v306) )
  {
    v319 = 0;
    v318 = 1;
    v37 = a6 | v307;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64))(**((_QWORD **)this + 155) + 24LL))(
      *((_QWORD *)this + 155),
      this,
      1);
    v37 = a6;
    v318 = v36;
    if ( v307 )
    {
      if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
      {
        v164 = (unsigned int)(*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
        ++*((_DWORD *)this + 324);
        v165 = *((_QWORD *)this + 33);
        v166 = *((_QWORD *)this + 164);
        if ( (int)v164 > 0 )
        {
          v167 = 0;
          do
          {
            while ( (*(_BYTE *)(v165 + v167) & 0x40) != 0 )
            {
              *(_BYTE *)(v166 + v167++) |= 0x40u;
              v164 = (unsigned int)(*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
              v165 = *((_QWORD *)this + 33);
              v166 = *((_QWORD *)this + 164);
              if ( (int)v167 >= (int)v164 )
                goto LABEL_287;
            }
            ++v167;
          }
          while ( (int)v164 > (int)v167 );
        }
LABEL_287:
        CoinMemcpyN<unsigned char>(v166, v164, v165);
        CoinMemcpyN<double>(
          *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
          *((unsigned int *)this + 26),
          *((_QWORD *)this + 151));
        CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
        (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
          *((_QWORD *)this + 24),
          this,
          6,
          &v339);
        ClpSimplexDual::resetFakeBounds(this, 1);
        v168 = (CoinMessageHandler *)CoinMessageHandler::message(
                                       *((CoinMessageHandler **)this + 43),
                                       12,
                                       (ClpSimplexDual *)((char *)this + 416));
        v169 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v168);
        v170 = CoinMessageHandler::operator<<(v169);
        CoinMessageHandler::operator<<(v170, 0, v34);
        ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
        *((_DWORD *)this + 425) = 0;
        *((_DWORD *)this + 326) = 1;
        if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
        {
          CoinMemcpyN<unsigned char>(
            *((_QWORD *)this + 164),
            (unsigned int)(*((_DWORD *)this + 27) + *((_DWORD *)this + 26)),
            *((_QWORD *)this + 33));
          CoinMemcpyN<double>(
            *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
            *((unsigned int *)this + 26),
            *((_QWORD *)this + 151));
          CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
          (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            6,
            v340);
          if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
          {
            v233 = *((_QWORD *)this + 158);
            v234 = *(CoinFactorization **)(v233 + 8);
            do
            {
              if ( v234 )
              {
                v235 = *((_DWORD *)v234 + 217);
                *((_DWORD *)v234 + 217) = 0;
                CoinFactorization::pivotTolerance(v234, 0.99);
              }
              else
              {
                v237 = *(CoinOtherFactorization **)(v233 + 16);
                if ( v237 )
                  CoinOtherFactorization::pivotTolerance(v237, 0.99);
                v235 = 0;
              }
              **((_DWORD **)this + 157) = -1;
              v236 = ClpSimplex::internalFactorize(this, 2);
              v233 = *((_QWORD *)this + 158);
              v234 = *(CoinFactorization **)(v233 + 8);
              if ( v234 )
                *((_DWORD *)v234 + 217) = v235;
            }
            while ( v236 );
          }
          ClpSimplexDual::resetFakeBounds(this, 1);
        }
        v318 = 0;
        v307 = 2;
        v37 = a6 | 2;
      }
      else
      {
        v318 = v36;
        v37 = a6 | v307;
      }
    }
    v319 = v306 > 10 || *((_DWORD *)this + 80) != -4;
    if ( v319 )
      *((_DWORD *)this + 80) = -3;
    else
      v319 = v36;
  }
  if ( *((double *)this + 181) < 0.1 && *((double *)this + 110) == 0.0000001 )
  {
    v38 = *((_DWORD *)this + 419);
    if ( v38 > 0 && *((_DWORD *)this + 423) - v38 > 25 )
    {
      v39 = *((_DWORD *)this + 414);
      if ( v39 )
      {
        v40 = *((double *)this + 181);
        if ( v40 <= 0.1 )
        {
          v41 = (double)v39;
          v42 = *((_DWORD *)this + 415);
          v43 = v40 / v41;
          v44 = fmax(0.0, v43);
          v45 = fmin(1.797693134862316e308, v43);
          if ( v42 )
          {
            a9.m128d_f64[0] = *((double *)this + 182);
            if ( a9.m128d_f64[0] <= 0.1 )
            {
              a10.m128d_f64[0] = (double)v42;
              v46 = *((_DWORD *)this + 416);
              v47 = a9.m128d_f64[0] / a10.m128d_f64[0];
              v48 = fmin(v45, v47);
              a9.m128d_f64[0] = fmax(v44, v47);
              if ( v46 )
              {
                v49 = *((double *)this + 183);
                if ( v49 <= 0.1 )
                {
                  a10.m128d_f64[0] = (double)v46;
                  v50 = *((_DWORD *)this + 417);
                  v51 = v49 / a10.m128d_f64[0];
                  a9.m128d_f64[0] = fmax(a9.m128d_f64[0], v51);
                  v52 = fmin(v48, v51);
                  v53 = a9.m128d_f64[0];
                  if ( v50 )
                  {
                    a9.m128d_f64[0] = *((double *)this + 184);
                    if ( a9.m128d_f64[0] <= 0.1 )
                    {
                      a10.m128d_f64[0] = (double)v50;
                      v54 = *((_DWORD *)this + 418);
                      v55 = a9.m128d_f64[0] / a10.m128d_f64[0];
                      v56 = fmin(v52, v55);
                      a9.m128d_f64[0] = fmax(v53, v55);
                      if ( v54 )
                      {
                        v57 = *((double *)this + 185);
                        if ( v57 <= 0.1 )
                        {
                          a10.m128d_f64[0] = (double)v54;
                          v58 = v57 / (double)v54;
                          v59 = fmin(v56, v58);
                          v60 = fmax(a9.m128d_f64[0], v58);
                          a9.m128d_f64[0] = 0.00001;
                          if ( v59 < 0.00001 && v60 < 0.001 )
                          {
                            *((_DWORD *)this + 182) |= 0x400000u;
                            *((_QWORD *)this + 110) = 0x3EB0C6F7A0B5ED8DLL;
                            *((_QWORD *)this + 117) = 0x3EB0C6F7A0B5ED8DLL;
                            *((_QWORD *)this + 4) = 0x3EB0C6F7A0B5ED8DLL;
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
  if ( v37 )
    ClpSimplex::gutsOfSolution(this, a4, nullptr, 0);
  v61.m128i_i64[0] = *((_QWORD *)this + 95);
  if ( (*(double *)v61.m128i_i64 > 1.0e15 || *((double *)this + 96) > 1.0e15) && *((_DWORD *)this + 77) )
  {
    v97 = *((_DWORD *)this + 26);
    v98 = *((_DWORD *)this + 27);
    ++*((_DWORD *)this + 324);
    v99 = *((char **)this + 33);
    v100 = *((char **)this + 164);
    v101 = v97 + v98;
    if ( v97 + v98 > 0 )
    {
      v102 = 0;
      do
      {
        while ( (v99[v102] & 0x40) != 0 )
        {
          v100[v102++] |= 0x40u;
          v97 = *((_DWORD *)this + 26);
          v98 = *((_DWORD *)this + 27);
          v99 = *((char **)this + 33);
          v100 = *((char **)this + 164);
          v101 = v97 + v98;
          if ( v97 + v98 <= (int)v102 )
            goto LABEL_122;
        }
        ++v102;
      }
      while ( v101 > (int)v102 );
    }
LABEL_122:
    if ( v101 && v99 != v100 )
    {
      v103 = v101 >> 3;
      if ( v101 >> 3 > 0 )
      {
        if ( (v99 >= v100 + 16 || v100 >= v99 + 16) && v103 > 1 )
        {
          v104 = 0;
          v105 = 0;
          do
          {
            v61 = _mm_loadu_si128((const __m128i *)&v100[v104]);
            ++v105;
            *(__m128i *)&v99[v104] = v61;
            v104 += 16;
          }
          while ( v105 < v103 >> 1 );
          v106 = 8LL * (v103 & 0xFFFFFFFE);
          v107 = &v100[v106];
          v108 = &v99[v106];
          if ( v103 != (v103 & 0xFFFFFFFE) )
          {
            *v108 = *v107;
            v108[1] = v107[1];
            v108[2] = v107[2];
            v108[3] = v107[3];
            v108[4] = v107[4];
            v108[5] = v107[5];
            v108[6] = v107[6];
            v108[7] = v107[7];
          }
          LODWORD(v109) = v103 - 1;
        }
        else
        {
          v238 = v100;
          v109 = v103 - 1;
          v239 = v99;
          do
          {
            v240 = *v238;
            v239 += 8;
            v238 += 8;
            *(v239 - 8) = v240;
            *(v239 - 7) = *(v238 - 7);
            *(v239 - 6) = *(v238 - 6);
            *(v239 - 5) = *(v238 - 5);
            *(v239 - 4) = *(v238 - 4);
            *(v239 - 3) = *(v238 - 3);
            *(v239 - 2) = *(v238 - 2);
            *(v239 - 1) = *(v238 - 1);
          }
          while ( &v99[8 * v109 + 8] != v239 );
        }
        v110 = 8LL * (int)v109 + 8;
        v100 += v110;
        v99 += v110;
      }
      switch ( v101 % 8 )
      {
        case 1:
          goto LABEL_140;
        case 2:
          goto LABEL_139;
        case 3:
          goto LABEL_138;
        case 4:
          goto LABEL_137;
        case 5:
          goto LABEL_136;
        case 6:
          goto LABEL_135;
        case 7:
          v99[6] = v100[6];
LABEL_135:
          v99[5] = v100[5];
LABEL_136:
          v99[4] = v100[4];
LABEL_137:
          v99[3] = v100[3];
LABEL_138:
          v99[2] = v100[2];
LABEL_139:
          v99[1] = v100[1];
LABEL_140:
          *v99 = *v100;
          break;
        default:
          break;
      }
      v97 = *((_DWORD *)this + 26);
      v98 = *((_DWORD *)this + 27);
    }
    v111 = *((__int64 **)this + 159);
    v112 = *((__int64 **)this + 151);
    v113 = &v111[v98];
    if ( v97 && v112 != v113 )
    {
      if ( v97 >> 3 > 0 )
      {
        v114 = *((__int64 **)this + 151);
        v115 = &v111[v98];
        v116 = (unsigned int)((v97 >> 3) - 1);
        do
        {
          v117 = *v115;
          v114 += 8;
          v115 += 8;
          *(v114 - 8) = v117;
          *(v114 - 7) = *(v115 - 7);
          *(v114 - 6) = *(v115 - 6);
          *(v114 - 5) = *(v115 - 5);
          *(v114 - 4) = *(v115 - 4);
          *(v114 - 3) = *(v115 - 3);
          *(v114 - 2) = *(v115 - 2);
          v61.m128i_i64[0] = *(v115 - 1);
          *(v114 - 1) = v61.m128i_i64[0];
        }
        while ( v114 != &v112[8 * v116 + 8] );
        v118 = ((int)v116 + 1LL) << 6;
        v113 = (__int64 *)((char *)v113 + v118);
        v112 = (__int64 *)((char *)v112 + v118);
      }
      switch ( v97 % 8 )
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
          v112[6] = v113[6];
LABEL_150:
          v112[5] = v113[5];
LABEL_151:
          v112[4] = v113[4];
LABEL_152:
          v112[3] = v113[3];
LABEL_153:
          v112[2] = v113[2];
LABEL_154:
          v112[1] = v113[1];
LABEL_155:
          v61.m128i_i64[0] = *v113;
          *v112 = *v113;
          break;
        default:
          break;
      }
    }
    v119 = *((__int64 **)this + 152);
    if ( v98 && v111 != v119 )
    {
      if ( v98 >> 3 > 0 )
      {
        v120 = *((__int64 **)this + 152);
        v121 = v111;
        v122 = (unsigned int)((v98 >> 3) - 1);
        do
        {
          v123 = *v121;
          v120 += 8;
          v121 += 8;
          *(v120 - 8) = v123;
          *(v120 - 7) = *(v121 - 7);
          *(v120 - 6) = *(v121 - 6);
          *(v120 - 5) = *(v121 - 5);
          *(v120 - 4) = *(v121 - 4);
          *(v120 - 3) = *(v121 - 3);
          *(v120 - 2) = *(v121 - 2);
          v61.m128i_i64[0] = *(v121 - 1);
          *(v120 - 1) = v61.m128i_i64[0];
        }
        while ( v120 != &v119[8 * v122 + 8] );
        v124 = ((int)v122 + 1LL) << 6;
        v111 = (__int64 *)((char *)v111 + v124);
        v119 = (__int64 *)((char *)v119 + v124);
      }
      switch ( v98 % 8 )
      {
        case 1:
          goto LABEL_169;
        case 2:
          goto LABEL_168;
        case 3:
          goto LABEL_167;
        case 4:
          goto LABEL_166;
        case 5:
          goto LABEL_165;
        case 6:
          goto LABEL_164;
        case 7:
          v119[6] = v111[6];
LABEL_164:
          v119[5] = v111[5];
LABEL_165:
          v119[4] = v111[4];
LABEL_166:
          v119[3] = v111[3];
LABEL_167:
          v119[2] = v111[2];
LABEL_168:
          v119[1] = v111[1];
LABEL_169:
          v61.m128i_i64[0] = *v111;
          *v119 = *v111;
          break;
        default:
          break;
      }
    }
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
      *((_QWORD *)this + 24),
      this,
      6,
      &v339);
    ClpSimplexDual::resetFakeBounds(this, 1);
    v125 = *((_QWORD *)this + 33);
    v126 = *((_DWORD *)this + 290);
    if ( (*(_BYTE *)(v125 + v126) & 0x40) != 0 )
    {
      v127 = *((_DWORD *)this + 26);
      if ( v127 <= 0 )
        goto LABEL_176;
      v128 = *((int **)this + 157);
      v126 = *v128;
      if ( (*(_BYTE *)(v125 + *v128) & 0x40) != 0 )
      {
        v129 = v128 + 1;
        v130 = &v129[v127 - 1];
        while ( v130 != v129 )
        {
          v131 = *v129++;
          v126 = v131;
          if ( (*(_BYTE *)(v125 + v131) & 0x40) == 0 )
            goto LABEL_179;
        }
        goto LABEL_176;
      }
LABEL_179:
      if ( v126 < 0 )
      {
LABEL_176:
        v132 = *((_QWORD *)this + 43);
        if ( *(int *)(v132 + 104) > 1 )
          LODWORD(v132) = printf("real trouble at line %d of ClpSimplexDual\n", 5065);
LABEL_178:
        *((_DWORD *)this + 80) = 10;
        return v132;
      }
    }
    v133 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   12,
                                   (ClpSimplexDual *)((char *)this + 416));
    v134 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v133);
    v135 = CoinMessageHandler::operator<<(v134);
    CoinMessageHandler::operator<<(v135, 0, *(double *)v61.m128i_i64);
    ClpSimplex::setFlagged(this, v126);
    v136 = *((_QWORD *)this + 158);
    *((_DWORD *)this + 425) = 0;
    v137 = *(CoinFactorization **)(v136 + 8);
    if ( v137 )
    {
      CoinFactorization::pivotTolerance(v137, fmin(1.1 * *(double *)v137, 0.99));
    }
    else
    {
      v208 = *(double **)(v136 + 16);
      if ( v208 )
        CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v208, fmin(1.1 * v208[1], 0.99));
    }
    *((_DWORD *)this + 326) = 1;
    if ( *((double *)this + 97) != -1.0 )
      *((_QWORD *)this + 97) = 0xC000000000000000LL;
    if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
    {
      CoinMemcpyN<unsigned char>(
        *((_QWORD *)this + 164),
        (unsigned int)(*((_DWORD *)this + 27) + *((_DWORD *)this + 26)),
        *((_QWORD *)this + 33));
      CoinMemcpyN<double>(
        *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
        *((unsigned int *)this + 26),
        *((_QWORD *)this + 151));
      CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
      (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
        *((_QWORD *)this + 24),
        this,
        6,
        v340);
      if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
      {
        v203 = *((_QWORD *)this + 158);
        v204 = *(CoinFactorization **)(v203 + 8);
        do
        {
          if ( v204 )
          {
            v205 = *((_DWORD *)v204 + 217);
            *((_DWORD *)v204 + 217) = 0;
            CoinFactorization::pivotTolerance(v204, 0.99);
          }
          else
          {
            v207 = *(CoinOtherFactorization **)(v203 + 16);
            if ( v207 )
              CoinOtherFactorization::pivotTolerance(v207, 0.99);
            v205 = 0;
          }
          **((_DWORD **)this + 157) = -1;
          v206 = ClpSimplex::internalFactorize(this, 2);
          v203 = *((_QWORD *)this + 158);
          v204 = *(CoinFactorization **)(v203 + 8);
          if ( v204 )
            *((_DWORD *)v204 + 217) = v205;
        }
        while ( v206 );
      }
      ClpSimplexDual::resetFakeBounds(this, 1);
    }
    ClpSimplex::gutsOfSolution(this, a4, nullptr, 0);
    v318 = 0;
    v307 = 2;
  }
  else if ( *(double *)v61.m128i_i64 < 0.0000001 && *((double *)this + 96) < 0.0000001 )
  {
    v171 = *((_QWORD *)this + 158);
    v172 = *((double *)a5 + 2);
    v173 = *(CoinFactorization **)(v171 + 8);
    if ( v173 )
    {
      CoinFactorization::pivotTolerance(v173, fmax(0.995 * *(double *)v173, v172));
    }
    else
    {
      v228 = *(double **)(v171 + 16);
      if ( v228 )
        CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v228, fmax(0.995 * v228[1], v172));
    }
  }
  v62 = *((double *)this + 9) - *((double *)this + 87);
  v63.m128d_f64[0] = fmax(*((double *)this + 90), v62);
  *((_QWORD *)this + 90) = *(_QWORD *)&v63.m128d_f64[0];
  IterationNumber = ClpSimplexProgress::lastIterationNumber((ClpSimplexDual *)((char *)this + 1408), 0);
  v65 = *((_DWORD *)this + 77);
  if ( v65 == IterationNumber )
  {
    v138 = *(__int64 (__fastcall **)(ClpDualRowPivot *))(**((_QWORD **)this + 155) + 56LL);
    if ( v138 == ClpDualRowPivot::looksOptimal )
      goto LABEL_58;
    if ( ((unsigned __int8 (*)(void))v138)() )
    {
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
    }
LABEL_57:
    v65 = *((_DWORD *)this + 77);
LABEL_58:
    v66 = *((_DWORD *)this + 26);
    goto LABEL_59;
  }
  v308 = *((double *)this + 87);
  v304 = *((double *)this + 9);
  ClpSimplexProgress::lastObjective((ClpSimplexDual *)((char *)this + 1408), 0);
  a10.m128d_f64[0] = v62;
  if ( a6 || *((int *)this + 337) >= 0 )
    goto LABEL_57;
  v180 = *((_DWORD *)this + 427);
  if ( v180 > 10 )
  {
    a10.m128d_f64[0] = v62;
    v181 = 0.005 * pow(2.0, (double)(v180 - 8));
  }
  else
  {
    v181 = 0.025;
    if ( v180 <= 5 )
      v181 = 0.005;
  }
  a9.m128d_f64[0] = v304 - v308;
  v182 = fabs(v304 - v308);
  v63.m128d_f64[0] = fabs(a10.m128d_f64[0]);
  if ( a10.m128d_f64[0] <= (v182 + v63.m128d_f64[0]) * v181 + v304 - v308 + v181 )
  {
    v66 = *((_DWORD *)this + 26);
    v63.m128d_f64[0] = fmax(v182, v63.m128d_f64[0]) * 0.00001;
    a9.m128d_f64[0] = a9.m128d_f64[0] - v63.m128d_f64[0] - 0.001;
    if ( a9.m128d_f64[0] > a10.m128d_f64[0] )
      *((_DWORD *)this + 320) = 0;
    goto LABEL_402;
  }
  v183 = *((_QWORD *)this + 158);
  v184 = *(_QWORD *)(v183 + 8);
  if ( v184 )
    v185 = *(_DWORD *)(v184 + 64);
  else
    v185 = *(_DWORD *)(*(_QWORD *)(v183 + 16) + 48LL);
  v66 = *((_DWORD *)this + 26);
  if ( (*((_BYTE *)this + 338) & 0x10) != 0 )
  {
    *((_DWORD *)this + 80) = 3;
    v65 = *((_DWORD *)this + 77);
LABEL_59:
    v321 = 0;
    v305 = a4 == nullptr;
    v67 = v66 >> 4;
    v68 = a4 == nullptr && v307 != 2;
    if ( v67 < 1000 )
      v67 = 1000;
    if ( v67 >= v65 )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( *((int *)this + 427) > 10 )
    ++*((_DWORD *)this + 426);
  if ( v185 <= 1 )
  {
LABEL_402:
    v65 = *((_DWORD *)this + 77);
    goto LABEL_59;
  }
  v186 = *((_DWORD *)this + 27) + v66;
  v187 = v186;
  if ( (*((_BYTE *)this + 1344) & 4) == 0 )
  {
    a9.m128d_f64[0] = a9.m128d_f64[0] + 10000.0;
    if ( a9.m128d_f64[0] > a10.m128d_f64[0] )
    {
      a10.m128d_f64[0] = 100.0;
      if ( *((double *)this + 95) < 100.0 )
      {
        v188 = (int)(2 * v186);
        if ( v188 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_569;
        v189 = (char *)operator new[](8 * v188);
        v190 = v187;
        v191 = *((void **)this + 129);
        v192 = 8 * v190;
        memcpy(v189, v191, 8 * v190);
        memcpy(&v189[v192], v191, v192);
        operator delete[](v191);
        v193 = *((int *)this + 27);
        *((_QWORD *)this + 129) = v189;
        *((_QWORD *)this + 131) = v189;
        *((_DWORD *)this + 336) |= 4u;
        *((_QWORD *)this + 130) = &v189[8 * v193];
        goto LABEL_57;
      }
    }
  }
  ++*((_DWORD *)this + 324);
  v275 = *((_QWORD *)this + 33);
  v276 = *((_QWORD *)this + 164);
  *((_DWORD *)this + 326) = 1;
  CoinMemcpyN<unsigned char>(v276, v186, v275);
  CoinMemcpyN<double>(
    *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
    *((unsigned int *)this + 26),
    *((_QWORD *)this + 151));
  CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
  if ( (*((_BYTE *)this + 1344) & 4) != 0 )
  {
    memcpy(*((void **)this + 129), (const void *)(*((_QWORD *)this + 129) + 8LL * v187), 8LL * v187);
  }
  else
  {
    v277 = 2 * v187;
    if ( v277 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_569;
    v278 = (char *)operator new[](8 * v277);
    v279 = v187;
    v280 = *((void **)this + 129);
    v281 = 8 * v279;
    memcpy(v278, v280, 8 * v279);
    memcpy(&v278[v281], v280, v281);
    operator delete[](v280);
    v282 = *((int *)this + 27);
    *((_DWORD *)this + 336) |= 4u;
    *((_QWORD *)this + 129) = v278;
    *((_QWORD *)this + 131) = v278;
    *((_QWORD *)this + 130) = &v278[8 * v282];
  }
  (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *))(**((_QWORD **)this + 24) + 320LL))(
    *((_QWORD *)this + 24),
    this,
    6,
    &v339);
  v283 = *((_QWORD *)this + 158);
  v284 = *(CoinFactorization **)(v283 + 8);
  if ( v284 )
  {
    v63.m128d_f64[0] = *(double *)v284;
    v285 = 0.2;
    if ( *(double *)v284 < 0.2 )
    {
LABEL_526:
      CoinFactorization::pivotTolerance(v284, v285);
      goto LABEL_527;
    }
  }
  else
  {
    v296 = *(_QWORD *)(v283 + 16);
    if ( !v296 )
      goto LABEL_527;
    v63.m128d_f64[0] = *(double *)(v296 + 8);
    if ( v63.m128d_f64[0] < 0.2 )
    {
      CoinOtherFactorization::pivotTolerance(*(CoinOtherFactorization **)(v283 + 16), 0.2);
      goto LABEL_527;
    }
  }
  if ( *((int *)this + 427) > 2 )
  {
    v63.m128d_f64[0] = v63.m128d_f64[0] * 1.1;
    v285 = fmin(v63.m128d_f64[0], 0.99);
    if ( !v284 )
    {
      v300 = *(CoinOtherFactorization **)(v283 + 16);
      if ( v300 )
        CoinOtherFactorization::pivotTolerance(v300, v285);
      goto LABEL_527;
    }
    goto LABEL_526;
  }
LABEL_527:
  v286 = -1.0;
  if ( *((double *)this + 97) != -1.0 )
    *((_QWORD *)this + 97) = 0xC000000000000000LL;
  if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
  {
    CoinMemcpyN<unsigned char>(
      *((_QWORD *)this + 164),
      (unsigned int)(*((_DWORD *)this + 27) + *((_DWORD *)this + 26)),
      *((_QWORD *)this + 33));
    CoinMemcpyN<double>(
      *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
      *((unsigned int *)this + 26),
      *((_QWORD *)this + 151));
    CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
    (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *, double))(**((_QWORD **)this + 24) + 320LL))(
      *((_QWORD *)this + 24),
      this,
      6,
      v340,
      -1.0);
    if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
    {
      v291 = *((_QWORD *)this + 158);
      v292 = *(CoinFactorization **)(v291 + 8);
      do
      {
        if ( v292 )
        {
          v286 = 0.99;
          v293 = *((_DWORD *)v292 + 217);
          *((_DWORD *)v292 + 217) = 0;
          CoinFactorization::pivotTolerance(v292, 0.99);
        }
        else
        {
          v295 = *(CoinOtherFactorization **)(v291 + 16);
          if ( v295 )
          {
            v286 = 0.99;
            CoinOtherFactorization::pivotTolerance(v295, 0.99);
          }
          v293 = 0;
        }
        **((_DWORD **)this + 157) = -1;
        v294 = ClpSimplex::internalFactorize(this, 2);
        v291 = *((_QWORD *)this + 158);
        v292 = *(CoinFactorization **)(v291 + 8);
        if ( v292 )
          *((_DWORD *)v292 + 217) = v293;
      }
      while ( v294 );
    }
  }
  ClpSimplexDual::resetFakeBounds(this, 0);
  ClpSimplex::gutsOfSolution(this, a4, nullptr, 0);
  v321 = v306 <= 9;
  if ( v306 <= 1 )
  {
    v287 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 43),
                                   12,
                                   (ClpSimplexDual *)((char *)this + 416));
    v288 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v287);
    v289 = CoinMessageHandler::operator<<(v288);
    CoinMessageHandler::operator<<(v289, 0, v286);
    ClpSimplex::setFlagged(this, *((_DWORD *)this + 290));
    ++*((_DWORD *)this + 427);
    *((_DWORD *)this + 425) = 0;
    v321 = 1;
  }
  ClpSimplexProgress::modifyObjective(
    (ClpSimplexDual *)((char *)this + 1408),
    *((double *)this + 9) - *((double *)this + 87));
  v305 = a4 == nullptr;
  v290 = *((int *)this + 26) >> 4;
  if ( v290 < 1000 )
    v290 = 1000;
  if ( *((_DWORD *)this + 77) <= v290 )
  {
    v318 = 0;
    v307 = 2;
LABEL_65:
    v310 = 0;
    if ( *((int *)this + 426) > 10 )
      *((_DWORD *)this + 80) = 10;
    goto LABEL_67;
  }
  v68 = 0;
  v318 = 0;
  v307 = 2;
LABEL_62:
  if ( (*((_BYTE *)this + 336) & 0x40) != 0 )
  {
    v69 = *((double *)this + 112);
    if ( v69 != 0.0 )
    {
      v63.m128d_f64[0] = 100000.0;
      if ( v69 < 100000.0 )
      {
        v175 = ClpSimplexProgress::lastIterationNumber((ClpSimplexDual *)((char *)this + 1408), 4);
        if ( v175 > 0 && *((_DWORD *)this + 77) - v175 <= 44 )
        {
          v176 = *((_QWORD *)this + 158);
          v177 = *(double **)(v176 + 8);
          if ( v177 )
          {
            v178 = *v177;
          }
          else
          {
            v297 = *(_QWORD *)(v176 + 16);
            if ( !v297 )
            {
LABEL_310:
              ClpSimplexProgress::clearIterationNumbers((ClpSimplexDual *)((char *)this + 1408));
              goto LABEL_64;
            }
            v178 = *(double *)(v297 + 8);
          }
          v63.m128d_f64[0] = 0.9;
          if ( v178 >= 0.9 )
            goto LABEL_64;
          v179 = fmin(v178 * 1.05 + 0.02, 0.91);
          if ( v177 )
          {
            CoinFactorization::pivotTolerance(*(CoinFactorization **)(v176 + 8), v179);
          }
          else
          {
            v301 = *(CoinOtherFactorization **)(v176 + 16);
            if ( v301 )
              CoinOtherFactorization::pivotTolerance(v301, v179);
          }
          goto LABEL_310;
        }
      }
    }
  }
LABEL_64:
  if ( !v68 )
    goto LABEL_65;
  LODWORD(v132) = ClpSimplexProgress::looping((ClpSimplexDual *)((char *)this + 1408));
  if ( *((int *)this + 426) > 10 )
    *((_DWORD *)this + 80) = 10;
  if ( (int)v132 >= 0 )
  {
    *((_DWORD *)this + 80) = v132;
    if ( !(_DWORD)v132 )
    {
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
      return v132;
    }
    goto LABEL_178;
  }
  v310 = 0;
  if ( (_DWORD)v132 != -1 )
  {
    ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
    v310 = 1;
  }
LABEL_67:
  v70 = *((_DWORD *)this + 336);
  v71 = 2;
  if ( (v70 & 2) == 0 )
    v71 = v310;
  v311 = v71;
  *((_DWORD *)this + 336) = v70 & 0xFFFFFFFC;
  if ( (v70 & 4) != 0 )
  {
    v202 = 8LL * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
    memcpy((void *)(*((_QWORD *)this + 129) + v202), *((const void **)this + 129), v202);
  }
  if ( !*((_DWORD *)this + 308) && !*((_DWORD *)this + 306) )
    *((_DWORD *)this + 336) |= 8u;
  v314 = (ClpSimplexDual *)((char *)this + 416);
  v72 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                6,
                                (ClpSimplexDual *)((char *)this + 416));
  v73 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v72);
  CoinMessageHandler::operator<<(v73);
  v74 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                *((CoinMessageHandler **)this + 43),
                                *((double *)this + 112) > 0.0);
  v75 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v74);
  CoinMessageHandler::operator<<(v75);
  v76 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                *((CoinMessageHandler **)this + 43),
                                *((double *)this + 111) > 0.0);
  v77.m128d_f64[0] = *((double *)this + 111);
  v78 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v76);
  CoinMessageHandler::operator<<(v78);
  v79 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                *((CoinMessageHandler **)this + 43),
                                *((_DWORD *)this + 307) < *((_DWORD *)this + 306));
  CoinMessageHandler::operator<<(v79);
  v80 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), -1);
  CoinMessageHandler::operator<<(v80, 0, v77.m128d_f64[0]);
  v315 = *((_QWORD *)this + 9);
  v317 = *((double *)this + 111);
  v316 = *((_QWORD *)this + 109);
  if ( *((_DWORD *)this + 308)
    || (*((_DWORD *)this + 307) || !*((_DWORD *)this + 306)) && (*((_BYTE *)this + 731) & 1) == 0 )
  {
    v81 = *((_DWORD *)this + 80);
  }
  else
  {
    *((_DWORD *)this + 80) = 10;
    v81 = 10;
  }
  v323 = a3 == 0;
  v322 = 0;
  v309 = *((double *)this + 98);
  while ( 2 )
  {
    if ( v81 >= -2 || v309 != *((double *)this + 98) )
    {
LABEL_95:
      if ( (unsigned int)v313 >= 0xFFFFFFFE )
        goto LABEL_244;
      if ( !v318 )
        goto LABEL_244;
      v87 = *((_DWORD *)this + 26);
      if ( v87 <= 0 )
        goto LABEL_244;
      goto LABEL_98;
    }
    v82 = *((_DWORD *)this + 77);
    v83 = *a2;
    v84 = *a2 == v82;
    v85 = v81 == -4;
    if ( *((double *)this + 114) == 0.0 && *((double *)this + 115) == 0.0 )
    {
      *((_DWORD *)this + 306) = 0;
      *((_QWORD *)this + 111) = 0;
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
    }
    else
    {
      v86 = 1;
      if ( *((_DWORD *)this + 306) != 0 && !v85 )
        goto LABEL_91;
    }
    v77.m128d_f64[0] = *((double *)this + 9) - *((double *)this + 87);
    v86 = v311 != 0;
    ClpSimplexProgress::modifyObjective((ClpSimplexDual *)((char *)this + 1408), v77.m128d_f64[0]);
    if ( *((_DWORD *)this + 308) || !v305 )
      goto LABEL_84;
    v194 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 7, v314);
    v77.m128d_f64[0] = *((double *)this + 98);
    v195 = CoinMessageHandler::operator<<(v194);
    CoinMessageHandler::operator<<(v195, 0, v77.m128d_f64[0]);
    v196 = nullptr;
    src = nullptr;
    v327 = *((_DWORD *)this + 84) & 0x1004000;
    if ( !v327 )
    {
      v220 = *((int *)this + 27);
      srcb = *((void **)this + 152);
      if ( srcb )
      {
        if ( v220 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_569;
        nb = 8 * v220;
        v221 = (void *)operator new[](8 * v220);
        v196 = memcpy(v221, srcb, nb);
      }
      v222 = *((int *)this + 26);
      n = *((const void **)this + 151);
      if ( n )
      {
        v338 = v196;
        if ( v222 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_569;
        v337 = 8 * v222;
        src = (void *)operator new[](8 * v222);
        memcpy(src, n, v337);
        v196 = v338;
      }
      else
      {
        src = nullptr;
      }
    }
    if ( *((double *)this + 98) >= 1.0e20
      || (na = (size_t)v196,
          v209 = ClpSimplexDual::changeBounds(this, 0, *((CoinIndexedVector **)this + 135), &v339),
          v196 = (void *)na,
          v209 <= 0) )
    {
      if ( !*((_DWORD *)this + 306) )
      {
        if ( *((_DWORD *)this + 327) == 101 )
        {
          *((_DWORD *)this + 327) = 102;
          v330 = v196;
          ClpSimplexDual::changeBounds(this, 1, nullptr, &v339);
          ClpSimplex::createRim4(this, 0);
          ClpSimplex::computeDuals(this, nullptr);
          ClpSimplex::checkDualSolution(this);
          v77.m128d_f64[0] = -1.797693134862316e308;
          ClpSimplexProgress::modifyObjective((ClpSimplexDual *)((char *)this + 1408), -1.797693134862316e308);
          v196 = v330;
          if ( *((_DWORD *)this + 306) )
          {
            v198 = *((_DWORD *)this + 77);
            v86 = 1;
            *((_DWORD *)this + 335) = 1;
            v197 = v198 - 1;
            *a2 = v198 - 1;
          }
          else
          {
            ClpSimplex::computeObjectiveValue(this, 1);
            v86 = 1;
            v196 = v330;
            v197 = *a2;
            v198 = *((_DWORD *)this + 77);
          }
        }
        else
        {
          v197 = *a2;
          v198 = *((_DWORD *)this + 77);
        }
        if ( v197 < v198 )
        {
          v199 = *((_DWORD *)this + 320);
          v200 = *((_DWORD *)this + 335);
          if ( v199 > 3 )
          {
            *((_DWORD *)this + 80) = 0;
            if ( v200 )
            {
              v331 = v196;
              v246 = CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 13, v314);
              CoinMessageHandler::operator<<(v246, 0, v77.m128d_f64[0]);
              v196 = v331;
            }
            goto LABEL_347;
          }
          if ( v200 || (*((_BYTE *)this + 337) & 0x10) == 0 )
          {
            v201 = v199 + 1;
            ++*((_DWORD *)this + 324);
            *((_DWORD *)this + 320) = v201;
            if ( v201 == 1 )
            {
              v77.m128d_f64[0] = *((double *)this + 3);
              v84 = 2;
              v86 = 2;
              *((_QWORD *)this + 109) = *(_QWORD *)&v77.m128d_f64[0];
            }
            else
            {
              if ( v201 == 2 )
              {
                v298 = *((_QWORD *)this + 158);
                v333 = v196;
                v299 = *(double **)(v298 + 8);
                if ( v299 )
                  CoinFactorization::zeroTolerance((CoinFactorization *)v299, fmin(v299[1], 1.0e-15));
                else
                  CoinOtherFactorization::zeroTolerance(
                    *(CoinOtherFactorization **)(v298 + 16),
                    fmin(*(double *)(*(_QWORD *)(v298 + 16) + 16LL), 1.0e-15));
                v201 = *((_DWORD *)this + 320);
                v196 = v333;
              }
              v328 = v196;
              v84 = 2;
              v86 = 2;
              v63.m128d_f64[0] = (double)(v201 - 1);
              *((_QWORD *)this + 109) = *((_QWORD *)this + 3);
              v77.m128d_f64[0] = pow(2.0, v63.m128d_f64[0]) * *((double *)this + 109);
              v196 = v328;
              *((_QWORD *)this + 109) = *(_QWORD *)&v77.m128d_f64[0];
            }
            goto LABEL_347;
          }
        }
        *((_DWORD *)this + 80) = 0;
        goto LABEL_347;
      }
    }
    if ( v83 != v82 )
    {
      v329 = v196;
      v84 = 2;
      v86 = 1;
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
      v196 = v329;
      goto LABEL_347;
    }
    if ( v327
      || (v247 = *((_DWORD *)this + 27),
          v77 = (__m128d)0x4059000000000000uLL,
          v248 = v247 + *((_DWORD *)this + 26),
          v77.m128d_f64[0] = 100.0 * *((double *)this + 110),
          v248 <= 0) )
    {
LABEL_368:
      *((_DWORD *)this + 80) = -3;
LABEL_369:
      v84 = 1;
      v86 = 1;
      goto LABEL_347;
    }
    v249 = *((_QWORD *)this + 147);
    if ( v247 <= 0 )
    {
      v250 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
      v251 = -1;
      v252 = 0;
LABEL_473:
      v253 = v252;
      while ( 2 )
      {
        v63 = (__m128d)*(unsigned __int64 *)(v249 + 8 * v253);
        a9 = _mm_and_pd(v77, v250);
        *(_QWORD *)&a10.m128d_f64[0] = *(_QWORD *)(v249 + 8 * v253) & *(_QWORD *)&v250.m128d_f64[0];
        if ( a10.m128d_f64[0] > a9.m128d_f64[0] && (*(_BYTE *)(*((_QWORD *)this + 33) + v253) & 7) != 1 )
        {
          a10.m128d_f64[0] = 0.0;
          if ( v63.m128d_f64[0] > 0.0 && *(double *)(-8LL * v247 + *((_QWORD *)this + 18) + 8 * v253) < -1.0e20 )
          {
            v254 = _mm_cmpge_sd(a9, v63);
            v255 = _mm_and_pd(v77, v254);
            a10 = _mm_andn_pd(v254, v63);
            if ( v63.m128d_f64[0] > a9.m128d_f64[0] )
              v251 = v253;
            goto LABEL_480;
          }
          if ( v63.m128d_f64[0] < 0.0 && *(double *)(*((_QWORD *)this + 19) - 8LL * v247 + 8 * v253) > 1.0e20 )
          {
            v267.m128d_f64[0] = -v63.m128d_f64[0];
            v268 = _mm_cmpge_sd(a9, v267);
            v255 = _mm_and_pd(v77, v268);
            a10 = _mm_andn_pd(v268, v63);
            if ( -v63.m128d_f64[0] > a9.m128d_f64[0] )
              v251 = v253;
LABEL_480:
            v77 = _mm_or_pd(v255, a10);
          }
        }
        if ( v248 <= (int)++v253 )
          goto LABEL_482;
        continue;
      }
    }
    v269 = v247 + *((_DWORD *)this + 26);
    v250 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    if ( v247 <= v248 )
      v269 = *((_DWORD *)this + 27);
    v251 = -1;
    v270 = 0;
    do
    {
      v63 = (__m128d)*(unsigned __int64 *)(v249 + 8 * v270);
      a9 = _mm_and_pd(v77, v250);
      *(_QWORD *)&a10.m128d_f64[0] = *(_QWORD *)(v249 + 8 * v270) & *(_QWORD *)&v250.m128d_f64[0];
      if ( a10.m128d_f64[0] > a9.m128d_f64[0] && (*(_BYTE *)(*((_QWORD *)this + 33) + v270) & 7) != 1 )
      {
        a10.m128d_f64[0] = 0.0;
        if ( v63.m128d_f64[0] > 0.0 && *(double *)(*((_QWORD *)this + 22) + 8 * v270) < -1.0e20 )
        {
          v271 = _mm_cmpge_sd(a9, v63);
          v272 = _mm_and_pd(v77, v271);
          a10 = _mm_andn_pd(v271, v63);
          if ( v63.m128d_f64[0] > a9.m128d_f64[0] )
            v251 = v270;
LABEL_509:
          v77 = _mm_or_pd(v272, a10);
          goto LABEL_510;
        }
        if ( v63.m128d_f64[0] < 0.0 && *(double *)(*((_QWORD *)this + 23) + 8 * v270) > 1.0e20 )
        {
          v273.m128d_f64[0] = -v63.m128d_f64[0];
          v274 = _mm_cmpge_sd(a9, v273);
          v272 = _mm_and_pd(v77, v274);
          a10 = _mm_andn_pd(v274, v63);
          if ( -v63.m128d_f64[0] > a9.m128d_f64[0] )
            v251 = v270;
          goto LABEL_509;
        }
      }
LABEL_510:
      v252 = ++v270;
    }
    while ( v269 > (int)v270 );
    if ( v248 > v252 )
      goto LABEL_473;
LABEL_482:
    if ( v251 == -1 )
      goto LABEL_368;
    v256 = *((CoinIndexedVector **)this + 133);
    v257 = *((_DWORD *)this + 288);
    *((_DWORD *)this + 288) = v251;
    v332 = v196;
    ClpSimplex::unpack(this, v256);
    v258 = *((_DWORD *)this + 306);
    *((_DWORD *)this + 288) = v257;
    if ( v258 )
    {
      v77.m128d_f64[0] = *(double *)(*((_QWORD *)this + 129) + 8LL * v251) + v339;
      v339 = v77.m128d_f64[0];
    }
    else
    {
      v77.m128d_f64[0] = v339;
    }
    v259 = ClpSimplexDual::checkUnbounded(
             this,
             *((CoinIndexedVector **)this + 133),
             *((CoinIndexedVector **)this + 132),
             v77.m128d_f64[0]);
    v260 = *((CoinIndexedVector **)this + 133);
    *((_DWORD *)this + 80) = v259;
    CoinIndexedVector::clear(v260);
    v196 = v332;
    if ( *((_DWORD *)this + 80) != 2 )
      goto LABEL_369;
    if ( *((_DWORD *)this + 327) == 101 )
    {
      *((_DWORD *)this + 327) = 102;
      ClpSimplex::createRim4(this, 0);
      v77.m128d_f64[0] = -1.797693134862316e308;
      ClpSimplexProgress::modifyObjective((ClpSimplexDual *)((char *)this + 1408), -1.797693134862316e308);
      *((_DWORD *)this + 80) = -1;
      v196 = v332;
      goto LABEL_369;
    }
    v261 = *(_QWORD *)(*((_QWORD *)this + 138) + 8LL);
    v262 = *((_DWORD *)this + 27);
    if ( v262 > 0 )
    {
      v263 = (unsigned int)(v262 - 1);
      v264 = *((_QWORD *)this + 152);
      v265 = 0;
      v266 = v263 + 1;
      do
      {
        while ( 1 )
        {
          v63.m128d_f64[0] = *(double *)(v261 + 8 * v265);
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v265) & 7) == 1 )
            break;
          *(double *)(*((_QWORD *)this + 27) + 8 * v265) = *((double *)v332 + v265)
                                                         - v63.m128d_f64[0]
                                                         + *(double *)(*((_QWORD *)this + 27) + 8 * v265);
          v77.m128d_f64[0] = *(double *)(v261 + 8 * v265);
          *(double *)(v264 + 8 * v265++) = v77.m128d_f64[0];
          if ( v265 == v266 )
            goto LABEL_491;
        }
        *(double *)(v264 + 8 * v265++) = v63.m128d_f64[0];
      }
      while ( v266 != v265 );
    }
LABEL_491:
    v84 = 1;
    v86 = 1;
    CoinMemcpyN<double>(src, *((unsigned int *)this + 26), *((_QWORD *)this + 151));
    v196 = v332;
LABEL_347:
    if ( v196 )
      operator delete[](v196);
    if ( src )
      operator delete[](src);
LABEL_84:
    v81 = *((_DWORD *)this + 80);
    if ( (unsigned int)(v81 + 5) > 1 )
    {
LABEL_85:
      if ( v81 >= 0 )
        continue;
LABEL_91:
      if ( v84 == 2 )
        goto LABEL_205;
      if ( v86 != 1 )
      {
        if ( v86 != 2 )
        {
          *((_DWORD *)this + 80) = -1;
          v81 = -1;
          goto LABEL_95;
        }
LABEL_207:
        if ( *((_DWORD *)this + 306) )
        {
          *((_DWORD *)this + 80) = 10;
          v81 = 10;
          goto LABEL_95;
        }
      }
LABEL_371:
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 138));
      v210 = *((_DWORD *)this + 77);
      v211 = *((double *)this + 112);
      v340[0] = 0.0;
      srca = v211;
      if ( v210 )
        goto LABEL_380;
      v212 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
      v213 = *((_QWORD *)this + 164);
      if ( !v323 )
        goto LABEL_379;
      if ( v213 )
        operator delete[](*((void **)this + 164));
      v214 = *((void **)this + 159);
      if ( v214 )
        operator delete[](v214);
      *((_QWORD *)this + 164) = operator new[](v212);
      if ( (unsigned __int64)v212 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_569;
      v215 = operator new[](8LL * v212);
      v213 = *((_QWORD *)this + 164);
      *((_QWORD *)this + 159) = v215;
LABEL_379:
      CoinMemcpyN<unsigned char>(*((_QWORD *)this + 33), (unsigned int)v212, v213);
      CoinMemcpyN<double>(
        *((_QWORD *)this + 151),
        *((unsigned int *)this + 26),
        *((_QWORD *)this + 159) + 8LL * *((int *)this + 27));
      CoinMemcpyN<double>(*((_QWORD *)this + 152), *((unsigned int *)this + 27), *((_QWORD *)this + 159));
      v323 = 0;
LABEL_380:
      v216 = *((CoinIndexedVector **)this + 133);
      v217 = *((CoinIndexedVector **)this + 138);
      v218 = *((CoinIndexedVector **)this + 132);
      if ( a4 )
      {
        *((_QWORD *)this + 109) = 0x4A511B0EC57E649ALL;
        ClpSimplexDual::updateDualsInDual(this, v218, v217, v216, 0.0, v340, 1);
        *((_QWORD *)this + 109) = v316;
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
        *((_QWORD *)this + 109) = 0x4A511B0EC57E649ALL;
      }
      else
      {
        ClpSimplexDual::updateDualsInDual(this, v218, v217, v216, 0.0, v340, 1);
        *((_QWORD *)this + 109) = v316;
        ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      }
      v77.m128d_f64[0] = 0.0;
      ClpSimplexDual::updateDualsInDual(
        this,
        *((CoinIndexedVector **)this + 132),
        *((CoinIndexedVector **)this + 138),
        *((CoinIndexedVector **)this + 133),
        0.0,
        v340,
        1);
      v219 = *((_DWORD *)this + 77);
      *((_QWORD *)this + 109) = v316;
      if ( !v219 )
      {
        v63.m128d_f64[0] = *((double *)this + 112);
        v77.m128d_f64[0] = (srca + 1000.0) * 100000.0;
        if ( v63.m128d_f64[0] > v77.m128d_f64[0] && (*((_DWORD *)this + 182) & 0x2100) == 0 )
        {
          CoinMemcpyN<unsigned char>(
            *((_QWORD *)this + 164),
            (unsigned int)(*((_DWORD *)this + 26) + *((_DWORD *)this + 27)),
            *((_QWORD *)this + 33));
          CoinMemcpyN<double>(
            *((_QWORD *)this + 159) + 8LL * *((int *)this + 27),
            *((unsigned int *)this + 26),
            *((_QWORD *)this + 151));
          CoinMemcpyN<double>(*((_QWORD *)this + 159), *((unsigned int *)this + 27), *((_QWORD *)this + 152));
          v245 = *((_DWORD *)this + 306);
          *((_DWORD *)this + 80) = 10;
          if ( v245 )
            goto LABEL_465;
          goto LABEL_466;
        }
      }
      if ( *((_DWORD *)this + 306) )
      {
        if ( *((_DWORD *)this + 308) | v306 && *((_DWORD *)this + 80) != 10 )
        {
          *((_DWORD *)this + 80) = -1;
          v81 = -1;
          goto LABEL_389;
        }
LABEL_465:
        *((_DWORD *)this + 80) = 10;
LABEL_466:
        v81 = 10;
      }
      else
      {
        if ( v311 == 2 )
        {
          *((_DWORD *)this + 80) = -1;
          ClpSimplexDual::changeBounds(this, 3, nullptr, &v339);
        }
        v81 = *((_DWORD *)this + 80);
      }
LABEL_389:
      v311 = 0;
      continue;
    }
    break;
  }
  v139 = ClpSimplexDual::changeBounds(this, 0, nullptr, &v339);
  if ( v139 > 0 )
  {
    v77.m128d_f64[0] = *((double *)this + 98);
    if ( v77.m128d_f64[0] <= 1.0e20 )
    {
      v63.m128d_f64[0] = *((double *)this + 95);
      if ( v63.m128d_f64[0] <= 1.0 || v77.m128d_f64[0] <= 1.0e17 )
      {
        *((_DWORD *)this + 80) = -1;
        goto LABEL_199;
      }
    }
  }
  if ( v306 > 3 )
  {
    v77.m128d_f64[0] = *((double *)this + 112);
    if ( v77.m128d_f64[0] <= 0.000001 )
    {
      *((_DWORD *)this + 80) = -1;
      if ( v139 <= 0 )
        v84 = 2;
LABEL_199:
      v140 = *((void **)this + 27);
      if ( v140 )
      {
        operator delete[](v140);
        v86 = 1;
        v81 = *((_DWORD *)this + 80);
        *((_QWORD *)this + 27) = 0;
        v322 = 1;
        goto LABEL_85;
      }
      v322 = 1;
      if ( v84 != 2 )
        goto LABEL_371;
      v86 = 1;
LABEL_205:
      *a2 = *((_DWORD *)this + 77);
      v142 = *((CoinMessageHandler **)this + 43);
      *((_DWORD *)this + 335) = 0;
      v143 = CoinMessageHandler::message(v142, 15, v314);
      CoinMessageHandler::operator<<(v143, 0, v77.m128d_f64[0]);
      *((_DWORD *)this + 327) = 102;
      ClpSimplex::createRim4(this, 0);
      v77.m128d_f64[0] = -1.797693134862316e308;
      ClpSimplexProgress::modifyObjective((ClpSimplexDual *)((char *)this + 1408), -1.797693134862316e308);
      ClpSimplex::computeDuals(this, a4);
      ClpSimplex::checkDualSolution(this);
      if ( v86 != 2 )
      {
        ++*((_DWORD *)this + 324);
        ClpSimplexDual::changeBounds(this, 3, nullptr, &v339);
        v322 = 1;
      }
      goto LABEL_207;
    }
  }
  v141 = *((_DWORD *)this + 327) == 101;
  *((_DWORD *)this + 80) = 1;
  if ( v141 )
    *((_DWORD *)this + 327) = 102;
  if ( !*((_DWORD *)this + 308) )
  {
    *((_DWORD *)this + 80) = -1;
    v322 = 1;
    goto LABEL_205;
  }
  v322 = v318 & ((unsigned int)v313 < 0xFFFFFFFE);
  if ( v322 )
  {
    v87 = *((_DWORD *)this + 26);
    if ( v87 > 0 )
    {
LABEL_98:
      v88 = 0;
      v89 = 0;
      for ( i = 0; i < v87; ++i )
      {
        while ( 1 )
        {
          v91 = (_BYTE *)(*((_QWORD *)this + 33) + *(int *)(*((_QWORD *)this + 157) + v88));
          if ( (*v91 & 0x40) == 0 )
            break;
          ++i;
          ++v89;
          *v91 &= ~0x40u;
          v87 = *((_DWORD *)this + 26);
          v88 += 4;
          if ( v87 <= i )
            goto LABEL_101;
        }
        v88 += 4;
      }
LABEL_101:
      if ( v89 && !v306 )
      {
        v92 = *((_QWORD *)this + 158);
        v93 = *(CoinFactorization **)(v92 + 8);
        if ( v93 )
        {
          v77.m128d_f64[0] = 0.9;
          if ( *(double *)v93 >= 0.9 )
          {
LABEL_105:
            v94 = *((_DWORD *)this + 320);
            if ( v94 > 2 )
            {
              *((_DWORD *)this + 80) = (*((_DWORD *)this + 182) & 0x100) == 0 ? 10 : 1;
              goto LABEL_245;
            }
            *((_DWORD *)this + 320) = v94 + 1;
            goto LABEL_107;
          }
          v77.m128d_f64[0] = 0.99;
          CoinFactorization::pivotTolerance(v93, 0.99);
        }
        else
        {
          v227 = *(double **)(v92 + 16);
          if ( v227 )
          {
            v77.m128d_f64[0] = 0.9;
            if ( v227[1] >= 0.9 )
              goto LABEL_105;
            v77.m128d_f64[0] = 0.99;
            CoinOtherFactorization::pivotTolerance((CoinOtherFactorization *)v227, 0.99);
          }
        }
LABEL_107:
        *((_DWORD *)this + 80) = -1;
LABEL_108:
        if ( v322 )
        {
          v340[0] = 0.0;
          ClpSimplexDual::changeBounds(this, 3, nullptr, v340);
        }
        if ( (unsigned int)v307 > 1 )
          goto LABEL_111;
        v229 = *((_QWORD *)this + 164);
        if ( (v307 & 1) != 0 || !v323 )
        {
LABEL_438:
          CoinMemcpyN<unsigned char>(
            *((_QWORD *)this + 33),
            (unsigned int)(*((_DWORD *)this + 27) + *((_DWORD *)this + 26)),
            v229);
          CoinMemcpyN<double>(
            *((_QWORD *)this + 151),
            *((unsigned int *)this + 26),
            *((_QWORD *)this + 159) + 8LL * *((int *)this + 27));
          CoinMemcpyN<double>(*((_QWORD *)this + 152), *((unsigned int *)this + 27), *((_QWORD *)this + 159));
          (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double *, double, double, double, double))(**((_QWORD **)this + 24) + 320LL))(
            *((_QWORD *)this + 24),
            this,
            5,
            v340,
            v77.m128d_f64[0],
            v63.m128d_f64[0],
            a9.m128d_f64[0],
            a10.m128d_f64[0]);
LABEL_111:
          if ( v319 )
          {
            if ( v321 || (a10.m128d_f64[0] = 100.0, *((double *)this + 95) >= 100.0) && v306 <= 10 )
            {
              (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double, double, double, double))(**((_QWORD **)this + 155) + 24LL))(
                *((_QWORD *)this + 155),
                this,
                6,
                v77.m128d_f64[0],
                v63.m128d_f64[0],
                a9.m128d_f64[0],
                a10.m128d_f64[0]);
            }
            else
            {
              v95 = *((_QWORD *)this + 155);
              v96 = *(void (__fastcall **)(__int64, ClpSimplexDual *, __int64))(*(_QWORD *)v95 + 24LL);
              if ( v313 < -2 )
                v96(v95, this, 3);
              else
                v96(v95, this, 2 * (unsigned int)(v307 > 1) + 2);
            }
          }
          else if ( v320 && *((_DWORD *)this + 308) )
          {
            (*(void (__fastcall **)(_QWORD, ClpSimplexDual *, __int64, double, double, double, double))(**((_QWORD **)this + 155) + 24LL))(
              *((_QWORD *)this + 155),
              this,
              3,
              v77.m128d_f64[0],
              v63.m128d_f64[0],
              a9.m128d_f64[0],
              a10.m128d_f64[0]);
          }
          goto LABEL_245;
        }
        if ( v229 )
          operator delete[](*((void **)this + 164));
        v230 = *((void **)this + 159);
        if ( v230 )
          operator delete[](v230);
        *((_QWORD *)this + 164) = operator new[](*((_DWORD *)this + 26) + *((_DWORD *)this + 27));
        v231 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
        if ( v231 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v232 = operator new[](8 * v231);
          v229 = *((_QWORD *)this + 164);
          *((_QWORD *)this + 159) = v232;
          goto LABEL_438;
        }
LABEL_569:
        __cxa_throw_bad_array_new_length();
      }
      v81 = *((_DWORD *)this + 80);
LABEL_244:
      if ( v81 >= 0 )
        goto LABEL_245;
      goto LABEL_108;
    }
  }
LABEL_245:
  v154 = *((double *)this + 1);
  v155 = fabs(v154);
  if ( v155 >= 1.0e30
    || (v155 = (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this, v155 <= v154)
    || (unsigned int)ClpSimplexDual::numberAtFakeBound(this)
    || ((v155 = fabs(0.1 * v154) + v154 + *((double *)this + 111) * 100.0 + 10000.0,
         (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this <= v155)
     || (v155 = *((double *)this + 96), v155 <= *((double *)this + 111))
     || (v155 = (double)*((int *)this + 26) * 0.5 + 1000.0, (double)*((int *)this + 77) <= v155))
    && *((_DWORD *)this + 306)
    || (ClpSimplex::computeInternalObjectiveValue(this), v155 <= v154) )
  {
    if ( (*((_BYTE *)this + 337) & 4) != 0 )
      goto LABEL_256;
    goto LABEL_267;
  }
  v141 = (*((_BYTE *)this + 337) & 4) == 0;
  *((_QWORD *)this + 40) = 0x100000001LL;
  if ( v141 )
  {
    v156 = *((_DWORD *)this + 77);
    goto LABEL_270;
  }
LABEL_256:
  v155 = *((double *)this + 95);
  if ( *((double *)this + 96) * v155 > 100.0 )
  {
    v157 = 1;
    goto LABEL_258;
  }
  if ( v155 <= 0.01 || *((double *)this + 9) <= fmin(1.0e15, v154 * 1000.0) )
    goto LABEL_267;
  v157 = 2;
LABEL_258:
  v158 = *((_QWORD *)this + 158);
  v159 = *(CoinFactorization **)(v158 + 8);
  if ( v159 )
  {
    v160 = *(double *)v159;
    goto LABEL_260;
  }
  v244 = *(_QWORD *)(v158 + 16);
  if ( !v244 )
    goto LABEL_267;
  v160 = *(double *)(v244 + 8);
LABEL_260:
  if ( v160 < 0.9 )
  {
    v155 = fmin(v160 * 1.05 + 0.02, 0.91);
    if ( v159 )
    {
      CoinFactorization::pivotTolerance(v159, v155);
      v161 = *((_DWORD *)this + 77);
      goto LABEL_268;
    }
    if ( *(_QWORD *)(v158 + 16) )
    {
      CoinOtherFactorization::pivotTolerance(*(CoinOtherFactorization **)(v158 + 16), v155);
      v161 = *((_DWORD *)this + 77);
      goto LABEL_268;
    }
LABEL_267:
    v161 = *((_DWORD *)this + 77);
    goto LABEL_268;
  }
  v156 = *((_DWORD *)this + 77);
  v161 = v156;
  if ( v156 > 10000 )
  {
    if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 2 )
    {
      printf("bad dual - saying infeasible %d\n", v157);
      v156 = *((_DWORD *)this + 77);
    }
    *((_QWORD *)this + 40) = 0x100000001LL;
LABEL_270:
    v162 = *((_DWORD *)this + 332);
    *((_DWORD *)this + 293) = v156;
    if ( v162 + 100 < v156 )
      *((_DWORD *)this + 182) &= ~0x10u;
  }
  else
  {
    if ( v155 > 100000.0 )
    {
      if ( *(int *)(*((_QWORD *)this + 43) + 104LL) > 2 )
        printf("bad dual - going to primal %d %g\n", v157, v155);
      ClpSimplex::allSlackBasis(this, 1);
      *((_DWORD *)this + 80) = 10;
      v156 = *((_DWORD *)this + 77);
      goto LABEL_270;
    }
LABEL_268:
    if ( *((int *)this + 80) >= 0 )
    {
LABEL_269:
      v156 = v161;
      goto LABEL_270;
    }
    if ( !*((_DWORD *)this + 324) )
    {
      *((_DWORD *)this + 80) = 4;
      goto LABEL_269;
    }
    v174 = *((_DWORD *)this + 332);
    *((_DWORD *)this + 293) = v161;
    if ( v174 + 100 < v161 )
      *((_DWORD *)this + 182) &= ~0x10u;
    *((double *)this + 111) = v317;
    if ( v317 != 0.0 )
      *((_DWORD *)this + 306) = 1;
  }
  ClpSimplexProgress::lastObjective((ClpSimplexDual *)((char *)this + 1408), 0);
  ClpSimplexProgress::lastObjective((ClpSimplexDual *)((char *)this + 1408), 1);
  if ( v155 > fmax(fabs(v155), COERCE_DOUBLE(*(_QWORD *)&v155 & 0x7FFFFFFFFFFFFFFFLL)) * 0.0001 + v155 + 0.0001
    && v305
    && *((int *)this + 337) < 0 )
  {
    v223 = *((_QWORD *)this + 158);
    v224 = *(_QWORD *)(v223 + 8);
    v225 = v224 ? *(_DWORD *)(v224 + 64) : *(_DWORD *)(*(_QWORD *)(v223 + 16) + 48LL);
    if ( v225 > 10 )
    {
      if ( *((int *)this + 326) >= 0 )
        v225 = *((_DWORD *)this + 326);
      v226 = v225 >> 1;
      if ( v226 <= 0 )
        v226 = 1;
      *((_DWORD *)this + 326) = v226;
    }
  }
  v163 = *((_QWORD *)this + 24);
  LODWORD(v340[0]) = -999;
  (*(void (__fastcall **)(__int64, ClpSimplexDual *, double *, double *))(*(_QWORD *)v163 + 352LL))(
    v163,
    this,
    v340,
    v340);
  if ( *((double *)this + 97) > 0.0 )
    *((_QWORD *)this + 97) = 0x3FF0000000000000LL;
  LODWORD(v132) = *((_DWORD *)this + 80);
  if ( (int)v132 > 2 )
  {
    *((_QWORD *)this + 9) = v315;
    return v132;
  }
  if ( (_DWORD)v132 == 1
    && (*((_BYTE *)this + 1344) & 8) != 0
    && COERCE_DOUBLE(*((_QWORD *)this + 9) & 0x7FFFFFFFFFFFFFFFLL) > 1.0e10 )
  {
    goto LABEL_178;
  }
  return v132;
}

