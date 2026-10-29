__int64 __fastcall sub_C84C00(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  _DWORD *v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r15
  _DWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r12
  char v16; // al
  void *v17; // rbx
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 result; // rax
  _DWORD *v21; // rax
  __int64 v22; // r12
  unsigned int v23; // edx
  unsigned int v24; // esi
  _QWORD *v25; // r14
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rbx
  unsigned int v29; // edx
  unsigned int v30; // eax
  _QWORD *v31; // r12
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned int v36; // ecx
  int v37; // r12d
  int v38; // edi
  __int64 *v39; // r9
  __int64 v40; // rax
  __int64 *v41; // r8
  __int64 *v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // ebx
  unsigned int v46; // ecx
  unsigned int *v47; // rax
  unsigned int v48; // r12d
  unsigned int v49; // ecx
  unsigned int *v50; // rax
  __int64 v51; // r13
  __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rdi
  int v57; // esi
  __int64 v58; // rax
  int v59; // edi
  int v60; // r14d
  int v61; // edi
  __int64 *v62; // r9
  __int64 v63; // rax
  __int64 *v64; // r8
  __int64 *v65; // rax
  __int64 *v66; // rcx
  unsigned __int64 v67; // rdx
  _QWORD *v68; // rdx
  _QWORD *v69; // rdx
  __int64 v70; // rbx
  _DWORD *v71; // rax
  _DWORD *v72; // rdx
  _DWORD *v73; // rax
  __int64 v74; // r13
  unsigned int v75; // edx
  unsigned int v76; // r12d
  _QWORD *v77; // r15
  _QWORD *v78; // rdx
  unsigned int v79; // eax
  __int64 v80; // rcx
  _QWORD *v81; // rcx
  _DWORD *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // edx
  unsigned int v85; // r15d
  __int64 v86; // rsi
  _QWORD *v87; // rdx
  unsigned int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  _QWORD *v91; // rcx
  _DWORD *v92; // rax
  __int64 v93; // r8
  int v94; // r9d
  unsigned int v95; // esi
  __m128i *v96; // r12
  unsigned int v97; // r11d
  __int64 v98; // r8
  __int64 *v99; // r15
  int v100; // esi
  __int64 v101; // r11
  __m128i *v102; // rdi
  __m128i *v103; // rax
  __int64 *v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rax
  unsigned int v107; // r12d
  size_t v108; // rsi
  unsigned int *v109; // rax
  __int64 v110; // rcx
  unsigned int v111; // r15d
  size_t v112; // rsi
  unsigned int *v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r12
  __int64 v116; // rax
  _QWORD *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // r15
  __int64 v120; // rax
  _QWORD *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // r9
  int v124; // r8d
  unsigned int v125; // eax
  __m128i *v126; // r15
  __int64 v127; // r9
  __m128i *v128; // rcx
  int v129; // edi
  __int64 v130; // r11
  __m128i *v131; // r10
  __m128i *v132; // rax
  __int64 *v133; // rsi
  __int64 v134; // rdx
  __int64 v135; // rax
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  __int64 n; // rax
  __int64 ii; // rax
  __m128i *v140; // rax
  __m128i *v141; // r11
  __int64 v142; // r8
  __int64 v143; // rsi
  __m128i *v144; // r10
  __int64 v145; // r14
  const __m128i *v146; // rbx
  __int64 v147; // rdx
  __m128i *v148; // rsi
  __m128i *v149; // rdx
  __m128i *v150; // rax
  int v151; // esi
  __m128i *v152; // r9
  __int64 v153; // rcx
  __int64 v154; // rdi
  __m128i *v155; // r10
  __int64 v156; // r14
  const __m128i *v157; // rbx
  __int64 v158; // rdx
  __m128i *v159; // rsi
  __m128i *v160; // rdx
  unsigned int v161; // eax
  int v162; // edi
  __m128i *v163; // r15
  int v164; // esi
  __int64 v165; // r9
  __m128i *v166; // rcx
  int v167; // r8d
  __int64 v168; // r10
  __m128i *v169; // r11
  __m128i *v170; // rax
  __int64 *v171; // rsi
  __int64 v172; // rdx
  __int64 v173; // rax
  unsigned int v174; // eax
  int v175; // r8d
  __m128i *v176; // r12
  int v177; // r10d
  __int64 v178; // rcx
  __int64 *v179; // r13
  int v180; // esi
  __int64 v181; // r10
  __m128i *v182; // rdi
  __m128i *v183; // rax
  __int64 *v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rax
  __m128i *v187; // rax
  int v188; // r9d
  __m128i *v189; // r11
  __m128i *v190; // rdi
  const __m128i *v191; // r15
  const __m128i *v192; // r8
  __int64 v193; // rdi
  const __m128i *v194; // rbp
  __int64 v195; // r8
  __int64 v196; // rax
  __m128i *v197; // rdx
  __m128i *v198; // rax
  __m128i *v199; // rax
  int v200; // edx
  __m128i *v201; // r10
  __m128i *v202; // rdi
  const __m128i *v203; // r11
  __int64 v204; // rax
  const __m128i *v205; // rbx
  __int64 v206; // rdx
  __m128i *v207; // rsi
  __m128i *v208; // rdx
  unsigned int v209; // eax
  int v210; // r14d
  int v211; // edi
  __int64 *v212; // r8
  __int64 v213; // rax
  __int64 *v214; // rsi
  __int64 *v215; // rax
  __int64 *v216; // rcx
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // rdx
  __int64 k; // rax
  __int64 v220; // rdx
  __int64 v221; // r12
  unsigned int v222; // r14d
  int v223; // r9d
  __int64 *v224; // r8
  __int64 v225; // r12
  __int64 v226; // rax
  __int64 *v227; // rsi
  __int64 *m; // rax
  __int64 *v229; // rcx
  __int64 v230; // rdx
  __int64 i; // rax
  int v232; // ebx
  __m128i *v233; // rax
  __m128i *v234; // r8
  __m128i *v235; // r9
  __m128i *v236; // rdi
  const __m128i *v237; // r14
  const __m128i *v238; // r10
  __int64 v239; // rax
  __m128i *v240; // rdx
  __m128i *v241; // rax
  int v242; // r12d
  __m128i *v243; // rax
  __m128i *v244; // r9
  __m128i *v245; // r10
  __m128i *v246; // rdi
  const __m128i *v247; // r11
  const __m128i *v248; // rbx
  __int64 v249; // rax
  __m128i *v250; // rdx
  __m128i *v251; // rax
  __int64 v252; // rdx
  unsigned __int64 v253; // rdx
  int v254; // r12d
  __int64 v255; // rax
  int v256; // esi
  __m128i *v257; // rcx
  const __m128i *v258; // rbx
  __int64 v259; // rax
  __m128i *v260; // rdx
  __m128i *v261; // rax
  void *v262; // rdi
  __int64 v263; // rax
  int v264; // edx
  __m128i *v265; // r8
  __int64 v266; // r13
  const __m128i *j; // rbx
  __int64 v268; // rax
  __m128i *v269; // rdx
  __m128i *v270; // rax
  void *v271; // rdi
  char **exception; // rbx
  __int64 v273; // rdx
  __int64 v274; // rdx
  __int64 v275; // [rsp+8h] [rbp-A0h]
  __int64 v276; // [rsp+8h] [rbp-A0h]
  __int64 v277; // [rsp+8h] [rbp-A0h]
  unsigned int v278; // [rsp+8h] [rbp-A0h]
  unsigned int v279; // [rsp+8h] [rbp-A0h]
  size_t v280; // [rsp+8h] [rbp-A0h]
  int v281; // [rsp+8h] [rbp-A0h]
  size_t v282; // [rsp+8h] [rbp-A0h]
  __int64 v283; // [rsp+8h] [rbp-A0h]
  __m128i *v284; // [rsp+8h] [rbp-A0h]
  __int64 v285; // [rsp+8h] [rbp-A0h]
  __m128i *v286; // [rsp+8h] [rbp-A0h]
  unsigned int v287; // [rsp+10h] [rbp-98h]
  int v288; // [rsp+10h] [rbp-98h]
  __int64 v289; // [rsp+10h] [rbp-98h]
  int v290; // [rsp+10h] [rbp-98h]
  size_t v291; // [rsp+10h] [rbp-98h]
  int v292; // [rsp+10h] [rbp-98h]
  __int64 v293; // [rsp+10h] [rbp-98h]
  __m128i *v294; // [rsp+10h] [rbp-98h]
  __m128i *v295; // [rsp+10h] [rbp-98h]
  int v296; // [rsp+18h] [rbp-90h]
  __m128i *v297; // [rsp+18h] [rbp-90h]
  const __m128i *v298; // [rsp+18h] [rbp-90h]
  __int64 *v299; // [rsp+20h] [rbp-88h]
  int v300; // [rsp+20h] [rbp-88h]
  __int64 v301; // [rsp+20h] [rbp-88h]
  char v302; // [rsp+4Fh] [rbp-59h] BYREF
  __int64 v303[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v304[9]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a1;
  v7 = a2;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_5;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v8 )
  {
    if ( *v8 != -1 )
    {
      if ( *v8 == 5 && !v8[1] )
      {
        v7 = a3;
        goto LABEL_9;
      }
      goto LABEL_5;
    }
    if ( *(_WORD *)(a3 + 4) )
      goto LABEL_5;
    v18 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v18 )
    {
      if ( *v18 == -1 )
        goto LABEL_29;
LABEL_5:
      if ( *(_WORD *)(a3 + 4) )
        goto LABEL_14;
      v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v9 )
        goto LABEL_14;
      goto LABEL_7;
    }
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_31:
      if ( *v8 != -1 )
        goto LABEL_32;
