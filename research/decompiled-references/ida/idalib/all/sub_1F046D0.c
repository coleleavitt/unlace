_QWORD *__fastcall sub_1F046D0(_QWORD *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char **v9; // r15
  char *v10; // rax
  char *v11; // rdx
  __int32 v12; // edx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __m128 *v15; // r14
  char **v16; // rbx
  unsigned int v17; // ebp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // r9
  __int64 v22; // rbp
  unsigned int v23; // ebx
  char **v24; // rax
  __m128 *v25; // r15
  __int64 v26; // r14
  unsigned __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // rbx
  __int64 **v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  char **v38; // rax
  unsigned __int64 v39; // rax
  int v40; // ebp
  int v41; // eax
  bool v42; // zf
  int v43; // ecx
  unsigned __int64 v44; // r13
  int v45; // ecx
  __int64 *v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rbp
  __int64 v49; // r12
  __m128 *v50; // r13
  unsigned int v51; // edi
  int v52; // eax
  __int64 *v53; // rsi
  __int64 v54; // rcx
  unsigned __int64 v55; // rdi
  __int64 v56; // rdi
  char *v57; // rax
  char *v58; // r8
  __int64 v59; // r10
  __int64 **v60; // rbp
  unsigned int v61; // ebx
  size_t v62; // rdx
  char *v63; // rax
  __int64 *v64; // rax
  unsigned int v65; // r9d
  __int64 v66; // rcx
  int v67; // edx
  char *v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  int v75; // r9d
  __int64 *v76; // r11
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rdi
  __int64 v81; // rdi
  char *v82; // rax
  char *v83; // r8
  __int64 v84; // r10
  __int64 **v85; // rbp
  unsigned int v86; // ebx
  size_t v87; // rdx
  char *v88; // rax
  __int64 *v89; // rax
  unsigned int v90; // r9d
  int v91; // edx
  char *v92; // rsi
  __int64 v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // r9d
  __int64 *v97; // r11
  __int64 *v98; // r10
  int v99; // edi
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rdx
  unsigned __int64 v103; // rdi
  __int64 v104; // rdi
  char *v105; // rax
  char *v106; // rcx
  __m128 *v107; // r9
  __int64 **v108; // rbx
  unsigned int v109; // r13d
  size_t v110; // rdx
  char *v111; // rax
  __int64 **v112; // rax
  unsigned int v113; // r8d
  __int64 *v114; // r11
  int v115; // edx
  char *v116; // rsi
  __int64 v117; // rdi
  __int64 v118; // rdx
  int v119; // ecx
  __int64 v120; // rdi
  int v121; // edx
  __int64 *v122; // r10
  unsigned __int64 v123; // rdi
  unsigned __int64 v124; // rdx
  __int64 v125; // rdi
  char *v126; // rax
  char *v127; // r8
  __m128 *v128; // r9
  unsigned __int64 *v129; // rbx
  unsigned int v130; // r10d
  size_t v131; // rdx
  char *v132; // rax
  unsigned __int64 *v133; // rax
  unsigned int v134; // r11d
  unsigned __int64 v135; // rcx
  int v136; // edx
  __m128 *v137; // rsi
  unsigned __int64 v138; // rdi
  unsigned __int64 v139; // rdx
  int v140; // r13d
  __int64 v141; // rcx
  int v142; // edx
  __int64 *v143; // r9
  size_t v144; // rdx
  size_t v145; // rdx
  size_t v147; // rdx
  size_t v148; // rdx
  char *v149; // r11
  char *v150; // r11
  char *v151; // r10
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int64 v156; // rdx
  __int64 *v157; // rdx
  __int64 *v158; // r15
  unsigned __int64 v159; // rcx
  __int64 v160; // r14
  __int64 **v161; // r12
  __int64 v162; // rbp
  __int64 v163; // rax
  __m128 *v164; // r13
  __int64 v165; // r12
  _QWORD *v166; // rbx
  _QWORD *v167; // rbp
  _QWORD *v168; // rax
  char **v169; // rax
  char *v170; // rdx
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rbx
  int v173; // ecx
  __int64 *v174; // rsi
  __int64 v175; // rax
  __m128 *v176; // r13
  __m128 *v177; // r15
  __m128 *v178; // r14
  int v179; // eax
  __int64 *v180; // rsi
  __int64 v181; // rdi
  unsigned __int64 v182; // rdx
  unsigned __int64 v183; // rax
  char *v184; // rax
  char *v185; // rcx
  __int64 v186; // r11
  __int64 *v187; // rbp
  unsigned int v188; // r10d
  size_t v189; // rdx
  char *v190; // rax
  __int64 *v191; // rax
  unsigned int v192; // r8d
  __int64 v193; // rbx
  int v194; // edx
  char *v195; // rsi
  __int64 v196; // rdi
  __int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rcx
  __int64 v200; // rdx
  int v201; // r11d
  __int64 *v202; // r9
  __int64 *v203; // r10
  unsigned __int64 v204; // rax
  unsigned __int64 v205; // rcx
  unsigned __int64 v206; // rax
  unsigned __int64 v207; // rdx
  __int64 v208; // rax
  char *v209; // rax
  char *v210; // rcx
  __int64 v211; // r11
  unsigned int v212; // r10d
  size_t v213; // rdx
  __int64 *v214; // rbp
  char *v215; // rax
  __int64 *v216; // rax
  unsigned int v217; // r9d
  int v218; // edx
  char *v219; // rsi
  __int64 v220; // rdi
  __int64 v221; // rdx
  __int64 v222; // rcx
  int v223; // r11d
  __int64 *v224; // r9
  __int64 *v225; // r10
  int v226; // edi
  int v227; // eax
  __int64 v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __m128 *v231; // rdi
  __int64 v232; // rbx
  __int64 v233; // rax
  unsigned __int64 v234; // rdx
  unsigned __int64 v235; // rax
  char *v236; // rax
  char *v237; // rcx
  __int64 v238; // r13
  __int64 **v239; // rbx
  unsigned int v240; // ebp
  size_t v241; // rdx
  __int64 **v242; // rax
  unsigned int i; // r10d
  int v244; // edx
  char *v245; // rsi
  __int64 v246; // rdi
  __int64 v247; // rdx
  int v248; // edi
  int v249; // ecx
  unsigned __int64 v250; // rax
  unsigned __int64 v251; // rdx
  unsigned int v252; // eax
  char *v253; // rax
  char *v254; // r11
  __int64 v255; // r9
  __int64 **v256; // rbp
  unsigned int v257; // r13d
  size_t v258; // rdx
  char *v259; // rax
  __int64 **v260; // rax
  unsigned int v261; // r8d
  __int64 *v262; // r10
  int v263; // edx
  __int64 **v264; // rcx
  __int64 *v265; // rsi
  __int64 *v266; // rdx
  int v267; // ebx
  __int64 v268; // rcx
  __int64 *v269; // r8
  int v270; // edx
  size_t v271; // rdx
  size_t v272; // rdx
  size_t v273; // rdx
  size_t v274; // rdx
  char *v275; // r9
  char *v276; // r8
  int v277; // r8d
  char *v278; // r9
  __int64 **v279; // rdi
  int v280; // r9d
  __int64 v281; // [rsp+0h] [rbp-F8h] BYREF
  __m128 *v282; // [rsp+8h] [rbp-F0h]
  __int64 *v283; // [rsp+10h] [rbp-E8h]
  __int64 v284; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v285; // [rsp+20h] [rbp-D8h]
  __int64 *v286; // [rsp+28h] [rbp-D0h]
  char **v287; // [rsp+30h] [rbp-C8h]
  __int64 v288; // [rsp+38h] [rbp-C0h]
  char *v289; // [rsp+40h] [rbp-B8h]
  char *v290; // [rsp+48h] [rbp-B0h]
  __int64 *v291; // [rsp+50h] [rbp-A8h]
  _QWORD *v292; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v293; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v294[2]; // [rsp+70h] [rbp-88h] BYREF
  __m128 v295; // [rsp+80h] [rbp-78h] BYREF
  __int64 *v296; // [rsp+90h] [rbp-68h]
  __m128 **v297; // [rsp+A0h] [rbp-58h]
  char *v298; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v299; // [rsp+B0h] [rbp-48h]
  unsigned int v300; // [rsp+B8h] [rbp-40h]

  *a1 = a1 + 2;
  a1[1] = 0x400000000LL;
  v6 = *((_QWORD *)a2 + 1);
  v292 = a1;
  v289 = a2;
  v297 = (__m128 **)a1;
  v298 = nullptr;
  v299 = 0;
  v300 = 0;
  if ( (v6 & 4) != 0 )
  {
    if ( !*(_DWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
      goto LABEL_3;
LABEL_207:
    sub_1F03D90(v289, (__int64)a2, a3, a4, a5, a6);
    goto LABEL_3;
  }
  if ( (v6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    goto LABEL_207;
LABEL_3:
  v7 = sub_1EB4020((unsigned __int64 *)v289);
  v8 = v7;
  if ( v7 && *(_DWORD *)(v7 + 32) )
  {
    v281 = *(_QWORD *)(v7 + 24) + 72LL * *(unsigned int *)(v7 + 40);
    v295 = _mm_loadh_ps((const double *)&v281);
    sub_1ECCFF0((__int64)&v295);
    v287 = (char **)v295.m128_u64[1];
    v154 = *(unsigned int *)(v8 + 40);
    v284 = v295.m128_u64[0];
    v288 = *(_QWORD *)(v8 + 24) + 72 * v154;
    if ( v288 == v295.m128_u64[0] )
    {
LABEL_230:
      v8 = sub_1EB4020((unsigned __int64 *)v289);
      goto LABEL_5;
    }
    v282 = &v295;
    v281 = (__int64)&v298;
    while ( 1 )
    {
      v155 = *(unsigned int *)(v284 + 32);
      v156 = v155 + *((unsigned int *)v297 + 2);
      if ( v156 > *((unsigned int *)v297 + 3) )
      {
        sub_2237220(v297, v297 + 2, v156, 8);
        v155 = *(unsigned int *)(v284 + 32);
      }
      v157 = *(__int64 **)(v284 + 24);
      v158 = v157;
      v283 = &v157[v155];
      if ( v157 != v283 )
      {
        while ( 1 )
        {
          v159 = (unsigned int)v299;
          v160 = *v158;
          v161 = (__int64 **)v298;
          v162 = v300;
          if ( !(_DWORD)v299 )
          {
            v163 = *((unsigned int *)v297 + 2);
            if ( (_DWORD)v163 )
            {
              if ( (unsigned int)v163 <= 4 )
              {
                v164 = v282;
                v165 = v281;
                sub_1ECF950(v282, (__int64 *)&v298[8 * v300], (__int64 *)&v298[8 * v300], v281, 1);
                v167 = (_QWORD *)v295.m128_u64[1];
                v166 = (_QWORD *)v295.m128_u64[0];
                sub_1ECF950(v164, (__int64 *)&v298[8 * v300], (__int64 *)&v298[8 * v300], v165, 1);
                while ( (_QWORD *)v295.m128_u64[0] != v166 )
                {
                  if ( *v166 == v160 )
                    goto LABEL_226;
                  if ( v166 + 1 != v167 )
                  {
                    if ( v166[1] < 0xFFFFFFFFFFFFFFFELL )
                    {
                      ++v166;
                      continue;
                    }
                    v168 = v166 + 2;
                    while ( 1 )
                    {
                      v166 = v168;
                      if ( v168 == v167 )
                        break;
                      ++v168;
                      if ( *v166 < 0xFFFFFFFFFFFFFFFELL )
                        goto LABEL_224;
                    }
                  }
                  v166 = v167;
LABEL_224:
                  ;
                }
                sub_1EADF30((__int64)v297, v160);
                goto LABEL_226;
              }
              v176 = *v297;
              v285 = *v158;
              v286 = v158;
              v177 = v282;
              v178 = (__m128 *)((char *)v176 + 8 * v163);
              while ( 2 )
              {
                if ( !(_DWORD)v162 )
                {
LABEL_247:
                  v182 = ((((((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                            | (unsigned int)(2 * v162 - 1)
                            | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                          | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                          | (unsigned int)(2 * v162 - 1)
                          | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 8)
                        | (((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                          | (unsigned int)(2 * v162 - 1)
                          | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                        | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                        | (unsigned int)(2 * v162 - 1)
                        | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 16;
                  v183 = (v182
                        | (((((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                            | (unsigned int)(2 * v162 - 1)
                            | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                          | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                          | (unsigned int)(2 * v162 - 1)
                          | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 8)
                        | (((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                          | (unsigned int)(2 * v162 - 1)
                          | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                        | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                        | (unsigned int)(2 * v162 - 1)
                        | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1))
                       + 1;
                  if ( (unsigned int)v183 < 0x40 )
                    LODWORD(v183) = 64;
                  v300 = v183;
                  v184 = (char *)sub_22300B0(8LL * (unsigned int)v183, 8, v182, v159, v152, v153);
                  v185 = v184;
                  v298 = v184;
                  if ( v161 )
                  {
                    v186 = 8 * v162;
                    v299 = 0;
                    v187 = (__int64 *)&v161[v162];
                    v188 = v300;
                    v189 = 8LL * v300;
                    if ( v184 != &v184[v189] )
                    {
                      LODWORD(v291) = v300;
                      v290 = (char *)v186;
                      v190 = (char *)memset(v184, 255, v189);
                      v186 = (__int64)v290;
                      v188 = (unsigned int)v291;
                      v185 = v190;
                    }
                    v191 = (__int64 *)v161;
                    v192 = v188 - 1;
                    if ( v187 != (__int64 *)v161 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v193 = *v191;
                          if ( (unsigned __int64)(*v191 + 2) > 1 )
                            break;
                          if ( v187 == ++v191 )
                            goto LABEL_259;
                        }
                        if ( !v188 )
                          goto LABEL_477;
                        v194 = v192 & (((0xBF58476D1CE4E5B9LL * v193) >> 31) ^ (484763065 * v193));
                        v195 = &v185[8 * v194];
                        v196 = *(_QWORD *)v195;
                        if ( v193 != *(_QWORD *)v195 && v196 != -1 )
                        {
                          LODWORD(v290) = 1;
                          v275 = nullptr;
                          v291 = (__int64 *)v193;
                          while ( 1 )
                          {
                            if ( v196 == -2 && !v275 )
                              v275 = v195;
                            v194 = v192 & ((_DWORD)v290 + v194);
                            v195 = &v185[8 * v194];
                            v196 = *(_QWORD *)v195;
                            if ( v291 == *(__int64 **)v195 )
                              goto LABEL_258;
                            if ( v196 == -1 )
                              break;
                            LODWORD(v290) = (_DWORD)v290 + 1;
                          }
                          if ( v275 )
                            v195 = v275;
                        }
LABEL_258:
                        v197 = *v191++;
                        LODWORD(v299) = v299 + 1;
                        *(_QWORD *)v195 = v197;
                      }
                      while ( v187 != v191 );
                    }
LABEL_259:
                    operator delete(v161, v186, 8);
                    v161 = (__int64 **)v298;
                    v162 = v300;
                    v198 = v299 + 1;
                  }
                  else
                  {
                    v299 = 0;
                    v162 = v300;
                    v271 = 8LL * v300;
                    if ( v184 == &v184[v271] )
                      v161 = (__int64 **)v184;
                    else
                      v161 = (__int64 **)memset(v184, 255, v271);
                    v198 = 1;
                  }
                  if ( !(_DWORD)v162 )
                    goto LABEL_155;
                  LODWORD(v199) = (v162 - 1)
                                & (((0xBF58476D1CE4E5B9LL * v176->m128_u64[0]) >> 31)
                                 ^ (484763065 * v176->m128_i32[0]));
                  v180 = (__int64 *)&v161[(unsigned int)v199];
                  v200 = *v180;
                  if ( v176->m128_u64[0] != *v180 )
                  {
                    v201 = 1;
                    v202 = nullptr;
                    if ( v200 == -1 )
                      goto LABEL_263;
                    while ( 1 )
                    {
                      if ( v200 != -2 || v202 )
                        v180 = v202;
                      v199 = ((_DWORD)v162 - 1) & (unsigned int)(v199 + v201);
                      v225 = (__int64 *)&v161[v199];
                      v200 = *v225;
                      if ( v176->m128_u64[0] == *v225 )
                        break;
                      if ( v200 == -1 )
                        goto LABEL_446;
                      ++v201;
                      v202 = v180;
                      v180 = (__int64 *)&v161[v199];
                    }
LABEL_289:
                    v180 = v225;
                  }
LABEL_268:
                  LODWORD(v299) = v198;
                  if ( v200 != -1 )
                    --HIDWORD(v299);
LABEL_270:
                  *v180 = v176->m128_u64[0];
LABEL_245:
                  v176 = (__m128 *)((char *)v176 + 8);
                  sub_1ECF950(v177, v180, (__int64 *)&v161[v162], v281, 1);
                  v161 = (__int64 **)v298;
                  v162 = v300;
                  if ( v178 == v176 )
                  {
                    v160 = v285;
                    v158 = v286;
                    goto LABEL_240;
                  }
                  continue;
                }
                break;
              }
              v159 = (unsigned int)(v162 - 1);
              v179 = v159 & (((0xBF58476D1CE4E5B9LL * v176->m128_u64[0]) >> 31) ^ (484763065 * v176->m128_i32[0]));
              v180 = (__int64 *)&v161[v179];
              v181 = *v180;
              if ( v176->m128_u64[0] == *v180 )
                goto LABEL_245;
              v152 = 1;
              v203 = nullptr;
              if ( v181 != -1 )
              {
                while ( 1 )
                {
                  if ( !v203 && v181 == -2 )
                    v203 = v180;
                  v153 = (unsigned int)(v152 + 1);
                  v179 = v159 & (v152 + v179);
                  v180 = (__int64 *)&v161[v179];
                  v181 = *v180;
                  if ( v176->m128_u64[0] == *v180 )
                    goto LABEL_245;
                  if ( v181 == -1 )
                    break;
                  v152 = (unsigned int)v153;
                }
                if ( v203 )
                  v180 = v203;
              }
              v198 = v299 + 1;
              if ( 4 * ((int)v299 + 1) >= (unsigned int)(3 * v162) )
                goto LABEL_247;
              if ( (int)v162 - (v198 + HIDWORD(v299)) > (unsigned int)v162 >> 3 )
              {
LABEL_267:
                v200 = *v180;
                goto LABEL_268;
              }
              v204 = (v159 >> 1) | v159 | (((v159 >> 1) | v159) >> 2);
              v205 = v204 >> 4;
              v206 = ((v205 | v204) >> 8) | v205 | v204;
              v207 = v206 >> 16;
              v208 = ((v206 >> 16) | v206) + 1;
              if ( (unsigned int)v208 < 0x40 )
                LODWORD(v208) = 64;
              v300 = v208;
              v209 = (char *)sub_22300B0(8LL * (unsigned int)v208, 8, v207, v205, v152, v153);
              v210 = v209;
              v298 = v209;
              if ( v161 )
              {
                v299 = 0;
                v211 = 8LL * (unsigned int)v162;
                v212 = v300;
                v213 = 8LL * v300;
                v214 = (__int64 *)((char *)v161 + v211);
                if ( v209 != &v209[v213] )
                {
                  LODWORD(v291) = v300;
                  v290 = (char *)v211;
                  v215 = (char *)memset(v209, 255, v213);
                  v211 = (__int64)v290;
                  v212 = (unsigned int)v291;
                  v210 = v215;
                }
                v216 = (__int64 *)v161;
                v217 = v212 - 1;
                do
                {
                  while ( 1 )
                  {
                    v193 = *v216;
                    if ( (unsigned __int64)(*v216 + 2) > 1 )
                      break;
                    if ( v214 == ++v216 )
                      goto LABEL_282;
                  }
                  if ( !v212 )
                  {
LABEL_477:
                    *(_QWORD *)&dword_0 = v193;
                    BUG();
                  }
                  v218 = v217 & (((0xBF58476D1CE4E5B9LL * v193) >> 31) ^ (484763065 * v193));
                  v219 = &v210[8 * v218];
                  v220 = *(_QWORD *)v219;
                  if ( v193 != *(_QWORD *)v219 && v220 != -1 )
                  {
                    LODWORD(v290) = 1;
                    v276 = nullptr;
                    v291 = (__int64 *)v193;
                    while ( 1 )
                    {
                      if ( !v276 && v220 == -2 )
                        v276 = v219;
                      v218 = v217 & ((_DWORD)v290 + v218);
                      v219 = &v210[8 * v218];
                      v220 = *(_QWORD *)v219;
                      if ( v291 == *(__int64 **)v219 )
                        goto LABEL_281;
                      if ( v220 == -1 )
                        break;
                      LODWORD(v290) = (_DWORD)v290 + 1;
                    }
                    if ( v276 )
                      v219 = v276;
                  }
LABEL_281:
                  v221 = *v216++;
                  LODWORD(v299) = v299 + 1;
                  *(_QWORD *)v219 = v221;
                }
                while ( v214 != v216 );
LABEL_282:
                operator delete(v161, v211, 8);
                v161 = (__int64 **)v298;
                v162 = v300;
                v198 = v299 + 1;
              }
              else
              {
                v299 = 0;
                v162 = v300;
                v272 = 8LL * v300;
                if ( v209 == &v209[v272] )
                  v161 = (__int64 **)v209;
                else
                  v161 = (__int64 **)memset(v209, 255, v272);
                v198 = 1;
              }
              if ( !(_DWORD)v162 )
                goto LABEL_155;
              LODWORD(v222) = (v162 - 1)
                            & (((0xBF58476D1CE4E5B9LL * v176->m128_u64[0]) >> 31)
                             ^ (484763065 * v176->m128_i32[0]));
              v180 = (__int64 *)&v161[(unsigned int)v222];
              v200 = *v180;
              if ( v176->m128_u64[0] == *v180 )
                goto LABEL_268;
              v223 = 1;
              v224 = nullptr;
              if ( v200 != -1 )
              {
                while ( 1 )
                {
                  if ( v200 != -2 || v224 )
                    v180 = v224;
                  v222 = ((_DWORD)v162 - 1) & (unsigned int)(v222 + v223);
                  v225 = (__int64 *)&v161[v222];
                  v200 = *v225;
                  if ( v176->m128_u64[0] == *v225 )
                    goto LABEL_289;
                  if ( v200 == -1 )
                    break;
                  ++v223;
                  v224 = v180;
                  v180 = (__int64 *)&v161[v222];
                }
LABEL_446:
                if ( v180 )
                  goto LABEL_267;
                v180 = v225;
              }
LABEL_263:
              LODWORD(v299) = v198;
              goto LABEL_270;
            }
          }
LABEL_240:
          if ( !(_DWORD)v162 )
            goto LABEL_300;
          v171 = (unsigned int)(v162 - 1);
          v172 = ((0xBF58476D1CE4E5B9LL * v160) >> 31) ^ (0xBF58476D1CE4E5B9LL * v160);
          v173 = v172 & (v162 - 1);
          v174 = (__int64 *)&v161[v173];
          v175 = *v174;
          if ( *v174 != v160 )
            break;
LABEL_242:
          sub_1ECF950(v282, v174, (__int64 *)&v161[v162], v281, 1);
LABEL_226:
          if ( v283 == ++v158 )
            goto LABEL_227;
        }
        v226 = 1;
        v152 = 0;
        if ( v175 != -1 )
        {
          while ( 1 )
          {
            if ( v175 == -2 && !v152 )
              v152 = (__int64)v174;
            v153 = (unsigned int)(v226 + 1);
            v173 = v171 & (v226 + v173);
            v174 = (__int64 *)&v161[v173];
            v175 = *v174;
            if ( *v174 == v160 )
              goto LABEL_242;
            if ( v175 == -1 )
              break;
            ++v226;
          }
          if ( v152 )
            v174 = (__int64 *)v152;
        }
        v159 = (unsigned int)(3 * v162);
        v227 = v299 + 1;
        if ( 4 * ((int)v299 + 1) >= (unsigned int)v159 )
        {
LABEL_300:
          v234 = ((((((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v162 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v162 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v162 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v162 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 16;
          v235 = (v234
                | (((((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v162 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v162 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v162 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v162 - 1) | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v162 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v162 - 1) >> 1))
               + 1;
          if ( (unsigned int)v235 < 0x40 )
            LODWORD(v235) = 64;
          v300 = v235;
          v236 = (char *)sub_22300B0(8LL * (unsigned int)v235, 8, v234, v159, v152, v153);
          v237 = v236;
          v298 = v236;
          if ( v161 )
          {
            v238 = 8 * v162;
            v299 = 0;
            v239 = &v161[v162];
            v240 = v300;
            v241 = 8LL * v300;
            if ( v236 != &v236[v241] )
              v237 = (char *)memset(v236, 255, v241);
            v242 = v161;
            for ( i = v240 - 1; v239 != v242; *(_QWORD *)v245 = v247 )
            {
              while ( 1 )
              {
                v114 = *v242;
                if ( (unsigned __int64)*v242 + 2 > 1 )
                  break;
                if ( v239 == ++v242 )
                  goto LABEL_312;
              }
              if ( !v240 )
                goto LABEL_474;
              v244 = i & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v114) >> 31) ^ (484763065 * (_DWORD)v114));
              v245 = &v237[8 * v244];
              v246 = *(_QWORD *)v245;
              if ( *(__int64 **)v245 != v114 )
              {
                v277 = 1;
                v278 = nullptr;
                if ( v246 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v246 == -2 && !v278 )
                      v278 = v245;
                    v244 = i & (v277 + v244);
                    LODWORD(v285) = v277 + 1;
                    v245 = &v237[8 * v244];
                    v246 = *(_QWORD *)v245;
                    if ( v114 == *(__int64 **)v245 )
                      goto LABEL_311;
                    if ( v246 == -1 )
                      break;
                    v277 = v285;
                  }
                  if ( v278 )
                    v245 = v278;
                }
              }
LABEL_311:
              v247 = (__int64)*v242++;
              LODWORD(v299) = v299 + 1;
            }
LABEL_312:
            operator delete(v161, v238, 8);
            v161 = (__int64 **)v298;
            v162 = v300;
            v227 = v299 + 1;
          }
          else
          {
            v299 = 0;
            v162 = v300;
            v273 = 8LL * v300;
            if ( v236 == &v236[v273] )
              v161 = (__int64 **)v236;
            else
              v161 = (__int64 **)memset(v236, 255, v273);
            v227 = 1;
          }
          if ( !(_DWORD)v162 )
            goto LABEL_155;
          v248 = v162 - 1;
          v249 = (v162 - 1) & (((0xBF58476D1CE4E5B9LL * v160) >> 31) ^ (484763065 * v160));
          v174 = (__int64 *)&v161[v249];
          v229 = *v174;
          if ( v160 != *v174 )
          {
            if ( v229 != -1 )
            {
              v269 = (__int64 *)&v161[v248
                                    & ((unsigned int)((0xBF58476D1CE4E5B9LL * v160) >> 31)
                                     ^ (484763065 * (_DWORD)v160))];
              v280 = 1;
              v174 = nullptr;
              while ( 1 )
              {
                if ( !v174 && v229 == -2 )
                  v174 = v269;
                v249 = v248 & (v280 + v249);
                v269 = (__int64 *)&v161[v249];
                v229 = *v269;
                if ( *v269 == v160 )
                  goto LABEL_337;
                if ( v229 == -1 )
                  break;
                ++v280;
              }
LABEL_456:
              if ( v174 )
              {
LABEL_293:
                v229 = *v174;
                goto LABEL_294;
              }
              v174 = v269;
            }
            goto LABEL_316;
          }
        }
        else
        {
          v228 = (unsigned int)v162 >> 3;
          if ( (int)v162 - (v227 + HIDWORD(v299)) > (unsigned int)v228 )
            goto LABEL_293;
          v250 = (((((v171 >> 1) | v171 | (((v171 >> 1) | v171) >> 2)) >> 4)
                 | (v171 >> 1)
                 | v171
                 | (((v171 >> 1) | v171) >> 2)) >> 8)
               | (((v171 >> 1) | v171 | (((v171 >> 1) | v171) >> 2)) >> 4)
               | (v171 >> 1)
               | v171
               | (((v171 >> 1) | v171) >> 2);
          v251 = v250 >> 16;
          v252 = ((v250 >> 16) | v250) + 1;
          if ( v252 < 0x40 )
            v252 = 64;
          v300 = v252;
          v253 = (char *)sub_22300B0(8LL * v252, 8, v251, v228, v152, v153);
          v254 = v253;
          v298 = v253;
          if ( v161 )
          {
            v255 = 8 * v162;
            v299 = 0;
            v256 = &v161[v162];
            v257 = v300;
            v258 = 8LL * v300;
            if ( v253 != &v253[v258] )
            {
              v285 = v255;
              v259 = (char *)memset(v253, 255, v258);
              v255 = v285;
              v254 = v259;
            }
            v260 = v161;
            v261 = v257 - 1;
            do
            {
              while ( 1 )
              {
                v262 = *v260;
                if ( (unsigned __int64)*v260 + 2 > 1 )
                  break;
                if ( v256 == ++v260 )
                  goto LABEL_328;
              }
              if ( !v257 )
              {
                *(_QWORD *)&dword_0 = *v260;
                BUG();
              }
              v263 = v261 & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v262) >> 31) ^ (484763065 * (_DWORD)v262));
              v264 = (__int64 **)&v254[8 * v263];
              v265 = *v264;
              if ( v262 != *v264 && v265 != (__int64 *)-1LL )
              {
                LODWORD(v285) = 1;
                v279 = nullptr;
                v286 = v262;
                while ( 1 )
                {
                  if ( !v279 && v265 == (__int64 *)-2LL )
                    v279 = v264;
                  v263 = v261 & (v285 + v263);
                  v264 = (__int64 **)&v254[8 * v263];
                  v265 = *v264;
                  if ( v286 == *v264 )
                    goto LABEL_327;
                  if ( v265 == (__int64 *)-1LL )
                    break;
                  LODWORD(v285) = v285 + 1;
                }
                if ( v279 )
                  v264 = v279;
              }
LABEL_327:
              v266 = *v260++;
              LODWORD(v299) = v299 + 1;
              *v264 = v266;
            }
            while ( v256 != v260 );
LABEL_328:
            operator delete(v161, v255, 8);
            v161 = (__int64 **)v298;
            v162 = v300;
            v227 = v299 + 1;
          }
          else
          {
            v299 = 0;
            v162 = v300;
            v274 = 8LL * v300;
            if ( v253 == &v253[v274] )
              v161 = (__int64 **)v253;
            else
              v161 = (__int64 **)memset(v253, 255, v274);
            v227 = 1;
          }
          if ( !(_DWORD)v162 )
            goto LABEL_155;
          v267 = (v162 - 1) & v172;
          v174 = (__int64 *)&v161[v267];
          v229 = v160;
          v268 = *v174;
          if ( *v174 != v160 )
          {
            if ( v268 != -1 )
            {
              v269 = (__int64 *)&v161[v267];
              v270 = 1;
              v174 = nullptr;
              while ( 1 )
              {
                if ( v268 == -2 && !v174 )
                  v174 = v269;
                v267 = (v162 - 1) & (v270 + v267);
                v269 = (__int64 *)&v161[v267];
                v268 = *v269;
                if ( *v269 == v160 )
                  break;
                if ( v268 == -1 )
                  goto LABEL_456;
                ++v270;
              }
LABEL_337:
              v229 = v160;
              v174 = v269;
              goto LABEL_294;
            }
LABEL_316:
            LODWORD(v299) = v227;
LABEL_296:
            v230 = v281;
            v231 = v282;
            *v174 = v160;
            sub_1ECF950(v231, v174, (__int64 *)&v161[v162], v230, 1);
            v232 = (__int64)v297;
            v233 = *((unsigned int *)v297 + 2);
            if ( v233 + 1 > (unsigned __int64)*((unsigned int *)v297 + 3) )
            {
              sub_2237220(v297, v297 + 2, v233 + 1, 8);
              v233 = *(unsigned int *)(v232 + 8);
            }
            *(_QWORD *)(*(_QWORD *)v232 + 8 * v233) = v160;
            ++*(_DWORD *)(v232 + 8);
            goto LABEL_226;
          }
        }
LABEL_294:
        LODWORD(v299) = v227;
        if ( v229 != -1 )
          --HIDWORD(v299);
        goto LABEL_296;
      }
LABEL_227:
      v169 = (char **)(v284 + 72);
      if ( (char **)(v284 + 72) == v287 )
      {
        v169 = v287;
      }
      else if ( *(_DWORD *)(v284 + 72) == -1 )
      {
        v170 = *(char **)(v284 + 80);
        if ( v170 != (_BYTE *)&dword_0 + 1 )
        {
LABEL_232:
          if ( v170 != (_BYTE *)&dword_0 + 2 || *((_DWORD *)v169 + 4) != -2 )
            goto LABEL_229;
          goto LABEL_234;
        }
        while ( *((_DWORD *)v169 + 4) == -1 )
        {
LABEL_234:
          v169 += 9;
          if ( v287 == v169 || *(_DWORD *)v169 != -1 )
            break;
          v170 = v169[1];
          if ( v170 != (_BYTE *)&dword_0 + 1 )
            goto LABEL_232;
        }
      }
LABEL_229:
      v284 = (__int64)v169;
      if ( (char **)v288 == v169 )
        goto LABEL_230;
    }
  }
LABEL_5:
  v9 = &v298;
  v10 = (char *)sub_1EAA820(v289, v8 != 0);
  v290 = v11;
  v289 = v10;
  if ( v11 != v10 )
  {
    while ( 1 )
    {
      v281 = *(_QWORD *)v289;
      v12 = *(_DWORD *)((v281 & 0xFFFFFFFFFFFFFFF8LL) + 12);
      v285 = v281 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = *(_QWORD *)((v281 & 0xFFFFFFFFFFFFFFF8LL) + 48);
      v286 = (__int64 *)((v281 & 0xFFFFFFFFFFFFFFF8LL) + 32);
      v295.m128_i32[2] = 0;
      v295.m128_u64[0] = v13;
      v295.m128_i32[3] = v12;
      v296 = v286;
      if ( v12 )
        break;
LABEL_159:
      v289 += 8;
      if ( v290 == v289 )
        goto LABEL_160;
    }
    v14 = 6;
    v287 = (char **)&v293;
    v15 = (__m128 *)v294;
LABEL_8:
    v16 = v287;
    v293 = v14 + v13;
    v17 = sub_1EA7E80(v287);
    LODWORD(v16) = sub_1EA7E80(v16);
    v294[0] = v293;
    sub_1EF5660(v286, v15);
    v22 = v293 + v17;
    v23 = (unsigned int)v16 >> 3;
    v281 = v22;
    if ( !v23 )
      goto LABEL_28;
    v284 = v22 + 8LL * (v23 - 1) + 8;
    v24 = v9;
    v25 = v15;
    v26 = (__int64)v24;
    while ( 1 )
    {
      v27 = *(_QWORD *)v281;
      v281 += 8;
      v28 = *(_QWORD *)(v285 + 40);
      v29 = *(_QWORD *)(v285 + 32);
      v294[0] = v27;
      if ( v27 > 0x13 )
      {
        v48 = HIDWORD(v27);
        v49 = (unsigned int)sub_B8F2E0((__int64)v25);
        if ( *(_QWORD *)(v28 + 856) )
          sub_1EDF870(v29, v28);
        if ( v48 )
        {
          v18 = (unsigned int)(v48 - 1);
          v28 = *(_QWORD *)(*(_QWORD *)(v28 + 3320) + 8 * v18);
        }
        else
        {
          v49 = (unsigned int)(v49 - 20);
        }
        v27 = v49 | ((unsigned __int64)(unsigned int)(*(_DWORD *)v28 + 1) << 32);
      }
      v30 = (__int64 **)v298;
      v31 = v300;
      if ( !(_DWORD)v299 )
      {
        v18 = (unsigned __int64)v297;
        v32 = *((unsigned int *)v297 + 2);
        if ( (_DWORD)v32 )
          break;
      }
LABEL_33:
      if ( !(_DWORD)v31 )
        goto LABEL_117;
      v18 = (unsigned int)(v31 - 1);
      v44 = ((0xBF58476D1CE4E5B9LL * v27) >> 31) ^ (0xBF58476D1CE4E5B9LL * v27);
      v45 = v44 & (v31 - 1);
      v46 = (__int64 *)&v30[v45];
      v47 = *v46;
      if ( *v46 != v27 )
      {
        v99 = 1;
        v20 = 0;
        if ( v47 != -1 )
        {
          while ( 1 )
          {
            if ( v47 == -2 && !v20 )
              v20 = (__int64)v46;
            v21 = (__int64 *)(unsigned int)(v99 + 1);
            v45 = v18 & (v99 + v45);
            v46 = (__int64 *)&v30[v45];
            v47 = *v46;
            if ( *v46 == v27 )
              goto LABEL_35;
            if ( v47 == -1 )
              break;
            ++v99;
          }
          if ( v20 )
            v46 = (__int64 *)v20;
        }
        v19 = (unsigned int)(3 * v31);
        v100 = v299 + 1;
        if ( 4 * ((int)v299 + 1) >= (unsigned int)v19 )
        {
LABEL_117:
          v103 = (((((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v31 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v31 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v31 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v31 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1);
          v104 = ((v103 >> 16) | v103) + 1;
          if ( (unsigned int)v104 < 0x40 )
            LODWORD(v104) = 64;
          v300 = v104;
          v105 = (char *)sub_22300B0(8LL * (unsigned int)v104, 8, v18, v19, v20, v21);
          v106 = v105;
          v298 = v105;
          if ( v30 )
          {
            v107 = (__m128 *)(8 * v31);
            v299 = 0;
            v108 = &v30[v31];
            v109 = v300;
            v110 = 8LL * v300;
            if ( v105 != &v105[v110] )
            {
              v282 = v107;
              v111 = (char *)memset(v105, 255, v110);
              v107 = v282;
              v106 = v111;
            }
            v112 = v30;
            v113 = v109 - 1;
            if ( v108 != v30 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v114 = *v112;
                  if ( (unsigned __int64)*v112 + 2 > 1 )
                    break;
                  if ( v108 == ++v112 )
                    goto LABEL_129;
                }
                if ( !v109 )
                  break;
                v115 = v113 & (((0xBF58476D1CE4E5B9LL * (unsigned __int64)v114) >> 31) ^ (484763065 * (_DWORD)v114));
                v116 = &v106[8 * v115];
                v117 = *(_QWORD *)v116;
                if ( v114 != *(__int64 **)v116 && v117 != -1 )
                {
                  LODWORD(v282) = 1;
                  v151 = nullptr;
                  v283 = v114;
                  while ( 1 )
                  {
                    if ( !v151 && v117 == -2 )
                      v151 = v116;
                    v115 = v113 & ((_DWORD)v282 + v115);
                    v116 = &v106[8 * v115];
                    v117 = *(_QWORD *)v116;
                    if ( v283 == *(__int64 **)v116 )
                      break;
                    if ( v117 == -1 )
                    {
                      if ( v151 )
                        v116 = v151;
                      break;
                    }
                    LODWORD(v282) = (_DWORD)v282 + 1;
                  }
                }
                v118 = (__int64)*v112++;
                LODWORD(v299) = v299 + 1;
                *(_QWORD *)v116 = v118;
                if ( v108 == v112 )
                  goto LABEL_129;
              }
LABEL_474:
              *(_QWORD *)&dword_0 = v114;
              BUG();
            }
LABEL_129:
            operator delete(v30, v107, 8);
            v30 = (__int64 **)v298;
            v31 = v300;
            v100 = v299 + 1;
          }
          else
          {
            v299 = 0;
            v31 = v300;
            v147 = 8LL * v300;
            if ( v105 == &v105[v147] )
              v30 = (__int64 **)v105;
            else
              v30 = (__int64 **)memset(v105, 255, v147);
            v100 = 1;
          }
          if ( !(_DWORD)v31 )
            goto LABEL_155;
          v119 = (v31 - 1) & (((0xBF58476D1CE4E5B9LL * v27) >> 31) ^ (484763065 * v27));
          v46 = (__int64 *)&v30[v119];
          v102 = v27;
          v120 = *v46;
          if ( *v46 != v27 )
          {
            v121 = 1;
            v122 = nullptr;
            if ( v120 == -1 )
              goto LABEL_133;
            while ( 1 )
            {
              if ( v120 != -2 || v122 )
                v46 = v122;
              v119 = (v31 - 1) & (v121 + v119);
              v120 = (__int64)v30[v119];
              if ( v120 == v27 )
              {
                v102 = v27;
                v46 = (__int64 *)&v30[v119];
                goto LABEL_104;
              }
              if ( v120 == -1 )
                break;
              ++v121;
              v122 = v46;
              v46 = (__int64 *)&v30[v119];
            }
            if ( !v46 )
            {
              v46 = (__int64 *)&v30[v119];
              goto LABEL_133;
            }
            goto LABEL_103;
          }
        }
        else
        {
          v101 = (unsigned int)v31 >> 3;
          if ( (int)v31 - (v100 + HIDWORD(v299)) > (unsigned int)v101 )
            goto LABEL_103;
          v123 = ((((v18 | (v18 >> 1)) >> 2) | v18 | (v18 >> 1)) >> 4) | ((v18 | (v18 >> 1)) >> 2) | v18 | (v18 >> 1);
          v124 = v123 >> 8;
          v125 = (((v124 | v123) >> 16) | v124 | v123) + 1;
          if ( (unsigned int)v125 < 0x40 )
            LODWORD(v125) = 64;
          v300 = v125;
          v126 = (char *)sub_22300B0(8LL * (unsigned int)v125, 8, v124, v101, v20, v21);
          v127 = v126;
          v298 = v126;
          if ( v30 )
          {
            v128 = (__m128 *)(8 * v31);
            v299 = 0;
            v129 = (unsigned __int64 *)&v30[v31];
            v130 = v300;
            v131 = 8LL * v300;
            if ( v126 != &v126[v131] )
            {
              LODWORD(v283) = v300;
              v282 = v128;
              v132 = (char *)memset(v126, 255, v131);
              v128 = v282;
              v130 = (unsigned int)v283;
              v127 = v132;
            }
            v133 = (unsigned __int64 *)v30;
            v134 = v130 - 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v135 = *v133;
                if ( *v133 + 2 > 1 )
                  break;
                if ( v129 == ++v133 )
                  goto LABEL_145;
              }
              if ( !v130 )
                break;
              v136 = v134 & (((0xBF58476D1CE4E5B9LL * v135) >> 31) ^ (484763065 * v135));
              v137 = (__m128 *)&v127[8 * v136];
              v138 = v137->m128_u64[0];
              if ( v135 != v137->m128_u64[0] && v138 != -1 )
              {
                LODWORD(v283) = 1;
                v282 = nullptr;
                v288 = (__int64)v133;
                while ( 1 )
                {
                  if ( v138 == -2 )
                  {
                    if ( v282 )
                      v137 = v282;
                    v282 = v137;
                  }
                  v136 = v134 & ((_DWORD)v283 + v136);
                  v137 = (__m128 *)&v127[8 * v136];
                  v138 = v137->m128_u64[0];
                  if ( v135 == v137->m128_u64[0] )
                  {
                    v133 = (unsigned __int64 *)v288;
                    goto LABEL_144;
                  }
                  if ( v138 == -1 )
                    break;
                  LODWORD(v283) = (_DWORD)v283 + 1;
                }
                v133 = (unsigned __int64 *)v288;
                if ( v282 )
                  v137 = v282;
              }
LABEL_144:
              v139 = *v133++;
              LODWORD(v299) = v299 + 1;
              v137->m128_u64[0] = v139;
              if ( v129 == v133 )
              {
LABEL_145:
                operator delete(v30, v128, 8);
                v30 = (__int64 **)v298;
                v31 = v300;
                v100 = v299 + 1;
                goto LABEL_146;
              }
            }
            v114 = (__int64 *)*v133;
            goto LABEL_474;
          }
          v299 = 0;
          v31 = v300;
          v148 = 8LL * v300;
          if ( v126 == &v126[v148] )
            v30 = (__int64 **)v126;
          else
            v30 = (__int64 **)memset(v126, 255, v148);
          v100 = 1;
LABEL_146:
          if ( !(_DWORD)v31 )
          {
LABEL_155:
            LODWORD(v299) = v299 + 1;
            BUG();
          }
          v140 = (v31 - 1) & v44;
          v46 = (__int64 *)&v30[v140];
          v102 = v27;
          v141 = *v46;
          if ( *v46 != v27 )
          {
            v142 = 1;
            v143 = nullptr;
            if ( v141 == -1 )
              goto LABEL_133;
            while ( 1 )
            {
              if ( v143 || v141 != -2 )
                v46 = v143;
              v140 = (v31 - 1) & (v142 + v140);
              v141 = (__int64)v30[v140];
              if ( v141 == v27 )
              {
                v102 = v27;
                v46 = (__int64 *)&v30[v140];
                goto LABEL_104;
              }
              if ( v141 == -1 )
                break;
              ++v142;
              v143 = v46;
              v46 = (__int64 *)&v30[v140];
            }
            if ( !v46 )
            {
              v46 = (__int64 *)&v30[v140];
LABEL_133:
              LODWORD(v299) = v100;
LABEL_106:
              *v46 = v27;
              sub_1ECF950(v25, v46, (__int64 *)&v30[v31], v26, 1);
LABEL_23:
              v36 = (__int64)v297;
              v37 = *((unsigned int *)v297 + 2);
              v19 = *((unsigned int *)v297 + 3);
              if ( v37 + 1 > v19 )
              {
                sub_2237220(v297, v297 + 2, v37 + 1, 8);
                v37 = *(unsigned int *)(v36 + 8);
              }
              v18 = *(_QWORD *)v36;
              *(_QWORD *)(*(_QWORD *)v36 + 8 * v37) = v27;
              ++*(_DWORD *)(v36 + 8);
              goto LABEL_26;
            }
LABEL_103:
            v102 = *v46;
          }
        }
LABEL_104:
        LODWORD(v299) = v100;
        if ( v102 != -1 )
          --HIDWORD(v299);
        goto LABEL_106;
      }
LABEL_35:
      sub_1ECF950(v25, v46, (__int64 *)&v30[v31], v26, 1);
LABEL_26:
      if ( v281 == v284 )
      {
        v38 = (char **)v26;
        v15 = v25;
        v9 = v38;
LABEL_28:
        v39 = v295.m128_u64[0];
        if ( !v295.m128_i32[2] )
        {
          v39 = v295.m128_u64[0] + 2;
          v295.m128_i32[2] = *(unsigned __int16 *)v295.m128_u64[0];
        }
        v295.m128_u64[0] = v39 + 4;
        v40 = sub_1EA7E80((char **)&v295);
        v41 = sub_1EA7E80((char **)&v295);
        v13 = v295.m128_u64[0] + (unsigned int)(v40 + v41);
        v42 = v295.m128_i32[3]-- == 1;
        v43 = v295.m128_i32[2] - 1;
        v295.m128_u64[0] = v13;
        --v295.m128_i32[2];
        if ( v42 )
          goto LABEL_159;
        v14 = v43 == 0 ? 6LL : 4LL;
        goto LABEL_8;
      }
    }
    if ( (unsigned int)v32 <= 4 )
    {
      sub_1ECF950(v25, (__int64 *)&v298[8 * v300], (__int64 *)&v298[8 * v300], v26, 1);
      v33 = (_QWORD *)v294[0];
      v34 = (_QWORD *)v294[1];
      sub_1ECF950(v25, (__int64 *)&v298[8 * v300], (__int64 *)&v298[8 * v300], v26, 1);
      v18 = v294[0];
      if ( (_QWORD *)v294[0] != v33 )
      {
        while ( 1 )
        {
          if ( *v33 == v27 )
            goto LABEL_26;
          if ( v33 + 1 != v34 )
          {
            if ( v33[1] < 0xFFFFFFFFFFFFFFFELL )
            {
              ++v33;
              goto LABEL_22;
            }
            v35 = v33 + 2;
            while ( 1 )
            {
              v33 = v35;
              if ( v35 == v34 )
                break;
              ++v35;
              if ( *v33 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_22;
            }
          }
          v33 = v34;
LABEL_22:
          if ( v33 == (_QWORD *)v294[0] )
            goto LABEL_23;
        }
      }
      goto LABEL_23;
    }
    v50 = *v297;
    v283 = (__int64 *)v27;
    v282 = (__m128 *)((char *)v50 + 8 * v32);
    while ( 1 )
    {
      if ( !(_DWORD)v31 )
        goto LABEL_45;
      v51 = v31 - 1;
      v52 = (v31 - 1) & (((0xBF58476D1CE4E5B9LL * v50->m128_u64[0]) >> 31) ^ (484763065 * v50->m128_i32[0]));
      v53 = (__int64 *)&v30[v52];
      v54 = *v53;
      if ( v50->m128_u64[0] != *v53 )
        break;
LABEL_43:
      sub_1ECF950(v25, v53, (__int64 *)&v30[v31], v26, 1);
      v50 = (__m128 *)((char *)v50 + 8);
      v30 = (__int64 **)v298;
      v31 = v300;
      if ( v282 == v50 )
      {
        v27 = (unsigned __int64)v283;
        goto LABEL_33;
      }
    }
    v20 = 1;
    v21 = nullptr;
    if ( v54 != -1 )
    {
      while ( 1 )
      {
        if ( v54 == -2 && !v21 )
          v21 = v53;
        v52 = v51 & (v20 + v52);
        v53 = (__int64 *)&v30[v52];
        v54 = *v53;
        if ( v50->m128_u64[0] == *v53 )
          goto LABEL_43;
        if ( v54 == -1 )
          break;
        v20 = (unsigned int)(v20 + 1);
      }
      if ( v21 )
        v53 = v21;
    }
    v18 = (unsigned int)(3 * v31);
    v71 = v299 + 1;
    v19 = (unsigned int)(4 * (v299 + 1));
    if ( (unsigned int)v19 < (unsigned int)v18 )
    {
      v77 = (unsigned int)(v31 - (v71 + HIDWORD(v299)));
      v78 = (unsigned int)v31 >> 3;
      if ( (unsigned int)v77 > (unsigned int)v78 )
      {
LABEL_66:
        v72 = *v53;
        goto LABEL_67;
      }
      v79 = ((v51 | ((unsigned __int64)v51 >> 1)) >> 2) | v51 | ((unsigned __int64)v51 >> 1);
      v80 = (((v79 >> 4) | v79) >> 8) | (v79 >> 4) | v79;
      v81 = ((v80 >> 16) | v80) + 1;
      if ( (unsigned int)v81 < 0x40 )
        LODWORD(v81) = 64;
      v300 = v81;
      v82 = (char *)sub_22300B0(8LL * (unsigned int)v81, 8, v78, v77, v20, v21);
      v83 = v82;
      v298 = v82;
      if ( v30 )
      {
        v84 = 8 * v31;
        v299 = 0;
        v85 = &v30[v31];
        v86 = v300;
        v87 = 8LL * v300;
        if ( v82 != &v82[v87] )
        {
          v288 = v84;
          v88 = (char *)memset(v82, 255, v87);
          v84 = v288;
          v83 = v88;
        }
        v89 = (__int64 *)v30;
        v90 = v86 - 1;
        do
        {
          while ( 1 )
          {
            v66 = *v89;
            if ( (unsigned __int64)(*v89 + 2) > 1 )
              break;
            if ( v85 == (__int64 **)++v89 )
              goto LABEL_90;
          }
          if ( !v86 )
            goto LABEL_475;
          v91 = v90 & (((0xBF58476D1CE4E5B9LL * v66) >> 31) ^ (484763065 * v66));
          v92 = &v83[8 * v91];
          v93 = *(_QWORD *)v92;
          if ( *(_QWORD *)v92 != v66 && v93 != -1 )
          {
            LODWORD(v288) = 1;
            v150 = nullptr;
            v291 = v89;
            while ( 1 )
            {
              if ( !v150 && v93 == -2 )
                v150 = v92;
              v91 = v90 & (v288 + v91);
              v92 = &v83[8 * v91];
              v93 = *(_QWORD *)v92;
              if ( v66 == *(_QWORD *)v92 )
              {
                v89 = v291;
                goto LABEL_89;
              }
              if ( v93 == -1 )
                break;
              LODWORD(v288) = v288 + 1;
            }
            v89 = v291;
            if ( v150 )
              v92 = v150;
          }
LABEL_89:
          v94 = *v89++;
          LODWORD(v299) = v299 + 1;
          *(_QWORD *)v92 = v94;
        }
        while ( v85 != (__int64 **)v89 );
LABEL_90:
        operator delete(v30, v84, 8);
        v30 = (__int64 **)v298;
        v31 = v300;
        v71 = v299 + 1;
      }
      else
      {
        v299 = 0;
        v31 = v300;
        v145 = 8LL * v300;
        if ( v82 == &v82[v145] )
          v30 = (__int64 **)v82;
        else
          v30 = (__int64 **)memset(v82, 255, v145);
        v71 = 1;
      }
      if ( !(_DWORD)v31 )
        goto LABEL_155;
      LODWORD(v95) = (v31 - 1) & (((0xBF58476D1CE4E5B9LL * v50->m128_u64[0]) >> 31) ^ (484763065 * v50->m128_i32[0]));
      v53 = (__int64 *)&v30[(unsigned int)v95];
      v72 = *v53;
      if ( v50->m128_u64[0] == *v53 )
        goto LABEL_67;
      v96 = 1;
      v97 = nullptr;
      if ( v72 != -1 )
      {
        while ( 1 )
        {
          if ( v72 != -2 || v97 )
            v53 = v97;
          v95 = ((_DWORD)v31 - 1) & (unsigned int)(v95 + v96);
          v98 = (__int64 *)&v30[v95];
          v72 = *v98;
          if ( v50->m128_u64[0] == *v98 )
            goto LABEL_384;
          if ( v72 == -1 )
          {
LABEL_98:
            if ( v53 )
              goto LABEL_66;
            v53 = v98;
            goto LABEL_61;
          }
          ++v96;
          v97 = v53;
          v53 = (__int64 *)&v30[v95];
        }
      }
      goto LABEL_61;
    }
LABEL_45:
    v55 = (((((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v31 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v31 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v31 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v31 - 1) | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v31 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v31 - 1) >> 1);
    v56 = ((v55 >> 16) | v55) + 1;
    if ( (unsigned int)v56 < 0x40 )
      LODWORD(v56) = 64;
    v300 = v56;
    v57 = (char *)sub_22300B0(8LL * (unsigned int)v56, 8, v18, v19, v20, v21);
    v58 = v57;
    v298 = v57;
    if ( v30 )
    {
      v59 = 8 * v31;
      v299 = 0;
      v60 = &v30[v31];
      v61 = v300;
      v62 = 8LL * v300;
      if ( v57 != &v57[v62] )
      {
        v288 = v59;
        v63 = (char *)memset(v57, 255, v62);
        v59 = v288;
        v58 = v63;
      }
      v64 = (__int64 *)v30;
      v65 = v61 - 1;
      if ( v60 != v30 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v66 = *v64;
            if ( (unsigned __int64)(*v64 + 2) > 1 )
              break;
            if ( v60 == (__int64 **)++v64 )
              goto LABEL_57;
          }
          if ( !v61 )
            break;
          v67 = v65 & (((0xBF58476D1CE4E5B9LL * v66) >> 31) ^ (484763065 * v66));
          v68 = &v58[8 * v67];
          v69 = *(_QWORD *)v68;
          if ( *(_QWORD *)v68 != v66 && v69 != -1 )
          {
            LODWORD(v288) = 1;
            v149 = nullptr;
            v291 = (__int64 *)v66;
            while ( 1 )
            {
              if ( !v149 && v69 == -2 )
                v149 = v68;
              v67 = v65 & (v288 + v67);
              v68 = &v58[8 * v67];
              v69 = *(_QWORD *)v68;
              if ( v291 == *(__int64 **)v68 )
                break;
              if ( v69 == -1 )
              {
                if ( v149 )
                  v68 = v149;
                break;
              }
              LODWORD(v288) = v288 + 1;
            }
          }
          v70 = *v64++;
          LODWORD(v299) = v299 + 1;
          *(_QWORD *)v68 = v70;
          if ( v60 == (__int64 **)v64 )
            goto LABEL_57;
        }
LABEL_475:
        *(_QWORD *)&dword_0 = v66;
        BUG();
      }
LABEL_57:
      operator delete(v30, v59, 8);
      v30 = (__int64 **)v298;
      v31 = v300;
      v71 = v299 + 1;
    }
    else
    {
      v299 = 0;
      v31 = v300;
      v144 = 8LL * v300;
      if ( v57 != &v57[v144] )
      {
        v30 = (__int64 **)memset(v57, 255, v144);
        v71 = 1;
        if ( !(_DWORD)v31 )
          goto LABEL_155;
LABEL_59:
        v72 = v50->m128_u64[0];
        LODWORD(v73) = (v31 - 1) & (((0xBF58476D1CE4E5B9LL * v50->m128_u64[0]) >> 31) ^ (484763065 * v50->m128_i32[0]));
        v53 = (__int64 *)&v30[(unsigned int)v73];
        v74 = *v53;
        if ( *v53 == v50->m128_u64[0] )
          goto LABEL_67;
        v75 = 1;
        v76 = nullptr;
        if ( v74 != -1 )
        {
          while ( 1 )
          {
            if ( v76 || v74 != -2 )
              v53 = v76;
            v73 = ((_DWORD)v31 - 1) & (unsigned int)(v73 + v75);
            v98 = (__int64 *)&v30[v73];
            v74 = *v98;
            if ( v72 == *v98 )
              break;
            if ( v74 == -1 )
              goto LABEL_98;
            ++v75;
            v76 = v53;
            v53 = (__int64 *)&v30[v73];
          }
LABEL_384:
          v53 = v98;
LABEL_67:
          LODWORD(v299) = v71;
          if ( v72 != -1 )
            --HIDWORD(v299);
          goto LABEL_69;
        }
LABEL_61:
        LODWORD(v299) = v71;
LABEL_69:
        *v53 = v50->m128_u64[0];
        goto LABEL_43;
      }
      v30 = (__int64 **)v57;
      v71 = 1;
    }
    if ( !(_DWORD)v31 )
      goto LABEL_155;
    goto LABEL_59;
  }
LABEL_160:
  operator delete(v298, 8LL * v300, 8);
  return v292;
}
