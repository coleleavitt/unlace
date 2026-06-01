__int64 __fastcall sub_BED870(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r13
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **exception; // r12
  char **v8; // r15
  char **v9; // r13
  char *v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  bool v14; // zf
  int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // rdx
  __int64 v19; // rbp
  void *v20; // rdi
  __int64 *v21; // rbp
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 *v27; // rbp
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  char *v30; // rax
  __int64 v31; // r13
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rbx
  unsigned int v38; // r15d
  __int64 v39; // r12
  unsigned int v40; // eax
  __int64 v41; // rsi
  int v42; // eax
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r12
  unsigned int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  __int64 *v49; // rdx
  unsigned int v50; // edx
  __int64 *v51; // r12
  __int64 v52; // r15
  _QWORD *v53; // rax
  _QWORD *v54; // rsi
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  int j; // eax
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 *v60; // r12
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  _QWORD *v65; // rcx
  __int64 *v66; // r15
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  _QWORD *v74; // rcx
  __int64 *v75; // r12
  __int64 *v76; // r15
  __int64 v77; // rsi
  __int64 v78; // rsi
  __int64 v79; // rdi
  _QWORD *v80; // rbx
  void *v81; // rdi
  __int64 *v82; // rbx
  unsigned __int64 v83; // r12
  __int64 v84; // rsi
  unsigned __int64 v85; // rdi
  __int64 *v86; // rbx
  unsigned __int64 v87; // r12
  __int64 v88; // rsi
  unsigned __int64 v89; // rdi
  __int64 *v90; // rbx
  unsigned __int64 v91; // r12
  __int64 v92; // rsi
  unsigned __int64 v93; // rdi
  _QWORD *v94; // rbx
  void *v95; // rdi
  __int64 *v96; // rbx
  unsigned __int64 v97; // r12
  __int64 v98; // rsi
  unsigned __int64 v99; // rdi
  __int64 *v100; // rbx
  unsigned __int64 v101; // r12
  __int64 v102; // rsi
  unsigned __int64 v103; // rdi
  __int64 *v104; // rbx
  unsigned __int64 v105; // r12
  __int64 v106; // rsi
  unsigned __int64 v107; // rdi
  char *v108; // rax
  unsigned int i; // r12d
  unsigned int v110; // eax
  __int64 *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rsi
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rax
  unsigned __int64 v117; // r15
  _DWORD *v118; // rax
  _QWORD *v119; // rdx
  unsigned int v120; // eax
  __int64 v121; // rsi
  int v122; // eax
  __m128i *v123; // rsi
  unsigned __int64 v124; // rdi
  unsigned int v125; // r8d
  size_t v126; // rsi
  unsigned int *v127; // rax
  __int64 v128; // rsi
  unsigned int v129; // ecx
  size_t v130; // rsi
  unsigned int *v131; // rax
  unsigned int v132; // r15d
  size_t v133; // rdi
  __int64 v134; // rax
  __int64 v135; // r12
  __int64 v136; // rsi
  _DWORD *v137; // rcx
  __int64 v138; // rdx
  int v139; // r9d
  __int64 *v140; // rax
  __int64 *v141; // r8
  __int64 v142; // rdi
  __int64 v143; // rdi
  __int64 *v144; // r12
  __int64 v145; // r15
  __int64 *v146; // rbx
  __int64 *v147; // rbp
  __int64 *v148; // r13
  __int64 v149; // rsi
  __int64 v150; // rdi
  __int64 v151; // r12
  unsigned int v152; // r15d
  size_t v153; // rsi
  unsigned int *v154; // rax
  __int64 v155; // rcx
  unsigned int v156; // r15d
  size_t v157; // rsi
  unsigned int *v158; // rax
  __int64 v159; // rdx
  _QWORD *v160; // rax
  unsigned int v161; // ecx
  size_t v162; // rsi
  unsigned int *v163; // rax
  _QWORD *v164; // rax
  __int64 v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  __int64 v169; // r15
  size_t v170; // r13
  char *v171; // r14
  int v172; // edi
  __int64 v173; // rax
  char *v174; // r9
  char *v175; // rax
  char *v176; // rsi
  __int64 v177; // rdx
  __int64 v178; // rdx
  __int64 *v179; // rbx
  __int64 *v180; // r13
  __int64 *v181; // rbx
  unsigned __int64 v182; // rbp
  __int64 v183; // rsi
  __int64 result; // rax
  unsigned int v185; // r13d
  unsigned int v186; // edx
  unsigned int *v187; // rcx
  __int64 v188; // rdi
  __int64 v189; // rsi
  unsigned __int64 v190; // rax
  __int64 v191; // rsi
  __int64 *v192; // r12
  __int64 *v193; // r15
  __int64 v194; // rsi
  __int64 v195; // rdi
  _QWORD *v196; // rax
  _QWORD *v197; // rbp
  char *v198; // r9
  char *v199; // rbx
  __int64 v200; // rax
  _QWORD *v201; // rdx
  _QWORD *v202; // rax
  __int64 v203; // rdx
  _QWORD *v204; // rax
  unsigned __int64 v205; // [rsp+0h] [rbp-268h]
  __int64 v206; // [rsp+0h] [rbp-268h]
  int v207; // [rsp+0h] [rbp-268h]
  __int64 v208; // [rsp+8h] [rbp-260h]
  unsigned int v209; // [rsp+8h] [rbp-260h]
  _DWORD *v210; // [rsp+8h] [rbp-260h]
  int v211; // [rsp+10h] [rbp-258h]
  unsigned int v212; // [rsp+10h] [rbp-258h]
  __int64 *v213; // [rsp+10h] [rbp-258h]
  unsigned int v214; // [rsp+10h] [rbp-258h]
  __int64 v215; // [rsp+10h] [rbp-258h]
  __int64 *v216; // [rsp+10h] [rbp-258h]
  __int64 v217; // [rsp+10h] [rbp-258h]
  __int64 v218; // [rsp+10h] [rbp-258h]
  unsigned int *v219; // [rsp+10h] [rbp-258h]
  __int64 v220; // [rsp+18h] [rbp-250h]
  __int64 v221; // [rsp+18h] [rbp-250h]
  unsigned int v222; // [rsp+18h] [rbp-250h]
  __int64 *v223; // [rsp+18h] [rbp-250h]
  unsigned int *v224; // [rsp+18h] [rbp-250h]
  unsigned int v226; // [rsp+28h] [rbp-240h]
  __int64 v227; // [rsp+40h] [rbp-228h]
  __int64 v228; // [rsp+48h] [rbp-220h]
  _DWORD *v229; // [rsp+50h] [rbp-218h]
  __int64 *v230; // [rsp+58h] [rbp-210h]
  __int64 v231; // [rsp+60h] [rbp-208h]
  char *v232; // [rsp+68h] [rbp-200h]
  char *v233; // [rsp+70h] [rbp-1F8h]
  char *ptr; // [rsp+90h] [rbp-1D8h]
  __int64 v236; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v237; // [rsp+C8h] [rbp-1A0h]
  __int64 v238; // [rsp+D0h] [rbp-198h]
  __int64 v239[2]; // [rsp+E0h] [rbp-188h] BYREF
  __int64 *v240; // [rsp+F0h] [rbp-178h]
  __int64 v241; // [rsp+100h] [rbp-168h]
  __m128 v242; // [rsp+110h] [rbp-158h] BYREF
  __int64 *v243; // [rsp+120h] [rbp-148h]
  unsigned __int64 v244; // [rsp+128h] [rbp-140h]
  __int64 *v245; // [rsp+130h] [rbp-138h]
  void *v246; // [rsp+138h] [rbp-130h]
  __int64 v247; // [rsp+140h] [rbp-128h]
  __int64 v248; // [rsp+148h] [rbp-120h]
  unsigned __int64 v249; // [rsp+150h] [rbp-118h]
  __int64 *v250; // [rsp+158h] [rbp-110h]
  void *v251; // [rsp+160h] [rbp-108h]
  __int64 v252; // [rsp+168h] [rbp-100h]
  void *v253; // [rsp+170h] [rbp-F8h]
  __int64 v254; // [rsp+178h] [rbp-F0h]
  int v255; // [rsp+180h] [rbp-E8h]
  __int64 v256; // [rsp+188h] [rbp-E0h]
  _QWORD v257[2]; // [rsp+190h] [rbp-D8h] BYREF
  __m128 v258; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 *v259; // [rsp+1B0h] [rbp-B8h]
  unsigned __int64 v260; // [rsp+1B8h] [rbp-B0h]
  __int64 *v261; // [rsp+1C0h] [rbp-A8h]
  void *v262; // [rsp+1C8h] [rbp-A0h]
  __int64 v263; // [rsp+1D0h] [rbp-98h]
  __int64 v264; // [rsp+1D8h] [rbp-90h]
  unsigned __int64 v265; // [rsp+1E0h] [rbp-88h]
  __int64 *v266; // [rsp+1E8h] [rbp-80h]
  void *s; // [rsp+1F0h] [rbp-78h]
  __int64 v268; // [rsp+1F8h] [rbp-70h]
  void *v269; // [rsp+200h] [rbp-68h]
  __int64 v270; // [rsp+208h] [rbp-60h]
  int v271; // [rsp+210h] [rbp-58h]
  __int64 v272; // [rsp+218h] [rbp-50h]
  _QWORD v273[9]; // [rsp+220h] [rbp-48h] BYREF

  v11 = (char *)sub_186B270(0x40u);
  *(_OWORD *)v11 = 0;
  *((_OWORD *)v11 + 1) = 0;
  *((_OWORD *)v11 + 2) = 0;
  *((_OWORD *)v11 + 3) = 0;
  ptr = v11;
  v258 = _mm_loadh_ps((const double *)(a1 + 16));
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_167EE60(v239, &v258, 0, 0, 0);
  v12 = v258.m128_u64[0];
  if ( v258.m128_u64[0] )
  {
    v13 = v258.m128_u64[1];
    v14 = (*(_DWORD *)(v258.m128_u64[0] + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  sub_167F5F0(&v242, v239);
  sub_167F5B0(&v258, v239);
  v211 = 0;
  v15 = 0;
  v16 = 8;
  while ( (unsigned __int8)sub_167E490(&v242, &v258) )
  {
    v17 = sub_167E460(&v242);
    if ( *(_WORD *)(v17 + 4) )
      goto LABEL_10;
    v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v18 || *v18 || v18[1] != 4 )
      goto LABEL_10;
    v169 = *(_QWORD *)(v17 + 32);
    v209 = 2 * v16;
    if ( 3 * (int)v16 >= (unsigned int)(4 * (v15 + v211)) )
    {
      v207 = v16 - 1;
      v170 = 8LL * (unsigned int)v16;
      v171 = &ptr[v170];
      goto LABEL_250;
    }
    v170 = 8LL * v209;
    v196 = (_QWORD *)sub_186B270(v170);
    v197 = v196;
    if ( v209 )
    {
      memset(v196, 0, 8LL * v209);
      v171 = (char *)&v197[v170 / 8];
      v207 = v209 - 1;
      v198 = &ptr[8 * v16];
LABEL_304:
      v199 = ptr;
      do
      {
        while ( *(_QWORD *)v199 <= 1u )
        {
          v199 += 8;
          if ( v199 == v198 )
            goto LABEL_312;
        }
        v200 = 8LL * (*(_DWORD *)(*(_QWORD *)v199 + 12LL) & (unsigned int)v207);
        v201 = &v197[(unsigned __int64)v200 / 8];
        if ( v170 == v200 )
        {
LABEL_315:
          if ( v197 == v201 )
          {
LABEL_325:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v202 = v197;
          while ( *v202 )
          {
            if ( v201 == ++v202 )
              goto LABEL_325;
          }
        }
        else
        {
          v202 = &v197[(unsigned __int64)v200 / 8];
          while ( *v202 )
          {
            if ( ++v202 == (_QWORD *)v171 )
              goto LABEL_315;
          }
        }
        v203 = *(_QWORD *)v199;
        v199 += 8;
        *v202 = v203;
      }
      while ( v199 != v198 );
      goto LABEL_312;
    }
    v207 = -1;
    v171 = (char *)v196;
    v198 = &ptr[8 * v16];
    if ( v198 != ptr )
      goto LABEL_304;
LABEL_312:
    if ( ptr )
      sub_186B220(ptr);
    ptr = (char *)v197;
    v16 = v209;
    v15 = 0;
LABEL_250:
    v172 = *(_DWORD *)(v169 + 12);
    v173 = 8LL * (v172 & (unsigned int)v207);
    v174 = &ptr[v173];
    if ( v173 == v170 )
    {
      v176 = nullptr;
LABEL_258:
      v175 = ptr;
      if ( v174 == ptr )
      {
LABEL_266:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v178 = *(_QWORD *)v175;
          if ( *(_QWORD *)v175 <= 1u )
            break;
          if ( *(_DWORD *)(v178 + 12) == v172 && v169 == v178 )
            goto LABEL_327;
          v175 += 8;
          if ( v174 == v175 )
            goto LABEL_266;
        }
        if ( !v178 )
          break;
        v176 = v175;
        v175 += 8;
        if ( v174 == v175 )
          goto LABEL_266;
      }
      if ( v176 )
      {
        --v15;
        v175 = v176;
      }
      ++v211;
      *(_QWORD *)v175 = v169;
    }
    else
    {
      v175 = &ptr[v173];
      v176 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v177 = *(_QWORD *)v175;
          if ( *(_QWORD *)v175 <= 1u )
            break;
          if ( *(_DWORD *)(v177 + 12) == v172 && v169 == v177 )
          {
LABEL_327:
            *(_QWORD *)v175 = v169;
            goto LABEL_10;
          }
          v175 += 8;
          if ( v175 == v171 )
            goto LABEL_258;
        }
        if ( !v177 )
          break;
        v176 = v175;
        v175 += 8;
        if ( v175 == v171 )
          goto LABEL_258;
      }
      if ( v176 )
        --v15;
      else
        v176 = v175;
      ++v211;
      *(_QWORD *)v176 = v169;
    }
LABEL_10:
    sub_167EA90(&v242);
  }
  if ( v262 )
    sub_186B220(v262);
  if ( v258.m128_u64[1] )
    sub_186B220((void *)(v258.m128_u64[1] - 8));
  if ( v246 )
    sub_186B220(v246);
  if ( v242.m128_u64[1] )
    sub_186B220((void *)(v242.m128_u64[1] - 8));
  v19 = v241;
  if ( v241 )
  {
    v20 = *(void **)(v241 + 16);
    if ( v20 )
      memset(v20, 0, 4LL * *(unsigned int *)(v241 + 12));
    *(_DWORD *)(v19 + 8) = 0;
  }
  v21 = v240;
  if ( v240 )
  {
    v22 = (unsigned __int64)&v240[*((unsigned int *)v240 - 1)];
    if ( (unsigned __int64)v240 >= v22 )
      goto LABEL_32;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = v239[1];
          v14 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_31;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_31:
    v21 = v240;
    if ( v240 )
LABEL_32:
      sub_186B220(v21 - 1);
  }
  v258.m128_u64[1] = 0;
  v25 = *(_QWORD *)(a1 + 16);
  v231 = v25;
  v26 = (_QWORD *)sub_186B270(0x28u);
  v26[1] = v25;
  v27 = v26 + 1;
  v26[2] = 0;
  *v26 = 0x100000002LL;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v28 = (_QWORD *)sub_186B270(0x18u);
  v28[1] = a2;
  v29 = v28 + 1;
  *v28 = 0x100000002LL;
  v30 = ptr;
  v232 = &ptr[8 * v16];
  if ( v232 == ptr )
    goto LABEL_181;
  while ( *(_QWORD *)v30 <= 1u )
  {
    v30 += 8;
    if ( &ptr[8 * v16] == v30 )
      goto LABEL_181;
  }
  v233 = v30;
  if ( v232 == v30 )
  {
LABEL_181:
    for ( i = 0; ; ++i )
    {
      v110 = *((_DWORD *)v27 - 1);
      if ( i >= v110 )
        break;
      v111 = &v27[2 * i];
      v112 = v111[1];
      v206 = *v111;
      if ( v112 )
        v113 = *(unsigned int *)(v112 - 4);
      else
        v113 = 0;
      v114 = sub_15EC1C0(*v111, v113);
      v115 = v114;
      if ( v114 )
        ++*(_DWORD *)(v114 + 8);
      v116 = v29[i];
      v242 = _mm_loadh_ps((const double *)(a1 + 16));
      if ( v116 )
        ++*(_DWORD *)(v116 + 8);
      sub_14B9B80(*(_QWORD *)(a1 + 8) + 7456LL, &v242);
      v117 = v242.m128_u64[0];
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL) != v115
        && (*(_WORD *)(v242.m128_u64[0] + 4)
         || (v118 = *(_DWORD **)(*(_QWORD *)(v242.m128_u64[0] + 16) + 24LL)) == nullptr
         || *(_DWORD *)(*(_QWORD *)a1 + 1768LL) != *v118
         || v118[1] != 35) )
      {
        if ( v115 )
          ++*(_DWORD *)(v115 + 8);
        ++*(_DWORD *)(v117 + 8);
        v119 = *(_QWORD **)(a3 + 8);
        if ( v119 )
        {
          v120 = *((_DWORD *)v119 - 1);
          if ( v120 == *((_DWORD *)v119 - 2) )
          {
            v185 = (3 * v120 + 1) >> 1;
            v186 = 16 * v185 + 8;
            if ( 16 * v120 + 8 >= v186 || v120 >= v185 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v258, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v258);
              sub_233E40((__int64)&v258);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v187 = (unsigned int *)sub_186B270(v186);
            v119 = v187 + 2;
            v188 = *(_QWORD *)(a3 + 8);
            if ( v188 )
            {
              v189 = *(unsigned int *)(v188 - 4);
              v190 = 0;
              v187[1] = v189;
              v191 = 16 * v189;
              if ( v191 )
              {
                do
                {
                  *(__m128i *)&v187[v190 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v188 + v190));
                  v190 += 16LL;
                }
                while ( v190 != v191 );
              }
              v219 = v187;
              v210 = v187 + 2;
              sub_186B220((void *)(v188 - 8));
              v187 = v219;
              v119 = v210;
              v123 = (__m128i *)&v210[4 * v219[1]];
              v122 = v219[1] + 1;
            }
            else
            {
              v187[1] = 0;
              v123 = (__m128i *)(v187 + 2);
              v122 = 1;
            }
            *v187 = v185;
            *(_QWORD *)(a3 + 8) = v119;
          }
          else
          {
            v121 = v120;
            v122 = v120 + 1;
            v123 = (__m128i *)&v119[2 * v121];
          }
        }
        else
        {
          v204 = (_QWORD *)sub_186B270(0x28u);
          *v204 = 2;
          v119 = v204 + 1;
          *(_QWORD *)(a3 + 8) = v204 + 1;
          v123 = (__m128i *)(v204 + 1);
          v122 = 1;
        }
        *v123 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v115, (__m128i)v117);
        v117 = v242.m128_u64[0];
        *((_DWORD *)v119 - 1) = v122;
      }
      if ( v117 )
      {
        v124 = v242.m128_u64[1];
        v14 = (*(_DWORD *)(v117 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v124, v117);
      }
      if ( v115 )
      {
        v14 = (*(_DWORD *)(v115 + 8))-- == 1;
        if ( v14 )
          sub_15D7BC0(v206, v115);
      }
    }
    if ( v110 )
    {
      v180 = v27;
      v192 = &v27[2 * v110];
      do
      {
        v179 = (__int64 *)v180[1];
        if ( v179 )
        {
          v193 = &v179[*((unsigned int *)v179 - 1)];
          if ( v179 >= v193 )
            goto LABEL_268;
          do
          {
            v194 = *v179;
            if ( *v179 )
            {
              v195 = *v180;
              v14 = (*(_DWORD *)(v194 + 8))-- == 1;
              if ( v14 )
                sub_15D7BC0(v195, v194);
            }
            ++v179;
          }
          while ( v179 < v193 );
          v179 = (__int64 *)v180[1];
          if ( v179 )
LABEL_268:
            sub_186B220(v179 - 1);
        }
        v180 += 2;
      }
      while ( v192 != v180 );
    }
    sub_186B220(v27 - 1);
    goto LABEL_271;
  }
  v31 = *(_QWORD *)v30;
  while ( 2 )
  {
    if ( v27 )
      v32 = *((unsigned int *)v27 - 1);
    else
      v32 = 0;
    v243 = nullptr;
    v245 = nullptr;
    v33 = *(_QWORD *)(a1 + 16);
    v251 = v257;
    v246 = nullptr;
    v244 = v33;
    v249 = v33;
    v247 = 0;
    v248 = 0;
    v250 = nullptr;
    v252 = 1;
    v253 = nullptr;
    v254 = 0;
    v255 = 1065353216;
    v256 = 0;
    v257[0] = 0;
    v259 = nullptr;
    v260 = v33;
    v261 = nullptr;
    v262 = nullptr;
    v263 = 0;
    v264 = 0;
    v265 = v33;
    v266 = nullptr;
    s = v273;
    v268 = 1;
    v269 = nullptr;
    v242 = (__m128)_mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
    v258 = v242;
    v270 = 0;
    v34 = *(_QWORD *)(v33 + 856);
    v271 = 1065353216;
    v272 = 0;
    v273[0] = 0;
    sub_14EA0D0(&v242, v31, v34);
    sub_14EA0D0(&v258, v31, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 864LL));
    v236 = 0;
    v237 = *(_QWORD *)(a1 + 16);
    if ( (_DWORD)v32 )
    {
      v205 = 0;
      v227 = 8 * v32;
      while ( 1 )
      {
        v35 = &v27[v205 / 4];
        v36 = v35[1];
        v208 = *v35;
        v238 = *v35;
        if ( !v36 )
          break;
        v37 = nullptr;
        v38 = 0;
        do
        {
          if ( v38 >= *(_DWORD *)(v36 - 4) )
            break;
          v39 = *(_QWORD *)(v36 + 8LL * v38);
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
          if ( v37 )
          {
            v40 = *((_DWORD *)v37 - 1);
            if ( v40 == *((_DWORD *)v37 - 2) )
            {
              v129 = (3 * v40 + 1) >> 1;
              v130 = 8 * v129 + 8;
              if ( 8 * v40 + 8 >= (unsigned int)v130 || v40 >= v129 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v239, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v239);
                sub_233E40((__int64)v239);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v222 = (3 * v40 + 1) >> 1;
              v213 = v35;
              v131 = (unsigned int *)sub_186B300(v37 - 1, v130);
              v35 = v213;
              v37 = (__int64 *)(v131 + 2);
              *v131 = v222;
              LODWORD(v131) = v131[1];
              v43 = &v37[(unsigned int)v131];
              v36 = v213[1];
              v42 = (_DWORD)v131 + 1;
            }
            else
            {
              v41 = v40;
              v42 = v40 + 1;
              v43 = &v37[v41];
            }
          }
          else
          {
            v216 = v35;
            v164 = (_QWORD *)sub_186B270(0x18u);
            v35 = v216;
            v43 = v164 + 1;
            v37 = v164 + 1;
            *v164 = 2;
            v36 = v216[1];
            v42 = 1;
          }
          *v43 = v39;
          ++v38;
          *((_DWORD *)v37 - 1) = v42;
        }
        while ( v36 );
        v44 = sub_15EC2C0(*(_QWORD *)(a1 + 16), v31);
        v45 = v44;
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        if ( !v37 )
          goto LABEL_243;
        v46 = *((_DWORD *)v37 - 1);
        if ( v46 != *((_DWORD *)v37 - 2) )
        {
          v47 = v46;
          v48 = v46 + 1;
          v49 = &v37[v47];
          goto LABEL_59;
        }
        v156 = (3 * v46 + 1) >> 1;
        v157 = 8 * v156 + 8;
        if ( 8 * v46 + 8 >= (unsigned int)v157 || v46 >= v156 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v239, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v239);
          sub_233E40((__int64)v239);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v158 = (unsigned int *)sub_186B300(v37 - 1, v157);
        v159 = v158[1];
        *v158 = v156;
        v37 = (__int64 *)(v158 + 2);
        v48 = v159 + 1;
        v37[v159] = v45;
        *((_DWORD *)v37 - 1) = v159 + 1;
        if ( v27 )
        {
LABEL_60:
          v50 = *((_DWORD *)v27 - 1);
          v51 = &v27[2 * v50];
          if ( v50 == *((_DWORD *)v27 - 2) )
          {
            v132 = (3 * v50 + 1) >> 1;
            v214 = v132;
            v133 = 16 * v132 + 8;
            if ( 16 * v50 + 8 >= (unsigned int)v133 || v50 >= v132 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v239, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v239);
              sub_233E40((__int64)v239);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134 = sub_186B270(v133);
            v135 = *((unsigned int *)v27 - 1);
            v136 = v134 + 8;
            v137 = (_DWORD *)v134;
            v138 = v134 + 8;
            *(_DWORD *)(v134 + 4) = v135;
            v139 = v135;
            v140 = v27;
            v141 = &v27[2 * v135];
            if ( v141 != v27 )
            {
              do
              {
                v142 = *v140;
                v140 += 2;
                v138 += 16;
                *(_QWORD *)(v138 - 16) = v142;
                v143 = *(v140 - 1);
                *(v140 - 1) = 0;
                *(_QWORD *)(v138 - 8) = v143;
              }
              while ( v140 != v141 );
            }
            v144 = &v27[2 * v135];
            if ( v139 )
            {
              v228 = v31;
              v145 = v136;
              v229 = v137;
              v230 = v27;
              v223 = v37;
              v146 = v27;
              do
              {
                v147 = (__int64 *)v146[1];
                if ( v147 )
                {
                  v148 = &v147[*((unsigned int *)v147 - 1)];
                  if ( v147 >= v148 )
                    goto LABEL_226;
                  do
                  {
                    while ( 1 )
                    {
                      v149 = *v147;
                      if ( *v147 )
                      {
                        v150 = *v146;
                        v14 = (*(_DWORD *)(v149 + 8))-- == 1;
                        if ( v14 )
                          break;
                      }
                      if ( ++v147 >= v148 )
                        goto LABEL_225;
                    }
                    sub_15D7BC0(v150, v149);
                    ++v147;
                  }
                  while ( v147 < v148 );
LABEL_225:
                  v147 = (__int64 *)v146[1];
                  if ( v147 )
LABEL_226:
                    sub_186B220(v147 - 1);
                }
                v146 += 2;
              }
              while ( v146 != v144 );
              v37 = v223;
              v31 = v228;
              v136 = v145;
              v137 = v229;
              v27 = v230;
            }
            v224 = v137;
            sub_186B220(v27 - 1);
            v151 = v224[1];
            v27 = (__int64 *)v136;
            *v224 = v214;
            v48 = *((_DWORD *)v37 - 1);
            v50 = v151;
            v51 = (__int64 *)(v136 + 16 * v151);
          }
          goto LABEL_61;
        }
LABEL_236:
        v160 = (_QWORD *)sub_186B270(0x28u);
        v27 = v160 + 1;
        *v160 = 2;
        v50 = 0;
        v48 = *((_DWORD *)v37 - 1);
        v51 = v27;
LABEL_61:
        v51[1] = 0;
        *v51 = v208;
        if ( v48 )
        {
          v52 = *v37;
          if ( *v37 )
            ++*(_DWORD *)(v52 + 8);
          v53 = (_QWORD *)sub_186B270(0x18u);
          v54 = v53 + 1;
          v51[1] = (__int64)(v53 + 1);
          v55 = v53 + 1;
          *v53 = 2;
          v56 = 0;
          for ( j = 1; ; j = (_DWORD)v127 + 1 )
          {
            *v54 = v52;
            v58 = v56 + 1;
            *((_DWORD *)v55 - 1) = j;
            if ( (unsigned int)v58 >= *((_DWORD *)v37 - 1) )
              break;
            while ( 1 )
            {
              v52 = v37[v58];
              if ( v52 )
                ++*(_DWORD *)(v52 + 8);
              v59 = *((_DWORD *)v55 - 1);
              if ( v59 == *((_DWORD *)v55 - 2) )
                break;
              ++v58;
              v55[v59] = v52;
              *((_DWORD *)v55 - 1) = v59 + 1;
              if ( (unsigned int)v58 >= *((_DWORD *)v37 - 1) )
                goto LABEL_70;
            }
            v125 = (3 * v59 + 1) >> 1;
            v126 = 8 * v125 + 8;
            if ( 8 * v59 + 8 >= (unsigned int)v126 || v59 >= v125 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v239, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v239);
              sub_233E40((__int64)v239);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v221 = v58;
            v212 = (3 * v59 + 1) >> 1;
            v127 = (unsigned int *)sub_186B300(v55 - 1, v126);
            v128 = v127[1];
            v55 = v127 + 2;
            v51[1] = (__int64)(v127 + 2);
            v56 = v221;
            *v127 = v212;
            LODWORD(v127) = v128;
            v54 = &v55[v128];
          }
LABEL_70:
          v50 = *((_DWORD *)v27 - 1);
        }
        *((_DWORD *)v27 - 1) = v50 + 1;
        v60 = &v27[v205 / 4];
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        v61 = (_QWORD *)v60[1];
        if ( v61 )
        {
          v62 = *((_DWORD *)v61 - 1);
          if ( v62 == *((_DWORD *)v61 - 2) )
          {
            v152 = (3 * v62 + 1) >> 1;
            v153 = 8 * v152 + 8;
            if ( 8 * v62 + 8 >= (unsigned int)v153 || v62 >= v152 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v239, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v239);
              sub_233E40((__int64)v239);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v154 = (unsigned int *)sub_186B300(v61 - 1, v153);
            v155 = v154[1];
            v61 = v154 + 2;
            *v154 = v152;
            v60[1] = (__int64)(v154 + 2);
            LODWORD(v154) = v155;
            v65 = &v61[v155];
            v64 = (_DWORD)v154 + 1;
          }
          else
          {
            v63 = v62;
            v64 = v62 + 1;
            v65 = &v61[v63];
          }
        }
        else
        {
          v168 = (_QWORD *)sub_186B270(0x18u);
          v61 = v168 + 1;
          *v168 = 2;
          v64 = 1;
          v60[1] = (__int64)v61;
          v65 = v61;
        }
        *v65 = v31;
        *((_DWORD *)v61 - 1) = v64;
        v220 = *(_QWORD *)(a1 + 16);
        v66 = &v29[v205 / 8];
        v67 = v29[v205 / 8];
        if ( v67 )
          ++*(_DWORD *)(v67 + 8);
        sub_14EA2A0(&v242, v67, &v236);
        v68 = v236;
        if ( v236 )
          ++*(_DWORD *)(v236 + 8);
        v69 = *v66;
        if ( *v66 )
        {
          v14 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v14 )
          {
            v217 = v68;
            sub_15D7BC0(v231, v69);
            v68 = v217;
          }
        }
        *v66 = v68;
        sub_14EA2A0(&v258, v67, &v236);
        v70 = v236;
        if ( v236 )
          ++*(_DWORD *)(v236 + 8);
        if ( v29 )
        {
          v71 = *((_DWORD *)v29 - 1);
          if ( v71 == *((_DWORD *)v29 - 2) )
          {
            v161 = (3 * v71 + 1) >> 1;
            v162 = 8 * v161 + 8;
            if ( 8 * v71 + 8 >= (unsigned int)v162 || v71 >= v161 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v239, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v239);
              sub_233E40((__int64)v239);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v226 = (3 * v71 + 1) >> 1;
            v215 = v70;
            v163 = (unsigned int *)sub_186B300(v29 - 1, v162);
            v29 = v163 + 2;
            v70 = v215;
            *v163 = v226;
            LODWORD(v163) = v163[1];
            v74 = &v29[(unsigned int)v163];
            v73 = (_DWORD)v163 + 1;
          }
          else
          {
            v72 = v71;
            v73 = v71 + 1;
            v74 = &v29[v72];
          }
        }
        else
        {
          v218 = v70;
          v167 = (_QWORD *)sub_186B270(0x18u);
          v29 = v167 + 1;
          v70 = v218;
          *v167 = 2;
          v74 = v167 + 1;
          v73 = 1;
        }
        *v74 = v70;
        *((_DWORD *)v29 - 1) = v73;
        if ( v67 )
        {
          v14 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v220, v67);
        }
        v75 = v37;
        v76 = &v37[*((unsigned int *)v37 - 1)];
        if ( v37 < v76 )
        {
          do
          {
            while ( 1 )
            {
              v77 = *v75;
              if ( *v75 )
              {
                v14 = (*(_DWORD *)(v77 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( ++v75 >= v76 )
                goto LABEL_97;
            }
            ++v75;
            sub_15D7BC0(v208, v77);
          }
          while ( v75 < v76 );
        }
LABEL_97:
        sub_186B220(v37 - 1);
        v205 += 8LL;
        if ( v205 == v227 )
        {
          v78 = v236;
          if ( v236 )
          {
            v79 = v237;
            v14 = (*(_DWORD *)(v236 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(v79, v78);
          }
          goto LABEL_101;
        }
      }
      v165 = sub_15EC2C0(*(_QWORD *)(a1 + 16), v31);
      v45 = v165;
      if ( v165 )
        ++*(_DWORD *)(v165 + 8);
LABEL_243:
      v166 = (_QWORD *)sub_186B270(0x18u);
      v49 = v166 + 1;
      *v166 = 2;
      v48 = 1;
      v37 = v49;
LABEL_59:
      *v49 = v45;
      *((_DWORD *)v37 - 1) = v48;
      if ( v27 )
        goto LABEL_60;
      goto LABEL_236;
    }
LABEL_101:
    v80 = v269;
    if ( v269 )
    {
      do
      {
        v81 = v80;
        v80 = (_QWORD *)*v80;
        operator delete(v81, 0x18u);
      }
      while ( v80 );
    }
    memset(s, 0, 8 * v268);
    v270 = 0;
    v269 = nullptr;
    if ( s != v273 )
      operator delete(s, 8 * v268);
    v82 = v266;
    if ( v266 )
    {
      v83 = (unsigned __int64)&v266[*((unsigned int *)v266 - 1)];
      if ( (unsigned __int64)v266 >= v83 )
        goto LABEL_113;
      do
      {
        while ( 1 )
        {
          v84 = *v82;
          if ( *v82 )
          {
            v85 = v265;
            v14 = (*(_DWORD *)(v84 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v82 >= v83 )
            goto LABEL_112;
        }
        sub_15D7BC0(v85, v84);
        ++v82;
      }
      while ( (unsigned __int64)v82 < v83 );
LABEL_112:
      v82 = v266;
      if ( v266 )
LABEL_113:
        sub_186B220(v82 - 1);
    }
    if ( v264 )
      sub_186B220((void *)(v264 - 8));
    if ( v263 )
      sub_186B220((void *)(v263 - 8));
    if ( v262 )
      sub_186B220((char *)v262 - 8);
    v86 = v261;
    if ( v261 )
    {
      v87 = (unsigned __int64)&v261[*((unsigned int *)v261 - 1)];
      if ( (unsigned __int64)v261 >= v87 )
        goto LABEL_128;
      do
      {
        while ( 1 )
        {
          v88 = *v86;
          if ( *v86 )
          {
            v89 = v260;
            v14 = (*(_DWORD *)(v88 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v86 >= v87 )
            goto LABEL_127;
        }
        sub_15D7BC0(v89, v88);
        ++v86;
      }
      while ( (unsigned __int64)v86 < v87 );
LABEL_127:
      v86 = v261;
      if ( v261 )
LABEL_128:
        sub_186B220(v86 - 1);
    }
    v90 = v259;
    if ( v259 )
    {
      v91 = (unsigned __int64)&v259[*((unsigned int *)v259 - 1)];
      if ( (unsigned __int64)v259 >= v91 )
        goto LABEL_137;
      do
      {
        while ( 1 )
        {
          v92 = *v90;
          if ( *v90 )
          {
            v93 = v258.m128_u64[1];
            v14 = (*(_DWORD *)(v92 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v90 >= v91 )
            goto LABEL_136;
        }
        sub_15D7BC0(v93, v92);
        ++v90;
      }
      while ( (unsigned __int64)v90 < v91 );
LABEL_136:
      v90 = v259;
      if ( v259 )
LABEL_137:
        sub_186B220(v90 - 1);
    }
    v94 = v253;
    if ( v253 )
    {
      do
      {
        v95 = v94;
        v94 = (_QWORD *)*v94;
        operator delete(v95, 0x18u);
      }
      while ( v94 );
    }
    memset(v251, 0, 8 * v252);
    v254 = 0;
    v253 = nullptr;
    if ( v251 != v257 )
      operator delete(v251, 8 * v252);
    v96 = v250;
    if ( v250 )
    {
      v97 = (unsigned __int64)&v250[*((unsigned int *)v250 - 1)];
      if ( (unsigned __int64)v250 >= v97 )
        goto LABEL_150;
      do
      {
        while ( 1 )
        {
          v98 = *v96;
          if ( *v96 )
          {
            v99 = v249;
            v14 = (*(_DWORD *)(v98 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v96 >= v97 )
            goto LABEL_149;
        }
        sub_15D7BC0(v99, v98);
        ++v96;
      }
      while ( (unsigned __int64)v96 < v97 );
LABEL_149:
      v96 = v250;
      if ( v250 )
LABEL_150:
        sub_186B220(v96 - 1);
    }
    if ( v248 )
      sub_186B220((void *)(v248 - 8));
    if ( v247 )
      sub_186B220((void *)(v247 - 8));
    if ( v246 )
      sub_186B220((char *)v246 - 8);
    v100 = v245;
    if ( v245 )
    {
      v101 = (unsigned __int64)&v245[*((unsigned int *)v245 - 1)];
      if ( (unsigned __int64)v245 >= v101 )
        goto LABEL_165;
      do
      {
        while ( 1 )
        {
          v102 = *v100;
          if ( *v100 )
          {
            v103 = v244;
            v14 = (*(_DWORD *)(v102 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v100 >= v101 )
            goto LABEL_164;
        }
        sub_15D7BC0(v103, v102);
        ++v100;
      }
      while ( (unsigned __int64)v100 < v101 );
LABEL_164:
      v100 = v245;
      if ( v245 )
LABEL_165:
        sub_186B220(v100 - 1);
    }
    v104 = v243;
    if ( v243 )
    {
      v105 = (unsigned __int64)&v243[*((unsigned int *)v243 - 1)];
      if ( (unsigned __int64)v243 >= v105 )
        goto LABEL_174;
      do
      {
        while ( 1 )
        {
          v106 = *v104;
          if ( *v104 )
          {
            v107 = v242.m128_u64[1];
            v14 = (*(_DWORD *)(v106 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v104 >= v105 )
            goto LABEL_173;
        }
        sub_15D7BC0(v107, v106);
        ++v104;
      }
      while ( (unsigned __int64)v104 < v105 );
LABEL_173:
      v104 = v243;
      if ( v243 )
LABEL_174:
        sub_186B220(v104 - 1);
    }
    v108 = v233 + 8;
    if ( v232 != v233 + 8 )
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)v108;
        if ( *(_QWORD *)v108 > 1u )
          break;
        v108 += 8;
        if ( v232 == v108 )
          goto LABEL_180;
      }
      v233 = v108;
      if ( v232 != v108 )
        continue;
    }
    break;
  }
LABEL_180:
  if ( v27 )
    goto LABEL_181;
LABEL_271:
  if ( v29 )
  {
    v181 = v29;
    v182 = (unsigned __int64)&v29[*((unsigned int *)v29 - 1)];
    if ( (unsigned __int64)v29 < v182 )
    {
      do
      {
        while ( 1 )
        {
          v183 = *v181;
          if ( *v181 )
          {
            v14 = (*(_DWORD *)(v183 + 8))-- == 1;
            if ( v14 )
              break;
          }
          if ( (unsigned __int64)++v181 >= v182 )
            goto LABEL_278;
        }
        ++v181;
        sub_15D7BC0(v231, v183);
      }
      while ( (unsigned __int64)v181 < v182 );
    }
LABEL_278:
    sub_186B220(v29 - 1);
  }
  result = (__int64)ptr;
  if ( ptr )
    return sub_186B220(ptr);
  return result;
}