LABEL_43:
      v21 = *(_DWORD **)(sub_15D1F10(a2) + 24);
      if ( !v21 || *v21 != 5 )
        goto LABEL_45;
      v59 = *(_DWORD *)(a1 + 40);
      v276 = *(unsigned int *)(v6 + 40);
      v60 = v59 - 1;
      if ( 3 * v59 < (unsigned int)(4 * (*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 48))) )
      {
        v276 = (unsigned int)(2 * v59);
        v242 = 2 * v59;
        v243 = (__m128i *)sub_186B270(16 * v276);
        v244 = v243;
        v245 = &v243[v276];
        if ( 2 * v59 )
        {
          do
          {
            v243->m128i_i64[0] = 0;
            ++v243;
            v243[-1].m128i_i32[2] = 0;
          }
          while ( v243 != v245 );
        }
        v246 = *(__m128i **)(v6 + 32);
        v60 = v242 - 1;
        v247 = &v246[*(unsigned int *)(v6 + 40)];
        if ( v246 != v247 )
        {
          v248 = *(const __m128i **)(v6 + 32);
          do
          {
            if ( v248->m128i_i64[0] > 1uLL )
            {
              v249 = *(_DWORD *)(v248->m128i_i64[0] + 12) & (unsigned int)v60;
              v250 = &v244[v249];
              if ( v276 == v249 )
              {
LABEL_454:
                if ( v244 == v250 )
                {
LABEL_463:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v251 = v244;
                while ( v251->m128i_i64[0] )
                {
                  if ( v250 == ++v251 )
                    goto LABEL_463;
                }
              }
              else
              {
                v251 = &v244[v249];
                while ( v251->m128i_i64[0] )
                {
                  if ( v245 == ++v251 )
                    goto LABEL_454;
                }
              }
              *v251 = _mm_loadu_si128(v248);
            }
            ++v248;
          }
          while ( v247 != v248 );
          v7 = a2;
          v246 = *(__m128i **)(v6 + 32);
        }
        if ( v246 )
        {
          v295 = v244;
          sub_186B220(v246);
          v244 = v295;
        }
        *(_QWORD *)(v6 + 32) = v244;
        *(_DWORD *)(v6 + 40) = v242;
        *(_DWORD *)(v6 + 48) = 0;
      }
      v61 = *(_DWORD *)(v7 + 12);
      v62 = *(__int64 **)(v6 + 32);
      v63 = 2LL * (v61 & (unsigned int)v60);
      v64 = &v62[v63];
      if ( v63 == 2 * v276 )
      {
        v66 = nullptr;
LABEL_385:
        if ( v62 == v64 )
          goto LABEL_535;
        v65 = *(__int64 **)(v6 + 32);
        while ( 1 )
        {
          v218 = *v65;
          if ( (unsigned __int64)*v65 > 1 )
          {
            if ( *(_DWORD *)(v218 + 12) == v61 && v7 == v218 )
              goto LABEL_374;
          }
          else
          {
            if ( !v218 )
              goto LABEL_371;
            v66 = v65;
          }
          v65 += 2;
          if ( v64 == v65 )
            goto LABEL_535;
        }
      }
      v65 = &v62[v63];
      v66 = nullptr;
      while ( 1 )
      {
        v67 = *v65;
        if ( (unsigned __int64)*v65 > 1 )
        {
          if ( *(_DWORD *)(v67 + 12) == v61 && v7 == v67 )
            goto LABEL_374;
        }
        else
        {
          if ( !v67 )
          {
LABEL_371:
            if ( v66 )
            {
              --*(_DWORD *)(v6 + 48);
              v65 = v66;
            }
            *v65 = v7;
            *((_DWORD *)v65 + 2) = 0;
            ++*(_DWORD *)(v6 + 44);
LABEL_374:
            ++*((_DWORD *)v65 + 2);
            if ( a4 )
              goto LABEL_45;
            v209 = *(_DWORD *)(v6 + 64);
            v293 = v209;
            v210 = v209 - 1;
            if ( 3 * v209 < 4 * (*(_DWORD *)(v6 + 68) + *(_DWORD *)(v6 + 72)) )
            {
              v293 = 2 * v209;
              v254 = 2 * v209;
              v283 = 16 * v293;
              v255 = sub_186B270(16 * v293);
              v256 = v254;
              v257 = (__m128i *)v255;
              while ( v256 )
              {
                --v256;
                v255 += 16;
                *(_QWORD *)(v255 - 16) = 0;
                *(_DWORD *)(v255 - 8) = 0;
              }
              v301 = v7;
              v210 = v254 - 1;
              v258 = *(const __m128i **)(v6 + 56);
              v298 = &v258[*(unsigned int *)(v6 + 64)];
              while ( v298 != v258 )
              {
                if ( v258->m128i_i64[0] > 1uLL )
                {
                  v259 = 16LL * (*(_DWORD *)(v258->m128i_i64[0] + 12) & (unsigned int)v210);
                  v260 = &v257[(unsigned __int64)v259 / 0x10];
                  if ( v283 == v259 )
                  {
LABEL_503:
                    if ( v257 == v260 )
                    {
LABEL_511:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v261 = v257;
                    while ( v261->m128i_i64[0] )
                    {
                      if ( v260 == ++v261 )
                        goto LABEL_511;
                    }
                  }
                  else
                  {
                    v261 = &v257[(unsigned __int64)v259 / 0x10];
                    while ( v261->m128i_i64[0] )
                    {
                      if ( &v257[(unsigned __int64)v283 / 0x10] == ++v261 )
                        goto LABEL_503;
                    }
                  }
                  *v261 = _mm_loadu_si128(v258);
                }
                ++v258;
              }
              v7 = v301;
              v262 = *(void **)(v6 + 56);
              if ( v262 )
              {
                v284 = v257;
                sub_186B220(v262);
                v257 = v284;
              }
              *(_QWORD *)(v6 + 56) = v257;
              *(_DWORD *)(v6 + 64) = v254;
              *(_DWORD *)(v6 + 72) = 0;
            }
            v211 = *(_DWORD *)(v7 + 12);
            v212 = *(__int64 **)(v6 + 56);
            v213 = 2LL * (v211 & (unsigned int)v210);
            v214 = &v212[v213];
            if ( v213 == 2 * v293 )
            {
              v216 = nullptr;
LABEL_483:
              if ( v212 == v214 )
                goto LABEL_535;
              v215 = *(__int64 **)(v6 + 56);
              while ( 1 )
              {
                v253 = *v215;
                if ( (unsigned __int64)*v215 > 1 )
                {
                  if ( *(_DWORD *)(v253 + 12) == v211 && v7 == v253 )
                    goto LABEL_481;
                }
                else
                {
                  if ( !v253 )
                    goto LABEL_478;
                  v216 = v215;
                }
                v215 += 2;
                if ( v214 == v215 )
                  goto LABEL_535;
              }
            }
            v215 = &v212[v213];
            v216 = nullptr;
            while ( 1 )
            {
              v217 = *v215;
              if ( (unsigned __int64)*v215 > 1 )
              {
                if ( *(_DWORD *)(v217 + 12) == v211 && v7 == v217 )
                  goto LABEL_481;
              }
              else
              {
                if ( !v217 )
                {
LABEL_478:
                  if ( v216 )
                  {
                    --*(_DWORD *)(v6 + 72);
                    v215 = v216;
                  }
                  *v215 = v7;
                  *((_DWORD *)v215 + 2) = 0;
                  ++*(_DWORD *)(v6 + 68);
LABEL_481:
                  ++*((_DWORD *)v215 + 2);
LABEL_45:
                  if ( (*(_BYTE *)(v7 + 6) & 1) == 0 )
                  {
LABEL_46:
                    v22 = *(_QWORD *)(v6 + 16);
                    *(_BYTE *)(v7 + 6) |= 1u;
                    v23 = *(_DWORD *)(v22 + 8);
                    v24 = *(_DWORD *)(v22 + 12);
                    if ( v23 >= v24 )
                    {
                      v55 = sub_186B270(16LL * v24);
                      v23 = *(_DWORD *)(v22 + 8);
                      v56 = *(_QWORD **)v22;
                      v57 = 2 * v24;
                      v25 = (_QWORD *)v55;
                      if ( v23 )
                      {
                        if ( v23 - 1 <= 2 || (_QWORD *)v55 == v56 + 1 )
                        {
                          for ( i = 0; i != v23; ++i )
                            v25[i] = v56[i];
                        }
                        else
                        {
                          v58 = 0;
                          do
                          {
                            *(__m128i *)&v25[v58] = _mm_loadu_si128((const __m128i *)&v56[v58]);
                            v58 += 2;
                          }
                          while ( 2LL * (v23 >> 1) != v58 );
                          if ( (v23 & 1) != 0 )
                            v25[v23 & 0xFFFFFFFE] = v56[v23 & 0xFFFFFFFE];
                        }
                      }
                      if ( v56 != (_QWORD *)(v22 + 16) && v56 )
                      {
                        sub_186B220(v56);
                        v23 = *(_DWORD *)(v22 + 8);
                      }
                      *(_QWORD *)v22 = v25;
                      *(_DWORD *)(v22 + 12) = v57;
                    }
                    else
                    {
                      v25 = *(_QWORD **)v22;
                    }
                    v25[v23] = v7;
                    *(_DWORD *)(v22 + 8) = v23 + 1;
                    v26 = *(_QWORD **)(v6 + 24);
                    if ( v26 )
                    {
                      v27 = *((_DWORD *)v26 - 1);
                      if ( v27 == *((_DWORD *)v26 - 2) )
                      {
                        v48 = (3 * v27 + 1) >> 1;
                        v49 = 8 * v48 + 8;
                        if ( 8 * v27 + 8 >= v49 || v27 >= v48 )
                          goto LABEL_533;
                        v50 = (unsigned int *)sub_186B300(v26 - 1, v49);
                        v26 = v50 + 2;
                        *v50 = v48;
                        v27 = v50[1];
                        *(_QWORD *)(v6 + 24) = v26;
                      }
                    }
                    else
                    {
                      v69 = (_QWORD *)sub_186B270(0x18u);
                      *v69 = 2;
                      v27 = 0;
                      v26 = v69 + 1;
                      *(_QWORD *)(v6 + 24) = v26;
                    }
                    v26[v27] = v7;
                    *((_DWORD *)v26 - 1) = v27 + 1;
                  }
                  if ( *(_WORD *)(a3 + 4) )
                    goto LABEL_36;
LABEL_33:
                  if ( *(_DWORD *)(a3 + 24) )
                    goto LABEL_36;
                  v19 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
                  if ( v19 )
                  {
                    if ( *v19 != -1 )
                      goto LABEL_36;
                  }
                  v35 = *(_DWORD **)(sub_15D1F10(a3) + 24);
                  if ( !v35 || *v35 != 5 )
                    goto LABEL_36;
                  v36 = *(_DWORD *)(v6 + 40);
                  v275 = v36;
                  v37 = v36 - 1;
                  if ( 3 * v36 < 4 * (*(_DWORD *)(v6 + 44) + *(_DWORD *)(v6 + 48)) )
                  {
                    v275 = 2 * v36;
                    v232 = 2 * v36;
                    v233 = (__m128i *)sub_186B270(16 * v275);
                    v234 = v233;
                    v235 = &v233[v275];
                    if ( v232 )
                    {
                      do
                      {
                        v233->m128i_i64[0] = 0;
                        ++v233;
                        v233[-1].m128i_i32[2] = 0;
                      }
                      while ( v233 != v235 );
                    }
                    v236 = *(__m128i **)(v6 + 32);
                    v37 = v232 - 1;
                    v237 = v236;
                    v238 = &v236[*(unsigned int *)(v6 + 40)];
                    if ( v236 != v238 )
                    {
                      do
                      {
                        if ( v237->m128i_i64[0] > 1uLL )
                        {
                          v239 = *(_DWORD *)(v237->m128i_i64[0] + 12) & (unsigned int)v37;
                          v240 = &v234[v239];
                          if ( v275 == v239 )
                          {
LABEL_434:
                            if ( v234 == v240 )
                            {
LABEL_477:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v241 = v234;
                            while ( v241->m128i_i64[0] )
                            {
                              if ( v240 == ++v241 )
                                goto LABEL_477;
                            }
                          }
                          else
                          {
                            v241 = &v234[v239];
                            while ( v241->m128i_i64[0] )
                            {
                              if ( v235 == ++v241 )
                                goto LABEL_434;
                            }
                          }
                          *v241 = _mm_loadu_si128(v237);
                        }
                        ++v237;
                      }
                      while ( v238 != v237 );
                      v236 = *(__m128i **)(v6 + 32);
                    }
                    if ( v236 )
                    {
                      v294 = v234;
                      sub_186B220(v236);
                      v234 = v294;
                    }
                    *(_QWORD *)(v6 + 32) = v234;
                    *(_DWORD *)(v6 + 40) = v232;
                    *(_DWORD *)(v6 + 48) = 0;
                  }
                  v38 = *(_DWORD *)(a3 + 12);
                  v39 = *(__int64 **)(v6 + 32);
                  v40 = 2LL * (v38 & (unsigned int)v37);
                  v41 = &v39[v40];
                  if ( v40 != 2 * v275 )
                  {
                    v42 = &v39[v40];
                    v43 = nullptr;
                    while ( 1 )
                    {
                      v44 = *v42;
                      if ( (unsigned __int64)*v42 > 1 )
                      {
                        if ( *(_DWORD *)(v44 + 12) == v38 && a3 == v44 )
                          goto LABEL_408;
                      }
                      else
                      {
                        if ( !v44 )
                        {
LABEL_405:
                          if ( v43 )
                          {
                            --*(_DWORD *)(v6 + 48);
                            v42 = v43;
                          }
                          *v42 = a3;
                          *((_DWORD *)v42 + 2) = 0;
                          ++*(_DWORD *)(v6 + 44);
LABEL_408:
                          ++*((_DWORD *)v42 + 2);
                          if ( a4 )
                            goto LABEL_36;
                          v221 = *(unsigned int *)(v6 + 64);
                          v222 = v221 - 1;
                          if ( 3 * (int)v221 < (unsigned int)(4 * (*(_DWORD *)(v6 + 68) + *(_DWORD *)(v6 + 72))) )
                          {
                            v221 = (unsigned int)(2 * v221);
                            v285 = 16 * v221;
                            v263 = sub_186B270(16 * v221);
                            v264 = v221;
                            v265 = (__m128i *)v263;
                            while ( v264 )
                            {
                              --v264;
                              v263 += 16;
                              *(_QWORD *)(v263 - 16) = 0;
                              *(_DWORD *)(v263 - 8) = 0;
                            }
                            v222 = v221 - 1;
                            v266 = *(_QWORD *)(v6 + 56) + 16LL * *(unsigned int *)(v6 + 64);
                            for ( j = *(const __m128i **)(v6 + 56); (const __m128i *)v266 != j; ++j )
                            {
                              if ( j->m128i_i64[0] > 1uLL )
                              {
                                v268 = 16LL * (*(_DWORD *)(j->m128i_i64[0] + 12) & v222);
                                v269 = &v265[(unsigned __int64)v268 / 0x10];
                                if ( v285 == v268 )
                                {
LABEL_524:
                                  if ( v265 == v269 )
                                  {
LABEL_532:
                                    sub_1872CE0("");
                                    sub_1873130(114, 213);
                                  }
                                  v270 = v265;
                                  while ( v270->m128i_i64[0] )
                                  {
                                    if ( v269 == ++v270 )
                                      goto LABEL_532;
                                  }
                                }
                                else
                                {
                                  v270 = &v265[(unsigned __int64)v268 / 0x10];
                                  while ( v270->m128i_i64[0] )
                                  {
                                    if ( &v265[(unsigned __int64)v285 / 0x10] == ++v270 )
                                      goto LABEL_524;
                                  }
                                }
                                *v270 = _mm_loadu_si128(j);
                              }
                            }
                            v271 = *(void **)(v6 + 56);
                            if ( v271 )
                            {
                              v286 = v265;
                              sub_186B220(v271);
                              v265 = v286;
                            }
                            *(_QWORD *)(v6 + 56) = v265;
                            *(_DWORD *)(v6 + 64) = v221;
                            *(_DWORD *)(v6 + 72) = 0;
                          }
                          v223 = *(_DWORD *)(a3 + 12);
                          v224 = *(__int64 **)(v6 + 56);
                          v225 = 16 * v221;
                          v226 = 16LL * (v223 & v222);
                          v227 = &v224[(unsigned __int64)v226 / 8];
                          if ( v226 != v225 )
                          {
                            m = &v224[(unsigned __int64)v226 / 8];
                            v229 = nullptr;
                            while ( 1 )
                            {
                              v230 = *m;
                              if ( (unsigned __int64)*m > 1 )
                              {
                                if ( *(_DWORD *)(v230 + 12) == v223 && a3 == v230 )
                                  goto LABEL_476;
                              }
                              else
                              {
                                if ( !v230 )
                                {
LABEL_473:
                                  if ( v229 )
                                  {
                                    --*(_DWORD *)(v6 + 72);
                                    m = v229;
                                  }
                                  *m = a3;
                                  *((_DWORD *)m + 2) = 0;
                                  ++*(_DWORD *)(v6 + 68);
LABEL_476:
                                  ++*((_DWORD *)m + 2);
LABEL_36:
                                  result = *(unsigned __int8 *)(a3 + 6);
                                  if ( (result & 1) != 0 )
                                    return result;
                                  v28 = *(_QWORD *)(v6 + 16);
                                  *(_BYTE *)(a3 + 6) = result | 1;
                                  v29 = *(_DWORD *)(v28 + 8);
                                  v30 = *(_DWORD *)(v28 + 12);
                                  if ( v29 >= v30 )
                                  {
                                    v51 = 2 * v30;
                                    v52 = sub_186B270(8 * v51);
                                    v29 = *(_DWORD *)(v28 + 8);
                                    v53 = *(_QWORD **)v28;
                                    v31 = (_QWORD *)v52;
                                    if ( v29 )
                                    {
                                      if ( v29 - 1 <= 2 || (_QWORD *)v52 == v53 + 1 )
                                      {
                                        for ( k = 0; k != v29; ++k )
                                          v31[k] = v53[k];
                                      }
                                      else
                                      {
                                        v54 = 0;
                                        do
                                        {
                                          *(__m128i *)&v31[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
                                          v54 += 2;
                                        }
                                        while ( v54 != 2LL * (v29 >> 1) );
                                        if ( (v29 & 1) != 0 )
                                          v31[v29 & 0xFFFFFFFE] = v53[v29 & 0xFFFFFFFE];
                                      }
                                    }
                                    if ( v53 != (_QWORD *)(v28 + 16) && v53 )
                                    {
                                      sub_186B220(v53);
                                      v29 = *(_DWORD *)(v28 + 8);
                                    }
                                    *(_QWORD *)v28 = v31;
                                    *(_DWORD *)(v28 + 12) = v51;
                                  }
                                  else
                                  {
                                    v31 = *(_QWORD **)v28;
                                  }
                                  v31[v29] = a3;
                                  *(_DWORD *)(v28 + 8) = v29 + 1;
                                  v32 = *(_QWORD **)(v6 + 24);
                                  if ( !v32 )
                                  {
                                    v68 = (_QWORD *)sub_186B270(0x18u);
                                    *v68 = 2;
                                    v33 = 0;
                                    v32 = v68 + 1;
                                    *(_QWORD *)(v6 + 24) = v32;
                                    goto LABEL_57;
                                  }
                                  v33 = *((_DWORD *)v32 - 1);
                                  if ( v33 != *((_DWORD *)v32 - 2) )
                                  {
LABEL_57:
                                    v34 = v33;
                                    result = v33 + 1;
                                    v32[v34] = a3;
                                    *((_DWORD *)v32 - 1) = result;
                                    return result;
                                  }
                                  v45 = (3 * v33 + 1) >> 1;
                                  v46 = 8 * v45 + 8;
                                  if ( 8 * v33 + 8 < v46 && v33 < v45 )
                                  {
                                    v47 = (unsigned int *)sub_186B300(v32 - 1, v46);
                                    v32 = v47 + 2;
                                    *v47 = v45;
                                    v33 = v47[1];
                                    *(_QWORD *)(v6 + 24) = v32;
                                    goto LABEL_57;
                                  }
LABEL_533:
                                  exception = (char **)__cxa_allocate_exception(0x28u);
                                  sub_161A10(v303, "Overflow encountered when expanding vector", v273);
                                  goto LABEL_534;
                                }
                                v229 = m;
                              }
                              m += 2;
                              if ( &v224[(unsigned __int64)v225 / 8] == m )
                                goto LABEL_465;
                            }
                          }
                          v229 = nullptr;
LABEL_465:
                          if ( v224 != v227 )
                          {
                            for ( m = *(__int64 **)(v6 + 56); v227 != m; m += 2 )
                            {
                              v252 = *m;
                              if ( (unsigned __int64)*m > 1 )
                              {
                                if ( *(_DWORD *)(v252 + 12) == v223 && a3 == v252 )
                                  goto LABEL_476;
                              }
                              else
                              {
                                if ( !v252 )
                                  goto LABEL_473;
                                v229 = m;
                              }
                            }
                          }
LABEL_535:
                          sub_1872CE0("");
                          sub_1873130(114, 461);
                        }
                        v43 = v42;
                      }
                      v42 += 2;
                      if ( &v39[2 * v275] == v42 )
                        goto LABEL_397;
                    }
                  }
                  v43 = nullptr;
LABEL_397:
                  if ( v39 != v41 )
                  {
                    v42 = *(__int64 **)(v6 + 32);
                    while ( 1 )
                    {
                      v220 = *v42;
                      if ( (unsigned __int64)*v42 > 1 )
                      {
                        if ( *(_DWORD *)(v220 + 12) == v38 && a3 == v220 )
                          goto LABEL_408;
                      }
                      else
                      {
                        if ( !v220 )
                          goto LABEL_405;
                        v43 = v42;
                      }
                      v42 += 2;
                      if ( v41 == v42 )
                        goto LABEL_535;
                    }
                  }
                  goto LABEL_535;
                }
                v216 = v215;
              }
              v215 += 2;
              if ( &v212[2 * v293] == v215 )
                goto LABEL_483;
            }
          }
          v66 = v65;
        }
        v65 += 2;
        if ( &v62[2 * v276] == v65 )
          goto LABEL_385;
      }
    }
LABEL_32:
    if ( (*(_BYTE *)(a2 + 6) & 1) == 0 )
      goto LABEL_46;
    goto LABEL_33;
  }
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_14;
  v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v9 )
  {
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_43;
    goto LABEL_32;
  }
  if ( *v9 == -1 )
  {
LABEL_29:
    if ( *(_DWORD *)(a2 + 24) )
      goto LABEL_32;
    if ( !v8 )
      goto LABEL_43;
    goto LABEL_31;
  }
LABEL_7:
  if ( *v9 != 5 || v9[1] )
    goto LABEL_14;
LABEL_9:
  if ( *(_WORD *)(v7 + 4) )
    goto LABEL_14;
  v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
  if ( !v10 )
    goto LABEL_14;
  if ( *v10 != 5 )
    goto LABEL_14;
  if ( v10[1] != 6 )
    goto LABEL_14;
  if ( *(_DWORD *)(v7 + 24) != 2 )
    goto LABEL_14;
  v11 = *(_QWORD *)(v7 + 40);
  if ( *(_WORD *)(v11 + 4) )
    goto LABEL_14;
  v12 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
  if ( !v12 || *v12 != 5 || v12[1] != 9 || *(_DWORD *)(v11 + 24) != 2 )
    goto LABEL_14;
  v13 = *(_QWORD *)(v11 + 32);
  v14 = *(_QWORD *)(a1 + 8);
  v303[0] = 0;
  v15 = *(_QWORD *)(v7 + 32);
  v303[1] = 0;
  v304[0] = 1;
  v304[1] = 0;
  v16 = sub_1666AE0(v14, v13, v303, &v302);
  v17 = qword_1C7F2C0;
  if ( !v16
    || (v303[0] & 0x100000000LL) != 0
    || LODWORD(v303[0]) != -1
    || (v304[0] & 0x100000000LL) != 0
    || LODWORD(v304[0]) != 1 )
  {
    sub_182CBA0(qword_1C7F2C0, v303);
    sub_182CBA0(v17, v304);
    goto LABEL_14;
  }
  if ( (sub_182CBA0(qword_1C7F2C0, v303), sub_182CBA0(v17, v304), v70 = *(_QWORD *)(v11 + 40), *(_WORD *)(v15 + 4))
    || (v71 = *(_DWORD **)(*(_QWORD *)(v15 + 16) + 24LL)) != nullptr && *v71 != -1
    || *(_WORD *)(v70 + 4)
    || (v72 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL)) != nullptr && *v72 != -1 )
  {
LABEL_14:
    sub_161A90();
  }
  if ( *(_DWORD *)(v15 + 24) || v71 && *v71 != -1 )
  {
    if ( (*(_BYTE *)(v15 + 6) & 1) == 0 )
      goto LABEL_135;
    goto LABEL_122;
  }
  v82 = *(_DWORD **)(sub_15D1F10(v15) + 24);
  if ( !v82 || *v82 != 5 )
    goto LABEL_134;
  v123 = *(unsigned int *)(v6 + 40);
  v124 = *(_DWORD *)(v6 + 48);
  v287 = 2 * v123;
  if ( 3 * (int)v123 < (unsigned int)(4 * (v124 + *(_DWORD *)(v6 + 44))) )
  {
    v140 = (__m128i *)sub_186B270(16LL * v287);
    v127 = 16LL * v287;
    v126 = v140;
    v141 = &v140[(unsigned __int64)v127 / 0x10];
    if ( v287 )
    {
      do
      {
        v140->m128i_i64[0] = 0;
        ++v140;
        v140[-1].m128i_i32[2] = 0;
      }
      while ( v140 != v141 );
    }
    v142 = *(_QWORD *)(v6 + 32);
    v128 = v141;
    v143 = 16LL * *(unsigned int *)(v6 + 40);
    v144 = (__m128i *)(v142 + v143);
    v278 = v287 - 1;
    if ( v142 != v142 + v143 )
    {
      v145 = v70;
      v146 = *(const __m128i **)(v6 + 32);
      do
      {
        if ( v146->m128i_i64[0] > 1uLL )
        {
          v147 = 16LL * (*(_DWORD *)(v146->m128i_i64[0] + 12) & v278);
          v148 = &v126[(unsigned __int64)v147 / 0x10];
          if ( v127 == v147 )
          {
LABEL_226:
            if ( v126 == v148 )
            {
LABEL_298:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v149 = v126;
            while ( v149->m128i_i64[0] )
            {
              if ( v148 == ++v149 )
                goto LABEL_298;
            }
          }
          else
          {
            v149 = &v126[(unsigned __int64)v147 / 0x10];
            while ( v149->m128i_i64[0] )
            {
              if ( v141 == ++v149 )
                goto LABEL_226;
            }
          }
          *v149 = _mm_loadu_si128(v146);
        }
        ++v146;
      }
      while ( v144 != v146 );
      v70 = v145;
      v144 = *(__m128i **)(v6 + 32);
    }
    if ( v144 )
    {
      v299 = (__int64 *)v141;
      sub_186B220(v144);
      v128 = (__m128i *)v299;
      v127 = 16LL * v287;
    }
    *(_QWORD *)(v6 + 32) = v126;
    v124 = 0;
    *(_DWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 40) = v287;
  }
  else
  {
    v125 = v123 - 1;
    v126 = *(__m128i **)(v6 + 32);
    v127 = 16 * v123;
    v278 = v125;
    v128 = &v126[(unsigned __int64)v127 / 0x10];
  }
  v129 = *(_DWORD *)(v15 + 12);
  v130 = 16LL * (v129 & v278);
  v131 = &v126[(unsigned __int64)v130 / 0x10];
  if ( v130 != v127 )
  {
    v132 = &v126[(unsigned __int64)v130 / 0x10];
    v133 = nullptr;
    while ( 1 )
    {
      v134 = v132->m128i_i64[0];
      if ( v132->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v134 + 12) == v129 && v15 == v134 )
        {
          v133 = (__int64 *)v132;
          goto LABEL_258;
        }
      }
      else
      {
        if ( !v134 )
        {
          if ( v133 )
            goto LABEL_256;
          v133 = (__int64 *)v132;
          goto LABEL_257;
        }
        v133 = (__int64 *)v132;
      }
      if ( ++v132 == v128 )
        goto LABEL_203;
    }
  }
  v133 = nullptr;
  while ( 1 )
  {
LABEL_203:
    if ( v131 == v126 )
      goto LABEL_535;
    v135 = v126->m128i_i64[0];
    if ( v126->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v135 + 12) == v129 && v15 == v135 )
    {
      v133 = (__int64 *)v126;
      goto LABEL_258;
    }
