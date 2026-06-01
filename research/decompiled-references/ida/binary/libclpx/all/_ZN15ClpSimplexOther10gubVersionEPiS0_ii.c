ClpModel *__fastcall ClpSimplexOther::gubVersion(
        ClpSimplexOther *this,
        __int64 a2,
        int *a3,
        int a4,
        int a5,
        __m128i si128,
        double a7)
{
  unsigned __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // rax
  double *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(ClpPackedMatrix *); // rax
  __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // edx
  double v24; // xmm1_8
  char *v25; // rdi
  double *v26; // r9
  __int64 v27; // rax
  double v28; // xmm0_8
  int v29; // eax
  ClpModel *v30; // r11
  int v31; // esi
  int v32; // eax
  int v33; // r13d
  double v34; // xmm3_8
  __int64 v35; // r8
  __int64 v36; // rax
  int v37; // edi
  __int64 v38; // rdx
  int v39; // ecx
  CoinMessageHandler *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // esi
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // r13
  unsigned __int64 v52; // rax
  double *v53; // rcx
  char *v54; // r9
  char *v55; // r12
  ClpModel *v56; // r8
  int v57; // r13d
  int v58; // edx
  char *v59; // rax
  unsigned __int64 v60; // rax
  int *v61; // r13
  int *v62; // r12
  double *v63; // r8
  int v64; // ebx
  int v65; // edx
  int *v66; // rax
  const void *v67; // rbx
  const void *v68; // rbx
  char *v69; // r12
  CoinPackedMatrix *v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rdi
  int v74; // r11d
  double v75; // xmm3_8
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  char *v81; // r9
  double *v82; // r10
  __int64 v83; // rax
  double v84; // xmm0_8
  unsigned __int64 *v85; // rax
  double *v86; // r13
  unsigned __int64 v87; // rbx
  __int64 v88; // xmm5_8
  __int64 v89; // r8
  __m128i v90; // xmm4
  bool v91; // zf
  __int64 v92; // rax
  int v93; // edx
  double v94; // xmm6_8
  double v95; // xmm0_8
  double v96; // xmm1_8
  double *v97; // r9
  char *v98; // rsi
  __int64 v99; // rax
  __int64 v100; // xmm8_8
  double v101; // xmm0_8
  double v102; // xmm1_8
  double v103; // xmm0_8
  double v104; // xmm1_8
  double v105; // xmm1_8
  __int64 v106; // rdi
  __int64 (*v107)(void); // rax
  _QWORD *v108; // rax
  __int64 v109; // rbx
  __int64 v110; // r10
  __int64 v111; // r9
  __int64 v112; // r11
  __int64 v113; // r8
  __int64 v114; // rax
  int v115; // edx
  __int64 v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rdx
  int v125; // ecx
  unsigned __int64 v126; // rax
  __int64 v127; // rdx
  int v128; // r8d
  int v129; // ebx
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  int *v132; // rax
  int *v133; // r10
  __int64 v134; // rax
  int v135; // ecx
  int v136; // edi
  int v137; // edi
  int v138; // edx
  int v139; // ebx
  double *v140; // rbx
  unsigned __int64 v141; // rdx
  __int64 (__fastcall ***v142)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rdx
  char *v146; // rdi
  __int64 v147; // rdx
  int *v148; // rax
  int v149; // edx
  char *v150; // r9
  __int64 v151; // rcx
  __int64 v152; // rax
  int v153; // r9d
  unsigned __int64 v154; // rcx
  int v155; // eax
  __int64 v156; // rax
  __int64 v157; // rax
  int *v158; // r15
  _DWORD *v159; // rax
  __int64 v160; // rdi
  int v161; // esi
  __int64 v162; // rdx
  char *v163; // r10
  __int64 v164; // r11
  __int64 v165; // r8
  int v166; // edi
  __int64 v167; // rsi
  int v168; // edi
  int v169; // edi
  __int64 v170; // rcx
  _DWORD *v171; // rax
  int v172; // eax
  CoinMessageHandler *v174; // rdi
  CoinMessageHandler *v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  __int64 v181; // r8
  int *v182; // r10
  _DWORD *v183; // r8
  __int64 v184; // rcx
  int v185; // edx
  int v186; // r11d
  __int64 v187; // rdi
  __int64 v188; // rax
  char *v189; // r9
  int *v190; // r13
  __int64 v191; // rcx
  int *v192; // rsi
  int v193; // ecx
  int v194; // ecx
  unsigned __int64 v195; // rdi
  int v196; // r14d
  int v197; // ecx
  __int64 v198; // rax
  double v199; // xmm0_8
  double *v200; // rdx
  double v201; // xmm7_8
  CoinMessageHandler *v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  __int64 v207; // rax
  ClpDynamicMatrix *v208; // r13
  int v209; // edx
  int v210; // ecx
  CoinMessageHandler *v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 v216; // rax
  double *v218; // rax
  __int64 v219; // rdx
  double *v220; // rax
  double *v221; // rax
  __int64 v222; // rcx
  double *v223; // rax
  double *v224; // rax
  __int64 v225; // rdx
  double *v226; // rax
  int *v227; // r9
  int *v228; // r8
  int *v229; // rax
  int v230; // ebx
  int v231; // edx
  int *v232; // rax
  int v233; // esi
  int v234; // edx
  int *v235; // rax
  int *v236; // r10
  ClpModel *v237; // r8
  int v238; // r13d
  int v239; // edx
  char *v240; // rax
  int v241; // esi
  int v242; // edx
  char *v243; // rax
  int *v244; // rax
  __int64 v245; // [rsp+0h] [rbp-220h]
  __int64 v246; // [rsp+0h] [rbp-220h]
  __int64 v247; // [rsp+0h] [rbp-220h]
  __int64 v248; // [rsp+8h] [rbp-218h]
  __m128i v249; // [rsp+10h] [rbp-210h]
  __int64 v250; // [rsp+28h] [rbp-1F8h]
  size_t v251; // [rsp+38h] [rbp-1E8h]
  int v252; // [rsp+40h] [rbp-1E0h]
  __int64 v253; // [rsp+40h] [rbp-1E0h]
  CoinMessages *v254; // [rsp+48h] [rbp-1D8h]
  int v255; // [rsp+50h] [rbp-1D0h]
  __int64 v256; // [rsp+50h] [rbp-1D0h]
  CoinPackedMatrix *v257; // [rsp+58h] [rbp-1C8h]
  CoinPackedMatrix *v258; // [rsp+58h] [rbp-1C8h]
  size_t n; // [rsp+60h] [rbp-1C0h]
  int na; // [rsp+60h] [rbp-1C0h]
  unsigned int v263; // [rsp+74h] [rbp-1ACh]
  int v264; // [rsp+78h] [rbp-1A8h]
  __int64 v265; // [rsp+78h] [rbp-1A8h]
  __int64 v266; // [rsp+80h] [rbp-1A0h]
  __int64 v267; // [rsp+80h] [rbp-1A0h]
  double *v269; // [rsp+90h] [rbp-190h]
  int *v270; // [rsp+90h] [rbp-190h]
  int *v271; // [rsp+90h] [rbp-190h]
  void *v272; // [rsp+90h] [rbp-190h]
  int v274; // [rsp+A0h] [rbp-180h]
  _DWORD *v275; // [rsp+A0h] [rbp-180h]
  ClpModel *v276; // [rsp+A8h] [rbp-178h]
  ClpModel *v277; // [rsp+A8h] [rbp-178h]
  ClpModel *v278; // [rsp+A8h] [rbp-178h]
  ClpModel *v279; // [rsp+A8h] [rbp-178h]
  int v280; // [rsp+B0h] [rbp-170h]
  int v281; // [rsp+B4h] [rbp-16Ch]
  int v282; // [rsp+B4h] [rbp-16Ch]
  int v283; // [rsp+B4h] [rbp-16Ch]
  __int64 v284; // [rsp+B8h] [rbp-168h]
  char *v285; // [rsp+B8h] [rbp-168h]
  char *v286; // [rsp+B8h] [rbp-168h]
  int *v287; // [rsp+B8h] [rbp-168h]
  char *v288; // [rsp+B8h] [rbp-168h]
  double *v289; // [rsp+C0h] [rbp-160h]
  int v290; // [rsp+C0h] [rbp-160h]
  double *v291; // [rsp+C8h] [rbp-158h]
  double *v292; // [rsp+C8h] [rbp-158h]
  double *v293; // [rsp+C8h] [rbp-158h]
  int v294; // [rsp+D0h] [rbp-150h]
  char *v295; // [rsp+D8h] [rbp-148h]
  _DWORD *v296; // [rsp+D8h] [rbp-148h]
  char *src; // [rsp+E0h] [rbp-140h]
  int v298; // [rsp+E8h] [rbp-138h]
  double *v299; // [rsp+E8h] [rbp-138h]
  double *v300; // [rsp+E8h] [rbp-138h]
  double *v301; // [rsp+E8h] [rbp-138h]
  double *v302; // [rsp+E8h] [rbp-138h]
  double *v303; // [rsp+E8h] [rbp-138h]
  double *v304; // [rsp+E8h] [rbp-138h]
  _DWORD *v305; // [rsp+F0h] [rbp-130h]
  _DWORD *v306; // [rsp+F8h] [rbp-128h]
  int v307; // [rsp+F8h] [rbp-128h]
  _DWORD *v308; // [rsp+F8h] [rbp-128h]
  double *v309; // [rsp+100h] [rbp-120h]
  double *v310; // [rsp+100h] [rbp-120h]
  int *v311; // [rsp+108h] [rbp-118h]
  double *v312; // [rsp+108h] [rbp-118h]
  char v313[8]; // [rsp+118h] [rbp-108h] BYREF
  _BYTE v314[32]; // [rsp+120h] [rbp-100h] BYREF
  double *v315; // [rsp+140h] [rbp-E0h]
  char *v316; // [rsp+148h] [rbp-D8h]
  double *v317; // [rsp+150h] [rbp-D0h]
  _DWORD *v318; // [rsp+158h] [rbp-C8h]
  char s[16]; // [rsp+180h] [rbp-A0h] BYREF
  __m128 v320; // [rsp+190h] [rbp-90h]
  char v321[128]; // [rsp+1A0h] [rbp-80h] BYREF

  src = (char *)a2;
  v274 = *((_DWORD *)this + 26);
  v7 = *((int *)this + 27);
  v280 = *((_DWORD *)this + 27);
  if ( v7 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v8 = *((_DWORD *)this + 27);
  v9 = operator new[](4 * v7);
  v10 = *((double **)this + 22);
  v11 = (_DWORD *)v9;
  v12 = *((_QWORD *)this + 23);
  if ( v8 <= 0 )
  {
    v252 = 0;
  }
  else
  {
    v13 = 0;
    a7 = 0.0;
    a2 = 4294967293LL;
    v14 = 0;
    v15 = (unsigned int)(v280 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        *(double *)si128.m128i_i64 = v10[v14];
        if ( *(double *)si128.m128i_i64 != *(double *)(v12 + 8 * v14) )
          break;
        v11[v14++] = -2;
        ++v13;
        if ( v15 == v14 )
          goto LABEL_9;
      }
      v16 = -1;
      if ( *(double *)si128.m128i_i64 < 0.0 )
        v16 = -3;
      v11[v14++] = v16;
    }
    while ( v15 != v14 );
LABEL_9:
    v252 = v13;
  }
  v257 = nullptr;
  v17 = *((_QWORD *)this + 24);
  if ( v17 )
  {
    v18 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v17;
    if ( v18 == ClpPackedMatrix::getPackedMatrix )
      v257 = *(CoinPackedMatrix **)(v17 + 88);
    else
      v257 = (CoinPackedMatrix *)((__int64 (__fastcall *)(__int64, __int64, double, double))v18)(
                                   v17,
                                   a2,
                                   *(double *)si128.m128i_i64,
                                   a7);
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v314, v257);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v314);
  v295 = v316;
  v306 = v318;
  v309 = v317;
  v291 = v315;
  if ( (unsigned __int64)v274 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v251 = 4LL * v274;
  v305 = (_DWORD *)operator new[](v251);
  n = 8LL * v274;
  v264 = v280 + 1;
  v266 = *((_QWORD *)this + 18);
  v269 = *((double **)this + 19);
  v19 = operator new[](n);
  v289 = (double *)v19;
  if ( v274 <= 0 )
  {
    v29 = v274 - 1;
    v263 = v274 - 1;
  }
  else
  {
    v20 = v19;
    v21 = 0;
    v263 = v274 - 1;
    do
    {
      v22 = *(int *)((char *)v309 + v21);
      v23 = v306[v21 / 4];
      if ( (int)v22 >= (int)v22 + v23 )
      {
        v24 = 0.0;
      }
      else
      {
        v24 = 0.0;
        v25 = &v295[4 * v22];
        v26 = &v291[v22];
        v27 = 0;
        do
        {
          v28 = v10[*(int *)&v25[4 * v27]];
          if ( v28 != 0.0 )
            v24 = v24 + v28 * v26[v27];
          ++v27;
        }
        while ( (unsigned int)(v23 - 1) + 1LL != v27 );
      }
      *(double *)si128.m128i_i64 = v269[v21 / 4] - v24;
      *(_QWORD *)(v20 + 2 * v21) = si128.m128i_i64[0];
      v21 += 4LL;
    }
    while ( 4LL * (unsigned int)(v274 - 1) + 4 != v21 );
    v29 = v274 - 1;
  }
  if ( v29 < 0 )
  {
    v255 = -1;
    v298 = 0;
    v281 = v274;
  }
  else
  {
    v30 = (ClpModel *)v29;
    v255 = -1;
    v298 = 0;
    v276 = (ClpModel *)(v29 - 1LL - (unsigned int)v29);
    v281 = v274;
    do
    {
      v31 = *((_DWORD *)v309 + (_QWORD)v30);
      v32 = v306[(_QWORD)v30];
      v33 = v31 + v32;
      if ( v31 >= v31 + v32 )
      {
        v34 = 0.0;
LABEL_35:
        *(_DWORD *)&src[4 * --v281] = (_DWORD)v30;
        v305[(_QWORD)v30] = -2;
        if ( v34 > v269[(_QWORD)v30] + 0.0001
          || (*(double *)si128.m128i_i64 = *(double *)(v266 + 8LL * (_QWORD)v30) - 0.0001,
              *(double *)si128.m128i_i64 > v34) )
        {
          fwrite("******** No infeasible empty rows - please!\n", 1u, 0x2Cu, stderr);
          abort();
        }
      }
      else
      {
        v34 = 0.0;
        v35 = (unsigned int)(v32 - 1) + 1LL;
        v284 = 4LL * v31;
        v36 = 0;
        v37 = 0;
        do
        {
          while ( 1 )
          {
            v38 = *(int *)&v295[4 * v36 + v284];
            *(double *)si128.m128i_i64 = v291[v31 + v36];
            v39 = v11[v38];
            if ( v39 != -2 )
              break;
            *(double *)si128.m128i_i64 = *(double *)si128.m128i_i64 * v10[v38];
            ++v36;
            v34 = v34 + *(double *)si128.m128i_i64;
            if ( v35 == v36 )
              goto LABEL_34;
          }
          if ( *(double *)si128.m128i_i64 != 1.0
            || v39 == -3
            || (*(double *)si128.m128i_i64 = *(double *)(v12 + 8 * v38) - v10[v38],
                v289[(_QWORD)v30] - 1.0e-12 > *(double *)si128.m128i_i64)
            || (++v37, v39 >= 0) )
          {
            *(_DWORD *)&src[4 * v298] = (_DWORD)v30;
            v305[(_QWORD)v30] = -1;
            ++v298;
            goto LABEL_39;
          }
          ++v36;
        }
        while ( v35 != v36 );
LABEL_34:
        if ( !v37 )
          goto LABEL_35;
        if ( v37 < v264 )
        {
          v264 = v37;
          v255 = (int)v30;
        }
        v170 = v31 + 1;
        do
        {
          while ( 1 )
          {
            v171 = &v11[*(int *)&v295[4 * v170 + v284 - 4LL * (v31 + 1)]];
            if ( *v171 == -2 )
              break;
            *v171 = (_DWORD)v30;
            v172 = v170++;
            v33 = *((_DWORD *)v309 + (_QWORD)v30) + v306[(_QWORD)v30];
            if ( v33 <= v172 )
            {
              v305[(_QWORD)v30] = 0;
              goto LABEL_39;
            }
          }
        }
        while ( v33 > (int)v170++ );
        v305[(_QWORD)v30] = 0;
      }
LABEL_39:
      v30 = (ClpModel *)((char *)v30 - 1);
    }
    while ( v276 != v30 );
  }
  operator delete[](v289);
  v282 = v281 - v298;
  if ( v282 < a4 )
  {
    operator delete[](v11);
    operator delete[](v305);
    v278 = nullptr;
    goto LABEL_209;
  }
  sprintf(s, "%d gub rows", v282);
  v254 = (ClpSimplexOther *)((char *)this + 416);
  v40 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                93,
                                (ClpSimplexOther *)((char *)this + 416));
  v45 = CoinMessageHandler::operator<<(v40, (__int64)s, v41, v42, v43, v44, v245);
  CoinMessageHandler::operator<<(v45, 0, *(double *)si128.m128i_i64);
  if ( v280 <= 0 )
    goto LABEL_185;
  v46 = 0;
  v47 = 0;
  do
  {
    v48 = v11[v47];
    if ( v48 < 0 && v48 != -2 )
    {
      v49 = v46++;
      a3[v49] = v47;
    }
    ++v47;
  }
  while ( (unsigned int)(v280 - 1) + 1LL != v47 );
  v290 = v46;
  if ( v46 )
  {
    v50 = v46;
    v311 = &a3[v50];
    v294 = v298;
  }
  else
  {
LABEL_185:
    strcpy(v321, " non-empty");
    *(__m128i *)s = _mm_load_si128((const __m128i *)&xmmword_2924E0);
    v174 = *((CoinMessageHandler **)this + 43);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2924F0);
    v320 = (__m128)si128;
    v175 = (CoinMessageHandler *)CoinMessageHandler::message(v174, 93, v254);
    v180 = CoinMessageHandler::operator<<(v175, (__int64)s, v176, v177, v178, v179, v246);
    CoinMessageHandler::operator<<(v180, 0, *(double *)si128.m128i_i64);
    v305[v255] = -1;
    v181 = v255;
    *(_DWORD *)&src[4 * v298] = v255;
    v294 = v298 + 1;
    v182 = (int *)((char *)v309 + v181 * 4);
    v183 = &v306[v181];
    v184 = *v182;
    v185 = v184 + *v183;
    if ( v185 <= (int)v184 )
    {
      v50 = 0;
      v290 = 0;
      v311 = a3;
    }
    else
    {
      v186 = 0;
      v187 = 0;
      v188 = (int)v184 + 1;
      v189 = &v295[4 * (v184 - v188)];
      do
      {
        while ( 1 )
        {
          v50 = v187;
          v190 = &a3[v187];
          v191 = *(int *)&v189[4 * v188];
          v192 = &v11[v191];
          if ( *v192 < 0 )
            break;
          *v190 = v191;
          *v192 = -4;
          ++v50;
          v185 = *v182 + *v183;
          v193 = v188;
          ++v186;
          ++v188;
          v190 = &a3[v50];
          if ( v193 >= v185 )
            goto LABEL_192;
          v187 = v186;
        }
        v194 = v188++;
      }
      while ( v185 > v194 );
LABEL_192:
      v290 = v186;
      v311 = v190;
    }
  }
  v51 = 4LL * v294;
  if ( &src[v51] != src )
  {
    _BitScanReverse64(&v52, v51 >> 2);
    sub_15C710(src, &src[v51], 2 * (63LL - (int)(v52 ^ 0x3F)));
    v53 = (double *)(src + 4);
    v54 = &src[v51];
    v55 = src + 4;
    if ( v51 > 64 )
    {
      v236 = v311;
      v237 = (ClpModel *)(src + 64);
      do
      {
        while ( 1 )
        {
          v238 = *(_DWORD *)v55;
          if ( *(_DWORD *)v55 < *(_DWORD *)src )
            break;
          v239 = *((_DWORD *)v55 - 1);
          v240 = v55 - 4;
          if ( v238 < v239 )
          {
            while ( 1 )
            {
              *((_DWORD *)v240 + 1) = v239;
              v239 = *((_DWORD *)v240 - 1);
              if ( v238 >= v239 )
                break;
              v240 -= 4;
            }
          }
          else
          {
            v240 = v55;
          }
          v55 += 4;
          *(_DWORD *)v240 = v238;
          if ( v237 == (ClpModel *)v55 )
            goto LABEL_270;
        }
        if ( v55 != src )
        {
          v271 = v236;
          v279 = v237;
          v288 = v54;
          v304 = v53;
          memmove(v53, src, v55 - src);
          v236 = v271;
          v237 = v279;
          v54 = v288;
          v53 = v304;
        }
        v55 += 4;
        *(_DWORD *)src = v238;
      }
      while ( v237 != (ClpModel *)v55 );
LABEL_270:
      v311 = v236;
      if ( v54 != v55 )
      {
        do
        {
          v241 = *(_DWORD *)v55;
          v242 = *((_DWORD *)v55 - 1);
          v243 = v55 - 4;
          if ( *(_DWORD *)v55 < v242 )
          {
            while ( 1 )
            {
              *((_DWORD *)v243 + 1) = v242;
              v242 = *((_DWORD *)v243 - 1);
              if ( v241 >= v242 )
                break;
              v243 -= 4;
            }
          }
          else
          {
            v243 = v55;
          }
          v55 += 4;
          *(_DWORD *)v243 = v241;
        }
        while ( v54 != v55 );
        v311 = v236;
      }
    }
    else if ( &src[v51] != (char *)v53 )
    {
      v56 = (ClpModel *)v311;
      do
      {
        while ( 1 )
        {
          v57 = *(_DWORD *)v55;
          if ( *(_DWORD *)v55 < *(_DWORD *)src )
            break;
          v58 = *((_DWORD *)v55 - 1);
          v59 = v55 - 4;
          if ( v57 < v58 )
          {
            while ( 1 )
            {
              *((_DWORD *)v59 + 1) = v58;
              v58 = *((_DWORD *)v59 - 1);
              if ( v57 >= v58 )
                break;
              v59 -= 4;
            }
          }
          else
          {
            v59 = v55;
          }
          v55 += 4;
          *(_DWORD *)v59 = v57;
          if ( v54 == v55 )
            goto LABEL_62;
        }
        if ( v55 != src )
        {
          v277 = v56;
          v285 = v54;
          v299 = v53;
          memmove(v53, src, v55 - src);
          v56 = v277;
          v54 = v285;
          v53 = v299;
        }
        v55 += 4;
        *(_DWORD *)src = v57;
      }
      while ( v54 != v55 );
LABEL_62:
      v311 = (int *)v56;
    }
  }
  if ( a3 == v311 )
    goto LABEL_78;
  _BitScanReverse64(&v60, (v50 * 4) >> 2);
  sub_15C710((char *)a3, (char *)v311, 2 * (63LL - (int)(v60 ^ 0x3F)));
  v61 = a3 + 1;
  v62 = a3 + 1;
  if ( v50 <= 16 )
  {
    if ( v311 != v61 )
    {
      v63 = v10;
      do
      {
        while ( 1 )
        {
          v64 = *v62;
          if ( *v62 < *a3 )
            break;
          v65 = *(v62 - 1);
          v66 = v62 - 1;
          if ( v64 < v65 )
          {
            while ( 1 )
            {
              v66[1] = v65;
              v65 = *(v66 - 1);
              if ( v64 >= v65 )
                break;
              --v66;
            }
            *v66 = v64;
          }
          else
          {
            *v62 = v64;
          }
          if ( ++v62 == v311 )
            goto LABEL_77;
        }
        if ( v62 != a3 )
        {
          v300 = v63;
          memmove(a3 + 1, a3, (char *)v62 - (char *)a3);
          v63 = v300;
        }
        ++v62;
        *a3 = v64;
      }
      while ( v62 != v311 );
LABEL_77:
      v10 = v63;
    }
    goto LABEL_78;
  }
  v227 = v311;
  v228 = a3 + 16;
  do
  {
    while ( 1 )
    {
      v229 = a3;
      v230 = *v62;
      if ( *v62 < *a3 )
      {
        if ( v62 != a3 )
        {
          v287 = v227;
          v303 = (double *)v228;
          memmove(v61, a3, (char *)v62 - (char *)a3);
          v227 = v287;
          v228 = (int *)v303;
          v229 = a3;
        }
        goto LABEL_246;
      }
      v231 = *(v62 - 1);
      v232 = v62 - 1;
      if ( v230 < v231 )
        break;
      v229 = v62;
LABEL_246:
      ++v62;
      *v229 = v230;
      if ( v228 == v62 )
        goto LABEL_253;
    }
    while ( 1 )
    {
      v232[1] = v231;
      v231 = *(v232 - 1);
      if ( v230 >= v231 )
        break;
      --v232;
    }
    ++v62;
    *v232 = v230;
  }
  while ( v228 != v62 );
