__int64 __fastcall ClpLsqr::do_lsqr(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        __int64 a6,
        int a7,
        char a8,
        int *a9,
        int *a10,
        double a11,
        double a12,
        double a13,
        double a14,
        double a15,
        double a16,
        int a17,
        int a18,
        int *a19,
        double *a20,
        char a21,
        __int64 a22)
{
  unsigned __int64 v19; // rdx
  double v20; // xmm0_8
  double *i; // rax
  double v22; // xmm1_8
  int v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // r8
  double *v26; // rsi
  __int64 v27; // rdi
  int v28; // r8d
  __int64 v29; // rax
  int v30; // r10d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __m128d v33; // xmm1
  unsigned int v34; // r9d
  __int64 v35; // rax
  double *v36; // r11
  unsigned int v37; // r9d
  __int64 v38; // rax
  double v39; // xmm0_8
  int v40; // ebp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  double *v46; // r9
  int v47; // r8d
  __int64 v48; // rax
  int v49; // r14d
  __int64 v50; // rcx
  unsigned int v51; // r13d
  __int64 v52; // rax
  unsigned int v53; // r13d
  unsigned __int64 v54; // r11
  double *v55; // r10
  __int64 v56; // rax
  double v57; // xmm0_8
  double *j; // rax
  double v59; // xmm1_8
  int v60; // r8d
  __m128d v61; // xmm2
  unsigned __int64 v62; // rdi
  int v63; // esi
  __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned int v66; // r9d
  __int64 v67; // rax
  __m128d v68; // xmm1
  __int64 v69; // rax
  int v70; // esi
  int v72; // ecx
  int v73; // r8d
  bool v74; // cc
  __m128d v75; // xmm2
  double *v76; // rdi
  __int64 v77; // rax
  int v78; // esi
  double *v79; // rcx
  unsigned int v80; // r9d
  unsigned int v81; // edx
  __int64 v82; // rax
  __m128d v83; // xmm1
  signed int v84; // eax
  __int64 v85; // rdx
  int v86; // eax
  int v87; // ebp
  unsigned __int64 v88; // rdi
  double *v89; // rsi
  double *v90; // r9
  int v91; // r8d
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned int v94; // ecx
  unsigned int v95; // r14d
  __int64 v96; // rdx
  unsigned __int64 v97; // r11
  double *v98; // r10
  double *v99; // rdx
  signed int v100; // r8d
  __int64 v101; // rax
  int v102; // r8d
  int v103; // esi
  unsigned __int64 v104; // rdi
  double v105; // xmm0_8
  double *v106; // rax
  double *v107; // rdx
  double v108; // xmm1_8
  __m128d v109; // xmm2
  __int64 v110; // rax
  int v111; // r8d
  double *v112; // rcx
  unsigned int v113; // r9d
  unsigned int v114; // edx
  __int64 v115; // rax
  __m128d v116; // xmm1
  signed int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  double v120; // xmm0_8
  int v121; // r8d
  __m128d v122; // xmm2
  unsigned __int64 v123; // rdi
  __int64 v124; // rax
  int v125; // esi
  unsigned __int64 v126; // rcx
  unsigned int v127; // r9d
  unsigned int v128; // edx
  __int64 v129; // rax
  __m128d v130; // xmm1
  signed int v131; // eax
  __int64 v132; // rdx
  int v133; // eax
  int v134; // r13d
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  unsigned __int64 v138; // rdi
  double *v139; // rsi
  double *v140; // r9
  int v141; // r8d
  __int64 v142; // rdx
  __int64 v143; // rax
  unsigned int v144; // r15d
  __int64 v145; // rdx
  unsigned __int64 v146; // r11
  double *v147; // r10
  __int64 v148; // rax
  int v149; // r13d
  __int64 v150; // rdx
  unsigned __int64 v151; // rcx
  __int64 v152; // r8
  unsigned __int64 v153; // rdi
  unsigned __int64 v154; // r9
  double *v155; // rsi
  int v156; // r8d
  __int64 v157; // rdx
  __int64 v158; // rax
  unsigned int v159; // r15d
  __int64 v160; // rdx
  unsigned __int64 v161; // r11
  unsigned __int64 v162; // r10
  __int64 v163; // rax
  int v164; // esi
  unsigned __int64 v165; // rdi
  double v166; // xmm0_8
  double *v167; // rax
  double *v168; // rdx
  double v169; // xmm1_8
  double v170; // xmm7_8
  __m128d v171; // xmm2
  __int64 v172; // rax
  int v173; // r8d
  double *v174; // rcx
  unsigned int v175; // r9d
  unsigned int v176; // edx
  __int64 v177; // rax
  __m128d v178; // xmm1
  signed int v179; // eax
  __int64 v180; // rdx
  int v181; // eax
  double v182; // xmm0_8
  double v183; // xmm1_8
  double v184; // xmm2_8
  double v185; // xmm0_8
  int v186; // ebx
  double v187; // xmm1_8
  double v188; // xmm6_8
  double v189; // xmm2_8
  double v190; // xmm0_8
  double *v191; // rdx
  double v192; // xmm0_8
  double *k; // rax
  double v194; // xmm1_8
  double *v195; // rsi
  unsigned __int64 v196; // rdi
  int v197; // r8d
  __int64 v198; // rcx
  __int64 v199; // rax
  unsigned int v200; // r10d
  unsigned int v201; // edx
  __m128d v202; // xmm1
  __int64 v203; // rcx
  double *v204; // r11
  unsigned __int64 v205; // rcx
  signed int v206; // r8d
  __int64 v207; // rax
  double v208; // xmm0_8
  int v209; // r8d
  int v210; // r13d
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  double *v214; // rdi
  unsigned __int64 v215; // r9
  double *v216; // rsi
  int v217; // r8d
  __int64 v218; // rax
  unsigned int v219; // r15d
  __int64 v220; // rdx
  double *v221; // r11
  unsigned __int64 v222; // r10
  __int64 v223; // rax
  int v224; // r13d
  double *v225; // rsi
  unsigned __int64 v226; // rdi
  int v227; // r8d
  __int64 v228; // rcx
  __int64 v229; // rax
  unsigned int v230; // r10d
  unsigned int v231; // edx
  __m128d v232; // xmm1
  __int64 v233; // rcx
  double *v234; // r11
  unsigned __int64 v235; // rcx
  signed int v236; // r8d
  __int64 v237; // rax
  double v238; // xmm0_8
  int v239; // r8d
  int v240; // r13d
  __int64 v241; // rdx
  unsigned __int64 v242; // rcx
  __int64 v243; // r8
  unsigned __int64 v244; // rdi
  unsigned __int64 v245; // r9
  double *v246; // rsi
  int v247; // r8d
  __int64 v248; // rdx
  __int64 v249; // rax
  unsigned int v250; // r15d
  __int64 v251; // rdx
  unsigned __int64 v252; // r11
  unsigned __int64 v253; // r10
  __int64 v254; // rax
  double v255; // xmm2_8
  double v256; // xmm1_8
  double v257; // xmm0_8
  double v258; // xmm4_8
  double v259; // xmm0_8
  double v260; // xmm3_8
  double v261; // xmm1_8
  double v262; // xmm0_8
  double v263; // xmm5_8
  double v264; // xmm0_8
  double v265; // xmm4_8
  double v266; // xmm1_8
  bool v267; // si
  unsigned __int64 v268; // rax
  unsigned __int64 v269; // rax
  unsigned __int64 v270; // rax
  unsigned __int64 v271; // rax
  double *v272; // rax
  unsigned __int64 v273; // rax
  unsigned __int64 v274; // rax
  unsigned __int64 v275; // rax
  double *v276; // rax
  int v277; // ebx
  double v278; // xmm0_8
  unsigned __int64 v279; // rax
  unsigned __int64 v280; // rax
  double v281; // [rsp+8h] [rbp-410h]
  double v282; // [rsp+8h] [rbp-410h]
  double v283; // [rsp+10h] [rbp-408h]
  double v284; // [rsp+18h] [rbp-400h]
  double v285; // [rsp+18h] [rbp-400h]
  double v286; // [rsp+18h] [rbp-400h]
  double v288; // [rsp+28h] [rbp-3F0h]
  double v289; // [rsp+28h] [rbp-3F0h]
  double v290; // [rsp+28h] [rbp-3F0h]
  double v291; // [rsp+30h] [rbp-3E8h]
  double v292; // [rsp+38h] [rbp-3E0h]
  double v293; // [rsp+40h] [rbp-3D8h]
  double v294; // [rsp+48h] [rbp-3D0h]
  double v295; // [rsp+50h] [rbp-3C8h]
  double v298; // [rsp+68h] [rbp-3B0h]
  double v299; // [rsp+68h] [rbp-3B0h]
  double v300; // [rsp+68h] [rbp-3B0h]
  double v301; // [rsp+70h] [rbp-3A8h]
  double v302; // [rsp+78h] [rbp-3A0h]
  double v303; // [rsp+78h] [rbp-3A0h]
  double v304; // [rsp+80h] [rbp-398h]
  double v305; // [rsp+80h] [rbp-398h]
  double v307; // [rsp+98h] [rbp-380h]
  double v308; // [rsp+98h] [rbp-380h]
  double v309; // [rsp+A0h] [rbp-378h]
  double v310; // [rsp+A8h] [rbp-370h]
  double v311; // [rsp+B0h] [rbp-368h]
  double v313; // [rsp+C8h] [rbp-350h]
  double v314; // [rsp+D0h] [rbp-348h]
  double v315; // [rsp+D8h] [rbp-340h]
  unsigned int v316; // [rsp+ECh] [rbp-32Ch]
  int v320; // [rsp+100h] [rbp-318h] BYREF
  unsigned __int64 v321; // [rsp+108h] [rbp-310h]
  int v322; // [rsp+110h] [rbp-308h] BYREF
  unsigned __int64 v323; // [rsp+118h] [rbp-300h]
  int v324; // [rsp+120h] [rbp-2F8h] BYREF
  double *v325; // [rsp+128h] [rbp-2F0h]
  unsigned int v326; // [rsp+130h] [rbp-2E8h] BYREF
  unsigned __int64 v327; // [rsp+138h] [rbp-2E0h]
  char s[112]; // [rsp+140h] [rbp-2D8h] BYREF
  char v329[112]; // [rsp+1B0h] [rbp-268h] BYREF
  char v330[112]; // [rsp+220h] [rbp-1F8h] BYREF
  char v331[8]; // [rsp+290h] [rbp-188h] BYREF
  double *v332; // [rsp+298h] [rbp-180h]
  __m128i si128; // [rsp+300h] [rbp-118h] BYREF
  char v334[96]; // [rsp+310h] [rbp-108h] BYREF
  _OWORD v335[2]; // [rsp+370h] [rbp-A8h] BYREF
  char v336[136]; // [rsp+390h] [rbp-88h] BYREF

  v316 = *(_DWORD *)(a1 + 4);
  *a19 = 0;
  *a10 = 0;
  if ( a5 <= 0.0 )
    v314 = 0.0;
  else
    v314 = 1.0 / a5;
  ((void (*)(void))CoinDenseVector<double>::CoinDenseVector)();
  CoinDenseVector<double>::CoinDenseVector(&v322, v316, 0.0);
  CoinDenseVector<double>::clear(a9);
  if ( v320 <= 0 )
  {
    v313 = 0.0;
    v282 = 0.0;
  }
  else
  {
    v19 = v321;
    v20 = 0.0;
    for ( i = (double *)(v321 + 8); ; ++i )
    {
      v22 = *(double *)v19;
      v19 = (unsigned __int64)i;
      v20 = v20 + v22 * v22;
      if ( i == (double *)(v321 + 8 + 8LL * (unsigned int)(v320 - 1)) )
        break;
    }
    v313 = sqrt(v20);
    if ( v20 < 0.0 )
      sqrt(v20);
    if ( v313 <= 0.0 )
      goto LABEL_48;
    v23 = v320;
    v281 = 1.0 / v313;
    CoinDenseVector<double>::CoinDenseVector(v335, (unsigned int)v320, 0.0);
    v26 = (double *)v321;
    v27 = *((_QWORD *)&v335[0] + 1);
    if ( (v321 >= *((_QWORD *)&v335[0] + 1) + 16LL || *((_QWORD *)&v335[0] + 1) >= v321 + 16)
      && (unsigned int)v320 > 0xE )
    {
      v28 = 0;
      v29 = (v321 >> 3) & 1;
      if ( ((v321 >> 3) & 1) != 0 )
      {
        v28 = 1;
        **((double **)&v335[0] + 1) = v281 * *(double *)v321;
      }
      v30 = v23 - v29;
      LODWORD(v31) = 0;
      v32 = (unsigned int)v29;
      v33 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v281, (__m128d)*(unsigned __int64 *)&v281);
      v34 = v23 - v29;
      v35 = 0;
      v36 = &v26[v32];
      v37 = v34 >> 1;
      v24 = v27 + v32 * 8;
      do
      {
        v31 = (unsigned int)(v31 + 1);
        *(__m128d *)(v24 + v35 * 8) = _mm_mul_pd(*(__m128d *)&v36[v35], v33);
        v35 += 2;
      }
      while ( v37 > (unsigned int)v31 );
      v25 = (v30 & 0xFFFFFFFE) + v28;
      if ( v30 != (v30 & 0xFFFFFFFE) )
      {
        v38 = (int)v25;
        v39 = v26[(int)v25];
        v25 = (unsigned int)(v25 + 1);
        *(double *)(v27 + 8 * v38) = v39 * v281;
        if ( (int)v25 < v23 )
          *(double *)(v27 + 8LL * (int)v25) = v281 * v26[(int)v25];
      }
    }
    else
    {
      v31 = 8LL * (unsigned int)(v320 - 1) + 8;
      v279 = 0;
      do
      {
        *(double *)(v27 + v279) = v26[v279 / 8] * v281;
        v279 += 8LL;
      }
      while ( v279 != v31 );
    }
    CoinDenseVector<double>::operator=(&v320, v335, v31, v24, v25);
    CoinDenseVector<double>::~CoinDenseVector(v335);
    ClpLsqr::matVecMult(a1, 2, &v322, &v320);
    v40 = v322;
    if ( a21 )
    {
      CoinDenseVector<double>::CoinDenseVector(v335, (unsigned int)v322, 0.0);
      v44 = v323;
      v45 = *((_QWORD *)&v335[0] + 1);
      v46 = *(double **)(a22 + 8);
      if ( v40 > 0 )
      {
        LOBYTE(v42) = (unsigned int)v40 > 0xE;
        if ( (unsigned int)v40 > 0xE
          && (v323 >= *((_QWORD *)&v335[0] + 1) + 16LL || *((_QWORD *)&v335[0] + 1) >= v323 + 16)
          && (LOBYTE(v42) = (unsigned __int64)v46 >= *((_QWORD *)&v335[0] + 1) + 16LL
                         || *((_QWORD *)&v335[0] + 1) >= (unsigned __int64)(v46 + 2),
              (_BYTE)v42) )
        {
          v47 = 0;
          v48 = (v323 >> 3) & 1;
          if ( ((v323 >> 3) & 1) != 0 )
          {
            v47 = 1;
            **((double **)&v335[0] + 1) = *(double *)v323 * *v46;
          }
          LODWORD(v41) = 0;
          v49 = v40 - v48;
          v50 = 8LL * (unsigned int)v48;
          v51 = v40 - v48;
          v52 = 0;
          v53 = v51 >> 1;
          v54 = v44 + v50;
          v55 = &v46[(unsigned __int64)v50 / 8];
          v42 = v45 + v50;
          do
          {
            v41 = (unsigned int)(v41 + 1);
            *(__m128d *)(v42 + v52 * 8) = _mm_mul_pd(*(__m128d *)&v55[v52], *(__m128d *)(v54 + v52 * 8));
            v52 += 2;
          }
          while ( v53 > (unsigned int)v41 );
          v43 = (v49 & 0xFFFFFFFE) + v47;
          if ( v49 != (v49 & 0xFFFFFFFE) )
          {
            v56 = (int)v43;
            v43 = (unsigned int)(v43 + 1);
            *(double *)(v45 + 8 * v56) = *(double *)(v44 + 8 * v56) * v46[v56];
            if ( (int)v43 < v40 )
              *(double *)(v45 + 8LL * (int)v43) = *(double *)(v44 + 8LL * (int)v43) * v46[(int)v43];
          }
        }
        else
        {
          v41 = 8LL * (unsigned int)(v40 - 1) + 8;
          v280 = 0;
          do
          {
            *(double *)(v45 + v280) = *(double *)(v44 + v280) * v46[v280 / 8];
            v280 += 8LL;
          }
          while ( v280 != v41 );
        }
      }
      CoinDenseVector<double>::operator=(&v322, v335, v41, v42, v43);
      CoinDenseVector<double>::~CoinDenseVector(v335);
      v40 = v322;
    }
    if ( v40 <= 0 )
    {
LABEL_48:
      v282 = 0.0;
    }
    else
    {
      v19 = v323;
      v57 = 0.0;
      for ( j = (double *)(v323 + 8); ; ++j )
      {
        v59 = *(double *)v19;
        v19 = (unsigned __int64)j;
        v57 = v57 + v59 * v59;
        if ( j == (double *)(v323 + 8 + 8LL * (unsigned int)(v40 - 1)) )
          break;
      }
      v282 = sqrt(v57);
      if ( v57 < 0.0 )
        sqrt(v57);
      if ( v282 > 0.0 )
      {
        v60 = v322;
        v61 = (__m128d)0x3FF0000000000000uLL;
        v61.m128d_f64[0] = 1.0 / v282;
        if ( v322 > 0 )
        {
          v62 = v323;
          v19 = (unsigned int)(v322 - 1);
          v63 = 0;
          v64 = (v323 >> 3) & 1;
          if ( (unsigned int)v19 <= 1 )
            goto LABEL_46;
          if ( (_DWORD)v64 )
          {
            v63 = 1;
            *(double *)v323 = *(double *)v323 * v61.m128d_f64[0];
          }
          v65 = v62 + 8 * v64;
          v66 = v60 - v64;
          LODWORD(v19) = 0;
          v67 = 0;
          v68 = _mm_unpacklo_pd(v61, v61);
          do
          {
            v19 = (unsigned int)(v19 + 1);
            *(__m128d *)(v65 + v67) = _mm_mul_pd(*(__m128d *)(v65 + v67), v68);
            v67 += 16;
          }
          while ( (unsigned int)v19 < v66 >> 1 );
          v63 += v66 & 0xFFFFFFFE;
          if ( v66 != (v66 & 0xFFFFFFFE) )
          {
LABEL_46:
            v69 = v63;
            v70 = v63 + 1;
            *(double *)(v62 + 8 * v69) = *(double *)(v62 + 8 * v69) * v61.m128d_f64[0];
            if ( v60 > v70 )
              *(double *)(v62 + 8LL * v70) = v61.m128d_f64[0] * *(double *)(v62 + 8LL * v70);
          }
        }
      }
    }
  }
  CoinDenseVector<double>::CoinDenseVector(&v324, &v322, v19);
  v315 = v282 * v313;
  if ( v282 * v313 == 0.0 )
  {
    printf("  %s\n\n", aTheExactSoluti);
    goto LABEL_51;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_28A860);
  strcpy(v334, "      Function");
  v335[0] = _mm_load_si128((const __m128i *)&xmmword_28A870);
  strcpy(v336, "ond A");
  v335[1] = _mm_load_si128((const __m128i *)&xmmword_28A880);
  if ( a8 )
  {
    printf(" %s%s\n", si128.m128i_i8, (const char *)v335);
    v276 = (double *)CoinDenseVector<double>::operator[](a9, 0);
    sprintf(s, "%6d %12.5e %10.3e", *a19, *v276, v313);
    sprintf(v329, "  %8.1e  %8.1e", 1.0, v282 / v313);
    printf("%s%s\n", s, v329);
  }
  v311 = 0.0;
  v309 = 0.0;
  v72 = *a19;
  v302 = v313;
  v293 = 0.0;
  v295 = v313;
  v307 = 0.0;
  v292 = 0.0;
  v294 = v282;
  v301 = 0.0;
  v310 = -1.0;
  v291 = 0.0;
