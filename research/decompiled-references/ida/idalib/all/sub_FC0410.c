__m128i *__fastcall sub_FC0410(__m128i *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // edi
  size_t v5; // rbx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  char v11; // al
  size_t v12; // r8
  __int64 v13; // rbx
  char v14; // al
  void *v15; // rcx
  size_t v16; // r8
  void *v17; // r9
  size_t v18; // rbx
  __int64 v19; // r15
  const void *v20; // rdi
  int v21; // eax
  char *v22; // r14
  __int64 v23; // rbp
  int v24; // eax
  bool v25; // al
  size_t v26; // rbp
  __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // bp
  unsigned __int64 v34; // r8
  unsigned __int8 v35; // r15
  unsigned __int8 v36; // r10
  signed __int64 v37; // rbx
  __int64 v38; // r9
  signed __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __m128i *v42; // rdx
  unsigned __int8 v43; // r14
  unsigned __int64 v44; // rdi
  unsigned int v45; // eax
  __m128i *v46; // rcx
  __int32 v47; // esi
  unsigned __int64 v48; // rbp
  __m128i *v49; // rdx
  int v50; // ecx
  int v51; // eax
  unsigned int v52; // esi
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // edx
  unsigned __int32 v56; // edx
  __m128 v57; // xmm0
  unsigned __int32 v58; // eax
  __m128 v59; // xmm0
  size_t v60; // rbx
  _QWORD *m128i_i64; // r14
  char v62; // al
  __int64 v63; // r15
  size_t v64; // rbp
  size_t v65; // r12
  size_t v66; // r12
  char *v67; // rbx
  __int64 v68; // r14
  bool v69; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  void *v74; // rax
  void *v75; // rcx
  __m128i *v76; // rsi
  char v77; // al
  unsigned int v78; // edx
  char v79; // al
  unsigned int v80; // edx
  char v81; // al
  unsigned int v82; // edx
  __m128i si128; // xmm7
  __int32 v84; // edi
  unsigned int v85; // edx
  unsigned int v86; // edx
  __int32 v87; // edx
  char v88; // al
  __m128i *v89; // rax
  size_t v90; // rsi
  bool v91; // al
  char *v92; // rdi
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r12
  _DWORD *v98; // rax
  unsigned __int64 v99; // r11
  char *v100; // r14
  _DWORD *v101; // rax
  _DWORD *v102; // r12
  const __m128i *v103; // rdx
  int v104; // r8d
  int v105; // r9d
  unsigned __int64 v106; // r11
  __int64 v107; // rsi
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rax
  unsigned int v110; // eax
  int v111; // r15d
  __m128i *v112; // rbp
  __m128i *v113; // rcx
  __int32 v114; // edi
  unsigned int v115; // eax
  __m128i *v116; // rax
  char *v117; // rcx
  __m128i *v118; // rdi
  size_t v119; // r9
  __int64 v120; // rax
  void *v121; // rsi
  char v122; // al
  size_t v123; // rcx
  __m128i *v124; // rax
  size_t v125; // rcx
  __m128i *v126; // rdi
  __m128i *v127; // rbx
  __int64 v128; // rax
  void *v129; // rsi
  char v130; // al
  size_t v131; // rcx
  __int64 v132; // rbx
  __m128i v133; // xmm3
  __int64 v134; // rdx
  signed __int64 v135; // rbx
  __m128i *v136; // rdi
  unsigned __int64 v137; // r11
  unsigned int v138; // esi
  __int32 v139; // eax
  __m128i *v140; // rsi
  __int64 v141; // rdx
  __m128i *v142; // rdi
  __int64 v143; // rdx
  __m128i *v144; // rdi
  __int64 v145; // rdx
  _DWORD *v146; // r12
  __int64 v147; // rbp
  size_t v148; // r12
  char *v149; // rdi
  bool v150; // al
  __int32 v151; // eax
  __int32 v152; // eax
  __int32 v153; // eax
  unsigned int v154; // eax
  unsigned __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // r12
  _DWORD *v159; // rax
  unsigned __int64 v160; // r11
  const __m128i *v161; // r14
  _DWORD *v162; // rax
  _DWORD *v163; // r12
  const __m128i *v164; // rdx
  int v165; // r8d
  __int64 v166; // rsi
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rax
  unsigned int v169; // eax
  int v170; // r15d
  __m128i *v171; // rbp
  __m128i *v172; // rcx
  __int32 v173; // edi
  unsigned int v174; // eax
  __m128i v175; // xmm5
  char v176; // r10
  __int64 v177; // rdx
  signed __int64 v178; // rbx
  unsigned int v179; // esi
  _DWORD *v180; // r12
  size_t v181; // r11
  size_t v182; // rdx
  size_t v183; // rdx
  _QWORD *v184; // rax
  __m128i *v185; // rdi
  size_t v186; // r8
  size_t v187; // rsi
  __int64 v188; // rax
  size_t v189; // rax
  void *v190; // rsi
  char v191; // al
  __m128i *v192; // rax
  __m128i *v193; // rdi
  __m128i *v194; // rbp
  _QWORD *v195; // rsi
  __int64 v196; // rax
  _QWORD *v197; // rax
  void *v198; // rsi
  _BYTE *v199; // rdi
  __m128i *v200; // rax
  char *v201; // rdi
  __m128 v202; // xmm0
  __int64 v203; // rdx
  __m128i *v204; // rdi
  __m128i *v205; // rax
  size_t v206; // rdi
  __m128 v207; // xmm0
  __int64 v208; // rdx
  size_t v209; // rdx
  size_t v210; // rdx
  char *v211; // rax
  __m128 v212; // xmm0
  size_t v213; // rax
  __m128 v214; // xmm0
  size_t n; // [rsp+0h] [rbp-228h] BYREF
  __int64 v216; // [rsp+8h] [rbp-220h]
  void *v217; // [rsp+10h] [rbp-218h] BYREF
  size_t v218; // [rsp+18h] [rbp-210h] BYREF
  void *v219; // [rsp+20h] [rbp-208h]
  unsigned __int64 v220; // [rsp+28h] [rbp-200h]
  unsigned __int32 v221; // [rsp+34h] [rbp-1F4h]
  unsigned __int32 v222; // [rsp+38h] [rbp-1F0h]
  unsigned __int32 v223; // [rsp+3Ch] [rbp-1ECh]
  unsigned __int32 v224; // [rsp+40h] [rbp-1E8h]
  unsigned __int32 v225; // [rsp+44h] [rbp-1E4h]
  void *src; // [rsp+48h] [rbp-1E0h]
  signed __int64 v227; // [rsp+50h] [rbp-1D8h]
  __int64 v228; // [rsp+58h] [rbp-1D0h]
  double v229[2]; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v230; // [rsp+70h] [rbp-1B8h]
  __int64 v231; // [rsp+78h] [rbp-1B0h]
  __int64 v232; // [rsp+80h] [rbp-1A8h]
  unsigned int v233; // [rsp+88h] [rbp-1A0h]
  unsigned int v234; // [rsp+8Ch] [rbp-19Ch]
  unsigned int v235; // [rsp+90h] [rbp-198h]
  unsigned int v236; // [rsp+94h] [rbp-194h]
  __int64 v237; // [rsp+98h] [rbp-190h]
  __int128 v238; // [rsp+A0h] [rbp-188h]
  unsigned int v239; // [rsp+B0h] [rbp-178h]
  char v240; // [rsp+B6h] [rbp-172h]
  char v241; // [rsp+B7h] [rbp-171h]
  char v242; // [rsp+B8h] [rbp-170h]
  char v243; // [rsp+B9h] [rbp-16Fh]
  char v244; // [rsp+BAh] [rbp-16Eh]
  char v245; // [rsp+BBh] [rbp-16Dh]
  unsigned int v246; // [rsp+BCh] [rbp-16Ch]
  unsigned __int64 v247; // [rsp+C0h] [rbp-168h]
  unsigned __int64 v248; // [rsp+C8h] [rbp-160h]
  unsigned __int128 v249; // [rsp+D0h] [rbp-158h] BYREF
  __m128i *v250; // [rsp+E0h] [rbp-148h]
  int v251; // [rsp+E8h] [rbp-140h]
  int v252; // [rsp+ECh] [rbp-13Ch]
  unsigned __int64 v253; // [rsp+F0h] [rbp-138h]
  unsigned __int64 v254; // [rsp+F8h] [rbp-130h]
  unsigned __int32 v255; // [rsp+100h] [rbp-128h] BYREF
  unsigned __int128 v256; // [rsp+104h] [rbp-124h] BYREF
  unsigned __int32 v257; // [rsp+114h] [rbp-114h] BYREF
  unsigned __int32 v258; // [rsp+118h] [rbp-110h] BYREF
  unsigned __int32 v259; // [rsp+11Ch] [rbp-10Ch] BYREF
  __int128 v260; // [rsp+120h] [rbp-108h] BYREF
  __m128i v261; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v262; // [rsp+140h] [rbp-E8h]
  __m128i v263; // [rsp+150h] [rbp-D8h]
  __int64 v264; // [rsp+160h] [rbp-C8h]
  void *v265[2]; // [rsp+170h] [rbp-B8h] BYREF
  __m128 v266; // [rsp+180h] [rbp-A8h] BYREF
  size_t v267[2]; // [rsp+190h] [rbp-98h] BYREF
  __m128i v268; // [rsp+1A0h] [rbp-88h] BYREF
  __m128i v269[6]; // [rsp+1C0h] [rbp-68h] BYREF

  v250 = a1;
  v4 = *(_DWORD *)(a2 + 8);
  v249 = __PAIR128__(a4, a3);
  v238 = 0u;
  if ( !v4 )
  {
LABEL_2:
    src = nullptr;
    v5 = 0;
LABEL_3:
    v250[5].m128i_i8[8] = 0;
    goto LABEL_4;
  }
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v9 = a2;
  v261.m128i_i64[1] = -1;
  v10 = -1;
  v262 = 0;
  v216 = v8 + (v7 << 6);
  v11 = sub_22296D0(-1, 0, 0);
  v12 = 0;
  v217 = nullptr;
  if ( !v11 )
  {
    sub_222A8E0(v265, -1, 0);
    v192 = (__m128i *)operator new(0x20u);
    v193 = (__m128i *)v265[0];
    v194 = v192 + 1;
    v217 = v192;
    v192->m128i_i64[0] = (__int64)v192[1].m128i_i64;
    if ( v193 == (__m128i *)&v266 )
    {
      v197 = v217;
      v193 = v194;
      *((__m128i *)v217 + 1) = _mm_load_si128((const __m128i *)&v266);
    }
    else
    {
      v195 = v217;
      v196 = v266.m128_u64[0];
      *(_QWORD *)v217 = v193;
      v195[2] = v196;
      v197 = v195;
    }
    v198 = v265[1];
    v265[1] = nullptr;
    v266.m128_i8[0] = 0;
    v197[1] = v198;
    v265[0] = &v266;
    if ( (unsigned __int8)sub_22296D0(v193, v198, 0) )
    {
LABEL_330:
      v10 = *(_QWORD *)v217;
      v12 = *((_QWORD *)v217 + 1);
      if ( v265[0] != &v266 )
      {
        n = *((_QWORD *)v217 + 1);
        operator delete(v265[0]);
        v12 = n;
      }
      goto LABEL_6;
    }
    sub_222A8E0(v267, *(_QWORD *)v217, *((_QWORD *)v217 + 1));
    v199 = *(_BYTE **)v217;
    v200 = *(__m128i **)v217;
    if ( (__m128i *)v267[0] == &v268 )
    {
      v209 = v267[1];
      if ( v267[1] )
      {
        if ( v267[1] == 1 )
          *v199 = v268.m128i_i8[0];
        else
          memcpy(v199, (const void *)v267[0], v267[1]);
        v209 = v267[1];
        v199 = *(_BYTE **)v217;
      }
      *((_QWORD *)v217 + 1) = v209;
      v199[v209] = 0;
      v200 = (__m128i *)v267[0];
      goto LABEL_359;
    }
    n = v268.m128i_i64[0];
    if ( v194 == v200 )
    {
      v211 = (char *)v217;
      v212 = _mm_loadh_ps((const double *)&n);
      *(_QWORD *)v217 = v267[0];
      *(__m128 *)(v211 + 8) = v212;
    }
    else
    {
      v201 = (char *)v217;
      v202 = _mm_loadh_ps((const double *)&n);
      v203 = *((_QWORD *)v217 + 2);
      *(_QWORD *)v217 = v267[0];
      *(__m128 *)(v201 + 8) = v202;
      if ( v200 )
      {
        v267[0] = (size_t)v200;
        v268.m128i_i64[0] = v203;
        goto LABEL_359;
      }
    }
    v200 = &v268;
    v267[0] = (size_t)&v268;
LABEL_359:
    v267[1] = 0;
    v200->m128i_i8[0] = 0;
    if ( (__m128i *)v267[0] != &v268 )
      operator delete((void *)v267[0]);
    goto LABEL_330;
  }
LABEL_6:
  v13 = -2;
  n = v12;
  v263.m128i_i64[1] = -2;
  v264 = 0;
  v14 = sub_22296D0(-2, 0, 0);
  v16 = n;
  if ( !v14 )
  {
    v218 = n;
    sub_222A8E0(v265, -2, 0);
    v184 = (_QWORD *)operator new(0x20u);
    v185 = (__m128i *)v265[0];
    v186 = v218;
    v26 = (size_t)(v184 + 2);
    n = (size_t)v184;
    *v184 = v184 + 2;
    if ( v185 == (__m128i *)&v266 )
    {
      v189 = n;
      v185 = (__m128i *)v26;
      *(__m128i *)(n + 16) = _mm_load_si128((const __m128i *)&v266);
    }
    else
    {
      v187 = n;
      v188 = v266.m128_u64[0];
      *(_QWORD *)n = v185;
      *(_QWORD *)(v187 + 16) = v188;
      v189 = v187;
    }
    v190 = v265[1];
    v218 = v186;
    v265[1] = nullptr;
    *(_QWORD *)(v189 + 8) = v190;
    v265[0] = &v266;
    v266.m128_i8[0] = 0;
    v191 = sub_22296D0(v185, v190, 0);
    v16 = v218;
    if ( v191 )
      goto LABEL_323;
    sub_222A8E0(v267, *(_QWORD *)n, *(_QWORD *)(n + 8));
    v16 = v218;
    v204 = *(__m128i **)n;
    v205 = *(__m128i **)n;
    if ( (__m128i *)v267[0] == &v268 )
    {
      v210 = v267[1];
      if ( v267[1] )
      {
        if ( v267[1] == 1 )
        {
          v204->m128i_i8[0] = v268.m128i_i8[0];
        }
        else
        {
          memcpy(v204, (const void *)v267[0], v267[1]);
          v16 = v218;
        }
        v210 = v267[1];
        v204 = *(__m128i **)n;
      }
      *(_QWORD *)(n + 8) = v210;
      v204->m128i_i8[v210] = 0;
      v205 = (__m128i *)v267[0];
      goto LABEL_365;
    }
    v218 = v268.m128i_i64[0];
    if ( (__m128i *)v26 == v205 )
    {
      v213 = n;
      v214 = _mm_loadh_ps((const double *)&v218);
      *(_QWORD *)n = v267[0];
      *(__m128 *)(v213 + 8) = v214;
    }
    else
    {
      v206 = n;
      v207 = _mm_loadh_ps((const double *)&v218);
      v208 = *(_QWORD *)(n + 16);
      *(_QWORD *)n = v267[0];
      *(__m128 *)(v206 + 8) = v207;
      if ( v205 )
      {
        v267[0] = (size_t)v205;
        v268.m128i_i64[0] = v208;
        goto LABEL_365;
      }
    }
    v205 = &v268;
    v267[0] = (size_t)&v268;
LABEL_365:
    v267[1] = 0;
    v205->m128i_i8[0] = 0;
    if ( (__m128i *)v267[0] != &v268 )
    {
      v218 = v16;
      operator delete((void *)v267[0]);
      v16 = v218;
    }
LABEL_323:
    v13 = *(_QWORD *)n;
    v17 = *(void **)(n + 8);
    if ( v265[0] != &v266 )
    {
      v219 = *(void **)(n + 8);
      v218 = v16;
      operator delete(v265[0]);
      v17 = v219;
      v16 = v218;
    }
    if ( v8 == v216 )
    {
LABEL_25:
      if ( *(_QWORD *)n != v26 )
        operator delete(*(void **)n);
      operator delete((void *)n, 0x20u);
      goto LABEL_28;
    }
    goto LABEL_8;
  }
  v17 = nullptr;
  n = 0;
  if ( v8 == v216 )
    goto LABEL_28;
LABEL_8:
  if ( v10 != -1 )
  {
    v218 = (size_t)v17;
    v17 = (void *)v13;
    v18 = v16;
    v220 = v9;
    v19 = v216;
    while ( 1 )
    {
      v22 = *(char **)(v8 + 8);
      v23 = *(_QWORD *)(v8 + 16);
      if ( v10 == -2 )
      {
        if ( v22 == (char *)-2LL )
          goto LABEL_13;
      }
      else if ( v18 == v23 )
      {
        if ( !v18 )
          goto LABEL_13;
        v20 = *(const void **)(v8 + 8);
        v219 = v17;
        v21 = memcmp(v20, (const void *)v10, v18);
        v17 = v219;
        if ( !v21 )
          goto LABEL_13;
      }
      if ( v17 == (void *)-1LL )
      {
        v25 = v22 + 1 == nullptr;
      }
      else if ( v17 == (void *)-2LL )
      {
        v25 = v22 + 2 == nullptr;
      }
      else
      {
        if ( v218 != v23 )
          goto LABEL_22;
        if ( !v218 )
          goto LABEL_13;
        v219 = v17;
        v24 = memcmp(v22, v17, v218);
        v17 = v219;
        v25 = v24 == 0;
      }
      if ( !v25 )
      {
LABEL_22:
        v9 = v220;
        goto LABEL_23;
      }
LABEL_13:
      v8 += 64;
      if ( v19 == v8 )
        goto LABEL_22;
    }
  }
  v147 = v216;
  v148 = (size_t)v17;
  while ( 1 )
  {
    v149 = *(char **)(v8 + 8);
    if ( v149 == (char *)-1LL )
      goto LABEL_221;
    if ( v13 == -1 )
      goto LABEL_23;
    if ( v13 == -2 )
      break;
    if ( *(_QWORD *)(v8 + 16) != v148 )
      goto LABEL_23;
    if ( v148 )
    {
      v150 = memcmp(v149, (const void *)v13, v148) == 0;
      goto LABEL_228;
    }
LABEL_221:
    v8 += 64;
    if ( v147 == v8 )
      goto LABEL_23;
  }
  v150 = v149 + 2 == nullptr;
LABEL_228:
  if ( v150 )
    goto LABEL_221;
LABEL_23:
  if ( n )
  {
    v26 = n + 16;
    goto LABEL_25;
  }
LABEL_28:
  if ( v217 )
  {
    if ( *(void **)v217 != (char *)v217 + 16 )
      operator delete(*(void **)v217);
    operator delete(v217, 0x20u);
  }
  v220 = *(_QWORD *)v9 + ((unsigned __int64)*(unsigned int *)(v9 + 16) << 6);
  if ( v220 == v8 )
    goto LABEL_2;
  LODWORD(v219) = 0;
  v221 = -1;
  v233 = -1;
  *(_QWORD *)&v229[0] = &v259;
  LODWORD(v232) = 0;
  v246 = 0;
  src = nullptr;
  v241 = 0;
  v223 = 0;
  v240 = 0;
  v224 = 0;
  v242 = 0;
  v225 = 0;
  LODWORD(v237) = 0;
  v235 = 0;
  LODWORD(v231) = 0;
  v222 = 0;
  v245 = 0;
  v239 = 0;
  v243 = 0;
  v236 = 0;
  v244 = 0;
  v234 = 0;
  *(_QWORD *)&v229[1] = &v258;
  while ( 2 )
  {
    v27 = *(_WORD *)(v8 + 24);
    if ( v27 == 6 )
    {
      v93 = *(_QWORD *)(v8 + 40);
      v263.m128i_i64[0] = *(_QWORD *)(v8 + 32);
      v263.m128i_i64[1] = v93;
    }
    else
    {
      if ( v27 != 5 )
        goto LABEL_84;
      v263 = _mm_loadu_si128((const __m128i *)(v8 + 32));
    }
    v28 = *(_QWORD *)(v8 + 16);
    v29 = *(_QWORD *)(v8 + 8);
    v260 = 0;
    v261 = 0;
    if ( (unsigned __int8)sub_22578D0(&v260, v29, v28, v15, v16, v17)
      || (v33 = sub_22578D0(&v261, v263.m128i_i64[0], v263.m128i_i64[1], v30, v31, v32)) != 0 )
    {
      v132 = (unsigned int)v219;
      v250[5].m128i_i8[8] = 0;
      v5 = 32 * v132;
      goto LABEL_4;
    }
    v35 = BYTE7(v260) >> 7;
    v36 = BYTE11(v260) >> 7;
    if ( (HIDWORD(v260) & 0x7FFFFFFF) != 0 )
    {
      v33 = HIBYTE(v260) >> 7;
    }
    else if ( (DWORD2(v260) & 0x7FFFFFFF) == 0 )
    {
      v36 = 0;
      if ( (DWORD1(v260) & 0x7FFFFFFF) == 0 )
        v35 = 0;
    }
    v228 = v35;
    v37 = ((unsigned __int64)v35 << 63) | v260 & 0x7FFFFFFFFFFFFFFFLL;
    v230 = v33;
    LODWORD(v38) = v260;
    v39 = ((unsigned __int64)v33 << 63)
        | ((unsigned __int64)v36 << 31) & 0x7FFFFFFFFFFFFFFFLL
        | *((_QWORD *)&v260 + 1) & 0x7FFFFFFF7FFFFFFFLL;
    v40 = (unsigned int)v219;
    LODWORD(n) = HIDWORD(v37) & 0x7FFFFFFF;
    v227 = v39;
    LODWORD(v218) = DWORD2(v260) & 0x7FFFFFFF;
    LODWORD(v217) = HIDWORD(v39) & 0x7FFFFFFF;
    if ( !(_DWORD)v219 )
    {
LABEL_133:
      v248 = v36;
      v246 = v260;
      LOBYTE(v232) = v36;
      v94 = (((((((unsigned int)(2 * (_DWORD)v219 - 1) | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * (_DWORD)v219 - 1)
              | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * (_DWORD)v219 - 1) | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * (_DWORD)v219 - 1)
            | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * (_DWORD)v219 - 1) | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * (_DWORD)v219 - 1)
            | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * (_DWORD)v219 - 1) | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * (_DWORD)v219 - 1)
          | ((unsigned __int64)(unsigned int)(2 * (_DWORD)v219 - 1) >> 1);
      v95 = 64;
      v96 = ((v94 >> 16) | v94) + 1;
      if ( (unsigned int)v96 >= 0x40 )
        v95 = (unsigned int)v96;
      v251 = v95;
      v97 = 32LL * (unsigned int)v95;
      v98 = (_DWORD *)sub_22300B0(v97, 4, v95, v40, v34, (unsigned int)v260);
      v36 = v232;
      v247 = (unsigned __int64)v98;
      v38 = v246;
      v99 = v248;
      if ( src )
      {
        v232 = 32LL * (unsigned int)v219;
        v100 = (char *)src + v232;
        v101 = (_DWORD *)v247;
        v102 = (_DWORD *)(v247 + v97);
        do
        {
          *v101 = 0x7FFFFFFF;
          v101 += 8;
          *(_QWORD *)(v101 - 7) = 0;
          *(v101 - 5) = 0;
        }
        while ( v102 != v101 );
        v103 = (const __m128i *)src;
        LODWORD(v219) = v251 - 1;
        if ( v100 == src )
        {
          v246 = 1;
          v252 = 0;
        }
        else
        {
          LODWORD(v253) = v38;
          v104 = 0;
          v105 = v251 - 1;
          v254 = v99;
          v106 = v247;
          LOBYTE(v246) = v33;
          LOBYTE(v248) = v35;
          LOBYTE(v252) = v36;
          do
          {
            while ( 1 )
            {
              v107 = v103->m128i_u32[0];
              if ( (int)v107 <= 2147483645
                || (v103->m128i_i32[1] & 0x7FFFFFFF) != 0
                || (v103->m128i_i32[2] & 0x7FFFFFFF) != 0
                || (v103->m128i_i32[3] & 0x7FFFFFFF) != 0 )
              {
                break;
              }
              v103 += 2;
              if ( v100 == (char *)v103 )
                goto LABEL_185;
            }
            v108 = (unsigned int)v107;
            if ( v103->m128i_i8[7] < 0 )
              v108 = (unsigned int)((0xBF58476D1CE4E5B9LL
                                   * (v103->m128i_i32[1] & 0x7FFFFFFF | (unsigned __int64)(v107 << 32))) >> 31)
                   ^ (484763065 * (v103->m128i_i32[1] & 0x7FFFFFFF));
            if ( v103->m128i_i8[11] < 0 )
            {
              v109 = 0xBF58476D1CE4E5B9LL * (v103->m128i_i32[2] & 0x7FFFFFFF | (v108 << 32));
              v108 = (unsigned int)(v109 >> 31) ^ (unsigned int)v109;
            }
            if ( v103->m128i_i8[15] < 0 )
            {
              v108 = 0xBF58476D1CE4E5B9LL * (v103->m128i_i32[3] & 0x7FFFFFFF | (v108 << 32));
              LODWORD(v108) = (v108 >> 31) ^ v108;
            }
            v110 = v105 & v108;
            v111 = 1;
            v112 = nullptr;
            while ( 1 )
            {
              v113 = (__m128i *)(v106 + 32LL * v110);
              v114 = v113->m128i_i32[0];
              if ( (_DWORD)v107 == v113->m128i_i32[0]
                && ((v113->m128i_i32[1] ^ v103->m128i_i32[1]) & 0x7FFFFFFF) == 0
                && ((v113->m128i_i32[2] ^ v103->m128i_i32[2]) & 0x7FFFFFFF) == 0
                && ((v113->m128i_i32[3] ^ v103->m128i_i32[3]) & 0x7FFFFFFF) == 0 )
              {
                break;
              }
              if ( v114 == 0x7FFFFFFF )
              {
                if ( (v113->m128i_i32[1] & 0x7FFFFFFF) == 0
                  && (v113->m128i_i32[2] & 0x7FFFFFFF) == 0
                  && (v113->m128i_i32[3] & 0x7FFFFFFF) == 0 )
                {
                  if ( v112 )
                    v113 = v112;
                  break;
                }
              }
              else if ( v114 == 2147483646
                     && (v113->m128i_i32[1] & 0x7FFFFFFF) == 0
                     && (v113->m128i_i32[2] & 0x7FFFFFFF) == 0
                     && (v113->m128i_i32[3] & 0x7FFFFFFF) == 0
                     && !v112 )
              {
                v112 = (__m128i *)(v106 + 32LL * v110);
              }
              v115 = v111 + v110;
              ++v111;
              v110 = v105 & v115;
            }
            v133 = _mm_loadu_si128(v103);
            v103 += 2;
            ++v104;
            *v113 = v133;
            v113[1] = _mm_loadu_si128(v103 - 1);
          }
          while ( v100 != (char *)v103 );
LABEL_185:
          v33 = v246;
          v36 = v252;
          v252 = v104;
          v246 = v104 + 1;
          LODWORD(v38) = v253;
          v35 = v248;
          v99 = v254;
        }
        v254 = v99;
        LODWORD(v253) = v38;
        LOBYTE(v248) = v36;
        operator delete(src, v232, 4);
        v99 = v254;
        v38 = (unsigned int)v253;
        v36 = v248;
      }
      else
      {
        v146 = &v98[(unsigned __int64)v97 / 4];
        do
        {
          *v98 = 0x7FFFFFFF;
          v98 += 8;
          *(_QWORD *)(v98 - 7) = 0;
          *(v98 - 5) = 0;
        }
        while ( v146 != v98 );
        v246 = 1;
        v252 = 0;
        LODWORD(v219) = v251 - 1;
      }
      v134 = (unsigned int)v38;
      v135 = (v228 << 63) | ((unsigned __int64)(unsigned int)n << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v37;
      if ( v135 < 0 )
        v134 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)n | (unsigned __int64)(v38 << 32))) >> 31)
             ^ (484763065 * (_DWORD)n);
      if ( (((((_DWORD)v99 << 31) | v218 & 0x7FFFFFFF) >> 24) & 0x80u) != 0LL )
        v134 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)v218 | (unsigned __int64)(v134 << 32))) >> 31)
             ^ (484763065 * (_DWORD)v218);
      v227 = (v230 << 63)
           | ((unsigned __int64)(unsigned int)v217 << 32) & 0x7FFFFFFFFFFFFFFFLL
           | ((_DWORD)v99 << 31)
           | (unsigned int)v218 & 0x7FFFFFFF;
      if ( v227 < 0 )
        LODWORD(v134) = (484763065 * (_DWORD)v217)
                      ^ ((0xBF58476D1CE4E5B9LL * ((unsigned int)v217 | (unsigned __int64)(v134 << 32))) >> 31);
      v136 = nullptr;
      LODWORD(src) = 1;
      v137 = v99 << 31;
      v248 = (unsigned __int64)(unsigned int)v217 << 32;
      v138 = v134 & (unsigned int)v219;
      while ( 1 )
      {
        v42 = (__m128i *)(v247 + 32LL * v138);
        v139 = v42->m128i_i32[0];
        if ( v42->m128i_i32[0] == (_DWORD)v38 )
        {
          v135 = (v228 << 63) | ((unsigned __int64)(unsigned int)n << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v135;
          if ( ((v42->m128i_i32[1] ^ HIDWORD(v135)) & 0x7FFFFFFF) == 0 )
          {
            v227 = v137 | v218 & 0x7FFFFFFF | v227 & 0xFFFFFFFF00000000LL;
            if ( ((v42->m128i_i32[2] ^ (unsigned int)v227) & 0x7FFFFFFF) == 0 )
            {
              v227 = (v230 << 63) | v248 & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v227;
              LODWORD(v232) = (v42->m128i_i32[3] ^ HIDWORD(v227)) & 0x7FFFFFFF;
              if ( !(_DWORD)v232 )
                goto LABEL_246;
            }
          }
        }
        if ( v139 == 0x7FFFFFFF )
        {
          if ( (v42->m128i_i32[1] & 0x7FFFFFFF) == 0 && (v42->m128i_i32[2] & 0x7FFFFFFF) == 0 )
          {
            LODWORD(v232) = v42->m128i_i32[3] & 0x7FFFFFFF;
            if ( !(_DWORD)v232 )
            {
LABEL_349:
              if ( v136 )
              {
                v139 = v136->m128i_i32[0];
                v42 = v136;
                LODWORD(v219) = v251;
                src = (void *)v247;
                goto LABEL_247;
              }
              LODWORD(v232) = 0;
              v246 = v252 + 1;
              LODWORD(v219) = v251;
              src = (void *)v247;
              goto LABEL_239;
            }
          }
        }
        else if ( v139 == 2147483646
               && (v42->m128i_i32[1] & 0x7FFFFFFF) == 0
               && (v42->m128i_i32[2] & 0x7FFFFFFF) == 0
               && (v42->m128i_i32[3] & 0x7FFFFFFF) == 0
               && !v136 )
        {
          v136 = (__m128i *)(v247 + 32LL * v138);
        }
        v138 = (unsigned int)v219 & ((_DWORD)src + v138);
        LODWORD(src) = (_DWORD)src + 1;
      }
    }
    v41 = (unsigned int)v260;
    if ( v37 < 0 )
      v41 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)n | ((unsigned __int64)(unsigned int)v260 << 32))) >> 31)
          ^ (484763065 * (_DWORD)n);
    if ( ((((v36 << 31) | DWORD2(v260) & 0x7FFFFFFFu) >> 24) & 0x80u) != 0 )
      v41 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)v218 | (unsigned __int64)(v41 << 32))) >> 31)
          ^ (484763065 * (_DWORD)v218);
    if ( v39 < 0 )
      LODWORD(v41) = ((0xBF58476D1CE4E5B9LL * ((unsigned int)v217 | (unsigned __int64)(v41 << 32))) >> 31)
                   ^ (484763065 * (_DWORD)v217);
    v42 = nullptr;
    v43 = v33;
    v251 = 1;
    v44 = (unsigned int)((_DWORD)v219 - 1);
    v45 = v44 & v41;
    v247 = (unsigned __int64)v36 << 31;
    v248 = (_QWORD)v217 << 32;
    while ( 2 )
    {
      v46 = (__m128i *)((char *)src + 32 * v45);
      v47 = v46->m128i_i32[0];
      if ( v46->m128i_i32[0] == (_DWORD)v260 )
      {
        v34 = 0x7FFFFFFFFFFFFFFFLL;
        v37 = (v228 << 63) | (n << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v37;
        if ( ((v46->m128i_i32[1] ^ HIDWORD(v37)) & 0x7FFFFFFF) == 0 )
        {
          v34 = v247 | v227 & 0xFFFFFFFF00000000LL | v218 & 0x7FFFFFFF;
          v227 = v34;
          if ( (((unsigned int)v34 ^ v46->m128i_i32[2]) & 0x7FFFFFFF) == 0 )
          {
            v48 = v34 & 0x80000000FFFFFFFFLL;
            v34 = 0x7FFFFFFFFFFFFFFFLL;
            v227 = (v230 << 63) | (v248 | v48) & 0x7FFFFFFFFFFFFFFFLL;
            if ( ((v46->m128i_i32[3] ^ HIDWORD(v227)) & 0x7FFFFFFF) == 0 )
            {
              v49 = v46 + 1;
              goto LABEL_62;
            }
          }
        }
      }
      if ( v47 != 0x7FFFFFFF )
      {
        if ( v47 == 2147483646
          && (v46->m128i_i32[1] & 0x7FFFFFFF) == 0
          && (v46->m128i_i32[2] & 0x7FFFFFFF) == 0
          && (v46->m128i_i32[3] & 0x7FFFFFFF) == 0
          && !v42 )
        {
          v42 = (__m128i *)((char *)src + 32 * v45);
        }
        goto LABEL_204;
      }
      if ( (v46->m128i_i32[1] & 0x7FFFFFFF) != 0
        || (v46->m128i_i32[2] & 0x7FFFFFFF) != 0
        || (v252 = v46->m128i_i32[3] & 0x7FFFFFFF) != 0 )
      {
LABEL_204:
        v45 = v44 & (v251 + v45);
        ++v251;
        continue;
      }
      break;
    }
    v33 = v43;
    if ( !v42 )
      v42 = (__m128i *)((char *)src + 32 * v45);
    ++v246;
    v40 = 4 * v246;
    if ( (unsigned int)v40 >= 3 * (int)v219 )
      goto LABEL_133;
    if ( (_DWORD)v219 - (_DWORD)v232 - v246 > (unsigned int)v219 >> 3 )
    {
      if ( v42->m128i_i32[0] == 0x7FFFFFFF )
        goto LABEL_239;
LABEL_248:
      LODWORD(v232) = v232 - 1;
      goto LABEL_249;
    }
    v248 = v36;
    v246 = v260;
    LOBYTE(v232) = v36;
    v155 = (v44 >> 1) | v44 | (((v44 >> 1) | v44) >> 2);
    v156 = 64;
    v157 = ((((((v155 >> 4) | v155) >> 8) | (v155 >> 4) | v155) >> 16) | (((v155 >> 4) | v155) >> 8)
                                                                       | (v155 >> 4)
                                                                       | v155)
         + 1;
    if ( (unsigned int)v157 >= 0x40 )
      v156 = (unsigned int)v157;
    v251 = v156;
    v158 = 32LL * (unsigned int)v156;
    v159 = (_DWORD *)sub_22300B0(v158, 4, v156, v40, v34, (unsigned int)v260);
    v36 = v232;
    v247 = (unsigned __int64)v159;
    v38 = v246;
    v160 = v248;
    if ( src )
    {
      v232 = 32LL * (unsigned int)v219;
      v161 = (const __m128i *)((char *)src + v232);
      v162 = (_DWORD *)v247;
      v163 = (_DWORD *)(v247 + v158);
      do
      {
        *v162 = 0x7FFFFFFF;
        v162 += 8;
        *(_QWORD *)(v162 - 7) = 0;
        *(v162 - 5) = 0;
      }
      while ( v163 != v162 );
      v164 = (const __m128i *)src;
      LOBYTE(v246) = v33;
      LOBYTE(v248) = v35;
      v165 = v252;
      LOBYTE(v253) = v36;
      LODWORD(v219) = v251 - 1;
      do
      {
        while ( 1 )
        {
          v166 = v164->m128i_u32[0];
          if ( (int)v166 <= 2147483645
            || (v164->m128i_i32[1] & 0x7FFFFFFF) != 0
            || (v164->m128i_i32[2] & 0x7FFFFFFF) != 0
            || (v164->m128i_i32[3] & 0x7FFFFFFF) != 0 )
          {
            break;
          }
          v164 += 2;
          if ( v161 == v164 )
            goto LABEL_282;
        }
        v167 = (unsigned int)v166;
        if ( v164->m128i_i8[7] < 0 )
          v167 = (unsigned int)((0xBF58476D1CE4E5B9LL
                               * (v164->m128i_i32[1] & 0x7FFFFFFF | (unsigned __int64)(v166 << 32))) >> 31)
               ^ (484763065 * (v164->m128i_i32[1] & 0x7FFFFFFF));
        if ( v164->m128i_i8[11] < 0 )
        {
          v168 = 0xBF58476D1CE4E5B9LL * (v164->m128i_i32[2] & 0x7FFFFFFF | (v167 << 32));
          v167 = (unsigned int)(v168 >> 31) ^ (unsigned int)v168;
        }
        if ( v164->m128i_i8[15] < 0 )
        {
          v167 = 0xBF58476D1CE4E5B9LL * (v164->m128i_i32[3] & 0x7FFFFFFF | (v167 << 32));
          LODWORD(v167) = (v167 >> 31) ^ v167;
        }
        v169 = (unsigned int)v219 & v167;
        v170 = 1;
        v171 = nullptr;
        while ( 1 )
        {
          v172 = (__m128i *)(v247 + 32LL * v169);
          v173 = v172->m128i_i32[0];
          if ( (_DWORD)v166 == v172->m128i_i32[0]
            && ((v172->m128i_i32[1] ^ v164->m128i_i32[1]) & 0x7FFFFFFF) == 0
            && ((v172->m128i_i32[2] ^ v164->m128i_i32[2]) & 0x7FFFFFFF) == 0
            && ((v172->m128i_i32[3] ^ v164->m128i_i32[3]) & 0x7FFFFFFF) == 0 )
          {
            break;
          }
          if ( v173 == 0x7FFFFFFF )
          {
            if ( (v172->m128i_i32[1] & 0x7FFFFFFF) == 0
              && (v172->m128i_i32[2] & 0x7FFFFFFF) == 0
              && (v172->m128i_i32[3] & 0x7FFFFFFF) == 0 )
            {
              if ( v171 )
                v172 = v171;
              break;
            }
          }
          else if ( v173 == 2147483646
                 && (v172->m128i_i32[1] & 0x7FFFFFFF) == 0
                 && (v172->m128i_i32[2] & 0x7FFFFFFF) == 0
                 && (v172->m128i_i32[3] & 0x7FFFFFFF) == 0
                 && !v171 )
          {
            v171 = (__m128i *)(v247 + 32LL * v169);
          }
          v174 = v170 + v169;
          ++v170;
          v169 = (unsigned int)v219 & v174;
        }
        v175 = _mm_loadu_si128(v164);
        v164 += 2;
        ++v165;
        *v172 = v175;
        v172[1] = _mm_loadu_si128(v164 - 1);
      }
      while ( v161 != v164 );
LABEL_282:
      v33 = v246;
      v252 = v165;
      v176 = v253;
      v246 = v165 + 1;
      v35 = v248;
      LODWORD(v253) = v38;
      LOBYTE(v254) = v176;
      v248 = v160;
      operator delete(src, v232, 4);
      v38 = (unsigned int)v253;
      v36 = v254;
      v160 = v248;
    }
    else
    {
      v180 = &v159[(unsigned __int64)v158 / 4];
      do
      {
        *v159 = 0x7FFFFFFF;
        v159 += 8;
        *(_QWORD *)(v159 - 7) = 0;
        *(v159 - 5) = 0;
      }
      while ( v180 != v159 );
      v246 = 1;
      LODWORD(v219) = v251 - 1;
    }
    v177 = (unsigned int)v38;
    v178 = (v228 << 63) | ((unsigned __int64)(unsigned int)n << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v37;
    if ( v178 < 0 )
      v177 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)n | (unsigned __int64)(v38 << 32))) >> 31)
           ^ (484763065 * (_DWORD)n);
    if ( (((((_DWORD)v160 << 31) | v218 & 0x7FFFFFFF) >> 24) & 0x80u) != 0LL )
      v177 = (unsigned int)((0xBF58476D1CE4E5B9LL * ((unsigned int)v218 | (unsigned __int64)(v177 << 32))) >> 31)
           ^ (484763065 * (_DWORD)v218);
    v227 = (v230 << 63)
         | ((unsigned __int64)(unsigned int)v217 << 32) & 0x7FFFFFFFFFFFFFFFLL
         | ((_DWORD)v160 << 31)
         | (unsigned int)v218 & 0x7FFFFFFF;
    if ( v227 < 0 )
      LODWORD(v177) = (484763065 * (_DWORD)v217)
                    ^ ((0xBF58476D1CE4E5B9LL * ((unsigned int)v217 | (unsigned __int64)(v177 << 32))) >> 31);
    v136 = nullptr;
    LODWORD(src) = 1;
    v248 = v160 << 31;
    v179 = v177 & (unsigned int)v219;
    v253 = (unsigned __int64)(unsigned int)v217 << 32;
    while ( 1 )
    {
      v42 = (__m128i *)(v247 + 32LL * v179);
      v139 = v42->m128i_i32[0];
      if ( v42->m128i_i32[0] == (_DWORD)v38 )
      {
        v178 = (v228 << 63) | ((unsigned __int64)(unsigned int)n << 32) & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v178;
        if ( ((v42->m128i_i32[1] ^ HIDWORD(v178)) & 0x7FFFFFFF) == 0 )
        {
          v181 = v248 | v218 & 0x7FFFFFFF | v227 & 0xFFFFFFFF00000000LL;
          v227 = v181;
          if ( (((unsigned int)v181 ^ v42->m128i_i32[2]) & 0x7FFFFFFF) == 0 )
          {
            v227 = (v230 << 63) | v253 & 0x7FFFFFFFFFFFFFFFLL | (unsigned int)v181;
            LODWORD(v232) = (v42->m128i_i32[3] ^ HIDWORD(v227)) & 0x7FFFFFFF;
            if ( !(_DWORD)v232 )
              break;
          }
        }
      }
      if ( v139 == 0x7FFFFFFF )
      {
        if ( (v42->m128i_i32[1] & 0x7FFFFFFF) == 0 && (v42->m128i_i32[2] & 0x7FFFFFFF) == 0 )
        {
          LODWORD(v232) = v42->m128i_i32[3] & 0x7FFFFFFF;
          if ( !(_DWORD)v232 )
            goto LABEL_349;
        }
      }
      else if ( v139 == 2147483646
             && (v42->m128i_i32[1] & 0x7FFFFFFF) == 0
             && (v42->m128i_i32[2] & 0x7FFFFFFF) == 0
             && (v42->m128i_i32[3] & 0x7FFFFFFF) == 0
             && !v136 )
      {
        v136 = (__m128i *)(v247 + 32LL * v179);
      }
      v179 = (unsigned int)v219 & ((_DWORD)src + v179);
      LODWORD(src) = (_DWORD)src + 1;
    }