LABEL_253:
  while ( v62 != v227 )
  {
    while ( 1 )
    {
      v233 = *v62;
      v234 = *(v62 - 1);
      v235 = v62 - 1;
      if ( *v62 < v234 )
        break;
      v244 = v62++;
      *v244 = v233;
      if ( v62 == v227 )
        goto LABEL_78;
    }
    while ( 1 )
    {
      v235[1] = v234;
      v234 = *(v235 - 1);
      if ( v233 >= v234 )
        break;
      --v235;
    }
    ++v62;
    *v235 = v233;
  }
LABEL_78:
  v67 = *((const void **)this + 18);
  if ( v67 )
  {
    v312 = (double *)operator new[](n);
    memcpy(v312, v67, n);
    v68 = *((const void **)this + 19);
    if ( v68 )
      goto LABEL_80;
LABEL_302:
    v69 = nullptr;
  }
  else
  {
    v68 = *((const void **)this + 19);
    v312 = nullptr;
    if ( !v68 )
      goto LABEL_302;
LABEL_80:
    v69 = (char *)operator new[](n);
    memcpy(v69, v68, n);
  }
  v70 = v257;
  v258 = *((CoinPackedMatrix **)v257 + 5);
  v267 = *((_QWORD *)v70 + 7);
  v265 = *((_QWORD *)v70 + 6);
  v256 = *((_QWORD *)v70 + 4);
  v71 = v280 - v252;
  if ( v280 > 0 )
  {
    v72 = 0;
    v73 = (unsigned int)(v280 - 1) + 1LL;
    do
    {
      while ( v11[v72] != -2 )
      {
LABEL_83:
        if ( v73 == ++v72 )
          goto LABEL_93;
      }
      v74 = v71 + 1;
      v75 = v10[v72];
      a3[v71] = v72;
      v76 = *(int *)(v265 + 4 * v72);
      v77 = *(_DWORD *)(v267 + 4 * v72);
      if ( (int)v76 >= (int)v76 + v77 )
      {
        v71 = v74;
        goto LABEL_83;
      }
      v78 = (unsigned int)(v77 - 1);
      v79 = 0;
      v80 = v78 + 1;
      v81 = (char *)v258 + 4 * v76;
      v82 = &v291[v76];
      do
      {
        v83 = *(int *)&v81[4 * v79];
        v84 = v312[v83];
        if ( v84 > -1.0e20 )
          v312[*(int *)&v81[4 * v79]] = v84 - v82[v79] * v75;
        v85 = (unsigned __int64 *)&v69[v83 * 8];
        si128.m128i_i64[0] = *v85;
        if ( *(double *)v85 < 1.0e20 )
        {
          *(double *)si128.m128i_i64 = *(double *)si128.m128i_i64 - v82[v79] * v75;
          *v85 = si128.m128i_i64[0];
        }
        ++v79;
      }
      while ( v80 != v79 );
      ++v72;
      v71 = v74;
    }
    while ( v73 != v72 );
  }
