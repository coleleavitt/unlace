CoinPresolveMatrix *__fastcall tripleton_action::presolve(
        tripleton_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  int v3; // r13d
  __int64 v4; // r14
  int v5; // ebp
  int *v6; // rbx
  int *v7; // r10
  __int64 v8; // r12
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  int v11; // r15d
  _QWORD *v12; // r13
  double v13; // xmm0_8
  __int64 v14; // rsi
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax
  int v18; // edi
  double v19; // xmm2_8
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r9
  double v23; // xmm3_8
  __int64 v24; // rdi
  __int64 v25; // rdx
  double v26; // xmm4_8
  double v27; // xmm6_8
  double v28; // xmm6_8
  double v29; // xmm7_8
  __int64 v30; // rdi
  double v31; // xmm8_8
  double v32; // xmm10_8
  _QWORD *v33; // r8
  double v34; // xmm14_8
  __m128d v35; // xmm13
  __m128d v36; // xmm11
  __m128d v37; // xmm13
  __m128d v38; // xmm11
  double v39; // xmm11_8
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rsi
  char v43; // dl
  __int64 v44; // rdi
  int v45; // edi
  __int64 v46; // rsi
  __int64 v47; // rdi
  int *v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rdi
  int *v52; // rsi
  __int64 v53; // rsi
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  int *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  char *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r11
  double v62; // xmm5_8
  int *v63; // r10
  __int64 v64; // rax
  _BYTE *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  int v68; // edx
  int v69; // eax
  int *v70; // rcx
  unsigned __int64 v71; // rsi
  __int64 v72; // rdi
  _BYTE *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  int v76; // edx
  int v77; // eax
  int *v78; // rcx
  unsigned __int64 v79; // rsi
  __int64 v80; // rdi
  _BYTE *v81; // rax
  __int64 v82; // rax
  __int64 v83; // r8
  _BYTE *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // eax
  int v88; // ecx
  int v89; // edx
  int *v90; // rcx
  unsigned __int64 v91; // rsi
  __int64 v92; // rdi
  _BYTE *v93; // rax
  __int64 v94; // rax
  __int64 v95; // r8
  int v96; // r9d
  int v97; // r12d
  __int64 v98; // r15
  int v99; // ebx
  int v100; // r10d
  int v101; // r14d
  double *v102; // r11
  double *v103; // rdx
  double v104; // xmm0_8
  __int64 v105; // rbp
  int v106; // eax
  __int64 v107; // r8
  int v108; // edi
  int v109; // r9d
  int v110; // r10d
  __int64 i; // rax
  int *v112; // rbp
  int v113; // edx
  double *v114; // rcx
  double v115; // xmm0_8
  __int64 v116; // rcx
  int *v117; // rsi
  double *v118; // rax
  double v119; // xmm0_8
  __int64 j; // rax
  __int64 v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rcx
  int v124; // eax
  double v125; // xmm0_8
  int v126; // eax
  int v127; // eax
  int v128; // ecx
  __int64 v129; // rax
  int v130; // ecx
  __int64 v131; // rax
  __int64 v132; // rax
  char *v133; // rdx
  __int64 v134; // rbp
  __int64 v135; // rdi
  __int64 v136; // rcx
  __m128i v137; // xmm0
  __int64 v138; // rsi
  __m128i v139; // xmm0
  __int64 v140; // rsi
  __m128i v141; // xmm0
  __int64 v142; // rsi
  __m128i v143; // xmm0
  __int64 v144; // rsi
  __m128i v145; // xmm0
  __int64 v146; // rsi
  __m128i v147; // xmm0
  __int64 v148; // rsi
  __m128i v149; // xmm0
  __int64 v150; // rsi
  __m128i v151; // xmm0
  __int64 v152; // rsi
  __m128i v153; // xmm0
  __int64 v154; // rdi
  __int64 v155; // rcx
  __m128i v156; // xmm0
  __m128i v157; // xmm0
  __m128i v158; // xmm0
  __m128i v159; // xmm0
  __m128i v160; // xmm0
  __m128i v161; // xmm0
  __m128i v162; // xmm0
  __int64 v163; // rdx
  CoinPresolveMatrix *v164; // rbx
  const CoinPresolveAction *v165; // r8
  int v167; // edi
  _DWORD *v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rdx
  __int64 v171; // rax
  double v172; // xmm0_8
  double v173; // xmm0_8
  __int64 v174; // rax
  const char *v175; // rdx
  __int64 v176; // rbp
  int *v177; // r10
  int *v178; // rbp
  __int64 v179; // r11
  int v180; // eax
  double v181; // xmm7_8
  char v182; // al
  double v183; // xmm0_8
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rax
  __int64 v187; // rdx
  double v188; // xmm0_8
  int v189; // edi
  int v190; // eax
  int v191; // ecx
  int *v192; // rdx
  double v193; // xmm0_8
  int v194; // ecx
  double v195; // xmm0_8
  double *v196; // rax
  double *v197; // rdx
  double v198; // xmm0_8
  int v199; // ecx
  double v200; // xmm0_8
  int v201; // ecx
  int v202; // ecx
  int v203; // ecx
  const char *v204; // [rsp+0h] [rbp-268h]
  __int64 v205; // [rsp+18h] [rbp-250h]
  __int64 v206; // [rsp+18h] [rbp-250h]
  __int64 v207; // [rsp+20h] [rbp-248h]
  __int64 v208; // [rsp+28h] [rbp-240h]
  _QWORD *v209; // [rsp+30h] [rbp-238h]
  int *v210; // [rsp+38h] [rbp-230h]
  __int64 v211; // [rsp+40h] [rbp-228h]
  char *v212; // [rsp+48h] [rbp-220h]
  int v213; // [rsp+50h] [rbp-218h]
  int v214; // [rsp+50h] [rbp-218h]
  __int64 v215; // [rsp+50h] [rbp-218h]
  __int64 v216; // [rsp+58h] [rbp-210h]
  int v219; // [rsp+70h] [rbp-1F8h]
  unsigned int v220; // [rsp+74h] [rbp-1F4h]
  int *v221; // [rsp+78h] [rbp-1F0h]
  CoinPresolveMatrix *v222; // [rsp+80h] [rbp-1E8h]
  __int64 v223; // [rsp+88h] [rbp-1E0h]
  __int64 v224; // [rsp+90h] [rbp-1D8h]
  int *v225; // [rsp+98h] [rbp-1D0h]
  __int64 v226; // [rsp+A0h] [rbp-1C8h]
  double *v227; // [rsp+A8h] [rbp-1C0h]
  int v228; // [rsp+B0h] [rbp-1B8h]
  int v229; // [rsp+B4h] [rbp-1B4h]
  __int64 v230; // [rsp+B8h] [rbp-1B0h]
  __int64 v231; // [rsp+C0h] [rbp-1A8h]
  double v232; // [rsp+C8h] [rbp-1A0h]
  char *v233; // [rsp+D0h] [rbp-198h]
  __int64 v234; // [rsp+D8h] [rbp-190h]
  __int64 v235; // [rsp+E0h] [rbp-188h]
  __int64 v236; // [rsp+E8h] [rbp-180h]
  int v237; // [rsp+F0h] [rbp-178h]
  int v238; // [rsp+F4h] [rbp-174h]
  double v239; // [rsp+100h] [rbp-168h]
  int v240; // [rsp+110h] [rbp-158h]
  int v241; // [rsp+110h] [rbp-158h]
  _QWORD *v242; // [rsp+120h] [rbp-148h]
  int v243; // [rsp+120h] [rbp-148h]
  char *v244; // [rsp+120h] [rbp-148h]
  int v245; // [rsp+120h] [rbp-148h]
  int *v246; // [rsp+120h] [rbp-148h]
  double v247; // [rsp+128h] [rbp-140h]
  int *v248; // [rsp+128h] [rbp-140h]
  int *v249; // [rsp+130h] [rbp-138h]
  char v250; // [rsp+138h] [rbp-130h]
  int v251; // [rsp+138h] [rbp-130h]
  int *v252; // [rsp+138h] [rbp-130h]
  __int64 v253; // [rsp+140h] [rbp-128h]
  double v254; // [rsp+150h] [rbp-118h]
  int v255; // [rsp+158h] [rbp-110h]
  int v256; // [rsp+158h] [rbp-110h]
  int v257; // [rsp+158h] [rbp-110h]
  int v258; // [rsp+160h] [rbp-108h]
  int v259; // [rsp+160h] [rbp-108h]
  int *v260; // [rsp+168h] [rbp-100h]
  int *v261; // [rsp+168h] [rbp-100h]
  int *v262; // [rsp+168h] [rbp-100h]
  _DWORD *v263; // [rsp+168h] [rbp-100h]
  __int64 v264; // [rsp+170h] [rbp-F8h]
  int *v265; // [rsp+178h] [rbp-F0h]
  __int64 v266; // [rsp+178h] [rbp-F0h]
  int *v267; // [rsp+180h] [rbp-E8h]
  int minor1; // [rsp+180h] [rbp-E8h]
  int v269; // [rsp+180h] [rbp-E8h]
  int *v270; // [rsp+180h] [rbp-E8h]
  int *v271; // [rsp+190h] [rbp-D8h]
  int v272; // [rsp+190h] [rbp-D8h]
  __int64 v273; // [rsp+190h] [rbp-D8h]
  int *v274; // [rsp+190h] [rbp-D8h]
  int v275; // [rsp+1A0h] [rbp-C8h]
  int *v276; // [rsp+1A8h] [rbp-C0h]
  int v277; // [rsp+1A8h] [rbp-C0h]
  int v278; // [rsp+1B0h] [rbp-B8h]
  int v279; // [rsp+1B0h] [rbp-B8h]
  _DWORD *v280; // [rsp+1B8h] [rbp-B0h]
  __int64 v281; // [rsp+1C0h] [rbp-A8h]
  double *v282; // [rsp+1E0h] [rbp-88h]
  double v283; // [rsp+1F0h] [rbp-78h]
  int *v284; // [rsp+220h] [rbp-48h]

  v3 = *(_DWORD *)this;
  v4 = *((_QWORD *)this + 38);
  v227 = *((double **)this + 8);
  v229 = *(_DWORD *)this;
  v205 = *((_QWORD *)this + 36);
  v221 = *((int **)this + 7);
  v225 = *((int **)this + 5);
  v210 = *((int **)this + 6);
  v223 = *((_QWORD *)this + 11);
  v224 = *((_QWORD *)this + 12);
  v211 = *((_QWORD *)this + 37);
  v216 = *((_QWORD *)this + 35);
  v237 = *((_DWORD *)this + 1);
  v207 = *((_QWORD *)this + 13);
  v5 = *((_DWORD *)this + 104);
  v6 = *((int **)this + 51);
  v232 = *((double *)this + 17);
  v208 = *((_QWORD *)this + 14);
  v226 = *((_QWORD *)this + 32);
  v230 = *((_QWORD *)this + 33);
  v234 = *((_QWORD *)this + 39);
  v231 = *((_QWORD *)this + 9);
  if ( (unsigned __int64)v237 > 0x111111111111111LL )
    __cxa_throw_bad_array_new_length();
  v212 = (char *)operator new[](120LL * v237);
  v222 = *((CoinPresolveMatrix **)this + 58);
  v233 = (char *)v222 + 4 * v3;
  memset(v233, 0, v3);
  v235 = *((_QWORD *)this + 25);
  v236 = *((_QWORD *)this + 22);
  if ( v5 <= 0 )
    goto LABEL_159;
  v7 = v6;
  v220 = 0;
  v219 = 0;
  v8 = v205;
  v206 = (__int64)&v6[v5 - 1 + 1];
  do
  {
    v9 = *v7;
    v10 = (_DWORD *)(v8 + 4 * v9);
    v11 = *v7;
    if ( *v10 == 3 )
    {
      v12 = (_QWORD *)(v208 + 8 * v9);
      v13 = *(double *)(8 * v9 + v207);
      v209 = (_QWORD *)(8 * v9 + v207);
      if ( fabs(*(double *)v12 - v13) <= 1.0e-12 )
      {
        v14 = *(int *)(v216 + 4 * v9);
        v15 = v14 + 3;
        v16 = *(_DWORD *)(v216 + 4 * v9);
        v17 = 4 * v14;
        v213 = v14 + 3;
        if ( v210[*(int *)(v4 + 4 * v14)] > 0 )
        {
          v18 = *(_DWORD *)(v216 + 4 * v9);
        }
        else
        {
          v18 = v14 + 1;
          v14 = (int)v14 + 1;
          if ( v210[*(int *)(v4 + v17 + 4)] <= 0 )
          {
            v18 = v16 + 2;
            v14 = v16 + 2;
            if ( v210[*(int *)(v4 + v17 + 8)] <= 0 )
            {
              v14 = v15;
              v18 = v15;
            }
          }
        }
        v19 = *(double *)(v211 + 8 * v14);
        if ( fabs(v19) >= 1.0e-10 )
        {
          v20 = v18 + 1;
          v21 = v18 + 1;
          if ( v213 > v18 + 1 && v210[*(int *)(v4 + 4LL * v20)] <= 0 )
          {
            v21 = v20 + 1LL;
            v22 = v21 + (unsigned int)(v16 + 1 - v18);
            while ( 1 )
            {
              ++v20;
              if ( v22 == v21 || v210[*(int *)(v4 + 4 * v21)] > 0 )
                break;
              ++v21;
            }
          }
          v23 = *(double *)(v211 + 8 * v21);
          if ( fabs(v23) >= 1.0e-10 )
          {
            v24 = v20 + 1;
            if ( v213 > v20 + 1 && v210[*(int *)(v4 + 4LL * (v20 + 1))] <= 0 )
            {
              v25 = ++v24 + (unsigned int)(v16 + 1 - v20);
              while ( v25 != v24 && v210[*(int *)(v4 + 4 * v24)] <= 0 )
                ++v24;
            }
            v26 = *(double *)(v211 + 8 * v24);
            if ( fabs(v26) >= 1.0e-10 )
            {
              v214 = *(_DWORD *)(v4 + 4 * v21);
              v27 = v19 * v23;
              v228 = *(_DWORD *)(v4 + 4 * v14);
              v238 = *(_DWORD *)(v4 + 4 * v24);
              if ( v19 * v26 <= 0.0 )
              {
                if ( v27 <= 0.0 )
                {
                  v214 = *(_DWORD *)(v4 + 4 * v14);
                  v19 = *(double *)(v211 + 8 * v21);
                  v228 = *(_DWORD *)(v4 + 4 * v21);
                  v23 = *(double *)(v211 + 8 * v14);
                }
                else
                {
                  v214 = *(_DWORD *)(v4 + 4 * v24);
                  v23 = *(double *)(v211 + 8 * v24);
                  v238 = *(_DWORD *)(v4 + 4 * v21);
                  v26 = *(double *)(v211 + 8 * v21);
                }
              }
              else if ( v27 > 0.0 )
              {
                goto LABEL_4;
              }
              v28 = *(double *)(v223 + 8LL * v228);
              v29 = *(double *)(v224 + 8LL * v228);
              if ( fabs(v29 - v28) >= 1.0e-12 )
              {
                v30 = 8LL * v214;
                v253 = v30;
                v31 = *(double *)(v30 + v224);
                v242 = (_QWORD *)(v30 + v224);
                if ( fabs(v31 - v28) >= 1.0e-12 )
                {
                  v32 = *(double *)(v30 + v223);
                  v247 = *(double *)(v224 + 8LL * v238);
                  v33 = (_QWORD *)(v30 + v223);
                  if ( fabs(v247 - v32) >= 1.0e-12 )
                  {
                    v34 = -v19 / v23;
                    v239 = -v26 / v23;
                    if ( !*(_BYTE *)(v234 + v214) )
                      goto LABEL_40;
                    if ( *(_BYTE *)(v234 + v228) && *(_BYTE *)(v234 + v238) )
                    {
                      v35.m128d_f64[0] = v34 + 0.5;
                      if ( fabs(v34 + 0.5) < 4.503599627370496e15 )
                      {
                        v36 = 0;
                        v36.m128d_f64[0] = (double)(int)v35.m128d_f64[0];
                        *(_QWORD *)&v35.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                         v36.m128d_f64[0]
                                                       - COERCE_DOUBLE(
                                                           COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v36, v35).m128d_f64[0]))
                                                         & 0x3FF0000000000000LL))
                                                     | COERCE_UNSIGNED_INT64(v34 + 0.5) & 0x8000000000000000LL;
                      }
                      if ( v35.m128d_f64[0] == v34 )
                      {
                        v37.m128d_f64[0] = v239 + 0.5;
                        if ( fabs(v239 + 0.5) < 4.503599627370496e15 )
                        {
                          v38 = 0;
                          v38.m128d_f64[0] = (double)(int)v37.m128d_f64[0];
                          *(_QWORD *)&v37.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                           v38.m128d_f64[0]
                                                         - COERCE_DOUBLE(
                                                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v38, v37).m128d_f64[0]))
                                                           & 0x3FF0000000000000LL))
                                                       | COERCE_UNSIGNED_INT64(v239 + 0.5) & 0x8000000000000000LL;
                        }
                        if ( v37.m128d_f64[0] == v239 )
                        {
LABEL_40:
                          v254 = v13 / v23;
                          if ( v32 <= -1.0e30
                            || v28 >= -1.0e30
                            && (v39 = *(double *)(v223 + 8LL * v238), v39 >= -1.0e30)
                            && v32 - v232 <= v28 * v34 + v39 * v239 + v13 / v23 )
                          {
                            if ( v31 >= 1.0e30
                              || v29 <= 1.0e30 && v247 <= 1.0e30 && v29 * v34 + v247 * v239 + v254 <= v31 + v232 )
                            {
                              v248 = &v225[v214];
                              v40 = *v248;
                              v249 = &v210[v214];
                              v41 = *v249;
                              v258 = *v249;
                              v275 = v40 + *v249;
                              if ( (int)v40 >= v275 )
                              {
                                v250 = 0;
                              }
                              else
                              {
                                v250 = 0;
                                v42 = (int)v40 + 1;
                                v260 = &v221[(int)v40 - v42];
                                do
                                {
                                  while ( 1 )
                                  {
                                    v43 = v250;
                                    v44 = v260[v42];
                                    if ( *(_DWORD *)(v8 + 4 * v44) == 1 )
                                      v43 = 1;
                                    v250 = v43;
                                    if ( v11 == v260[v42] )
                                      break;
                                    *(_BYTE *)(*((_QWORD *)this + 50) + v44) |= 4u;
                                    v45 = v42++;
                                    v40 = *v248;
                                    v41 = *v249;
                                    v258 = *v249;
                                    v275 = v40 + *v249;
                                    if ( v45 >= v275 )
                                      goto LABEL_54;
                                  }
                                  v167 = v42++;
                                  v258 = v41;
                                  v275 = v40 + v41;
                                }
                                while ( (int)v40 + v41 > v167 );
                              }
LABEL_54:
                              v271 = &v225[v228];
                              v46 = *v271;
                              v267 = &v210[v228];
                              if ( (int)v46 >= (int)v46 + *v267 )
                              {
                                v255 = 0;
                              }
                              else
                              {
                                v255 = 0;
                                v261 = &v221[v46];
                                v47 = (__int64)&v221[(unsigned int)(*v267 - 1) + 1 + v46];
                                v48 = v261;
                                do
                                {
                                  v49 = *v48;
                                  if ( v11 != (_DWORD)v49 )
                                    v255 -= ((*(_BYTE *)(*((_QWORD *)this + 50) + v49) & 4) == 0) - 1;
                                  v48 = ++v261;
                                }
                                while ( (int *)v47 != v261 );
                                v40 = (int)v40;
                              }
                              v276 = &v225[v238];
                              v50 = *v276;
                              v265 = &v210[v238];
                              if ( (int)v50 < (int)v50 + *v265 )
                              {
                                v262 = &v221[v50];
                                v51 = (__int64)&v221[(unsigned int)(*v265 - 1) + 1 + v50];
                                v52 = v262;
                                do
                                {
                                  v53 = *v52;
                                  if ( v11 != (_DWORD)v53 )
                                    v255 -= ((*(_BYTE *)(*((_QWORD *)this + 50) + v53) & 4) == 0) - 1;
                                  v52 = ++v262;
                                }
                                while ( (int *)v51 != v262 );
                                v40 = (int)v40;
                              }
                              v256 = v41 - 3 - v255;
                              if ( (int)v40 < v275 )
                              {
                                v54 = v242;
                                v55 = (int)v40 + 1;
                                v56 = &v221[v40 - v55];
                                do
                                {
                                  v57 = v56[v55];
                                  v243 = v55++;
                                  *(_BYTE *)(*((_QWORD *)this + 50) + v57) &= ~4u;
                                  v258 = *v249;
                                }
                                while ( *v248 + *v249 > v243 );
                                v242 = v54;
                              }
                              if ( v256 <= 2 && !v250 && (*v267 != 1 && *v265 != 1 || v258 != 1) )
                              {
                                v284 = v7;
                                v58 = 15LL * v219++;
                                v59 = &v212[8 * v58];
                                *((_QWORD *)v59 + 2) = *v33;
                                *((_DWORD *)v59 + 2) = v11;
                                *(_DWORD *)v59 = v228;
                                *((_DWORD *)v59 + 1) = v238;
                                *((_DWORD *)v59 + 3) = v214;
                                *((_QWORD *)v59 + 3) = *v242;
                                *((_QWORD *)v59 + 4) = *(_QWORD *)(v253 + v231);
                                *((_QWORD *)v59 + 8) = *v209;
                                *((_QWORD *)v59 + 9) = *v12;
                                v244 = v59;
                                *((double *)v59 + 10) = v19;
                                *((double *)v59 + 11) = v23;
                                *((double *)v59 + 12) = v26;
                                *((_DWORD *)v59 + 29) = *v249;
                                v60 = presolve_dupmajor(v227, v221, *v249, *v248, -1);
                                v61 = 8 * v9;
                                *((_QWORD *)v244 + 13) = v60;
                                v62 = 0.0;
                                v63 = v284;
                                *(double *)(v231 + 8LL * v228) = *(double *)(v253 + v231) * v34
                                                               + *(double *)(v231 + 8LL * v228);
                                *(double *)(v231 + 8LL * v238) = v239 * *(double *)(v253 + v231)
                                                               + *(double *)(v231 + 8LL * v238);
                                *((double *)this + 34) = v13 * *(double *)(v253 + v231) / v23 + *((double *)this + 34);
                                if ( v235 )
                                {
                                  v64 = *((_QWORD *)this + 24);
                                  if ( (*(_BYTE *)(v64 + v214) & 7) == 1
                                    && (*(_BYTE *)(*((_QWORD *)this + 25) + v9) & 7) == 1 )
                                  {
                                    if ( (*(_BYTE *)(v64 + v228) & 7) == 1 )
                                      *(_BYTE *)(v238 + v64) = *(_BYTE *)(v238 + v64) & 0xF8 | 1;
                                    else
                                      *(_BYTE *)(v64 + v228) = *(_BYTE *)(v64 + v228) & 0xF8 | 1;
                                  }
                                }
                                v65 = (_BYTE *)(*((_QWORD *)this + 45) + v228);
                                if ( (*v65 & 1) == 0 )
                                {
                                  *v65 |= 1u;
                                  v66 = *((int *)this + 98);
                                  v67 = *((_QWORD *)this + 48);
                                  *((_DWORD *)this + 98) = v66 + 1;
                                  *(_DWORD *)(v67 + 4 * v66) = v228;
                                }
                                v68 = *v248;
                                v69 = *v248 + *v249;
                                if ( *v248 < v69 )
                                {
                                  v70 = &v221[v68];
                                  v71 = (unsigned __int64)&v221[v68
                                                              + 1
                                                              + (unsigned __int64)(unsigned int)(v69 - v68 - 1)];
                                  do
                                  {
                                    v72 = *v70;
                                    v73 = (_BYTE *)(*((_QWORD *)this + 50) + v72);
                                    if ( (*v73 & 1) == 0 )
                                    {
                                      *v73 |= 1u;
                                      v74 = *((int *)this + 108);
                                      v75 = *((_QWORD *)this + 53);
                                      *((_DWORD *)this + 108) = v74 + 1;
                                      *(_DWORD *)(v75 + 4 * v74) = v72;
                                    }
                                    ++v70;
                                  }
                                  while ( (int *)v71 != v70 );
                                }
                                v76 = *v271;
                                v77 = *v271 + *v267;
                                if ( *v271 < v77 )
                                {
                                  v78 = &v221[v76];
                                  v79 = (unsigned __int64)&v221[v76
                                                              + 1
                                                              + (unsigned __int64)(unsigned int)(v77 - v76 - 1)];
                                  do
                                  {
                                    v80 = *v78;
                                    v81 = (_BYTE *)(*((_QWORD *)this + 50) + v80);
                                    if ( (*v81 & 1) == 0 )
                                    {
                                      *v81 |= 1u;
                                      v82 = *((int *)this + 108);
                                      v83 = *((_QWORD *)this + 53);
                                      *((_DWORD *)this + 108) = v82 + 1;
                                      *(_DWORD *)(v83 + 4 * v82) = v80;
                                    }
                                    ++v78;
                                  }
                                  while ( (int *)v79 != v78 );
                                }
                                v84 = (_BYTE *)(*((_QWORD *)this + 45) + v238);
                                if ( (*v84 & 1) == 0 )
                                {
                                  *v84 |= 1u;
                                  v85 = *((int *)this + 98);
                                  v86 = *((_QWORD *)this + 48);
                                  *((_DWORD *)this + 98) = v85 + 1;
                                  *(_DWORD *)(v86 + 4 * v85) = v238;
                                }
                                v87 = *v276;
                                v88 = *v265;
                                v89 = *v276 + *v265;
                                if ( *v276 < v89 )
                                {
                                  v90 = &v221[v87];
                                  v91 = (unsigned __int64)&v221[v87
                                                              + 1
                                                              + (unsigned __int64)(unsigned int)(v89 - v87 - 1)];
                                  do
                                  {
                                    v92 = *v90;
                                    v93 = (_BYTE *)(*((_QWORD *)this + 50) + v92);
                                    if ( (*v93 & 1) == 0 )
                                    {
                                      *v93 |= 1u;
                                      v94 = *((int *)this + 108);
                                      v95 = *((_QWORD *)this + 53);
                                      *((_DWORD *)this + 108) = v94 + 1;
                                      *(_DWORD *)(v95 + 4 * v94) = v92;
                                    }
                                    ++v90;
                                  }
                                  while ( (int *)v91 != v90 );
                                  v87 = *v276;
                                  v88 = *v265;
                                }
                                v251 = v87;
                                v240 = v87 + v88;
                                v245 = *v248;
                                v259 = *v249 + *v248;
                                v96 = *v271 + *v267;
                                if ( *v248 < v259 )
                                {
                                  v280 = (_DWORD *)(v8 + 4 * v9);
                                  v266 = v8;
                                  v277 = v11;
                                  v97 = v238;
                                  v257 = *v248;
                                  v264 = v4 + 4;
                                  v98 = v4;
                                  v281 = 8 * v9;
                                  v99 = v228;
                                  v100 = *v271;
                                  while ( 1 )
                                  {
                                    v101 = v221[v245];
                                    if ( v277 != v101 )
                                    {
                                      v102 = &v227[v245];
                                      if ( v254 != v62 )
                                      {
                                        v103 = (double *)(v207 + 8LL * v101);
                                        if ( *v103 > -1.797693134862316e308 )
                                          *v103 = *v103 - v254 * *v102;
                                        v104 = *(double *)(v208 + 8LL * v101);
                                        if ( v104 < 1.797693134862316e308 )
                                          *(double *)(v208 + 8LL * v101) = v104 - v254 * *v102;
                                        if ( v236 )
                                          *(double *)(v236 + 8LL * v101) = *(double *)(v236 + 8LL * v101) - v254 * *v102;
                                      }
                                      v282 = &v227[v245];
                                      v278 = v96;
                                      v105 = 4LL * v101;
                                      v283 = v62;
                                      v272 = v100;
                                      minor1 = presolve_find_minor1(v101, v100, v96, v221);
                                      v106 = presolve_find_minor1(v101, v251, v240, v221);
                                      v107 = minor1;
                                      v108 = v106;
                                      v109 = v278;
                                      v110 = v272;
                                      v62 = v283;
                                      i = v105 + v216;
                                      v112 = (int *)(v266 + v105);
                                      v263 = (_DWORD *)i;
                                      if ( v278 > minor1 || v240 <= v108 )
                                      {
                                        v113 = *v112;
                                        LODWORD(i) = *(_DWORD *)i;
                                        v168 = (_DWORD *)(v98 + 4LL * (int)i);
                                        if ( v278 <= minor1 )
                                        {
                                          if ( (int)i >= (int)i + *v112 || v214 == *v168 )
                                          {
                                            v169 = (int)i;
                                          }
                                          else
                                          {
                                            v169 = (int)i + 1LL;
                                            v170 = v98 + 4LL * (int)i + 4;
                                            v171 = v264 + 4 * ((unsigned int)(*v112 - 1) + (__int64)(int)i);
                                            while ( 1 )
                                            {
                                              v168 = (_DWORD *)v170;
                                              if ( v171 == v170 )
                                                break;
                                              v170 += 4;
                                              if ( v214 == *v168 )
                                                break;
                                              ++v169;
                                            }
                                          }
                                          v172 = v34 * *v282;
                                          *v168 = v99;
                                          *(double *)(v211 + 8 * v169) = v172;
                                          presolve_expand_major(v216, v211, v98, v266, v230, v237, v101);
                                          v173 = v239 * *v282;
                                          v174 = *v263 + *v112;
                                          *(_DWORD *)(v98 + 4 * v174) = v97;
                                          *(double *)(v211 + 8 * v174) = v173;
                                          ++*v112;
                                          if ( (unsigned __int8)presolve_expand_major(
                                                                  (int)v225,
                                                                  (int)v227,
                                                                  (int)v221,
                                                                  (int)v210,
                                                                  v226,
                                                                  v229,
                                                                  v99)
                                            || (v176 = v99,
                                                v177 = &v225[v176],
                                                v178 = &v210[v176],
                                                v179 = v97,
                                                v241 = v245 - v257,
                                                v180 = *v177 + *v178,
                                                v181 = v34 * v227[v245 - v257 + *v248],
                                                v274 = &v210[v179],
                                                v252 = &v225[v179],
                                                v270 = v177,
                                                v221[v180] = v101,
                                                v227[v180] = v181,
                                                ++*v178,
                                                v182 = presolve_expand_major(
                                                         (int)v225,
                                                         (int)v227,
                                                         (int)v221,
                                                         (int)v210,
                                                         v226,
                                                         v229,
                                                         v97),
                                                v175 = v204,
                                                v182) )
                                          {
LABEL_195:
                                            CoinPresolveAction::throwCoinError(
                                              (CoinPresolveAction *)"out of memory",
                                              "tripleton_action::presolve",
                                              v175);
                                          }
                                          v257 = *v248;
                                          v245 = *v248 + v241;
                                          v100 = *v270;
                                          v183 = v239 * v227[v245];
                                          v259 = *v249 + *v248;
                                          v96 = *v270 + *v178;
                                          v62 = v283;
                                          v251 = *v252;
                                          v184 = *v274 + v251;
                                          v221[v184] = v101;
                                          v240 = v184 + 1;
                                          v227[v184] = v183;
                                          ++*v274;
                                          goto LABEL_128;
                                        }
                                        v199 = v251;
                                        v251 = v272;
                                        v200 = v239;
                                        v239 = v34;
                                        v110 = v199;
                                        v201 = v97;
                                        v97 = v99;
                                        v99 = v201;
                                        v202 = v108;
                                        v108 = minor1;
                                        v107 = v202;
                                        v203 = v240;
                                        v240 = v278;
                                        v34 = v200;
                                        v109 = v203;
                                      }
                                      else
                                      {
                                        LODWORD(i) = *(_DWORD *)i;
                                        v113 = *v112;
                                      }
                                      v114 = &v227[v108];
                                      v279 = i + v113;
                                      v115 = v239 * *v282 + *v114;
                                      *v114 = v115;
                                      v116 = (int)i;
                                      v273 = 4LL * (int)i;
                                      v117 = (int *)(v98 + v273);
                                      if ( (int)i >= (int)i + v113 )
                                      {
                                        v196 = (double *)(v211 + 8LL * (int)i);
                                        *v196 = v115;
                                        if ( v109 <= (int)v107 )
                                          goto LABEL_181;
                                        v197 = &v227[v107];
                                        v198 = *v282 * v34 + *v197;
                                        *v197 = v198;
                                        *v196 = v198;
                                        v121 = v116;
                                      }
                                      else
                                      {
                                        v269 = *v117;
                                        if ( *v117 == v97 )
                                        {
                                          i = (int)i;
                                        }
                                        else
                                        {
                                          for ( i = (int)i + 1LL;
                                                v116 + 1 + (unsigned int)(v113 - 1) != i
                                             && *(_DWORD *)(v98 + 4 * (i + 1) - 4) != v97;
                                                ++i )
                                          {
                                            ;
                                          }
                                        }
                                        *(double *)(v211 + 8 * i) = v115;
                                        if ( v109 <= (int)v107 )
                                        {
                                          if ( v214 != *v117 )
                                          {
                                            v185 = v116 + (unsigned int)(v113 - 1);
                                            ++v116;
                                            v186 = v98 + v273 + 4;
                                            v187 = v264 + 4 * v185;
                                            while ( 1 )
                                            {
                                              v117 = (int *)v186;
                                              if ( v187 == v186 )
                                                break;
                                              v186 += 4;
                                              if ( v214 == *v117 )
                                                break;
                                              ++v116;
                                            }
                                          }
LABEL_181:
                                          v188 = v34 * *v282;
                                          *v117 = v99;
                                          *(double *)(v211 + 8 * v116) = v188;
                                          if ( (unsigned __int8)presolve_expand_major(
                                                                  (int)v225,
                                                                  (int)v227,
                                                                  (int)v221,
                                                                  (int)v210,
                                                                  v226,
                                                                  v229,
                                                                  v99) )
                                            goto LABEL_195;
                                          v100 = v225[v97];
                                          v62 = v283;
                                          v96 = v100 + v210[v97];
                                          v189 = *v248 + v245 - v257;
                                          v257 = *v248;
                                          v245 = v189;
                                          v259 = *v248 + *v249;
                                          v190 = v99;
                                          v191 = v225[v99];
                                          v192 = &v210[v99];
                                          v193 = v227[v189] * v34;
                                          v99 = v97;
                                          v97 = v190;
                                          v251 = v191;
                                          v194 = *v192 + v191;
                                          v221[v194] = v101;
                                          v227[v194] = v193;
                                          v240 = v194 + 1;
                                          v195 = v34;
                                          ++*v192;
                                          v34 = v239;
                                          v239 = v195;
                                          goto LABEL_128;
                                        }
                                        v118 = &v227[v107];
                                        v119 = *v282 * v34 + *v118;
                                        *v118 = v119;
                                        if ( v269 == v99 )
                                        {
                                          j = v116;
                                        }
                                        else
                                        {
                                          for ( j = v116 + 1;
                                                (unsigned int)(v113 - 1) + v116 + 1 != j
                                             && *(_DWORD *)(v98 + 4 * (j + 1) - 4) != v99;
                                                ++j )
                                          {
                                            ;
                                          }
                                        }
                                        *(double *)(v211 + 8 * j) = v119;
                                        if ( v214 == v269 )
                                        {
                                          v121 = v116;
                                        }
                                        else
                                        {
                                          v121 = v116 + 1;
                                          v122 = v98 + v273 + 4;
                                          v123 = v264 + 4 * ((unsigned int)(v113 - 1) + v116);
                                          while ( 1 )
                                          {
                                            v117 = (int *)v122;
                                            if ( v123 == v122 )
                                              break;
                                            v122 += 4;
                                            if ( v214 == *v117 )
                                              break;
                                            ++v121;
                                          }
                                        }
                                      }
                                      *v117 = *(_DWORD *)(v98 + 4LL * v279 - 4);
                                      *(_QWORD *)(v211 + 8 * v121) = *(_QWORD *)(v211 + 8LL * v279 - 8);
                                      v124 = v109;
                                      --*v112;
                                      v125 = v34;
                                      v96 = v240;
                                      v240 = v124;
                                      v126 = v110;
                                      v34 = v239;
                                      v100 = v251;
                                      v239 = v125;
                                      v251 = v126;
                                      v127 = v99;
                                      v99 = v97;
                                      v97 = v127;
                                    }
LABEL_128:
                                    if ( ++v245 >= v259 )
                                    {
                                      v4 = v98;
                                      v10 = v280;
                                      v61 = v281;
                                      v8 = v266;
                                      v11 = v277;
                                      v63 = v284;
                                      break;
                                    }
                                  }
                                }
                                *v249 = 0;
                                v246 = v63;
                                v215 = v61;
                                presolve_delete_from_major(v228, v11, v225, v210, v221, v227);
                                presolve_delete_from_major(v238, v11, v225, v210, v221, v227);
                                *v10 = 0;
                                v7 = v246;
                                v128 = *(_DWORD *)(v230 + v215);
                                v129 = *(int *)(v230 + v215 + 4);
                                if ( v128 >= 0 )
                                  *(_DWORD *)(v230 + 8LL * v128 + 4) = v129;
                                if ( (int)v129 >= 0 )
                                  *(_DWORD *)(v230 + 8 * v129) = v128;
                                *(_QWORD *)(v230 + v215) = 0xFC06BF56FC06BF56LL;
                                v130 = *(_DWORD *)(v226 + v253);
                                v131 = *(int *)(v226 + v253 + 4);
                                if ( v130 >= 0 )
                                  *(_DWORD *)(v226 + 8LL * v130 + 4) = v131;
                                if ( (int)v131 >= 0 )
                                  *(_DWORD *)(v226 + 8 * v131) = v130;
                                *(_QWORD *)(v226 + v253) = 0xFC06BF56FC06BF56LL;
                                *(_QWORD *)(v253 + v231) = 0;
                                *v209 = 0;
                                *v12 = 0;
                                if ( !v233[v228] )
                                {
                                  v233[v228] = 1;
                                  *((_DWORD *)v222 + (int)v220++) = v228;
                                }
                                if ( !v233[v238] )
                                {
                                  v233[v238] = 1;
                                  *((_DWORD *)v222 + (int)v220++) = v238;
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
LABEL_4:
    ++v7;
  }
  while ( (int *)v206 != v7 );
  if ( !v219 )
  {
LABEL_159:
    v164 = a2;
    goto LABEL_158;
  }
  v132 = operator new[](120LL * v219);
  v133 = v212;
  v134 = v132;
  if ( v212 != (char *)v132 )
  {
    if ( v219 >> 3 > 0 )
    {
      v135 = (unsigned int)((v219 >> 3) - 1);
      v136 = v132 + 960 * (v135 + 1);
      do
      {
        v137 = _mm_loadu_si128((const __m128i *)v133);
        v132 += 960;
        v133 += 960;
        v138 = *((_QWORD *)v133 - 106);
        *(__m128i *)(v132 - 960) = v137;
        v139 = _mm_loadu_si128((const __m128i *)v133 - 59);
        *(_QWORD *)(v132 - 848) = v138;
        v140 = *((_QWORD *)v133 - 91);
        *(__m128i *)(v132 - 944) = v139;
        v141 = _mm_loadu_si128((const __m128i *)v133 - 58);
        *(_QWORD *)(v132 - 728) = v140;
        *(__m128i *)(v132 - 928) = v141;
        *(__m128i *)(v132 - 912) = _mm_loadu_si128((const __m128i *)v133 - 57);
        *(__m128i *)(v132 - 896) = _mm_loadu_si128((const __m128i *)v133 - 56);
        *(__m128i *)(v132 - 880) = _mm_loadu_si128((const __m128i *)v133 - 55);
        *(__m128i *)(v132 - 864) = _mm_loadu_si128((const __m128i *)v133 - 54);
        *(__m128i *)(v132 - 840) = _mm_loadu_si128((const __m128i *)(v133 - 840));
        *(__m128i *)(v132 - 824) = _mm_loadu_si128((const __m128i *)(v133 - 824));
        *(__m128i *)(v132 - 808) = _mm_loadu_si128((const __m128i *)(v133 - 808));
        *(__m128i *)(v132 - 792) = _mm_loadu_si128((const __m128i *)(v133 - 792));
        *(__m128i *)(v132 - 776) = _mm_loadu_si128((const __m128i *)(v133 - 776));
        *(__m128i *)(v132 - 760) = _mm_loadu_si128((const __m128i *)(v133 - 760));
        *(__m128i *)(v132 - 744) = _mm_loadu_si128((const __m128i *)(v133 - 744));
        v142 = *((_QWORD *)v133 - 76);
        *(__m128i *)(v132 - 720) = _mm_loadu_si128((const __m128i *)v133 - 45);
        v143 = _mm_loadu_si128((const __m128i *)v133 - 44);
        *(_QWORD *)(v132 - 608) = v142;
        v144 = *((_QWORD *)v133 - 61);
        *(__m128i *)(v132 - 704) = v143;
        v145 = _mm_loadu_si128((const __m128i *)v133 - 43);
        *(_QWORD *)(v132 - 488) = v144;
        *(__m128i *)(v132 - 688) = v145;
        *(__m128i *)(v132 - 672) = _mm_loadu_si128((const __m128i *)v133 - 42);
        *(__m128i *)(v132 - 656) = _mm_loadu_si128((const __m128i *)v133 - 41);
        *(__m128i *)(v132 - 640) = _mm_loadu_si128((const __m128i *)v133 - 40);
        *(__m128i *)(v132 - 624) = _mm_loadu_si128((const __m128i *)v133 - 39);
        *(__m128i *)(v132 - 600) = _mm_loadu_si128((const __m128i *)(v133 - 600));
        *(__m128i *)(v132 - 584) = _mm_loadu_si128((const __m128i *)(v133 - 584));
        *(__m128i *)(v132 - 568) = _mm_loadu_si128((const __m128i *)(v133 - 568));
        *(__m128i *)(v132 - 552) = _mm_loadu_si128((const __m128i *)(v133 - 552));
        *(__m128i *)(v132 - 536) = _mm_loadu_si128((const __m128i *)(v133 - 536));
        *(__m128i *)(v132 - 520) = _mm_loadu_si128((const __m128i *)(v133 - 520));
        *(__m128i *)(v132 - 504) = _mm_loadu_si128((const __m128i *)(v133 - 504));
        v146 = *((_QWORD *)v133 - 46);
        *(__m128i *)(v132 - 480) = _mm_loadu_si128((const __m128i *)v133 - 30);
        v147 = _mm_loadu_si128((const __m128i *)v133 - 29);
        *(_QWORD *)(v132 - 368) = v146;
        v148 = *((_QWORD *)v133 - 31);
        *(__m128i *)(v132 - 464) = v147;
        v149 = _mm_loadu_si128((const __m128i *)v133 - 28);
        *(_QWORD *)(v132 - 248) = v148;
        *(__m128i *)(v132 - 448) = v149;
        *(__m128i *)(v132 - 432) = _mm_loadu_si128((const __m128i *)v133 - 27);
        *(__m128i *)(v132 - 416) = _mm_loadu_si128((const __m128i *)v133 - 26);
        *(__m128i *)(v132 - 400) = _mm_loadu_si128((const __m128i *)v133 - 25);
        *(__m128i *)(v132 - 384) = _mm_loadu_si128((const __m128i *)v133 - 24);
        *(__m128i *)(v132 - 360) = _mm_loadu_si128((const __m128i *)(v133 - 360));
        *(__m128i *)(v132 - 344) = _mm_loadu_si128((const __m128i *)(v133 - 344));
        *(__m128i *)(v132 - 328) = _mm_loadu_si128((const __m128i *)(v133 - 328));
        *(__m128i *)(v132 - 312) = _mm_loadu_si128((const __m128i *)(v133 - 312));
        *(__m128i *)(v132 - 296) = _mm_loadu_si128((const __m128i *)(v133 - 296));
        *(__m128i *)(v132 - 280) = _mm_loadu_si128((const __m128i *)(v133 - 280));
        *(__m128i *)(v132 - 264) = _mm_loadu_si128((const __m128i *)(v133 - 264));
        v150 = *((_QWORD *)v133 - 16);
        *(__m128i *)(v132 - 240) = _mm_loadu_si128((const __m128i *)v133 - 15);
        v151 = _mm_loadu_si128((const __m128i *)v133 - 14);
        *(_QWORD *)(v132 - 128) = v150;
        v152 = *((_QWORD *)v133 - 1);
        *(__m128i *)(v132 - 224) = v151;
        v153 = _mm_loadu_si128((const __m128i *)v133 - 13);
        *(_QWORD *)(v132 - 8) = v152;
        *(__m128i *)(v132 - 208) = v153;
        *(__m128i *)(v132 - 192) = _mm_loadu_si128((const __m128i *)v133 - 12);
        *(__m128i *)(v132 - 176) = _mm_loadu_si128((const __m128i *)v133 - 11);
        *(__m128i *)(v132 - 160) = _mm_loadu_si128((const __m128i *)v133 - 10);
        *(__m128i *)(v132 - 144) = _mm_loadu_si128((const __m128i *)v133 - 9);
        *(__m128i *)(v132 - 120) = _mm_loadu_si128((const __m128i *)(v133 - 120));
        *(__m128i *)(v132 - 104) = _mm_loadu_si128((const __m128i *)(v133 - 104));
        *(__m128i *)(v132 - 88) = _mm_loadu_si128((const __m128i *)(v133 - 88));
        *(__m128i *)(v132 - 72) = _mm_loadu_si128((const __m128i *)(v133 - 72));
        *(__m128i *)(v132 - 56) = _mm_loadu_si128((const __m128i *)(v133 - 56));
        *(__m128i *)(v132 - 40) = _mm_loadu_si128((const __m128i *)(v133 - 40));
        *(__m128i *)(v132 - 24) = _mm_loadu_si128((const __m128i *)(v133 - 24));
      }
      while ( v132 != v136 );
      v154 = (int)v135 + 1LL;
      v133 = &v212[960 * v154];
      v132 = v134 + 960 * v154;
    }
    switch ( v219 & 7 )
    {
      case 0:
        break;
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
        v155 = *((_QWORD *)v133 + 104);
        *(__m128i *)(v132 + 720) = _mm_loadu_si128((const __m128i *)v133 + 45);
        v156 = _mm_loadu_si128((const __m128i *)v133 + 46);
        *(_QWORD *)(v132 + 832) = v155;
        *(__m128i *)(v132 + 736) = v156;
        *(__m128i *)(v132 + 752) = _mm_loadu_si128((const __m128i *)v133 + 47);
        *(__m128i *)(v132 + 768) = _mm_loadu_si128((const __m128i *)v133 + 48);
        *(__m128i *)(v132 + 784) = _mm_loadu_si128((const __m128i *)v133 + 49);
        *(__m128i *)(v132 + 800) = _mm_loadu_si128((const __m128i *)v133 + 50);
        *(__m128i *)(v132 + 816) = _mm_loadu_si128((const __m128i *)v133 + 51);
LABEL_150:
        v157 = _mm_loadu_si128((const __m128i *)(v133 + 600));
        *(_QWORD *)(v132 + 712) = *((_QWORD *)v133 + 89);
        *(__m128i *)(v132 + 600) = v157;
        *(__m128i *)(v132 + 616) = _mm_loadu_si128((const __m128i *)(v133 + 616));
        *(__m128i *)(v132 + 632) = _mm_loadu_si128((const __m128i *)(v133 + 632));
        *(__m128i *)(v132 + 648) = _mm_loadu_si128((const __m128i *)(v133 + 648));
        *(__m128i *)(v132 + 664) = _mm_loadu_si128((const __m128i *)(v133 + 664));
        *(__m128i *)(v132 + 680) = _mm_loadu_si128((const __m128i *)(v133 + 680));
        *(__m128i *)(v132 + 696) = _mm_loadu_si128((const __m128i *)(v133 + 696));
LABEL_151:
        v158 = _mm_loadu_si128((const __m128i *)v133 + 30);
        *(_QWORD *)(v132 + 592) = *((_QWORD *)v133 + 74);
        *(__m128i *)(v132 + 480) = v158;
        *(__m128i *)(v132 + 496) = _mm_loadu_si128((const __m128i *)v133 + 31);
        *(__m128i *)(v132 + 512) = _mm_loadu_si128((const __m128i *)v133 + 32);
        *(__m128i *)(v132 + 528) = _mm_loadu_si128((const __m128i *)v133 + 33);
        *(__m128i *)(v132 + 544) = _mm_loadu_si128((const __m128i *)v133 + 34);
        *(__m128i *)(v132 + 560) = _mm_loadu_si128((const __m128i *)v133 + 35);
        *(__m128i *)(v132 + 576) = _mm_loadu_si128((const __m128i *)v133 + 36);
LABEL_152:
        v159 = _mm_loadu_si128((const __m128i *)(v133 + 360));
        *(_QWORD *)(v132 + 472) = *((_QWORD *)v133 + 59);
        *(__m128i *)(v132 + 360) = v159;
        *(__m128i *)(v132 + 376) = _mm_loadu_si128((const __m128i *)(v133 + 376));
        *(__m128i *)(v132 + 392) = _mm_loadu_si128((const __m128i *)(v133 + 392));
        *(__m128i *)(v132 + 408) = _mm_loadu_si128((const __m128i *)(v133 + 408));
        *(__m128i *)(v132 + 424) = _mm_loadu_si128((const __m128i *)(v133 + 424));
        *(__m128i *)(v132 + 440) = _mm_loadu_si128((const __m128i *)(v133 + 440));
        *(__m128i *)(v132 + 456) = _mm_loadu_si128((const __m128i *)(v133 + 456));
LABEL_153:
        v160 = _mm_loadu_si128((const __m128i *)v133 + 15);
        *(_QWORD *)(v132 + 352) = *((_QWORD *)v133 + 44);
        *(__m128i *)(v132 + 240) = v160;
        *(__m128i *)(v132 + 256) = _mm_loadu_si128((const __m128i *)v133 + 16);
        *(__m128i *)(v132 + 272) = _mm_loadu_si128((const __m128i *)v133 + 17);
        *(__m128i *)(v132 + 288) = _mm_loadu_si128((const __m128i *)v133 + 18);
        *(__m128i *)(v132 + 304) = _mm_loadu_si128((const __m128i *)v133 + 19);
        *(__m128i *)(v132 + 320) = _mm_loadu_si128((const __m128i *)v133 + 20);
        *(__m128i *)(v132 + 336) = _mm_loadu_si128((const __m128i *)v133 + 21);
LABEL_154:
        v161 = _mm_loadu_si128((const __m128i *)(v133 + 120));
        *(_QWORD *)(v132 + 232) = *((_QWORD *)v133 + 29);
        *(__m128i *)(v132 + 120) = v161;
        *(__m128i *)(v132 + 136) = _mm_loadu_si128((const __m128i *)(v133 + 136));
        *(__m128i *)(v132 + 152) = _mm_loadu_si128((const __m128i *)(v133 + 152));
        *(__m128i *)(v132 + 168) = _mm_loadu_si128((const __m128i *)(v133 + 168));
        *(__m128i *)(v132 + 184) = _mm_loadu_si128((const __m128i *)(v133 + 184));
        *(__m128i *)(v132 + 200) = _mm_loadu_si128((const __m128i *)(v133 + 200));
        *(__m128i *)(v132 + 216) = _mm_loadu_si128((const __m128i *)(v133 + 216));
LABEL_155:
        *(__m128i *)v132 = _mm_loadu_si128((const __m128i *)v133);
        *(__m128i *)(v132 + 16) = _mm_loadu_si128((const __m128i *)v133 + 1);
        *(__m128i *)(v132 + 32) = _mm_loadu_si128((const __m128i *)v133 + 2);
        *(__m128i *)(v132 + 48) = _mm_loadu_si128((const __m128i *)v133 + 3);
        *(__m128i *)(v132 + 64) = _mm_loadu_si128((const __m128i *)v133 + 4);
        *(__m128i *)(v132 + 80) = _mm_loadu_si128((const __m128i *)v133 + 5);
        v162 = _mm_loadu_si128((const __m128i *)v133 + 6);
        v163 = *((_QWORD *)v133 + 14);
        *(__m128i *)(v132 + 96) = v162;
        *(_QWORD *)(v132 + 112) = v163;
        break;
    }
  }
  v164 = (CoinPresolveMatrix *)operator new(0x20u);
  *((_QWORD *)v164 + 3) = v134;
  *((_QWORD *)v164 + 1) = a2;
  *(_QWORD *)v164 = &off_4D2088;
  *((_DWORD *)v164 + 4) = v219;
  if ( v220 )
    v164 = (CoinPresolveMatrix *)drop_zero_coefficients_action::presolve(this, v222, (int *)v220, (int)v164, v165);
LABEL_158:
  operator delete[](v212);
  return v164;
}