LABEL_246:
    LODWORD(v219) = v251;
    src = (void *)v247;
LABEL_247:
    if ( v139 != 0x7FFFFFFF )
      goto LABEL_248;
LABEL_239:
    if ( (v42->m128i_i32[1] & 0x7FFFFFFF) != 0
      || (v42->m128i_i32[2] & 0x7FFFFFFF) != 0
      || (v42->m128i_i32[3] & 0x7FFFFFFF) != 0 )
    {
      goto LABEL_248;
    }
LABEL_249:
    v151 = v42->m128i_i32[1];
    v42->m128i_i32[0] = v38;
    v42[1].m128i_i64[0] = 0;
    v49 = v42 + 1;
    v152 = n | v151 & 0x80000000;
    v49->m128i_i64[1] = 0;
    v49[-1].m128i_i32[1] = v152;
    v49[-1].m128i_i8[7] = (v35 << 7) | HIBYTE(v152) & 0x7F;
    v153 = v218 | v49[-1].m128i_i32[2] & 0x80000000;
    v49[-1].m128i_i32[2] = v153;
    v49[-1].m128i_i8[11] = (v36 << 7) | HIBYTE(v153) & 0x7F;
    v154 = (unsigned int)v217 | v49[-1].m128i_i32[3] & 0x80000000;
    v49[-1].m128i_i32[3] = v154;
    v49[-1].m128i_i8[15] = HIBYTE(v154) & 0x7F | (v33 << 7);
