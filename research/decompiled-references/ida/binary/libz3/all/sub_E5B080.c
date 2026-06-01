char *__fastcall sub_E5B080(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  char **v5; // r12
  __int64 v6; // rdx
  char **v7; // r12
  __int64 v8; // rdx
  char **v9; // r12
  __int64 v10; // rdx
  char **exception; // r12
  __int64 v12; // rdx
  char **v13; // r12
  __int64 v14; // rdx
  char **v15; // r15
  __int64 v16; // rdx
  char **v17; // r12
  __int64 v18; // rdx
  char **v19; // r12
  __int64 v20; // rdx
  __m128i *v21; // rax
  __m128i *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  char i; // al
  _QWORD *v27; // r13
  int v28; // r12d
  __int64 v29; // rdi
  char **v30; // rax
  char *v31; // r8
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  char v37; // dl
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // edx
  __int64 *v41; // r15
  _QWORD *v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  __int64 v45; // rsi
  bool v46; // zf
  unsigned int v47; // eax
  unsigned int v48; // edi
  unsigned int v49; // edx
  unsigned int *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rdx
  int v53; // eax
  unsigned int v54; // edi
  size_t v55; // rsi
  unsigned int v56; // r15d
  unsigned int *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 *v61; // rbx
  int v62; // ecx
  __int64 *v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // r12
  unsigned __int64 v66; // r15
  __int64 v67; // rsi
  char *result; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  _DWORD *v73; // rax
  unsigned __int64 v74; // rdi
  int v75; // ecx
  size_t v76; // r15
  const __m128i *v77; // rbx
  __int64 v78; // rdx
  __m128i *v79; // rsi
  const __m128i *v80; // rax
  __int64 v81; // rdx
  int v82; // eax
  int v83; // r8d
  int v84; // r9d
  unsigned int v85; // r10d
  unsigned int v86; // edx
  int v87; // ecx
  __m128 v88; // xmm0
  __int64 v89; // r10
  __m128 *v90; // rdi
  __m128 *v91; // rax
  __m128 *v92; // rsi
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rdx
  unsigned int v95; // edx
  __m128 *v96; // rbx
  int v97; // r9d
  __int64 v98; // rcx
  __m128 *v99; // r15
  int v100; // esi
  __m128 v101; // xmm0
  __int64 v102; // r9
  __m128 *v103; // rdi
  __m128 *v104; // rax
  __m128 *v105; // rcx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rax
  _QWORD *v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // rcx
  int v111; // eax
  _QWORD *v112; // rcx
  __int64 v113; // rbx
  __m128i *v114; // r15
  __m128 *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rbx
  unsigned int v118; // eax
  __int64 v119; // rdx
  int v120; // eax
  __m128 *v121; // rdx
  unsigned __int64 v122; // rdi
  __m128 v123; // xmm0
  __int64 v124; // rax
  __int64 v125; // rbx
  unsigned int v126; // esi
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rbx
  _QWORD *v131; // rdx
  unsigned int v132; // eax
  __int64 v133; // rcx
  int v134; // eax
  __int64 *v135; // rcx
  __int64 v136; // rdx
  unsigned int v137; // ecx
  unsigned int v138; // eax
  unsigned int v139; // r15d
  unsigned int *v140; // rax
  unsigned __int64 v141; // rbx
  const __m128i *v142; // rcx
  __int64 v143; // rax
  int v144; // edi
  unsigned int v145; // edx
  __int64 *v146; // rsi
  __int64 v147; // rdx
  const __m128i *v148; // r8
  __int64 *j; // rax
  __int64 v150; // rdx
  _QWORD *v151; // rax
  unsigned int v152; // edx
  __int64 v153; // rcx
  int v154; // edx
  unsigned __int64 *v155; // rcx
  __int64 v156; // rax
  unsigned int v157; // edx
  __m128i *v158; // r15
  size_t v159; // rbx
  __int64 v160; // r8
  int v161; // edi
  __m128i v162; // xmm0
  __int64 v163; // rax
  __m128i *v164; // r9
  __m128i *v165; // rax
  __m128i *v166; // rsi
  __int64 v167; // rdx
  unsigned int v168; // ebx
  unsigned int v169; // ecx
  unsigned int *v170; // rax
  unsigned int v171; // r10d
  unsigned int v172; // edx
  __int64 v173; // rax
  _QWORD *v174; // rdx
  unsigned int v175; // r10d
  __m128i *v176; // r8
  _QWORD *v177; // r11
  __int64 v178; // rdi
  _QWORD *v179; // rsi
  _QWORD *v180; // rax
  __m128 *v181; // rdx
  unsigned __int64 v182; // r11
  unsigned __int64 v183; // r11
  unsigned __int64 v184; // r11
  __int64 *v185; // rbx
  __int64 v186; // rsi
  __int64 v187; // rdi
  __int64 v188; // rsi
  __int64 v189; // rdi
  __m128 *v190; // rax
  int v191; // r10d
  __m128i *v192; // r8
  unsigned __int64 v193; // rsi
  const __m128i *v194; // rax
  __m128i *v195; // r11
  __int64 v196; // rdx
  __m128 *v197; // rsi
  unsigned __int64 v198; // rdi
  __m128i *v199; // rdx
  __m128i v200; // xmm0
  __m128i *v201; // rax
  __m128i *v202; // r8
  __m128i *v203; // rcx
  unsigned __int64 v204; // rsi
  const __m128i *k; // rax
  __int64 v206; // rdx
  __m128i *v207; // rsi
  unsigned __int64 v208; // rdi
  __m128i *v209; // rdx
  __m128i v210; // xmm0
  __m128i *v211; // rax
  __m128i v212; // xmm0
  __m128i *v213; // rbx
  __int64 v214; // rbx
  _QWORD *v215; // rcx
  _QWORD *v216; // rax
  __int64 v217; // rax
  unsigned int v218; // edi
  unsigned int v219; // ecx
  unsigned int *v220; // rax
  __int64 v221; // rcx
  _QWORD *v222; // r13
  __int64 v223; // rax
  __int64 v224; // rax
  unsigned int v225; // ecx
  _QWORD *v226; // rax
  _QWORD *v227; // rax
  __m128i *v228; // rax
  __m128i *v229; // r9
  unsigned __int64 v230; // rcx
  const __m128i *v231; // rax
  __m128i *v232; // r10
  __int64 v233; // rdx
  __m128i *v234; // rsi
  unsigned __int64 v235; // rcx
  __m128i *v236; // rdx
  __m128i v237; // xmm0
  int v238; // ecx
  unsigned int v239; // ebx
  unsigned int v240; // ecx
  unsigned int *v241; // rdx
  int v242; // [rsp-8h] [rbp-118h]
  int v243; // [rsp+0h] [rbp-110h]
  int v244; // [rsp+0h] [rbp-110h]
  __m128 *v245; // [rsp+8h] [rbp-108h]
  int v246; // [rsp+8h] [rbp-108h]
  __m128i *v247; // [rsp+10h] [rbp-100h]
  int v248; // [rsp+10h] [rbp-100h]
  __m128 *v249; // [rsp+18h] [rbp-F8h]
  int v250; // [rsp+18h] [rbp-F8h]
  unsigned int v251; // [rsp+18h] [rbp-F8h]
  __m128i *v252; // [rsp+20h] [rbp-F0h]
  int v253; // [rsp+20h] [rbp-F0h]
  char v254; // [rsp+28h] [rbp-E8h]
  unsigned int v255; // [rsp+28h] [rbp-E8h]
  int v256; // [rsp+28h] [rbp-E8h]
  unsigned int v257; // [rsp+28h] [rbp-E8h]
  _QWORD *v258; // [rsp+28h] [rbp-E8h]
  __int64 *v259; // [rsp+28h] [rbp-E8h]
  unsigned int v260; // [rsp+28h] [rbp-E8h]
  size_t v261; // [rsp+28h] [rbp-E8h]
  int v262; // [rsp+28h] [rbp-E8h]
  __m128i *v263; // [rsp+28h] [rbp-E8h]
  int v264; // [rsp+30h] [rbp-E0h]
  int v265; // [rsp+30h] [rbp-E0h]
  int v266; // [rsp+34h] [rbp-DCh]
  __m128i **v267; // [rsp+38h] [rbp-D8h]
  int v268; // [rsp+38h] [rbp-D8h]
  __int64 *v269; // [rsp+40h] [rbp-D0h]
  int v270; // [rsp+40h] [rbp-D0h]
  _QWORD *v271; // [rsp+48h] [rbp-C8h]
  void *v272; // [rsp+48h] [rbp-C8h]
  char *v273; // [rsp+50h] [rbp-C0h]
  __int64 v274; // [rsp+58h] [rbp-B8h]
  unsigned int v275; // [rsp+60h] [rbp-B0h]
  int v276; // [rsp+64h] [rbp-ACh]
  __int64 **v277; // [rsp+68h] [rbp-A8h]
  int v278[2]; // [rsp+70h] [rbp-A0h] BYREF
  __m128i v279; // [rsp+78h] [rbp-98h] BYREF
  __int64 v280; // [rsp+88h] [rbp-88h]
  char *v281; // [rsp+90h] [rbp-80h]
  unsigned __int64 v282; // [rsp+98h] [rbp-78h] BYREF
  int v283; // [rsp+A0h] [rbp-70h]
  char *v284; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v285; // [rsp+B0h] [rbp-60h]
  __int64 v286; // [rsp+B8h] [rbp-58h]
  __int64 v287[10]; // [rsp+C0h] [rbp-50h] BYREF

  v277 = a1;
  v271 = a3;
  v279.m128i_i64[1] = a2;
  v274 = a4;
  LODWORD(v267) = a5;
  v21 = (__m128i *)sub_186B270(0x80u);
  v284 = nullptr;
  *v21 = 0;
  v22 = v21;
  v21[4] = 0;
  v21[1] = 0;
  v21[2] = 0;
  v21[3] = 0;
  v21[5] = 0;
  v21[6] = 0;
  v21[7] = 0;
  v23 = *a1;
  v24 = (*a1)[9];
  v279.m128i_i64[0] = **a1;
  v285 = v279.m128i_i64[0];
  if ( !v24 )
    return (char *)sub_186B220(v22);
  v25 = v23;
  for ( i = *(_BYTE *)(v24 + 3) >> 6; !i; i = *(_BYTE *)(v24 + 3) >> 6 )
    v24 = *(_QWORD *)(v24 + 16);
  if ( i == 1 )
    v276 = *(_DWORD *)(v24 + 4) + 1;
  else
    v276 = i == 2 ? *(_DWORD *)(v24 + 4) - 1 : *(_DWORD *)(v24 + 4);
  if ( !v276 )
    return (char *)sub_186B220(v22);
  v27 = nullptr;
  v28 = 0;
  v29 = v279.m128i_i64[0];
  v280 = 0;
  LOBYTE(v264) = 0;
  v275 = 8;
  while ( 2 )
  {
    v37 = *((_BYTE *)v25 + 123);
    if ( (v37 & 0x20) != 0 )
    {
      v38 = *(_QWORD *)(v29 + 864);
      goto LABEL_21;
    }
    v60 = v25[9];
    v61 = v25;
    v62 = 17;
    while ( 1 )
    {
      if ( *(char *)(v60 + 3) < 0 )
      {
        if ( *(_BYTE *)(v60 + 3) >> 6 != 2 )
        {
          v25 = v61;
          v63 = (__int64 *)(*(_QWORD *)(v60 + 16) + v280);
          goto LABEL_47;
        }
        goto LABEL_49;
      }
      if ( v28 == *(_DWORD *)(v60 + 4) )
        break;
LABEL_49:
      v60 = *(_QWORD *)(v60 + 16);
      if ( !--v62 )
      {
        sub_233F80((__int64 *)(v29 + 616), (_DWORD *)v61 + 18);
        v63 = (__int64 *)(*(_QWORD *)(v61[9] + 16) + v280);
        v25 = *v277;
        v37 = *((_BYTE *)*v277 + 123);
        goto LABEL_47;
      }
    }
    v25 = v61;
    v63 = (__int64 *)(v60 + 8);
LABEL_47:
    v38 = *v63;
LABEL_21:
    if ( (v37 & 0x10) == 0 )
      goto LABEL_11;
    v39 = v25[13];
    v40 = 17;
    while ( 2 )
    {
      if ( *(char *)(v39 + 3) < 0 )
      {
        if ( *(_BYTE *)(v39 + 3) >> 6 == 2 )
          goto LABEL_25;
        v30 = (char **)(*(_QWORD *)(v39 + 16) + v280);
LABEL_10:
        v31 = *v30;
        if ( *v30 )
          goto LABEL_28;
        goto LABEL_11;
      }
      if ( v28 == *(_DWORD *)(v39 + 4) )
      {
        v30 = (char **)(v39 + 8);
        goto LABEL_10;
      }
LABEL_25:
      v39 = *(_QWORD *)(v39 + 16);
      if ( --v40 )
        continue;
      break;
    }
    v41 = v25;
    v42 = (_QWORD *)(*v25 + 672);
    v282 = *v25;
    sub_236900(v42, v25 + 13);
    v31 = *(char **)(*(_QWORD *)(v41[13] + 16) + v280);
    if ( v31 && (*((_BYTE *)*v277 + 123) & 0x10) != 0 )
    {
LABEL_28:
      if ( !v27 )
      {
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v282 = (unsigned __int64)v31;
        v222 = (_QWORD *)sub_186B270(0x18u);
        *v222 = 2;
        v31 = (char *)v282;
        v53 = 1;
        v27 = v222 + 1;
        v52 = v27;
        goto LABEL_68;
      }
      v43 = *((unsigned int *)v27 - 1);
      v282 = (unsigned __int64)v27;
      v44 = (unsigned __int64)&v27[v43];
      if ( (unsigned __int64)v27 < v44 )
      {
        do
        {
          while ( 1 )
          {
            v45 = *(_QWORD *)v282;
            if ( *(_QWORD *)v282 )
            {
              v46 = (*(_DWORD *)(v45 + 8))-- == 1;
              if ( v46 )
                break;
            }
            v282 += 8LL;
            if ( v282 >= v44 )
              goto LABEL_35;
          }
          v281 = v31;
          sub_15D7BC0(v279.m128i_i64[0], v45);
          v282 += 8LL;
          v31 = v281;
        }
        while ( v282 < v44 );
      }
LABEL_35:
      *((_DWORD *)v27 - 1) = 0;
      if ( v38 )
      {
        ++*(_DWORD *)(v38 + 8);
        v47 = *((_DWORD *)v27 - 1);
        if ( *((_DWORD *)v27 - 2) == v47 )
        {
          v48 = (3 * v47 + 1) >> 1;
          v49 = 8 * v48 + 8;
          if ( 8 * v47 + 8 < v49 && v47 < v48 )
          {
            v282 = (unsigned __int64)v31;
            v50 = (unsigned int *)sub_186B300(v27 - 1, v49);
            v51 = v50[1];
            v27 = v50 + 2;
            v31 = (char *)v282;
            *v50 = v48;
            LODWORD(v50) = v51;
            v52 = &v27[v51];
            v53 = (_DWORD)v50 + 1;
LABEL_68:
            *v52 = v38;
            *((_DWORD *)v27 - 1) = v53;
            if ( v284 )
              *((_DWORD *)v284 - 1) = 0;
            sub_15D6A80(v279.m128i_i64[0], v31, &v284);
            if ( !v284
              || (v71 = *((unsigned int *)v284 - 1), v281 = v284, v269 = v287, v273 = &v284[8 * v71], v273 == v284) )
            {
              v128 = *((unsigned int *)v27 - 1);
              goto LABEL_137;
            }
LABEL_72:
            v72 = *(_QWORD *)v281;
            v46 = *(_WORD *)(*(_QWORD *)v281 + 4LL) == 0;
            v282 = *(_QWORD *)v281;
            if ( v46 && !*(_DWORD *)(v72 + 24) )
            {
              v73 = *(_DWORD **)(*(_QWORD *)(v72 + 16) + 24LL);
              if ( !v73 || *v73 == -1 )
              {
                if ( (unsigned __int8)sub_15D2CB0(v279.m128i_i64[0], v282) )
                {
                  v141 = v282;
                  v142 = *(const __m128i **)v274;
                  v143 = *(unsigned int *)(v274 + 8);
                  v144 = *(_DWORD *)(v282 + 12);
                  v145 = v143 - 1;
                  v143 *= 16;
                  v146 = (__int64 *)(*(_QWORD *)v274 + v143);
                  v147 = 16LL * (v144 & v145);
                  v148 = (const __m128i *)(*(_QWORD *)v274 + v147);
                  if ( v147 != v143 )
                  {
                    for ( j = (__int64 *)(*(_QWORD *)v274 + v147); v146 != j; j += 2 )
                    {
                      v150 = *j;
                      if ( (unsigned __int64)*j > 1 )
                      {
                        if ( *(_DWORD *)(v150 + 12) == v144 && v282 == v150 )
                        {
LABEL_303:
                          v282 = v141;
                          goto LABEL_304;
                        }
                      }
                      else if ( !v150 )
                      {
LABEL_164:
                        v282 = v141;
                        goto LABEL_165;
                      }
                    }
                  }
                  if ( v142 != v148 )
                  {
                    v141 = v282;
                    while ( 1 )
                    {
                      v217 = v142->m128i_i64[0];
                      if ( v142->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v217 + 12) == v144 && v282 == v217 )
                          goto LABEL_303;
                      }
                      else if ( !v217 )
                      {
                        goto LABEL_164;
                      }
                      if ( v148 == ++v142 )
                        goto LABEL_164;
                    }
                  }
LABEL_165:
                  v151 = (_QWORD *)*v271;
                  if ( *v271 )
                  {
                    v152 = *((_DWORD *)v151 - 1);
                    if ( v152 == *((_DWORD *)v151 - 2) )
                    {
                      v239 = (3 * v152 + 1) >> 1;
                      v240 = 8 * v239 + 8;
                      if ( 8 * v152 + 8 >= v240 || v152 >= v239 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_1824A6(v287, "Overflow encountered when expanding vector", v12);
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v287);
                        sub_233E40((__int64)v287);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v241 = (unsigned int *)sub_186B300(v151 - 1, v240);
                      v151 = v241 + 2;
                      *v241 = v239;
                      *v271 = v241 + 2;
                      LODWORD(v241) = v241[1];
                      v155 = &v151[(unsigned int)v241];
                      v154 = (_DWORD)v241 + 1;
                    }
                    else
                    {
                      v153 = v152;
                      v154 = v152 + 1;
                      v155 = &v151[v153];
                    }
                  }
                  else
                  {
                    v226 = (_QWORD *)sub_186B270(0x18u);
                    *v226 = 2;
                    v151 = v226 + 1;
                    v154 = 1;
                    v155 = v151;
                    *v271 = v151;
                  }
                  *v155 = v282;
                  *((_DWORD *)v151 - 1) = v154;
                  v156 = *(unsigned int *)(v274 + 8);
                  v157 = 4 * (*(_DWORD *)(v274 + 12) + *(_DWORD *)(v274 + 16));
                  v278[0] = 2 * v156;
                  if ( 3 * (int)v156 < v157 )
                  {
                    v159 = 16LL * (unsigned int)v278[0];
                    v228 = (__m128i *)sub_186B270(v159);
                    v158 = v228;
                    v229 = &v228[v159 / 0x10];
                    if ( v278[0] )
                    {
                      if ( (v159 & 0x10) == 0 || (*v228 = 0, ++v228, v229 != v228) )
                      {
                        v230 = v282;
                        do
                        {
                          *v228 = 0;
                          v228 += 2;
                          v228[-1] = 0;
                        }
                        while ( v229 != v228 );
                        v282 = v230;
                      }
                    }
                    v160 = (__int64)v229;
                    v231 = *(const __m128i **)v274;
                    v256 = v278[0] - 1;
                    v232 = (__m128i *)(*(_QWORD *)v274 + 16LL * *(unsigned int *)(v274 + 8));
                    if ( *(__m128i **)v274 != v232 )
                    {
                      do
                      {
                        if ( v231->m128i_i64[0] > 1uLL )
                        {
                          v233 = 16LL * (*(_DWORD *)(v231->m128i_i64[0] + 12) & (unsigned int)v256);
                          v234 = &v158[(unsigned __int64)v233 / 0x10];
                          if ( v159 == v233 )
                          {
LABEL_329:
                            if ( v158 == v234 )
                            {
LABEL_347:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v235 = v282;
                            v236 = v158;
                            while ( v236->m128i_i64[0] )
                            {
                              if ( v234 == ++v236 )
                                goto LABEL_347;
                            }
                          }
                          else
                          {
                            v235 = v282;
                            v236 = &v158[(unsigned __int64)v233 / 0x10];
                            while ( v236->m128i_i64[0] )
                            {
                              if ( v229 == ++v236 )
                                goto LABEL_329;
                            }
                          }
                          v237 = _mm_loadu_si128(v231);
                          v282 = v235;
                          *v236 = v237;
                        }
                        ++v231;
                      }
                      while ( v232 != v231 );
                      v232 = *(__m128i **)v274;
                    }
                    if ( v232 )
                    {
                      v252 = v229;
                      sub_186B220(v232);
                      v160 = (__int64)v252;
                    }
                    v238 = v278[0];
                    *(_QWORD *)v274 = v158;
                    *(_DWORD *)(v274 + 8) = v238;
                    *(_DWORD *)(v274 + 16) = 0;
                  }
                  else
                  {
                    v158 = *(__m128i **)v274;
                    v256 = v156 - 1;
                    v159 = 16 * v156;
                    v160 = *(_QWORD *)v274 + 16 * v156;
                  }
                  v161 = *(_DWORD *)(v282 + 12);
                  v162 = _mm_unpacklo_epi64((__m128i)v282, (__m128i)v282);
                  v163 = 16LL * (v161 & (unsigned int)v256);
                  v164 = &v158[(unsigned __int64)v163 / 0x10];
                  if ( v163 == v159 )
                  {
                    v166 = nullptr;
LABEL_295:
                    if ( v164 == v158 )
                    {
LABEL_341:
                      sub_1872CE0("");
                      sub_1873130(114, 405);
                    }
                    while ( 1 )
                    {
                      v223 = v158->m128i_i64[0];
                      if ( v158->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v223 + 12) == v161 && v282 == v223 )
                        {
                          *v158 = v162;
                          goto LABEL_304;
                        }
                      }
                      else
                      {
                        if ( !v223 )
                        {
                          if ( v166 )
                            goto LABEL_343;
                          v166 = v158;
                          goto LABEL_344;
                        }
                        v166 = v158;
                      }
                      if ( v164 == ++v158 )
                        goto LABEL_341;
                    }
                  }
                  v165 = &v158[(unsigned __int64)v163 / 0x10];
                  v166 = nullptr;
                  while ( 1 )
                  {
                    v167 = v165->m128i_i64[0];
                    if ( v165->m128i_i64[0] > 1uLL )
                    {
                      if ( *(_DWORD *)(v167 + 12) == v161 && v282 == v167 )
                      {
                        *v165 = v162;
                        goto LABEL_304;
                      }
                    }
                    else
                    {
                      if ( !v167 )
                      {
                        if ( v166 )
LABEL_343:
                          --*(_DWORD *)(v274 + 16);
                        else
                          v166 = v165;
LABEL_344:
                        *v166 = v162;
                        ++*(_DWORD *)(v274 + 12);
LABEL_304:
                        v224 = sub_15E1A70(v279.m128i_i32[0]);
                        v125 = v224;
                        if ( v224 )
                          ++*(_DWORD *)(v224 + 8);
                        v126 = *((_DWORD *)v27 - 1);
                        if ( v126 == *((_DWORD *)v27 - 2) )
                        {
                          v225 = (3 * v126 + 1) >> 1;
                          v138 = 8 * v225 + 8;
                          v139 = v225;
                          if ( 8 * v126 + 8 >= v138 || v126 >= v225 )
                          {
                            v9 = (char **)__cxa_allocate_exception(0x28u);
                            sub_1824A6(v287, "Overflow encountered when expanding vector", v10);
                            *v9 = (char *)off_1C63128;
                            sub_2333C0(v9 + 1, v287);
                            sub_233E40((__int64)v287);
                            __cxa_throw(
                              v9,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          goto LABEL_155;
                        }
                        goto LABEL_136;
                      }
                      v166 = v165;
                    }
                    if ( ++v165 == (__m128i *)v160 )
                      goto LABEL_295;
                  }
                }
              }
            }
            v74 = v282;
            v75 = *(_DWORD *)(v282 + 12);
            v76 = 16LL * v275;
            v77 = &v22[v76 / 0x10];
            v78 = 16LL * ((v275 - 1) & v75);
            v79 = &v22[(unsigned __int64)v78 / 0x10];
            v80 = &v22[(unsigned __int64)v78 / 0x10];
            if ( v78 == v76 )
            {
LABEL_145:
              if ( v79 != v22 )
              {
                v74 = v282;
                v80 = v22;
                while ( 1 )
                {
                  v136 = v80->m128i_i64[0];
                  if ( v80->m128i_i64[0] > 1uLL )
                  {
                    if ( *(_DWORD *)(v136 + 12) == v75 && v282 == v136 )
                      goto LABEL_132;
                  }
                  else if ( !v136 )
                  {
                    goto LABEL_83;
                  }
                  if ( v79 == ++v80 )
                    goto LABEL_83;
                }
              }
LABEL_84:
              *(_QWORD *)v278 = *(_QWORD *)(v279.m128i_i64[0] + 840);
              sub_180C5A0(v269, 0);
              v82 = sub_15E3D10(
                      v279.m128i_i32[0],
                      (int)v269,
                      (int)&qword_18D6CD0,
                      0,
                      0,
                      v278[0],
                      1,
                      v242,
                      v243,
                      (int)v245,
                      (int)v247,
                      (int)v249,
                      (int)v252,
                      v275 - 1,
                      v264,
                      (int)v267,
                      (int)v269,
                      (int)v271,
                      (int)v273,
                      v274,
                      v275,
                      (int)v277,
                      v278[0],
                      v279.m128i_i32[0],
                      v279.m128i_i32[2],
                      v280,
                      (int)v281,
                      v282,
                      v283,
                      v284,
                      v285,
                      v286);
              *(_QWORD *)v278 = sub_15DC610(
                                  v279.m128i_i32[0],
                                  v82,
                                  0,
                                  0,
                                  v83,
                                  v84,
                                  v244,
                                  v246,
                                  v248,
                                  v250,
                                  v253,
                                  v254,
                                  v265,
                                  v268,
                                  v270,
                                  v272);
              v85 = v255;
              v86 = 2 * v275;
              if ( 3 * v275 < 4 * (v266 + v264) )
              {
                v275 *= 2;
                v76 = 16LL * v86;
                v201 = (__m128i *)sub_186B270(v76);
                v202 = v201;
                v203 = &v201[v76 / 0x10];
                if ( v275 )
                {
                  if ( (v76 & 0x10) == 0 || (*v201 = 0, ++v201, v201 != v203) )
                  {
                    v204 = v282;
                    do
                    {
                      *v201 = 0;
                      v201 += 2;
                      v201[-1] = 0;
                    }
                    while ( v201 != v203 );
                    v282 = v204;
                  }
                }
                v85 = v275 - 1;
                for ( k = v22; v77 != k; *v209 = v210 )
                {
                  while ( k->m128i_i64[0] <= 1uLL )
                  {
                    if ( v77 == ++k )
                      goto LABEL_237;
                  }
                  v206 = 16LL * (*(_DWORD *)(k->m128i_i64[0] + 12) & v85);
                  v207 = &v202[(unsigned __int64)v206 / 0x10];
                  if ( v76 == v206 )
                  {
LABEL_240:
                    if ( v202 == v207 )
                    {
LABEL_259:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v208 = v282;
                    v209 = v202;
                    while ( v209->m128i_i64[0] )
                    {
                      if ( v207 == ++v209 )
                        goto LABEL_259;
                    }
                  }
                  else
                  {
                    v208 = v282;
                    v209 = &v202[(unsigned __int64)v206 / 0x10];
                    while ( v209->m128i_i64[0] )
                    {
                      if ( v203 == ++v209 )
                        goto LABEL_240;
                    }
                  }
                  v210 = _mm_loadu_si128(k++);
                  v282 = v208;
                }
LABEL_237:
                if ( v22 )
                {
                  v252 = v203;
                  v263 = v202;
                  sub_186B220(v22);
                  v203 = v252;
                  v202 = v263;
                  v85 = v275 - 1;
                }
                v77 = v203;
                v22 = v202;
              }
              v87 = *(_DWORD *)(v282 + 12);
              v88 = _mm_loadh_ps((const double *)v278);
              v89 = 16LL * (v87 & v85);
              v90 = (__m128 *)&v22[(unsigned __int64)v89 / 0x10];
              if ( v89 == v76 )
              {
                v92 = nullptr;
LABEL_93:
                if ( v22 == (__m128i *)v90 )
                {
LABEL_101:
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                v91 = (__m128 *)v22;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v94 = v91->m128_u64[0];
                    if ( v91->m128_u64[0] <= 1 )
                      break;
                    if ( *(_DWORD *)(v94 + 12) == v87 && v282 == v94 )
                    {
                      *v91 = v88;
                      goto LABEL_102;
                    }
                    if ( v90 == ++v91 )
                      goto LABEL_101;
                  }
                  if ( !v94 )
                    break;
                  v92 = v91++;
                  if ( v90 == v91 )
                    goto LABEL_101;
                }
                if ( v92 )
                  goto LABEL_256;
LABEL_278:
                v92 = v91;
              }
              else
              {
                v91 = (__m128 *)&v22[(unsigned __int64)v89 / 0x10];
                v92 = nullptr;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v93 = v91->m128_u64[0];
                    if ( v91->m128_u64[0] <= 1 )
                      break;
                    if ( *(_DWORD *)(v93 + 12) == v87 && v282 == v93 )
                    {
                      *v91 = v88;
                      goto LABEL_102;
                    }
                    if ( ++v91 == (__m128 *)v77 )
                      goto LABEL_93;
                  }
                  if ( !v93 )
                    break;
                  v92 = v91++;
                  if ( v91 == (__m128 *)v77 )
                    goto LABEL_93;
                }
                if ( !v92 )
                  goto LABEL_278;
              }
LABEL_256:
              *v92 = v88;
              LOBYTE(v264) = v264 + 1;
LABEL_102:
              v95 = *(_DWORD *)(v274 + 8);
              if ( 3 * v95 < 4 * (*(_DWORD *)(v274 + 12) + *(_DWORD *)(v274 + 16)) )
              {
                LODWORD(v252) = 2 * v95;
                v261 = 32LL * v95;
                v190 = (__m128 *)sub_186B270(v261);
                v98 = v261;
                v191 = (int)v252;
                v96 = v190;
                v192 = (__m128i *)&v190[v261 / 0x10];
                if ( (_DWORD)v252 )
                {
                  if ( (v261 & 0x10) == 0 || (*v190 = 0, ++v190, v190 != (__m128 *)v192) )
                  {
                    v193 = v282;
                    do
                    {
                      *v190 = 0;
                      v190 += 2;
                      v190[-1] = 0;
                    }
                    while ( v190 != (__m128 *)v192 );
                    v282 = v193;
                  }
                }
                v97 = (_DWORD)v252 - 1;
                v99 = (__m128 *)v192;
                v194 = *(const __m128i **)v274;
                v195 = (__m128i *)(*(_QWORD *)v274 + 16LL * *(unsigned int *)(v274 + 8));
                if ( *(__m128i **)v274 != v195 )
                {
                  do
                  {
                    while ( v194->m128i_i64[0] <= 1uLL )
                    {
                      if ( v195 == ++v194 )
                        goto LABEL_214;
                    }
                    v196 = 16LL * (*(_DWORD *)(v194->m128i_i64[0] + 12) & (unsigned int)v97);
                    v197 = &v96[(unsigned __int64)v196 / 0x10];
                    if ( v261 == v196 )
                    {
LABEL_218:
                      if ( v96 == v197 )
                      {
LABEL_260:
                        sub_1872CE0("");
                        sub_1873130(114, 213);
                      }
                      v198 = v282;
                      v199 = (__m128i *)v96;
                      while ( v199->m128i_i64[0] )
                      {
                        if ( v197 == (__m128 *)++v199 )
                          goto LABEL_260;
                      }
                    }
                    else
                    {
                      v198 = v282;
                      v199 = (__m128i *)&v96[(unsigned __int64)v196 / 0x10];
                      while ( v199->m128i_i64[0] )
                      {
                        if ( v192 == ++v199 )
                          goto LABEL_218;
                      }
                    }
                    v200 = _mm_loadu_si128(v194++);
                    v282 = v198;
                    *v199 = v200;
                  }
                  while ( v195 != v194 );
LABEL_214:
                  v195 = *(__m128i **)v274;
                }
                if ( v195 )
                {
                  LODWORD(v249) = (_DWORD)v252;
                  v252 = (__m128i *)v261;
                  v262 = v191 - 1;
                  sub_186B220(v195);
                  v191 = (int)v249;
                  v98 = (__int64)v252;
                  v97 = v262;
                }
                *(_QWORD *)v274 = v96;
                *(_DWORD *)(v274 + 8) = v191;
                *(_DWORD *)(v274 + 16) = 0;
              }
              else
              {
                v96 = *(__m128 **)v274;
                v97 = v95 - 1;
                v98 = 16LL * v95;
                v99 = (__m128 *)(*(_QWORD *)v274 + v98);
              }
              v100 = *(_DWORD *)(*(_QWORD *)v278 + 12LL);
              v101 = _mm_loadh_ps((const double *)&v282);
              v102 = 16LL * (v100 & (unsigned int)v97);
              v103 = &v96[(unsigned __int64)v102 / 0x10];
              if ( v102 == v98 )
              {
                v105 = nullptr;
LABEL_112:
                if ( v103 == v96 )
                {
LABEL_120:
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v107 = v96->m128_u64[0];
                    if ( v96->m128_u64[0] <= 1 )
                      break;
                    if ( *(_DWORD *)(v107 + 12) == v100 && *(_QWORD *)v278 == v107 )
                    {
                      *v96 = v101;
                      goto LABEL_121;
                    }
                    if ( v103 == ++v96 )
                      goto LABEL_120;
                  }
                  if ( !v107 )
                    break;
                  v105 = v96++;
                  if ( v103 == v96 )
                    goto LABEL_120;
                }
                if ( v105 )
                  goto LABEL_252;
                v105 = v96;
LABEL_253:
                *v105 = v101;
                ++*(_DWORD *)(v274 + 12);
                v108 = (_QWORD *)*v271;
                if ( *v271 )
                  goto LABEL_122;
              }
              else
              {
                v104 = &v96[(unsigned __int64)v102 / 0x10];
                v105 = nullptr;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v106 = v104->m128_u64[0];
                    if ( v104->m128_u64[0] > 1 )
                      break;
                    if ( !v106 )
                    {
                      if ( v105 )
LABEL_252:
                        --*(_DWORD *)(v274 + 16);
                      else
                        v105 = v104;
                      goto LABEL_253;
                    }
                    v105 = v104++;
                    if ( v104 == v99 )
                      goto LABEL_112;
                  }
                  if ( *(_DWORD *)(v106 + 12) == v100 && *(_QWORD *)v278 == v106 )
                    break;
                  if ( ++v104 == v99 )
                    goto LABEL_112;
                }
                *v104 = v101;
LABEL_121:
                v108 = (_QWORD *)*v271;
                if ( *v271 )
                {
LABEL_122:
                  v109 = *((_DWORD *)v108 - 1);
                  if ( v109 == *((_DWORD *)v108 - 2) )
                  {
                    v168 = (3 * v109 + 1) >> 1;
                    v169 = 8 * v168 + 8;
                    if ( 8 * v109 + 8 >= v169 || v109 >= v168 )
                    {
                      v15 = (char **)__cxa_allocate_exception(0x28u);
                      sub_1824A6(v269, "Overflow encountered when expanding vector", v16);
                      *v15 = (char *)off_1C63128;
                      sub_2333C0(v15 + 1, v269);
                      sub_233E40((__int64)v269);
                      __cxa_throw(
                        v15,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v170 = (unsigned int *)sub_186B300(v108 - 1, v169);
                    v108 = v170 + 2;
                    *v170 = v168;
                    *v271 = v170 + 2;
                    LODWORD(v170) = v170[1];
                    v112 = &v108[(unsigned int)v170];
                    v111 = (_DWORD)v170 + 1;
                  }
                  else
                  {
                    v110 = v109;
                    v111 = v109 + 1;
                    v112 = &v108[v110];
                  }
LABEL_124:
                  v113 = *(_QWORD *)v278;
                  *v112 = *(_QWORD *)v278;
                  *((_DWORD *)v108 - 1) = v111;
                  v114 = *v267;
                  if ( *v267 )
                  {
                    v115 = (__m128 *)v114[4].m128i_i64[1];
                    v282 = v114[2].m128i_u64[0];
                    v116 = v113;
                    goto LABEL_126;
                  }
                  v211 = (__m128i *)sub_186B270(0x50u);
                  v212 = _mm_loadl_epi64(&v279);
                  v114 = v211;
                  v211[1].m128i_i8[8] = 1;
                  v211[1].m128i_i64[0] = 0;
                  strcpy(&v211[3].m128i_i8[8], "solver2tactic");
                  v211->m128i_i64[0] = (__int64)&off_1C60CE8;
                  v211[3].m128i_i64[0] = 13;
                  v213 = *v267;
                  v211[4].m128i_i64[1] = 0;
                  v211->m128i_i32[2] = 1;
                  v211[2] = _mm_unpacklo_epi64(v212, (__m128i)(unsigned __int64)&v211[3].m128i_u64[1]);
                  if ( !v213 || (v46 = v213->m128i_i32[2] == 1, --v213->m128i_i32[2], !v46) )
                  {
                    *v267 = v211;
                    v214 = *(_QWORD *)(*(_QWORD *)v278 + 16LL);
                    if ( v214 )
                      ++*(_DWORD *)(v214 + 8);
                    v282 = v279.m128i_i64[0];
                    goto LABEL_250;
                  }
                  (*(void (__fastcall **)(__m128i *))v213->m128i_i64[0])(v213);
                  sub_186B220(v213);
                  v115 = (__m128 *)v114[4].m128i_i64[1];
                  v282 = v114[2].m128i_u64[0];
                  *v267 = v114;
                  v116 = *(_QWORD *)v278;
LABEL_126:
                  v117 = *(_QWORD *)(v116 + 16);
                  if ( v117 )
                    ++*(_DWORD *)(v117 + 8);
                  if ( v115 )
                  {
                    v118 = v115[-1].m128_u32[3];
                    if ( v118 == v115[-1].m128_i32[2] )
                    {
                      v171 = (3 * v118 + 1) >> 1;
                      v172 = 40 * v171 + 8;
                      if ( 40 * v118 + 8 >= v172 || v118 >= v171 )
                      {
                        v7 = (char **)__cxa_allocate_exception(0x28u);
                        sub_1824A6(v269, "Overflow encountered when expanding vector", v8);
                        *v7 = (char *)off_1C63128;
                        sub_2333C0(v7 + 1, v269);
                        sub_233E40((__int64)v269);
                        __cxa_throw(
                          v7,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v257 = (3 * v118 + 1) >> 1;
                      v173 = sub_186B270(v172);
                      v174 = (_QWORD *)v114[4].m128i_i64[1];
                      v175 = v257;
                      v176 = (__m128i *)v173;
                      v115 = (__m128 *)(v173 + 8);
                      v177 = v174;
                      if ( v174 )
                      {
                        v178 = *((unsigned int *)v174 - 1);
                        *(_DWORD *)(v173 + 4) = v178;
                        v179 = &v174[5 * v178];
                        v180 = v174;
                        v181 = v115;
                        if ( v177 != v179 )
                        {
                          v258 = v177;
                          do
                          {
                            v182 = v180[1];
                            v180 += 5;
                            v181 = (__m128 *)((char *)v181 + 40);
                            v181[-2].m128_u64[0] = v182;
                            v183 = *(v180 - 5);
                            *(v180 - 5) = 0;
                            v181[-3].m128_u64[1] = v183;
                            v181[-1].m128_u64[0] = *(v180 - 2);
                            v184 = *(v180 - 3);
                            *(v180 - 3) = 0;
                            v181[-2].m128_u64[1] = v184;
                            v181[-1].m128_i32[2] = *((_DWORD *)v180 - 2);
                          }
                          while ( v179 != v180 );
                          v177 = v258;
                        }
                        if ( (_DWORD)v178 )
                        {
                          v185 = v177;
                          v251 = v175;
                          v247 = v176;
                          v259 = &v177[5 * v178];
                          v245 = v115;
                          do
                          {
                            while ( 1 )
                            {
                              v188 = v185[2];
                              if ( v188 )
                              {
                                v189 = v185[3];
                                v46 = (*(_DWORD *)(v188 + 8))-- == 1;
                                if ( v46 )
                                  sub_15D7BC0(v189, v188);
                              }
                              v186 = *v185;
                              if ( *v185 )
                              {
                                v187 = v185[1];
                                v46 = (*(_DWORD *)(v186 + 8))-- == 1;
                                if ( v46 )
                                  break;
                              }
                              v185 += 5;
                              if ( v185 == v259 )
                                goto LABEL_197;
                            }
                            sub_15D7BC0(v187, v186);
                            v185 += 5;
                          }
                          while ( v185 != v259 );
LABEL_197:
                          v175 = v251;
                          v176 = v247;
                          v115 = v245;
                          v177 = (_QWORD *)v114[4].m128i_i64[1];
                        }
                        v249 = v115;
                        v252 = v176;
                        v260 = v175;
                        sub_186B220(v177 - 1);
                        v176 = v252;
                        v115 = v249;
                        v175 = v260;
                        v121 = (__m128 *)((char *)v249 + 40 * v252->m128i_u32[1]);
                        v120 = v252->m128i_i32[1] + 1;
                      }
                      else
                      {
                        *(_DWORD *)(v173 + 4) = 0;
                        v121 = (__m128 *)(v173 + 8);
                        v120 = 1;
                      }
                      v114[4].m128i_i64[1] = (__int64)v115;
                      v176->m128i_i32[0] = v175;
                    }
                    else
                    {
                      v119 = v118;
                      v120 = v118 + 1;
                      v121 = (__m128 *)((char *)v115 + 40 * v119);
                    }
                  }
                  else
                  {
LABEL_250:
                    v215 = (_QWORD *)sub_186B270(0x58u);
                    *v215 = 2;
                    v120 = 1;
                    v115 = (__m128 *)(v215 + 1);
                    v114[4].m128i_i64[1] = (__int64)v115;
                    v121 = v115;
                  }
                  v122 = v282;
                  v121[1].m128_u64[0] = 0;
                  v123 = _mm_loadh_ps((const double *)&v282);
                  v121[2].m128_i32[0] = 0;
                  v121[1].m128_u64[1] = v122;
                  *v121 = v123;
                  v115[-1].m128_i32[3] = v120;
                  goto LABEL_133;
                }
              }
              v216 = (_QWORD *)sub_186B270(0x18u);
              *v216 = 2;
              v108 = v216 + 1;
              *v271 = v216 + 1;
              v112 = v216 + 1;
              v111 = 1;
              goto LABEL_124;
            }
            while ( 1 )
            {
              v81 = v80->m128i_i64[0];
              if ( v80->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v81 + 12) == v75 && v282 == v81 )
                {
LABEL_132:
                  *(_QWORD *)v278 = v80->m128i_i64[1];
LABEL_133:
                  v124 = sub_15E1A70(v279.m128i_i32[0]);
                  v125 = v124;
                  if ( v124 )
                    ++*(_DWORD *)(v124 + 8);
                  v126 = *((_DWORD *)v27 - 1);
                  if ( v126 == *((_DWORD *)v27 - 2) )
                  {
                    v137 = (3 * v126 + 1) >> 1;
                    v138 = 8 * v137 + 8;
                    v139 = v137;
                    if ( 8 * v126 + 8 >= v138 || v126 >= v137 )
                    {
                      v13 = (char **)__cxa_allocate_exception(0x28u);
                      sub_1824A6(v287, "Overflow encountered when expanding vector", v14);
                      *v13 = (char *)off_1C63128;
                      sub_2333C0(v13 + 1, v287);
                      sub_233E40((__int64)v287);
                      __cxa_throw(
                        v13,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
LABEL_155:
                    v140 = (unsigned int *)sub_186B300(v27 - 1, v138);
                    *v140 = v139;
                    v126 = v140[1];
                    v27 = v140 + 2;
                  }
LABEL_136:
                  v127 = v126;
                  v128 = v126 + 1;
                  v27[v127] = v125;
                  *((_DWORD *)v27 - 1) = v128;
                  v281 += 8;
                  if ( v273 == v281 )
                  {
LABEL_137:
                    v129 = sub_15EC240(v279.m128i_i64[0], v128);
                    v130 = v129;
                    if ( v129 )
                      *(_DWORD *)(v129 + 8) += 2;
                    v131 = *(_QWORD **)(v279.m128i_i64[1] + 8);
                    if ( v131 )
                    {
                      v132 = *((_DWORD *)v131 - 1);
                      if ( v132 == *((_DWORD *)v131 - 2) )
                      {
                        v218 = (3 * v132 + 1) >> 1;
                        v219 = 8 * v218 + 8;
                        if ( 8 * v132 + 8 >= v219 || v132 >= v218 )
                        {
                          v17 = (char **)__cxa_allocate_exception(0x28u);
                          sub_1824A6(v287, "Overflow encountered when expanding vector", v18);
                          *v17 = (char *)off_1C63128;
                          sub_2333C0(v17 + 1, v287);
                          sub_233E40((__int64)v287);
                          __cxa_throw(
                            v17,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v220 = (unsigned int *)sub_186B300(v131 - 1, v219);
                        v221 = v279.m128i_i64[1];
                        v131 = v220 + 2;
                        *v220 = v218;
                        *(_QWORD *)(v221 + 8) = v220 + 2;
                        LODWORD(v220) = v220[1];
                        v135 = &v131[(unsigned int)v220];
                        v134 = (_DWORD)v220 + 1;
                      }
                      else
                      {
                        v133 = v132;
                        v134 = v132 + 1;
                        v135 = &v131[v133];
                      }
                    }
                    else
                    {
                      v227 = (_QWORD *)sub_186B270(0x18u);
                      *v227 = 2;
                      v131 = v227 + 1;
                      *(_QWORD *)(v279.m128i_i64[1] + 8) = v227 + 1;
                      v135 = v227 + 1;
                      v134 = 1;
                    }
                    *v135 = v130;
                    *((_DWORD *)v131 - 1) = v134;
                    if ( v130 )
                    {
                      v46 = (*(_DWORD *)(v130 + 8))-- == 1;
                      if ( v46 )
                        sub_15D7BC0(v279.m128i_i64[0], v130);
                    }
                    goto LABEL_17;
                  }
                  goto LABEL_72;
                }
              }
              else if ( !v81 )
              {
LABEL_83:
                v282 = v74;
                goto LABEL_84;
              }
              if ( v77 == ++v80 )
                goto LABEL_145;
            }
          }
LABEL_359:
          v19 = (char **)__cxa_allocate_exception(0x28u);
          sub_1824A6(v287, "Overflow encountered when expanding vector", v20);
          *v19 = (char *)off_1C63128;
          sub_2333C0(v19 + 1, v287);
          sub_233E40((__int64)v287);
          __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
      else
      {
        if ( !*((_DWORD *)v27 - 2) )
          goto LABEL_359;
        v47 = 0;
      }
      v70 = v47;
      v53 = v47 + 1;
      v52 = &v27[v70];
      goto LABEL_68;
    }
LABEL_11:
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    v32 = *(_QWORD **)(v279.m128i_i64[1] + 8);
    if ( v32 )
    {
      v33 = *((_DWORD *)v32 - 1);
      if ( v33 == *((_DWORD *)v32 - 2) )
      {
        v54 = (3 * v33 + 1) >> 1;
        v55 = 8 * v54 + 8;
        v56 = v54;
        if ( 8 * v33 + 8 >= (unsigned int)v55 || v33 >= v54 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_1824A6(v287, "Overflow encountered when expanding vector", v6);
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v287);
          sub_233E40((__int64)v287);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v57 = (unsigned int *)sub_186B300(v32 - 1, v55);
        v58 = v57[1];
        v59 = v279.m128i_i64[1];
        v32 = v57 + 2;
        *v57 = v56;
        LODWORD(v57) = v58;
        *(_QWORD *)(v59 + 8) = v32;
        v36 = &v32[v58];
        v35 = (_DWORD)v57 + 1;
      }
      else
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = &v32[v34];
      }
    }
    else
    {
      v69 = (_QWORD *)sub_186B270(0x18u);
      v32 = v69 + 1;
      *v69 = 2;
      v36 = v69 + 1;
      *(_QWORD *)(v279.m128i_i64[1] + 8) = v69 + 1;
      v35 = 1;
    }
    *v36 = v38;
    *((_DWORD *)v32 - 1) = v35;
LABEL_17:
    ++v28;
    v280 += 8;
    if ( v28 != v276 )
    {
      v29 = **v277;
      v25 = *v277;
      continue;
    }
    break;
  }
  if ( v27 )
  {
    v64 = v27;
    if ( v27 < &v27[*((unsigned int *)v27 - 1)] )
    {
      v65 = v279.m128i_i64[0];
      v66 = (unsigned __int64)&v27[*((unsigned int *)v27 - 1)];
      do
      {
        while ( 1 )
        {
          v67 = *v64;
          if ( *v64 )
          {
            v46 = (*(_DWORD *)(v67 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v64 >= v66 )
            goto LABEL_58;
        }
        ++v64;
        sub_15D7BC0(v65, v67);
      }
      while ( (unsigned __int64)v64 < v66 );
    }
LABEL_58:
    sub_186B220(v27 - 1);
  }
  result = v284;
  if ( v284 )
    result = (char *)sub_186B220(v284 - 8);
  if ( v22 )
    return (char *)sub_186B220(v22);
  return result;
}