LABEL_202:
    ++v126;
  }
  if ( v135 )
  {
    v133 = (__int64 *)v126;
    goto LABEL_202;
  }
  if ( v133 )
LABEL_256:
    *(_DWORD *)(v6 + 48) = v124 - 1;
  else
    v133 = (__int64 *)v126;
LABEL_257:
  *v133 = v15;
  *((_DWORD *)v133 + 2) = 0;
  ++*(_DWORD *)(v6 + 44);
LABEL_258:
  ++*((_DWORD *)v133 + 2);
  if ( a4 )
    goto LABEL_134;
  v161 = *(_DWORD *)(v6 + 64);
  v162 = *(_DWORD *)(v6 + 72);
  if ( 3 * v161 < 4 * (v162 + *(_DWORD *)(v6 + 68)) )
  {
    v292 = 2 * v161;
    v282 = 32LL * v161;
    v199 = (__m128i *)sub_186B270(v282);
    v165 = v282;
    v200 = v292;
    v163 = v199;
    v201 = &v199[v282 / 0x10];
    if ( v292 )
    {
      do
      {
        v199->m128i_i64[0] = 0;
        ++v199;
        v199[-1].m128i_i32[2] = 0;
      }
      while ( v199 != v201 );
    }
    v202 = *(__m128i **)(v6 + 56);
    v164 = v292 - 1;
    v166 = v201;
    v203 = &v202[*(unsigned int *)(v6 + 64)];
    if ( v202 != v203 )
    {
      v204 = v70;
      v205 = *(const __m128i **)(v6 + 56);
      do
      {
        if ( v205->m128i_i64[0] > 1uLL )
        {
          v206 = 16LL * (*(_DWORD *)(v205->m128i_i64[0] + 12) & (unsigned int)(v292 - 1));
          v207 = &v163[(unsigned __int64)v206 / 0x10];
          if ( v282 == v206 )
          {
LABEL_334:
            if ( v163 == v207 )
            {
LABEL_355:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v208 = v163;
            while ( v208->m128i_i64[0] )
            {
              if ( v207 == ++v208 )
                goto LABEL_355;
            }
          }
          else
          {
            v208 = &v163[(unsigned __int64)v206 / 0x10];
            while ( v208->m128i_i64[0] )
            {
              if ( v201 == ++v208 )
                goto LABEL_334;
            }
          }
          *v208 = _mm_loadu_si128(v205);
        }
        ++v205;
      }
      while ( v203 != v205 );
      v166 = v201;
      v164 = v292 - 1;
      v202 = *(__m128i **)(v6 + 56);
      v70 = v204;
      v200 = v292;
    }
    if ( v202 )
    {
      v300 = v200;
      v297 = v166;
      sub_186B220(v202);
      v200 = v300;
      v166 = v297;
      v165 = v282;
    }
    *(_QWORD *)(v6 + 56) = v163;
    v162 = 0;
    *(_DWORD *)(v6 + 64) = v200;
    *(_DWORD *)(v6 + 72) = 0;
  }
  else
  {
    v163 = *(__m128i **)(v6 + 56);
    v164 = v161 - 1;
    v165 = 16LL * v161;
    v166 = (__m128i *)((char *)v163 + v165);
  }
  v167 = *(_DWORD *)(v15 + 12);
  v168 = 16LL * (v167 & (unsigned int)v164);
  v169 = &v163[(unsigned __int64)v168 / 0x10];
  if ( v168 != v165 )
  {
    v170 = &v163[(unsigned __int64)v168 / 0x10];
    v171 = nullptr;
    while ( 1 )
    {
      v172 = v170->m128i_i64[0];
      if ( v170->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v172 + 12) == v167 && v15 == v172 )
        {
          v171 = (__int64 *)v170;
          goto LABEL_352;
        }
      }
      else
      {
        if ( !v172 )
        {
          if ( v171 )
            goto LABEL_350;
          v171 = (__int64 *)v170;
          goto LABEL_351;
        }
        v171 = (__int64 *)v170;
      }
      if ( ++v170 == v166 )
        goto LABEL_272;
    }
  }
  v171 = nullptr;
