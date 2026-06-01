CoinPresolveMatrix *__fastcall doubleton_action::presolve(
        doubleton_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  int v3; // r14d
  int v4; // ebp
  int *v5; // rbx
  unsigned __int64 v6; // rax
  __m128d v7; // xmm15
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  int *v11; // r14
  int v12; // r13d
  int v13; // eax
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // r15
  int v17; // r11d
  int v18; // esi
  __int64 v19; // rcx
  double v20; // xmm7_8
  double v21; // xmm3_8
  __int64 v22; // r9
  double v23; // xmm9_8
  double v24; // xmm4_8
  int v25; // r8d
  __int64 i; // rdx
  double v27; // xmm2_8
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rdi
  double v31; // xmm5_8
  int v32; // edx
  int v33; // esi
  int v34; // eax
  int *v35; // rax
  __int64 v36; // rdx
  __int8 *v37; // r9
  __int64 v38; // xmm1_8
  __int64 v39; // xmm1_8
  int v40; // edx
  int v41; // eax
  __int64 v42; // rax
  int v43; // r11d
  __int64 v44; // r10
  double v45; // xmm5_8
  double v46; // xmm1_8
  double v47; // xmm3_8
  double v48; // xmm4_8
  double v49; // xmm3_8
  __m128d v50; // xmm5
  __m128d v51; // xmm3
  __m128d v52; // xmm5
  __m128d v53; // xmm4
  __m128d v54; // xmm7
  __m128d v55; // xmm5
  __m128d v56; // xmm10
  __m128d v57; // xmm5
  __m128d v58; // xmm5
  __int64 v59; // rsi
  char *v60; // rcx
  char v61; // dl
  int v62; // eax
  double *v63; // rsi
  double v64; // xmm5_8
  double v65; // xmm6_8
  double v66; // xmm5_8
  _BYTE *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  int v71; // ecx
  int *v72; // rdx
  unsigned __int64 v73; // rdi
  __int64 v74; // r8
  _BYTE *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rdx
  int v79; // esi
  int *v80; // rax
  unsigned __int64 v81; // rsi
  __int64 v82; // r9
  _BYTE *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdi
  int *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rsi
  int *v90; // rdx
  int v91; // r8d
  __int64 v92; // rcx
  __int64 v93; // rax
  double v94; // xmm3_8
  int *v95; // r10
  int v96; // edx
  __int64 v97; // rax
  int v98; // r13d
  int v99; // ebx
  __int64 v100; // rax
  int v101; // r14d
  int minor1; // eax
  double *v103; // rax
  __int64 v104; // rdi
  double v105; // xmm0_8
  __int64 v106; // r9
  int *v107; // r10
  __int64 j; // rdx
  int v109; // r11d
  int *v110; // rax
  int v111; // r8d
  double *v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r9
  __int64 v116; // xmm0_8
  __int64 v117; // rdi
  double v118; // xmm1_8
  double v119; // xmm0_8
  double *v120; // rdi
  int v121; // ecx
  __int64 v122; // rax
  doubleton_action *v123; // r15
  unsigned int v124; // ebx
  __int64 v125; // rax
  __m128i *v126; // rcx
  __int64 v127; // r12
  __int64 v128; // rsi
  const __m128i *v129; // rdx
  __int64 v130; // rdi
  __m128i v131; // xmm0
  __int64 v132; // rcx
  __m128i v133; // xmm0
  __int64 v134; // rcx
  __m128i v135; // xmm0
  __int64 v136; // rcx
  __m128i v137; // xmm0
  __int64 v138; // rcx
  __m128i v139; // xmm0
  __int64 v140; // rcx
  __m128i v141; // xmm0
  __int64 v142; // rcx
  __m128i v143; // xmm0
  __int64 v144; // rcx
  __m128i v145; // xmm0
  __int64 v146; // rcx
  __m128i v147; // xmm0
  __int64 v148; // rax
  CoinPresolveMatrix *v149; // rbp
  char v151; // r9
  __int64 v152; // rdx
  __m128i v153; // xmm0
  __m128i v154; // xmm0
  __m128i v155; // xmm0
  __m128i v156; // xmm0
  __m128i v157; // xmm0
  __m128i v158; // xmm0
  __m128i v159; // xmm0
  const CoinPresolveAction *v160; // r8
  double v161; // xmm10_8
  double v162; // xmm11_8
  int v163; // esi
  double v164; // xmm7_8
  __int64 v165; // xmm10_8
  __int64 v166; // xmm11_8
  double v167; // xmm4_8
  double v168; // xmm9_8
  double v169; // xmm4_8
  __m128d v170; // xmm7
  __m128d v171; // xmm1
  double v172; // xmm1_8
  double *v173; // rax
  double *v174; // rax
  int *v175; // rax
  __int64 v176; // rax
  int v177; // esi
  double v178; // xmm3_8
  double v179; // xmm9_8
  __m128d v180; // xmm7
  __m128d v181; // xmm1
  double v182; // xmm1_8
  double *v183; // rax
  double *v184; // rax
  int *v185; // rax
  __int64 v186; // rax
  const char *v187; // rdx
  int v188; // eax
  __int64 v189; // rsi
  int v190; // r8d
  int *v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rax
  __int64 v194; // r8
  _DWORD *v195; // rdx
  double v196; // xmm1_8
  double *v197; // rax
  double *v198; // rax
  double v199; // xmm9_8
  double v200; // xmm12_8
  double v201; // xmm5_8
  __int64 v202; // rax
  int *v203; // rsi
  __int64 v204; // rcx
  double *v205; // rdi
  __int64 v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rax
  int *v209; // rdi
  __int64 v210; // rcx
  double *v211; // r8
  __int64 v212; // rax
  __int64 v213; // rdx
  double v214; // xmm4_8
  double v215; // xmm9_8
  CoinMessageHandler *v216; // rbp
  CoinMessageHandler *v217; // rax
  CoinMessageHandler *v218; // rax
  CoinMessageHandler *v219; // rax
  __int64 v220; // rax
  __int64 v221; // [rsp+0h] [rbp-208h]
  double v222; // [rsp+0h] [rbp-208h]
  __int64 v223; // [rsp+8h] [rbp-200h]
  __int64 v224; // [rsp+8h] [rbp-200h]
  __int64 v225; // [rsp+10h] [rbp-1F8h]
  __int64 v226; // [rsp+18h] [rbp-1F0h]
  int *v227; // [rsp+20h] [rbp-1E8h]
  double *v228; // [rsp+28h] [rbp-1E0h]
  __int64 v229; // [rsp+30h] [rbp-1D8h]
  __int64 v230; // [rsp+38h] [rbp-1D0h]
  __int64 *v231; // [rsp+40h] [rbp-1C8h]
  double *v233; // [rsp+50h] [rbp-1B8h]
  int *v234; // [rsp+58h] [rbp-1B0h]
  char v235; // [rsp+60h] [rbp-1A8h]
  int v236; // [rsp+60h] [rbp-1A8h]
  __int64 v237; // [rsp+68h] [rbp-1A0h]
  double v238; // [rsp+68h] [rbp-1A0h]
  int v239; // [rsp+68h] [rbp-1A0h]
  int v240; // [rsp+70h] [rbp-198h]
  __int64 v241; // [rsp+80h] [rbp-188h]
  __int64 v242; // [rsp+88h] [rbp-180h]
  double *v243; // [rsp+90h] [rbp-178h]
  double v244; // [rsp+90h] [rbp-178h]
  double *v245; // [rsp+98h] [rbp-170h]
  double v246; // [rsp+98h] [rbp-170h]
  double *v247; // [rsp+A0h] [rbp-168h]
  int v248; // [rsp+A0h] [rbp-168h]
  double *v249; // [rsp+A8h] [rbp-160h]
  int v250; // [rsp+A8h] [rbp-160h]
  int *v251; // [rsp+B0h] [rbp-158h]
  __int64 v252; // [rsp+B8h] [rbp-150h]
  double v253; // [rsp+B8h] [rbp-150h]
  __int64 v254; // [rsp+C0h] [rbp-148h]
  int v255; // [rsp+C0h] [rbp-148h]
  int *v256; // [rsp+C8h] [rbp-140h]
  int *v257; // [rsp+D0h] [rbp-138h]
  __int64 v258; // [rsp+D8h] [rbp-130h]
  __int64 v259; // [rsp+E0h] [rbp-128h]
  __int64 v260; // [rsp+E8h] [rbp-120h]
  __int64 v261; // [rsp+F0h] [rbp-118h]
  __m128i *v262; // [rsp+F8h] [rbp-110h]
  int v263; // [rsp+100h] [rbp-108h]
  __int64 v264; // [rsp+108h] [rbp-100h]
  int v265; // [rsp+110h] [rbp-F8h]
  int v266; // [rsp+114h] [rbp-F4h]
  __int64 v268; // [rsp+120h] [rbp-E8h]
  __int64 v269; // [rsp+128h] [rbp-E0h]
  CoinPresolveMatrix *v270; // [rsp+130h] [rbp-D8h]
  _BYTE *v271; // [rsp+138h] [rbp-D0h]
  int *v272; // [rsp+138h] [rbp-D0h]
  __int64 v273; // [rsp+140h] [rbp-C8h]
  unsigned int v274; // [rsp+148h] [rbp-C0h]
  bool v275; // [rsp+14Fh] [rbp-B9h]
  CoinPresolveMatrix *v276; // [rsp+150h] [rbp-B8h]
  char v277; // [rsp+158h] [rbp-B0h]
  double *v278; // [rsp+158h] [rbp-B0h]
  double v279; // [rsp+160h] [rbp-A8h]
  __int64 v280; // [rsp+170h] [rbp-98h]
  int v281; // [rsp+180h] [rbp-88h]
  int v282; // [rsp+184h] [rbp-84h]
  int v283; // [rsp+184h] [rbp-84h]
  double v284; // [rsp+190h] [rbp-78h]
  __int8 *v285; // [rsp+198h] [rbp-70h]
  _BYTE v286[88]; // [rsp+1B0h] [rbp-58h] BYREF

  v3 = *(_DWORD *)this;
  v258 = *((_QWORD *)this + 5);
  v266 = *(_DWORD *)this;
  v223 = *((_QWORD *)this + 38);
  v229 = *((_QWORD *)this + 6);
  v228 = *((double **)this + 8);
  v227 = *((int **)this + 7);
  v261 = *((_QWORD *)this + 32);
  v259 = *((_QWORD *)this + 11);
  v260 = *((_QWORD *)this + 12);
  v230 = *((_QWORD *)this + 35);
  v221 = *((_QWORD *)this + 36);
  v241 = *((_QWORD *)this + 37);
  v4 = *((_DWORD *)this + 104);
  v5 = *((int **)this + 51);
  v269 = *((_QWORD *)this + 33);
  v279 = *((double *)this + 17);
  v225 = *((_QWORD *)this + 13);
  v226 = *((_QWORD *)this + 14);
  v268 = *((_QWORD *)this + 39);
  v273 = *((_QWORD *)this + 9);
  v6 = *((int *)this + 1);
  if ( v6 > 0x1745D1745D1745DLL )
    __cxa_throw_bad_array_new_length();
  v262 = (__m128i *)operator new[](88 * v6);
  v280 = *((_QWORD *)this + 22);
  v270 = *((CoinPresolveMatrix **)this + 58);
  v276 = (CoinPresolveMatrix *)((char *)v270 + 4 * v3);
  v264 = *((_QWORD *)this + 20);
  v281 = *((_DWORD *)this + 109) & 0x4000;
  if ( v4 <= 0 )
  {
LABEL_134:
    v149 = a2;
    goto LABEL_135;
  }
  v7 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v274 = 0;
  v240 = 0;
  v8 = (unsigned int)(v4 - 1);
  v9 = v223;
  v275 = v264 != 0 && *((_QWORD *)this + 25) != 0;
  v224 = (__int64)&v5[v8 + 1];
  do
  {
    while ( 1 )
    {
      v10 = *v5;
      v11 = (int *)(v221 + 4 * v10);
      v12 = *v5;
      v13 = *v11;
      if ( *v11 != 2 )
        goto LABEL_124;
      v14 = *(double *)(8 * v10 + v225);
      v233 = (double *)(8 * v10 + v226);
      v231 = (__int64 *)(8 * v10 + v225);
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v233 - v14) & *(_QWORD *)&v7.m128d_f64[0]) > 1.0e-12 )
        goto LABEL_124;
      v15 = *(int *)(v230 + 4 * v10);
      v16 = *(int *)(v9 + 4 * v15);
      v265 = *(_DWORD *)(v9 + 4 * v15 + 4);
      v17 = *(_DWORD *)(v9 + 4 * v15);
      v18 = *(_DWORD *)(4 * v16 + v229);
      v234 = (int *)(4 * v16 + v229);
      if ( v18 == 1 && *(_DWORD *)(v229 + 4LL * v265) == 1 )
        break;
      v19 = *((_QWORD *)this + 45);
      v235 = *(_BYTE *)(v19 + v16) & 2;
      if ( v235 && (*(_BYTE *)(v19 + v265) & 2) != 0 )
        goto LABEL_124;
      if ( COERCE_DOUBLE(*(_QWORD *)(v241 + 8 * v15) & *(_QWORD *)&v7.m128d_f64[0]) < 1.0e-10 )
        goto LABEL_124;
      if ( COERCE_DOUBLE(*(_QWORD *)(v241 + 8 * v15 + 8) & *(_QWORD *)&v7.m128d_f64[0]) < 1.0e-10 )
        goto LABEL_124;
      v242 = 8 * v16;
      v20 = *(double *)(8 * v16 + v260);
      v245 = (double *)(8 * v16 + v260);
      v21 = *(double *)(v259 + 8 * v16);
      v247 = (double *)(v259 + 8 * v16);
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20 - v21) & *(_QWORD *)&v7.m128d_f64[0]) < 1.0e-12 )
        goto LABEL_124;
      v237 = v265;
      v22 = 8LL * v265;
      v252 = v22;
      v23 = *(double *)(v22 + v260);
      v243 = (double *)(v22 + v260);
      v24 = *(double *)(v22 + v259);
      v249 = (double *)(v22 + v259);
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23 - v24) & *(_QWORD *)&v7.m128d_f64[0]) < 1.0e-12 )
        goto LABEL_124;
      v25 = *(_DWORD *)(v258 + 4 * v16);
      v256 = (int *)(v258 + 4 * v16);
      v254 = v25;
      v263 = v18 + v25;
      if ( v25 >= v18 + v25 || v12 == v227[v25] )
      {
        i = v25;
      }
      else
      {
        for ( i = v25 + 1LL; v25 + 1LL + (unsigned int)(v18 - 1) != i && v12 != v227[i]; ++i )
          ;
      }
      v27 = v228[i];
      v257 = (int *)(v258 + 4LL * v265);
      v28 = *(_DWORD *)(v229 + 4LL * v265);
      v251 = (int *)(v229 + 4LL * v265);
      v29 = *v257;
      v282 = *v257 + v28;
      if ( *v257 < v282 && v227[v29] != v12 )
      {
        v30 = ++v29 + (unsigned int)(v28 - 1);
        while ( v30 != v29 && v12 != v227[v29] )
          ++v29;
      }
      v31 = v228[v29];
      v32 = *(unsigned __int8 *)(v268 + v16);
      v277 = *((_BYTE *)this + 440);
      v271 = (_BYTE *)(v265 + v268);
      v33 = (unsigned __int8)*v271;
      if ( v277 )
      {
        v151 = *(_BYTE *)(v19 + v265) & 2;
        if ( v235 )
        {
          if ( v151 )
            goto LABEL_153;
          v13 = 2 * v33;
          v32 = 1;
        }
        else
        {
          v177 = 2 * v33;
          if ( !v151 )
            v13 = v177;
        }
      }
      else
      {
        v13 = 2 * v33;
      }
      v34 = v32 | v13;
      if ( v34 != 3 )
      {
        if ( v34 == 2 )
          goto LABEL_31;
        if ( !v34 )
        {
          if ( COERCE_DOUBLE(*(_QWORD *)&v27 & *(_QWORD *)&v7.m128d_f64[0]) > COERCE_DOUBLE(
                                                                                *(_QWORD *)&v31
                                                                              & *(_QWORD *)&v7.m128d_f64[0]) )
            goto LABEL_31;
          v182 = v31;
          v25 = *v257;
          v271 = (_BYTE *)(v268 + v16);
          v31 = v27;
          v254 = *v257;
          v183 = v243;
          v243 = (double *)(8 * v16 + v260);
          v27 = v182;
          v24 = *(double *)(v259 + 8 * v16);
          v245 = v183;
          v184 = v249;
          v249 = (double *)(v259 + 8 * v16);
          v247 = v184;
          v252 = 8 * v16;
          v242 = 8LL * v265;
          v263 = v282;
          v175 = (int *)(4 * v16 + v229);
          v234 = (int *)(v229 + 4LL * v265);
          goto LABEL_185;
        }
        goto LABEL_209;
      }