LABEL_55:
  if ( v72 < a7 )
  {
    while ( 1 )
    {
      v73 = v320;
      v74 = v320 <= 0;
      *a19 = v72 + 1;
      v75 = _mm_xor_pd((__m128d)*(unsigned __int64 *)&v282, (__m128d)xmmword_289BF0);
      if ( v74 )
        goto LABEL_65;
      v76 = (double *)v321;
      v77 = (v321 >> 3) & 1;
      if ( (unsigned int)(v73 - 1) <= 1 )
        break;
      v78 = 0;
      if ( (_DWORD)v77 )
      {
        v78 = 1;
        *(double *)v321 = *(double *)v321 * v75.m128d_f64[0];
      }
      v79 = &v76[v77];
      v80 = v73 - v77;
      v81 = 0;
      v82 = 0;
      v83 = _mm_unpacklo_pd(v75, v75);
      do
      {
        ++v81;
        *(__m128d *)&v79[v82] = _mm_mul_pd(*(__m128d *)&v79[v82], v83);
        v82 += 2;
      }
      while ( v81 < v80 >> 1 );
      v84 = (v80 & 0xFFFFFFFE) + v78;
      if ( v80 != (v80 & 0xFFFFFFFE) )
        goto LABEL_63;
LABEL_65:
      if ( a21 )
      {
        v87 = v322;
        CoinDenseVector<double>::CoinDenseVector(v331, (unsigned int)v322, 0.0);
        v88 = v323;
        v89 = v332;
        v90 = *(double **)(a22 + 8);
        if ( v87 > 0 )
        {
          if ( (unsigned int)v87 > 0xE
            && (v323 >= (unsigned __int64)(v332 + 2) || (unsigned __int64)v332 >= v323 + 16)
            && (v90 >= v332 + 2 || v332 >= v90 + 2) )
          {
            v91 = 0;
            v92 = (v323 >> 3) & 1;
            if ( ((v323 >> 3) & 1) != 0 )
            {
              v91 = 1;
              *v332 = *(double *)v323 * *v90;
            }
            v93 = 0;
            v94 = 0;
            v95 = v87 - v92;
            v96 = (unsigned int)v92;
            v97 = v88 + v96 * 8;
            v98 = &v90[v96];
            v99 = &v89[v96];
            do
            {
              ++v94;
              *(__m128d *)&v99[v93] = _mm_mul_pd(*(__m128d *)&v98[v93], *(__m128d *)(v97 + v93 * 8));
              v93 += 2;
            }
            while ( v94 < v95 >> 1 );
            v100 = (v95 & 0xFFFFFFFE) + v91;
            if ( v95 != (v95 & 0xFFFFFFFE) )
            {
              v101 = v100;
              v102 = v100 + 1;
              v89[v101] = *(double *)(v88 + 8 * v101) * v90[v101];
              if ( v87 > v102 )
                v89[v102] = *(double *)(v88 + 8LL * v102) * v90[v102];
            }
          }
          else
          {
            v274 = 0;
            do
            {
              v89[v274 / 8] = *(double *)(v88 + v274) * v90[v274 / 8];
              v274 += 8LL;
            }
            while ( 8LL * (unsigned int)(v87 - 1) + 8 != v274 );
          }
        }
        ClpLsqr::matVecMult(a1, 1, &v320, v331);
        CoinDenseVector<double>::~CoinDenseVector(v331);
        v103 = v320;
        if ( v320 <= 0 )
        {
LABEL_238:
          v284 = 0.0;
          v298 = 0.0;
          v288 = a2 * a2;
          goto LABEL_140;
        }
      }
      else
      {
        ClpLsqr::matVecMult(a1, 1, &v320, &v322);
        v103 = v320;
        if ( v320 <= 0 )
          goto LABEL_238;
      }
      v104 = v321;
      v105 = 0.0;
      v106 = (double *)(v321 + 8);
      v107 = (double *)v321;
      while ( 1 )
      {
        v108 = *v107;
        v107 = v106;
        v105 = v105 + v108 * v108;
        if ( v106 == (double *)(v321 + 8 + 8LL * (unsigned int)(v103 - 1)) )
          break;
        ++v106;
      }
      v284 = sqrt(v105);
      if ( v105 < 0.0 )
      {
        sqrt(v105);
        v288 = a2 * a2;
        if ( v284 > 0.0 )
        {
          v103 = v320;
          v109.m128d_f64[1] = 0.0;
          v109.m128d_f64[0] = 1.0 / v284;
          if ( v320 > 0 )
          {
            v104 = v321;
LABEL_83:
            v110 = (v104 >> 3) & 1;
            if ( (unsigned int)(v103 - 1) <= 1 )
            {
              v117 = 0;
              goto LABEL_89;
            }
            v111 = 0;
            if ( (_DWORD)v110 )
            {
              v111 = 1;
              *(double *)v104 = *(double *)v104 * v109.m128d_f64[0];
            }
            v112 = (double *)(v104 + 8 * v110);
            v113 = v103 - v110;
            v114 = 0;
            v115 = 0;
            v116 = _mm_unpacklo_pd(v109, v109);
            do
            {
              ++v114;
              *(__m128d *)&v112[v115] = _mm_mul_pd(*(__m128d *)&v112[v115], v116);
              v115 += 2;
            }
            while ( v113 >> 1 > v114 );
            v117 = (v113 & 0xFFFFFFFE) + v111;
            if ( v113 != (v113 & 0xFFFFFFFE) )
            {
LABEL_89:
              v118 = v117;
              v119 = v117 + 1;
              *(double *)(v104 + 8 * v118) = *(double *)(v104 + 8 * v118) * v109.m128d_f64[0];
              if ( v119 < v103 )
                *(double *)(v104 + 8LL * v119) = v109.m128d_f64[0] * *(double *)(v104 + 8LL * v119);
            }
          }
          v298 = v284 * v284;
          v120 = v291 * v291 + v282 * v282 + v284 * v284 + v288;
          v291 = sqrt(v120);
          if ( v120 < 0.0 )
            sqrt(v120);
          v121 = v322;
          v122 = _mm_xor_pd((__m128d)*(unsigned __int64 *)&v284, (__m128d)xmmword_289BF0);
          if ( v322 > 0 )
          {
            v123 = v323;
            v124 = (v323 >> 3) & 1;
            if ( (unsigned int)(v322 - 1) <= 1 )
            {
              v131 = 0;
              goto LABEL_100;
            }
            v125 = 0;
            if ( (_DWORD)v124 )
            {
              v125 = 1;
              *(double *)v323 = *(double *)v323 * v122.m128d_f64[0];
            }
            v126 = v123 + 8 * v124;
            v127 = v121 - v124;
            v128 = 0;
            v129 = 0;
            v130 = _mm_unpacklo_pd(v122, v122);
            do
            {
              ++v128;
              *(__m128d *)(v126 + v129) = _mm_mul_pd(*(__m128d *)(v126 + v129), v130);
              v129 += 16;
            }
            while ( v128 < v127 >> 1 );
            v131 = (v127 & 0xFFFFFFFE) + v125;
            if ( v127 != (v127 & 0xFFFFFFFE) )
            {
LABEL_100:
              v132 = v131;
              v133 = v131 + 1;
              *(double *)(v123 + 8 * v132) = *(double *)(v123 + 8 * v132) * v122.m128d_f64[0];
              if ( v121 > v133 )
                *(double *)(v123 + 8LL * v133) = v122.m128d_f64[0] * *(double *)(v123 + 8LL * v133);
            }
          }
          CoinDenseVector<double>::CoinDenseVector(&v326, v316, 0.0);
          CoinDenseVector<double>::clear(&v326);
          ClpLsqr::matVecMult(a1, 2, &v326, &v320);
          if ( a21 )
          {
            v134 = v326;
            CoinDenseVector<double>::CoinDenseVector(v331, v326, 0.0);
            v138 = v327;
            v139 = v332;
            v140 = *(double **)(a22 + 8);
            if ( v134 > 0 )
            {
              LOBYTE(v136) = (unsigned int)v134 > 0xE;
              if ( (unsigned int)v134 > 0xE
                && (v327 >= (unsigned __int64)(v332 + 2) || (unsigned __int64)v332 >= v327 + 16)
                && (LOBYTE(v136) = v140 >= v332 + 2 || v332 >= v140 + 2, (_BYTE)v136) )
              {
                v141 = 0;
                v142 = (v327 >> 3) & 1;
                if ( ((v327 >> 3) & 1) != 0 )
                {
                  v141 = 1;
                  *v332 = *(double *)v327 * *v140;
                }
                v143 = 0;
                LODWORD(v136) = 0;
                v144 = v134 - v142;
                v145 = (unsigned int)v142;
                v146 = v138 + v145 * 8;
                v147 = &v140[v145];
                v135 = (__int64)&v139[v145];
                do
                {
                  v136 = (unsigned int)(v136 + 1);
                  *(__m128d *)(v135 + v143 * 8) = _mm_mul_pd(*(__m128d *)&v147[v143], *(__m128d *)(v146 + v143 * 8));
                  v143 += 2;
                }
                while ( (unsigned int)v136 < v144 >> 1 );
                v137 = (v144 & 0xFFFFFFFE) + v141;
                if ( v144 != (v144 & 0xFFFFFFFE) )
                {
                  v148 = (int)v137;
                  v137 = (unsigned int)(v137 + 1);
                  v139[v148] = *(double *)(v138 + 8 * v148) * v140[v148];
                  if ( (int)v137 < v134 )
                    v139[(int)v137] = *(double *)(v138 + 8LL * (int)v137) * v140[(int)v137];
                }
              }
              else
              {
                v135 = 8LL * (unsigned int)(v134 - 1) + 8;
                v275 = 0;
                do
                {
                  v139[v275 / 8] = *(double *)(v138 + v275) * v140[v275 / 8];
                  v275 += 8LL;
                }
                while ( v275 != v135 );
              }
            }
            CoinDenseVector<double>::operator=(&v326, v331, v135, v136, v137);
            CoinDenseVector<double>::~CoinDenseVector(v331);
          }
          v149 = v322;
          CoinDenseVector<double>::CoinDenseVector(v331, (unsigned int)v322, 0.0);
          v153 = v323;
          v154 = v327;
          v155 = v332;
          if ( v149 > 0 )
          {
            v151 = (unsigned __int64)(v332 + 2);
            LOBYTE(v151) = v327 >= (unsigned __int64)(v332 + 2);
            if ( ((unsigned __int8)(v151 | ((unsigned __int64)v332 >= v327 + 16))
                & (v323 >= (unsigned __int64)(v332 + 2) || (unsigned __int64)v332 >= v323 + 16)) != 0
              && (unsigned int)v149 > 0xE )
            {
              v156 = 0;
              v157 = (v323 >> 3) & 1;
              if ( ((v323 >> 3) & 1) != 0 )
              {
                v156 = 1;
                *v332 = *(double *)v323 + *(double *)v327;
              }
              v158 = 0;
              LODWORD(v151) = 0;
              v159 = v149 - v157;
              v160 = 8LL * (unsigned int)v157;
              v161 = v153 + v160;
              v162 = v154 + v160;
              v150 = (__int64)&v155[(unsigned __int64)v160 / 8];
              do
              {
                v151 = (unsigned int)(v151 + 1);
                *(__m128d *)(v150 + v158) = _mm_add_pd(*(__m128d *)(v162 + v158), *(__m128d *)(v161 + v158));
                v158 += 16;
              }
              while ( v159 >> 1 > (unsigned int)v151 );
              v152 = (v159 & 0xFFFFFFFE) + v156;
              if ( v159 != (v159 & 0xFFFFFFFE) )
              {
                v163 = (int)v152;
                v152 = (unsigned int)(v152 + 1);
                v155[v163] = *(double *)(v153 + 8 * v163) + *(double *)(v154 + 8 * v163);
                if ( (int)v152 < v149 )
                  v155[(int)v152] = *(double *)(v153 + 8LL * (int)v152) + *(double *)(v154 + 8LL * (int)v152);
              }
            }
            else
            {
              v150 = 8LL * (unsigned int)(v149 - 1) + 8;
              v273 = 0;
              do
              {
                v155[v273 / 8] = *(double *)(v153 + v273) + *(double *)(v154 + v273);
                v273 += 8LL;
              }
              while ( v150 != v273 );
            }
          }
          CoinDenseVector<double>::operator=(&v322, v331, v150, v151, v152);
          CoinDenseVector<double>::~CoinDenseVector(v331);
          v164 = v322;
          if ( v322 <= 0 )
          {
            v282 = 0.0;
          }
          else
          {
            v165 = v323;
            v166 = 0.0;
            v167 = (double *)(v323 + 8);
            v168 = (double *)v323;
            while ( 1 )
            {
              v169 = *v168;
              v168 = v167;
              v166 = v166 + v169 * v169;
              if ( (double *)(v323 + 8 + 8LL * (unsigned int)(v322 - 1)) == v167 )
                break;
              ++v167;
            }
            v170 = sqrt(v166);
            v282 = v170;
            if ( v166 < 0.0 )
            {
              sqrt(v166);
              if ( v170 > 0.0 )
              {
                v164 = v322;
                v171 = (__m128d)0x3FF0000000000000uLL;
                v171.m128d_f64[0] = 1.0 / v170;
                if ( v322 > 0 )
                {
                  v165 = v323;
LABEL_131:
                  v172 = (v165 >> 3) & 1;
                  if ( (unsigned int)(v164 - 1) <= 1 )
                  {
                    v179 = 0;
                  }
                  else
                  {
                    v173 = 0;
                    if ( (_DWORD)v172 )
                    {
                      v173 = 1;
                      *(double *)v165 = *(double *)v165 * v171.m128d_f64[0];
                    }
                    v174 = (double *)(v165 + 8 * v172);
                    v175 = v164 - v172;
                    v176 = 0;
                    v177 = 0;
                    v178 = _mm_unpacklo_pd(v171, v171);
                    do
                    {
                      ++v176;
                      *(__m128d *)&v174[v177] = _mm_mul_pd(*(__m128d *)&v174[v177], v178);
                      v177 += 2;
                    }
                    while ( v175 >> 1 > v176 );
                    v179 = (v175 & 0xFFFFFFFE) + v173;
                    if ( (v175 & 0xFFFFFFFE) == v175 )
                      goto LABEL_139;
                  }
                  v180 = v179;
                  v181 = v179 + 1;
                  *(double *)(v165 + 8 * v180) = *(double *)(v165 + 8 * v180) * v171.m128d_f64[0];
                  if ( v181 < v164 )
                    *(double *)(v165 + 8LL * v181) = v171.m128d_f64[0] * *(double *)(v165 + 8LL * v181);
                }
              }
            }
            else if ( v170 > 0.0 )
            {
              v171 = (__m128d)0x3FF0000000000000uLL;
              v171.m128d_f64[0] = 1.0 / v170;
              goto LABEL_131;
            }
          }
LABEL_139:
          CoinDenseVector<double>::~CoinDenseVector(&v326);
          goto LABEL_140;
        }
        v298 = v284 * v284;
      }
      else
      {
        v288 = a2 * a2;
        if ( v284 > 0.0 )
        {
          v109 = (__m128d)0x3FF0000000000000uLL;
          v109.m128d_f64[0] = 1.0 / v284;
          goto LABEL_83;
        }
        v298 = v284 * v284;
      }
LABEL_140:
      v182 = v294 * v294 + v288;
      v183 = sqrt(v182);
      if ( v182 < 0.0 )
        sqrt(v182);
      v184 = v294 / v183 * v295;
      v303 = a2 / v183 * v295;
      v185 = v183 * v183 + v298;
      v283 = sqrt(v185);
      if ( v185 < 0.0 )
      {
        sqrt(v185);
        v184 = v294 / v183 * v295;
      }
      v186 = v324;
      v187 = v183 / v283;
      v188 = v187 * v184;
      v189 = v184 * (v284 / v283);
      v190 = v284 / v283 * v188;
      v285 = v282 * (v284 / v283);
      v295 = v189;
      v304 = v190;
      v289 = v188 / v283;
      v294 = -v187 * v282;
      v299 = -v285 / v283;
      if ( v324 <= 0 )
      {
        v308 = 0.0;
      }
      else
      {
        v191 = v325;
        v192 = 0.0;
        for ( k = v325 + 1; ; ++k )
        {
          v194 = *v191;
          v191 = k;
          v192 = v192 + v194 * v194;
          if ( k == &v325[(unsigned int)(v324 - 1) + 1] )
            break;
        }
        v308 = sqrt(v192);
        if ( v192 < 0.0 )
        {
          sqrt(v192);
          v186 = v324;
        }
      }
      CoinDenseVector<double>::CoinDenseVector(&v326, (unsigned int)v186, 0.0);
      v195 = v325;
      v196 = v327;
      if ( v186 > 0 )
      {
        if ( (v327 >= (unsigned __int64)(v325 + 2) || (unsigned __int64)v325 >= v327 + 16) && (unsigned int)v186 > 0xE )
        {
          v197 = 0;
          v198 = ((unsigned __int64)v325 >> 3) & 1;
          if ( (((unsigned __int64)v325 >> 3) & 1) != 0 )
          {
            v197 = 1;
            *(double *)v327 = v289 * *v325;
          }
          v199 = 0;
          v200 = v186 - v198;
          v201 = 0;
          v202 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v289, (__m128d)*(unsigned __int64 *)&v289);
          v203 = (unsigned int)v198;
          v204 = &v195[v203];
          v205 = v196 + v203 * 8;
          do
          {
            ++v201;
            *(__m128d *)(v205 + v199 * 8) = _mm_mul_pd(*(__m128d *)&v204[v199], v202);
            v199 += 2;
          }
          while ( v201 < v200 >> 1 );
          v206 = (v200 & 0xFFFFFFFE) + v197;
          if ( (v200 & 0xFFFFFFFE) != v200 )
          {
            v207 = v206;
            v208 = v195[v206];
            v209 = v206 + 1;
            *(double *)(v196 + 8 * v207) = v208 * v289;
            if ( v209 < v186 )
              *(double *)(v196 + 8LL * v209) = v289 * v195[v209];
          }
        }
        else
        {
          v268 = 0;
          do
          {
            *(double *)(v196 + v268) = v195[v268 / 8] * v289;
            v268 += 8LL;
          }
          while ( 8LL * (unsigned int)(v186 - 1) + 8 != v268 );
        }
      }
      v210 = *a9;
      CoinDenseVector<double>::CoinDenseVector(v331, (unsigned int)*a9, 0.0);
      v214 = *((double **)a9 + 1);
      v215 = v327;
      v216 = v332;
      if ( v210 > 0 )
      {
        LOBYTE(v212) = (unsigned int)v210 > 0xE;
        if ( (unsigned int)v210 > 0xE
          && (v327 >= (unsigned __int64)(v332 + 2) || (unsigned __int64)v332 >= v327 + 16)
          && (LOBYTE(v212) = v214 >= v332 + 2 || v332 >= v214 + 2, (_BYTE)v212) )
        {
          v217 = 0;
          if ( (((unsigned __int64)v214 >> 3) & 1) != 0 )
          {
            v217 = 1;
            *v332 = *(double *)v327 + *v214;
          }
          v218 = 0;
          LODWORD(v212) = 0;
          v219 = v210 - (((unsigned __int64)v214 >> 3) & 1);
          v220 = ((unsigned __int64)v214 >> 3) & 1;
          v221 = &v214[v220];
          v222 = v215 + v220 * 8;
          v211 = (__int64)&v216[v220];
          do
          {
            v212 = (unsigned int)(v212 + 1);
            *(__m128d *)(v211 + v218 * 8) = _mm_add_pd(*(__m128d *)(v222 + v218 * 8), *(__m128d *)&v221[v218]);
            v218 += 2;
          }
          while ( v219 >> 1 > (unsigned int)v212 );
          v213 = (v219 & 0xFFFFFFFE) + v217;
          if ( (v219 & 0xFFFFFFFE) != v219 )
          {
            v223 = (int)v213;
            v213 = (unsigned int)(v213 + 1);
            v216[v223] = *(double *)(v215 + 8 * v223) + v214[v223];
            if ( v210 > (int)v213 )
              v216[(int)v213] = *(double *)(v215 + 8LL * (int)v213) + v214[(int)v213];
          }
        }
        else
        {
          v211 = 8LL * (unsigned int)(v210 - 1) + 8;
          v270 = 0;
          do
          {
            v216[v270 / 8] = *(double *)(v215 + v270) + v214[v270 / 8];
            v270 += 8LL;
          }
          while ( v270 != v211 );
        }
      }
      CoinDenseVector<double>::operator=(a9, v331, v211, v212, v213);
      CoinDenseVector<double>::~CoinDenseVector(v331);
      CoinDenseVector<double>::~CoinDenseVector(&v326);
      v224 = v324;
      CoinDenseVector<double>::CoinDenseVector(&v326, (unsigned int)v324, 0.0);
      v225 = v325;
      v226 = v327;
      if ( v224 > 0 )
      {
        if ( (v327 >= (unsigned __int64)(v325 + 2) || (unsigned __int64)v325 >= v327 + 16) && (unsigned int)v224 > 0xE )
        {
          v227 = 0;
          v228 = ((unsigned __int64)v325 >> 3) & 1;
          if ( (((unsigned __int64)v325 >> 3) & 1) != 0 )
          {
            v227 = 1;
            *(double *)v327 = v299 * *v325;
          }
          v229 = 0;
          v230 = v224 - v228;
          v231 = 0;
          v232 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v299, (__m128d)*(unsigned __int64 *)&v299);
          v233 = (unsigned int)v228;
          v234 = &v225[v233];
          v235 = v226 + v233 * 8;
          do
          {
            ++v231;
            *(__m128d *)(v235 + v229 * 8) = _mm_mul_pd(*(__m128d *)&v234[v229], v232);
            v229 += 2;
          }
          while ( v231 < v230 >> 1 );
          v236 = (v230 & 0xFFFFFFFE) + v227;
          if ( (v230 & 0xFFFFFFFE) != v230 )
          {
            v237 = v236;
            v238 = v225[v236];
            v239 = v236 + 1;
            *(double *)(v226 + 8 * v237) = v238 * v299;
            if ( v224 > v239 )
              *(double *)(v226 + 8LL * v239) = v299 * v225[v239];
          }
        }
        else
        {
          v269 = 0;
          do
          {
            *(double *)(v226 + v269) = v225[v269 / 8] * v299;
            v269 += 8LL;
          }
          while ( 8LL * (unsigned int)(v224 - 1) + 8 != v269 );
        }
      }
      v240 = v322;
      CoinDenseVector<double>::CoinDenseVector(v331, (unsigned int)v322, 0.0);
      v244 = v323;
      v245 = v327;
      v246 = v332;
      if ( v240 > 0 )
      {
        v242 = (unsigned __int64)(v332 + 2);
        LOBYTE(v242) = v327 >= (unsigned __int64)(v332 + 2);
        if ( ((unsigned __int8)(v242 | ((unsigned __int64)v332 >= v327 + 16))
            & (v323 >= (unsigned __int64)(v332 + 2) || (unsigned __int64)v332 >= v323 + 16)) != 0
          && (unsigned int)v240 > 0xE )
        {
          v247 = 0;
          v248 = (v323 >> 3) & 1;
          if ( ((v323 >> 3) & 1) != 0 )
          {
            v247 = 1;
            *v332 = *(double *)v327 + *(double *)v323;
          }
          v249 = 0;
          LODWORD(v242) = 0;
          v250 = v240 - v248;
          v251 = 8LL * (unsigned int)v248;
          v252 = v244 + v251;
          v253 = v245 + v251;
          v241 = (__int64)&v246[(unsigned __int64)v251 / 8];
          do
          {
            v242 = (unsigned int)(v242 + 1);
            *(__m128d *)(v241 + v249) = _mm_add_pd(*(__m128d *)(v253 + v249), *(__m128d *)(v252 + v249));
            v249 += 16;
          }
          while ( (unsigned int)v242 < v250 >> 1 );
          v243 = (v250 & 0xFFFFFFFE) + v247;
          if ( (v250 & 0xFFFFFFFE) != v250 )
          {
            v254 = (int)v243;
            v243 = (unsigned int)(v243 + 1);
            v246[v254] = *(double *)(v245 + 8 * v254) + *(double *)(v244 + 8 * v254);
            if ( v240 > (int)v243 )
              v246[(int)v243] = *(double *)(v245 + 8LL * (int)v243) + *(double *)(v244 + 8LL * (int)v243);
          }
        }
        else
        {
          v241 = 8LL * (unsigned int)(v240 - 1) + 8;
          v271 = 0;
          do
          {
            v246[v271 / 8] = *(double *)(v245 + v271) + *(double *)(v244 + v271);
            v271 += 8LL;
          }
          while ( v271 != v241 );
        }
      }
      CoinDenseVector<double>::operator=(&v324, v331, v241, v242, v243);
      CoinDenseVector<double>::~CoinDenseVector(v331);
      CoinDenseVector<double>::~CoinDenseVector(&v326);
      v255 = v310 * v283;
      v292 = v308 / v283 * (v308 / v283) + v292;
      v256 = v188 - v311 * v283 * v309;
      v257 = v256 / (v310 * v283) * (v256 / (v310 * v283)) + v293;
      v307 = sqrt(v257);
      if ( v257 < 0.0 )
      {
        sqrt(v257);
        v256 = v188 - v311 * v283 * v309;
        v255 = v310 * v283;
      }
      v258 = v285;
      v259 = v255 * v255 + v258 * v258;
      v260 = sqrt(v259);
      if ( v259 < 0.0 )
      {
        sqrt(v259);
        v258 = v285;
      }
      v309 = v256 / v260;
      v310 = v255 / v260;
      v311 = v258 / v260;
      v261 = sqrt(v292);
      v293 = v309 * v309 + v293;
      if ( v292 < 0.0 )
        sqrt(v292);
      v301 = v261 * v291;
      v262 = v303 * v303 + v295 * v295 + v295 * v295;
      v302 = sqrt(v262);
      if ( v262 < 0.0 )
        sqrt(v262);
      v315 = v282 * fabs(v304);
      v300 = v302 / v313;
      v286 = v315 / (v291 * v302);
      v290 = 1.0 / v301;
      v305 = a3 * v291 * v307 / v313 + a4;
      if ( *a19 >= a7 )
        *a10 = 7;
      if ( v290 + 1.0 <= 1.0 )
        *a10 = 6;
      if ( v286 + 1.0 <= 1.0 )
        *a10 = 5;
      if ( v302 / v313 / (v291 * v307 / v313 + 1.0) + 1.0 <= 1.0 )
        *a10 = 4;
      if ( v314 >= v290 )
        *a10 = 3;
      if ( a3 < v286 )
      {
        if ( v305 < v300 )
        {
          if ( *a10 <= 0 )
            goto LABEL_231;
          goto LABEL_211;
        }
LABEL_210:
        *a10 = 1;
        goto LABEL_211;
      }
      *a10 = 2;
      if ( v305 >= v300 )
        goto LABEL_210;