LABEL_272:
  while ( 2 )
  {
    if ( v169 == v163 )
      goto LABEL_535;
    v173 = v163->m128i_i64[0];
    if ( v163->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v173 + 12) == v167 && v15 == v173 )
      {
        v171 = (__int64 *)v163;
        goto LABEL_352;
      }
      goto LABEL_271;
    }
    if ( v173 )
    {
      v171 = (__int64 *)v163;
LABEL_271:
      ++v163;
      continue;
    }
    break;
  }
  if ( v171 )
LABEL_350:
    *(_DWORD *)(v6 + 72) = v162 - 1;
  else
    v171 = (__int64 *)v163;
LABEL_351:
  *v171 = v15;
  *((_DWORD *)v171 + 2) = 0;
  ++*(_DWORD *)(v6 + 68);
LABEL_352:
  ++*((_DWORD *)v171 + 2);
LABEL_134:
  if ( (*(_BYTE *)(v15 + 6) & 1) == 0 )
  {
LABEL_135:
    v83 = *(_QWORD *)(v6 + 16);
    *(_BYTE *)(v15 + 6) |= 1u;
    v84 = *(_DWORD *)(v83 + 8);
    v85 = *(_DWORD *)(v83 + 12);
    if ( v84 >= v85 )
    {
      v277 = v83;
      v119 = 2 * v85;
      v120 = sub_186B270(8 * v119);
      v83 = v277;
      v86 = v120;
      v84 = *(_DWORD *)(v277 + 8);
      v121 = *(_QWORD **)v277;
      if ( v84 )
      {
        if ( v84 - 1 <= 2 || (_QWORD *)v120 == v121 + 1 )
        {
          for ( n = 0; n != v84; ++n )
            *(_QWORD *)(v86 + n * 8) = v121[n];
        }
        else
        {
          v122 = 0;
          do
          {
            *(__m128i *)(v86 + v122 * 8) = _mm_loadu_si128((const __m128i *)&v121[v122]);
            v122 += 2;
          }
          while ( v122 != 2LL * (v84 >> 1) );
          if ( (v84 & 1) != 0 )
            *(_QWORD *)(v86 + 8LL * (v84 & 0xFFFFFFFE)) = v121[v84 & 0xFFFFFFFE];
        }
      }
      if ( v121 != (_QWORD *)(v277 + 16) && v121 )
      {
        sub_186B220(v121);
        v83 = v277;
        v84 = *(_DWORD *)(v277 + 8);
      }
      *(_QWORD *)v83 = v86;
      *(_DWORD *)(v83 + 12) = v119;
    }
    else
    {
      v86 = *(_QWORD *)v83;
    }
    *(_QWORD *)(v86 + 8LL * v84) = v15;
    *(_DWORD *)(v83 + 8) = v84 + 1;
    v87 = *(_QWORD **)(v6 + 24);
    if ( v87 )
    {
      v88 = *((_DWORD *)v87 - 1);
      if ( v88 == *((_DWORD *)v87 - 2) )
      {
        v111 = (3 * v88 + 1) >> 1;
        v112 = 8 * v111 + 8;
        if ( 8 * v88 + 8 >= (unsigned int)v112 || v88 >= v111 )
          goto LABEL_536;
        v113 = (unsigned int *)sub_186B300(v87 - 1, v112);
        v114 = v113[1];
        v87 = v113 + 2;
        *v113 = v111;
        *(_QWORD *)(v6 + 24) = v113 + 2;
        LODWORD(v113) = v114;
        v91 = &v87[v114];
        v90 = (_DWORD)v113 + 1;
      }
      else
      {
        v89 = v88;
        v90 = v88 + 1;
        v91 = &v87[v89];
      }
    }
    else
    {
      v136 = (_QWORD *)sub_186B270(0x18u);
      v87 = v136 + 1;
      *v136 = 2;
      v90 = 1;
      *(_QWORD *)(v6 + 24) = v87;
      v91 = v87;
    }
    *v91 = v15;
    *((_DWORD *)v87 - 1) = v90;
  }
  if ( *(_WORD *)(v70 + 4) )
    goto LABEL_125;