LABEL_62:
    v50 = HIDWORD(v260);
    v51 = DWORD1(v260);
    v52 = v260;
    *v49 = _mm_load_si128(&v261);
    v53 = v50 & 0x7FFFFFFF;
    v54 = v51 & 0x7FFFFFFF;
    v55 = DWORD2(v260) & 0x7FFFFFFF;
    if ( v52 < v233 || v52 == v233 && (v234 > v54 || v234 == v54 && (v236 > v55 || v236 == v55 && v239 > v53)) )
    {
      v239 = v53;
      v236 = DWORD2(v260) & 0x7FFFFFFF;
      v234 = v54;
      v244 = BYTE7(v260) >> 7;
      v243 = BYTE11(v260) >> 7;
      v233 = v52;
      v245 = HIBYTE(v260) >> 7;
    }
    n = (size_t)&v256 + 4;
    v255 = v222;
    *(__m128 *)v265 = _mm_loadh_ps((const double *)&n);
    n = (size_t)&v255;
    v266 = _mm_loadh_ps((const double *)&n);
    if ( v52 > v222
      || v52 == v222
      && (v54 > (unsigned int)v231 || v54 == (_DWORD)v231 && (v55 > v235 || v55 == v235 && v53 > (unsigned int)v237)) )
    {
      LODWORD(v237) = v53;
      v235 = DWORD2(v260) & 0x7FFFFFFF;
      v238 = v260;
      LODWORD(v231) = v54;
      v222 = v52;
    }
    n = (size_t)&v257;
    v56 = v261.m128i_i32[2] & 0x7FFFFFFF;
    LODWORD(v265[0]) = v223;
    v57 = _mm_loadh_ps(v229);
    v259 = v224;
    *(__m128 *)v267 = v57;
    v58 = v261.m128i_i32[1] & 0x7FFFFFFF;
    v258 = v225;
    v59 = _mm_loadh_ps((const double *)&n);
    v257 = v221;
    v268 = (__m128i)v59;
    v256 = *(_OWORD *)&v261 & __PAIR128__(0x7FFFFFFF7FFFFFFFLL, 0x7FFFFFFFFFFFFFFFLL);
    if ( v221 > v261.m128i_i32[0] )
      goto LABEL_180;
    if ( v221 != v261.m128i_i32[0] )
      goto LABEL_84;
    if ( v225 > v58 )
      goto LABEL_180;
    if ( v225 != v58 )
      goto LABEL_84;
    if ( v224 > v56 || v223 > (v261.m128i_i32[3] & 0x7FFFFFFFu) && v224 == v56 )
    {
LABEL_180:
      v223 = v261.m128i_i32[3] & 0x7FFFFFFF;
      v224 = v261.m128i_i32[2] & 0x7FFFFFFF;
      v225 = v261.m128i_i32[1] & 0x7FFFFFFF;
      v242 = (unsigned __int8)v261.m128i_i8[7] >> 7;
      v240 = (unsigned __int8)v261.m128i_i8[11] >> 7;
      v241 = (unsigned __int8)v261.m128i_i8[15] >> 7;
    }
    v221 = v261.m128i_i32[0];
