void __fastcall sub_10141F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r14
  void *v12; // r13
  __m128i *v13; // r9
  __int64 v14; // rbx
  void *v15; // r12
  const void *v16; // rsi
  size_t v17; // rdx
  int v18; // eax
  void *v19; // rcx
  __m128i *v20; // r10
  size_t v21; // rdx
  const void *v22; // rsi
  int v23; // eax
  size_t v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  void *v27; // rdx
  _BYTE *v28; // rcx
  _BYTE *v29; // rdi
  __m128i v30; // xmm4
  _BYTE *v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  int v34; // r10d
  _BYTE *v35; // r13
  __int64 v36; // rdx
  size_t v37; // rdx
  _BYTE *v38; // rax
  _BYTE *v39; // rbx
  _BYTE *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __m128i v43; // xmm5
  __int64 *v44; // rsi
  _BYTE *v45; // rdi
  __int64 v46; // rdx
  __int64 *v47; // rsi
  _BYTE *v48; // rdi
  __int64 v49; // rdx
  int v50; // r8d
  int v51; // r9d
  void **v52; // r12
  void **v53; // rbx
  void *v54; // rax
  size_t v55; // r12
  unsigned __int64 v56; // r15
  __m128i *v57; // r14
  size_t v58; // r13
  size_t v59; // rbx
  size_t v60; // rdx
  const void *v61; // r12
  int v62; // eax
  void **v63; // rcx
  size_t v64; // rbp
  size_t v65; // rbx
  size_t v66; // r13
  size_t v67; // rdx
  const void *v68; // rsi
  int v69; // eax
  size_t v70; // rbx
  __int8 *v71; // r12
  __m128i v72; // xmm2
  unsigned __int64 *v73; // rax
  size_t v74; // rax
  __int64 v75; // rax
  size_t v76; // rax
  __int32 v77; // edx
  _BYTE *v78; // r13
  __int64 v79; // rdx
  size_t v80; // rdx
  __int8 *v81; // rax
  _BYTE *v82; // rbx
  __m128i *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rdx
  __m128i v86; // xmm6
  __int64 *v87; // rsi
  _BYTE *v88; // rdi
  __m128 v89; // xmm0
  __int64 v90; // rax
  __int64 *v91; // rsi
  _BYTE *v92; // rdi
  __m128 v93; // xmm0
  __int64 v94; // rax
  void **v95; // r12
  void **v96; // rbx
  __int64 v97; // rax
  void *v98; // rdx
  _BYTE *v99; // rcx
  _BYTE *v100; // rdi
  __m128i v101; // xmm2
  _BYTE *v102; // rax
  size_t v103; // rax
  size_t v104; // rax
  int v105; // r11d
  _BYTE *v106; // r8
  __int64 v107; // rdx
  size_t v108; // rdx
  _BYTE *v109; // rax
  void *v110; // rdx
  __m128i v111; // xmm6
  __m128i v112; // xmm7
  __int64 v113; // rax
  _BYTE *v114; // rcx
  _BYTE *v115; // rax
  _BYTE *v116; // rdi
  size_t v117; // rax
  size_t v118; // rax
  int v119; // r9d
  __int64 v120; // rcx
  _BYTE *v121; // rbx
  __m128i v122; // xmm2
  size_t v123; // rdx
  _BYTE *v124; // rax
  _BYTE *v125; // rdi
  void *v126; // rax
  __int64 v127; // rcx
  __m128i v128; // xmm6
  __int64 *v129; // rsi
  _BYTE *v130; // rdi
  __int64 v131; // rdx
  __int64 *v132; // rsi
  _BYTE *v133; // rdi
  __int64 v134; // rdx
  void **v135; // r12
  void *v136; // rdi
  size_t v137; // rcx
  __m128i *v138; // r10
  size_t v139; // rdx
  const void *v140; // rsi
  int v141; // eax
  void *v142; // rdx
  __m128i v143; // xmm4
  __m128i v144; // xmm5
  __int64 v145; // rax
  _BYTE *v146; // rcx
  _BYTE *v147; // rax
  _BYTE *v148; // rdi
  size_t v149; // rax
  size_t v150; // rax
  int v151; // r8d
  __int64 v152; // rcx
  _BYTE *v153; // rbx
  __m128i v154; // xmm7
  size_t v155; // rdx
  _BYTE *v156; // rax
  _BYTE *v157; // rdi
  void *v158; // rax
  __int64 v159; // rcx
  __m128i v160; // xmm6
  __int64 *v161; // rsi
  _BYTE *v162; // rdi
  __int64 v163; // rdx
  __int64 *v164; // rsi
  _BYTE *v165; // rdi
  __int64 v166; // rdx
  void **v167; // r12
  void *v168; // rdi
  size_t v169; // rdx
  int v170; // eax
  __int64 v171; // rax
  void *v172; // rdx
  _BYTE *v173; // rcx
  _BYTE *v174; // rdi
  __m128i v175; // xmm4
  _BYTE *v176; // rax
  size_t v177; // rax
  size_t v178; // rax
  int v179; // esi
  _BYTE *v180; // r13
  __int64 v181; // rdx
  size_t v182; // rdx
  _BYTE *v183; // rax
  _BYTE *v184; // rbx
  _BYTE *v185; // rdi
  __int64 v186; // rax
  __int64 v187; // rdx
  __m128i v188; // xmm5
  __int64 *v189; // rsi
  _BYTE *v190; // rdi
  __int64 v191; // rdx
  __int64 *v192; // rsi
  _BYTE *v193; // rdi
  __int64 v194; // rdx
  void **v195; // r12
  void *v196; // rdi
  __int64 v197; // rax
  void *v198; // rdx
  _BYTE *v199; // rcx
  _BYTE *v200; // rdi
  __m128i v201; // xmm2
  _BYTE *v202; // rax
  size_t v203; // rax
  size_t v204; // rax
  int v205; // ecx
  _BYTE *v206; // r8
  __int64 v207; // rdx
  size_t v208; // rdx
  _BYTE *v209; // rax
  __int64 v210; // r13
  _BYTE *v211; // r12
  _BYTE *v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 *v215; // rsi
  __m128i v216; // xmm3
  _BYTE *v217; // rdi
  _BYTE *v218; // r8
  __int64 v219; // rdx
  __int64 *v220; // rsi
  _BYTE *v221; // rdi
  __int64 v222; // rdx
  void **v223; // r12
  void *v224; // rdi
  size_t v225; // rdx
  size_t v226; // rdx
  __int64 v227; // rsi
  size_t v228; // rdx
  __int64 v229; // rcx
  size_t v230; // rdx
  size_t v231; // rdx
  size_t v232; // rdx
  __int64 v233; // rcx
  __m128i v234; // xmm2
  void *v235; // rsi
  __int64 v236; // rdi
  size_t v237; // rdx
  size_t v238; // rdx
  size_t v239; // rdx
  size_t v240; // rdx
  size_t v241; // rdx
  size_t v242; // rdx
  _BYTE *v243; // r12
  _BYTE *v244; // rdi
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 *v247; // rsi
  __m128i v248; // xmm3
  _BYTE *v249; // rdi
  _BYTE *v250; // r8
  __int64 v251; // rdx
  __int64 *v252; // rsi
  _BYTE *v253; // rdi
  __int64 v254; // rdx
  void **v255; // r12
  void *v256; // rdi
  __m128i v257; // xmm5
  void *v258; // rsi
  __int64 v259; // rdi
  size_t v260; // rdx
  size_t v261; // rdx
  size_t v262; // rdx
  __int64 v263; // rcx
  _BYTE *v264; // rax
  size_t v265; // rdx
  size_t v266; // rdx
  size_t v267; // rdx
  __int64 v268; // rcx
  _BYTE *v269; // rax
  size_t v270; // rdx
  size_t v271; // rdx
  size_t v272; // rdx
  void *s1; // [rsp+0h] [rbp-188h] BYREF
  __m128i *v274; // [rsp+8h] [rbp-180h]
  __m128i *v275; // [rsp+10h] [rbp-178h]
  __int64 v276; // [rsp+18h] [rbp-170h]
  _BYTE *v277; // [rsp+20h] [rbp-168h]
  void *dest; // [rsp+28h] [rbp-160h]
  void **v279; // [rsp+30h] [rbp-158h]
  __int64 v280; // [rsp+38h] [rbp-150h]
  void *v281; // [rsp+40h] [rbp-148h]
  __int64 v282; // [rsp+48h] [rbp-140h]
  char v283; // [rsp+5Fh] [rbp-129h]
  __int64 v284; // [rsp+60h] [rbp-128h] BYREF
  __m128i v285; // [rsp+68h] [rbp-120h] BYREF
  void *v286; // [rsp+78h] [rbp-110h]
  size_t v287; // [rsp+80h] [rbp-108h]
  __m128i v288; // [rsp+88h] [rbp-100h]
  __int64 v289; // [rsp+98h] [rbp-F0h]
  void *src; // [rsp+A0h] [rbp-E8h]
  size_t n; // [rsp+A8h] [rbp-E0h]
  __m128i v292; // [rsp+B0h] [rbp-D8h]
  void **v293; // [rsp+C0h] [rbp-C8h]
  __int64 v294; // [rsp+C8h] [rbp-C0h]

  v7 = a2 - a1;
  v276 = a3;
  if ( a2 - a1 <= 4096 )
    return;
  v8 = a1;
  if ( !a3 )
  {
    v210 = a2;
    goto LABEL_220;
  }
  v9 = &v284;
  v10 = a1;
  v11 = a2;
  dest = (void *)(a1 + 56);
  v277 = (_BYTE *)(a1 + 96);
  v282 = a1 + 112;
  v281 = (void *)(a1 + 352);
  do
  {
    v12 = *(void **)(v10 + 264);
    --v276;
    v13 = *(__m128i **)(v10 + 256);
    v14 = v10 + (v7 >> 9 << 8);
    v15 = *(void **)(v14 + 8);
    v16 = *(const void **)v14;
    v17 = (size_t)v15;
    s1 = *(void **)v14;
    if ( v12 <= v15 )
      v17 = (size_t)v12;
    if ( !v17 || (v274 = v13, v18 = memcmp(v13, v16, v17), v13 = v274, !v18) )
    {
      if ( v12 != v15 && v12 < v15 )
        goto LABEL_10;
LABEL_141:
      v137 = *(_QWORD *)(v11 - 248);
      v138 = *(__m128i **)(v11 - 256);
      v139 = v137;
      if ( (unsigned __int64)v12 <= v137 )
        v139 = (size_t)v12;
      if ( v139
        && (v140 = *(const void **)(v11 - 256),
            v275 = *(__m128i **)(v11 - 248),
            v274 = v138,
            v141 = memcmp(v13, v140, v139),
            v138 = v274,
            v137 = (size_t)v275,
            v141) )
      {
        if ( v141 < 0 )
        {
LABEL_147:
          v142 = *(void **)v10;
          v143 = _mm_loadu_si128((const __m128i *)(v10 + 256));
          v144 = _mm_loadu_si128((const __m128i *)(v10 + 24));
          *(_QWORD *)(v10 + 264) = *(_QWORD *)(v10 + 8);
          v145 = *(_QWORD *)(v10 + 16);
          v146 = dest;
          *(__m128i *)v10 = v143;
          v284 = v145;
          v286 = v9 + 5;
          v147 = *(_BYTE **)(v10 + 40);
          v148 = v146;
          *(_QWORD *)(v10 + 256) = v142;
          v285 = v144;
          if ( v147 == v146 )
          {
            v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
          }
          else
          {
            v286 = v147;
            v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
          }
          v149 = *(_QWORD *)(v10 + 48);
          *(_BYTE *)(v10 + 56) = 0;
          *(_QWORD *)(v10 + 48) = 0;
          v287 = v149;
          *(_QWORD *)(v10 + 40) = dest;
          v289 = *(_QWORD *)(v10 + 72);
          src = v9 + 10;
          if ( *(_BYTE **)(v10 + 80) == v277 )
          {
            v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
          }
          else
          {
            src = *(void **)(v10 + 80);
            v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
          }
          v150 = *(_QWORD *)(v10 + 88);
          v151 = *(_DWORD *)(v10 + 120);
          *(_QWORD *)(v10 + 88) = 0;
          *(_BYTE *)(v10 + 96) = 0;
          n = v150;
          *(_QWORD *)(v10 + 80) = v277;
          v293 = (void **)(v9 + 14);
          v294 = 0x400000000LL;
          if ( v151 )
          {
            v153 = (_BYTE *)(v10 + 312);
            sub_CEFDD0((__int64)(v9 + 12), v282);
            v152 = *(_QWORD *)(v10 + 296);
            v257 = _mm_loadu_si128((const __m128i *)(v10 + 280));
            v156 = *(_BYTE **)(v10 + 40);
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 272);
            v155 = *(_QWORD *)(v10 + 304);
            *(__m128i *)(v10 + 24) = v257;
            if ( v152 == v10 + 312 )
            {
              v148 = v156;
              goto LABEL_153;
            }
            v258 = *(void **)(v10 + 312);
            if ( dest != v156 )
            {
              s1 = *(void **)(v10 + 312);
              v259 = *(_QWORD *)(v10 + 56);
              *(_QWORD *)(v10 + 40) = v152;
              *(__m128 *)(v10 + 48) = _mm_loadh_ps((const double *)&s1);
              if ( v156 )
              {
                *(_QWORD *)(v10 + 296) = v156;
                *(_QWORD *)(v10 + 312) = v259;
                goto LABEL_155;
              }
              goto LABEL_452;
            }
          }
          else
          {
            v152 = *(_QWORD *)(v10 + 296);
            v153 = (_BYTE *)(v10 + 312);
            v154 = _mm_loadu_si128((const __m128i *)(v10 + 280));
            v155 = *(_QWORD *)(v10 + 304);
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 272);
            *(__m128i *)(v10 + 24) = v154;
            if ( v10 + 312 == v152 )
            {
LABEL_153:
              if ( v155 )
              {
                if ( v155 == 1 )
                  *v148 = *(_BYTE *)(v10 + 312);
                else
                  memcpy(v148, v153, v155);
                v155 = *(_QWORD *)(v10 + 304);
                v148 = *(_BYTE **)(v10 + 40);
              }
              *(_QWORD *)(v10 + 48) = v155;
              v148[v155] = 0;
              v156 = *(_BYTE **)(v10 + 296);
LABEL_155:
              *(_QWORD *)(v10 + 304) = 0;
              *v156 = 0;
              v157 = *(_BYTE **)(v10 + 80);
              *(_QWORD *)(v10 + 72) = *(_QWORD *)(v10 + 328);
              v158 = *(void **)(v10 + 336);
              if ( v158 == v281 )
              {
                v262 = *(_QWORD *)(v10 + 344);
                if ( v262 )
                {
                  if ( v262 == 1 )
                    *v157 = *(_BYTE *)(v10 + 352);
                  else
                    memcpy(v157, v281, v262);
                  v262 = *(_QWORD *)(v10 + 344);
                  v157 = *(_BYTE **)(v10 + 80);
                }
                *(_QWORD *)(v10 + 88) = v262;
                v157[v262] = 0;
                v157 = *(_BYTE **)(v10 + 336);
              }
              else
              {
                if ( v277 == v157 )
                {
                  s1 = *(void **)(v10 + 352);
                  *(_QWORD *)(v10 + 80) = v158;
                  *(__m128 *)(v10 + 88) = _mm_loadh_ps((const double *)&s1);
                }
                else
                {
                  s1 = *(void **)(v10 + 352);
                  v159 = *(_QWORD *)(v10 + 96);
                  *(_QWORD *)(v10 + 80) = v158;
                  *(__m128 *)(v10 + 88) = _mm_loadh_ps((const double *)&s1);
                  if ( v157 )
                  {
                    *(_QWORD *)(v10 + 336) = v157;
                    *(_QWORD *)(v10 + 352) = v159;
                    goto LABEL_159;
                  }
                }
                v269 = v281;
                *(_QWORD *)(v10 + 336) = v281;
                v157 = v269;
              }
LABEL_159:
              *(_QWORD *)(v10 + 344) = 0;
              *v157 = 0;
              sub_CEFDD0(v282, v10 + 368);
              v160 = _mm_loadu_si128(&v285);
              v161 = (__int64 *)v286;
              v162 = *(_BYTE **)(v10 + 296);
              *(_QWORD *)(v10 + 272) = v284;
              *(__m128i *)(v10 + 280) = v160;
              if ( v161 == v9 + 5 )
              {
                v261 = v287;
                if ( v287 )
                {
                  if ( v287 == 1 )
                    *v162 = v288.m128i_i8[0];
                  else
                    memcpy(v162, v161, v287);
                  v261 = v287;
                  v162 = *(_BYTE **)(v10 + 296);
                }
                *(_QWORD *)(v10 + 304) = v261;
                v162[v261] = 0;
                v162 = v286;
              }
              else
              {
                if ( v153 == v162 )
                {
                  s1 = (void *)v288.m128i_i64[0];
                  *(_QWORD *)(v10 + 296) = v161;
                  *(__m128 *)(v10 + 304) = _mm_loadh_ps((const double *)&s1);
                }
                else
                {
                  s1 = (void *)v288.m128i_i64[0];
                  v163 = *(_QWORD *)(v10 + 312);
                  *(_QWORD *)(v10 + 296) = v161;
                  *(__m128 *)(v10 + 304) = _mm_loadh_ps((const double *)&s1);
                  if ( v162 )
                  {
                    v286 = v162;
                    v288.m128i_i64[0] = v163;
                    goto LABEL_163;
                  }
                }
                v162 = v9 + 5;
                v286 = v9 + 5;
              }
LABEL_163:
              v287 = 0;
              *v162 = 0;
              v164 = (__int64 *)src;
              v165 = *(_BYTE **)(v10 + 336);
              *(_QWORD *)(v10 + 328) = v289;
              if ( v164 == v9 + 10 )
              {
                v260 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v165 = v292.m128i_i8[0];
                  else
                    memcpy(v165, v164, n);
                  v260 = n;
                  v165 = *(_BYTE **)(v10 + 336);
                }
                *(_QWORD *)(v10 + 344) = v260;
                v165[v260] = 0;
                v165 = src;
                goto LABEL_167;
              }
              if ( v281 == v165 )
              {
                s1 = (void *)v292.m128i_i64[0];
                *(_QWORD *)(v10 + 336) = v164;
                *(__m128 *)(v10 + 344) = _mm_loadh_ps((const double *)&s1);
              }
              else
              {
                s1 = (void *)v292.m128i_i64[0];
                v166 = *(_QWORD *)(v10 + 352);
                *(_QWORD *)(v10 + 336) = v164;
                *(__m128 *)(v10 + 344) = _mm_loadh_ps((const double *)&s1);
                if ( v165 )
                {
                  src = v165;
                  v292.m128i_i64[0] = v166;
LABEL_167:
                  n = 0;
                  *v165 = 0;
                  sub_CEFDD0(v10 + 368, (__int64)(v9 + 12));
                  v167 = v293;
                  v53 = &v293[4 * (unsigned int)v294];
                  if ( v293 == v53 )
                    goto LABEL_46;
                  while ( 1 )
                  {
                    v53 -= 4;
                    v168 = *v53;
                    if ( *v53 != v53 + 2 )
                      break;
LABEL_171:
                    if ( v167 == v53 )
                      goto LABEL_45;
                  }
                  while ( 1 )
                  {
                    operator delete(v168);
                    if ( v167 == v53 )
                      goto LABEL_45;
                    v53 -= 4;
                    v168 = *v53;
                    if ( *v53 == v53 + 2 )
                      goto LABEL_171;
                  }
                }
              }
              v165 = v9 + 10;
              src = v9 + 10;
              goto LABEL_167;
            }
            v258 = *(void **)(v10 + 312);
          }
          s1 = v258;
          *(_QWORD *)(v10 + 40) = v152;
          *(__m128 *)(v10 + 48) = _mm_loadh_ps((const double *)&s1);
LABEL_452:
          *(_QWORD *)(v10 + 296) = v153;
          v156 = v153;
          goto LABEL_155;
        }
      }
      else if ( v12 != (void *)v137 && (unsigned __int64)v12 < v137 )
      {
        goto LABEL_147;
      }
      v169 = v137;
      if ( (unsigned __int64)v15 <= v137 )
        v169 = (size_t)v15;
      if ( v169 && (v274 = (__m128i *)v137, v170 = memcmp(s1, v138, v169), v137 = (size_t)v274, v170) )
      {
        if ( v170 < 0 )
        {
LABEL_180:
          v171 = *(_QWORD *)(v10 + 8);
          v172 = *(void **)v10;
          v173 = dest;
          *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)(v11 - 256));
          v174 = v173;
          *(_QWORD *)(v11 - 256) = v172;
          *(_QWORD *)(v11 - 248) = v171;
          v175 = _mm_loadu_si128((const __m128i *)(v10 + 24));
          v284 = *(_QWORD *)(v10 + 16);
          v286 = v9 + 5;
          v176 = *(_BYTE **)(v10 + 40);
          v285 = v175;
          if ( v176 == v173 )
          {
            v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
          }
          else
          {
            v286 = v176;
            v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
          }
          v177 = *(_QWORD *)(v10 + 48);
          *(_BYTE *)(v10 + 56) = 0;
          *(_QWORD *)(v10 + 48) = 0;
          v287 = v177;
          *(_QWORD *)(v10 + 40) = dest;
          v289 = *(_QWORD *)(v10 + 72);
          src = v9 + 10;
          if ( *(_BYTE **)(v10 + 80) == v277 )
          {
            v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
          }
          else
          {
            src = *(void **)(v10 + 80);
            v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
          }
          v178 = *(_QWORD *)(v10 + 88);
          v179 = *(_DWORD *)(v10 + 120);
          *(_QWORD *)(v10 + 88) = 0;
          *(_BYTE *)(v10 + 96) = 0;
          n = v178;
          *(_QWORD *)(v10 + 80) = v277;
          v293 = (void **)(v9 + 14);
          v294 = 0x400000000LL;
          if ( v179 )
          {
            v180 = (_BYTE *)(v11 - 200);
            sub_CEFDD0((__int64)(v9 + 12), v282);
            v183 = *(_BYTE **)(v10 + 40);
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 - 240);
            *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v11 - 232));
            v181 = *(_QWORD *)(v11 - 216);
            if ( v181 == v11 - 200 )
            {
              v174 = v183;
              goto LABEL_186;
            }
            if ( dest != v183 )
            {
              *(_QWORD *)(v10 + 40) = v181;
              v233 = *(_QWORD *)(v10 + 56);
              *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 - 208);
              *(_QWORD *)(v10 + 56) = *(_QWORD *)(v11 - 200);
              if ( v183 )
              {
                *(_QWORD *)(v11 - 216) = v183;
                *(_QWORD *)(v11 - 200) = v233;
                goto LABEL_188;
              }
              goto LABEL_426;
            }
          }
          else
          {
            v180 = (_BYTE *)(v11 - 200);
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 - 240);
            *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v11 - 232));
            v181 = *(_QWORD *)(v11 - 216);
            if ( v11 - 200 == v181 )
            {
LABEL_186:
              v182 = *(_QWORD *)(v11 - 208);
              if ( v182 )
              {
                if ( v182 == 1 )
                  *v174 = *(_BYTE *)(v11 - 200);
                else
                  memcpy(v174, v180, v182);
                v182 = *(_QWORD *)(v11 - 208);
                v174 = *(_BYTE **)(v10 + 40);
              }
              *(_QWORD *)(v10 + 48) = v182;
              v174[v182] = 0;
              v183 = *(_BYTE **)(v11 - 216);
LABEL_188:
              *(_QWORD *)(v11 - 208) = 0;
              v184 = (_BYTE *)(v11 - 160);
              *v183 = 0;
              v185 = *(_BYTE **)(v10 + 80);
              *(_QWORD *)(v10 + 72) = *(_QWORD *)(v11 - 184);
              v186 = *(_QWORD *)(v11 - 176);
              if ( v186 == v11 - 160 )
              {
                v242 = *(_QWORD *)(v11 - 168);
                if ( v242 )
                {
                  if ( v242 == 1 )
                    *v185 = *(_BYTE *)(v11 - 160);
                  else
                    memcpy(v185, (const void *)(v11 - 160), v242);
                  v242 = *(_QWORD *)(v11 - 168);
                  v185 = *(_BYTE **)(v10 + 80);
                }
                *(_QWORD *)(v10 + 88) = v242;
                v185[v242] = 0;
                v185 = *(_BYTE **)(v11 - 176);
              }
              else
              {
                if ( v277 == v185 )
                {
                  *(_QWORD *)(v10 + 80) = v186;
                  *(_QWORD *)(v10 + 88) = *(_QWORD *)(v11 - 168);
                  *(_QWORD *)(v10 + 96) = *(_QWORD *)(v11 - 160);
                }
                else
                {
                  *(_QWORD *)(v10 + 80) = v186;
                  v187 = *(_QWORD *)(v10 + 96);
                  *(_QWORD *)(v10 + 88) = *(_QWORD *)(v11 - 168);
                  *(_QWORD *)(v10 + 96) = *(_QWORD *)(v11 - 160);
                  if ( v185 )
                  {
                    *(_QWORD *)(v11 - 176) = v185;
                    *(_QWORD *)(v11 - 160) = v187;
                    goto LABEL_192;
                  }
                }
                *(_QWORD *)(v11 - 176) = v184;
                v185 = (_BYTE *)(v11 - 160);
              }
LABEL_192:
              *(_QWORD *)(v11 - 168) = 0;
              *v185 = 0;
              sub_CEFDD0(v282, v11 - 144);
              v188 = _mm_loadu_si128(&v285);
              v189 = (__int64 *)v286;
              v190 = *(_BYTE **)(v11 - 216);
              *(_QWORD *)(v11 - 240) = v284;
              *(__m128i *)(v11 - 232) = v188;
              if ( v189 == v9 + 5 )
              {
                v241 = v287;
                if ( v287 )
                {
                  if ( v287 == 1 )
                    *v190 = v288.m128i_i8[0];
                  else
                    memcpy(v190, v189, v287);
                  v241 = v287;
                  v190 = *(_BYTE **)(v11 - 216);
                }
                *(_QWORD *)(v11 - 208) = v241;
                v190[v241] = 0;
                v190 = v286;
              }
              else
              {
                if ( v180 == v190 )
                {
                  s1 = (void *)v288.m128i_i64[0];
                  *(_QWORD *)(v11 - 216) = v189;
                  *(__m128 *)(v11 - 208) = _mm_loadh_ps((const double *)&s1);
                }
                else
                {
                  s1 = (void *)v288.m128i_i64[0];
                  v191 = *(_QWORD *)(v11 - 200);
                  *(_QWORD *)(v11 - 216) = v189;
                  *(__m128 *)(v11 - 208) = _mm_loadh_ps((const double *)&s1);
                  if ( v190 )
                  {
                    v286 = v190;
                    v288.m128i_i64[0] = v191;
                    goto LABEL_196;
                  }
                }
                v190 = v9 + 5;
                v286 = v9 + 5;
              }
LABEL_196:
              v287 = 0;
              *v190 = 0;
              v192 = (__int64 *)src;
              v193 = *(_BYTE **)(v11 - 176);
              *(_QWORD *)(v11 - 184) = v289;
              if ( v192 == v9 + 10 )
              {
                v240 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *v193 = v292.m128i_i8[0];
                  else
                    memcpy(v193, v192, n);
                  v240 = n;
                  v193 = *(_BYTE **)(v11 - 176);
                }
                *(_QWORD *)(v11 - 168) = v240;
                v193[v240] = 0;
                v193 = src;
                goto LABEL_200;
              }
              if ( v184 == v193 )
              {
                s1 = (void *)v292.m128i_i64[0];
                *(_QWORD *)(v11 - 176) = v192;
                *(__m128 *)(v11 - 168) = _mm_loadh_ps((const double *)&s1);
              }
              else
              {
                s1 = (void *)v292.m128i_i64[0];
                v194 = *(_QWORD *)(v11 - 160);
                *(_QWORD *)(v11 - 176) = v192;
                *(__m128 *)(v11 - 168) = _mm_loadh_ps((const double *)&s1);
                if ( v193 )
                {
                  src = v193;
                  v292.m128i_i64[0] = v194;
LABEL_200:
                  n = 0;
                  *v193 = 0;
                  sub_CEFDD0(v11 - 144, (__int64)(v9 + 12));
                  v195 = v293;
                  v53 = &v293[4 * (unsigned int)v294];
                  if ( v293 == v53 )
                    goto LABEL_46;
                  while ( 1 )
                  {
                    v53 -= 4;
                    v196 = *v53;
                    if ( *v53 != v53 + 2 )
                      break;
LABEL_204:
                    if ( v195 == v53 )
                      goto LABEL_45;
                  }
                  while ( 1 )
                  {
                    operator delete(v196);
                    if ( v195 == v53 )
                      goto LABEL_45;
                    v53 -= 4;
                    v196 = *v53;
                    if ( *v53 == v53 + 2 )
                      goto LABEL_204;
                  }
                }
              }
              v193 = v9 + 10;
              src = v9 + 10;
              goto LABEL_200;
            }
          }
          *(_QWORD *)(v10 + 40) = v181;
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 - 208);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)(v11 - 200);
LABEL_426:
          *(_QWORD *)(v11 - 216) = v180;
          v183 = v180;
          goto LABEL_188;
        }
      }
      else if ( v15 != (void *)v137 && (unsigned __int64)v15 < v137 )
      {
        goto LABEL_180;
      }
      v197 = *(_QWORD *)(v10 + 8);
      v198 = *(void **)v10;
      v199 = dest;
      *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)v14);
      v200 = v199;
      *(_QWORD *)v14 = v198;
      *(_QWORD *)(v14 + 8) = v197;
      v201 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      v284 = *(_QWORD *)(v10 + 16);
      v286 = v9 + 5;
      v202 = *(_BYTE **)(v10 + 40);
      v285 = v201;
      if ( v202 == v199 )
      {
        v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
      }
      else
      {
        v286 = v202;
        v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
      }
      v203 = *(_QWORD *)(v10 + 48);
      *(_BYTE *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 48) = 0;
      v287 = v203;
      *(_QWORD *)(v10 + 40) = dest;
      v289 = *(_QWORD *)(v10 + 72);
      src = v9 + 10;
      if ( *(_BYTE **)(v10 + 80) == v277 )
      {
        v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
      }
      else
      {
        src = *(void **)(v10 + 80);
        v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
      }
      v204 = *(_QWORD *)(v10 + 88);
      v205 = *(_DWORD *)(v10 + 120);
      *(_QWORD *)(v10 + 88) = 0;
      *(_BYTE *)(v10 + 96) = 0;
      n = v204;
      *(_QWORD *)(v10 + 80) = v277;
      v293 = (void **)(v9 + 14);
      v294 = 0x400000000LL;
      if ( v205 )
      {
        sub_CEFDD0((__int64)(v9 + 12), v282);
        v206 = (_BYTE *)(v14 + 56);
        v209 = *(_BYTE **)(v10 + 40);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v14 + 16);
        *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v14 + 24));
        v207 = *(_QWORD *)(v14 + 40);
        if ( v207 == v14 + 56 )
        {
          v200 = v209;
          goto LABEL_213;
        }
        if ( dest != v209 )
        {
          *(_QWORD *)(v10 + 40) = v207;
          v229 = *(_QWORD *)(v10 + 56);
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v14 + 48);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)(v14 + 56);
          if ( v209 )
          {
            *(_QWORD *)(v14 + 40) = v209;
            *(_QWORD *)(v14 + 56) = v229;
            goto LABEL_226;
          }