LABEL_153:
      if ( v27 < 0.0 )
      {
        v162 = -v27;
        v161 = v14 + 1.0;
      }
      else
      {
        v161 = *(double *)(8 * v10 + v225);
        v162 = v27;
      }
      if ( v20 == 1.0
        && v21 == 0.0
        && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v162 - 1.0) & *(_QWORD *)&v7.m128d_f64[0]) < 0.0000001 )
      {
        v163 = 1;
        if ( v277 )
          v163 = ((*(_BYTE *)(v19 + v265) >> 1) ^ 1) & 1;
      }
      else
      {
        v163 = 0;
      }
      v164 = v31;
      if ( v31 < 0.0 )
      {
        v164 = -v31;
        v161 = v161 + 1.0;
      }
      if ( v24 == 0.0
        && v23 == 1.0
        && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v164 - 1.0) & *(_QWORD *)&v7.m128d_f64[0]) < 0.0000001
        && (!v235 || !v277)
        && v163
        && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v161 - 1.0) & *(_QWORD *)&v7.m128d_f64[0]) < 0.0000001 )
      {
        goto LABEL_171;
      }
      v165 = *(_QWORD *)&v27 & *(_QWORD *)&v7.m128d_f64[0];
      v166 = *(_QWORD *)&v31 & *(_QWORD *)&v7.m128d_f64[0];
      if ( v14 != 0.0 )
        goto LABEL_176;
      if ( *(double *)&v165 > *(double *)&v166 )
      {
        *(_QWORD *)&v167 = COERCE_UNSIGNED_INT64(v27 / v31) & *(_QWORD *)&v7.m128d_f64[0];
        v168 = v167 + 0.5;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v167 + 0.5) & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
          *(_QWORD *)&v168 = COERCE_UNSIGNED_INT64((double)(int)(v167 + 0.5))
                           | ~*(_QWORD *)&v7.m128d_f64[0] & COERCE_UNSIGNED_INT64(v167 + 0.5);
        *(_QWORD *)&v169 = COERCE_UNSIGNED_INT64(v167 - v168) & *(_QWORD *)&v7.m128d_f64[0];
        if ( v169 >= 1.0e-12 )
          goto LABEL_167;