LABEL_93:
  v278 = (ClpModel *)operator new(0x6F0u);
  ClpSimplex::ClpSimplex(v278, this, v294, (const int *)src, v290, a3, 1, 1, 0);
  v86 = (double *)operator new[](n);
  if ( v274 > 0 )
  {
    v87 = 0;
    v88 = 0x46293E5939A08CEALL;
    v89 = 4LL * v263 + 4;
    v90 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
    do
    {
      while ( 1 )
      {
        v91 = v305[v87 / 4] == -1;
        v86[v87 / 4] = 1.0;
        if ( v91 )
        {
          v92 = *(int *)((char *)v309 + v87);
          v93 = v306[v87 / 4];
          if ( (int)v92 >= (int)v92 + v93 )
          {
            si128.m128i_i64[0] = 0x3FF0000000000000LL;
            v94 = 1.0e30;
          }
          else
          {
            v94 = *(double *)&v88;
            v95 = *(double *)&v88;
            v96 = 1.0e-30;
            v97 = &v291[v92];
            v98 = &v295[4 * v92];
            v99 = 0;
            do
            {
              if ( v11[*(int *)&v98[4 * v99]] != -2 )
              {
                v100 = *(_QWORD *)&v97[v99] & v90.m128i_i64[0];
                v95 = fmin(*(double *)&v100, v95);
                v96 = fmax(*(double *)&v100, v96);
              }
              ++v99;
            }
            while ( (unsigned int)(v93 - 1) + 1LL != v99 );
            v101 = v95 * v96;
            v102 = sqrt(v101);
            if ( v101 < 0.0 )
            {
              v248 = v89;
              v250 = v88;
              v249 = v90;
              v272 = (void *)v88;
              sqrt(v101);
              v89 = v248;
              v90 = v249;
              v103 = 1.0 / v102;
              v88 = v250;
              v94 = *(double *)&v272;
            }
            else
            {
              v103 = 1.0 / v102;
            }
            si128.m128i_i64[0] = fmax(0.001, v103);
          }
          v86[v87 / 4] = *(double *)si128.m128i_i64;
          v104 = v312[v87 / 4];
          if ( v104 > -1.0e30 )
            v312[v87 / 4] = v104 * *(double *)si128.m128i_i64;
          v105 = *(double *)&v69[2 * v87];
          if ( v94 > v105 )
            break;
        }
        v87 += 4LL;
        if ( v89 == v87 )
          goto LABEL_109;
      }
      *(double *)si128.m128i_i64 = *(double *)si128.m128i_i64 * v105;
      *(_QWORD *)&v69[2 * v87] = si128.m128i_i64[0];
      v87 += 4LL;
    }
    while ( v89 != v87 );
  }