LABEL_225:
          *(_QWORD *)(v14 + 40) = v206;
          v209 = v206;
          goto LABEL_226;
        }
      }
      else
      {
        v206 = (_BYTE *)(v14 + 56);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v14 + 16);
        *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v14 + 24));
        v207 = *(_QWORD *)(v14 + 40);
        if ( v14 + 56 == v207 )
        {
LABEL_213:
          v208 = *(_QWORD *)(v14 + 48);
          if ( v208 )
          {
            if ( v208 == 1 )
            {
              *v200 = *(_BYTE *)(v14 + 56);
              v208 = *(_QWORD *)(v14 + 48);
              v200 = *(_BYTE **)(v10 + 40);
            }
            else
            {
              s1 = v206;
              memcpy(v200, v206, v208);
              v208 = *(_QWORD *)(v14 + 48);
              v200 = *(_BYTE **)(v10 + 40);
              v206 = s1;
            }
          }
          *(_QWORD *)(v10 + 48) = v208;
          v200[v208] = 0;
          v209 = *(_BYTE **)(v14 + 40);
LABEL_226:
          *(_QWORD *)(v14 + 48) = 0;
          v211 = (_BYTE *)(v14 + 96);
          *v209 = 0;
          v212 = *(_BYTE **)(v10 + 80);
          *(_QWORD *)(v10 + 72) = *(_QWORD *)(v14 + 72);
          v213 = *(_QWORD *)(v14 + 80);
          if ( v213 == v14 + 96 )
          {
            v231 = *(_QWORD *)(v14 + 88);
            if ( v231 )
            {
              if ( v231 == 1 )
              {
                *v212 = *(_BYTE *)(v14 + 96);
                v231 = *(_QWORD *)(v14 + 88);
                v212 = *(_BYTE **)(v10 + 80);
              }
              else
              {
                s1 = v206;
                memcpy(v212, (const void *)(v14 + 96), v231);
                v231 = *(_QWORD *)(v14 + 88);
                v212 = *(_BYTE **)(v10 + 80);
                v206 = s1;
              }
            }
            *(_QWORD *)(v10 + 88) = v231;
            v212[v231] = 0;
            v212 = *(_BYTE **)(v14 + 80);
          }
          else
          {
            if ( v277 == v212 )
            {
              *(_QWORD *)(v10 + 80) = v213;
              *(_QWORD *)(v10 + 88) = *(_QWORD *)(v14 + 88);
              *(_QWORD *)(v10 + 96) = *(_QWORD *)(v14 + 96);
            }
            else
            {
              *(_QWORD *)(v10 + 80) = v213;
              v214 = *(_QWORD *)(v10 + 96);
              *(_QWORD *)(v10 + 88) = *(_QWORD *)(v14 + 88);
              *(_QWORD *)(v10 + 96) = *(_QWORD *)(v14 + 96);
              if ( v212 )
              {
                *(_QWORD *)(v14 + 80) = v212;
                *(_QWORD *)(v14 + 96) = v214;
                goto LABEL_230;
              }
            }
            *(_QWORD *)(v14 + 80) = v211;
            v212 = (_BYTE *)(v14 + 96);
          }
LABEL_230:
          *(_QWORD *)(v14 + 88) = 0;
          *v212 = 0;
          s1 = v206;
          sub_CEFDD0(v282, v14 + 112);
          v215 = (__int64 *)v286;
          v216 = _mm_loadu_si128(&v285);
          v217 = *(_BYTE **)(v14 + 40);
          *(_QWORD *)(v14 + 16) = v284;
          v218 = s1;
          *(__m128i *)(v14 + 24) = v216;
          if ( v215 == v9 + 5 )
          {
            v230 = v287;
            if ( v287 )
            {
              if ( v287 == 1 )
                *v217 = v288.m128i_i8[0];
              else
                memcpy(v217, v215, v287);
              v230 = v287;
              v217 = *(_BYTE **)(v14 + 40);
            }
            *(_QWORD *)(v14 + 48) = v230;
            v217[v230] = 0;
            v217 = v286;
          }
          else
          {
            if ( v218 == v217 )
            {
              s1 = (void *)v288.m128i_i64[0];
              *(_QWORD *)(v14 + 40) = v215;
              *(__m128 *)(v14 + 48) = _mm_loadh_ps((const double *)&s1);
            }
            else
            {
              s1 = (void *)v288.m128i_i64[0];
              v219 = *(_QWORD *)(v14 + 56);
              *(_QWORD *)(v14 + 40) = v215;
              *(__m128 *)(v14 + 48) = _mm_loadh_ps((const double *)&s1);
              if ( v217 )
              {
                v286 = v217;
                v288.m128i_i64[0] = v219;
                goto LABEL_234;
              }
            }
            v217 = v9 + 5;
            v286 = v9 + 5;
          }
LABEL_234:
          v287 = 0;
          *v217 = 0;
          v220 = (__int64 *)src;
          v221 = *(_BYTE **)(v14 + 80);
          *(_QWORD *)(v14 + 72) = v289;
          if ( v220 == v9 + 10 )
          {
            v232 = n;
            if ( n )
            {
              if ( n == 1 )
                *v221 = v292.m128i_i8[0];
              else
                memcpy(v221, v220, n);
              v232 = n;
              v221 = *(_BYTE **)(v14 + 80);
            }
            *(_QWORD *)(v14 + 88) = v232;
            v221[v232] = 0;
            v221 = src;
            goto LABEL_238;
          }
          if ( v211 == v221 )
          {
            s1 = (void *)v292.m128i_i64[0];
            *(_QWORD *)(v14 + 80) = v220;
            *(__m128 *)(v14 + 88) = _mm_loadh_ps((const double *)&s1);
          }
          else
          {
            s1 = (void *)v292.m128i_i64[0];
            v222 = *(_QWORD *)(v14 + 96);
            *(_QWORD *)(v14 + 80) = v220;
            *(__m128 *)(v14 + 88) = _mm_loadh_ps((const double *)&s1);
            if ( v221 )
            {
              src = v221;
              v292.m128i_i64[0] = v222;
LABEL_238:
              n = 0;
              *v221 = 0;
              sub_CEFDD0(v14 + 112, (__int64)(v9 + 12));
              v223 = v293;
              v53 = &v293[4 * (unsigned int)v294];
              if ( v293 == v53 )
                goto LABEL_46;
              while ( 1 )
              {
                v53 -= 4;
                v224 = *v53;
                if ( *v53 != v53 + 2 )
                  break;
LABEL_242:
                if ( v223 == v53 )
                  goto LABEL_45;
              }
              while ( 1 )
              {
                operator delete(v224);
                if ( v223 == v53 )
                  goto LABEL_45;
                v53 -= 4;
                v224 = *v53;
                if ( *v53 == v53 + 2 )
                  goto LABEL_242;
              }
            }
          }
          v221 = v9 + 10;
          src = v9 + 10;
          goto LABEL_238;
        }
      }
      *(_QWORD *)(v10 + 40) = v207;
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v10 + 56) = *(_QWORD *)(v14 + 56);
      goto LABEL_225;
    }
    if ( v18 >= 0 )
      goto LABEL_141;