LABEL_209:
        v271 = (_BYTE *)(v268 + v16);
        v196 = v31;
        v24 = *(double *)(v259 + 8 * v16);
        v254 = *v257;
        v197 = v243;
        v243 = (double *)(8 * v16 + v260);
        v31 = v27;
        v25 = *v257;
        v245 = v197;
        v198 = v249;
        v249 = (double *)(v259 + 8 * v16);
        v27 = v196;
        v247 = v198;
        v252 = 8 * v16;
        v242 = 8LL * v265;
        v263 = v282;
        v234 = (int *)(v229 + 4LL * v265);
        v251 = (int *)(4 * v16 + v229);
        v185 = (int *)(v258 + 4 * v16);
        v256 = (int *)(v258 + 4LL * v265);
        goto LABEL_186;
      }
      *(_QWORD *)&v199 = COERCE_UNSIGNED_INT64(v31 / v27) & *(_QWORD *)&v7.m128d_f64[0];
      v200 = v199 + 0.5;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v199 + 0.5) & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
        *(_QWORD *)&v200 = COERCE_UNSIGNED_INT64((double)(int)v200)
                         | ~*(_QWORD *)&v7.m128d_f64[0] & COERCE_UNSIGNED_INT64(v199 + 0.5);
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v199 - v200) & *(_QWORD *)&v7.m128d_f64[0]) >= 1.0e-12 )
      {
LABEL_176:
        if ( *(double *)&v165 > *(double *)&v166 )
        {
          *(_QWORD *)&v214 = COERCE_UNSIGNED_INT64(v27 / v31) & *(_QWORD *)&v7.m128d_f64[0];
          v215 = v214 + 0.5;
          if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v214 + 0.5) & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
            *(_QWORD *)&v215 = COERCE_UNSIGNED_INT64((double)(int)v215)
                             | ~*(_QWORD *)&v7.m128d_f64[0] & COERCE_UNSIGNED_INT64(v214 + 0.5);
          *(_QWORD *)&v169 = COERCE_UNSIGNED_INT64(v214 - v215) & *(_QWORD *)&v7.m128d_f64[0];
LABEL_167:
          if ( v169 >= 1.0e-12 )
            goto LABEL_124;
          v170.m128d_f64[0] = v14 / v27 + 0.5;
          if ( COERCE_DOUBLE(*(_QWORD *)&v170.m128d_f64[0] & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
          {
            v171 = 0;
            v171.m128d_f64[0] = (double)(int)v170.m128d_f64[0];
            *(_QWORD *)&v170.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                              v171.m128d_f64[0]
                                            - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v171, v170).m128d_f64[0] & 0x3FF0000000000000LL))
                                          | ~*(_QWORD *)&v7.m128d_f64[0] & *(_QWORD *)&v170.m128d_f64[0];
          }
          if ( v170.m128d_f64[0] != v14 / v27 )
            goto LABEL_124;