LABEL_84:
    v8 += 64;
    v261.m128i_i64[1] = -1;
    v60 = 0;
    m128i_i64 = nullptr;
    v262 = 0;
    v62 = sub_22296D0(-1, 0, 0);
    n = -1;
    if ( !v62 )
    {
      n = (size_t)v265;
      sub_222A8E0(v265, -1, 0);
      v124 = (__m128i *)operator new(0x20u);
      v125 = n;
      v126 = (__m128i *)v265[0];
      v127 = v124 + 1;
      m128i_i64 = v124->m128i_i64;
      v124->m128i_i64[0] = (__int64)v124[1].m128i_i64;
      if ( v126 == (__m128i *)(v125 + 16) )
      {
        v126 = v124 + 1;
        v124[1] = _mm_load_si128((const __m128i *)&v266);
      }
      else
      {
        v128 = v266.m128_u64[0];
        *m128i_i64 = v126;
        m128i_i64[2] = v128;
      }
      v129 = v265[1];
      n = v125;
      v265[0] = (void *)(v125 + 16);
      m128i_i64[1] = v265[1];
      v265[1] = nullptr;
      v266.m128_i8[0] = 0;
      v130 = sub_22296D0(v126, v129, 0);
      v131 = n;
      if ( v130 )
      {
LABEL_171:
        v60 = m128i_i64[1];
        n = *m128i_i64;
        if ( v265[0] != (void *)(v131 + 16) )
          operator delete(v265[0]);
        goto LABEL_85;
      }
      sub_222A8E0(v267, *m128i_i64, m128i_i64[1]);
      v144 = (__m128i *)*m128i_i64;
      v131 = n;
      if ( (__m128i *)v267[0] == &v268 )
      {
        v183 = v267[1];
        if ( v267[1] )
        {
          if ( v267[1] == 1 )
          {
            v144->m128i_i8[0] = v268.m128i_i8[0];
            v183 = v267[1];
            v144 = (__m128i *)*m128i_i64;
          }
          else
          {
            memcpy(v144, (const void *)v267[0], v267[1]);
            v183 = v267[1];
            v144 = (__m128i *)*m128i_i64;
            v131 = n;
          }
        }
        m128i_i64[1] = v183;
        v144->m128i_i8[v183] = 0;
        v144 = (__m128i *)v267[0];
        goto LABEL_215;
      }
      if ( v127 == v144 )
      {
        n = v268.m128i_i64[0];
        *m128i_i64 = v267[0];
        *(__m128 *)(m128i_i64 + 1) = _mm_loadh_ps((const double *)&n);
      }
      else
      {
        n = v268.m128i_i64[0];
        v145 = m128i_i64[2];
        *m128i_i64 = v267[0];
        *(__m128 *)(m128i_i64 + 1) = _mm_loadh_ps((const double *)&n);
        if ( v144 )
        {
          v267[0] = (size_t)v144;
          v268.m128i_i64[0] = v145;
          goto LABEL_215;
        }
      }
      v144 = &v268;
      v267[0] = (size_t)&v268;
LABEL_215:
      v267[1] = 0;
      v144->m128i_i8[0] = 0;
      if ( (__m128i *)v267[0] != &v268 )
      {
        n = v131;
        operator delete((void *)v267[0]);
        v131 = n;
      }
      goto LABEL_171;
    }