LABEL_122:
  if ( *(_DWORD *)(v70 + 24) )
    goto LABEL_125;
  v73 = *(_DWORD **)(*(_QWORD *)(v70 + 16) + 24LL);
  if ( v73 )
  {
    if ( *v73 != -1 )
      goto LABEL_125;
  }
  v92 = *(_DWORD **)(sub_15D1F10(v70) + 24);
  if ( !v92 || *v92 != 5 )
    goto LABEL_125;
  v93 = *(unsigned int *)(v6 + 40);
  v94 = *(_DWORD *)(v6 + 48);
  v95 = 2 * v93;
  if ( 3 * (int)v93 < (unsigned int)(4 * (v94 + *(_DWORD *)(v6 + 44))) )
  {
    v288 = 2 * v93;
    v150 = (__m128i *)sub_186B270(16LL * v95);
    v98 = 16LL * v95;
    v151 = v288;
    v96 = v150;
    v152 = (__m128i *)((char *)v150 + v98);
    if ( v288 )
    {
      do
      {
        v150->m128i_i64[0] = 0;
        ++v150;
        v150[-1].m128i_i32[2] = 0;
      }
      while ( v150 != v152 );
    }
    v153 = *(_QWORD *)(v6 + 32);
    v97 = v288 - 1;
    v99 = (__int64 *)v152;
    v154 = 16LL * *(unsigned int *)(v6 + 40);
    v155 = (__m128i *)(v153 + v154);
    if ( v153 != v153 + v154 )
    {
      v156 = v70;
      v157 = *(const __m128i **)(v6 + 32);
      do
      {
        if ( v157->m128i_i64[0] > 1uLL )
        {
          v158 = 16LL * (*(_DWORD *)(v157->m128i_i64[0] + 12) & v97);
          v159 = &v96[(unsigned __int64)v158 / 0x10];
          if ( v98 == v158 )
          {
LABEL_246:
            if ( v96 == v159 )
            {
LABEL_297:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v160 = v96;
            while ( v160->m128i_i64[0] )
            {
              if ( v159 == ++v160 )
                goto LABEL_297;
            }
          }
          else
          {
            v160 = &v96[(unsigned __int64)v158 / 0x10];
            while ( v160->m128i_i64[0] )
            {
              if ( v152 == ++v160 )
                goto LABEL_246;
            }
          }
          *v160 = _mm_loadu_si128(v157);
        }
        ++v157;
      }
      while ( v155 != v157 );
      v70 = v156;
      v155 = *(__m128i **)(v6 + 32);
      v151 = v288;
    }
    if ( v155 )
    {
      v289 = v98;
      v279 = v97;
      sub_186B220(v155);
      v98 = v289;
      v97 = v279;
    }
    *(_QWORD *)(v6 + 32) = v96;
    v94 = 0;
    *(_DWORD *)(v6 + 40) = v151;
    *(_DWORD *)(v6 + 48) = 0;
  }
  else
  {
    v96 = *(__m128i **)(v6 + 32);
    v97 = v93 - 1;
    v98 = 16 * v93;
    v99 = (__int64 *)((char *)v96->m128i_i64 + v98);
  }
  v100 = *(_DWORD *)(v70 + 12);
  v101 = 16LL * (v100 & v97);
  v102 = &v96[(unsigned __int64)v101 / 0x10];
  if ( v101 != v98 )
  {
    v103 = &v96[(unsigned __int64)v101 / 0x10];
    v104 = nullptr;
    while ( 1 )
    {
      v105 = v103->m128i_i64[0];
      if ( v103->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v105 + 12) == v100 && v70 == v105 )
        {
          v104 = (__int64 *)v103;
          goto LABEL_279;
        }
      }
      else
      {
        if ( !v105 )
        {
          if ( v104 )
            goto LABEL_277;
          v104 = (__int64 *)v103;
          goto LABEL_278;
        }
        v104 = (__int64 *)v103;
      }
      if ( ++v103 == (__m128i *)v99 )
        goto LABEL_158;
    }
  }
  v104 = nullptr;