LABEL_171:
          v271 = (_BYTE *)(v268 + v16);
          v172 = v31;
          v24 = *(double *)(v259 + 8 * v16);
          v254 = *v257;
          v173 = v243;
          v243 = (double *)(8 * v16 + v260);
          v31 = v27;
          v25 = *v257;
          v245 = v173;
          v174 = v249;
          v249 = (double *)(v259 + 8 * v16);
          v27 = v172;
          v247 = v174;
          v252 = 8 * v16;
          v242 = 8LL * v265;
          v263 = v282;
          v175 = (int *)(4 * v16 + v229);
          v234 = (int *)(v229 + 4LL * v265);
LABEL_185:
          v251 = v175;
          v185 = (int *)(v258 + 4 * v16);
          v256 = (int *)(v258 + 4LL * v265);
LABEL_186:
          v257 = v185;
          v186 = v16;
          v16 = v265;
          v237 = v186;
          LODWORD(v186) = v265;
          v265 = v17;
          v17 = v186;
          goto LABEL_31;
        }
        *(_QWORD *)&v178 = COERCE_UNSIGNED_INT64(v31 / v27) & *(_QWORD *)&v7.m128d_f64[0];
        v179 = v178 + 0.5;
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v178 + 0.5) & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
          *(_QWORD *)&v179 = COERCE_UNSIGNED_INT64((double)(int)v179)
                           | ~*(_QWORD *)&v7.m128d_f64[0] & COERCE_UNSIGNED_INT64(v178 + 0.5);
        if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v178 - v179) & *(_QWORD *)&v7.m128d_f64[0]) >= 1.0e-12 )
          goto LABEL_124;
        v180.m128d_f64[0] = v14 / v31 + 0.5;
        if ( COERCE_DOUBLE(*(_QWORD *)&v180.m128d_f64[0] & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v181 = 0;
          v181.m128d_f64[0] = (double)(int)v180.m128d_f64[0];
          *(_QWORD *)&v180.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                            v181.m128d_f64[0]
                                          - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v181, v180).m128d_f64[0] & 0x3FF0000000000000LL))
                                        | ~*(_QWORD *)&v7.m128d_f64[0] & *(_QWORD *)&v180.m128d_f64[0];
        }
        if ( v14 / v31 != v180.m128d_f64[0] )
          goto LABEL_124;
      }