LABEL_85:
    v63 = -2;
    v264 = 0;
    v263.m128i_i64[1] = -2;
    if ( (unsigned __int8)sub_22296D0(-2, 0, 0) )
    {
      v64 = 0;
      v65 = 0;
      if ( v8 == v216 )
        goto LABEL_107;
      goto LABEL_87;
    }
    v217 = v265;
    sub_222A8E0(v265, -2, 0);
    v116 = (__m128i *)operator new(0x20u);
    v117 = (char *)v217;
    v118 = (__m128i *)v265[0];
    v119 = (size_t)&v116[1];
    v65 = (size_t)v116;
    v116->m128i_i64[0] = (__int64)v116[1].m128i_i64;
    if ( v118 == (__m128i *)(v117 + 16) )
    {
      v118 = v116 + 1;
      v116[1] = _mm_load_si128((const __m128i *)&v266);
    }
    else
    {
      v120 = v266.m128_u64[0];
      *(_QWORD *)v65 = v118;
      *(_QWORD *)(v65 + 16) = v120;
    }
    v121 = v265[1];
    v218 = v119;
    v217 = v117;
    *(void **)(v65 + 8) = v265[1];
    v265[0] = v117 + 16;
    v265[1] = nullptr;
    v266.m128_i8[0] = 0;
    v122 = sub_22296D0(v118, v121, 0);
    v123 = (size_t)v217;
    v17 = (void *)v218;
    if ( !v122 )
    {
      v140 = *(__m128i **)v65;
      v141 = *(_QWORD *)(v65 + 8);
      v218 = (size_t)v217;
      v217 = v17;
      sub_222A8E0(v267, v140, v141);
      v142 = *(__m128i **)v65;
      v17 = v217;
      v123 = v218;
      if ( (__m128i *)v267[0] == &v268 )
      {
        v182 = v267[1];
        if ( v267[1] )
        {
          if ( v267[1] == 1 )
          {
            v142->m128i_i8[0] = v268.m128i_i8[0];
            v182 = v267[1];
            v142 = *(__m128i **)v65;
          }
          else
          {
            memcpy(v142, (const void *)v267[0], v267[1]);
            v142 = *(__m128i **)v65;
            v123 = v218;
            v182 = v267[1];
            v17 = v217;
          }
        }
        *(_QWORD *)(v65 + 8) = v182;
        v142->m128i_i8[v182] = 0;
        v142 = (__m128i *)v267[0];
        goto LABEL_209;
      }
      if ( v217 == v142 )
      {
        v217 = (void *)v268.m128i_i64[0];
        *(_QWORD *)v65 = v267[0];
        *(__m128 *)(v65 + 8) = _mm_loadh_ps((const double *)&v217);
      }
      else
      {
        v217 = (void *)v268.m128i_i64[0];
        v143 = *(_QWORD *)(v65 + 16);
        *(_QWORD *)v65 = v267[0];
        *(__m128 *)(v65 + 8) = _mm_loadh_ps((const double *)&v217);
        if ( v142 )
        {
          v267[0] = (size_t)v142;
          v268.m128i_i64[0] = v143;
          goto LABEL_209;
        }
      }
      v142 = &v268;
      v267[0] = (size_t)&v268;
LABEL_209:
      v267[1] = 0;
      v142->m128i_i8[0] = 0;
      if ( (__m128i *)v267[0] != &v268 )
      {
        v218 = v123;
        v217 = v17;
        operator delete((void *)v267[0]);
        v123 = v218;
        v17 = v217;
      }
    }
    v15 = (void *)(v123 + 16);
    v63 = *(_QWORD *)v65;
    v64 = *(_QWORD *)(v65 + 8);
    if ( v265[0] != v15 )
    {
      v217 = v17;
      operator delete(v265[0]);
      v17 = v217;
    }
    if ( v8 == v216 )
    {
LABEL_104:
      if ( *(void **)v65 != v17 )
        operator delete(*(void **)v65);
      operator delete((void *)v65, 0x20u);
      goto LABEL_107;
    }