LABEL_211:
      if ( a3 > a15 )
      {
        v263 = v315 / a16;
        if ( v315 / a16 <= 0.1 )
        {
          v264 = a3;
          v266 = a3;
          v265 = a3;
        }
        else if ( v263 > 0.5 )
        {
          if ( a8 )
          {
            printf("\n                                ");
            puts("                                ");
            v277 = *a19;
            v278 = log10(a3);
            printf(" %5.1f%7d%7.3f", v278, v277, v315 / a16);
          }
          *a10 = 0;
          v265 = a3;
          v264 = 0.1 * a3;
          v263 = v315 / a16;
          v266 = 0.1 * a3;
        }
        else
        {
          v264 = a3;
          v265 = a3;
          v266 = 0.1 * a3;
        }
        a3 = v264;
        *a20 = v265;
        a20[1] = v266;
        a20[2] = v263;
      }
      v267 = 1;
      v72 = *a19;
      if ( *a19 > 10 )
        v267 = (int)v316 <= 40;
      if ( v72 >= a7 - 10 )
        v267 = 1;
      if ( v72 == 10 * (v72 / 10) )
        v267 = 1;
      if ( v314 + v314 >= v290 )
        v267 = 1;
      if ( a3 * 10.0 < v286 && 10.0 * v305 < v300 && !*a10 && !v267 )
        goto LABEL_55;
      if ( a8 )
      {
        v272 = (double *)CoinDenseVector<double>::operator[](a9, 0);
        sprintf(s, "   %6d %12.5e %10.3e", *a19, *v272, v302);
        sprintf(v329, "  %8.1e %8.1e", v300, v286);
        sprintf(v330, " %8.1e %8.1e", v291, v301);
        printf("%s%s%s\n", s, v329, v330);
      }
      if ( *a10 > 0 )
        goto LABEL_232;