LABEL_31:
      if ( v25 < v263 )
      {
        if ( *(_DWORD *)(v221 + 4LL * v227[v254]) == 1 )
          goto LABEL_124;
        v35 = &v227[v25 + 1];
        while ( &v227[(unsigned int)(v263 - 1 - v25) + 1 + (__int64)v25] != v35 )
        {
          v36 = *v35++;
          if ( *(_DWORD *)(v221 + 4 * v36) == 1 )
            goto LABEL_124;
        }
      }
      if ( !v277 || (*(_BYTE *)(v19 + v16) & 2) == 0 )
      {
        v37 = &v262->m128i_i8[88 * v240];
        *(double *)v37 = v24;
        *((_DWORD *)v37 + 18) = v12;
        *((_DWORD *)v37 + 16) = v265;
        *((double *)v37 + 1) = *v243;
        v38 = *(_QWORD *)(v273 + v252);
        *((_DWORD *)v37 + 17) = v17;
        *((_QWORD *)v37 + 2) = v38;
        v278 = (double *)(v242 + v273);
        *((_QWORD *)v37 + 3) = *(_QWORD *)(v242 + v273);
        v39 = *v231;
        *((double *)v37 + 5) = v31;
        *((_QWORD *)v37 + 4) = v39;
        *((double *)v37 + 6) = v27;
        v40 = *v251;
        *((_DWORD *)v37 + 19) = *v251;
        v41 = *v234;
        *((_DWORD *)v37 + 20) = *v234;
        v285 = v37;
        v283 = v17;
        v284 = v31;
        if ( v40 > v41 )
        {
          v176 = presolve_dupmajor(v228, v227, *v234, *v256, v12);
          v44 = 8 * v10;
          v43 = v283;
          *((_QWORD *)v285 + 7) = v176;
          *((_DWORD *)v285 + 19) = 0;
          v45 = v284;
        }
        else
        {
          v42 = presolve_dupmajor(v228, v227, *v251, *v257, v12);
          v43 = v283;
          v44 = 8 * v10;
          v45 = v284;
          *((_QWORD *)v285 + 7) = v42;
          *((_DWORD *)v285 + 20) = 0;
        }
        v46 = -v45;
        v47 = *v245;
        if ( *v247 <= -1.797693134862316e308 )
        {
          v48 = 1.797693134862316e308;
          if ( v47 < 1.797693134862316e308 )
            goto LABEL_43;
        }
        else
        {
          v48 = (*v247 * v27 - v14) / v46;
          if ( v45 * v27 < 0.0 )
          {
            if ( v47 >= 1.797693134862316e308 )
            {
              v49 = (*v247 * v27 - v14) / v46;
              v48 = 1.797693134862316e308;
            }
            else
            {
              v201 = v47 * v27 - v14;
              v49 = (*v247 * v27 - v14) / v46;
              v48 = v201 / v46;
            }
            goto LABEL_45;
          }
          if ( v47 < 1.797693134862316e308 )
          {
LABEL_43:
            v49 = (v47 * v27 - v14) / v46;
            if ( v45 * v27 < 0.0 )
            {
              v48 = v49;
              v49 = -1.797693134862316e308;
            }
LABEL_45:
            *(double *)(v273 + v252) = *v278 * v46 / v27 + *(double *)(v273 + v252);
            *((double *)this + 34) = *v278 * v14 / v27 + *((double *)this + 34);
            v50 = (__m128d)*(unsigned __int64 *)v249;
            v50.m128d_f64[0] = fmax(v50.m128d_f64[0], v49);
            v51 = v50;
            v52 = (__m128d)*(unsigned __int64 *)v243;
            v52.m128d_f64[0] = fmin(v52.m128d_f64[0], v48);
            v53 = v52;
            if ( v51.m128d_f64[0] > v52.m128d_f64[0] )
            {
              if ( *((double *)this + 42) + v52.m128d_f64[0] < v51.m128d_f64[0] && !v281 )
              {
                *((_DWORD *)this + 86) |= 1u;
                v216 = *((CoinMessageHandler **)this + 26);
                v123 = this;
                v222 = v52.m128d_f64[0];
                CoinMessages::CoinMessages((CoinMessages *)v286, (doubleton_action *)((char *)this + 224));
                v217 = (CoinMessageHandler *)CoinMessageHandler::message(v216, 15, (const CoinMessages *)v286);
                v218 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v217);
                v219 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v218);
                v220 = CoinMessageHandler::operator<<(v219);
                CoinMessageHandler::operator<<(v220, 0, v222);
                CoinMessages::~CoinMessages((CoinMessages *)v286);
                v124 = v240++;
                goto LABEL_127;
              }
              v54 = (__m128d)0x3FE0000000000000uLL;
              v54.m128d_f64[0] = v51.m128d_f64[0] + 0.5;
              v55 = v54;
              if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v51.m128d_f64[0] + 0.5) & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v56 = 0;
                v56.m128d_f64[0] = (double)(int)v54.m128d_f64[0];
                v56.m128d_f64[0] = v56.m128d_f64[0]
                                 - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v56, v54).m128d_f64[0] & 0x3FF0000000000000LL);
                v55 = _mm_or_pd(v56, _mm_andn_pd(v7, v54));
              }
              if ( *((double *)this + 42) + *((double *)this + 42) <= COERCE_DOUBLE(
                                                                        COERCE_UNSIGNED_INT64(v55.m128d_f64[0] - v51.m128d_f64[0])
                                                                      & *(_QWORD *)&v7.m128d_f64[0]) )
              {
                v51 = v53;
              }
              else
              {
                v53.m128d_f64[0] = v55.m128d_f64[0];
                v51 = v55;
              }
            }
            if ( *v271 )
            {
              v51.m128d_f64[0] = v51.m128d_f64[0] - 0.0000001;
              if ( COERCE_DOUBLE(*(_QWORD *)&v51.m128d_f64[0] & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v57.m128d_f64[0] = (double)(int)v51.m128d_f64[0];
                *(_QWORD *)&v51.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v51, v57).m128d_f64[0]
                                                 & 0x3FF0000000000000LL)
                                               + v57.m128d_f64[0])
                                             | ~*(_QWORD *)&v7.m128d_f64[0] & *(_QWORD *)&v51.m128d_f64[0];
              }
              v53.m128d_f64[0] = v53.m128d_f64[0] + 0.0000001;
              if ( COERCE_DOUBLE(*(_QWORD *)&v53.m128d_f64[0] & *(_QWORD *)&v7.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v58 = 0;
                v58.m128d_f64[0] = (double)(int)v53.m128d_f64[0];
                *(_QWORD *)&v53.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v58.m128d_f64[0]
                                               - COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v58, v53).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | ~*(_QWORD *)&v7.m128d_f64[0] & *(_QWORD *)&v53.m128d_f64[0];
              }
            }
            *v249 = v51.m128d_f64[0];
            *v243 = v53.m128d_f64[0];
            if ( v275 )
            {
              v59 = *((_QWORD *)this + 24);
              v60 = (char *)(v59 + v237);
              v61 = *(_BYTE *)(v59 + v237);
              v62 = ((*(_BYTE *)(*((_QWORD *)this + 25) + v10) & 7) == 1)
                  + ((*(_BYTE *)(v59 + v16) & 7) == 1)
                  + ((v61 & 7) == 1);
              v63 = (double *)(v264 + v252);
              v64 = *(double *)(v264 + v252);
              if ( v279 + v51.m128d_f64[0] >= v64 )
              {
                *v63 = v51.m128d_f64[0];
                v65 = v51.m128d_f64[0] - v64;
                *v60 = *v60 & 0xF8 | 3;
                goto LABEL_60;
              }
              if ( v64 < v53.m128d_f64[0] - v279 )
              {
                v65 = 0.0;
                if ( v62 > 1 )
                {
LABEL_62:
                  *v60 = v61 & 0xF8 | 1;
                  goto LABEL_63;
                }
              }
              else
              {
                *v63 = v53.m128d_f64[0];
                v65 = v53.m128d_f64[0] - v64;
                *v60 = *v60 & 0xF8 | 2;
LABEL_60:
                if ( v62 > 1 )
                {
                  v60 = (char *)(*((_QWORD *)this + 24) + v237);
                  v61 = *v60;
                  goto LABEL_62;
                }
LABEL_63:
                if ( v65 != 0.0 )
                {
                  v208 = *v257;
                  if ( (int)v208 < (int)v208 + *v251 )
                  {
                    v209 = &v227[v208];
                    v210 = (unsigned int)(*v251 - 1) + 1LL;
                    v211 = &v228[v208];
                    v212 = 0;
                    do
                    {
                      v213 = v209[v212];
                      if ( *(_DWORD *)(v221 + 4 * v213) )
                        *(double *)(v280 + 8 * v213) = v211[v212] * v65 + *(double *)(v280 + 8 * v213);
                      ++v212;
                    }
                    while ( v210 != v212 );
                  }
                }
                v64 = *v63;
              }
              v66 = v64 * v46 / v27 - *(double *)(v264 + v242);
              if ( v66 != 0.0 )
              {
                v202 = *v256;
                if ( (int)v202 < (int)v202 + *v234 )
                {
                  v203 = &v227[v202];
                  v204 = (unsigned int)(*v234 - 1) + 1LL;
                  v205 = &v228[v202];
                  v206 = 0;
                  do
                  {
                    v207 = v203[v206];
                    if ( *(_DWORD *)(v221 + 4 * v207) )
                      *(double *)(v280 + 8 * v207) = v205[v206] * v66 + *(double *)(v280 + 8 * v207);
                    ++v206;
                  }
                  while ( v204 != v206 );
                }
              }
            }
            if ( v51.m128d_f64[0] == v53.m128d_f64[0] )
              *((_DWORD *)v276 + (int)v274++) = v265;
            v67 = (_BYTE *)(*((_QWORD *)this + 45) + v237);
            if ( (*v67 & 1) == 0 )
            {
              *v67 |= 1u;
              v68 = *((int *)this + 98);
              v69 = *((_QWORD *)this + 48);
              *((_DWORD *)this + 98) = v68 + 1;
              *(_DWORD *)(v69 + 4 * v68) = v265;
            }
            v70 = *v256;
            v71 = *v256 + *v234;
            if ( *v256 < v71 )
            {
              v72 = &v227[v70];
              v73 = (unsigned __int64)&v227[v70 + 1 + (unsigned __int64)(unsigned int)(v71 - v70 - 1)];
              do
              {
                v74 = *v72;
                v75 = (_BYTE *)(*((_QWORD *)this + 50) + v74);
                if ( (*v75 & 1) == 0 )
                {
                  *v75 |= 1u;
                  v76 = *((int *)this + 108);
                  v77 = *((_QWORD *)this + 53);
                  *((_DWORD *)this + 108) = v76 + 1;
                  *(_DWORD *)(v77 + 4 * v76) = v74;
                }
                ++v72;
              }
              while ( (int *)v73 != v72 );
            }
            v78 = *v257;
            v79 = v78 + *v251;
            if ( (int)v78 >= v79 )
            {
              v87 = &v227[v78];
            }
            else
            {
              v80 = &v227[(int)v78];
              v81 = (unsigned __int64)&v227[(int)v78 + 1 + (unsigned __int64)(unsigned int)(*v251 - 1)];
              do
              {
                v82 = *v80;
                v83 = (_BYTE *)(*((_QWORD *)this + 50) + v82);
                if ( (*v83 & 1) == 0 )
                {
                  *v83 |= 1u;
                  v84 = *((int *)this + 108);
                  v85 = *((_QWORD *)this + 53);
                  *((_DWORD *)this + 108) = v84 + 1;
                  *(_DWORD *)(v85 + 4 * v84) = v82;
                }
                ++v80;
              }
              while ( (int *)v81 != v80 );
              v86 = *v257;
              v79 = v86 + *v251;
              v87 = &v227[v86];
              if ( (int)v86 >= v79 || v12 == *v87 )
              {
                v78 = *v257;
              }
              else
              {
                v78 = v86 + 1;
                v88 = (__int64)&v227[v86 + 1];
                while ( 1 )
                {
                  v87 = (int *)v88;
                  if ( &v227[(unsigned int)(*v251 - 1) + 1 + v86] == (int *)v88 )
                    break;
                  v88 += 4;
                  if ( v12 == *v87 )
                    break;
                  ++v78;
                }
              }
            }
            *v87 = v227[v79 - 1];
            v228[v78] = v228[v79 - 1];
            --*v251;
            v89 = *v256;
            v90 = &v227[v89];
            v91 = v89 + *v234;
            if ( (int)v89 >= v91 || v12 == *v90 )
            {
              v92 = *v256;
            }
            else
            {
              v92 = v89 + 1;
              v93 = (__int64)&v227[v89 + 1];
              while ( 1 )
              {
                v90 = (int *)v93;
                if ( &v227[(unsigned int)(*v234 - 1) + 1 + v89] == (int *)v93 )
                  break;
                v93 += 4;
                if ( v12 == *v90 )
                  break;
                ++v92;
              }
            }
            v94 = v228[v91 - 1];
            *v90 = v227[v91 - 1];
            v228[v92] = v94;
            --*v234;
            *v11 = 0;
            v95 = (int *)(v269 + v44);
            v96 = *v95;
            v97 = v95[1];
            if ( *v95 >= 0 )
              *(_DWORD *)(v269 + 8LL * v96 + 4) = v97;
            if ( (int)v97 >= 0 )
              *(_DWORD *)(v269 + 8 * v97) = v96;
            *(_QWORD *)v95 = 0xFC06BF56FC06BF56LL;
            v248 = *v257;
            v250 = *v256;
            v255 = *v234;
            v244 = v14 / v27;
            v253 = v46 / v27;
            if ( *v234 > 0 )
            {
              v236 = *v257 + *v251;
              v98 = 0;
              v272 = v5;
              v99 = v43;
              do
              {
                v100 = v98 + v250;
                v101 = v227[v100];
                v246 = v228[v100];
                v238 = v253 * v246;
                minor1 = presolve_find_minor1(v101, v248, v236, v227);
                if ( minor1 >= v236 )
                {
                  if ( (unsigned __int8)presolve_expand_major(v258, (int)v228, (int)v227, v229, v261, v266, v265) )
                    CoinPresolveAction::throwCoinError(
                      (CoinPresolveAction *)"out of memory",
                      "doubleton_action::presolve",
                      v187);
                  v248 = *v257;
                  v188 = *v251 + *v257;
                  v250 = *v256;
                  v236 = v188 + 1;
                  v227[v188] = v101;
                  v228[v188] = v238;
                  ++*v251;
                  v104 = v101;
                  v189 = *(int *)(v230 + 4LL * v101);
                  v190 = *(_DWORD *)(v221 + 4LL * v101);
                  v191 = (int *)(v9 + 4 * v189);
                  if ( (int)v189 >= (int)v189 + v190 || v99 == *v191 )
                  {
                    *v191 = v265;
                    *(double *)(v241 + 8 * v189) = v238;
                  }
                  else
                  {
                    v192 = v189 + 1;
                    v193 = v9 + 4 * v189 + 4;
                    v194 = v9 + 4 * ((unsigned int)(v190 - 1) + v189) + 4;
                    while ( 1 )
                    {
                      v195 = (_DWORD *)v193;
                      if ( v194 == v193 )
                        break;
                      v193 += 4;
                      if ( v99 == *v195 )
                        break;
                      ++v192;
                    }
                    *v195 = v265;
                    *(double *)(v241 + 8 * v192) = v238;
                  }
                }
                else
                {
                  v103 = &v228[minor1];
                  v104 = v101;
                  v105 = v238 + *v103;
                  *v103 = v105;
                  v106 = *(int *)(v230 + 4LL * v101);
                  v107 = (int *)(v221 + 4LL * v101);
                  j = v106;
                  v109 = *v107;
                  v110 = (int *)(v9 + 4 * v106);
                  v111 = v106 + *v107;
                  if ( (int)v106 >= v111 )
                  {
                    v112 = (double *)(v241 + 8 * v106);
                    *v112 = v105;
                  }
                  else
                  {
                    v239 = *v110;
                    if ( v265 != *v110 )
                    {
                      for ( j = v106 + 1;
                            v106 + 1 + (unsigned int)(v109 - 1) != j && v265 != *(_DWORD *)(v9 + 4 * (j + 1) - 4);
                            ++j )
                      {
                        ;
                      }
                    }
                    *(double *)(v241 + 8 * j) = v105;
                    v112 = (double *)(v241 + 8 * v106);
                    if ( v99 != v239 )
                    {
                      v113 = v106 + 1;
                      v114 = v9 + 4 * v106 + 4;
                      v115 = v9 + 4 * ((unsigned int)(v109 - 1) + v106) + 4;
                      while ( 1 )
                      {
                        v110 = (int *)v114;
                        if ( v115 == v114 )
                          break;
                        v114 += 4;
                        if ( v99 == *v110 )
                          break;
                        ++v113;
                      }
                      v112 = (double *)(v241 + 8 * v113);
                    }
                  }
                  v116 = *(_QWORD *)(v241 + 8LL * v111 - 8);
                  *v110 = *(_DWORD *)(v9 + 4LL * v111 - 4);
                  *(_QWORD *)v112 = v116;
                  --*v107;
                }
                if ( v244 != 0.0 )
                {
                  v117 = 8 * v104;
                  v118 = v246 * v244;
                  v119 = *(double *)(v117 + v225);
                  if ( v119 > -1.797693134862316e308 )
                    *(double *)(v117 + v225) = v119 - v118;
                  v120 = (double *)(v226 + v117);
                  if ( *v120 < 1.797693134862316e308 )
                    *v120 = *v120 - v118;
                }
                ++v98;
              }
              while ( v255 != v98 );
              v5 = v272;
            }
            *v234 = 0;
            v121 = *(_DWORD *)(v261 + v242);
            v122 = *(int *)(v261 + v242 + 4);
            if ( v121 >= 0 )
              *(_DWORD *)(v261 + 8LL * v121 + 4) = v122;
            if ( (int)v122 >= 0 )
              *(_DWORD *)(v261 + 8 * v122) = v121;
            *(_QWORD *)(v261 + v242) = 0xFC06BF56FC06BF56LL;
            *v278 = 0.0;
            *v231 = 0;
            *v233 = 0.0;
            *((_DWORD *)v270 + v240++) = v265;
            goto LABEL_124;
          }
        }
        v49 = -1.797693134862316e308;
        goto LABEL_45;
      }
