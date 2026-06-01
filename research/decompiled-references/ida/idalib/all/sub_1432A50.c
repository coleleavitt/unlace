__int64 __fastcall sub_1432A50(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 a4,
        _BYTE *a5,
        __int64 a6,
        __m128i a7,
        __m128 si128)
{
  size_t v8; // r15
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned int v11; // ebx
  int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // r11
  unsigned int v17; // r12d
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v21; // rsi
  int v22; // ecx
  void *v23; // rax
  __int64 v24; // rdx
  int v25; // ebx
  size_t v26; // rdi
  char v27; // al
  unsigned __int64 v28; // rsi
  void *v29; // rsi
  size_t v30; // rcx
  _QWORD *v31; // rax
  void *v32; // rsi
  size_t v33; // rcx
  __m128i *v34; // rax
  size_t v35; // rax
  size_t v36; // r9
  unsigned __int64 v37; // rcx
  __m128i *v38; // rax
  size_t v39; // rsi
  unsigned __int64 v40; // rdi
  size_t v41; // r8
  size_t v42; // r9
  unsigned __int64 v43; // rdx
  __m128i *v44; // rax
  size_t v45; // rcx
  _BYTE *v46; // rsi
  unsigned __int8 *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // r9
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rax
  void **v54; // rcx
  _BYTE *v55; // rdi
  __int64 v56; // rax
  void *v57; // rax
  unsigned int v58; // edi
  __int64 v59; // rsi
  void *v60; // rsi
  size_t v61; // rcx
  _QWORD *v62; // rax
  void *v63; // rsi
  size_t v64; // rcx
  __m128i *v65; // rax
  size_t v66; // rax
  size_t v67; // r9
  unsigned __int64 v68; // rcx
  __m128i *v69; // rax
  size_t v70; // rsi
  unsigned __int64 v71; // rdi
  size_t v72; // r8
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // rdx
  __m128i *v75; // rax
  size_t v76; // rcx
  _BYTE *v77; // rsi
  unsigned __int8 *v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rax
  _QWORD *v81; // r9
  __int64 v82; // rax
  int v83; // edx
  __int64 v84; // rax
  void **v85; // rcx
  _BYTE *v86; // rdi
  __int64 v87; // rax
  void *v88; // rax
  void *v89; // rax
  size_t v90; // rbx
  bool v91; // cc
  unsigned __int8 v92; // al
  __int64 v93; // rsi
  size_t v94; // rdi
  int v95; // eax
  void *v96; // rdi
  char v97; // si
  unsigned int v98; // ebp
  void *v99; // rax
  unsigned int v100; // eax
  char v101; // bp
  unsigned __int64 v102; // rdx
  void *v103; // rdx
  unsigned __int64 v104; // rdx
  size_t v105; // rdi
  unsigned int v106; // ebx
  unsigned int v107; // edx
  __int64 v108; // rax
  unsigned int v109; // r8d
  char v110; // bp
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rdx
  unsigned int v113; // ebx
  unsigned int v114; // eax
  void **v115; // rsi
  char v116; // al
  unsigned __int16 v117; // ax
  size_t v118; // rdi
  size_t v119; // rsi
  size_t v120; // rdi
  char v121; // bp
  void *v122; // rdx
  int v123; // eax
  size_t v124; // rsi
  void *v125; // rax
  void *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rax
  __int64 v130; // rsi
  unsigned __int64 v131; // rax
  int v132; // eax
  unsigned int v133; // ebp
  __int8 *v134; // rdi
  __int8 *v135; // rdi
  size_t v136; // rsi
  void *v137; // rdx
  size_t v138; // rdx
  __m128i v139; // xmm3
  size_t v140; // rdx
  __m128i v141; // xmm6
  __int64 v142; // rdx
  int v143; // eax
  __int64 v144; // rdx
  int v145; // eax
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // r8
  __int64 v149; // rdx
  __int64 v150; // r15
  __int16 v151; // r13
  __int64 v152; // rbp
  __int64 v153; // rbx
  void *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rdx
  unsigned int v159; // r13d
  unsigned __int8 *v160; // r12
  __int16 v161; // r14
  __int64 v162; // rbp
  __int64 v163; // rbx
  void *v164; // rdi
  void *v165; // rax
  unsigned int v167; // [rsp+18h] [rbp-3E0h]
  void *v168; // [rsp+18h] [rbp-3E0h]
  void *v169; // [rsp+18h] [rbp-3E0h]
  unsigned int v170; // [rsp+18h] [rbp-3E0h]
  unsigned int v171; // [rsp+18h] [rbp-3E0h]
  unsigned int v172; // [rsp+18h] [rbp-3E0h]
  void *v173; // [rsp+18h] [rbp-3E0h]
  unsigned int v174; // [rsp+18h] [rbp-3E0h]
  unsigned int v175; // [rsp+18h] [rbp-3E0h]
  int v178; // [rsp+34h] [rbp-3C4h]
  unsigned int v179; // [rsp+48h] [rbp-3B0h]
  void *v180; // [rsp+48h] [rbp-3B0h]
  unsigned __int64 v181; // [rsp+48h] [rbp-3B0h]
  size_t v182; // [rsp+50h] [rbp-3A8h]
  size_t v183; // [rsp+50h] [rbp-3A8h]
  size_t v184; // [rsp+50h] [rbp-3A8h]
  size_t v185; // [rsp+58h] [rbp-3A0h]
  size_t v186; // [rsp+58h] [rbp-3A0h]
  size_t v187; // [rsp+58h] [rbp-3A0h]
  size_t v188; // [rsp+58h] [rbp-3A0h]
  __int64 v189; // [rsp+58h] [rbp-3A0h]
  void *v190; // [rsp+58h] [rbp-3A0h]
  __int64 v191; // [rsp+58h] [rbp-3A0h]
  __int64 v192; // [rsp+58h] [rbp-3A0h]
  size_t v193; // [rsp+58h] [rbp-3A0h]
  void **v194; // [rsp+58h] [rbp-3A0h]
  size_t v195; // [rsp+60h] [rbp-398h]
  size_t v196; // [rsp+60h] [rbp-398h]
  size_t v197; // [rsp+60h] [rbp-398h]
  size_t v198; // [rsp+60h] [rbp-398h]
  void *v199; // [rsp+60h] [rbp-398h]
  size_t v200; // [rsp+60h] [rbp-398h]
  size_t v201; // [rsp+60h] [rbp-398h]
  size_t v202; // [rsp+60h] [rbp-398h]
  size_t v203; // [rsp+60h] [rbp-398h]
  size_t v204; // [rsp+60h] [rbp-398h]
  void **v205; // [rsp+60h] [rbp-398h]
  size_t v206; // [rsp+60h] [rbp-398h]
  size_t v207; // [rsp+60h] [rbp-398h]
  size_t v208; // [rsp+60h] [rbp-398h]
  void *v209; // [rsp+68h] [rbp-390h]
  void *v210; // [rsp+68h] [rbp-390h]
  void *v211; // [rsp+68h] [rbp-390h]
  void *v212; // [rsp+68h] [rbp-390h]
  void *v213; // [rsp+68h] [rbp-390h]
  __int64 v214; // [rsp+80h] [rbp-378h]
  unsigned __int8 *v215; // [rsp+88h] [rbp-370h]
  void *v216; // [rsp+90h] [rbp-368h] BYREF
  unsigned int v217; // [rsp+98h] [rbp-360h]
  char v218; // [rsp+9Ch] [rbp-35Ch]
  char v219[16]; // [rsp+A0h] [rbp-358h] BYREF
  char v220; // [rsp+B0h] [rbp-348h]
  void *v221; // [rsp+C0h] [rbp-338h] BYREF
  __int64 v222; // [rsp+C8h] [rbp-330h]
  void *v223; // [rsp+D0h] [rbp-328h] BYREF
  unsigned int v224; // [rsp+D8h] [rbp-320h]
  char v225; // [rsp+DCh] [rbp-31Ch]
  void *v226; // [rsp+E0h] [rbp-318h] BYREF
  size_t v227; // [rsp+E8h] [rbp-310h]
  __m128i v228; // [rsp+F0h] [rbp-308h] BYREF
  void *v229; // [rsp+100h] [rbp-2F8h] BYREF
  size_t v230; // [rsp+108h] [rbp-2F0h]
  __m128i v231; // [rsp+110h] [rbp-2E8h] BYREF
  void *v232; // [rsp+120h] [rbp-2D8h] BYREF
  size_t v233; // [rsp+128h] [rbp-2D0h]
  _QWORD v234[2]; // [rsp+130h] [rbp-2C8h] BYREF
  void *v235; // [rsp+140h] [rbp-2B8h]
  size_t v236; // [rsp+148h] [rbp-2B0h]
  __m128i v237; // [rsp+150h] [rbp-2A8h] BYREF
  void *v238; // [rsp+160h] [rbp-298h] BYREF
  size_t v239; // [rsp+168h] [rbp-290h]
  __m128i v240; // [rsp+170h] [rbp-288h] BYREF
  void *v241; // [rsp+180h] [rbp-278h] BYREF
  size_t v242; // [rsp+188h] [rbp-270h]
  __m128i v243; // [rsp+190h] [rbp-268h] BYREF
  void *src; // [rsp+1A0h] [rbp-258h] BYREF
  size_t n; // [rsp+1A8h] [rbp-250h]
  _QWORD v246[2]; // [rsp+1B0h] [rbp-248h] BYREF
  void *v247; // [rsp+1C0h] [rbp-238h]
  size_t v248; // [rsp+1C8h] [rbp-230h]
  __m128i v249; // [rsp+1D0h] [rbp-228h] BYREF
  void *v250; // [rsp+1E0h] [rbp-218h]
  size_t v251; // [rsp+1E8h] [rbp-210h]
  _QWORD v252[2]; // [rsp+1F0h] [rbp-208h] BYREF
  void *v253; // [rsp+200h] [rbp-1F8h]
  size_t v254; // [rsp+208h] [rbp-1F0h]
  _QWORD v255[2]; // [rsp+210h] [rbp-1E8h] BYREF
  void *v256; // [rsp+220h] [rbp-1D8h] BYREF
  size_t v257[2]; // [rsp+228h] [rbp-1D0h]
  _BYTE v258[40]; // [rsp+238h] [rbp-1C0h] BYREF
  void *v259; // [rsp+260h] [rbp-198h] BYREF
  __m128i v260; // [rsp+268h] [rbp-190h]
  _BYTE v261[40]; // [rsp+278h] [rbp-180h] BYREF
  void *v262; // [rsp+2A0h] [rbp-158h] BYREF
  size_t v263[2]; // [rsp+2A8h] [rbp-150h]
  _BYTE v264[40]; // [rsp+2B8h] [rbp-140h] BYREF
  void *ptr; // [rsp+2E0h] [rbp-118h] BYREF
  size_t v266[2]; // [rsp+2E8h] [rbp-110h]
  _BYTE v267[40]; // [rsp+2F8h] [rbp-100h] BYREF
  void *v268; // [rsp+320h] [rbp-D8h] BYREF
  __int64 v269; // [rsp+328h] [rbp-D0h]
  char v270; // [rsp+330h] [rbp-C8h]
  void *v271; // [rsp+370h] [rbp-88h] BYREF
  __int64 v272; // [rsp+378h] [rbp-80h]
  void *v273; // [rsp+380h] [rbp-78h] BYREF
  unsigned int v274; // [rsp+388h] [rbp-70h]
  char v275; // [rsp+38Ch] [rbp-6Ch]

  v8 = (size_t)a1;
  v9 = a6;
  v10 = a3;
  if ( *(_BYTE *)(*(_QWORD *)(a6 + 40) + 234LL) )
  {
    v11 = (unsigned __int8)*a5;
    if ( (_BYTE)v11 )
    {
      sub_141A820(a6, (unsigned int *)a3);
      return v11;
    }
  }
  v12 = *(unsigned __int16 *)(a3 + 16);
  if ( (unsigned __int16)(v12 - 2) > 0x40u || (v13 = byte_2614C40[(unsigned __int16)(v12 - 2)], v167 = v13, v13 == -1) )
  {
    v11 = 1;
    sub_142B270(a6, a1, a3);
    return v11;
  }
  if ( a2 > v13 )
    return 0;
  while ( 1 )
  {
    switch ( (_WORD)v12 )
    {
      case 0x1D:
        goto LABEL_38;
      case 0x3B:
        if ( (unsigned __int8)sub_142BC90(v8 + 16, nullptr) )
        {
          v14 = 0;
          goto LABEL_10;
        }
        break;
      case 0x3D:
LABEL_38:
        LODWORD(v266[0]) = 64;
        ptr = nullptr;
        v24 = *(unsigned int *)(v8 + 24);
        BYTE4(v266[0]) = 0;
        if ( (_DWORD)v24 == 64 )
        {
          v26 = v8 + 16;
          if ( *(_BYTE *)(v8 + 28) )
            v25 = sub_2205DB0(v26, &ptr);
          else
            v25 = sub_2205E20(v26, &ptr);
          goto LABEL_53;
        }
        if ( (unsigned int)v24 <= 0x40 )
        {
          v124 = v8 + 16;
          if ( *(_BYTE *)(v8 + 28) )
          {
            sub_2206CD0(&v271, v124, 64);
            BYTE4(v269) = 1;
          }
          else
          {
            sub_2206B70(&v271, v124, 64);
            BYTE4(v269) = 0;
          }
          LODWORD(v269) = v272;
          v268 = v271;
          v25 = sub_98E2D0((__int64 *)&v268, (__int64 *)&ptr);
          if ( (unsigned int)v269 > 0x40 )
          {
LABEL_41:
            if ( v268 )
              operator delete[](v268);
          }
        }
        else
        {
          sub_2206B70(&v271, &ptr, v24);
          BYTE4(v269) = 0;
          LODWORD(v269) = v272;
          v268 = v271;
          v25 = sub_98E2D0((__int64 *)(v8 + 16), (__int64 *)&v268);
          if ( (unsigned int)v269 > 0x40 )
            goto LABEL_41;
        }
        if ( LODWORD(v266[0]) > 0x40 && ptr )
          operator delete[](ptr);
LABEL_53:
        if ( !v25 )
        {
          v14 = 0;
          goto LABEL_10;
        }
        break;
    }
    v14 = a4;
LABEL_10:
    v178 = *(_DWORD *)v10;
    do
      sub_14634E0(v9, v10);
    while ( *(_WORD *)(v10 + 16) == 4 );
    v221 = nullptr;
    v15 = *(_DWORD *)(v8 + 24);
    v222 = 0;
    v224 = v15;
    if ( v15 > 0x40 )
      sub_2205470(&v223, 0, 0);
    else
      v223 = nullptr;
    v225 = 1;
    v220 = 0;
    if ( (unsigned __int8)sub_1431530(
                            (__int64)&v221,
                            (unsigned int *)v10,
                            (__int64)v219,
                            v14,
                            v9,
                            a7,
                            *(double *)si128.m128_u64) )
      goto LABEL_32;
    *a5 = v220;
    if ( (unsigned __int16)(*(_WORD *)(v10 + 16) - 2) > 0x40u
      || (v17 = byte_2614C40[(unsigned __int16)(*(_WORD *)(v10 + 16) - 2)], v17 == -1) )
    {
      sub_142B270(v9, (__int64 *)&v221, v10);
      if ( v224 > 0x40 )
        goto LABEL_33;
      return 1;
    }
    v18 = v167 + 1;
    if ( (_WORD)v12 == 61 )
      v18 = 3;
    if ( (unsigned int)v18 <= v17 )
    {
      if ( (unsigned __int8)sub_1432A50(&v221, v18, v10, v14, a5, v9) )
        goto LABEL_32;
      v17 = -1;
      if ( (unsigned __int16)(*(_WORD *)(v10 + 16) - 2) <= 0x40u )
        v17 = byte_2614C40[(unsigned __int16)(*(_WORD *)(v10 + 16) - 2)];
    }
    v217 = *(_DWORD *)(v8 + 24);
    if ( v217 > 0x40 )
      sub_2205470(&v216, 0, 0);
    else
      v216 = nullptr;
    v218 = 1;
    if ( (unsigned __int16)(v12 - 29) <= 0x25u )
    {
      v19 = 0x2141080001LL;
      if ( _bittest64(&v19, (unsigned int)(v12 - 29)) )
        break;
    }
LABEL_55:
    v27 = *(_BYTE *)(v8 + 28);
    if ( v27 )
    {
      if ( !a4 )
        goto LABEL_113;
LABEL_57:
      if ( v225 )
        goto LABEL_112;
      v28 = (unsigned __int64)v223;
      if ( v224 > 0x40 )
        v28 = *((_QWORD *)v223 + ((v224 - 1) >> 6));
      if ( (v28 & (1LL << ((unsigned __int8)v224 - 1))) == 0 )
        goto LABEL_112;
      sub_FC70B0((__int64)&v271, *(_QWORD *)(v9 + 48), v178, 1373);
      sub_AE9DF0((unsigned __int8 **)&v271, 1, 2u);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      ptr = v267;
      *(__m128 *)v266 = si128;
      sub_220BA90((unsigned int)&v221 + 16, (unsigned int)&ptr, 10, 0, 0, 1, 0);
      v29 = ptr;
      v30 = v266[0];
      src = v246;
      if ( (char *)ptr + v266[0] && !ptr )
        goto LABEL_447;
      if ( v266[0] > 0xF )
      {
        v190 = ptr;
        if ( (v266[0] & 0x8000000000000000LL) != 0LL )
          goto LABEL_445;
        v184 = v266[0];
        v31 = (_QWORD *)operator new(v266[0] + 1);
        v30 = v184;
        v29 = v190;
        src = v31;
        v246[0] = v184;
      }
      else
      {
        if ( v266[0] == 1 )
        {
          LOBYTE(v246[0]) = *(_BYTE *)ptr;
          v31 = v246;
          goto LABEL_66;
        }
        v31 = v246;
        if ( !v266[0] )
        {
LABEL_66:
          n = v30;
          *((_BYTE *)v31 + v30) = 0;
          if ( ptr != v267 )
            free(ptr);
          v262 = v264;
          *(__m128i *)v263 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          sub_220BA90((unsigned int)&v221 + 16, (unsigned int)&v262, 10, 1, 0, 1, 0);
          v32 = v262;
          v33 = v263[0];
          v238 = &v240;
          if ( (char *)v262 + v263[0] && !v262 )
            goto LABEL_447;
          if ( v263[0] > 0xF )
          {
            v199 = v262;
            if ( (v263[0] & 0x8000000000000000LL) != 0LL )
              goto LABEL_445;
            v189 = v263[0];
            v34 = (__m128i *)operator new(v263[0] + 1);
            v33 = v189;
            v32 = v199;
            v238 = v34;
            v240.m128i_i64[0] = v189;
          }
          else
          {
            if ( v263[0] == 1 )
            {
              v240.m128i_i8[0] = *(_BYTE *)v262;
              v34 = &v240;
              goto LABEL_73;
            }
            v34 = &v240;
            if ( !v263[0] )
            {
LABEL_73:
              v239 = v33;
              v34->m128i_i8[v33] = 0;
              if ( v262 != v264 )
                free(v262);
              v35 = v239;
              if ( 0x7FFFFFFFFFFFFFFFLL - v239 <= 3 )
                goto LABEL_446;
              v36 = v239 + 4;
              if ( v238 == &v240 )
                v37 = 15;
              else
                v37 = v240.m128i_i64[0];
              if ( v36 > v37 )
              {
                v187 = v239 + 4;
                v182 = v239;
                sub_998B30((__int64)&v238, v239, 0, " to ", 4u);
                v36 = v187;
                v35 = v182;
              }
              else
              {
                *(_DWORD *)((char *)v238 + v239) = 544175136;
              }
              v239 = v36;
              *((_BYTE *)v238 + v35 + 4) = 0;
              v38 = (__m128i *)v238;
              v241 = &v243;
              if ( v238 == &v240 )
              {
                v39 = v239;
                v41 = n;
                v38 = &v243;
                v40 = 15;
                v141 = _mm_load_si128(&v240);
                v239 = 0;
                v242 = v39;
                v42 = n + v39;
                v243 = v141;
                v240.m128i_i8[0] = 0;
              }
              else
              {
                v39 = v239;
                v40 = v240.m128i_i64[0];
                v238 = &v240;
                v41 = n;
                v241 = v38;
                v242 = v239;
                v239 = 0;
                v42 = n + v242;
                v240.m128i_i8[0] = 0;
                v243.m128i_i64[0] = v40;
                if ( v38 == &v243 )
                  v40 = 15;
              }
              if ( v40 >= v42 )
              {
                if ( v41 )
                {
                  v134 = &v38->m128i_i8[v39];
                  if ( v41 == 1 )
                  {
                    *v134 = *(_BYTE *)src;
                    v38 = (__m128i *)v241;
                  }
                  else
                  {
                    v186 = v42;
                    memcpy(v134, src, v41);
                    v38 = (__m128i *)v241;
                    v42 = v186;
                  }
                }
              }
              else
              {
                if ( src == v246 )
                  v43 = 15;
                else
                  v43 = v246[0];
                if ( v43 >= v42 )
                {
                  v44 = (__m128i *)sub_99BDC0(&src, 0, 0, v38, v39);
LABEL_89:
                  v247 = &v249;
                  if ( (__m128i *)v44->m128i_i64[0] == &v44[1] )
                  {
                    v249 = _mm_loadu_si128(v44 + 1);
                  }
                  else
                  {
                    v247 = (void *)v44->m128i_i64[0];
                    v249.m128i_i64[0] = v44[1].m128i_i64[0];
                  }
                  v45 = v44->m128i_u64[1];
                  v44[1].m128i_i8[0] = 0;
                  v248 = v45;
                  v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
                  v46 = v247;
                  v44->m128i_i64[1] = 0;
                  v47 = (unsigned __int8 *)v271;
                  v48 = v248;
                  if ( !v271 )
                  {
                    v144 = v272;
                    v145 = *(_DWORD *)(v272 + 14976);
                    if ( v145 )
                    {
                      v155 = (unsigned int)(v145 - 1);
                      *(_DWORD *)(v272 + 14976) = v155;
                      v47 = *(unsigned __int8 **)(v144 + 8 * v155 + 14848);
                      v156 = *((unsigned int *)v47 + 134);
                      *v47 = 0;
                      v157 = *((_QWORD *)v47 + 66);
                      *((_DWORD *)v47 + 106) = 0;
                      v158 = v157 + (v156 << 6);
                      if ( v157 != v158 )
                      {
                        v208 = v10;
                        v159 = v17;
                        v160 = v47;
                        v213 = (void *)v9;
                        v161 = v12;
                        v162 = v157;
                        v163 = v158;
                        do
                        {
                          while ( 1 )
                          {
                            v163 -= 64;
                            v164 = *(void **)(v163 + 24);
                            if ( v164 == (void *)(v163 + 40) )
                              break;
                            v214 = v48;
                            operator delete(v164);
                            v48 = v214;
                            if ( v162 == v163 )
                              goto LABEL_430;
                          }
                        }
                        while ( v162 != v163 );
LABEL_430:
                        v47 = v160;
                        LOWORD(v12) = v161;
                        v17 = v159;
                        v10 = v208;
                        v9 = (__int64)v213;
                      }
                      *((_DWORD *)v47 + 134) = 0;
                    }
                    else
                    {
                      v206 = v248;
                      v47 = (unsigned __int8 *)operator new(0x3A0u);
                      *v47 = 0;
                      *((_QWORD *)v47 + 12) = v47 + 112;
                      *((_QWORD *)v47 + 16) = v47 + 144;
                      *((_QWORD *)v47 + 20) = v47 + 176;
                      *((_QWORD *)v47 + 24) = v47 + 208;
                      *((_QWORD *)v47 + 28) = v47 + 240;
                      *((_QWORD *)v47 + 32) = v47 + 272;
                      *((_QWORD *)v47 + 36) = v47 + 304;
                      *((_QWORD *)v47 + 40) = v47 + 336;
                      *((_QWORD *)v47 + 44) = v47 + 368;
                      *((_QWORD *)v47 + 48) = v47 + 400;
                      *((_QWORD *)v47 + 52) = v47 + 432;
                      *((_QWORD *)v47 + 13) = 0;
                      v47[112] = 0;
                      *((_QWORD *)v47 + 17) = 0;
                      v47[144] = 0;
                      *((_QWORD *)v47 + 21) = 0;
                      v47[176] = 0;
                      *((_QWORD *)v47 + 25) = 0;
                      v47[208] = 0;
                      *((_QWORD *)v47 + 29) = 0;
                      v47[240] = 0;
                      *((_QWORD *)v47 + 33) = 0;
                      v47[272] = 0;
                      *((_QWORD *)v47 + 37) = 0;
                      v47[304] = 0;
                      *((_QWORD *)v47 + 41) = 0;
                      v47[336] = 0;
                      *((_QWORD *)v47 + 45) = 0;
                      v47[368] = 0;
                      *((_QWORD *)v47 + 49) = 0;
                      v47[400] = 0;
                      *((_QWORD *)v47 + 53) = 0x800000000LL;
                      *((_QWORD *)v47 + 66) = v47 + 544;
                      v48 = v206;
                      *((_QWORD *)v47 + 67) = 0x600000000LL;
                    }
                    v271 = v47;
                  }
                  v47[*v47 + 1] = 0;
                  v253 = v255;
                  if ( &v46[v48] && !v46 )
                    goto LABEL_447;
                  if ( (unsigned __int64)v48 > 0xF )
                  {
                    if ( v48 < 0 )
                      goto LABEL_445;
                    v192 = v48;
                    v49 = (_QWORD *)operator new(v48 + 1);
                    v48 = v192;
                    v253 = v49;
                    v255[0] = v192;
                  }
                  else
                  {
                    if ( v48 == 1 )
                    {
                      LOBYTE(v255[0]) = *v46;
                      v49 = v255;
                      goto LABEL_97;
                    }
                    v49 = v255;
                    if ( !v48 )
                    {
LABEL_97:
                      v254 = v48;
                      *((_BYTE *)v49 + v48) = 0;
                      v50 = v271;
                      v51 = *(unsigned __int8 *)v271;
                      *(_BYTE *)v271 = v51 + 1;
                      v52 = (unsigned __int8)v51;
                      v53 = 4 * (v51 + 3);
                      v54 = (void **)&v50[v53];
                      v55 = (_BYTE *)v50[v53];
                      if ( v253 == v255 )
                      {
                        v140 = v254;
                        if ( v254 )
                        {
                          if ( v254 == 1 )
                          {
                            *v55 = v255[0];
                            v140 = v254;
                            v55 = *v54;
                          }
                          else
                          {
                            v194 = (void **)&v50[v53];
                            memcpy(v55, v253, v254);
                            v54 = v194;
                            v140 = v254;
                            v55 = *v194;
                          }
                        }
                        v54[1] = (void *)v140;
                        v55[v140] = 0;
                        v55 = v253;
                        goto LABEL_101;
                      }
                      if ( v55 == (_BYTE *)&v50[v53 + 2] )
                      {
                        *v54 = v253;
                        v54[1] = (void *)v254;
                        v54[2] = (void *)v255[0];
                      }
                      else
                      {
                        v56 = v50[4 * v52 + 14];
                        *v54 = v253;
                        v54[1] = (void *)v254;
                        v54[2] = (void *)v255[0];
                        if ( v55 )
                        {
                          v253 = v55;
                          v255[0] = v56;
LABEL_101:
                          v254 = 0;
                          *v55 = 0;
                          if ( v253 != v255 )
                            operator delete(v253);
                          v57 = *(void **)v8;
                          LOBYTE(v269) = 1;
                          v268 = v57;
                          sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
                          LOBYTE(v269) = 1;
                          v268 = v221;
                          sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
                          if ( v247 != &v249 )
                            operator delete(v247);
                          if ( v241 != &v243 )
                            operator delete(v241);
                          if ( v238 != &v240 )
                            operator delete(v238);
                          if ( src != v246 )
                            operator delete(src);
                          sub_AEA040((__int64)&v271);
LABEL_112:
                          v27 = v218;
                          goto LABEL_113;
                        }
                      }
                      v55 = v255;
                      v253 = v255;
                      goto LABEL_101;
                    }
                  }
                  v191 = v48;
                  memcpy(v49, v46, v48);
                  v48 = v191;
                  v49 = v253;
                  goto LABEL_97;
                }
                v185 = v42;
                sub_998B30((__int64)&v241, v39, 0, src, v41);
                v38 = (__m128i *)v241;
                v42 = v185;
              }
              v242 = v42;
              v38->m128i_i8[v42] = 0;
              v44 = (__m128i *)&v241;
              goto LABEL_89;
            }
          }
          v188 = v33;
          memcpy(v34, v32, v33);
          v34 = (__m128i *)v238;
          v33 = v188;
          goto LABEL_73;
        }
      }
      v183 = v30;
      memcpy(v31, v29, v30);
      v31 = src;
      v30 = v183;
      goto LABEL_66;
    }
    v27 = v225;
    if ( !v225 )
    {
      v218 = 0;
      goto LABEL_113;
    }
    if ( a4 )
    {
      v58 = *(_DWORD *)(v8 + 24);
      v59 = *(_QWORD *)(v8 + 16);
      if ( v58 > 0x40 )
        v59 = *(_QWORD *)(v59 + 8LL * ((v58 - 1) >> 6));
      if ( (v59 & (1LL << ((unsigned __int8)v58 - 1))) != 0 )
      {
        sub_FC70B0((__int64)&v268, *(_QWORD *)(v9 + 48), v178, 1373);
        sub_AE9DF0((unsigned __int8 **)&v268, 0, 2u);
        a7 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        v259 = v261;
        v260 = a7;
        sub_220BA90(v8 + 16, (unsigned int)&v259, 10, 0, 0, 1, 0);
        v60 = v259;
        v61 = v260.m128i_i64[0];
        v232 = v234;
        if ( (char *)v259 + v260.m128i_i64[0] && !v259 )
          goto LABEL_447;
        if ( v260.m128i_i64[0] > 0xFuLL )
        {
          if ( v260.m128i_i64[0] < 0 )
            goto LABEL_445;
          v209 = v259;
          v197 = v260.m128i_i64[0];
          v62 = (_QWORD *)operator new(v260.m128i_i64[0] + 1);
          v61 = v197;
          v60 = v209;
          v232 = v62;
          v234[0] = v197;
        }
        else
        {
          if ( v260.m128i_i64[0] == 1 )
          {
            LOBYTE(v234[0]) = *(_BYTE *)v259;
            v62 = v234;
            goto LABEL_128;
          }
          v62 = v234;
          if ( !v260.m128i_i64[0] )
          {
LABEL_128:
            v233 = v61;
            *((_BYTE *)v62 + v61) = 0;
            if ( v259 != v261 )
              free(v259);
            v256 = v258;
            *(__m128i *)v257 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
            sub_220BA90(v8 + 16, (unsigned int)&v256, 10, 1, 0, 1, 0);
            v63 = v256;
            v64 = v257[0];
            v226 = &v228;
            if ( (char *)v256 + v257[0] && !v256 )
              goto LABEL_447;
            if ( v257[0] > 0xF )
            {
              v210 = v256;
              if ( (v257[0] & 0x8000000000000000LL) != 0LL )
LABEL_445:
                std::__throw_length_error("basic_string::_M_create");
              v203 = v257[0];
              v65 = (__m128i *)operator new(v257[0] + 1);
              v64 = v203;
              v63 = v210;
              v226 = v65;
              v228.m128i_i64[0] = v203;
            }
            else
            {
              if ( v257[0] == 1 )
              {
                v228.m128i_i8[0] = *(_BYTE *)v256;
                v65 = &v228;
                goto LABEL_135;
              }
              v65 = &v228;
              if ( !v257[0] )
              {
LABEL_135:
                v227 = v64;
                v65->m128i_i8[v64] = 0;
                if ( v256 != v258 )
                  free(v256);
                v66 = v227;
                if ( 0x7FFFFFFFFFFFFFFFLL - v227 <= 3 )
LABEL_446:
                  std::__throw_length_error("basic_string::append");
                v67 = v227 + 4;
                if ( v226 == &v228 )
                  v68 = 15;
                else
                  v68 = v228.m128i_i64[0];
                if ( v67 > v68 )
                {
                  v204 = v227 + 4;
                  v193 = v227;
                  sub_998B30((__int64)&v226, v227, 0, " to ", 4u);
                  v67 = v204;
                  v66 = v193;
                }
                else
                {
                  *(_DWORD *)((char *)v226 + v227) = 544175136;
                }
                v227 = v67;
                *((_BYTE *)v226 + v66 + 4) = 0;
                v69 = (__m128i *)v226;
                v229 = &v231;
                if ( v226 == &v228 )
                {
                  v70 = v227;
                  v72 = v233;
                  v69 = &v231;
                  v71 = 15;
                  v139 = _mm_load_si128(&v228);
                  v227 = 0;
                  v230 = v70;
                  v73 = v233 + v70;
                  v231 = v139;
                  v228.m128i_i8[0] = 0;
                }
                else
                {
                  v70 = v227;
                  v71 = v228.m128i_i64[0];
                  v226 = &v228;
                  v72 = v233;
                  v229 = v69;
                  v230 = v227;
                  v227 = 0;
                  v73 = v233 + v230;
                  v228.m128i_i8[0] = 0;
                  v231.m128i_i64[0] = v71;
                  if ( v69 == &v231 )
                    v71 = 15;
                }
                if ( v71 >= v73 )
                {
                  if ( v72 )
                  {
                    v135 = &v69->m128i_i8[v70];
                    if ( v72 == 1 )
                    {
                      *v135 = *(_BYTE *)v232;
                      v69 = (__m128i *)v229;
                    }
                    else
                    {
                      v196 = v73;
                      memcpy(v135, v232, v72);
                      v69 = (__m128i *)v229;
                      v73 = v196;
                    }
                  }
                }
                else
                {
                  if ( v232 == v234 )
                    v74 = 15;
                  else
                    v74 = v234[0];
                  if ( v74 >= v73 )
                  {
                    v75 = (__m128i *)sub_99BDC0(&v232, 0, 0, v69, v70);
LABEL_151:
                    v235 = &v237;
                    if ( (__m128i *)v75->m128i_i64[0] == &v75[1] )
                    {
                      v237 = _mm_loadu_si128(v75 + 1);
                    }
                    else
                    {
                      v235 = (void *)v75->m128i_i64[0];
                      v237.m128i_i64[0] = v75[1].m128i_i64[0];
                    }
                    v76 = v75->m128i_u64[1];
                    v75[1].m128i_i8[0] = 0;
                    v236 = v76;
                    v75->m128i_i64[0] = (__int64)v75[1].m128i_i64;
                    v77 = v235;
                    v75->m128i_i64[1] = 0;
                    v78 = (unsigned __int8 *)v268;
                    v79 = v236;
                    if ( !v268 )
                    {
                      v142 = v269;
                      v143 = *(_DWORD *)(v269 + 14976);
                      if ( v143 )
                      {
                        v146 = (unsigned int)(v143 - 1);
                        *(_DWORD *)(v269 + 14976) = v146;
                        v78 = *(unsigned __int8 **)(v142 + 8 * v146 + 14848);
                        v147 = *((unsigned int *)v78 + 134);
                        *v78 = 0;
                        v148 = *((_QWORD *)v78 + 66);
                        *((_DWORD *)v78 + 106) = 0;
                        v149 = v148 + (v147 << 6);
                        if ( v148 != v149 )
                        {
                          v207 = v8;
                          v150 = v79;
                          v212 = (void *)v10;
                          v151 = v12;
                          v152 = v148;
                          v153 = v149;
                          do
                          {
                            while ( 1 )
                            {
                              v153 -= 64;
                              v154 = *(void **)(v153 + 24);
                              if ( v154 == (void *)(v153 + 40) )
                                break;
                              v215 = v78;
                              operator delete(v154);
                              v78 = v215;
                              if ( v152 == v153 )
                                goto LABEL_421;
                            }
                          }
                          while ( v152 != v153 );
LABEL_421:
                          LOWORD(v12) = v151;
                          v79 = v150;
                          v10 = (__int64)v212;
                          v8 = v207;
                        }
                        *((_DWORD *)v78 + 134) = 0;
                      }
                      else
                      {
                        v211 = (void *)v236;
                        v78 = (unsigned __int8 *)operator new(0x3A0u);
                        *v78 = 0;
                        *((_QWORD *)v78 + 12) = v78 + 112;
                        *((_QWORD *)v78 + 16) = v78 + 144;
                        *((_QWORD *)v78 + 20) = v78 + 176;
                        *((_QWORD *)v78 + 24) = v78 + 208;
                        *((_QWORD *)v78 + 28) = v78 + 240;
                        *((_QWORD *)v78 + 32) = v78 + 272;
                        *((_QWORD *)v78 + 36) = v78 + 304;
                        *((_QWORD *)v78 + 40) = v78 + 336;
                        *((_QWORD *)v78 + 44) = v78 + 368;
                        *((_QWORD *)v78 + 48) = v78 + 400;
                        *((_QWORD *)v78 + 52) = v78 + 432;
                        v78[112] = 0;
                        *((_QWORD *)v78 + 13) = 0;
                        *((_QWORD *)v78 + 17) = 0;
                        v78[144] = 0;
                        *((_QWORD *)v78 + 21) = 0;
                        v78[176] = 0;
                        *((_QWORD *)v78 + 25) = 0;
                        v78[208] = 0;
                        *((_QWORD *)v78 + 29) = 0;
                        v78[240] = 0;
                        *((_QWORD *)v78 + 33) = 0;
                        v78[272] = 0;
                        *((_QWORD *)v78 + 37) = 0;
                        v78[304] = 0;
                        *((_QWORD *)v78 + 41) = 0;
                        v78[336] = 0;
                        *((_QWORD *)v78 + 45) = 0;
                        v78[368] = 0;
                        *((_QWORD *)v78 + 49) = 0;
                        v78[400] = 0;
                        *((_QWORD *)v78 + 53) = 0x800000000LL;
                        *((_QWORD *)v78 + 66) = v78 + 544;
                        v79 = (__int64)v211;
                        *((_QWORD *)v78 + 67) = 0x600000000LL;
                      }
                      v268 = v78;
                    }
                    v78[*v78 + 1] = 0;
                    v250 = v252;
                    if ( &v77[v79] && !v77 )
LABEL_447:
                      std::__throw_logic_error("basic_string::_M_construct null not valid");
                    if ( (unsigned __int64)v79 > 0xF )
                    {
                      if ( v79 < 0 )
                        goto LABEL_445;
                      v201 = v79;
                      v80 = (_QWORD *)operator new(v79 + 1);
                      v79 = v201;
                      v250 = v80;
                      v252[0] = v201;
                    }
                    else
                    {
                      if ( v79 == 1 )
                      {
                        LOBYTE(v252[0]) = *v77;
                        v80 = v252;
                        goto LABEL_159;
                      }
                      v80 = v252;
                      if ( !v79 )
                      {
LABEL_159:
                        v251 = v79;
                        *((_BYTE *)v80 + v79) = 0;
                        v81 = v268;
                        v82 = *(unsigned __int8 *)v268;
                        *(_BYTE *)v268 = v82 + 1;
                        v83 = (unsigned __int8)v82;
                        v84 = 4 * (v82 + 3);
                        v85 = (void **)&v81[v84];
                        v86 = (_BYTE *)v81[v84];
                        if ( v250 == v252 )
                        {
                          v138 = v251;
                          if ( v251 )
                          {
                            if ( v251 == 1 )
                            {
                              *v86 = v252[0];
                              v138 = v251;
                              v86 = *v85;
                            }
                            else
                            {
                              v205 = (void **)&v81[v84];
                              memcpy(v86, v250, v251);
                              v85 = v205;
                              v138 = v251;
                              v86 = *v205;
                            }
                          }
                          v85[1] = (void *)v138;
                          v86[v138] = 0;
                          v86 = v250;
                          goto LABEL_163;
                        }
                        if ( v86 == (_BYTE *)&v81[v84 + 2] )
                        {
                          *v85 = v250;
                          v85[1] = (void *)v251;
                          v85[2] = (void *)v252[0];
                        }
                        else
                        {
                          v87 = v81[4 * v83 + 14];
                          *v85 = v250;
                          v85[1] = (void *)v251;
                          v85[2] = (void *)v252[0];
                          if ( v86 )
                          {
                            v250 = v86;
                            v252[0] = v87;
LABEL_163:
                            v251 = 0;
                            *v86 = 0;
                            if ( v250 != v252 )
                              operator delete(v250);
                            v88 = *(void **)v8;
                            LOBYTE(v272) = 1;
                            v271 = v88;
                            sub_AEC610((__int64 *)&v268, (__int64 *)&v271);
                            LOBYTE(v272) = 1;
                            v271 = v221;
                            sub_AEC610((__int64 *)&v268, (__int64 *)&v271);
                            if ( v235 != &v237 )
                              operator delete(v235);
                            if ( v229 != &v231 )
                              operator delete(v229);
                            if ( v226 != &v228 )
                              operator delete(v226);
                            if ( v232 != v234 )
                              operator delete(v232);
                            sub_AEA040((__int64)&v268);
                            goto LABEL_57;
                          }
                        }
                        v86 = v252;
                        v250 = v252;
                        goto LABEL_163;
                      }
                    }
                    v200 = v79;
                    memcpy(v80, v77, v79);
                    v79 = v200;
                    v80 = v250;
                    goto LABEL_159;
                  }
                  v195 = v73;
                  sub_998B30((__int64)&v229, v70, 0, v232, v72);
                  v69 = (__m128i *)v229;
                  v73 = v195;
                }
                v230 = v73;
                v69->m128i_i8[v73] = 0;
                v75 = (__m128i *)&v229;
                goto LABEL_151;
              }
            }
            v202 = v64;
            memcpy(v65, v63, v64);
            v65 = (__m128i *)v226;
            v64 = v202;
            goto LABEL_135;
          }
        }
        v198 = v61;
        memcpy(v62, v60, v61);
        v62 = v232;
        v61 = v198;
        goto LABEL_128;
      }
      v27 = a4;
    }
LABEL_113:
    *(_BYTE *)(v8 + 28) = v27;
    v225 = v27;
    LOBYTE(ptr) = 0;
    switch ( (__int16)v12 )
    {
      case 28:
        v100 = *(_DWORD *)(v8 + 24);
        v101 = *(_BYTE *)(v8 + 28);
        v90 = v8 + 16;
        LODWORD(v272) = v100;
        if ( v100 <= 0x40 )
        {
          v112 = *(_QWORD *)(v8 + 16);
LABEL_256:
          v103 = (void *)((unsigned __int64)v223 & v112);
          goto LABEL_229;
        }
        sub_2205510(&v271);
        v100 = v272;
        if ( (unsigned int)v272 <= 0x40 )
        {
          v112 = (unsigned __int64)v271;
          goto LABEL_256;
        }
        sub_2205B60(&v271, &v223);
        v103 = v271;
        v100 = v272;
LABEL_229:
        if ( v217 > 0x40 && v216 )
        {
          v179 = v100;
          v169 = v103;
          operator delete[](v216);
          v100 = v179;
          v103 = v169;
        }
LABEL_232:
        v216 = v103;
        v217 = v100;
        v218 = v101;
        v167 = v17;
        break;
      case 29:
        goto LABEL_257;
      case 30:
      case 32:
      case 34:
      case 35:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 44:
      case 46:
      case 50:
      case 51:
      case 55:
      case 57:
      case 60:
      case 63:
      case 64:
      case 66:
        goto LABEL_174;
      case 31:
        v90 = v8 + 16;
        if ( v27 )
          goto LABEL_296;
        sub_2209E20(&v268, v8 + 16, &v223, &ptr);
        goto LABEL_208;
      case 33:
        goto LABEL_288;
      case 36:
        goto LABEL_217;
      case 42:
        goto LABEL_214;
      case 43:
        goto LABEL_205;
      case 45:
        goto LABEL_202;
      case 47:
        goto LABEL_199;
      case 48:
        goto LABEL_281;
      case 49:
        goto LABEL_279;
      case 52:
        goto LABEL_286;
      case 53:
        goto LABEL_241;
      case 54:
        goto LABEL_239;
      case 56:
        goto LABEL_233;
      case 58:
        goto LABEL_226;
      case 59:
        goto LABEL_224;
      case 61:
        goto LABEL_259;
      case 62:
        goto LABEL_27;
      case 65:
        goto LABEL_194;
    }
LABEL_181:
    if ( (_BYTE)ptr && a4 )
    {
      sub_FC70B0((__int64)&v271, *(_QWORD *)(v9 + 48), v178, 1375);
      v125 = *(void **)v8;
      LOBYTE(v269) = 1;
      v268 = v125;
      sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
      LOBYTE(v269) = 1;
      v268 = v221;
      sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
      sub_AEA040((__int64)&v271);
    }
LABEL_184:
    if ( *(_DWORD *)(v8 + 24) <= 0x40u && v217 <= 0x40 )
    {
      *(_DWORD *)(v8 + 24) = v217;
      v122 = v216;
      v222 = 0;
      *(_BYTE *)(v8 + 28) = v218;
      v123 = HIDWORD(v221);
      *(_QWORD *)(v8 + 16) = v122;
      *(_DWORD *)(v8 + 4) = v123;
    }
    else
    {
      sub_22056A0(v90, &v216);
      v91 = v217 <= 0x40;
      v222 = 0;
      *(_BYTE *)(v8 + 28) = v218;
      *(_DWORD *)(v8 + 4) = HIDWORD(v221);
      if ( !v91 && v216 )
        operator delete[](v216);
    }
    if ( v224 > 0x40 && v223 )
      operator delete[](v223);
    if ( a2 > v167 )
      return 0;
    v12 = *(unsigned __int16 *)(v10 + 16);
  }
  LOBYTE(ptr) = 0;
  switch ( v12 )
  {
    case 29:
LABEL_257:
      v90 = v8 + 16;
      v93 = 0;
      if ( (unsigned __int8)sub_142BC90(v8 + 16, nullptr) )
        v93 = (unsigned __int8)sub_142BC90((__int64)&v223, nullptr);
      goto LABEL_197;
    case 30:
    case 32:
    case 34:
    case 35:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 44:
    case 46:
    case 50:
    case 51:
    case 55:
    case 57:
    case 60:
    case 63:
    case 64:
      *(_QWORD *)&dword_0 = v16;
      BUG();
    case 31:
      v90 = v8 + 16;
LABEL_296:
      v121 = *(_BYTE *)(v8 + 28);
      sub_2209CE0(&v271, v90, &v223);
      BYTE4(v269) = v121;
      LODWORD(v269) = v272;
      v268 = v271;
      goto LABEL_297;
    case 33:
LABEL_288:
      v90 = v8 + 16;
      if ( !*(_BYTE *)(v8 + 28) )
      {
        sub_2208E80(&v271, v8 + 16, &v223, &ptr);
        goto LABEL_320;
      }
      LODWORD(v272) = *(_DWORD *)(v8 + 24);
      if ( (unsigned int)v272 > 0x40 )
        sub_2205510(&v271);
      else
        v271 = *(void **)(v8 + 16);
      sub_22059A0(&v271, &v223);
      v98 = v272;
      v99 = v271;
      if ( v217 > 0x40 )
        goto LABEL_221;
      goto LABEL_223;
    case 36:
LABEL_217:
      v90 = v8 + 16;
      if ( !*(_BYTE *)(v8 + 28) )
      {
        sub_2209010(&v271, v8 + 16, &v223, &ptr);
        goto LABEL_320;
      }
      LODWORD(v272) = *(_DWORD *)(v8 + 24);
      if ( (unsigned int)v272 > 0x40 )
        sub_2205510(&v271);
      else
        v271 = *(void **)(v8 + 16);
      sub_2205A70(&v271, &v223);
      v98 = v272;
      v99 = v271;
      if ( v217 > 0x40 )
      {
LABEL_221:
        if ( v216 )
        {
          v168 = v99;
          operator delete[](v216);
          v99 = v168;
        }
      }
LABEL_223:
      v216 = v99;
      v217 = v98;
      v218 = 1;
      goto LABEL_198;
    case 42:
LABEL_214:
      v90 = v8 + 16;
      if ( *(_DWORD *)(v8 + 24) <= 0x40u )
        v97 = *(_QWORD *)(v8 + 16) == (_QWORD)v223;
      else
        v97 = sub_2205D70(v8 + 16, &v223);
      LOBYTE(v93) = v97 ^ 1;
      goto LABEL_201;
    case 43:
LABEL_205:
      if ( (unsigned __int8)sub_142BC90((__int64)&v223, nullptr) )
      {
        v90 = v8 + 16;
        if ( *(_BYTE *)(v8 + 28) )
        {
          sub_22078F0(&v271);
LABEL_344:
          BYTE4(v269) = 1;
          LODWORD(v269) = v272;
          v268 = v271;
LABEL_297:
          sub_C18DB0((__int64)&v216, (__int64)&v268);
        }
        else
        {
          sub_2209180(&v268, v8 + 16, &v223, &ptr);
LABEL_208:
          v95 = v269;
          LODWORD(v269) = 0;
          BYTE4(v272) = 0;
          LODWORD(v272) = v95;
          v271 = v268;
          sub_C18DB0((__int64)&v216, (__int64)&v271);
          if ( (unsigned int)v272 > 0x40 && v271 )
            operator delete[](v271);
        }
        if ( (unsigned int)v269 > 0x40 )
        {
          v96 = v268;
          if ( v268 )
LABEL_213:
            operator delete[](v96);
        }
LABEL_198:
        v167 = v17;
        goto LABEL_181;
      }
      if ( !a4 )
      {
LABEL_204:
        v90 = v8 + 16;
        v167 = v17;
        goto LABEL_184;
      }
      v21 = *(_QWORD *)(v9 + 48);
      v22 = 1108;
LABEL_28:
      sub_FC70B0((__int64)&v271, v21, v178, v22);
      v23 = *(void **)v8;
      LOBYTE(v269) = 1;
      v268 = v23;
      sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
      LOBYTE(v269) = 1;
      v268 = v221;
      sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
      sub_AEA040((__int64)&v271);
LABEL_29:
      if ( v217 > 0x40 && v216 )
        operator delete[](v216);
LABEL_32:
      if ( v224 > 0x40 )
      {
LABEL_33:
        if ( v223 )
          operator delete[](v223);
      }
      return 1;
    case 45:
LABEL_202:
      if ( !(unsigned __int8)sub_142BC90((__int64)&v223, nullptr) )
      {
        if ( a4 )
        {
          v21 = *(_QWORD *)(v9 + 48);
          v22 = 1168;
          goto LABEL_28;
        }
        goto LABEL_204;
      }
      v90 = v8 + 16;
      v136 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
      {
        sub_2207ED0(&v271, v136, &v223);
        goto LABEL_344;
      }
      sub_2208110(&v271, v136, &v223);
      BYTE4(v269) = 0;
      LODWORD(v269) = v272;
      v268 = v271;
      goto LABEL_297;
    case 47:
LABEL_199:
      v90 = v8 + 16;
      v94 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
        LOBYTE(v93) = (int)sub_2205DB0(v94, &v223) < 0;
      else
        LOBYTE(v93) = (int)sub_2205E20(v94, &v223) < 0;
      goto LABEL_201;
    case 48:
LABEL_281:
      v90 = v8 + 16;
      v119 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
      {
        sub_220A620(&v271, v119, &v223, &ptr);
        if ( v217 > 0x40 && v216 )
          operator delete[](v216);
        v167 = v17;
        v216 = v271;
        v217 = v272;
        goto LABEL_181;
      }
      sub_220A8F0(&v271, v119, &v223, &ptr);
LABEL_320:
      v133 = v272;
      LODWORD(v272) = 0;
      if ( v217 <= 0x40 || !v216 )
      {
        v216 = v271;
        v217 = v133;
        v218 = 0;
        goto LABEL_198;
      }
      v173 = v271;
      operator delete[](v216);
      v217 = v133;
      v218 = 0;
      v216 = v173;
      if ( (unsigned int)v272 <= 0x40 )
        goto LABEL_198;
      v96 = v271;
      if ( !v271 )
        goto LABEL_198;
      goto LABEL_213;
    case 49:
LABEL_279:
      v90 = v8 + 16;
      v118 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
        LOBYTE(v93) = (int)sub_2205DB0(v118, &v223) <= 0;
      else
        LOBYTE(v93) = (int)sub_2205E20(v118, &v223) <= 0;
      goto LABEL_201;
    case 52:
LABEL_286:
      v90 = v8 + 16;
      v120 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
        LOBYTE(v93) = (int)sub_2205DB0(v120, &v223) > 0;
      else
        LOBYTE(v93) = (int)sub_2205E20(v120, &v223) > 0;
      goto LABEL_201;
    case 53:
LABEL_241:
      v106 = v224;
      v107 = *(_DWORD *)(v8 + 24);
      if ( v224 > 0x40 )
      {
        v172 = *(_DWORD *)(v8 + 24);
        v132 = sub_2206780(&v223);
        v107 = v172;
        if ( v106 - v132 > 0x40 )
          goto LABEL_316;
        v108 = *(_QWORD *)v223;
      }
      else
      {
        LODWORD(v108) = (_DWORD)v223;
      }
      v109 = v108;
      if ( (unsigned int)v108 < v107 )
        goto LABEL_244;
LABEL_316:
      LOBYTE(ptr) = 1;
      v109 = v107 - 1;
LABEL_244:
      v110 = *(_BYTE *)(v8 + 28);
      v90 = v8 + 16;
      LODWORD(v272) = v107;
      if ( v110 )
      {
        if ( v107 > 0x40 )
        {
          v174 = v109;
          sub_2205510(&v271);
          v107 = v272;
          v109 = v174;
          if ( (unsigned int)v272 <= 0x40 )
            goto LABEL_247;
          sub_220ABD0(&v271, v174);
          v111 = (unsigned __int64)v271;
        }
        else
        {
          v271 = *(void **)(v8 + 16);
LABEL_247:
          v111 = 0;
          if ( v109 != v107 )
            v111 = (unsigned __int64)v271 >> v109;
        }
LABEL_249:
        v107 = v272;
        goto LABEL_250;
      }
      if ( v107 > 0x40 )
      {
        v175 = v109;
        sub_2205510(&v271);
        v107 = v272;
        v109 = v175;
        if ( (unsigned int)v272 > 0x40 )
        {
          sub_2206EF0(&v271, v175);
          v111 = (unsigned __int64)v271;
          goto LABEL_249;
        }
        v126 = v271;
      }
      else
      {
        v126 = *(void **)(v8 + 16);
      }
      v127 = 0;
      if ( v107 )
        v127 = (__int64)((_QWORD)v126 << (64 - (unsigned __int8)v107)) >> (64 - (unsigned __int8)v107);
      v128 = v127;
      v129 = v127 >> v109;
      v130 = v128 >> 63;
      if ( v109 != v107 )
        v130 = v129;
      v131 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v107;
      if ( !v107 )
        v131 = 0;
      v111 = v130 & v131;
LABEL_250:
      if ( v217 > 0x40 && v216 )
      {
        v181 = v111;
        v171 = v107;
        operator delete[](v216);
        v111 = v181;
        v107 = v171;
      }
      v216 = (void *)v111;
      v217 = v107;
      v218 = v110;
      goto LABEL_198;
    case 54:
LABEL_239:
      v90 = v8 + 16;
      v105 = v8 + 16;
      if ( *(_BYTE *)(v8 + 28) )
        LOBYTE(v93) = (int)sub_2205DB0(v105, &v223) >= 0;
      else
        LOBYTE(v93) = (int)sub_2205E20(v105, &v223) >= 0;
LABEL_201:
      v93 = (unsigned __int8)v93;
      goto LABEL_197;
    case 56:
LABEL_233:
      v100 = *(_DWORD *)(v8 + 24);
      v101 = *(_BYTE *)(v8 + 28);
      v90 = v8 + 16;
      LODWORD(v272) = v100;
      if ( v100 <= 0x40 )
      {
        v104 = *(_QWORD *)(v8 + 16);
LABEL_235:
        v103 = (void *)((unsigned __int64)v223 ^ v104);
        goto LABEL_236;
      }
      sub_2205510(&v271);
      v100 = v272;
      if ( (unsigned int)v272 <= 0x40 )
      {
        v104 = (unsigned __int64)v271;
        goto LABEL_235;
      }
      sub_2205CC0(&v271, &v223);
      v103 = v271;
      v100 = v272;
LABEL_236:
      if ( v217 > 0x40 && v216 )
      {
        v180 = v103;
        v170 = v100;
        operator delete[](v216);
        v103 = v180;
        v100 = v170;
      }
      goto LABEL_232;
    case 58:
LABEL_226:
      v100 = *(_DWORD *)(v8 + 24);
      v101 = *(_BYTE *)(v8 + 28);
      v90 = v8 + 16;
      LODWORD(v272) = v100;
      if ( v100 <= 0x40 )
      {
        v102 = *(_QWORD *)(v8 + 16);
LABEL_228:
        v103 = (void *)((unsigned __int64)v223 | v102);
        goto LABEL_229;
      }
      sub_2205510(&v271);
      v100 = v272;
      if ( (unsigned int)v272 <= 0x40 )
      {
        v102 = (unsigned __int64)v271;
        goto LABEL_228;
      }
      sub_2205C10(&v271, &v223);
      v103 = v271;
      v100 = v272;
      goto LABEL_229;
    case 59:
LABEL_224:
      v90 = v8 + 16;
      v93 = 1;
      if ( (unsigned __int8)sub_142BC90(v8 + 16, nullptr) )
        goto LABEL_197;
      v92 = sub_142BC90((__int64)&v223, nullptr);
LABEL_196:
      v93 = v92;
LABEL_197:
      sub_C16580(&v216, v93);
      v218 = 0;
      goto LABEL_198;
    case 61:
LABEL_259:
      if ( *(_WORD *)(v10 + 16) != 62 )
      {
        sub_FC70B0((__int64)&v271, *(_QWORD *)(v9 + 48), *(_DWORD *)v10, 14);
        sub_AE9DF0((unsigned __int8 **)&v271, 62, 4u);
        v165 = *(void **)v8;
        LOBYTE(v269) = 1;
        v268 = v165;
        sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
        LOBYTE(v269) = 1;
        v268 = v221;
        sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
        sub_AEA040((__int64)&v271);
        sub_FC70B0((__int64)&v271, *(_QWORD *)(v9 + 48), v178, 109);
        sub_AE9DF0((unsigned __int8 **)&v271, 61, 4u);
        sub_AEA040((__int64)&v271);
        goto LABEL_29;
      }
      do
        sub_14634E0(v9, v10);
      while ( *(_WORD *)(v10 + 16) == 4 );
      v113 = 0;
      if ( a4 )
        v113 = (unsigned __int8)sub_AC43F0(v8 + 16, nullptr);
      v271 = nullptr;
      v114 = *(_DWORD *)(v8 + 24);
      v272 = 0;
      v274 = v114;
      if ( v114 > 0x40 )
        sub_2205470(&v273, 0, 0);
      else
        v273 = nullptr;
      v275 = 1;
      v270 = 0;
      if ( (unsigned __int8)sub_1431530(
                              (__int64)&v271,
                              (unsigned int *)v10,
                              (__int64)&v268,
                              v113,
                              v9,
                              a7,
                              *(double *)si128.m128_u64)
        || (unsigned __int8)sub_1432A50(&v271, v167, v10, v113, a5, v9) )
      {
        if ( v274 > 0x40 && v273 )
          operator delete[](v273);
        goto LABEL_29;
      }
      v90 = v8 + 16;
      v115 = &v223;
      if ( !(unsigned __int8)sub_142BC90(v8 + 16, nullptr) )
        v115 = &v273;
      if ( v217 <= 0x40 && *((_DWORD *)v115 + 2) <= 0x40u )
      {
        v137 = *v115;
        v217 = *((_DWORD *)v115 + 2);
        v216 = v137;
      }
      else
      {
        sub_22056A0(&v216, v115);
      }
      HIDWORD(v221) = HIDWORD(v271);
      v116 = v225;
      if ( !v225 )
        v116 = v275;
      v218 = v116;
      v167 = -1;
      v117 = *(_WORD *)(v10 + 16) - 2;
      if ( v117 <= 0x40u )
        v167 = byte_2614C40[v117];
      if ( v274 > 0x40 && v273 )
        operator delete[](v273);
      goto LABEL_181;
    case 62:
LABEL_27:
      v21 = *(_QWORD *)(v9 + 48);
      v22 = 1106;
      goto LABEL_28;
    case 65:
LABEL_194:
      v90 = v8 + 16;
      if ( *(_DWORD *)(v8 + 24) <= 0x40u )
        v92 = *(_QWORD *)(v8 + 16) == (_QWORD)v223;
      else
        v92 = sub_2205D70(v8 + 16, &v223);
      goto LABEL_196;
    case 66:
LABEL_174:
      if ( (**(_BYTE **)(v9 + 56) & 1) == 0 || a4 )
      {
        sub_FC70B0((__int64)&v271, *(_QWORD *)(v9 + 48), v178, 1237);
        v89 = *(void **)v8;
        LOBYTE(v269) = 1;
        v268 = v89;
        sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
        LOBYTE(v269) = 1;
        v268 = v221;
        sub_AEC610((__int64 *)&v271, (__int64 *)&v268);
        sub_AEA040((__int64)&v271);
      }
      if ( v217 <= 0x40 && v224 <= 0x40 )
      {
        v217 = v224;
        v216 = v223;
      }
      else
      {
        sub_22056A0(&v216, &v223);
      }
      v167 = v17;
      v90 = v8 + 16;
      v218 = v225;
      goto LABEL_181;
    default:
      goto LABEL_55;
  }
}