LABEL_158:
  while ( 2 )
  {
    if ( v102 == v96 )
      goto LABEL_535;
    v106 = v96->m128i_i64[0];
    if ( v96->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v106 + 12) == v100 && v70 == v106 )
      {
        v104 = (__int64 *)v96;
        goto LABEL_279;
      }
      goto LABEL_157;
    }
    if ( v106 )
    {
      v104 = (__int64 *)v96;
LABEL_157:
      ++v96;
      continue;
    }
    break;
  }
  if ( v104 )
LABEL_277:
    *(_DWORD *)(v6 + 48) = v94 - 1;
  else
    v104 = (__int64 *)v96;
LABEL_278:
  *v104 = v70;
  *((_DWORD *)v104 + 2) = 0;
  ++*(_DWORD *)(v6 + 44);
LABEL_279:
  ++*((_DWORD *)v104 + 2);
  if ( a4 )
    goto LABEL_125;
  v174 = *(_DWORD *)(v6 + 64);
  v175 = *(_DWORD *)(v6 + 72);
  if ( 3 * v174 < 4 * (v175 + *(_DWORD *)(v6 + 68)) )
  {
    v290 = 2 * v174;
    v280 = 32LL * v174;
    v187 = (__m128i *)sub_186B270(v280);
    v178 = v280;
    v188 = v290;
    v176 = v187;
    v189 = &v187[v280 / 0x10];
    if ( v290 )
    {
      do
      {
        v187->m128i_i64[0] = 0;
        ++v187;
        v187[-1].m128i_i32[2] = 0;
      }
      while ( v187 != v189 );
    }
    v190 = *(__m128i **)(v6 + 56);
    v177 = v290 - 1;
    v179 = (__int64 *)v189;
    v191 = v190;
    v192 = &v190[*(unsigned int *)(v6 + 64)];
    if ( v190 != v192 )
    {
      v193 = v6;
      v194 = v192;
      v195 = v193;
      do
      {
        if ( v191->m128i_i64[0] > 1uLL )
        {
          v196 = 16LL * (*(_DWORD *)(v191->m128i_i64[0] + 12) & (unsigned int)v177);
          v197 = &v176[(unsigned __int64)v196 / 0x10];
          if ( v280 == v196 )
          {
LABEL_314:
            if ( v176 == v197 )
            {
LABEL_356:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v198 = v176;
            while ( v198->m128i_i64[0] )
            {
              if ( v197 == ++v198 )
                goto LABEL_356;
            }
          }
          else
          {
            v198 = &v176[(unsigned __int64)v196 / 0x10];
            while ( v198->m128i_i64[0] )
            {
              if ( v189 == ++v198 )
                goto LABEL_314;
            }
          }
          *v198 = _mm_loadu_si128(v191);
        }
        ++v191;
      }
      while ( v194 != v191 );
      v190 = *(__m128i **)(v193 + 56);
      v6 = v195;
      v179 = (__int64 *)v189;
    }
    if ( v190 )
    {
      v296 = v290;
      v291 = v280;
      v281 = v188 - 1;
      sub_186B220(v190);
      v188 = v296;
      v178 = v291;
      v177 = v281;
    }
    *(_QWORD *)(v6 + 56) = v176;
    v175 = 0;
    *(_DWORD *)(v6 + 64) = v188;
    *(_DWORD *)(v6 + 72) = 0;
  }
  else
  {
    v176 = *(__m128i **)(v6 + 56);
    v177 = v174 - 1;
    v178 = 16LL * v174;
    v179 = (__int64 *)((char *)v176->m128i_i64 + v178);
  }
  v180 = *(_DWORD *)(v70 + 12);
  v181 = 16LL * (v180 & (unsigned int)v177);
  v182 = &v176[(unsigned __int64)v181 / 0x10];
  if ( v181 != v178 )
  {
    v183 = &v176[(unsigned __int64)v181 / 0x10];
    v184 = nullptr;
    while ( 1 )
    {
      v185 = v183->m128i_i64[0];
      if ( v183->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v185 + 12) == v180 && v70 == v185 )
        {
          v184 = (__int64 *)v183;
          goto LABEL_348;
        }
      }
      else
      {
        if ( !v185 )
        {
          if ( v184 )
            goto LABEL_346;
          v184 = (__int64 *)v183;
          goto LABEL_347;
        }
        v184 = (__int64 *)v183;
      }
      if ( ++v183 == (__m128i *)v179 )
        goto LABEL_293;
    }
  }
  v184 = nullptr;