LABEL_124:
      if ( (int *)v224 == ++v5 )
        goto LABEL_125;
    }
    ++v5;
  }
  while ( (int *)v224 != v5 );
LABEL_125:
  v123 = this;
  if ( !v240 )
    goto LABEL_134;
  v124 = v240;
LABEL_127:
  if ( *((_DWORD *)v123 + 86) )
    goto LABEL_134;
  v125 = operator new[](88LL * v240);
  v126 = v262;
  v127 = v125;
  if ( v262 != (__m128i *)v125 )
  {
    if ( v240 >> 3 > 0 )
    {
      v128 = (unsigned int)((v240 >> 3) - 1);
      v129 = v262;
      v130 = v125 + 704 * (v128 + 1);
      do
      {
        v131 = _mm_loadu_si128(v129);
        v125 += 704;
        v129 += 44;
        v132 = v129[-39].m128i_i64[0];
        *(__m128i *)(v125 - 704) = v131;
        v133 = _mm_loadu_si128(v129 - 43);
        *(_QWORD *)(v125 - 624) = v132;
        v134 = v129[-34].m128i_i64[1];
        *(__m128i *)(v125 - 688) = v133;
        v135 = _mm_loadu_si128(v129 - 42);
        *(_QWORD *)(v125 - 536) = v134;
        *(__m128i *)(v125 - 672) = v135;
        *(__m128i *)(v125 - 656) = _mm_loadu_si128(v129 - 41);
        *(__m128i *)(v125 - 640) = _mm_loadu_si128(v129 - 40);
        *(__m128i *)(v125 - 616) = _mm_loadu_si128((const __m128i *)((char *)v129 - 616));
        *(__m128i *)(v125 - 600) = _mm_loadu_si128((const __m128i *)((char *)v129 - 600));
        *(__m128i *)(v125 - 584) = _mm_loadu_si128((const __m128i *)((char *)v129 - 584));
        *(__m128i *)(v125 - 568) = _mm_loadu_si128((const __m128i *)((char *)v129 - 568));
        *(__m128i *)(v125 - 552) = _mm_loadu_si128((const __m128i *)((char *)v129 - 552));
        *(__m128i *)(v125 - 528) = _mm_loadu_si128(v129 - 33);
        *(__m128i *)(v125 - 512) = _mm_loadu_si128(v129 - 32);
        *(__m128i *)(v125 - 496) = _mm_loadu_si128(v129 - 31);
        *(__m128i *)(v125 - 480) = _mm_loadu_si128(v129 - 30);
        v136 = v129[-28].m128i_i64[0];
        *(__m128i *)(v125 - 464) = _mm_loadu_si128(v129 - 29);
        v137 = _mm_loadu_si128((const __m128i *)((char *)v129 - 440));
        *(_QWORD *)(v125 - 448) = v136;
        v138 = v129[-23].m128i_i64[1];
        *(__m128i *)(v125 - 440) = v137;
        v139 = _mm_loadu_si128((const __m128i *)((char *)v129 - 424));
        *(_QWORD *)(v125 - 360) = v138;
        v140 = v129[-17].m128i_i64[0];
        *(__m128i *)(v125 - 424) = v139;
        v141 = _mm_loadu_si128((const __m128i *)((char *)v129 - 408));
        *(_QWORD *)(v125 - 272) = v140;
        *(__m128i *)(v125 - 408) = v141;
        *(__m128i *)(v125 - 392) = _mm_loadu_si128((const __m128i *)((char *)v129 - 392));
        *(__m128i *)(v125 - 376) = _mm_loadu_si128((const __m128i *)((char *)v129 - 376));
        *(__m128i *)(v125 - 352) = _mm_loadu_si128(v129 - 22);
        *(__m128i *)(v125 - 336) = _mm_loadu_si128(v129 - 21);
        *(__m128i *)(v125 - 320) = _mm_loadu_si128(v129 - 20);
        *(__m128i *)(v125 - 304) = _mm_loadu_si128(v129 - 19);
        *(__m128i *)(v125 - 288) = _mm_loadu_si128(v129 - 18);
        *(__m128i *)(v125 - 264) = _mm_loadu_si128((const __m128i *)((char *)v129 - 264));
        *(__m128i *)(v125 - 248) = _mm_loadu_si128((const __m128i *)((char *)v129 - 248));
        v142 = v129[-12].m128i_i64[1];
        *(__m128i *)(v125 - 232) = _mm_loadu_si128((const __m128i *)((char *)v129 - 232));
        v143 = _mm_loadu_si128((const __m128i *)((char *)v129 - 216));
        *(_QWORD *)(v125 - 184) = v142;
        v144 = v129[-6].m128i_i64[0];
        *(__m128i *)(v125 - 216) = v143;
        v145 = _mm_loadu_si128((const __m128i *)((char *)v129 - 200));
        *(_QWORD *)(v125 - 96) = v144;
        v146 = v129[-1].m128i_i64[1];
        *(__m128i *)(v125 - 200) = v145;
        v147 = _mm_loadu_si128(v129 - 11);
        *(_QWORD *)(v125 - 8) = v146;
        *(__m128i *)(v125 - 176) = v147;
        *(__m128i *)(v125 - 160) = _mm_loadu_si128(v129 - 10);
        *(__m128i *)(v125 - 144) = _mm_loadu_si128(v129 - 9);
        *(__m128i *)(v125 - 128) = _mm_loadu_si128(v129 - 8);
        *(__m128i *)(v125 - 112) = _mm_loadu_si128(v129 - 7);
        *(__m128i *)(v125 - 88) = _mm_loadu_si128((const __m128i *)((char *)v129 - 88));
        *(__m128i *)(v125 - 72) = _mm_loadu_si128((const __m128i *)((char *)v129 - 72));
        *(__m128i *)(v125 - 56) = _mm_loadu_si128((const __m128i *)((char *)v129 - 56));
        *(__m128i *)(v125 - 40) = _mm_loadu_si128((const __m128i *)((char *)v129 - 40));
        *(__m128i *)(v125 - 24) = _mm_loadu_si128((const __m128i *)((char *)v129 - 24));
      }
      while ( v125 != v130 );
      v148 = 44 * ((int)v128 + 1LL);
      v126 = &v262[v148];
      v125 = v127 + v148 * 16;
    }
    switch ( v240 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_148;
      case 2:
        goto LABEL_147;
      case 3:
        goto LABEL_146;
      case 4:
        goto LABEL_145;
      case 5:
        goto LABEL_144;
      case 6:
        goto LABEL_143;
      case 7:
        v152 = v126[38].m128i_i64[0];
        *(__m128i *)(v125 + 528) = _mm_loadu_si128(v126 + 33);
        v153 = _mm_loadu_si128(v126 + 34);
        *(_QWORD *)(v125 + 608) = v152;
        *(__m128i *)(v125 + 544) = v153;
        *(__m128i *)(v125 + 560) = _mm_loadu_si128(v126 + 35);
        *(__m128i *)(v125 + 576) = _mm_loadu_si128(v126 + 36);
        *(__m128i *)(v125 + 592) = _mm_loadu_si128(v126 + 37);
LABEL_143:
        v154 = _mm_loadu_si128((__m128i *)((char *)v126 + 440));
        *(_QWORD *)(v125 + 520) = v126[32].m128i_i64[1];
        *(__m128i *)(v125 + 440) = v154;
        *(__m128i *)(v125 + 456) = _mm_loadu_si128((__m128i *)((char *)v126 + 456));
        *(__m128i *)(v125 + 472) = _mm_loadu_si128((__m128i *)((char *)v126 + 472));
        *(__m128i *)(v125 + 488) = _mm_loadu_si128((__m128i *)((char *)v126 + 488));
        *(__m128i *)(v125 + 504) = _mm_loadu_si128((__m128i *)((char *)v126 + 504));
LABEL_144:
        v155 = _mm_loadu_si128(v126 + 22);
        *(_QWORD *)(v125 + 432) = v126[27].m128i_i64[0];
        *(__m128i *)(v125 + 352) = v155;
        *(__m128i *)(v125 + 368) = _mm_loadu_si128(v126 + 23);
        *(__m128i *)(v125 + 384) = _mm_loadu_si128(v126 + 24);
        *(__m128i *)(v125 + 400) = _mm_loadu_si128(v126 + 25);
        *(__m128i *)(v125 + 416) = _mm_loadu_si128(v126 + 26);
LABEL_145:
        v156 = _mm_loadu_si128((__m128i *)((char *)v126 + 264));
        *(_QWORD *)(v125 + 344) = v126[21].m128i_i64[1];
        *(__m128i *)(v125 + 264) = v156;
        *(__m128i *)(v125 + 280) = _mm_loadu_si128((__m128i *)((char *)v126 + 280));
        *(__m128i *)(v125 + 296) = _mm_loadu_si128((__m128i *)((char *)v126 + 296));
        *(__m128i *)(v125 + 312) = _mm_loadu_si128((__m128i *)((char *)v126 + 312));
        *(__m128i *)(v125 + 328) = _mm_loadu_si128((__m128i *)((char *)v126 + 328));
LABEL_146:
        v157 = _mm_loadu_si128(v126 + 11);
        *(_QWORD *)(v125 + 256) = v126[16].m128i_i64[0];
        *(__m128i *)(v125 + 176) = v157;
        *(__m128i *)(v125 + 192) = _mm_loadu_si128(v126 + 12);
        *(__m128i *)(v125 + 208) = _mm_loadu_si128(v126 + 13);
        *(__m128i *)(v125 + 224) = _mm_loadu_si128(v126 + 14);
        *(__m128i *)(v125 + 240) = _mm_loadu_si128(v126 + 15);
LABEL_147:
        v158 = _mm_loadu_si128((__m128i *)((char *)v126 + 88));
        *(_QWORD *)(v125 + 168) = v126[10].m128i_i64[1];
        *(__m128i *)(v125 + 88) = v158;
        *(__m128i *)(v125 + 104) = _mm_loadu_si128((__m128i *)((char *)v126 + 104));
        *(__m128i *)(v125 + 120) = _mm_loadu_si128((__m128i *)((char *)v126 + 120));
        *(__m128i *)(v125 + 136) = _mm_loadu_si128((__m128i *)((char *)v126 + 136));
        *(__m128i *)(v125 + 152) = _mm_loadu_si128((__m128i *)((char *)v126 + 152));
LABEL_148:
        v159 = _mm_loadu_si128(v126);
        *(_QWORD *)(v125 + 80) = v126[5].m128i_i64[0];
        *(__m128i *)v125 = v159;
        *(__m128i *)(v125 + 16) = _mm_loadu_si128(v126 + 1);
        *(__m128i *)(v125 + 32) = _mm_loadu_si128(v126 + 2);
        *(__m128i *)(v125 + 48) = _mm_loadu_si128(v126 + 3);
        *(__m128i *)(v125 + 64) = _mm_loadu_si128(v126 + 4);
        break;
    }
  }
  v149 = (CoinPresolveMatrix *)operator new(0x20u);
  *((_QWORD *)v149 + 3) = v127;
  *((_QWORD *)v149 + 1) = a2;
  *(_QWORD *)v149 = &off_4D1B78;
  *((_DWORD *)v149 + 4) = v240;
  if ( v124 )
    v149 = (CoinPresolveMatrix *)drop_zero_coefficients_action::presolve(v123, v270, (int *)v124, (int)v149, v160);
  if ( v274 )
    v149 = (CoinPresolveMatrix *)remove_fixed_action::presolve(v123, v276, (int *)v274, (int)v149, v160);
LABEL_135:
  operator delete[](v262);
  return v149;
}