LABEL_87:
    if ( n != -1 )
    {
      v218 = v65;
      v66 = v60;
      v217 = m128i_i64;
      while ( 1 )
      {
        v67 = *(char **)(v8 + 8);
        v68 = *(_QWORD *)(v8 + 16);
        if ( n == -2 )
        {
          if ( v67 == (char *)-2LL )
            goto LABEL_92;
        }
        else if ( v66 == v68 && (!v66 || !memcmp(*(const void **)(v8 + 8), (const void *)n, v66)) )
        {
          goto LABEL_92;
        }
        if ( v63 == -1 )
        {
          v69 = v67 + 1 == nullptr;
        }
        else if ( v63 == -2 )
        {
          v69 = v67 + 2 == nullptr;
        }
        else
        {
          if ( v64 != v68 )
            goto LABEL_101;
          if ( !v64 )
            goto LABEL_92;
          v69 = memcmp(v67, (const void *)v63, v64) == 0;
        }
        if ( !v69 )
        {
LABEL_101:
          m128i_i64 = v217;
          v65 = v218;
          goto LABEL_102;
        }
LABEL_92:
        v8 += 64;
        if ( v216 == v8 )
          goto LABEL_101;
      }
    }
    while ( 2 )
    {
      v92 = *(char **)(v8 + 8);
      if ( v92 != (char *)-1LL )
      {
        if ( v63 == -1 )
          break;
        if ( v63 == -2 )
        {
          v91 = v92 + 2 == nullptr;
          goto LABEL_121;
        }
        if ( *(_QWORD *)(v8 + 16) != v64 )
          break;
        if ( v64 )
        {
          v91 = memcmp(v92, (const void *)v63, v64) == 0;
LABEL_121:
          if ( !v91 )
            break;
        }
      }
      v8 += 64;
      if ( v216 != v8 )
        continue;
      break;
    }