LABEL_10:
    v19 = *(void **)(v11 - 248);
    v20 = *(__m128i **)(v11 - 256);
    v21 = (size_t)v19;
    if ( v15 <= v19 )
      v21 = (size_t)v15;
    if ( !v21
      || (v22 = *(const void **)(v11 - 256),
          v279 = *(void ***)(v11 - 248),
          v275 = v13,
          v274 = v20,
          v23 = memcmp(s1, v22, v21),
          v20 = v274,
          v13 = v275,
          v19 = v279,
          !v23) )
    {
      if ( v15 == v19 || v15 >= v19 )
        goto LABEL_16;
LABEL_103:
      v97 = *(_QWORD *)(v10 + 8);
      v98 = *(void **)v10;
      v99 = dest;
      *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)v14);
      v100 = v99;
      *(_QWORD *)v14 = v98;
      *(_QWORD *)(v14 + 8) = v97;
      v101 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      v284 = *(_QWORD *)(v10 + 16);
      v286 = v9 + 5;
      v102 = *(_BYTE **)(v10 + 40);
      v285 = v101;
      if ( v102 == v99 )
      {
        v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
      }
      else
      {
        v286 = v102;
        v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
      }
      v103 = *(_QWORD *)(v10 + 48);
      *(_BYTE *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 48) = 0;
      v287 = v103;
      *(_QWORD *)(v10 + 40) = dest;
      v289 = *(_QWORD *)(v10 + 72);
      src = v9 + 10;
      if ( *(_BYTE **)(v10 + 80) == v277 )
      {
        v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
      }
      else
      {
        src = *(void **)(v10 + 80);
        v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
      }
      v104 = *(_QWORD *)(v10 + 88);
      v105 = *(_DWORD *)(v10 + 120);
      *(_QWORD *)(v10 + 88) = 0;
      *(_BYTE *)(v10 + 96) = 0;
      n = v104;
      *(_QWORD *)(v10 + 80) = v277;
      v293 = (void **)(v9 + 14);
      v294 = 0x400000000LL;
      if ( v105 )
      {
        sub_CEFDD0((__int64)(v9 + 12), v282);
        v106 = (_BYTE *)(v14 + 56);
        v109 = *(_BYTE **)(v10 + 40);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v14 + 16);
        *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v14 + 24));
        v107 = *(_QWORD *)(v14 + 40);
        if ( v107 == v14 + 56 )
        {
          v100 = v109;
          goto LABEL_109;
        }
        if ( dest != v109 )
        {
          *(_QWORD *)(v10 + 40) = v107;
          v268 = *(_QWORD *)(v10 + 56);
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v14 + 48);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)(v14 + 56);
          if ( v109 )
          {
            *(_QWORD *)(v14 + 40) = v109;
            *(_QWORD *)(v14 + 56) = v268;
            goto LABEL_363;
          }
