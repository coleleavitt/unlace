__int64 __fastcall CoinPackedMatrix::appendMajor(
        CoinPackedMatrix *this,
        int a2,
        const int *a3,
        unsigned __int64 a4,
        const double *a5,
        int a6)
{
  unsigned __int64 v9; // rbx
  int v10; // r11d
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  const int *v16; // rax
  _DWORD *v17; // rbp
  __int64 v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  int v21; // r8d
  int v22; // ecx
  int v23; // edi
  __int64 v24; // rcx
  unsigned int v25; // ecx
  const int *v26; // r8
  __int64 v27; // rsi
  unsigned int v28; // r10d
  const int *v29; // rdi
  __int64 v30; // rdx
  _DWORD *v31; // rsi
  __int64 v32; // rdx
  int v33; // esi
  int v34; // edi
  int v35; // ecx
  int v36; // ecx
  int v37; // esi
  int v38; // edi
  int v39; // ecx
  int v40; // edi
  int v41; // esi
  int v42; // edi
  int v43; // ecx
  int v44; // edi
  int v45; // esi
  int v46; // edi
  int v47; // ecx
  int v48; // edi
  int v49; // esi
  int v50; // edi
  int v51; // ecx
  int v52; // edi
  int v53; // esi
  int v54; // esi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  int *v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rbx
  __int64 v62; // r8
  unsigned int v63; // edx
  int v64; // eax
  int v65; // edi
  int v66; // edi
  int v67; // edi
  __int64 v68; // rax
  unsigned int v69; // r9d
  __int64 v70; // rdx
  __m128i v71; // xmm0
  const int *v72; // r11
  __int64 v73; // rsi
  unsigned int v74; // edx
  __m128i v75; // xmm2
  __m128i v76; // xmm1
  __m128i v77; // xmm2
  signed int v78; // edx
  __m128i v79; // xmm1
  __m128i v80; // xmm0
  __m128i v81; // xmm2
  __m128i v82; // xmm1
  int v83; // eax
  int v84; // esi
  int v85; // esi
  int v86; // edi
  int v87; // esi
  int v88; // edi
  int v89; // esi
  int v90; // edi
  int v91; // esi
  int v92; // edi
  int v93; // edx
  int v94; // esi
  __int64 v95; // rsi
  int v96; // ebx
  __int64 v97; // rax
  int v98; // ecx
  __int64 v99; // rbx
  void *v100; // rdi
  int v101; // eax
  unsigned __int64 v102; // rax
  __int64 v103; // rbx
  void *v104; // rdi
  int v105; // eax
  __int64 v106; // rbx
  void *v107; // rdi
  unsigned __int64 v108; // rax
  __int64 v109; // rbx
  void *v110; // rdi
  __int64 v111; // rdx
  int v112; // eax
  int v113; // ecx
  unsigned int v114; // eax
  int v115; // esi
  __m128i v116; // xmm0
  unsigned int v117; // edi
  const __m128i *v118; // rdx
  unsigned int v119; // edi
  __m128i v120; // xmm2
  __m128i v121; // xmm1
  __m128i v122; // xmm2
  unsigned int v123; // edx
  __m128i v124; // xmm1
  __m128i v125; // xmm0
  __m128i v126; // xmm2
  __m128i v127; // xmm1
  int v128; // eax
  int v129; // edx
  int v130; // edx
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 v134; // rsi
  __int64 v135; // rax
  __int64 v136; // rsi
  const int *v137; // r9
  int v138; // edx
  __int64 v139; // r8
  __int64 v140; // rsi
  int v141; // ecx
  int v142; // edi
  int v143; // edx
  unsigned int v144; // ebp
  void *v145; // rax
  _BYTE *v146; // rax
  __int64 v147; // r12
  _BYTE *v148; // r8
  const int *v149; // rax
  int v150; // r11d
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // r10
  const double *v155; // r9
  __int64 v156; // rdi
  char *v157; // r10
  __int64 v158; // rsi
  _BYTE *v159; // r14
  int v160; // ecx
  int v161; // r14d
  int v162; // ecx
  __int64 v163; // rsi
  int *v164; // rdx
  __int64 v165; // rsi
  __int64 v166; // r11
  __int64 v167; // rdx
  __int64 v168; // r8
  unsigned int v169; // esi
  signed int v170; // eax
  int v171; // edi
  int v172; // edi
  int v173; // edi
  unsigned int v174; // ebx
  __int64 v175; // rsi
  __m128i v176; // xmm0
  __int64 v177; // r11
  __int64 v178; // rax
  unsigned int v179; // edx
  __m128i si128; // xmm2
  __m128i v181; // xmm1
  __m128i v182; // xmm2
  signed int v183; // edx
  __m128i v184; // xmm1
  __m128i v185; // xmm0
  __m128i v186; // xmm2
  __m128i v187; // xmm1
  int v188; // eax
  int v189; // esi
  int v190; // esi
  int v191; // edi
  int v192; // esi
  int v193; // edi
  int v194; // esi
  int v195; // edi
  int v196; // esi
  int v197; // edi
  int v198; // edx
  int v199; // esi
  int v200; // ebx
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rsi
  __int64 v204; // r8
  __int64 v205; // rax
  int v206; // edx
  int v207; // ecx
  int v208; // edx
  const int *v209; // rsi
  const int *v210; // rcx
  __int64 v211; // rdx
  unsigned __int64 v213; // rbp
  int v214; // ebx
  __int64 v215; // rcx
  int *v216; // r12
  __int64 v217; // r11
  __int64 v218; // rdi
  __int64 v219; // rsi
  __int64 v220; // rdx
  __int64 v221; // rax
  unsigned __int64 v222; // r8
  _DWORD *v223; // r9
  int v224; // edi
  unsigned int v225; // ecx
  int v226; // edi
  int v227; // edi
  int v228; // edi
  __int64 v229; // rbx
  unsigned int v230; // r10d
  __int64 v231; // rcx
  unsigned int v232; // r10d
  __m128i v233; // xmm0
  __int64 v234; // r11
  unsigned int v235; // eax
  const int *v236; // rdx
  __m128i v237; // xmm2
  __m128i v238; // xmm1
  __m128i v239; // xmm2
  __m128i v240; // xmm1
  signed int v241; // edi
  __m128i v242; // xmm0
  __m128i v243; // xmm2
  __m128i v244; // xmm1
  __int64 v245; // rax
  int v246; // edx
  int v247; // eax
  __int64 v248; // rax
  int v249; // edx
  int v250; // eax
  __int64 v251; // rax
  int v252; // edx
  int v253; // eax
  __int64 v254; // rax
  int v255; // edx
  int v256; // eax
  __int64 v257; // rax
  int v258; // edx
  int v259; // edi
  __int64 v260; // rdi
  int v261; // eax
  __int64 v262; // rdx
  void *v263; // rax
  _BYTE *v264; // r9
  const int *v265; // rdi
  int v266; // r14d
  const int *v267; // rsi
  __int64 v268; // r13
  __int64 v269; // rsi
  __int64 v270; // rax
  int v271; // ecx
  __int64 v272; // rax
  const double *v273; // r11
  signed int *v274; // r12
  __int64 v275; // r10
  __int64 v276; // r8
  _BYTE *v277; // rsi
  int v278; // edx
  int v279; // edx
  int v280; // ecx
  int *v281; // rax
  int *v282; // rcx
  __int64 v283; // rdx
  unsigned __int64 v284; // rax
  int v285; // edx
  __int64 v286; // r12
  int v287; // ebx
  __int64 v288; // r13
  __int64 v289; // rax
  __int64 v290; // r9
  int *v291; // rdi
  int v292; // ebp
  __int64 v293; // r11
  __int64 v294; // rdx
  __int64 v295; // r10
  _DWORD *v296; // r8
  int *v297; // rsi
  unsigned int v298; // edx
  int v299; // eax
  int v300; // eax
  int v301; // eax
  unsigned int v302; // ebx
  unsigned int v303; // eax
  __int64 v304; // rdx
  signed int *v305; // rdi
  __m128i v306; // xmm0
  unsigned int v307; // ecx
  __int64 v308; // rdx
  __int64 v309; // rax
  __m128i v310; // xmm2
  __m128i v311; // xmm1
  __m128i v312; // xmm2
  __m128i v313; // xmm1
  signed int v314; // ecx
  __m128i v315; // xmm0
  __m128i v316; // xmm2
  __m128i v317; // xmm1
  __int64 v318; // rax
  int v319; // edx
  int v320; // eax
  __int64 v321; // rax
  int v322; // edx
  int v323; // eax
  __int64 v324; // rax
  int v325; // edx
  int v326; // eax
  __int64 v327; // rax
  int v328; // edx
  int v329; // eax
  __int64 v330; // rax
  int v331; // edx
  int v332; // ecx
  __int64 v333; // rax
  int v334; // edx
  __int64 v335; // rcx
  unsigned __int64 v336; // rax
  int v337; // edx
  void *v338; // rax
  __int64 v339; // rdx
  int v340; // esi
  __int64 v341; // rdx
  int v342; // esi
  int v345; // [rsp+14h] [rbp-74h]
  unsigned int v346; // [rsp+18h] [rbp-70h]
  unsigned int v347; // [rsp+18h] [rbp-70h]
  unsigned int v348; // [rsp+18h] [rbp-70h]
  signed int *v349; // [rsp+18h] [rbp-70h]
  int v350; // [rsp+18h] [rbp-70h]
  unsigned int v351; // [rsp+20h] [rbp-68h]
  __int64 v352; // [rsp+20h] [rbp-68h]
  int v353; // [rsp+20h] [rbp-68h]
  __int64 v354; // [rsp+28h] [rbp-60h]
  const int *v355; // [rsp+28h] [rbp-60h]
  __int64 v356; // [rsp+28h] [rbp-60h]
  int *v357; // [rsp+30h] [rbp-58h]
  signed int *v358; // [rsp+38h] [rbp-50h]
  unsigned int v359; // [rsp+40h] [rbp-48h]
  unsigned int v360; // [rsp+44h] [rbp-44h]

  v9 = a6;
  v10 = a3[a2];
  v11 = *((int *)this + 16);
  v12 = *((_DWORD *)this + 19);
  v345 = v10;
  v13 = v11 + a2;
  if ( (int)v11 + a2 <= v12 )
  {
    v14 = *((_QWORD *)this + 6);
    v15 = v10;
    if ( (_DWORD)v11 )
      v15 = *(_DWORD *)(v14 + 4LL * (int)v11) + v10;
    if ( *((_DWORD *)this + 20) >= v15 )
    {
      if ( (int)v9 > 0 )
      {
        v263 = (void *)operator new[]((int)v9);
        v264 = memset(v263, 0, (int)v9);
        if ( a2 <= 0 )
        {
          v144 = 0;
        }
        else
        {
          v265 = a3 + 1;
          v349 = (signed int *)a4;
          v144 = 0;
          v266 = 0;
          v352 = *((_QWORD *)this + 7);
          v267 = (const int *)(a4 + 4);
          v268 = *((_QWORD *)this + 6);
          v355 = v267;
          do
          {
            v269 = *(v265 - 1);
            v270 = v266 + *((_DWORD *)this + 16);
            v271 = *(_DWORD *)(v268 + 4 * v270);
            if ( (int)v269 < *v265 )
            {
              v272 = (int)v269 + 1;
              v273 = &a5[v269 - v272];
              v274 = &v349[v269 - v272];
              v275 = *((_QWORD *)this + 4) + -8 * v272 + 8LL * v271;
              v276 = *((_QWORD *)this + 5) + -4 * v272 + 4LL * v271;
              do
              {
                v279 = v274[v272];
                *(double *)(v275 + 8 * v272) = v273[v272];
                if ( v279 < 0 || (int)v9 <= v279 || (v277 = &v264[v279], *v277) )
                  ++v144;
                else
                  *v277 = 1;
                *(_DWORD *)(v276 + 4 * v272) = v279;
                ++v271;
                v278 = v272++;
              }
              while ( *v265 > v278 );
              v270 = v266 + *((_DWORD *)this + 16);
            }
            *(_DWORD *)(v268 + 4 * v270 + 4) = v271;
            *(_DWORD *)(v352 + 4LL * (v266 + *((_DWORD *)this + 16))) = v271
                                                                      - *(_DWORD *)(v268
                                                                                  + 4LL
                                                                                  * (v266 + *((_DWORD *)this + 16)));
            v280 = *(v265 - 1);
            if ( v280 < *v265 )
            {
              v281 = &v349[v280];
              v282 = (int *)&v355[(unsigned int)(*v265 - 1 - v280) + (__int64)v280];
              do
              {
                v283 = *v281;
                if ( (int)v283 >= 0 && (int)v9 > (int)v283 )
                  v264[v283] = 0;
                ++v281;
              }
              while ( v281 != v282 );
            }
            ++v266;
            ++v265;
          }
          while ( a2 != v266 );
        }
        operator delete[](v264);
        v13 = *((_DWORD *)this + 16) + a2;
      }
      else
      {
        v163 = 4 * v11;
        v164 = (int *)(v14 + 4 * v11);
        if ( *((double *)this + 2) == 0.0 )
        {
          v165 = *v164;
          v166 = *((_QWORD *)this + 5);
          v167 = 4 * v165;
          if ( v345 <= 0 )
          {
            v200 = 0;
          }
          else
          {
            v168 = v166 + v167;
            if ( (v166 + v167 >= a4 + 16 || a4 >= v166 + v167 + 16) && (unsigned int)v345 > 0xC )
            {
              v169 = -(int)(a4 >> 2) & 3;
              if ( v169 )
              {
                v170 = *(_DWORD *)a4;
                *(_DWORD *)(v166 + v167) = *(_DWORD *)a4;
                if ( v170 < 0 )
                  v170 = -1;
                v171 = 1;
                if ( v169 != 1 )
                {
                  v172 = *(_DWORD *)(a4 + 4);
                  *(_DWORD *)(v166 + v167 + 4) = v172;
                  if ( v170 < v172 )
                    v170 = v172;
                  v171 = 2;
                  if ( v169 != 2 )
                  {
                    v173 = *(_DWORD *)(a4 + 8);
                    *(_DWORD *)(v166 + v167 + 8) = v173;
                    if ( v170 < v173 )
                      v170 = v173;
                    v171 = 3;
                  }
                }
              }
              else
              {
                v171 = 0;
                v170 = -1;
              }
              v174 = v345 - v169;
              v175 = 4LL * v169;
              v176 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v170), 0);
              v177 = v175 + v167 + v166;
              v178 = 0;
              v179 = 0;
              do
              {
                si128 = _mm_load_si128((const __m128i *)(a4 + v175 + v178));
                ++v179;
                v181 = _mm_cmpgt_epi32(v176, si128);
                *(__m128i *)(v177 + v178) = si128;
                v178 += 16;
                v176 = _mm_or_si128(_mm_and_si128(v176, v181), _mm_andnot_si128(v181, si128));
              }
              while ( v174 >> 2 > v179 );
              v182 = _mm_srli_si128(v176, 8);
              v183 = (v174 & 0xFFFFFFFC) + v171;
              v184 = _mm_cmpgt_epi32(v182, v176);
              v185 = _mm_or_si128(_mm_andnot_si128(v184, v176), _mm_and_si128(v182, v184));
              v186 = _mm_srli_si128(v185, 4);
              v187 = _mm_cmpgt_epi32(v186, v185);
              v188 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v187, v185), _mm_and_si128(v186, v187)));
              if ( (v174 & 0xFFFFFFFC) != v174 )
              {
                v189 = *(_DWORD *)(a4 + 4LL * v183);
                *(_DWORD *)(v168 + 4LL * v183) = v189;
                if ( v188 < v189 )
                  v188 = v189;
                v190 = v183 + 1;
                if ( v345 > v183 + 1 )
                {
                  v191 = *(_DWORD *)(a4 + 4LL * v190);
                  *(_DWORD *)(v168 + 4LL * v190) = v191;
                  v192 = v183 + 2;
                  if ( v188 < v191 )
                    v188 = v191;
                  if ( v345 > v192 )
                  {
                    v193 = *(_DWORD *)(a4 + 4LL * v192);
                    *(_DWORD *)(v168 + 4LL * v192) = v193;
                    v194 = v183 + 3;
                    if ( v188 < v193 )
                      v188 = v193;
                    if ( v345 > v194 )
                    {
                      v195 = *(_DWORD *)(a4 + 4LL * v194);
                      *(_DWORD *)(v168 + 4LL * v194) = v195;
                      v196 = v183 + 4;
                      if ( v188 < v195 )
                        v188 = v195;
                      if ( v345 > v196 )
                      {
                        v197 = *(_DWORD *)(a4 + 4LL * v196);
                        *(_DWORD *)(v168 + 4LL * v196) = v197;
                        if ( v188 < v197 )
                          v188 = v197;
                        v198 = v183 + 5;
                        if ( v345 > v198 )
                        {
                          v199 = *(_DWORD *)(a4 + 4LL * v198);
                          *(_DWORD *)(v168 + 4LL * v198) = v199;
                          if ( v188 < v199 )
                            v188 = v199;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v339 = 0;
              v188 = -1;
              do
              {
                v340 = *(_DWORD *)(a4 + v339);
                *(_DWORD *)(v168 + v339) = v340;
                if ( v188 < v340 )
                  v188 = v340;
                v339 += 4;
              }
              while ( v339 != 4LL * (unsigned int)(v345 - 1) + 4 );
            }
            v200 = v188 + 1;
            v165 = *(int *)(v14 + 4LL * *((int *)this + 16));
          }
          CoinMemcpyN<double>(a5, (unsigned int)v345, *((_QWORD *)this + 4) + 8 * v165);
          v201 = *((int *)this + 16);
          v202 = 4 * v201;
          v203 = 4 * v201 + *((_QWORD *)this + 6);
          *((_QWORD *)this + 6) = v203;
          if ( a2 > 0 )
          {
            v204 = *((_QWORD *)this + 7);
            v205 = 0;
            do
            {
              v206 = a3[v205 + 1] - a3[v205];
              *(_DWORD *)(v203 + 4 * v205 + 4) = v206 + *(_DWORD *)(v203 + 4 * v205);
              v207 = v205++ + *((_DWORD *)this + 16);
              *(_DWORD *)(v204 + 4LL * v207) = v206;
            }
            while ( v205 != (unsigned int)(a2 - 1) + 1LL );
            v201 = *((int *)this + 16);
            v202 = 4 * v201;
          }
          v13 = a2 + v201;
          *((_QWORD *)this + 6) = v203 - v202;
        }
        else
        {
          *((_QWORD *)this + 6) = v164;
          if ( a2 <= 0 )
          {
            v200 = 0;
          }
          else
          {
            v286 = 0;
            v287 = -1;
            v358 = (signed int *)a4;
            do
            {
              v288 = v286 + 1;
              v289 = a3[v286];
              v353 = v286;
              v290 = *((_QWORD *)this + 5);
              v356 = v286 + 1;
              v291 = &v164[v356 - 1];
              v292 = a3[v286 + 1] - v289;
              v293 = v289;
              v294 = *v291;
              v357 = v291;
              v295 = 4 * v294;
              if ( v292 > 0 )
              {
                v296 = (_DWORD *)(v290 + v295);
                v297 = &v358[v293];
                if ( (v290 + v295 >= (unsigned __int64)&v358[v293 + 4]
                   || (unsigned __int64)&v358[v293] >= v290 + v295 + 16)
                  && (unsigned int)v292 > 0xC )
                {
                  v350 = 0;
                  v298 = -(int)((unsigned __int64)v297 >> 2) & 3;
                  if ( v298 )
                  {
                    v299 = *v297;
                    v350 = 1;
                    *v296 = *v297;
                    if ( v287 < v299 )
                      v287 = v299;
                    if ( v298 != 1 )
                    {
                      v300 = v358[v293 + 1];
                      v350 = 2;
                      *(_DWORD *)(v290 + v295 + 4) = v300;
                      if ( v287 < v300 )
                        v287 = v300;
                      if ( v298 != 2 )
                      {
                        v301 = v358[v293 + 2];
                        v350 = 3;
                        *(_DWORD *)(v290 + v295 + 8) = v301;
                        if ( v287 < v301 )
                          v287 = v301;
                      }
                    }
                  }
                  v360 = v287;
                  v302 = 0;
                  v303 = v292 - v298;
                  v304 = v298;
                  v359 = v303;
                  v305 = &v358[v304 + v293];
                  v306 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v360), 0);
                  v307 = v303 >> 2;
                  v308 = v290 + v295 + v304 * 4;
                  v309 = 0;
                  do
                  {
                    v310 = _mm_load_si128((const __m128i *)&v305[v309]);
                    ++v302;
                    *(__m128i *)(v308 + v309 * 4) = v310;
                    v311 = _mm_cmpgt_epi32(v310, v306);
                    v309 += 4;
                    v306 = _mm_or_si128(_mm_andnot_si128(v311, v306), _mm_and_si128(v310, v311));
                  }
                  while ( v307 > v302 );
                  v312 = _mm_srli_si128(v306, 8);
                  v313 = _mm_cmpgt_epi32(v306, v312);
                  v314 = (v359 & 0xFFFFFFFC) + v350;
                  v315 = _mm_or_si128(_mm_and_si128(v306, v313), _mm_andnot_si128(v313, v312));
                  v316 = _mm_srli_si128(v315, 4);
                  v317 = _mm_cmpgt_epi32(v315, v316);
                  v287 = _mm_cvtsi128_si32(_mm_or_si128(_mm_and_si128(v315, v317), _mm_andnot_si128(v317, v316)));
                  if ( (v359 & 0xFFFFFFFC) != v359 )
                  {
                    v318 = v314;
                    v319 = v297[v318];
                    v296[v318] = v319;
                    v320 = v314 + 1;
                    if ( v287 < v319 )
                      v287 = v319;
                    if ( v292 > v320 )
                    {
                      v321 = v320;
                      v322 = v297[v321];
                      v296[v321] = v322;
                      v323 = v314 + 2;
                      if ( v287 < v322 )
                        v287 = v322;
                      if ( v292 > v323 )
                      {
                        v324 = v323;
                        v325 = v297[v324];
                        v296[v324] = v325;
                        v326 = v314 + 3;
                        if ( v287 < v325 )
                          v287 = v325;
                        if ( v292 > v326 )
                        {
                          v327 = v326;
                          v328 = v297[v327];
                          v296[v327] = v328;
                          v329 = v314 + 4;
                          if ( v287 < v328 )
                            v287 = v328;
                          if ( v292 > v329 )
                          {
                            v330 = v329;
                            v331 = v297[v330];
                            v296[v330] = v331;
                            if ( v287 < v331 )
                              v287 = v331;
                            v332 = v314 + 5;
                            if ( v292 > v332 )
                            {
                              v333 = v332;
                              v334 = v358[v333 + v293];
                              *(_DWORD *)(v290 + v333 * 4 + v295) = v334;
                              if ( v287 < v334 )
                                v287 = v334;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v336 = 0;
                  do
                  {
                    v337 = v297[v336 / 4];
                    v296[v336 / 4] = v337;
                    if ( v287 < v337 )
                      v287 = v337;
                    v336 += 4LL;
                  }
                  while ( v336 != 4LL * (unsigned int)(v292 - 1) + 4 );
                }
                v294 = *v357;
                v289 = a3[v286];
              }
              ++v286;
              CoinMemcpyN<double>(&a5[v289], (unsigned int)v292, *((_QWORD *)this + 4) + 8 * v294);
              v164 = *((int **)this + 6);
              v335 = *((_QWORD *)this + 7);
              v164[v288] = v292 + v164[v356 - 1];
              *(_DWORD *)(v335 + 4LL * (*((_DWORD *)this + 16) + v353)) = v292;
            }
            while ( v288 != (unsigned int)(a2 - 1) + 1LL );
            v200 = v287 + 1;
            v13 = a2 + *((_DWORD *)this + 16);
            v163 = 4LL * *((int *)this + 16);
          }
          *((_QWORD *)this + 6) = &v164[v163 / 0xFFFFFFFFFFFFFFFCLL];
        }
        if ( *((_DWORD *)this + 17) >= v200 )
          v200 = *((_DWORD *)this + 17);
        v144 = 0;
        *((_DWORD *)this + 17) = v200;
      }
      goto LABEL_188;
    }
  }
  if ( *((double *)this + 2) != 0.0
    || *((double *)this + 3) != 0.0
    || (int)v9 > 0
    || (v98 = *((_DWORD *)this + 18), v98 < *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v11)) )
  {
    if ( (unsigned __int64)a2 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_327;
    v16 = (const int *)operator new[](4LL * a2);
    v17 = v16;
    if ( a2 <= 0 )
    {
      CoinPackedMatrix::resizeForAddingMajorVectors(this, a2, v16);
      operator delete[](v17);
      if ( (int)v9 <= 0 )
      {
        v57 = *((_QWORD *)this + 6);
        v97 = *((int *)this + 16);
        v262 = 4 * v97;
        v58 = (int *)(v57 + 4 * v97);
        if ( *((double *)this + 2) == 0.0 )
          goto LABEL_34;
        v96 = 0;
        goto LABEL_227;
      }
      v144 = 0;
      v338 = (void *)operator new[](v9);
      v148 = memset(v338, 0, v9);
    }
    else
    {
      v18 = (unsigned int)(a2 - 1);
      v19 = -(int)((unsigned __int64)(a3 + 1) >> 2) & 3;
      v20 = 0;
      if ( (int)v19 + 3 > (unsigned int)v18 )
        goto LABEL_18;
      if ( (_DWORD)v19 )
      {
        if ( (_DWORD)v19 == 3 )
        {
          v21 = 2;
          v22 = a3[1] - *a3;
          v17[1] = a3[2] - a3[1];
          v23 = 2;
          *v17 = v22;
        }
        else
        {
          v21 = 0;
          v23 = 0;
        }
        v24 = v23 + 1LL;
        v17[v24 - 1] = a3[v24] - a3[v24 - 1];
        v20 = v23 + 1;
        if ( (unsigned int)v19 > v21 + 1 )
        {
          v17[v24] = a3[v24 + 1] - a3[v24];
          v20 = v23 + 2;
          if ( (unsigned int)v19 > v21 + 2 )
          {
            v17[v24 + 1] = a3[v24 + 2] - a3[v24 + 1];
            v20 = v23 + 3;
          }
        }
      }
      v25 = 0;
      v26 = &a3[v19 + 1];
      v27 = v19;
      v28 = a2 - v19;
      v29 = &a3[v19];
      v30 = 0;
      v31 = &v17[v27];
      do
      {
        ++v25;
        *(__m128i *)&v31[v30] = _mm_sub_epi32(
                                  _mm_load_si128((const __m128i *)&v26[v30]),
                                  _mm_loadu_si128((const __m128i *)&v29[v30]));
        v30 += 4;
      }
      while ( v28 >> 2 > v25 );
      v20 += v28 & 0xFFFFFFFC;
      if ( (v28 & 0xFFFFFFFC) != v28 )
      {
LABEL_18:
        v32 = v20;
        if ( v20 + 1 >= (int)v18 || a2 <= v20 )
        {
          v35 = v20;
        }
        else
        {
          v33 = a3[v32 + 1];
          v34 = a3[v32 + 2];
          v17[v20] = a3[v20 + 1] - a3[v20];
          v17[v32 + 1] = v34 - v33;
          v35 = v20 + 2;
          if ( (int)v18 > v20 + 3 )
          {
            v36 = a3[v32 + 3];
            v17[v32 + 2] = v36 - v34;
            v37 = a3[v32 + 4];
            v38 = v37 - v36;
            v35 = v20 + 4;
            v17[v32 + 3] = v38;
            if ( (int)v18 > v20 + 5 )
            {
              v39 = a3[v32 + 5];
              v40 = v39 - v37;
              v41 = a3[v32 + 6];
              v17[v32 + 4] = v40;
              v42 = v41 - v39;
              v35 = v20 + 6;
              v17[v32 + 5] = v42;
              if ( (int)v18 > v20 + 7 )
              {
                v43 = a3[v32 + 7];
                v44 = v43 - v41;
                v45 = a3[v32 + 8];
                v17[v32 + 6] = v44;
                v46 = v45 - v43;
                v35 = v20 + 8;
                v17[v32 + 7] = v46;
                if ( (int)v18 > v20 + 9 )
                {
                  v47 = a3[v32 + 9];
                  v48 = v47 - v45;
                  v49 = a3[v32 + 10];
                  v17[v32 + 8] = v48;
                  v50 = v49 - v47;
                  v35 = v20 + 10;
                  v17[v32 + 9] = v50;
                  if ( (int)v18 > v20 + 11 )
                  {
                    v51 = a3[v32 + 11];
                    v52 = v51 - v49;
                    v53 = a3[v32 + 12];
                    v17[v32 + 10] = v52;
                    v54 = v53 - v51;
                    v35 = v20 + 12;
                    v17[v32 + 11] = v54;
                  }
                }
              }
            }
          }
        }
        v55 = v35 + 1LL;
        v56 = v55;
        v17[v55 - 1] = a3[v55] - a3[v55 - 1];
        if ( a2 > v35 + 1 )
        {
          v17[v55] = a3[v55 + 1] - a3[v55];
          if ( a2 > v35 + 2 )
          {
            v17[v56 + 1] = a3[v56 + 2] - a3[v56 + 1];
            if ( a2 > v35 + 3 )
            {
              v17[v56 + 2] = a3[v56 + 3] - a3[v56 + 2];
              if ( a2 > v35 + 4 )
              {
                v17[v56 + 3] = a3[v56 + 4] - a3[v56 + 3];
                if ( a2 > v35 + 5 )
                  v17[v56 + 4] = a3[v56 + 5] - a3[v56 + 4];
              }
            }
          }
        }
      }
      CoinPackedMatrix::resizeForAddingMajorVectors(this, a2, v17);
      operator delete[](v17);
      if ( (int)v9 <= 0 )
      {
        v57 = *((_QWORD *)this + 6);
        v58 = (int *)(v57 + 4LL * *((int *)this + 16));
        if ( *((double *)this + 2) == 0.0 )
        {
LABEL_34:
          v59 = *v58;
          v60 = *((_QWORD *)this + 5);
          v61 = 4 * v59;
          if ( v345 <= 0 )
          {
            v96 = 0;
            v95 = (unsigned int)v345;
          }
          else
          {
            v62 = v60 + v61;
            if ( (v60 + v61 >= a4 + 16 || a4 >= v60 + v61 + 16) && (unsigned int)v345 > 0xC )
            {
              v63 = -(int)(a4 >> 2) & 3;
              if ( v63 )
              {
                v64 = *(_DWORD *)a4;
                *(_DWORD *)(v60 + v61) = *(_DWORD *)a4;
                if ( v64 < 0 )
                  v64 = -1;
                v65 = 1;
                if ( v63 != 1 )
                {
                  v66 = *(_DWORD *)(a4 + 4);
                  *(_DWORD *)(v60 + v61 + 4) = v66;
                  if ( v64 < v66 )
                    v64 = v66;
                  v65 = 2;
                  if ( v63 != 2 )
                  {
                    v67 = *(_DWORD *)(a4 + 8);
                    *(_DWORD *)(v60 + v61 + 8) = v67;
                    if ( v64 < v67 )
                      v64 = v67;
                    v65 = 3;
                  }
                }
              }
              else
              {
                v65 = 0;
                v64 = -1;
              }
              v346 = v64;
              v68 = 0;
              v69 = v345 - v63;
              v70 = 4LL * v63;
              v71 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v346), 0);
              v72 = (const int *)(a4 + v70);
              v73 = v61 + v70 + v60;
              v74 = 0;
              do
              {
                v75 = _mm_load_si128((const __m128i *)&v72[v68]);
                ++v74;
                *(__m128i *)(v73 + v68 * 4) = v75;
                v76 = _mm_cmpgt_epi32(v71, v75);
                v68 += 4;
                v71 = _mm_or_si128(_mm_and_si128(v71, v76), _mm_andnot_si128(v76, v75));
              }
              while ( v69 >> 2 > v74 );
              v77 = _mm_srli_si128(v71, 8);
              v78 = (v69 & 0xFFFFFFFC) + v65;
              v79 = _mm_cmpgt_epi32(v77, v71);
              v80 = _mm_or_si128(_mm_andnot_si128(v79, v71), _mm_and_si128(v77, v79));
              v81 = _mm_srli_si128(v80, 4);
              v82 = _mm_cmpgt_epi32(v81, v80);
              v83 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v82, v80), _mm_and_si128(v81, v82)));
              if ( (v69 & 0xFFFFFFFC) != v69 )
              {
                v84 = *(_DWORD *)(a4 + 4LL * v78);
                *(_DWORD *)(v62 + 4LL * v78) = v84;
                if ( v83 < v84 )
                  v83 = v84;
                v85 = v78 + 1;
                if ( v345 > v78 + 1 )
                {
                  v86 = *(_DWORD *)(a4 + 4LL * v85);
                  *(_DWORD *)(v62 + 4LL * v85) = v86;
                  v87 = v78 + 2;
                  if ( v83 < v86 )
                    v83 = v86;
                  if ( v345 > v87 )
                  {
                    v88 = *(_DWORD *)(a4 + 4LL * v87);
                    *(_DWORD *)(v62 + 4LL * v87) = v88;
                    v89 = v78 + 3;
                    if ( v83 < v88 )
                      v83 = v88;
                    if ( v345 > v89 )
                    {
                      v90 = *(_DWORD *)(a4 + 4LL * v89);
                      *(_DWORD *)(v62 + 4LL * v89) = v90;
                      v91 = v78 + 4;
                      if ( v83 < v90 )
                        v83 = v90;
                      if ( v345 > v91 )
                      {
                        v92 = *(_DWORD *)(a4 + 4LL * v91);
                        *(_DWORD *)(v62 + 4LL * v91) = v92;
                        if ( v83 < v92 )
                          v83 = v92;
                        v93 = v78 + 5;
                        if ( v345 > v93 )
                        {
                          v94 = *(_DWORD *)(a4 + 4LL * v93);
                          *(_DWORD *)(v62 + 4LL * v93) = v94;
                          if ( v83 < v94 )
                            v83 = v94;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v341 = 0;
              v83 = -1;
              do
              {
                v342 = *(_DWORD *)(a4 + v341);
                *(_DWORD *)(v62 + v341) = v342;
                if ( v83 < v342 )
                  v83 = v342;
                v341 += 4;
              }
              while ( v341 != 4LL * (unsigned int)(v345 - 1) + 4 );
            }
            v95 = (unsigned int)v345;
            v96 = v83 + 1;
            v59 = *(int *)(v57 + 4LL * *((int *)this + 16));
          }
          CoinMemcpyN<double>(a5, v95, *((_QWORD *)this + 4) + 8 * v59);
          LODWORD(v97) = *((_DWORD *)this + 16);
          goto LABEL_228;
        }
        *((_QWORD *)this + 6) = v58;
        v213 = 0;
        v214 = -1;
        v354 = 4 * v18 + 4;
        do
        {
          v215 = a3[v213 / 4];
          v216 = &v58[v213 / 4];
          v217 = *((_QWORD *)this + 5);
          v218 = v58[v213 / 4];
          v219 = (unsigned int)(a3[v213 / 4 + 1] - v215);
          v220 = 4 * v215;
          v221 = 4 * v218;
          if ( a3[v213 / 4 + 1] - (int)v215 > 0 )
          {
            v222 = a4 + v220;
            v223 = (_DWORD *)(v217 + v221);
            if ( (v217 + v221 >= a4 + v220 + 16 || a4 + v220 >= v217 + v221 + 16) && (unsigned int)v219 > 0xC )
            {
              v224 = 0;
              v225 = -(int)(v222 >> 2) & 3;
              if ( v225 )
              {
                v226 = *(_DWORD *)v222;
                *v223 = *(_DWORD *)v222;
                if ( v214 < v226 )
                  v214 = v226;
                v224 = 1;
                if ( v225 != 1 )
                {
                  v227 = *(_DWORD *)(a4 + v220 + 4);
                  *(_DWORD *)(v217 + v221 + 4) = v227;
                  if ( v214 < v227 )
                    v214 = v227;
                  v224 = 2;
                  if ( v225 != 2 )
                  {
                    v228 = *(_DWORD *)(a4 + v220 + 8);
                    *(_DWORD *)(v217 + v221 + 8) = v228;
                    if ( v214 < v228 )
                      v214 = v228;
                    v224 = 3;
                  }
                }
              }
              v351 = v214;
              v229 = 0;
              v230 = v219 - v225;
              v231 = 4LL * v225;
              v348 = v230;
              v232 = v230 >> 2;
              v233 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v351), 0);
              v234 = v231 + v221 + v217;
              v235 = 0;
              v236 = (const int *)(a4 + v231 + v220);
              do
              {
                v237 = _mm_load_si128((const __m128i *)&v236[v229]);
                ++v235;
                v238 = _mm_cmpgt_epi32(v233, v237);
                *(__m128i *)(v234 + v229 * 4) = v237;
                v229 += 4;
                v233 = _mm_or_si128(_mm_and_si128(v233, v238), _mm_andnot_si128(v238, v237));
              }
              while ( v232 > v235 );
              v239 = _mm_srli_si128(v233, 8);
              v240 = _mm_cmpgt_epi32(v239, v233);
              v241 = (v348 & 0xFFFFFFFC) + v224;
              v242 = _mm_or_si128(_mm_andnot_si128(v240, v233), _mm_and_si128(v239, v240));
              v243 = _mm_srli_si128(v242, 4);
              v244 = _mm_cmpgt_epi32(v243, v242);
              v214 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v244, v242), _mm_and_si128(v243, v244)));
              if ( (v348 & 0xFFFFFFFC) != v348 )
              {
                v245 = v241;
                v246 = *(_DWORD *)(v222 + v245 * 4);
                v223[v245] = v246;
                v247 = v241 + 1;
                if ( v214 < v246 )
                  v214 = v246;
                if ( (int)v219 > v247 )
                {
                  v248 = v247;
                  v249 = *(_DWORD *)(v222 + v248 * 4);
                  v223[v248] = v249;
                  v250 = v241 + 2;
                  if ( v214 < v249 )
                    v214 = v249;
                  if ( (int)v219 > v250 )
                  {
                    v251 = v250;
                    v252 = *(_DWORD *)(v222 + v251 * 4);
                    v223[v251] = v252;
                    v253 = v241 + 3;
                    if ( v214 < v252 )
                      v214 = v252;
                    if ( (int)v219 > v253 )
                    {
                      v254 = v253;
                      v255 = *(_DWORD *)(v222 + v254 * 4);
                      v223[v254] = v255;
                      v256 = v241 + 4;
                      if ( v214 < v255 )
                        v214 = v255;
                      if ( (int)v219 > v256 )
                      {
                        v257 = v256;
                        v258 = *(_DWORD *)(v222 + v257 * 4);
                        v223[v257] = v258;
                        if ( v214 < v258 )
                          v214 = v258;
                        v259 = v241 + 5;
                        if ( (int)v219 > v259 )
                        {
                          v260 = v259;
                          v261 = *(_DWORD *)(v222 + v260 * 4);
                          v223[v260] = v261;
                          if ( v214 < v261 )
                            v214 = v261;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v284 = 0;
              do
              {
                v285 = *(_DWORD *)(v222 + v284);
                v223[v284 / 4] = v285;
                if ( v214 < v285 )
                  v214 = v285;
                v284 += 4LL;
              }
              while ( v284 != 4LL * (unsigned int)(v219 - 1) + 4 );
            }
            v218 = *v216;
            v215 = a3[v213 / 4];
          }
          v213 += 4LL;
          CoinMemcpyN<double>(&a5[v215], v219, *((_QWORD *)this + 4) + 8 * v218);
          v58 = *((int **)this + 6);
        }
        while ( v354 != v213 );
        v96 = v214 + 1;
        v97 = *((int *)this + 16);
        v262 = 4 * v97;
LABEL_227:
        *((_QWORD *)this + 6) = &v58[v262 / 0xFFFFFFFFFFFFFFFCLL];
LABEL_228:
        if ( *((_DWORD *)this + 17) >= v96 )
          v96 = *((_DWORD *)this + 17);
        v13 = a2 + v97;
        v144 = 0;
        *((_DWORD *)this + 17) = v96;
        goto LABEL_188;
      }
      v145 = (void *)operator new[]((int)v9);
      v146 = memset(v145, 0, (int)v9);
      v147 = *((_QWORD *)this + 6);
      v148 = v146;
      v144 = 0;
      v149 = a3;
      v150 = 0;
      do
      {
        v151 = *v149;
        v152 = *(int *)(v147 + 4LL * (v150 + *((_DWORD *)this + 16)));
        if ( (int)v151 < v149[1] )
        {
          v153 = (int)v151 + 1;
          v154 = -4 * v153 + 4 * v151;
          v155 = &a5[v151 - v153];
          v156 = *((_QWORD *)this + 4) + -8 * v153 + 8 * v152;
          v157 = (char *)(a4 + v154);
          v158 = *((_QWORD *)this + 5) + -4 * v153 + 4 * v152;
          do
          {
            v162 = *(_DWORD *)&v157[4 * v153];
            *(double *)(v156 + 8 * v153) = v155[v153];
            if ( v162 < 0 || (int)v9 <= v162 || (v159 = &v148[v162], *v159) )
              ++v144;
            else
              *v159 = 1;
            *(_DWORD *)(v158 + 4 * v153) = v162;
            v160 = v149[1];
            v161 = v153++;
          }
          while ( v160 > v161 );
          v208 = *v149;
          if ( v160 > *v149 )
          {
            v209 = (const int *)(a4 + 4LL * v208);
            v210 = (const int *)(a4 + 4 + 4 * ((unsigned int)(v160 + ~v208) + (__int64)v208));
            do
            {
              v211 = *v209;
              if ( (int)v211 >= 0 && (int)v9 > (int)v211 )
                v148[v211] = 0;
              ++v209;
            }
            while ( v209 != v210 );
          }
        }
        ++v150;
        ++v149;
      }
      while ( a2 != v150 );
    }
    operator delete[](v148);
    v13 = *((_DWORD *)this + 16) + a2;
LABEL_188:
    *((_DWORD *)this + 16) = v13;
    *((_DWORD *)this + 18) += v345;
    return v144;
  }
  if ( v13 > v12 )
  {
    *((_DWORD *)this + 19) = v13;
    if ( (unsigned __int64)v13 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_327;
    v99 = operator new[](4LL * v13);
    CoinMemcpyN<int>(*((_QWORD *)this + 7), *((unsigned int *)this + 16), v99);
    v100 = *((void **)this + 7);
    if ( v100 )
      operator delete[](v100);
    v101 = *((_DWORD *)this + 19);
    *((_QWORD *)this + 7) = v99;
    v102 = v101 + 1;
    if ( v102 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_327;
    v103 = operator new[](4 * v102);
    CoinMemcpyN<int>(*((_QWORD *)this + 6), (unsigned int)(*((_DWORD *)this + 16) + 1), v103);
    v104 = *((void **)this + 6);
    if ( v104 )
      operator delete[](v104);
    v98 = *((_DWORD *)this + 18);
    *((_QWORD *)this + 6) = v103;
  }
  v105 = v98 + v345;
  if ( v98 + v345 <= *((_DWORD *)this + 20) )
  {
    v109 = *((_QWORD *)this + 5);
    goto LABEL_88;
  }
  *((_DWORD *)this + 20) = v105;
  if ( (unsigned __int64)v105 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_327;
  v106 = operator new[](8LL * v105);
  CoinMemcpyN<double>(*((_QWORD *)this + 4), *((unsigned int *)this + 18), v106);
  v107 = *((void **)this + 4);
  if ( v107 )
    operator delete[](v107);
  v108 = *((int *)this + 20);
  *((_QWORD *)this + 4) = v106;
  if ( v108 > 0x1FFFFFFFFFFFFFFELL )
LABEL_327:
    __cxa_throw_bad_array_new_length();
  v109 = operator new[](4 * v108);
  CoinMemcpyN<int>(*((_QWORD *)this + 5), *((unsigned int *)this + 18), v109);
  v110 = *((void **)this + 5);
  if ( v110 )
    operator delete[](v110);
  v98 = *((_DWORD *)this + 18);
  *((_QWORD *)this + 5) = v109;
LABEL_88:
  CoinMemcpyN<int>(a4, (unsigned int)v345, v109 + 4LL * v98);
  if ( v345 <= 0 )
  {
    v131 = 0;
    goto LABEL_124;
  }
  v111 = -(int)(a4 >> 2) & 3;
  if ( (unsigned int)(v345 - 1) <= 6 )
  {
    v123 = 0;
    v128 = -1;
  }
  else
  {
    if ( (_DWORD)v111 )
    {
      v112 = -1;
      if ( *(int *)a4 >= 0 )
        v112 = *(_DWORD *)a4;
      v113 = 1;
      if ( (_DWORD)v111 != 1 )
      {
        if ( v112 < *(_DWORD *)(a4 + 4) )
          v112 = *(_DWORD *)(a4 + 4);
        v113 = 2;
        if ( (_DWORD)v111 != 2 )
        {
          if ( v112 < *(_DWORD *)(a4 + 8) )
            v112 = *(_DWORD *)(a4 + 8);
          v113 = 3;
        }
      }
    }
    else
    {
      v113 = 0;
      v112 = -1;
    }
    v347 = v112;
    v114 = 0;
    v115 = v345 - v111;
    v116 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v347), 0);
    v117 = v345 - v111;
    v118 = (const __m128i *)(a4 + 4 * v111);
    v119 = v117 >> 2;
    do
    {
      v120 = _mm_load_si128(v118);
      ++v114;
      ++v118;
      v121 = _mm_cmpgt_epi32(v116, v120);
      v116 = _mm_or_si128(_mm_and_si128(v116, v121), _mm_andnot_si128(v121, v120));
    }
    while ( v114 < v119 );
    v122 = _mm_srli_si128(v116, 8);
    v123 = (v115 & 0xFFFFFFFC) + v113;
    v124 = _mm_cmpgt_epi32(v122, v116);
    v125 = _mm_or_si128(_mm_andnot_si128(v124, v116), _mm_and_si128(v122, v124));
    v126 = _mm_srli_si128(v125, 4);
    v127 = _mm_cmpgt_epi32(v126, v125);
    v128 = _mm_cvtsi128_si32(_mm_or_si128(_mm_andnot_si128(v127, v125), _mm_and_si128(v126, v127)));
    if ( (v115 & 0xFFFFFFFC) == v115 )
      goto LABEL_123;
  }
  if ( v128 < *(_DWORD *)(a4 + 4LL * (int)v123) )
    v128 = *(_DWORD *)(a4 + 4LL * (int)v123);
  if ( (int)(v123 + 1) < v345 )
  {
    if ( v128 < *(_DWORD *)(a4 + 4LL * (int)(v123 + 1)) )
      v128 = *(_DWORD *)(a4 + 4LL * (int)(v123 + 1));
    if ( (int)(v123 + 2) < v345 )
    {
      if ( v128 < *(_DWORD *)(a4 + 4LL * (int)(v123 + 2)) )
        v128 = *(_DWORD *)(a4 + 4LL * (int)(v123 + 2));
      if ( v345 > (int)(v123 + 3) )
      {
        if ( v128 < *(_DWORD *)(a4 + 4LL * (int)(v123 + 3)) )
          v128 = *(_DWORD *)(a4 + 4LL * (int)(v123 + 3));
        if ( v345 > (int)(v123 + 4) )
        {
          if ( v128 < *(_DWORD *)(a4 + 4LL * (int)(v123 + 4)) )
            v128 = *(_DWORD *)(a4 + 4LL * (int)(v123 + 4));
          if ( v345 > (int)(v123 + 5) )
          {
            if ( v128 < *(_DWORD *)(a4 + 4LL * (int)(v123 + 5)) )
              v128 = *(_DWORD *)(a4 + 4LL * (int)(v123 + 5));
            v129 = v123 + 6;
            if ( v345 > v129 )
            {
              v130 = *(_DWORD *)(a4 + 4LL * v129);
              if ( v128 < v130 )
                v128 = v130;
            }
          }
        }
      }
    }
  }
LABEL_123:
  v131 = v128 + 1;
LABEL_124:
  v132 = *((int *)this + 18);
  if ( *((_DWORD *)this + 17) >= v131 )
    v131 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 17) = v131;
  CoinMemcpyN<double>(a5, (unsigned int)v345, *((_QWORD *)this + 4) + 8 * v132);
  v133 = *((int *)this + 16);
  v134 = 4 * v133;
  *((_DWORD *)this + 16) = v133 + a2;
  if ( (int)v133 + a2 > (int)v133 )
  {
    v135 = (int)v133 + 1;
    v136 = -4 * v135 + v134;
    v137 = &a3[-v135];
    v138 = 0;
    v139 = v136 + *((_QWORD *)this + 7);
    v140 = *((_QWORD *)this + 6) + v136;
    do
    {
      v141 = v137[v135 + 1];
      v142 = v135;
      *(_DWORD *)(v139 + 4 * v135) = v141 - v138;
      v143 = *((_DWORD *)this + 18) + v141 - v138;
      *((_DWORD *)this + 18) = v143;
      *(_DWORD *)(v140 + 4 * v135++ + 4) = v143;
      v138 = v141;
    }
    while ( *((_DWORD *)this + 16) > v142 );
  }
  return 0;
}