LABEL_102:
    if ( v65 )
    {
      v17 = (void *)(v65 + 16);
      goto LABEL_104;
    }
LABEL_107:
    if ( m128i_i64 )
    {
      if ( (_QWORD *)*m128i_i64 != m128i_i64 + 2 )
        operator delete((void *)*m128i_i64);
      operator delete(m128i_i64, 0x20u);
    }
    if ( v220 != v8 )
      continue;
    break;
  }
  v5 = 32LL * (unsigned int)v219;
  if ( !v246 )
    goto LABEL_3;
  v269[0] = _mm_load_si128((const __m128i *)&v249);
  v268.m128i_i64[0] = (v231 << 32) | v222 | v238 & 0x8000000000000000LL;
  v268.m128i_i64[1] = (v237 << 32) | v235 & 0x7FFFFFFF | *((_QWORD *)&v238 + 1) & 0x8000000080000000LL;
  operator delete(0, 0, 4);
  if ( (_DWORD)v219 )
  {
    v74 = (void *)sub_22300B0(v5, 4, v70, v71, v72, v73);
    v75 = memcpy(v74, src, v5);
  }
  else
  {
    LODWORD(v232) = 0;
    v75 = nullptr;
    v246 = 0;
  }
  v76 = v250;
  v250->m128i_i32[0] = v233;
  v77 = v244;
  v78 = v234 | v76->m128i_i32[1] & 0x80000000;
  v76->m128i_i32[1] = v78;
  v76->m128i_i8[7] = HIBYTE(v78) & 0x7F | (v77 << 7);
  v79 = v243;
  v80 = v236 | v76->m128i_i32[2] & 0x80000000;
  v76->m128i_i32[2] = v80;
  v76->m128i_i8[11] = HIBYTE(v80) & 0x7F | (v79 << 7);
  v81 = v245;
  v82 = v239 | v76->m128i_i32[3] & 0x80000000;
  v76->m128i_i32[3] = v82;
  v76->m128i_i8[15] = HIBYTE(v82) & 0x7F | (v81 << 7);
  v268.m128i_i32[0] = v222;
  v268.m128i_i32[1] = v231 | v268.m128i_i32[1] & 0x80000000;
  v268.m128i_i32[2] = v235 | v268.m128i_i32[2] & 0x80000000;
  v268.m128i_i32[3] = v237 | v268.m128i_i32[3] & 0x80000000;
  v76[1] = _mm_load_si128(&v268);
  v76[2].m128i_i32[0] = v221;
  si128 = _mm_load_si128(v269);
  v84 = v232;
  v85 = v225 | v76[2].m128i_i32[1] & 0x80000000;
  v76[2].m128i_i32[1] = v85;
  v76[2].m128i_i8[7] = HIBYTE(v85) & 0x7F | (v242 << 7);
  v86 = v224 | v76[2].m128i_i32[2] & 0x80000000;
  v76[2].m128i_i32[2] = v86;
  v76[2].m128i_i8[11] = HIBYTE(v86) & 0x7F | (v240 << 7);
  LODWORD(n) = v76[2].m128i_i32[3];
  v87 = v223 | n & 0x80000000;
  v76[2].m128i_i32[3] = v87;
  v88 = v241;
  v76[3] = si128;
  v76[4].m128i_i64[0] = (__int64)v75;
  v76[2].m128i_i8[15] = HIBYTE(v87) & 0x7F | (v88 << 7);
  v89 = v76;
  LODWORD(v76) = v246;
  v89[4].m128i_i32[3] = v84;
  v89[4].m128i_i32[2] = (int)v76;
  LODWORD(v76) = (_DWORD)v219;
  v89[5].m128i_i8[8] = 1;
  v89[5].m128i_i32[0] = (int)v76;
  operator delete(0, 0, 4);
  v90 = v5;
  v5 = 0;
  operator delete(src, v90, 4);
  src = nullptr;
LABEL_4:
  operator delete(src, v5, 4);
  return v250;
}