LABEL_362:
          *(_QWORD *)(v14 + 40) = v106;
          v109 = v106;
          goto LABEL_363;
        }
      }
      else
      {
        v106 = (_BYTE *)(v14 + 56);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v14 + 16);
        *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v14 + 24));
        v107 = *(_QWORD *)(v14 + 40);
        if ( v14 + 56 == v107 )
        {
LABEL_109:
          v108 = *(_QWORD *)(v14 + 48);
          if ( v108 )
          {
            if ( v108 == 1 )
            {
              *v100 = *(_BYTE *)(v14 + 56);
              v108 = *(_QWORD *)(v14 + 48);
              v100 = *(_BYTE **)(v10 + 40);
            }
            else
            {
              s1 = v106;
              memcpy(v100, v106, v108);
              v108 = *(_QWORD *)(v14 + 48);
              v100 = *(_BYTE **)(v10 + 40);
              v106 = s1;
            }
          }
          *(_QWORD *)(v10 + 48) = v108;
          v100[v108] = 0;
          v109 = *(_BYTE **)(v14 + 40);
LABEL_363:
          *(_QWORD *)(v14 + 48) = 0;
          v243 = (_BYTE *)(v14 + 96);
          *v109 = 0;
          v244 = *(_BYTE **)(v10 + 80);
          *(_QWORD *)(v10 + 72) = *(_QWORD *)(v14 + 72);
          v245 = *(_QWORD *)(v14 + 80);
          if ( v245 == v14 + 96 )
          {
            v272 = *(_QWORD *)(v14 + 88);
            if ( v272 )
            {
              if ( v272 == 1 )
              {
                *v244 = *(_BYTE *)(v14 + 96);
                v272 = *(_QWORD *)(v14 + 88);
                v244 = *(_BYTE **)(v10 + 80);
              }
              else
              {
                s1 = v106;
                memcpy(v244, (const void *)(v14 + 96), v272);
                v272 = *(_QWORD *)(v14 + 88);
                v244 = *(_BYTE **)(v10 + 80);
                v106 = s1;
              }
            }
            *(_QWORD *)(v10 + 88) = v272;
            v244[v272] = 0;
            v244 = *(_BYTE **)(v14 + 80);
          }
          else
          {
            if ( v277 == v244 )
            {
              *(_QWORD *)(v10 + 80) = v245;
              *(_QWORD *)(v10 + 88) = *(_QWORD *)(v14 + 88);
              *(_QWORD *)(v10 + 96) = *(_QWORD *)(v14 + 96);
            }
            else
            {
              *(_QWORD *)(v10 + 80) = v245;
              v246 = *(_QWORD *)(v10 + 96);
              *(_QWORD *)(v10 + 88) = *(_QWORD *)(v14 + 88);
              *(_QWORD *)(v10 + 96) = *(_QWORD *)(v14 + 96);
              if ( v244 )
              {
                *(_QWORD *)(v14 + 80) = v244;
                *(_QWORD *)(v14 + 96) = v246;
                goto LABEL_367;
              }
            }
            *(_QWORD *)(v14 + 80) = v243;
            v244 = (_BYTE *)(v14 + 96);
          }
LABEL_367:
          *(_QWORD *)(v14 + 88) = 0;
          *v244 = 0;
          s1 = v106;
          sub_CEFDD0(v282, v14 + 112);
          v247 = (__int64 *)v286;
          v248 = _mm_loadu_si128(&v285);
          v249 = *(_BYTE **)(v14 + 40);
          *(_QWORD *)(v14 + 16) = v284;
          v250 = s1;
          *(__m128i *)(v14 + 24) = v248;
          if ( v247 == v9 + 5 )
          {
            v271 = v287;
            if ( v287 )
            {
              if ( v287 == 1 )
                *v249 = v288.m128i_i8[0];
              else
                memcpy(v249, v247, v287);
              v271 = v287;
              v249 = *(_BYTE **)(v14 + 40);
            }
            *(_QWORD *)(v14 + 48) = v271;
            v249[v271] = 0;
            v249 = v286;
          }
          else
          {
            if ( v250 == v249 )
            {
              s1 = (void *)v288.m128i_i64[0];
              *(_QWORD *)(v14 + 40) = v247;
              *(__m128 *)(v14 + 48) = _mm_loadh_ps((const double *)&s1);
            }
            else
            {
              s1 = (void *)v288.m128i_i64[0];
              v251 = *(_QWORD *)(v14 + 56);
              *(_QWORD *)(v14 + 40) = v247;
              *(__m128 *)(v14 + 48) = _mm_loadh_ps((const double *)&s1);
              if ( v249 )
              {
                v286 = v249;
                v288.m128i_i64[0] = v251;
                goto LABEL_371;
              }
            }
            v249 = v9 + 5;
            v286 = v9 + 5;
          }
LABEL_371:
          v287 = 0;
          *v249 = 0;
          v252 = (__int64 *)src;
          v253 = *(_BYTE **)(v14 + 80);
          *(_QWORD *)(v14 + 72) = v289;
          if ( v252 == v9 + 10 )
          {
            v270 = n;
            if ( n )
            {
              if ( n == 1 )
                *v253 = v292.m128i_i8[0];
              else
                memcpy(v253, v252, n);
              v270 = n;
              v253 = *(_BYTE **)(v14 + 80);
            }
            *(_QWORD *)(v14 + 88) = v270;
            v253[v270] = 0;
            v253 = src;
            goto LABEL_375;
          }
          if ( v243 == v253 )
          {
            s1 = (void *)v292.m128i_i64[0];
            *(_QWORD *)(v14 + 80) = v252;
            *(__m128 *)(v14 + 88) = _mm_loadh_ps((const double *)&s1);
          }
          else
          {
            s1 = (void *)v292.m128i_i64[0];
            v254 = *(_QWORD *)(v14 + 96);
            *(_QWORD *)(v14 + 80) = v252;
            *(__m128 *)(v14 + 88) = _mm_loadh_ps((const double *)&s1);
            if ( v253 )
            {
              src = v253;
              v292.m128i_i64[0] = v254;
LABEL_375:
              n = 0;
              *v253 = 0;
              sub_CEFDD0(v14 + 112, (__int64)(v9 + 12));
              v255 = v293;
              v53 = &v293[4 * (unsigned int)v294];
              if ( v293 == v53 )
                goto LABEL_46;
              while ( 1 )
              {
                v53 -= 4;
                v256 = *v53;
                if ( *v53 != v53 + 2 )
                  break;
LABEL_379:
                if ( v255 == v53 )
                  goto LABEL_45;
              }
              while ( 1 )
              {
                operator delete(v256);
                if ( v255 == v53 )
                  goto LABEL_45;
                v53 -= 4;
                v256 = *v53;
                if ( *v53 == v53 + 2 )
                  goto LABEL_379;
              }
            }
          }
          v253 = v9 + 10;
          src = v9 + 10;
          goto LABEL_375;
        }
      }
      *(_QWORD *)(v10 + 40) = v107;
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v10 + 56) = *(_QWORD *)(v14 + 56);
      goto LABEL_362;
    }
    if ( v23 < 0 )
      goto LABEL_103;