LABEL_231:
      v72 = *a19;
      if ( *a19 >= a7 )
        goto LABEL_232;
    }
    v84 = 0;
LABEL_63:
    v85 = v84;
    v86 = v84 + 1;
    v76[v85] = v76[v85] * v75.m128d_f64[0];
    if ( v73 > v86 )
      v76[v86] = v75.m128d_f64[0] * v76[v86];
    goto LABEL_65;
  }
LABEL_232:
  if ( a8 )
  {
    puts("\n LSQR finished");
    puts(&aTheExactSoluti[80 * *a10]);
    sprintf(s, "istop  =%8d     itn    =%8d", *a10, *a19);
    sprintf(v329, "anorm  =%8.1e   acond  =%8.1e", v291, v301);
    sprintf(v330, "rnorm  =%8.1e   arnorm =%8.1e", v302, v315);
    sprintf(v331, "bnorm  =%8.1e   xnorm  =%8.1e", v313, v307);
    printf("%s %s\n", s, v329);
    printf("%s %s\n", v330, v331);
  }
LABEL_51:
  CoinDenseVector<double>::~CoinDenseVector(&v324);
  CoinDenseVector<double>::~CoinDenseVector(&v322);
  return CoinDenseVector<double>::~CoinDenseVector(&v320);
}