LABEL_293:
  while ( 2 )
  {
    if ( v182 == v176 )
      goto LABEL_535;
    v186 = v176->m128i_i64[0];
    if ( v176->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v186 + 12) == v180 && v70 == v186 )
      {
        v184 = (__int64 *)v176;
        goto LABEL_348;
      }
      goto LABEL_292;
    }
    if ( v186 )
    {
      v184 = (__int64 *)v176;
LABEL_292:
      ++v176;
      continue;
    }
    break;
  }
  if ( v184 )
LABEL_346:
    *(_DWORD *)(v6 + 72) = v175 - 1;
  else
    v184 = (__int64 *)v176;
LABEL_347:
  *v184 = v70;
  *((_DWORD *)v184 + 2) = 0;
  ++*(_DWORD *)(v6 + 68);
LABEL_348:
  ++*((_DWORD *)v184 + 2);
LABEL_125:
  result = *(unsigned __int8 *)(v70 + 6);
  if ( (result & 1) == 0 )
  {
    v74 = *(_QWORD *)(v6 + 16);
    *(_BYTE *)(v70 + 6) = result | 1;
    v75 = *(_DWORD *)(v74 + 8);
    v76 = *(_DWORD *)(v74 + 12);
    if ( v75 >= v76 )
    {
      v115 = 2 * v76;
      v116 = sub_186B270(8 * v115);
      v75 = *(_DWORD *)(v74 + 8);
      v117 = *(_QWORD **)v74;
      v77 = (_QWORD *)v116;
      if ( v75 )
      {
        if ( v75 - 1 <= 2 || (_QWORD *)v116 == v117 + 1 )
        {
          for ( ii = 0; ii != v75; ++ii )
            v77[ii] = v117[ii];
        }
        else
        {
          v118 = 0;
          do
          {
            *(__m128i *)&v77[v118] = _mm_loadu_si128((const __m128i *)&v117[v118]);
            v118 += 2;
          }
          while ( v118 != 2LL * (v75 >> 1) );
          if ( (v75 & 1) != 0 )
            v77[v75 & 0xFFFFFFFE] = v117[v75 & 0xFFFFFFFE];
        }
      }
      if ( v117 && v117 != (_QWORD *)(v74 + 16) )
      {
        sub_186B220(v117);
        v75 = *(_DWORD *)(v74 + 8);
      }
      *(_QWORD *)v74 = v77;
      *(_DWORD *)(v74 + 12) = v115;
    }
    else
    {
      v77 = *(_QWORD **)v74;
    }
    v77[v75] = v70;
    *(_DWORD *)(v74 + 8) = v75 + 1;
    v78 = *(_QWORD **)(v6 + 24);
    if ( v78 )
    {
      v79 = *((_DWORD *)v78 - 1);
      if ( v79 != *((_DWORD *)v78 - 2) )
      {
        v80 = v79;
        result = v79 + 1;
        v81 = &v78[v80];
        goto LABEL_131;
      }
      v107 = (3 * v79 + 1) >> 1;
      v108 = 8 * v107 + 8;
      if ( 8 * v79 + 8 < (unsigned int)v108 && v79 < v107 )
      {
        v109 = (unsigned int *)sub_186B300(v78 - 1, v108);
        v110 = v109[1];
        v78 = v109 + 2;
        *v109 = v107;
        *(_QWORD *)(v6 + 24) = v109 + 2;
        LODWORD(v109) = v110;
        v81 = &v78[v110];
        result = (unsigned int)((_DWORD)v109 + 1);
        goto LABEL_131;
      }
LABEL_536:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_161A10(v303, "Overflow encountered when expanding vector", v274);
LABEL_534:
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v303);
      sub_233E40((__int64)v303);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v137 = (_QWORD *)sub_186B270(0x18u);
    v78 = v137 + 1;
    *v137 = 2;
    result = 1;
    *(_QWORD *)(v6 + 24) = v78;
    v81 = v78;
LABEL_131:
    *v81 = v70;
    *((_DWORD *)v78 - 1) = result;
  }
  return result;
}