LABEL_16:
    v24 = (size_t)v19;
    if ( v12 <= v19 )
      v24 = (size_t)v12;
    if ( !v24 || (s1 = v19, v25 = memcmp(v13, v20, v24), v19 = s1, !v25) )
    {
      if ( v12 != v19 && v12 < v19 )
        goto LABEL_22;
LABEL_114:
      v110 = *(void **)v10;
      v111 = _mm_loadu_si128((const __m128i *)(v10 + 256));
      v112 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      *(_QWORD *)(v10 + 264) = *(_QWORD *)(v10 + 8);
      v113 = *(_QWORD *)(v10 + 16);
      v114 = dest;
      *(__m128i *)v10 = v111;
      v284 = v113;
      v286 = v9 + 5;
      v115 = *(_BYTE **)(v10 + 40);
      v116 = v114;
      *(_QWORD *)(v10 + 256) = v110;
      v285 = v112;
      if ( v115 == v114 )
      {
        v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
      }
      else
      {
        v286 = v115;
        v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
      }
      v117 = *(_QWORD *)(v10 + 48);
      *(_BYTE *)(v10 + 56) = 0;
      *(_QWORD *)(v10 + 48) = 0;
      v287 = v117;
      *(_QWORD *)(v10 + 40) = dest;
      v289 = *(_QWORD *)(v10 + 72);
      src = v9 + 10;
      if ( *(_BYTE **)(v10 + 80) == v277 )
      {
        v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
      }
      else
      {
        src = *(void **)(v10 + 80);
        v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
      }
      v118 = *(_QWORD *)(v10 + 88);
      v119 = *(_DWORD *)(v10 + 120);
      *(_QWORD *)(v10 + 88) = 0;
      *(_BYTE *)(v10 + 96) = 0;
      n = v118;
      *(_QWORD *)(v10 + 80) = v277;
      v293 = (void **)(v9 + 14);
      v294 = 0x400000000LL;
      if ( v119 )
      {
        v121 = (_BYTE *)(v10 + 312);
        sub_CEFDD0((__int64)(v9 + 12), v282);
        v120 = *(_QWORD *)(v10 + 296);
        v234 = _mm_loadu_si128((const __m128i *)(v10 + 280));
        v124 = *(_BYTE **)(v10 + 40);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 272);
        v123 = *(_QWORD *)(v10 + 304);
        *(__m128i *)(v10 + 24) = v234;
        if ( v120 == v10 + 312 )
        {
          v116 = v124;
          goto LABEL_120;
        }
        v235 = *(void **)(v10 + 312);
        if ( dest != v124 )
        {
          s1 = *(void **)(v10 + 312);
          v236 = *(_QWORD *)(v10 + 56);
          *(_QWORD *)(v10 + 40) = v120;
          *(__m128 *)(v10 + 48) = _mm_loadh_ps((const double *)&s1);
          if ( v124 )
          {
            *(_QWORD *)(v10 + 296) = v124;
            *(_QWORD *)(v10 + 312) = v236;
            goto LABEL_122;
          }
          goto LABEL_424;
        }
      }
      else
      {
        v120 = *(_QWORD *)(v10 + 296);
        v121 = (_BYTE *)(v10 + 312);
        v122 = _mm_loadu_si128((const __m128i *)(v10 + 280));
        v123 = *(_QWORD *)(v10 + 304);
        *(_QWORD *)(v10 + 16) = *(_QWORD *)(v10 + 272);
        *(__m128i *)(v10 + 24) = v122;
        if ( v10 + 312 == v120 )
        {
LABEL_120:
          if ( v123 )
          {
            if ( v123 == 1 )
              *v116 = *(_BYTE *)(v10 + 312);
            else
              memcpy(v116, v121, v123);
            v123 = *(_QWORD *)(v10 + 304);
            v116 = *(_BYTE **)(v10 + 40);
          }
          *(_QWORD *)(v10 + 48) = v123;
          v116[v123] = 0;
          v124 = *(_BYTE **)(v10 + 296);
LABEL_122:
          *(_QWORD *)(v10 + 304) = 0;
          *v124 = 0;
          v125 = *(_BYTE **)(v10 + 80);
          *(_QWORD *)(v10 + 72) = *(_QWORD *)(v10 + 328);
          v126 = *(void **)(v10 + 336);
          if ( v126 == v281 )
          {
            v238 = *(_QWORD *)(v10 + 344);
            if ( v238 )
            {
              if ( v238 == 1 )
                *v125 = *(_BYTE *)(v10 + 352);
              else
                memcpy(v125, v281, v238);
              v238 = *(_QWORD *)(v10 + 344);
              v125 = *(_BYTE **)(v10 + 80);
            }
            *(_QWORD *)(v10 + 88) = v238;
            v125[v238] = 0;
            v125 = *(_BYTE **)(v10 + 336);
          }
          else
          {
            if ( v277 == v125 )
            {
              s1 = *(void **)(v10 + 352);
              *(_QWORD *)(v10 + 80) = v126;
              *(__m128 *)(v10 + 88) = _mm_loadh_ps((const double *)&s1);
            }
            else
            {
              s1 = *(void **)(v10 + 352);
              v127 = *(_QWORD *)(v10 + 96);
              *(_QWORD *)(v10 + 80) = v126;
              *(__m128 *)(v10 + 88) = _mm_loadh_ps((const double *)&s1);
              if ( v125 )
              {
                *(_QWORD *)(v10 + 336) = v125;
                *(_QWORD *)(v10 + 352) = v127;
                goto LABEL_126;
              }
            }
            v264 = v281;
            *(_QWORD *)(v10 + 336) = v281;
            v125 = v264;
          }
LABEL_126:
          *(_QWORD *)(v10 + 344) = 0;
          *v125 = 0;
          sub_CEFDD0(v282, v10 + 368);
          v128 = _mm_loadu_si128(&v285);
          v129 = (__int64 *)v286;
          v130 = *(_BYTE **)(v10 + 296);
          *(_QWORD *)(v10 + 272) = v284;
          *(__m128i *)(v10 + 280) = v128;
          if ( v129 == v9 + 5 )
          {
            v237 = v287;
            if ( v287 )
            {
              if ( v287 == 1 )
                *v130 = v288.m128i_i8[0];
              else
                memcpy(v130, v129, v287);
              v237 = v287;
              v130 = *(_BYTE **)(v10 + 296);
            }
            *(_QWORD *)(v10 + 304) = v237;
            v130[v237] = 0;
            v130 = v286;
          }
          else
          {
            if ( v121 == v130 )
            {
              s1 = (void *)v288.m128i_i64[0];
              *(_QWORD *)(v10 + 296) = v129;
              *(__m128 *)(v10 + 304) = _mm_loadh_ps((const double *)&s1);
            }
            else
            {
              s1 = (void *)v288.m128i_i64[0];
              v131 = *(_QWORD *)(v10 + 312);
              *(_QWORD *)(v10 + 296) = v129;
              *(__m128 *)(v10 + 304) = _mm_loadh_ps((const double *)&s1);
              if ( v130 )
              {
                v286 = v130;
                v288.m128i_i64[0] = v131;
                goto LABEL_130;
              }
            }
            v130 = v9 + 5;
            v286 = v9 + 5;
          }
LABEL_130:
          v287 = 0;
          *v130 = 0;
          v132 = (__int64 *)src;
          v133 = *(_BYTE **)(v10 + 336);
          *(_QWORD *)(v10 + 328) = v289;
          if ( v132 == v9 + 10 )
          {
            v239 = n;
            if ( n )
            {
              if ( n == 1 )
                *v133 = v292.m128i_i8[0];
              else
                memcpy(v133, v132, n);
              v239 = n;
              v133 = *(_BYTE **)(v10 + 336);
            }
            *(_QWORD *)(v10 + 344) = v239;
            v133[v239] = 0;
            v133 = src;
            goto LABEL_134;
          }
          if ( v281 == v133 )
          {
            s1 = (void *)v292.m128i_i64[0];
            *(_QWORD *)(v10 + 336) = v132;
            *(__m128 *)(v10 + 344) = _mm_loadh_ps((const double *)&s1);
          }
          else
          {
            s1 = (void *)v292.m128i_i64[0];
            v134 = *(_QWORD *)(v10 + 352);
            *(_QWORD *)(v10 + 336) = v132;
            *(__m128 *)(v10 + 344) = _mm_loadh_ps((const double *)&s1);
            if ( v133 )
            {
              src = v133;
              v292.m128i_i64[0] = v134;
LABEL_134:
              n = 0;
              *v133 = 0;
              sub_CEFDD0(v10 + 368, (__int64)(v9 + 12));
              v135 = v293;
              v53 = &v293[4 * (unsigned int)v294];
              if ( v293 == v53 )
                goto LABEL_46;
              while ( 1 )
              {
                v53 -= 4;
                v136 = *v53;
                if ( *v53 != v53 + 2 )
                  break;
LABEL_138:
                if ( v135 == v53 )
                  goto LABEL_45;
              }
              while ( 1 )
              {
                operator delete(v136);
                if ( v135 == v53 )
                  goto LABEL_45;
                v53 -= 4;
                v136 = *v53;
                if ( *v53 == v53 + 2 )
                  goto LABEL_138;
              }
            }
          }
          v133 = v9 + 10;
          src = v9 + 10;
          goto LABEL_134;
        }
        v235 = *(void **)(v10 + 312);
      }
      s1 = v235;
      *(_QWORD *)(v10 + 40) = v120;
      *(__m128 *)(v10 + 48) = _mm_loadh_ps((const double *)&s1);