LABEL_109:
  v106 = *((_QWORD *)v278 + 24);
  if ( !v106 )
    BUG();
  v107 = **(__int64 (***)(void))v106;
  if ( (char *)v107 == (char *)ClpPackedMatrix::getPackedMatrix )
    v108 = *(_QWORD **)(v106 + 88);
  else
    v108 = (_QWORD *)v107();
  v109 = v108[5];
  v110 = v108[7];
  v111 = v108[6];
  v112 = v108[4];
  if ( v290 )
  {
    v113 = 0;
    do
    {
      v114 = *(int *)(v111 + v113);
      v115 = *(_DWORD *)(v110 + v113);
      if ( (int)v114 < (int)v114 + v115 )
      {
        v116 = (unsigned int)(v115 - 1);
        v117 = v109 + 4 * v114;
        v118 = v112 + 8 * v114;
        v119 = 0;
        v120 = v116 + 1;
        do
        {
          *(double *)si128.m128i_i64 = *(double *)(v118 + 8 * v119) * v86[*(int *)&src[4 * *(int *)(v117 + 4 * v119)]];
          *(_QWORD *)(v118 + 8 * v119++) = si128.m128i_i64[0];
        }
        while ( v120 != v119 );
      }
      v113 += 4;
    }
    while ( 4LL * (unsigned int)(v290 - 1) + 4 != v113 );
  }
  v121 = *((_QWORD *)v278 + 18);
  v122 = *((_QWORD *)v278 + 19);
  if ( v294 )
  {
    v123 = 0;
    do
    {
      v124 = *(int *)&src[4 * v123];
      *(double *)(v121 + 8 * v123) = v312[v124];
      si128.m128i_i64[0] = *(_QWORD *)&v69[8 * v124];
      *(_QWORD *)(v122 + 8 * v123++) = si128.m128i_i64[0];
    }
    while ( (unsigned int)(v294 - 1) + 1LL != v123 );
  }
  if ( (unsigned __int64)(v274 + 1) > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v286 = (char *)operator new[](v251 + 4);
  memset(v286, 0, v251);
  if ( v280 <= 0 )
  {
    v307 = 0;
  }
  else
  {
    v125 = 0;
    v126 = 0;
    do
    {
      v127 = (int)v11[v126 / 4];
      if ( (int)v127 >= 0 )
      {
        v128 = *(_DWORD *)(v267 + v126);
        ++*(_DWORD *)&v286[4 * v127];
        v125 = v125 + v128 - 1;
      }
      v126 += 4LL;
    }
    while ( 4LL * (unsigned int)(v280 - 1) + 4 != v126 );
    v307 = v125;
  }
  if ( v274 <= 0 )
  {
    v129 = 0;
  }
  else
  {
    v129 = 0;
    v130 = 0;
    do
    {
      if ( (int)v305[v130 / 4] >= 0 )
      {
        si128.m128i_i64[0] = *(_QWORD *)&v69[2 * v130];
        if ( *(double *)si128.m128i_i64 > v312[v130 / 4] )
        {
          ++*(_DWORD *)&v286[v130];
          ++v129;
        }
      }
      v130 += 4LL;
    }
    while ( 4LL * v263 + 4 != v130 );
  }
  v131 = v282 + 1;
  if ( v131 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v132 = (int *)operator new[](4 * v131);
  v270 = v132;
  *v132 = 0;
  if ( v274 <= 0 )
  {
    na = 0;
  }
  else
  {
    v133 = v132;
    v134 = 0;
    v135 = 0;
    do
    {
      if ( (int)v305[v134] >= 0 )
      {
        v136 = *(_DWORD *)&v286[4 * v134];
        v305[v134] = v135;
        v137 = v133[v135] + v136;
        *(_DWORD *)&v286[4 * v135] = 0;
        v133[v135 + 1] = v137;
        v312[v135] = v312[v134];
        si128.m128i_i64[0] = *(_QWORD *)&v69[8 * v134];
        *(_QWORD *)&v69[8 * v135] = si128.m128i_i64[0];
        v138 = v135 + v294;
        ++v135;
        *(_DWORD *)&src[4 * v138] = v134;
      }
      ++v134;
    }
    while ( v263 + 1LL != v134 );
    na = v135;
  }
  v139 = v280 - v290 - v252 + v129;
  v283 = v139;
  if ( (unsigned __int64)v139 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v292 = (double *)(8LL * v139);
  v310 = (double *)operator new[]((unsigned __int64)v292);
  if ( v139 )
  {
    if ( v139 / 8 <= 0 )
    {
      v226 = v310;
    }
    else
    {
      v224 = v310;
      v225 = (unsigned int)(v139 / 8 - 1);
      do
      {
        *v224 = 0.0;
        v224[1] = 0.0;
        v224 += 8;
        *(v224 - 6) = 0.0;
        *(v224 - 5) = 0.0;
        *(v224 - 4) = 0.0;
        *(v224 - 3) = 0.0;
        *(v224 - 2) = 0.0;
        *(v224 - 1) = 0.0;
      }
      while ( v224 != &v310[8 * v225 + 8] );
      v226 = &v310[8 * (int)v225 + 8];
    }
    switch ( v139 % 8 )
    {
      case 1:
        goto LABEL_242;
      case 2:
        goto LABEL_241;
      case 3:
        goto LABEL_240;
      case 4:
        goto LABEL_239;
      case 5:
        goto LABEL_238;
      case 6:
        goto LABEL_237;
      case 7:
        v226[6] = 0.0;
LABEL_237:
        v226[5] = 0.0;
LABEL_238:
        v226[4] = 0.0;
LABEL_239:
        v226[3] = 0.0;
LABEL_240:
        v226[2] = 0.0;
LABEL_241:
        v226[1] = 0.0;
LABEL_242:
        *v226 = 0.0;
        break;
      default:
        break;
    }
  }
  v140 = (double *)operator new[]((unsigned __int64)v292);
  v141 = v283 + 1;
  if ( v283 )
  {
    if ( v283 / 8 <= 0 )
    {
      v223 = v140;
    }
    else
    {
      v221 = v140;
      v222 = (unsigned int)(v283 / 8 - 1);
      do
      {
        *v221 = 1.797693134862316e308;
        v221 += 8;
        *(v221 - 7) = 1.797693134862316e308;
        *(v221 - 6) = 1.797693134862316e308;
        *(v221 - 5) = 1.797693134862316e308;
        *(v221 - 4) = 1.797693134862316e308;
        *(v221 - 3) = 1.797693134862316e308;
        *(v221 - 2) = 1.797693134862316e308;
        *(v221 - 1) = 1.797693134862316e308;
      }
      while ( v221 != &v140[8 * v222 + 8] );
      v223 = &v140[8 * (int)v222 + 8];
    }
    switch ( v283 % 8 )
    {
      case 1:
        goto LABEL_228;
      case 2:
        goto LABEL_282;
      case 3:
        goto LABEL_281;
      case 4:
        goto LABEL_280;
      case 5:
        goto LABEL_279;
      case 6:
        goto LABEL_278;
      case 7:
        v223[6] = 1.797693134862316e308;
LABEL_278:
        v223[5] = 1.797693134862316e308;
LABEL_279:
        v223[4] = 1.797693134862316e308;
LABEL_280:
        v223[3] = 1.797693134862316e308;
LABEL_281:
        v223[2] = 1.797693134862316e308;
LABEL_282:
        v223[1] = 1.797693134862316e308;
LABEL_228:
        *v223 = 1.797693134862316e308;
        break;
      default:
        break;
    }
    if ( v141 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
  }
  v296 = (_DWORD *)operator new[](4 * v141);
  v301 = (double *)v307;
  if ( (unsigned __int64)v307 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v308 = (_DWORD *)operator new[](4LL * v307);
  v302 = (double *)operator new[](8LL * (_QWORD)v301);
  v293 = (double *)operator new[]((unsigned __int64)v292);
  if ( v283 )
  {
    if ( v283 / 8 <= 0 )
    {
      v220 = v293;
    }
    else
    {
      v218 = v293;
      v219 = (unsigned int)(v283 / 8 - 1);
      do
      {
        *v218 = 0.0;
        v218[1] = 0.0;
        v218 += 8;
        *(v218 - 6) = 0.0;
        *(v218 - 5) = 0.0;
        *(v218 - 4) = 0.0;
        *(v218 - 3) = 0.0;
        *(v218 - 2) = 0.0;
        *(v218 - 1) = 0.0;
      }
      while ( v218 != &v293[8 * v219 + 8] );
      v220 = &v293[8 * (int)v219 + 8];
    }
    switch ( v283 % 8 )
    {
      case 1:
        goto LABEL_222;
      case 2:
        goto LABEL_221;
      case 3:
        goto LABEL_220;
      case 4:
        goto LABEL_219;
      case 5:
        goto LABEL_218;
      case 6:
        goto LABEL_217;
      case 7:
        v220[6] = 0.0;
LABEL_217:
        v220[5] = 0.0;
LABEL_218:
        v220[4] = 0.0;
LABEL_219:
        v220[3] = 0.0;
LABEL_220:
        v220[2] = 0.0;
LABEL_221:
        v220[1] = 0.0;
LABEL_222:
        *v220 = 0.0;
        break;
      default:
        break;
    }
  }
  v142 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  if ( v142 )
    v253 = (**v142)(v142, 0, 0, v313, 0, 2);
  else
    v253 = 0;
  if ( v280 > 0 )
  {
    v143 = 0;
    do
    {
      v144 = (int)v11[v143];
      if ( (int)v144 >= 0 )
      {
        v145 = (int)v305[v144];
        v146 = &v286[4 * v145];
        v147 = *(_DWORD *)v146 + v290 + v270[v145];
        ++*(_DWORD *)v146;
        a3[v147] = v143;
      }
      ++v143;
    }
    while ( (unsigned int)(v280 - 1) + 1LL != v143 );
  }
  if ( v274 > 0 )
  {
    v148 = v305;
    do
    {
      v149 = *v148;
      if ( *v148 >= 0 )
      {
        si128.m128i_i64[0] = *(_QWORD *)&v69[8 * v149];
        if ( *(double *)si128.m128i_i64 > v312[v149] )
        {
          v150 = &v286[4 * v149];
          v151 = *(_DWORD *)v150 + v270[v149] + v290;
          ++*(_DWORD *)v150;
          a3[v151] = v280 + v149;
        }
      }
      ++v148;
    }
    while ( &v305[v263 + 1] != v148 );
    memset(v305, 255, 4LL * v263 + 4);
  }
  if ( v294 )
  {
    v152 = 0;
    do
    {
      v305[*(int *)&src[4 * v152]] = v152;
      ++v152;
    }
    while ( (unsigned int)(v294 - 1) + 1LL != v152 );
  }
  *v296 = 0;
  if ( v283 > 0 )
  {
    v153 = 0;
    v275 = v11;
    v154 = 0;
    do
    {
      v156 = a3[v290 + v154 / 4];
      if ( (int)v156 >= v280 )
      {
        v155 = v156 - v280;
        v140[v154 / 4] = 1.797693134862316e308;
        si128.m128i_i64[0] = *(_QWORD *)&v69[8 * v155];
        v312[v155] = *(double *)si128.m128i_i64;
        v293[v154 / 4] = 0.0;
        v310[v154 / 4] = 0.0;
      }
      else
      {
        v293[v154 / 4] = *(double *)(v253 + 8 * v156);
        *(double *)si128.m128i_i64 = v10[v156];
        v157 = 4 * v156;
        v140[v154 / 4] = 1.797693134862316e308;
        v310[v154 / 4] = *(double *)si128.m128i_i64;
        v158 = (int *)(v265 + v157);
        v159 = (_DWORD *)(v267 + v157);
        v160 = *v158;
        v161 = v160 + *v159;
        if ( (int)v160 < v161 )
        {
          v162 = (int)v160 + 1;
          v163 = (char *)v258 + 4 * v160 + -4 * v162;
          v164 = v256 + 8 * v160 - 8 * v162;
          while ( 1 )
          {
            v165 = *(int *)&v163[4 * v162];
            v166 = v305[v165];
            if ( v166 >= 0 )
              break;
LABEL_173:
            v169 = v162++;
            if ( v161 <= v169 )
              goto LABEL_166;
          }
          while ( 1 )
          {
            v167 = v153++;
            *(double *)si128.m128i_i64 = v86[v165] * *(double *)(v164 + 8 * v162);
            v308[v167] = v166;
            v302[v167] = *(double *)si128.m128i_i64;
            v161 = *v158 + *v159;
            v168 = v162++;
            if ( v161 <= v168 )
              break;
            v165 = *(int *)&v163[4 * v162];
            v166 = v305[v165];
            if ( v166 < 0 )
              goto LABEL_173;
          }
        }
      }
LABEL_166:
      v296[v154 / 4 + 1] = v153;
      v154 += 4LL;
    }
    while ( 4LL * (unsigned int)(v283 - 1) + 4 != v154 );
    v11 = v275;
  }
  if ( na )
  {
    v195 = 0;
    do
    {
      v196 = v270[v195 / 4];
      v197 = v270[v195 / 4 + 1];
      if ( v196 < v197 )
      {
        v198 = v196;
        v199 = 0.0;
        v200 = &v310[v196];
        do
          v199 = v199 + *v200++;
        while ( &v310[v196 + 1 + (unsigned __int64)(unsigned int)(v197 - 1 - v196)] != v200 );
        v201 = fmax(0.0, *(double *)&v69[2 * v195] - v199);
        do
        {
          *(double *)si128.m128i_i64 = v140[v198];
          if ( *(double *)si128.m128i_i64 < 1.0e30 )
          {
            *(double *)si128.m128i_i64 = fmin(*(double *)si128.m128i_i64, v310[v198] + v201);
            v140[v198] = *(double *)si128.m128i_i64;
          }
          ++v198;
        }
        while ( v197 > (int)v198 );
      }
      v195 += 4LL;
    }
    while ( 4LL * (unsigned int)(na - 1) + 4 != v195 );
  }
  sprintf(s, "** Before adding matrix there are %d rows and %d columns", *((_DWORD *)v278 + 26), *((_DWORD *)v278 + 27));
  v202 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v254);
  v207 = CoinMessageHandler::operator<<(v202, (__int64)s, v203, v204, v205, v206, v246);
  CoinMessageHandler::operator<<(v207, 0, *(double *)si128.m128i_i64);
  operator delete[](v86);
  operator delete[](v286);
  ClpSimplex::setFactorizationFrequency(v278, a5);
  v208 = (ClpDynamicMatrix *)operator new(0x188u);
  ClpDynamicMatrix::ClpDynamicMatrix(
    v208,
    v278,
    na,
    v283,
    v270,
    v312,
    (const double *)v69,
    v296,
    v308,
    v302,
    v293,
    v310,
    v140,
    nullptr,
    nullptr);
  operator delete[](v270);
  operator delete[](v310);
  operator delete[](v140);
  operator delete[](v296);
  operator delete[](v308);
  operator delete[](v302);
  operator delete[](v293);
  if ( v312 )
    operator delete[](v312);
  if ( v69 )
    operator delete[](v69);
  ClpModel::replaceMatrix(v278, v208, 1);
  operator delete[](v11);
  operator delete[](v305);
  ClpDynamicMatrix::switchOffCheck(v208);
  v209 = *((_DWORD *)v278 + 26);
  v210 = *((_DWORD *)v278 + 27);
  *((_DWORD *)v208 + 15) = 1000;
  sprintf(s, "** While after adding matrix there are %d rows and %d columns", v209, v210);
  v211 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 93, v254);
  v216 = CoinMessageHandler::operator<<(v211, (__int64)s, v212, v213, v214, v215, v247);
  CoinMessageHandler::operator<<(v216, 0, *(double *)si128.m128i_i64);
  ClpModel::setSpecialOptions(v278, 4u);
  ClpModel::scaling(v278, 0);
LABEL_209:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v314);
  return v278;
}