LABEL_424:
      *(_QWORD *)(v10 + 296) = v121;
      v124 = v121;
      goto LABEL_122;
    }
    if ( v25 >= 0 )
      goto LABEL_114;
LABEL_22:
    v26 = *(_QWORD *)(v10 + 8);
    v27 = *(void **)v10;
    v28 = dest;
    *(__m128i *)v10 = _mm_loadu_si128((const __m128i *)(v11 - 256));
    v29 = v28;
    *(_QWORD *)(v11 - 256) = v27;
    *(_QWORD *)(v11 - 248) = v26;
    v30 = _mm_loadu_si128((const __m128i *)(v10 + 24));
    v284 = *(_QWORD *)(v10 + 16);
    v286 = v9 + 5;
    v31 = *(_BYTE **)(v10 + 40);
    v285 = v30;
    if ( v31 == v28 )
    {
      v288 = _mm_loadu_si128((const __m128i *)(v10 + 56));
    }
    else
    {
      v286 = v31;
      v288.m128i_i64[0] = *(_QWORD *)(v10 + 56);
    }
    v32 = *(_QWORD *)(v10 + 48);
    *(_BYTE *)(v10 + 56) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    v287 = v32;
    *(_QWORD *)(v10 + 40) = dest;
    v289 = *(_QWORD *)(v10 + 72);
    src = v9 + 10;
    if ( *(_BYTE **)(v10 + 80) == v277 )
    {
      v292 = _mm_loadu_si128((const __m128i *)(v10 + 96));
    }
    else
    {
      src = *(void **)(v10 + 80);
      v292.m128i_i64[0] = *(_QWORD *)(v10 + 96);
    }
    v33 = *(_QWORD *)(v10 + 88);
    v34 = *(_DWORD *)(v10 + 120);
    *(_QWORD *)(v10 + 88) = 0;
    *(_BYTE *)(v10 + 96) = 0;
    n = v33;
    *(_QWORD *)(v10 + 80) = v277;
    v293 = (void **)(v9 + 14);
    v294 = 0x400000000LL;
    if ( v34 )
    {
      v35 = (_BYTE *)(v11 - 200);
      sub_CEFDD0((__int64)(v9 + 12), v282);
      v38 = *(_BYTE **)(v10 + 40);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 - 240);
      *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v11 - 232));
      v36 = *(_QWORD *)(v11 - 216);
      if ( v36 != v11 - 200 )
      {
        if ( dest == v38 )
        {
LABEL_472:
          *(_QWORD *)(v10 + 40) = v36;
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 - 208);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)(v11 - 200);
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v36;
          v263 = *(_QWORD *)(v10 + 56);
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 - 208);
          *(_QWORD *)(v10 + 56) = *(_QWORD *)(v11 - 200);
          if ( v38 )
          {
            *(_QWORD *)(v11 - 216) = v38;
            *(_QWORD *)(v11 - 200) = v263;
            goto LABEL_30;
          }
        }
        *(_QWORD *)(v11 - 216) = v35;
        v38 = v35;
        goto LABEL_30;
      }
      v29 = v38;
    }
    else
    {
      v35 = (_BYTE *)(v11 - 200);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 - 240);
      *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v11 - 232));
      v36 = *(_QWORD *)(v11 - 216);
      if ( v11 - 200 != v36 )
        goto LABEL_472;
    }
    v37 = *(_QWORD *)(v11 - 208);
    if ( v37 )
    {
      if ( v37 == 1 )
        *v29 = *(_BYTE *)(v11 - 200);
      else
        memcpy(v29, v35, v37);
      v37 = *(_QWORD *)(v11 - 208);
      v29 = *(_BYTE **)(v10 + 40);
    }
    *(_QWORD *)(v10 + 48) = v37;
    v29[v37] = 0;
    v38 = *(_BYTE **)(v11 - 216);
LABEL_30:
    *(_QWORD *)(v11 - 208) = 0;
    v39 = (_BYTE *)(v11 - 160);
    *v38 = 0;
    v40 = *(_BYTE **)(v10 + 80);
    *(_QWORD *)(v10 + 72) = *(_QWORD *)(v11 - 184);
    v41 = *(_QWORD *)(v11 - 176);
    if ( v41 == v11 - 160 )
    {
      v267 = *(_QWORD *)(v11 - 168);
      if ( v267 )
      {
        if ( v267 == 1 )
          *v40 = *(_BYTE *)(v11 - 160);
        else
          memcpy(v40, (const void *)(v11 - 160), v267);
        v267 = *(_QWORD *)(v11 - 168);
        v40 = *(_BYTE **)(v10 + 80);
      }
      *(_QWORD *)(v10 + 88) = v267;
      v40[v267] = 0;
      v40 = *(_BYTE **)(v11 - 176);
    }
    else
    {
      if ( v277 == v40 )
      {
        *(_QWORD *)(v10 + 80) = v41;
        *(_QWORD *)(v10 + 88) = *(_QWORD *)(v11 - 168);
        *(_QWORD *)(v10 + 96) = *(_QWORD *)(v11 - 160);
      }
      else
      {
        *(_QWORD *)(v10 + 80) = v41;
        v42 = *(_QWORD *)(v10 + 96);
        *(_QWORD *)(v10 + 88) = *(_QWORD *)(v11 - 168);
        *(_QWORD *)(v10 + 96) = *(_QWORD *)(v11 - 160);
        if ( v40 )
        {
          *(_QWORD *)(v11 - 176) = v40;
          *(_QWORD *)(v11 - 160) = v42;
          goto LABEL_34;
        }
      }
      *(_QWORD *)(v11 - 176) = v39;
      v40 = (_BYTE *)(v11 - 160);
    }
LABEL_34:
    *(_QWORD *)(v11 - 168) = 0;
    *v40 = 0;
    sub_CEFDD0(v282, v11 - 144);
    v43 = _mm_loadu_si128(&v285);
    v44 = (__int64 *)v286;
    v45 = *(_BYTE **)(v11 - 216);
    *(_QWORD *)(v11 - 240) = v284;
    *(__m128i *)(v11 - 232) = v43;
    if ( v44 == v9 + 5 )
    {
      v266 = v287;
      if ( v287 )
      {
        if ( v287 == 1 )
          *v45 = v288.m128i_i8[0];
        else
          memcpy(v45, v44, v287);
        v266 = v287;
        v45 = *(_BYTE **)(v11 - 216);
      }
      *(_QWORD *)(v11 - 208) = v266;
      v45[v266] = 0;
      v45 = v286;
    }
    else
    {
      if ( v35 == v45 )
      {
        s1 = (void *)v288.m128i_i64[0];
        *(_QWORD *)(v11 - 216) = v44;
        *(__m128 *)(v11 - 208) = _mm_loadh_ps((const double *)&s1);
      }
      else
      {
        s1 = (void *)v288.m128i_i64[0];
        v46 = *(_QWORD *)(v11 - 200);
        *(_QWORD *)(v11 - 216) = v44;
        *(__m128 *)(v11 - 208) = _mm_loadh_ps((const double *)&s1);
        if ( v45 )
        {
          v286 = v45;
          v288.m128i_i64[0] = v46;
          goto LABEL_38;
        }
      }
      v45 = v9 + 5;
      v286 = v9 + 5;
    }
LABEL_38:
    v287 = 0;
    *v45 = 0;
    v47 = (__int64 *)src;
    v48 = *(_BYTE **)(v11 - 176);
    *(_QWORD *)(v11 - 184) = v289;
    if ( v47 == v9 + 10 )
    {
      v265 = n;
      if ( n )
      {
        if ( n == 1 )
          *v48 = v292.m128i_i8[0];
        else
          memcpy(v48, v47, n);
        v265 = n;
        v48 = *(_BYTE **)(v11 - 176);
      }
      *(_QWORD *)(v11 - 168) = v265;
      v48[v265] = 0;
      v48 = src;
    }
    else
    {
      if ( v39 == v48 )
      {
        s1 = (void *)v292.m128i_i64[0];
        *(_QWORD *)(v11 - 176) = v47;
        *(__m128 *)(v11 - 168) = _mm_loadh_ps((const double *)&s1);
      }
      else
      {
        s1 = (void *)v292.m128i_i64[0];
        v49 = *(_QWORD *)(v11 - 160);
        *(_QWORD *)(v11 - 176) = v47;
        *(__m128 *)(v11 - 168) = _mm_loadh_ps((const double *)&s1);
        if ( v48 )
        {
          src = v48;
          v292.m128i_i64[0] = v49;
          goto LABEL_42;
        }
      }
      v48 = v9 + 10;
      src = v9 + 10;
    }
LABEL_42:
    n = 0;
    *v48 = 0;
    sub_CEFDD0(v11 - 144, (__int64)(v9 + 12));
    v52 = v293;
    v53 = &v293[4 * (unsigned int)v294];
    if ( v293 != v53 )
    {
      do
      {
        while ( 1 )
        {
          v53 -= 4;
          if ( *v53 == v53 + 2 )
            break;
          operator delete(*v53);
          if ( v52 == v53 )
            goto LABEL_45;
        }
      }
      while ( v52 != v53 );
LABEL_45:
      v53 = v293;
    }
LABEL_46:
    if ( v53 != (void **)(v9 + 14) )
      free(v53);
    if ( src != v9 + 10 )
      operator delete(src);
    if ( v286 != v9 + 5 )
      operator delete(v286);
    v54 = *(void **)v10;
    v55 = *(_QWORD *)(v10 + 8);
    v275 = (__m128i *)v10;
    v56 = v11;
    v280 = v11;
    s1 = v54;
    v57 = (__m128i *)v281;
    v58 = v55;
    while ( 1 )
    {
      v59 = v57[-6].m128i_u64[1];
      v60 = v58;
      v61 = (const void *)v57[-6].m128i_i64[0];
      v274 = v57 - 6;
      if ( v59 <= v58 )
        v60 = v59;
      if ( !v60 )
        break;
      v62 = memcmp(v61, s1, v60);
      if ( !v62 )
        break;
      if ( v62 >= 0 )
        goto LABEL_59;
LABEL_101:
      v57 += 16;
    }
    if ( v59 != v58 && v59 < v58 )
      goto LABEL_101;
LABEL_59:
    v63 = (void **)v9;
    v56 -= 256LL;
    v64 = v59;
    v65 = v58;
    while ( 1 )
    {
      v66 = *(_QWORD *)(v56 + 8);
      v67 = v65;
      if ( v66 <= v65 )
        v67 = *(_QWORD *)(v56 + 8);
      if ( !v67 )
        break;
      v68 = *(const void **)v56;
      v279 = v63;
      v69 = memcmp(s1, v68, v67);
      v63 = v279;
      if ( !v69 )
        break;
      if ( v69 >= 0 )
        goto LABEL_66;
LABEL_257:
      v56 -= 256LL;
    }
    if ( v66 != v65 && v66 > v65 )
      goto LABEL_257;
LABEL_66:
    v70 = v64;
    v9 = (__int64 *)v63;
    if ( v56 > (unsigned __int64)v274 )
    {
      v57[-6] = _mm_loadu_si128((const __m128i *)v56);
      *(_QWORD *)v56 = v61;
      v71 = &v57[-3].m128i_i8[8];
      *(_QWORD *)(v56 + 8) = v70;
      v72 = _mm_loadu_si128((__m128i *)((char *)v57 - 72));
      v284 = v57[-5].m128i_i64[0];
      v286 = v63 + 5;
      v73 = (unsigned __int64 *)v57[-4].m128i_i64[1];
      v285 = v72;
      if ( v73 == &v57[-3].m128i_u64[1] )
      {
        v288 = _mm_loadu_si128((__m128i *)((char *)v57 - 40));
      }
      else
      {
        v286 = v73;
        v288.m128i_i64[0] = v57[-3].m128i_i64[1];
      }
      v74 = v57[-3].m128i_u64[0];
      v57[-4].m128i_i64[1] = (__int64)v71;
      v57[-3].m128i_i64[0] = 0;
      v287 = v74;
      v75 = v57[-2].m128i_i64[1];
      v57[-3].m128i_i8[8] = 0;
      v289 = v75;
      src = v63 + 10;
      if ( (__m128i *)v57[-1].m128i_i64[0] == v57 )
      {
        v292 = _mm_loadu_si128(v57);
      }
      else
      {
        src = (void *)v57[-1].m128i_i64[0];
        v292.m128i_i64[0] = v57->m128i_i64[0];
      }
      v76 = v57[-1].m128i_u64[1];
      v77 = v57[1].m128i_i32[2];
      v57[-1].m128i_i64[0] = (__int64)v57;
      v57[-1].m128i_i64[1] = 0;
      n = v76;
      v293 = v63 + 14;
      v294 = 0x400000000LL;
      v57->m128i_i8[0] = 0;
      s1 = &v57[1];
      if ( !v77 )
      {
        v78 = (_BYTE *)(v56 + 56);
        v57[-5].m128i_i64[0] = *(_QWORD *)(v56 + 16);
        *(__m128i *)((char *)v57 - 72) = _mm_loadu_si128((const __m128i *)(v56 + 24));
        v79 = *(_QWORD *)(v56 + 40);
        if ( v56 + 56 == v79 )
          goto LABEL_73;
LABEL_265:
        v57[-4].m128i_i64[1] = v79;
        v57[-3].m128i_i64[0] = *(_QWORD *)(v56 + 48);
        v57[-3].m128i_i64[1] = *(_QWORD *)(v56 + 56);
        goto LABEL_266;
      }
      v78 = (_BYTE *)(v56 + 56);
      sub_CEFDD0((__int64)(v63 + 12), (__int64)v57[1].m128i_i64);
      v81 = (__int8 *)v57[-4].m128i_i64[1];
      v57[-5].m128i_i64[0] = *(_QWORD *)(v56 + 16);
      *(__m128i *)((char *)v57 - 72) = _mm_loadu_si128((const __m128i *)(v56 + 24));
      v79 = *(_QWORD *)(v56 + 40);
      if ( v79 == v56 + 56 )
      {
        v71 = v81;
LABEL_73:
        v80 = *(_QWORD *)(v56 + 48);
        if ( v80 )
        {
          if ( v80 == 1 )
            *v71 = *(_BYTE *)(v56 + 56);
          else
            memcpy(v71, v78, v80);
          v80 = *(_QWORD *)(v56 + 48);
          v71 = (__int8 *)v57[-4].m128i_i64[1];
        }
        v57[-3].m128i_i64[0] = v80;
        v71[v80] = 0;
        v81 = *(__int8 **)(v56 + 40);
      }
      else
      {
        if ( v71 == v81 )
          goto LABEL_265;
        v57[-4].m128i_i64[1] = v79;
        v227 = v57[-3].m128i_i64[1];
        v57[-3].m128i_i64[0] = *(_QWORD *)(v56 + 48);
        v57[-3].m128i_i64[1] = *(_QWORD *)(v56 + 56);
        if ( v81 )
        {
          *(_QWORD *)(v56 + 40) = v81;
          *(_QWORD *)(v56 + 56) = v227;
        }
        else
        {
LABEL_266:
          *(_QWORD *)(v56 + 40) = v78;
          v81 = v78;
        }
      }
      *(_QWORD *)(v56 + 48) = 0;
      v82 = (_BYTE *)(v56 + 96);
      *v81 = 0;
      v83 = (__m128i *)v57[-1].m128i_i64[0];
      v57[-2].m128i_i64[1] = *(_QWORD *)(v56 + 72);
      v84 = *(_QWORD *)(v56 + 80);
      if ( v84 == v56 + 96 )
      {
        v226 = *(_QWORD *)(v56 + 88);
        if ( v226 )
        {
          if ( v226 == 1 )
            v83->m128i_i8[0] = *(_BYTE *)(v56 + 96);
          else
            memcpy(v83, (const void *)(v56 + 96), v226);
          v226 = *(_QWORD *)(v56 + 88);
          v83 = (__m128i *)v57[-1].m128i_i64[0];
        }
        v57[-1].m128i_i64[1] = v226;
        v83->m128i_i8[v226] = 0;
        v83 = *(__m128i **)(v56 + 80);
      }
      else
      {
        if ( v83 == v57 )
        {
          v57[-1].m128i_i64[0] = v84;
          v57[-1].m128i_i64[1] = *(_QWORD *)(v56 + 88);
          v57->m128i_i64[0] = *(_QWORD *)(v56 + 96);
        }
        else
        {
          v57[-1].m128i_i64[0] = v84;
          v85 = v57->m128i_i64[0];
          v57[-1].m128i_i64[1] = *(_QWORD *)(v56 + 88);
          v57->m128i_i64[0] = *(_QWORD *)(v56 + 96);
          if ( v83 )
          {
            *(_QWORD *)(v56 + 80) = v83;
            *(_QWORD *)(v56 + 96) = v85;
            goto LABEL_82;
          }
        }
        *(_QWORD *)(v56 + 80) = v82;
        v83 = (__m128i *)(v56 + 96);
      }
LABEL_82:
      *(_QWORD *)(v56 + 88) = 0;
      v83->m128i_i8[0] = 0;
      sub_CEFDD0((__int64)v57[1].m128i_i64, v56 + 112);
      v86 = _mm_loadu_si128(&v285);
      v87 = (__int64 *)v286;
      v88 = *(_BYTE **)(v56 + 40);
      *(_QWORD *)(v56 + 16) = v284;
      *(__m128i *)(v56 + 24) = v86;
      if ( v87 == v9 + 5 )
      {
        v228 = v287;
        if ( v287 )
        {
          if ( v287 == 1 )
            *v88 = v288.m128i_i8[0];
          else
            memcpy(v88, v87, v287);
          v228 = v287;
          v88 = *(_BYTE **)(v56 + 40);
        }
        *(_QWORD *)(v56 + 48) = v228;
        v88[v228] = 0;
        v88 = v286;
      }
      else
      {
        s1 = (void *)v288.m128i_i64[0];
        if ( v88 == v78 )
        {
          *(_QWORD *)(v56 + 40) = v87;
          *(__m128 *)(v56 + 48) = _mm_loadh_ps((const double *)&s1);
        }
        else
        {
          v89 = _mm_loadh_ps((const double *)&s1);
          v90 = *(_QWORD *)(v56 + 56);
          *(_QWORD *)(v56 + 40) = v87;
          *(__m128 *)(v56 + 48) = v89;
          if ( v88 )
          {
            v286 = v88;
            v288.m128i_i64[0] = v90;
            goto LABEL_86;
          }
        }
        v88 = v9 + 5;
        v286 = v9 + 5;
      }
LABEL_86:
      v287 = 0;
      *v88 = 0;
      v91 = (__int64 *)src;
      v92 = *(_BYTE **)(v56 + 80);
      *(_QWORD *)(v56 + 72) = v289;
      if ( v91 == v9 + 10 )
      {
        v225 = n;
        if ( n )
        {
          if ( n == 1 )
            *v92 = v292.m128i_i8[0];
          else
            memcpy(v92, v91, n);
          v225 = n;
          v92 = *(_BYTE **)(v56 + 80);
        }
        *(_QWORD *)(v56 + 88) = v225;
        v92[v225] = 0;
        v92 = src;
        goto LABEL_90;
      }
      s1 = (void *)v292.m128i_i64[0];
      if ( v82 == v92 )
      {
        *(_QWORD *)(v56 + 80) = v91;
        *(__m128 *)(v56 + 88) = _mm_loadh_ps((const double *)&s1);
      }
      else
      {
        v93 = _mm_loadh_ps((const double *)&s1);
        v94 = *(_QWORD *)(v56 + 96);
        *(_QWORD *)(v56 + 80) = v91;
        *(__m128 *)(v56 + 88) = v93;
        if ( v92 )
        {
          src = v92;
          v292.m128i_i64[0] = v94;
LABEL_90:
          n = 0;
          *v92 = 0;
          sub_CEFDD0(v56 + 112, (__int64)(v9 + 12));
          v95 = v293;
          v96 = &v293[4 * (unsigned int)v294];
          if ( v293 != v96 )
          {
            do
            {
              while ( 1 )
              {
                v96 -= 4;
                if ( *v96 == v96 + 2 )
                  break;
                operator delete(*v96);
                if ( v95 == v96 )
                  goto LABEL_93;
              }
            }
            while ( v95 != v96 );
LABEL_93:
            v96 = v293;
          }
          if ( v96 != (void **)(v9 + 14) )
            free(v96);
          if ( src != v9 + 10 )
            operator delete(src);
          if ( v286 != v9 + 5 )
            operator delete(v286);
          v58 = v275->m128i_u64[1];
          s1 = (void *)v275->m128i_i64[0];
          goto LABEL_101;
        }
      }
      v92 = v9 + 10;
      src = v9 + 10;
      goto LABEL_90;
    }
    v10 = (__int64)v275;
    v7 = (char *)v274 - (char *)v275;
    sub_10141F0((_DWORD)v274, v280, v276, (_DWORD)v63, v50, v51, (char)s1);
    if ( v7 <= 4096 )
      return;
    v11 = (__int64)v274;
  }
  while ( v276 );
  v210 = (__int64)v274;
  v8 = v10;
LABEL_220:
  v283 = a7;
  LOBYTE(v284) = a7;
  sub_1013CD0(v8, v210);
  do
  {
    v210 -= 256;
    sub_10136F0(v8, v210, v210);
  }
  while ( v210 - v8 > 256 );
}
