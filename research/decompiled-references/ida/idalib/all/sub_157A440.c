_BYTE *__fastcall sub_157A440(_BYTE *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 *v6; // rdi
  int v7; // eax
  __m128i v8; // xmm0
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 *v11; // rdi
  unsigned int *v12; // rdx
  __int64 v13; // rax
  char v14; // di
  char v15; // cl
  bool v16; // r11
  unsigned int v17; // ebp
  char v18; // si
  bool v19; // r9
  bool v20; // si
  bool v21; // si
  int v22; // ebp
  unsigned __int8 *v23; // rbp
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int8 *v27; // rbp
  _QWORD *v28; // rcx
  __int64 v29; // rax
  void **v30; // rbp
  _QWORD *v31; // rax
  void **v32; // rdx
  void **v33; // r15
  _BYTE *v34; // r12
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // r15
  __int64 *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  bool v42; // zf
  __int8 v43; // al
  _QWORD *v44; // rax
  void **v45; // rcx
  void **v46; // rax
  __int64 v47; // r15
  _BYTE *v48; // r13
  char *v49; // rbx
  unsigned int v50; // r12d
  char *v51; // rbp
  char *v52; // rdi
  void **v53; // rdi
  _BYTE *v54; // r12
  void **v55; // rbx
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  void *v58; // rdi
  size_t *v59; // rsi
  _BYTE *v60; // rdi
  void *v61; // rax
  int v62; // eax
  int v63; // ebp
  __int64 *v64; // rdi
  __int8 *v65; // rax
  __int8 v66; // dl
  _BYTE *v67; // rdi
  void **v69; // rbp
  _QWORD *v70; // rax
  void **v71; // rdx
  void **v72; // r15
  _BYTE *v73; // r12
  void **v74; // rbx
  void **v75; // rdi
  void **v76; // rdi
  void **v77; // r15
  __int16 v78; // ax
  unsigned __int16 v79; // cx
  int v80; // eax
  size_t *v81; // rsi
  __int64 v82; // r14
  signed __int64 v83; // r14
  __int64 v84; // r9
  unsigned __int64 v85; // rdx
  void *v86; // rax
  __int64 v87; // rdi
  int v88; // edx
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  int v91; // ebp
  void *v92; // rax
  __int64 v93; // r14
  size_t *v94; // rdi
  __int64 v95; // rdx
  bool v96; // al
  unsigned int *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // r12
  __int16 v100; // r15
  bool v101; // al
  __int64 *v102; // rdi
  __m128i v103; // xmm2
  __int16 v104; // ax
  unsigned __int16 v105; // cx
  __int64 *v106; // rdi
  unsigned __int8 v107; // dl
  __int64 v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int8 *v121; // rax
  _QWORD *v122; // rdx
  __int64 v123; // rax
  _QWORD *v124; // rax
  void **v125; // rcx
  void **v126; // rax
  __int64 v127; // r15
  _BYTE *v128; // r13
  char *v129; // rbx
  unsigned int v130; // r12d
  char *v131; // rbp
  char *v132; // rdi
  void **v133; // rdi
  _BYTE *v134; // r12
  void **v135; // rbx
  __int64 v136; // rdx
  _DWORD *v137; // rax
  __int64 *v138; // rdi
  unsigned __int16 v139; // cx
  unsigned int v140; // eax
  unsigned __int16 v141; // si
  __int64 v142; // rdx
  unsigned __int16 v143; // cx
  unsigned int v144; // eax
  unsigned __int16 v145; // si
  __int64 v146; // rdx
  unsigned __int16 v147; // cx
  unsigned int v148; // eax
  __int64 v149; // rdx
  unsigned int v150; // eax
  __int64 v151; // rdx
  _DWORD *v152; // rax
  __int16 v153; // bp
  char v154; // al
  unsigned __int8 *v155; // rbp
  _QWORD *v156; // rdx
  __int64 v157; // rcx
  char *v158; // rsi
  size_t v159; // r8
  __int64 *v160; // rax
  _QWORD *v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rax
  void **v165; // rbp
  __int64 *v166; // rdi
  __int64 v167; // rax
  __int16 v168; // bp
  char v169; // al
  unsigned __int8 *v170; // rbp
  _QWORD *v171; // rdx
  __int64 v172; // rcx
  char *v173; // rsi
  size_t v174; // r8
  void **v175; // rax
  _QWORD *v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rax
  void **v180; // rbp
  void **v181; // rdi
  void *v182; // rax
  _QWORD *v183; // rdx
  int v184; // eax
  _QWORD *v185; // rcx
  int v186; // eax
  __int64 *v187; // rdi
  __int64 *v188; // rdi
  unsigned __int16 v189; // cx
  unsigned int v190; // eax
  unsigned __int16 v191; // si
  __int64 v192; // rdx
  _QWORD *v193; // rdx
  int v194; // eax
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 v197; // r15
  __int64 v198; // rcx
  __int64 v199; // r15
  _BYTE *v200; // r13
  __int64 v201; // rbx
  __int64 v202; // r12
  void *v203; // rdi
  __int64 v204; // rax
  __int64 v205; // r15
  __int64 v206; // rdx
  __int64 v207; // r15
  _BYTE *v208; // r12
  __int64 v209; // rbx
  void *v210; // rdi
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rsi
  __int64 v216; // rdx
  _BYTE *v217; // r15
  __int64 v218; // rbx
  unsigned __int8 *v219; // r12
  void *v220; // rdi
  unsigned int v221; // eax
  unsigned __int16 v222; // si
  __int64 v223; // rdx
  size_t v224; // rdx
  size_t v225; // rdx
  _QWORD *v226; // rdi
  int v227; // eax
  _QWORD *v228; // rdi
  int v229; // eax
  int v230; // eax
  __int64 *v231; // rdi
  __int64 v232; // rax
  __int64 v233; // rax
  __int64 v234; // r9
  __int64 v235; // r15
  _QWORD *v236; // rbp
  __int64 v237; // rbx
  size_t v238; // r13
  int v239; // r12d
  void *v240; // rdi
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // r10
  __int64 v244; // rax
  __int64 v245; // rbx
  _QWORD *v246; // r13
  int v247; // r15d
  unsigned __int8 *v248; // r12
  __int64 v249; // rbp
  void *v250; // rdi
  void **v251; // [rsp+0h] [rbp-218h]
  void **v252; // [rsp+0h] [rbp-218h]
  __int64 v253; // [rsp+0h] [rbp-218h]
  __int64 v254; // [rsp+0h] [rbp-218h]
  size_t v255; // [rsp+0h] [rbp-218h]
  size_t v256; // [rsp+0h] [rbp-218h]
  _QWORD *v257; // [rsp+0h] [rbp-218h]
  _QWORD *v258; // [rsp+0h] [rbp-218h]
  size_t v259; // [rsp+0h] [rbp-218h]
  int *v260; // [rsp+8h] [rbp-210h]
  _BYTE *v261; // [rsp+10h] [rbp-208h]
  __int16 v262; // [rsp+10h] [rbp-208h]
  size_t v263; // [rsp+10h] [rbp-208h]
  size_t v264; // [rsp+10h] [rbp-208h]
  int v265; // [rsp+10h] [rbp-208h]
  int v266; // [rsp+10h] [rbp-208h]
  unsigned __int8 *v267; // [rsp+10h] [rbp-208h]
  _BYTE *v268; // [rsp+18h] [rbp-200h]
  int v269; // [rsp+18h] [rbp-200h]
  __int64 v270; // [rsp+18h] [rbp-200h]
  void *v271; // [rsp+18h] [rbp-200h]
  size_t v272; // [rsp+18h] [rbp-200h]
  size_t v273; // [rsp+18h] [rbp-200h]
  _BYTE *v274; // [rsp+18h] [rbp-200h]
  _BYTE *v275; // [rsp+18h] [rbp-200h]
  int v276; // [rsp+20h] [rbp-1F8h]
  char v277; // [rsp+28h] [rbp-1F0h]
  char *v278; // [rsp+28h] [rbp-1F0h]
  char *v279; // [rsp+28h] [rbp-1F0h]
  __int64 v280; // [rsp+28h] [rbp-1F0h]
  __int64 v281; // [rsp+28h] [rbp-1F0h]
  void **v282; // [rsp+30h] [rbp-1E8h]
  void **v283; // [rsp+38h] [rbp-1E0h]
  unsigned __int64 v284; // [rsp+38h] [rbp-1E0h]
  void **v285; // [rsp+38h] [rbp-1E0h]
  void **v286; // [rsp+40h] [rbp-1D8h]
  __m128i v287; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v288; // [rsp+60h] [rbp-1B8h]
  __m128 v289; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v290; // [rsp+80h] [rbp-198h]
  __m128i v291; // [rsp+90h] [rbp-188h] BYREF
  __int64 v292; // [rsp+A0h] [rbp-178h]
  int v293; // [rsp+A8h] [rbp-170h]
  __int16 v294; // [rsp+ACh] [rbp-16Ch]
  __int64 (__fastcall *v295)(__int64); // [rsp+B0h] [rbp-168h]
  __int64 v296; // [rsp+B8h] [rbp-160h]
  __int64 v297; // [rsp+C0h] [rbp-158h]
  void *v298; // [rsp+D0h] [rbp-148h]
  size_t n; // [rsp+D8h] [rbp-140h] BYREF
  __int64 v300; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v301[56]; // [rsp+E8h] [rbp-130h] BYREF
  void *v302; // [rsp+120h] [rbp-F8h]
  size_t v303; // [rsp+128h] [rbp-F0h]
  void *v304; // [rsp+130h] [rbp-E8h] BYREF
  void *src; // [rsp+138h] [rbp-E0h] BYREF
  __int64 v306; // [rsp+140h] [rbp-D8h]
  _BYTE v307[56]; // [rsp+148h] [rbp-D0h] BYREF
  void *ptr; // [rsp+180h] [rbp-98h] BYREF
  void *v309; // [rsp+188h] [rbp-90h] BYREF
  size_t v310; // [rsp+190h] [rbp-88h] BYREF
  void *v311; // [rsp+198h] [rbp-80h] BYREF
  void *v312; // [rsp+1A0h] [rbp-78h]
  __int64 v313; // [rsp+1A8h] [rbp-70h] BYREF
  _BYTE v314[16]; // [rsp+1B0h] [rbp-68h] BYREF
  __int16 v315; // [rsp+1C0h] [rbp-58h]

  v4 = a2;
  v6 = *(__int64 **)(a2 + 8);
  v276 = *(_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 20);
  if ( !v7 )
    v7 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 40) = v7;
  v260 = (int *)(a2 + 16);
  sub_14634E0(v6, (int *)(a2 + 16));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_DWORD *)(a2 + 16);
  v287 = v8;
  v288 = v9;
  if ( (_WORD)v9 != 5 )
  {
    sub_1564840((__int64)&ptr, a2, v287.m128i_i32, 1531);
    if ( (_BYTE)v315 )
    {
      sub_FC7790(v310, (__int64 *)&ptr, SHIBYTE(v315));
      v310 = 0;
      v315 = 0;
    }
    if ( v312 != v314 )
      operator delete(v312);
    v69 = (void **)ptr;
    if ( ptr )
    {
      v70 = v309;
      if ( v309 )
      {
        if ( ptr < v309 || ptr > (char *)v309 + 14848 )
        {
          v71 = *((void ***)ptr + 66);
          v72 = &v71[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v71 != v72 )
          {
            v73 = a1;
            v74 = *((void ***)ptr + 66);
            do
            {
              while ( 1 )
              {
                v72 -= 8;
                v75 = (void **)v72[3];
                if ( v75 == v72 + 5 )
                  break;
                operator delete(v75);
                if ( v74 == v72 )
                  goto LABEL_110;
              }
            }
            while ( v74 != v72 );
LABEL_110:
            a1 = v73;
            v72 = (void **)v69[66];
          }
          if ( v72 != v69 + 68 )
            free(v72);
          v76 = (void **)v69[52];
          if ( v76 != v69 + 54 )
            free(v76);
          v77 = v69 + 48;
          v252 = v69 + 8;
          do
          {
            while ( *v77 != v77 + 2 )
            {
              operator delete(*v77);
              v77 -= 4;
              if ( v77 == v252 )
                goto LABEL_118;
            }
            v77 -= 4;
          }
          while ( v252 != v77 );
LABEL_118:
          operator delete(v69, 0x3A0u);
        }
        else
        {
          v136 = *((unsigned int *)v309 + 3744);
          *((_DWORD *)v309 + 3744) = v136 + 1;
          v70[v136 + 1856] = v69;
        }
      }
    }
    v78 = *(_WORD *)(a2 + 32);
    if ( v78 == 451 )
      goto LABEL_52;
    if ( (unsigned __int16)(v78 - 22) <= 1u )
    {
      v79 = *(_WORD *)(a2 + 88);
      if ( v78 == 22 )
      {
        *(_WORD *)(a2 + 88) = v79 + 1;
        goto LABEL_123;
      }
      if ( !v79 )
        goto LABEL_123;
      v150 = *(_DWORD *)(a2 + 2792);
      if ( !v150 )
      {
LABEL_311:
        *(_WORD *)(a2 + 88) = v79 - 1;
        goto LABEL_123;
      }
      v151 = *(_QWORD *)(a2 + 2784) + 24LL * v150 - 24;
      while ( 1 )
      {
        if ( *(_WORD *)(v151 + 14) == v79 )
        {
          if ( *(_DWORD *)(v151 + 16) == *(_DWORD *)(a2 + 90) )
            goto LABEL_306;
        }
        else if ( *(_WORD *)(v151 + 14) < v79 )
        {
          goto LABEL_306;
        }
        if ( *(_WORD *)(a2 + 90) <= *(_WORD *)(v151 + 16) && *(_WORD *)(a2 + 92) <= *(_WORD *)(v151 + 18) )
          goto LABEL_311;
LABEL_306:
        --v150;
        v151 -= 24;
        *(_DWORD *)(a2 + 2792) = v150;
        if ( !v150 )
          goto LABEL_311;
      }
    }
    if ( (unsigned __int16)(v78 - 20) <= 1u )
    {
      v139 = *(_WORD *)(a2 + 90);
      if ( v78 == 20 )
      {
        *(_WORD *)(a2 + 90) = v139 + 1;
        goto LABEL_123;
      }
      if ( !v139 )
        goto LABEL_123;
      v140 = *(_DWORD *)(a2 + 2792);
      if ( !v140 )
      {
LABEL_257:
        *(_WORD *)(v4 + 90) = v139 - 1;
        goto LABEL_123;
      }
      v141 = *(_WORD *)(a2 + 88);
      v142 = *(_QWORD *)(v4 + 2784) + 24LL * v140 - 24;
      while ( 1 )
      {
        if ( v141 == *(_WORD *)(v142 + 14) )
        {
          if ( *(_DWORD *)(v142 + 16) == *(_DWORD *)(v4 + 90) )
            goto LABEL_252;
        }
        else if ( v141 > *(_WORD *)(v142 + 14) )
        {
          goto LABEL_252;
        }
        if ( *(_WORD *)(v142 + 16) >= v139 && *(_WORD *)(v4 + 92) <= *(_WORD *)(v142 + 18) )
          goto LABEL_257;
LABEL_252:
        --v140;
        v142 -= 24;
        *(_DWORD *)(v4 + 2792) = v140;
        if ( !v140 )
          goto LABEL_257;
      }
    }
    if ( (unsigned __int16)(v78 - 24) > 1u )
    {
      if ( (unsigned __int16)(v78 - 14) > 1u && (unsigned __int16)(v78 - 17) > 2u )
      {
        if ( v78 == 3 )
        {
          v17 = 20;
          sub_1566D30(a2);
          goto LABEL_53;
        }
        if ( sub_10CCDE0(v78) )
        {
          v80 = *(_DWORD *)(a2 + 20);
          if ( !v80 )
            v80 = *(_DWORD *)(a2 + 16);
          goto LABEL_124;
        }
      }
      goto LABEL_123;
    }
    v143 = *(_WORD *)(a2 + 92);
    if ( v78 == 24 )
    {
      *(_WORD *)(a2 + 92) = v143 + 1;
      goto LABEL_123;
    }
    if ( !v143 )
    {
LABEL_123:
      v80 = *(_DWORD *)(v4 + 16);
LABEL_124:
      *(_DWORD *)(v4 + 40) = v80;
      v17 = 20;
      sub_14634E0(*(__int64 **)(v4 + 8), v260);
      goto LABEL_53;
    }
    v144 = *(_DWORD *)(a2 + 2792);
    if ( !v144 )
    {
LABEL_274:
      *(_WORD *)(v4 + 92) = v143 - 1;
      goto LABEL_123;
    }
    v145 = *(_WORD *)(a2 + 88);
    v146 = *(_QWORD *)(v4 + 2784) + 24LL * v144 - 24;
    while ( 1 )
    {
      if ( v145 == *(_WORD *)(v146 + 14) )
      {
        if ( *(_DWORD *)(v146 + 16) == *(_DWORD *)(v4 + 90) )
          goto LABEL_269;
      }
      else if ( v145 > *(_WORD *)(v146 + 14) )
      {
        goto LABEL_269;
      }
      if ( *(_WORD *)(v4 + 90) <= *(_WORD *)(v146 + 16) && *(_WORD *)(v146 + 18) >= v143 )
        goto LABEL_274;
LABEL_269:
      --v144;
      v146 -= 24;
      *(_DWORD *)(v4 + 2792) = v144;
      if ( !v144 )
        goto LABEL_274;
    }
  }
  v11 = *(__int64 **)(a2 + 8);
  *(_DWORD *)(a2 + 40) = v10;
  sub_14634E0(v11, v260);
  if ( (_WORD)v288 != 5 )
  {
LABEL_26:
    sub_1564840((__int64)&ptr, v4, v287.m128i_i32, 1527);
    v23 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v183 = v309;
      v184 = *((_DWORD *)v309 + 3744);
      if ( v184 )
      {
        v204 = (unsigned int)(v184 - 1);
        *((_DWORD *)v309 + 3744) = v204;
        v23 = (unsigned __int8 *)v183[v204 + 1856];
        v205 = *((unsigned int *)v23 + 134);
        *v23 = 0;
        v206 = *((_QWORD *)v23 + 66);
        *((_DWORD *)v23 + 106) = 0;
        v207 = v206 + (v205 << 6);
        if ( v206 != v207 )
        {
          v208 = a1;
          v209 = v206;
          do
          {
            while ( 1 )
            {
              v207 -= 64;
              v210 = *(void **)(v207 + 24);
              if ( v210 == (void *)(v207 + 40) )
                break;
              operator delete(v210);
              if ( v209 == v207 )
                goto LABEL_414;
            }
          }
          while ( v209 != v207 );
LABEL_414:
          a1 = v208;
        }
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        v23 = (unsigned __int8 *)operator new(0x3A0u);
        *v23 = 0;
        *((_QWORD *)v23 + 12) = v23 + 112;
        *((_QWORD *)v23 + 16) = v23 + 144;
        *((_QWORD *)v23 + 20) = v23 + 176;
        *((_QWORD *)v23 + 24) = v23 + 208;
        *((_QWORD *)v23 + 28) = v23 + 240;
        *((_QWORD *)v23 + 32) = v23 + 272;
        *((_QWORD *)v23 + 36) = v23 + 304;
        *((_QWORD *)v23 + 40) = v23 + 336;
        *((_QWORD *)v23 + 44) = v23 + 368;
        *((_QWORD *)v23 + 48) = v23 + 400;
        *((_QWORD *)v23 + 52) = v23 + 432;
        *((_QWORD *)v23 + 13) = 0;
        v23[112] = 0;
        *((_QWORD *)v23 + 17) = 0;
        v23[144] = 0;
        *((_QWORD *)v23 + 21) = 0;
        v23[176] = 0;
        *((_QWORD *)v23 + 25) = 0;
        v23[208] = 0;
        *((_QWORD *)v23 + 29) = 0;
        v23[240] = 0;
        *((_QWORD *)v23 + 33) = 0;
        v23[272] = 0;
        *((_QWORD *)v23 + 37) = 0;
        v23[304] = 0;
        *((_QWORD *)v23 + 41) = 0;
        v23[336] = 0;
        *((_QWORD *)v23 + 45) = 0;
        v23[368] = 0;
        *((_QWORD *)v23 + 49) = 0;
        v23[400] = 0;
        *((_QWORD *)v23 + 53) = 0x800000000LL;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      ptr = v23;
    }
    v23[*v23 + 1] = 2;
    v24 = ptr;
    v25 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v25 + 1;
    v24[v25 + 2] = 0;
    v26 = 0;
    if ( (unsigned __int16)(v288 - 7) > 0xCu && (_WORD)v288 != 1 )
      v26 = v287.m128i_i64[1];
    v27 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v185 = v309;
      v186 = *((_DWORD *)v309 + 3744);
      if ( v186 )
      {
        v196 = (unsigned int)(v186 - 1);
        *((_DWORD *)v309 + 3744) = v196;
        v27 = (unsigned __int8 *)v185[v196 + 1856];
        v197 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v198 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v199 = v198 + (v197 << 6);
        if ( v198 != v199 )
        {
          v254 = v4;
          v200 = a1;
          v201 = v198;
          v202 = v26;
          do
          {
            while ( 1 )
            {
              v199 -= 64;
              v203 = *(void **)(v199 + 24);
              if ( v203 == (void *)(v199 + 40) )
                break;
              operator delete(v203);
              if ( v201 == v199 )
                goto LABEL_406;
            }
          }
          while ( v201 != v199 );
LABEL_406:
          v26 = v202;
          a1 = v200;
          v4 = v254;
        }
        *((_DWORD *)v27 + 134) = 0;
      }
      else
      {
        v253 = v26;
        v27 = (unsigned __int8 *)operator new(0x3A0u);
        *v27 = 0;
        *((_QWORD *)v27 + 12) = v27 + 112;
        *((_QWORD *)v27 + 16) = v27 + 144;
        *((_QWORD *)v27 + 20) = v27 + 176;
        *((_QWORD *)v27 + 24) = v27 + 208;
        *((_QWORD *)v27 + 28) = v27 + 240;
        *((_QWORD *)v27 + 32) = v27 + 272;
        *((_QWORD *)v27 + 36) = v27 + 304;
        *((_QWORD *)v27 + 40) = v27 + 336;
        *((_QWORD *)v27 + 44) = v27 + 368;
        *((_QWORD *)v27 + 48) = v27 + 400;
        *((_QWORD *)v27 + 52) = v27 + 432;
        *((_QWORD *)v27 + 13) = 0;
        v27[112] = 0;
        *((_QWORD *)v27 + 17) = 0;
        v27[144] = 0;
        *((_QWORD *)v27 + 21) = 0;
        v27[176] = 0;
        *((_QWORD *)v27 + 25) = 0;
        v27[208] = 0;
        *((_QWORD *)v27 + 29) = 0;
        v27[240] = 0;
        *((_QWORD *)v27 + 33) = 0;
        v27[272] = 0;
        *((_QWORD *)v27 + 37) = 0;
        v27[304] = 0;
        *((_QWORD *)v27 + 41) = 0;
        v27[336] = 0;
        *((_QWORD *)v27 + 45) = 0;
        v27[368] = 0;
        *((_QWORD *)v27 + 49) = 0;
        v27[400] = 0;
        *((_QWORD *)v27 + 53) = 0x800000000LL;
        v26 = v253;
        *((_QWORD *)v27 + 66) = v27 + 544;
        *((_QWORD *)v27 + 67) = 0x600000000LL;
      }
      ptr = v27;
    }
    v27[*v27 + 1] = 5;
    v28 = ptr;
    v29 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v29 + 1;
    v28[v29 + 2] = v26;
    if ( (_BYTE)v315 )
    {
      sub_FC7790(v310, (__int64 *)&ptr, SHIBYTE(v315));
      v310 = 0;
      v315 = 0;
    }
    if ( v312 != v314 )
      operator delete(v312);
    v30 = (void **)ptr;
    if ( ptr )
    {
      v31 = v309;
      if ( v309 )
      {
        if ( ptr >= v309 && ptr <= (char *)v309 + 14848 )
        {
          v195 = *((unsigned int *)v309 + 3744);
          *((_DWORD *)v309 + 3744) = v195 + 1;
          v31[v195 + 1856] = v30;
        }
        else
        {
          v32 = *((void ***)ptr + 66);
          v33 = &v32[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v32 != v33 )
          {
            v34 = a1;
            v35 = *((void ***)ptr + 66);
            do
            {
              while ( 1 )
              {
                v33 -= 8;
                v36 = (void **)v33[3];
                if ( v36 == v33 + 5 )
                  break;
                operator delete(v36);
                if ( v35 == v33 )
                  goto LABEL_43;
              }
            }
            while ( v35 != v33 );
LABEL_43:
            a1 = v34;
            v33 = (void **)v30[66];
          }
          if ( v33 != v30 + 68 )
            free(v33);
          v37 = (void **)v30[52];
          if ( v37 != v30 + 54 )
            free(v37);
          v38 = v30 + 48;
          v251 = v30 + 8;
          do
          {
            while ( *v38 != v38 + 2 )
            {
              operator delete(*v38);
              v38 -= 4;
              if ( v38 == v251 )
                goto LABEL_51;
            }
            v38 -= 4;
          }
          while ( v38 != v251 );
LABEL_51:
          operator delete(v30, 0x3A0u);
        }
      }
    }
LABEL_52:
    v17 = 20;
    goto LABEL_53;
  }
  v12 = *(unsigned int **)(v287.m128i_i64[1] + 16);
  v13 = *v12;
  v14 = v13 != 6;
  v15 = v13 != 4;
  if ( v13 == 8 )
  {
    v16 = *((_QWORD *)v12 + 2) == 0x6C656C6C61726170LL;
    v17 = 0;
LABEL_7:
    v18 = v16 || v13 != 9;
    goto LABEL_8;
  }
  if ( v13 == 6 )
  {
    v17 = 1;
    if ( v12[4] == 1769104755 )
    {
      v16 = 1;
      if ( *((_WORD *)v12 + 10) == 27745 )
        goto LABEL_7;
    }
    goto LABEL_259;
  }
  if ( v13 != 7 )
  {
    if ( v13 == 4 )
    {
      v17 = 3;
      v19 = 1;
      if ( v12[4] != 1635017060 )
      {
        v17 = 0;
        v19 = 1;
        if ( v12[4] != 1886351212 )
          goto LABEL_14;
        v17 = 7;
        v19 = 1;
      }
      goto LABEL_163;
    }
    v17 = 0;
LABEL_259:
    v16 = 0;
    goto LABEL_7;
  }
  if ( v12[4] == 1852990827 && *((_WORD *)v12 + 10) == 27749 && *((_BYTE *)v12 + 22) == 115 )
  {
    v19 = 1;
    v17 = 2;
    v16 = 1;
    goto LABEL_9;
  }
  v18 = 1;
  v16 = 0;
  v17 = 0;
LABEL_8:
  v19 = v13 != 5;
  if ( v18 )
  {
LABEL_9:
    v20 = v19 || v16;
    goto LABEL_10;
  }
  if ( *((_QWORD *)v12 + 2) == 0x7461645F74736F68LL && *((_BYTE *)v12 + 24) == 97 )
  {
    v17 = 6;
    goto LABEL_163;
  }
  v20 = v16 || v19;
LABEL_10:
  if ( !v20 )
  {
    if ( v12[4] == 1751343459 && *((_BYTE *)v12 + 20) == 101 )
    {
      v17 = 8;
      goto LABEL_163;
    }
    if ( !v16 )
    {
LABEL_153:
      if ( v13 != 7 )
        goto LABEL_14;
      if ( v12[4] != 1953853298 || *((_WORD *)v12 + 10) != 28265 || *((_BYTE *)v12 + 22) != 101 )
      {
        if ( v12[4] == 1818453348 && *((_WORD *)v12 + 10) == 29281 && *((_BYTE *)v12 + 22) == 101 )
        {
          v17 = 13;
          goto LABEL_163;
        }
LABEL_156:
        v21 = 0;
LABEL_164:
        if ( v13 == 3 && !v21 )
        {
          if ( *((_WORD *)v12 + 8) == 25971 && *((_BYTE *)v12 + 18) == 116 )
          {
            v17 = 16;
            goto LABEL_169;
          }
          goto LABEL_21;
        }
        goto LABEL_18;
      }
      v17 = 19;
    }
LABEL_163:
    v21 = 1;
    goto LABEL_164;
  }
  if ( v16 )
    goto LABEL_163;
  if ( v13 != 6 )
    goto LABEL_153;
  if ( v12[4] == 1836020833 && *((_WORD *)v12 + 10) == 25449 )
  {
    v17 = 12;
    goto LABEL_163;
  }
LABEL_14:
  v21 = v13 != 4;
  if ( v13 != 4 )
  {
    if ( v13 == 8 )
    {
      if ( *((_QWORD *)v12 + 2) == 0x6E776F6474756873LL )
      {
        v17 = 15;
        goto LABEL_21;
      }
      v21 = 0;
      goto LABEL_19;
    }
    goto LABEL_156;
  }
  if ( v12[4] == 1953066601 )
    v17 = 14;
  v21 = v12[4] == 1953066601;
LABEL_18:
  v14 |= v21;
LABEL_19:
  if ( !v14 )
  {
    if ( v12[4] == 1633972341 && *((_WORD *)v12 + 10) == 25972 )
    {
      v17 = 17;
      goto LABEL_169;
    }
    goto LABEL_22;
  }
  v15 |= v21;
LABEL_21:
  if ( !v15 )
  {
    v17 = 18;
    if ( v12[4] == 1953063287 )
      goto LABEL_169;
    goto LABEL_23;
  }
LABEL_22:
  if ( v21 )
  {
LABEL_169:
    v99 = *(_QWORD *)(v4 + 24);
    v100 = *(_WORD *)(v4 + 32);
    v101 = sub_10CCDE0(v100);
    if ( v100 == 5 && !v101 )
    {
      v137 = *(_DWORD **)(v99 + 16);
      if ( *v137 == 4 && v137[4] == 1886351212 )
      {
        if ( (_BYTE)v17 == 1 )
        {
          v188 = *(__int64 **)(v4 + 8);
          v17 = 10;
          *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
          sub_14634E0(v188, v260);
        }
        else if ( (_BYTE)v17 )
        {
          if ( (_BYTE)v17 == 2 )
          {
            v138 = *(__int64 **)(v4 + 8);
            v17 = 11;
            *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
            sub_14634E0(v138, v260);
          }
        }
        else
        {
          v187 = *(__int64 **)(v4 + 8);
          v17 = 9;
          *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
          sub_14634E0(v187, v260);
        }
      }
    }
    goto LABEL_53;
  }
LABEL_23:
  if ( v19 )
  {
    if ( v13 != 4 )
      goto LABEL_26;
    v22 = 22;
    if ( v12[4] != 1953069157 )
      goto LABEL_26;
  }
  else
  {
    if ( v12[4] != 1702129253 )
      goto LABEL_26;
    v22 = 21;
    if ( *((_BYTE *)v12 + 20) != 114 )
      goto LABEL_26;
  }
  a4 = (__m128)_mm_load_si128(&v287);
  v103 = _mm_loadu_si128((const __m128i *)(v4 + 16));
  v292 = *(_QWORD *)(v4 + 32);
  v289 = a4;
  v290 = v288;
  v291 = v103;
  if ( sub_10CCDE0(v292) )
  {
    sub_1564840((__int64)&ptr, v4, (int *)&v289, 1527);
    sub_AE9DF0((unsigned __int8 **)&ptr, 0, 2u);
    v108 = 0;
    if ( (unsigned __int16)(v290 - 7) > 0xCu && (_WORD)v290 != 1 )
      v108 = v289.m128_i64[1];
    v107 = 5;
    goto LABEL_192;
  }
  v104 = *(_WORD *)(v4 + 32);
  if ( v104 == 22 )
  {
    ++*(_WORD *)(v4 + 88);
    goto LABEL_189;
  }
  if ( v104 == 23 )
  {
    v147 = *(_WORD *)(v4 + 88);
    if ( !v147 )
      goto LABEL_189;
    v148 = *(_DWORD *)(v4 + 2792);
    if ( !v148 )
    {
LABEL_302:
      *(_WORD *)(v4 + 88) = v147 - 1;
      goto LABEL_189;
    }
    v149 = *(_QWORD *)(v4 + 2784) + 24LL * v148 - 24;
    while ( 1 )
    {
      if ( v147 == *(_WORD *)(v149 + 14) )
      {
        if ( *(_DWORD *)(v149 + 16) == *(_DWORD *)(v4 + 90) )
          goto LABEL_297;
      }
      else if ( v147 > *(_WORD *)(v149 + 14) )
      {
        goto LABEL_297;
      }
      if ( *(_WORD *)(v4 + 90) <= *(_WORD *)(v149 + 16) && *(_WORD *)(v4 + 92) <= *(_WORD *)(v149 + 18) )
        goto LABEL_302;
LABEL_297:
      --v148;
      v149 -= 24;
      *(_DWORD *)(v4 + 2792) = v148;
      if ( !v148 )
        goto LABEL_302;
    }
  }
  if ( (unsigned __int16)(v104 - 20) <= 1u )
  {
    v105 = *(_WORD *)(v4 + 90);
    if ( v104 == 20 )
    {
      *(_WORD *)(v4 + 90) = v105 + 1;
      goto LABEL_189;
    }
    if ( !v105 )
    {
LABEL_189:
      v106 = *(__int64 **)(v4 + 8);
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
      sub_14634E0(v106, v260);
      goto LABEL_190;
    }
    v221 = *(_DWORD *)(v4 + 2792);
    if ( !v221 )
    {
LABEL_443:
      *(_WORD *)(v4 + 90) = v105 - 1;
      goto LABEL_189;
    }
    v222 = *(_WORD *)(v4 + 88);
    v223 = *(_QWORD *)(v4 + 2784) + 24LL * v221 - 24;
    while ( 1 )
    {
      if ( v222 == *(_WORD *)(v223 + 14) )
      {
        if ( *(_DWORD *)(v223 + 16) == *(_DWORD *)(v4 + 90) )
          goto LABEL_438;
      }
      else if ( v222 > *(_WORD *)(v223 + 14) )
      {
        goto LABEL_438;
      }
      if ( *(_WORD *)(v223 + 16) >= v105 && *(_WORD *)(v4 + 92) <= *(_WORD *)(v223 + 18) )
        goto LABEL_443;
LABEL_438:
      --v221;
      v223 -= 24;
      *(_DWORD *)(v4 + 2792) = v221;
      if ( !v221 )
        goto LABEL_443;
    }
  }
  if ( (unsigned __int16)(v104 - 24) <= 1u )
  {
    v189 = *(_WORD *)(v4 + 92);
    if ( v104 == 24 )
    {
      *(_WORD *)(v4 + 92) = v189 + 1;
      goto LABEL_189;
    }
    if ( !v189 )
      goto LABEL_189;
    v190 = *(_DWORD *)(v4 + 2792);
    if ( !v190 )
    {
LABEL_388:
      *(_WORD *)(v4 + 92) = v189 - 1;
      goto LABEL_189;
    }
    v191 = *(_WORD *)(v4 + 88);
    v192 = *(_QWORD *)(v4 + 2784) + 24LL * v190 - 24;
    while ( 1 )
    {
      if ( v191 == *(_WORD *)(v192 + 14) )
      {
        if ( *(_DWORD *)(v192 + 16) == *(_DWORD *)(v4 + 90) )
          goto LABEL_383;
      }
      else if ( v191 > *(_WORD *)(v192 + 14) )
      {
        goto LABEL_383;
      }
      if ( *(_WORD *)(v4 + 90) <= *(_WORD *)(v192 + 16) && *(_WORD *)(v192 + 18) >= v189 )
        goto LABEL_388;
LABEL_383:
      --v190;
      v192 -= 24;
      *(_DWORD *)(v4 + 2792) = v190;
      if ( !v190 )
        goto LABEL_388;
    }
  }
  if ( (unsigned __int16)(v104 - 17) <= 2u || (unsigned __int16)(v104 - 14) <= 1u )
    goto LABEL_189;
  if ( v104 == 3 )
  {
    sub_1566D30(v4);
  }
  else
  {
    if ( !sub_10CCDE0(v104) )
      goto LABEL_189;
    v230 = *(_DWORD *)(v4 + 20);
    v231 = *(__int64 **)(v4 + 8);
    if ( !v230 )
      v230 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 40) = v230;
    sub_14634E0(v231, v260);
  }
LABEL_190:
  if ( (_WORD)v292 != 5 )
  {
    sub_1564840((__int64)&ptr, v4, v291.m128i_i32, 14);
    v107 = 4;
    v108 = 5;
LABEL_192:
    v17 = 20;
    sub_AE9DF0((unsigned __int8 **)&ptr, v108, v107);
    sub_AEA040((__int64)&ptr);
    goto LABEL_53;
  }
  v152 = *(_DWORD **)(v291.m128i_i64[1] + 16);
  if ( *v152 == 4 && v152[4] == 1635017060 )
  {
    if ( v22 == 21 )
      v17 = 4;
    else
      v17 = 5;
    goto LABEL_53;
  }
  sub_1564840((__int64)&ptr, v4, (int *)&v289, 1527);
  sub_AE9DF0((unsigned __int8 **)&ptr, 1, 2u);
  v153 = v290;
  v154 = sub_141A630((unsigned __int16)v290);
  if ( v153 == 1 || v154 )
LABEL_499:
    BUG();
  v155 = (unsigned __int8 *)ptr;
  v156 = *(_QWORD **)(v289.m128_u64[1] + 16);
  v157 = *v156;
  v158 = (char *)(v156 + 2);
  v159 = (unsigned int)*v156;
  if ( !ptr )
  {
    v226 = v309;
    v227 = *((_DWORD *)v309 + 3744);
    if ( v227 )
    {
      v232 = (unsigned int)(v227 - 1);
      *((_DWORD *)v309 + 3744) = v232;
      v155 = (unsigned __int8 *)v226[v232 + 1856];
      v233 = *((unsigned int *)v155 + 134);
      *v155 = 0;
      v234 = *((_QWORD *)v155 + 66);
      *((_DWORD *)v155 + 106) = 0;
      v233 <<= 6;
      v235 = v234 + v233;
      if ( v234 != v234 + v233 )
      {
        v267 = v155;
        v236 = v156;
        v274 = a1;
        v237 = v234;
        v280 = v4;
        v238 = v159;
        v239 = v157;
        do
        {
          while ( 1 )
          {
            v235 -= 64;
            v240 = *(void **)(v235 + 24);
            if ( v240 == (void *)(v235 + 40) )
              break;
            operator delete(v240);
            if ( v237 == v235 )
              goto LABEL_483;
          }
        }
        while ( v237 != v235 );
LABEL_483:
        v156 = v236;
        LODWORD(v157) = v239;
        v159 = v238;
        v155 = v267;
        a1 = v274;
        v4 = v280;
      }
      *((_DWORD *)v155 + 134) = 0;
    }
    else
    {
      v278 = (char *)(v156 + 2);
      v272 = (unsigned int)*v156;
      v265 = *v156;
      v257 = *(_QWORD **)(v289.m128_u64[1] + 16);
      v155 = (unsigned __int8 *)operator new(0x3A0u);
      *v155 = 0;
      *((_QWORD *)v155 + 12) = v155 + 112;
      *((_QWORD *)v155 + 16) = v155 + 144;
      *((_QWORD *)v155 + 20) = v155 + 176;
      *((_QWORD *)v155 + 24) = v155 + 208;
      *((_QWORD *)v155 + 28) = v155 + 240;
      *((_QWORD *)v155 + 32) = v155 + 272;
      *((_QWORD *)v155 + 36) = v155 + 304;
      *((_QWORD *)v155 + 40) = v155 + 336;
      *((_QWORD *)v155 + 44) = v155 + 368;
      *((_QWORD *)v155 + 48) = v155 + 400;
      *((_QWORD *)v155 + 52) = v155 + 432;
      v155[112] = 0;
      *((_QWORD *)v155 + 13) = 0;
      *((_QWORD *)v155 + 17) = 0;
      v155[144] = 0;
      *((_QWORD *)v155 + 21) = 0;
      v155[176] = 0;
      *((_QWORD *)v155 + 25) = 0;
      v155[208] = 0;
      *((_QWORD *)v155 + 29) = 0;
      v155[240] = 0;
      *((_QWORD *)v155 + 33) = 0;
      v155[272] = 0;
      *((_QWORD *)v155 + 37) = 0;
      v155[304] = 0;
      *((_QWORD *)v155 + 41) = 0;
      v155[336] = 0;
      *((_QWORD *)v155 + 45) = 0;
      v155[368] = 0;
      *((_QWORD *)v155 + 49) = 0;
      v155[400] = 0;
      *((_QWORD *)v155 + 53) = 0x800000000LL;
      v156 = v257;
      *((_QWORD *)v155 + 66) = v155 + 544;
      LODWORD(v157) = v265;
      v159 = v272;
      v158 = v278;
      *((_QWORD *)v155 + 67) = 0x600000000LL;
    }
    ptr = v155;
  }
  v155[*v155 + 1] = 0;
  v298 = &v300;
  if ( &v158[v159] && !v158 )
LABEL_497:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (v157 & 0xFFFFFFF0) != 0 )
  {
    v256 = v159;
    v160 = (__int64 *)operator new(v159 + 1);
    v159 = v256;
    v298 = v160;
    v300 = v256;
LABEL_448:
    v255 = v159;
    memcpy(v160, v158, v159);
    v160 = (__int64 *)v298;
    v159 = v255;
    goto LABEL_340;
  }
  if ( v159 == 1 )
  {
    LOBYTE(v300) = *((_BYTE *)v156 + 16);
    v160 = &v300;
    goto LABEL_340;
  }
  v160 = &v300;
  if ( v159 )
    goto LABEL_448;
LABEL_340:
  n = v159;
  *((_BYTE *)v160 + v159) = 0;
  v161 = ptr;
  v162 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v162 + 1;
  v163 = (unsigned __int8)v162;
  v164 = 4 * (v162 + 3);
  v165 = (void **)&v161[v164];
  v166 = (__int64 *)v161[v164];
  if ( v298 == &v300 )
  {
    v224 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)v166 = v300;
      else
        memcpy(v166, v298, n);
      v224 = n;
      v166 = (__int64 *)*v165;
    }
    v165[1] = (void *)v224;
    *((_BYTE *)v166 + v224) = 0;
    v166 = (__int64 *)v298;
  }
  else
  {
    if ( v166 == &v161[v164 + 2] )
    {
      *v165 = v298;
      v165[1] = (void *)n;
      v165[2] = (void *)v300;
    }
    else
    {
      v167 = v161[4 * v163 + 14];
      *v165 = v298;
      v165[1] = (void *)n;
      v165[2] = (void *)v300;
      if ( v166 )
      {
        v298 = v166;
        v300 = v167;
        goto LABEL_344;
      }
    }
    v166 = &v300;
    v298 = &v300;
  }
LABEL_344:
  n = 0;
  *(_BYTE *)v166 = 0;
  if ( v298 != &v300 )
    operator delete(v298);
  v168 = v292;
  v169 = sub_141A630((unsigned __int16)v292);
  if ( v168 == 1 || v169 )
    goto LABEL_499;
  v170 = (unsigned __int8 *)ptr;
  v171 = *(_QWORD **)(v291.m128i_i64[1] + 16);
  v172 = *v171;
  v173 = (char *)(v171 + 2);
  v174 = (unsigned int)*v171;
  if ( !ptr )
  {
    v228 = v309;
    v229 = *((_DWORD *)v309 + 3744);
    if ( v229 )
    {
      v241 = (unsigned int)(v229 - 1);
      *((_DWORD *)v309 + 3744) = v241;
      v170 = (unsigned __int8 *)v228[v241 + 1856];
      v242 = *((unsigned int *)v170 + 134);
      *v170 = 0;
      v243 = *((_QWORD *)v170 + 66);
      *((_DWORD *)v170 + 106) = 0;
      v244 = v243 + (v242 << 6);
      if ( v243 != v244 )
      {
        v275 = a1;
        v245 = v244;
        v281 = v4;
        v246 = v171;
        v247 = v172;
        v248 = v170;
        v249 = v243;
        do
        {
          while ( 1 )
          {
            v245 -= 64;
            v250 = *(void **)(v245 + 24);
            if ( v250 == (void *)(v245 + 40) )
              break;
            v259 = v174;
            operator delete(v250);
            v174 = v259;
            if ( v249 == v245 )
              goto LABEL_491;
          }
        }
        while ( v249 != v245 );
LABEL_491:
        v170 = v248;
        v171 = v246;
        LODWORD(v172) = v247;
        a1 = v275;
        v4 = v281;
      }
      *((_DWORD *)v170 + 134) = 0;
    }
    else
    {
      v279 = (char *)(v171 + 2);
      v273 = (unsigned int)*v171;
      v266 = *v171;
      v258 = *(_QWORD **)(v291.m128i_i64[1] + 16);
      v170 = (unsigned __int8 *)operator new(0x3A0u);
      *v170 = 0;
      *((_QWORD *)v170 + 12) = v170 + 112;
      *((_QWORD *)v170 + 16) = v170 + 144;
      *((_QWORD *)v170 + 20) = v170 + 176;
      *((_QWORD *)v170 + 24) = v170 + 208;
      *((_QWORD *)v170 + 28) = v170 + 240;
      *((_QWORD *)v170 + 32) = v170 + 272;
      *((_QWORD *)v170 + 36) = v170 + 304;
      *((_QWORD *)v170 + 40) = v170 + 336;
      *((_QWORD *)v170 + 44) = v170 + 368;
      *((_QWORD *)v170 + 48) = v170 + 400;
      *((_QWORD *)v170 + 52) = v170 + 432;
      v170[112] = 0;
      *((_QWORD *)v170 + 13) = 0;
      *((_QWORD *)v170 + 17) = 0;
      v170[144] = 0;
      *((_QWORD *)v170 + 21) = 0;
      v170[176] = 0;
      *((_QWORD *)v170 + 25) = 0;
      v170[208] = 0;
      *((_QWORD *)v170 + 29) = 0;
      v170[240] = 0;
      *((_QWORD *)v170 + 33) = 0;
      v170[272] = 0;
      *((_QWORD *)v170 + 37) = 0;
      v170[304] = 0;
      *((_QWORD *)v170 + 41) = 0;
      v170[336] = 0;
      *((_QWORD *)v170 + 45) = 0;
      v170[368] = 0;
      *((_QWORD *)v170 + 49) = 0;
      v170[400] = 0;
      *((_QWORD *)v170 + 53) = 0x800000000LL;
      v171 = v258;
      *((_QWORD *)v170 + 66) = v170 + 544;
      LODWORD(v172) = v266;
      v174 = v273;
      v173 = v279;
      *((_QWORD *)v170 + 67) = 0x600000000LL;
    }
    ptr = v170;
  }
  v170[*v170 + 1] = 0;
  v302 = &v304;
  if ( &v173[v174] && !v173 )
    goto LABEL_497;
  if ( (v172 & 0xFFFFFFF0) != 0 )
  {
    v264 = v174;
    v175 = (void **)operator new(v174 + 1);
    v174 = v264;
    v302 = v175;
    v304 = (void *)v264;
LABEL_445:
    v263 = v174;
    memcpy(v175, v173, v174);
    v175 = (void **)v302;
    v174 = v263;
    goto LABEL_354;
  }
  if ( v174 == 1 )
  {
    LOBYTE(v304) = *((_BYTE *)v171 + 16);
    v175 = &v304;
    goto LABEL_354;
  }
  v175 = &v304;
  if ( v174 )
    goto LABEL_445;
LABEL_354:
  v303 = v174;
  *((_BYTE *)v175 + v174) = 0;
  v176 = ptr;
  v177 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v177 + 1;
  v178 = (unsigned __int8)v177;
  v179 = 4 * (v177 + 3);
  v180 = (void **)&v176[v179];
  v181 = (void **)v176[v179];
  if ( v302 == &v304 )
  {
    v225 = v303;
    if ( v303 )
    {
      if ( v303 == 1 )
        *(_BYTE *)v181 = (_BYTE)v304;
      else
        memcpy(v181, v302, v303);
      v225 = v303;
      v181 = (void **)*v180;
    }
    v180[1] = (void *)v225;
    *((_BYTE *)v181 + v225) = 0;
    v181 = (void **)v302;
    goto LABEL_358;
  }
  if ( v181 == &v176[v179 + 2] )
  {
    *v180 = v302;
    v180[1] = (void *)v303;
    v180[2] = v304;
    goto LABEL_462;
  }
  v182 = (void *)v176[4 * v178 + 14];
  *v180 = v302;
  v180[1] = (void *)v303;
  v180[2] = v304;
  if ( !v181 )
  {
LABEL_462:
    v181 = &v304;
    v302 = &v304;
    goto LABEL_358;
  }
  v302 = v181;
  v304 = v182;
LABEL_358:
  v303 = 0;
  *(_BYTE *)v181 = 0;
  if ( v302 != &v304 )
    operator delete(v302);
  v17 = 20;
  sub_AEA040((__int64)&ptr);
LABEL_53:
  v39 = (__int64 *)v17;
  LOBYTE(v302) = 0;
  src = v307;
  v306 = 0x600000000LL;
  v300 = 0x600000000LL;
  v40 = *(_QWORD *)(v4 + 96);
  n = (size_t)v301;
  v303 = 0;
  LOBYTE(v298) = 0;
  v41 = *(_QWORD *)(v40 + 744);
  LODWORD(v304) = 0;
  HIDWORD(v298) = 0;
  sub_1AA24E0(v41, v17, v10);
  if ( (_BYTE)v17 == 12 )
  {
    v270 = *(_QWORD *)(v4 + 24);
    v262 = *(_WORD *)(v4 + 32);
    v96 = sub_10CCDE0(v262);
    if ( v262 == 5 && !v96 )
    {
      v97 = *(unsigned int **)(v270 + 16);
      v98 = *v97;
      switch ( v98 )
      {
        case 4LL:
          if ( v97[4] == 1684104562 )
          {
            v277 = 0;
LABEL_180:
            v102 = *(__int64 **)(v4 + 8);
            v39 = (__int64 *)v260;
            *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 16);
            sub_14634E0(v102, v260);
            goto LABEL_55;
          }
          break;
        case 5LL:
          if ( v97[4] == 1953067639 && *((_BYTE *)v97 + 20) == 101 )
          {
            v277 = 1;
            goto LABEL_180;
          }
          break;
        case 6LL:
          if ( v97[4] == 1633972341 && *((_WORD *)v97 + 10) == 25972 )
          {
            v277 = 2;
            goto LABEL_180;
          }
          break;
        default:
          if ( v98 == 7 && v97[4] == 1953522019 && *((_WORD *)v97 + 10) == 29301 && *((_BYTE *)v97 + 22) == 101 )
          {
            v277 = 3;
            goto LABEL_180;
          }
          break;
      }
    }
  }
  v277 = 4;
LABEL_55:
  v42 = *(_WORD *)(v4 + 32) == 22;
  v292 = v4;
  v291.m128i_i64[0] = v4 + 1952;
  v43 = *(_BYTE *)(v4 + 1952);
  v293 = 1507350;
  v291.m128i_i8[8] = v43;
  *(_BYTE *)(v4 + 1952) = 1;
  v294 = 451;
  v295 = sub_146A990;
  v296 = 0;
  v297 = 0;
  if ( !v42 )
    goto LABEL_126;
  if ( (unsigned int)*(unsigned __int16 *)(v4 + 88) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 56LL) + 144LL) )
  {
    LODWORD(v297) = sub_146A990(v4);
    goto LABEL_58;
  }
  if ( (unsigned __int8)sub_1568800((__int64)&v291) )
  {
LABEL_126:
    v261 = a1 + 112;
    v268 = a1 + 48;
    if ( (_BYTE)v17 == 8 )
    {
      sub_1564840((__int64)&ptr, v4, v260, 14);
      v121 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v193 = v309;
        v194 = *((_DWORD *)v309 + 3744);
        if ( v194 )
        {
          v213 = (unsigned int)(v194 - 1);
          *((_DWORD *)v309 + 3744) = v213;
          v121 = (unsigned __int8 *)v193[v213 + 1856];
          v214 = *((unsigned int *)v121 + 134);
          *v121 = 0;
          v215 = *((_QWORD *)v121 + 66);
          *((_DWORD *)v121 + 106) = 0;
          v216 = v215 + (v214 << 6);
          if ( v215 != v216 )
          {
            v217 = a1;
            v218 = v216;
            v219 = v121;
            do
            {
              while ( 1 )
              {
                v218 -= 64;
                v220 = *(void **)(v218 + 24);
                if ( v220 == (void *)(v218 + 40) )
                  break;
                operator delete(v220);
                if ( v215 == v218 )
                  goto LABEL_425;
              }
            }
            while ( v215 != v218 );
LABEL_425:
            v121 = v219;
            a1 = v217;
          }
          *((_DWORD *)v121 + 134) = 0;
        }
        else
        {
          v121 = (unsigned __int8 *)operator new(0x3A0u);
          *v121 = 0;
          *((_QWORD *)v121 + 12) = v121 + 112;
          *((_QWORD *)v121 + 16) = v121 + 144;
          *((_QWORD *)v121 + 20) = v121 + 176;
          *((_QWORD *)v121 + 24) = v121 + 208;
          *((_QWORD *)v121 + 28) = v121 + 240;
          *((_QWORD *)v121 + 32) = v121 + 272;
          *((_QWORD *)v121 + 36) = v121 + 304;
          *((_QWORD *)v121 + 40) = v121 + 336;
          *((_QWORD *)v121 + 44) = v121 + 368;
          *((_QWORD *)v121 + 48) = v121 + 400;
          *((_QWORD *)v121 + 52) = v121 + 432;
          *((_QWORD *)v121 + 13) = 0;
          v121[112] = 0;
          *((_QWORD *)v121 + 17) = 0;
          v121[144] = 0;
          *((_QWORD *)v121 + 21) = 0;
          v121[176] = 0;
          *((_QWORD *)v121 + 25) = 0;
          v121[208] = 0;
          *((_QWORD *)v121 + 29) = 0;
          v121[240] = 0;
          *((_QWORD *)v121 + 33) = 0;
          v121[272] = 0;
          *((_QWORD *)v121 + 37) = 0;
          v121[304] = 0;
          *((_QWORD *)v121 + 41) = 0;
          v121[336] = 0;
          *((_QWORD *)v121 + 45) = 0;
          v121[368] = 0;
          *((_QWORD *)v121 + 49) = 0;
          v121[400] = 0;
          *((_QWORD *)v121 + 53) = 0x800000000LL;
          *((_QWORD *)v121 + 66) = v121 + 544;
          *((_QWORD *)v121 + 67) = 0x600000000LL;
        }
        ptr = v121;
      }
      v121[*v121 + 1] = 4;
      v122 = ptr;
      v123 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v123 + 1;
      v122[v123 + 2] = 22;
      if ( (_BYTE)v315 )
      {
        sub_FC7790(v310, (__int64 *)&ptr, SHIBYTE(v315));
        v310 = 0;
        v315 = 0;
      }
      if ( v312 != v314 )
        operator delete(v312);
      v285 = (void **)ptr;
      if ( ptr )
      {
        v124 = v309;
        if ( v309 )
        {
          if ( ptr >= v309 && ptr <= (char *)v309 + 14848 )
          {
            v212 = *((unsigned int *)v309 + 3744);
            v56 = 0;
            *((_DWORD *)v309 + 3744) = v212 + 1;
            v124[v212 + 1856] = v285;
            goto LABEL_83;
          }
          v125 = *((void ***)ptr + 66);
          v126 = &v125[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
          if ( v125 != v126 )
          {
            v127 = v4;
            v128 = a1;
            v129 = (char *)&v125[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            v130 = v17;
            v131 = *((char **)ptr + 66);
            do
            {
              while ( 1 )
              {
                v129 -= 64;
                v132 = *((char **)v129 + 3);
                if ( v132 == v129 + 40 )
                  break;
                operator delete(v132);
                if ( v131 == v129 )
                  goto LABEL_227;
              }
            }
            while ( v131 != v129 );
LABEL_227:
            v17 = v130;
            a1 = v128;
            v4 = v127;
            v126 = (void **)v285[66];
          }
          if ( v126 != v285 + 68 )
            free(v126);
          v133 = (void **)v285[52];
          if ( v133 != v285 + 54 )
            free(v133);
          v134 = a1;
          v282 = v285 + 8;
          v135 = v285 + 48;
          do
          {
            while ( *v135 != v135 + 2 )
            {
              operator delete(*v135);
              v135 -= 4;
              if ( v135 == v282 )
                goto LABEL_235;
            }
            v135 -= 4;
          }
          while ( v135 != v282 );
LABEL_235:
          a1 = v134;
          operator delete(v285, 0x3A0u);
        }
      }
      v56 = 0;
      goto LABEL_83;
    }
    memset(a1, 0, 0xA0u);
    *a1 = v17;
    *((_DWORD *)a1 + 2) = v10;
    *((_DWORD *)a1 + 1) = v276;
    *(_QWORD *)(a1 + 12) = v297;
    if ( (_BYTE)v17 != 18 )
    {
      *((_DWORD *)a1 + 6) = HIDWORD(v298);
      *((_QWORD *)a1 + 12) = v261;
      a1[28] = v277;
      *((_QWORD *)a1 + 4) = v268;
      *((_QWORD *)a1 + 5) = 0x600000000LL;
      *((_QWORD *)a1 + 13) = 0x600000000LL;
      goto LABEL_88;
    }
LABEL_128:
    v81 = &v310;
    v82 = (unsigned int)v306;
    ptr = &v310;
    *((_DWORD *)a1 + 6) = (_DWORD)v304;
    v83 = 8 * v82;
    *((_QWORD *)a1 + 12) = v261;
    a1[28] = v277;
    v84 = v83 >> 3;
    *((_QWORD *)a1 + 4) = v268;
    v85 = (v83 >> 3) + 1;
    *((_QWORD *)a1 + 5) = 0x600000000LL;
    *((_QWORD *)a1 + 13) = 0x600000000LL;
    v310 = v303;
    v309 = (void *)0x600000001LL;
    v86 = src;
    if ( v85 > 6 )
    {
      v271 = src;
      sub_2237220(&ptr, &v310, v85, 8);
      v86 = v271;
      v84 = v83 >> 3;
      v88 = (int)v309;
      v81 = (size_t *)ptr;
      v87 = (unsigned int)v309;
    }
    else
    {
      v87 = 1;
      v88 = 1;
    }
    if ( v83 )
    {
      v269 = v84;
      memcpy(&v81[v87], v86, v83);
      v88 = (int)v309;
      LODWORD(v84) = v269;
    }
    LODWORD(v309) = v88 + v84;
    sub_1576230((char ***)a1 + 4, (char ***)&ptr);
    v58 = ptr;
    if ( ptr != &v310 )
      goto LABEL_87;
    goto LABEL_88;
  }
LABEL_58:
  v261 = a1 + 112;
  v268 = a1 + 48;
  switch ( (_BYTE)v17 )
  {
    case 0x12:
      sub_1571CA0((__int64)&ptr, v4, v10, 1, v8, *(double *)a4.m128_u64);
      LOBYTE(v302) = (_BYTE)ptr;
      v303 = (size_t)v309;
      LODWORD(v304) = v310;
      sub_1576230((char ***)&src, (char ***)&v311);
      if ( v311 != &v313 )
        free(v311);
      if ( (_BYTE)v302 )
        sub_156E210((__int64)&v291);
      else
        sub_14808E0((__int64)&v291, (__int64 *)&v311, v117, v118, v119, v120);
      memset(a1, 0, 0xA0u);
      *a1 = 18;
      *((_DWORD *)a1 + 2) = v10;
      *((_DWORD *)a1 + 1) = v276;
      *(_QWORD *)(a1 + 12) = v297;
      goto LABEL_128;
    case 0x13:
      v284 = sub_15720A0(v4, *(double *)v8.m128i_i64, a4);
      if ( v284 > 1 )
      {
        sub_14808E0((__int64)&v291, v39, v113, v114, v115, v116);
        v56 = sub_1AAA4D0(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 744LL), v284 & 0xFFFFFFFFFFFFFFFELL);
      }
      else
      {
        sub_156E210((__int64)&v291);
        v56 = v284;
      }
      break;
    case 8:
      sub_1576350((__int64)&ptr, (const __m128i *)v4, *(double *)v8.m128i_i64, *(double *)a4.m128_u64);
      LOBYTE(v298) = (_BYTE)ptr;
      HIDWORD(v298) = HIDWORD(ptr);
      sub_1576230((char ***)&n, (char ***)&v309);
      if ( v309 != &v311 )
        free(v309);
      sub_14808E0((__int64)&v291, (__int64 *)&v309, v109, v110, v111, v112);
      v56 = 0;
      break;
    default:
      sub_1564820((__int64)&ptr, v4, v297, 1528);
      if ( (_BYTE)v315 )
      {
        sub_FC7790(v310, (__int64 *)&ptr, SHIBYTE(v315));
        v310 = 0;
        v315 = 0;
      }
      if ( v312 != v314 )
        operator delete(v312);
      v286 = (void **)ptr;
      if ( ptr )
      {
        v44 = v309;
        if ( v309 )
        {
          if ( ptr >= v309 && ptr <= (char *)v309 + 14848 )
          {
            v211 = *((unsigned int *)v309 + 3744);
            *((_DWORD *)v309 + 3744) = v211 + 1;
            v44[v211 + 1856] = v286;
          }
          else
          {
            v45 = *((void ***)ptr + 66);
            v46 = &v45[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v45 != v46 )
            {
              v47 = v4;
              v48 = a1;
              v49 = (char *)&v45[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
              v50 = v17;
              v51 = *((char **)ptr + 66);
              do
              {
                while ( 1 )
                {
                  v49 -= 64;
                  v52 = *((char **)v49 + 3);
                  if ( v52 == v49 + 40 )
                    break;
                  operator delete(v52);
                  if ( v51 == v49 )
                    goto LABEL_73;
                }
              }
              while ( v51 != v49 );
LABEL_73:
              v17 = v50;
              a1 = v48;
              v4 = v47;
              v46 = (void **)v286[66];
            }
            if ( v46 != v286 + 68 )
              free(v46);
            v53 = (void **)v286[52];
            if ( v53 != v286 + 54 )
              free(v53);
            v54 = a1;
            v283 = v286 + 8;
            v55 = v286 + 48;
            do
            {
              while ( *v55 != v55 + 2 )
              {
                operator delete(*v55);
                v55 -= 4;
                if ( v283 == v55 )
                  goto LABEL_81;
              }
              v55 -= 4;
            }
            while ( v283 != v55 );
LABEL_81:
            a1 = v54;
            operator delete(v286, 0x3A0u);
          }
        }
      }
      sub_156E210((__int64)&v291);
      v56 = 0;
      break;
  }
LABEL_83:
  memset(a1, 0, 0xA0u);
  *a1 = v17;
  *((_DWORD *)a1 + 2) = v10;
  *((_DWORD *)a1 + 1) = v276;
  v57 = v297;
  *((_QWORD *)a1 + 12) = v261;
  *(_QWORD *)(a1 + 12) = v57;
  *((_DWORD *)a1 + 6) = HIDWORD(v298);
  a1[28] = v277;
  *((_QWORD *)a1 + 4) = v268;
  *((_QWORD *)a1 + 5) = 0x600000000LL;
  *((_QWORD *)a1 + 13) = 0x600000000LL;
  if ( (_BYTE)v17 == 8 )
  {
    sub_1576230((char ***)a1 + 4, (char ***)&n);
  }
  else if ( (_BYTE)v17 == 19 && v56 > 1 )
  {
    v310 = v56 & 0xFFFFFFFFFFFFFFFELL;
    ptr = &v310;
    v309 = (void *)0x600000001LL;
    sub_1576230((char ***)a1 + 4, (char ***)&ptr);
    v58 = ptr;
    if ( ptr != &v310 )
LABEL_87:
      free(v58);
  }
LABEL_88:
  sub_157A0E0((__int64)&ptr, v4, v17, v8, *(double *)a4.m128_u64);
  v59 = (size_t *)ptr;
  if ( ptr == &v310 )
  {
    v89 = (unsigned int)v309;
    v90 = *((unsigned int *)a1 + 26);
    v91 = (int)v309;
    if ( (unsigned int)v309 <= v90 )
    {
      v94 = (size_t *)ptr;
      if ( (_DWORD)v309 )
      {
        memmove(*((void **)a1 + 12), ptr, 8LL * (unsigned int)v309);
        v94 = (size_t *)ptr;
      }
    }
    else
    {
      if ( (unsigned int)v309 > (unsigned __int64)*((unsigned int *)a1 + 27) )
      {
        *((_DWORD *)a1 + 26) = 0;
        sub_2237220(a1 + 96, v261, v89, 8);
        v94 = (size_t *)ptr;
        v89 = (unsigned int)v309;
        v90 = 0;
        v92 = *((void **)a1 + 12);
        v59 = (size_t *)ptr;
      }
      else
      {
        v92 = *((void **)a1 + 12);
        v93 = 8 * v90;
        v94 = (size_t *)ptr;
        if ( *((_DWORD *)a1 + 26) )
        {
          memmove(*((void **)a1 + 12), ptr, 8 * v90);
          v94 = (size_t *)ptr;
          v90 = v93;
          v89 = (unsigned int)v309;
          v59 = (size_t *)((char *)ptr + v93);
          v92 = (void *)(v93 + *((_QWORD *)a1 + 12));
        }
      }
      v95 = v89;
      if ( v59 != &v94[v95] )
      {
        memcpy(v92, v59, v95 * 8 - v90);
        v94 = (size_t *)ptr;
      }
    }
    *((_DWORD *)a1 + 26) = v91;
    LODWORD(v309) = 0;
    if ( v94 != &v310 )
      free(v94);
  }
  else
  {
    v60 = *((_BYTE **)a1 + 12);
    if ( v261 != v60 )
    {
      free(v60);
      v59 = (size_t *)ptr;
    }
    v61 = v309;
    *((_QWORD *)a1 + 12) = v59;
    *((_QWORD *)a1 + 13) = v61;
  }
  v62 = *(_DWORD *)(v4 + 20);
  v63 = *(_DWORD *)(v4 + 16);
  v64 = *(__int64 **)(v4 + 8);
  if ( !v62 )
    v62 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 40) = v62;
  sub_14634E0(v64, v260);
  v65 = (__int8 *)v291.m128i_i64[0];
  v66 = v291.m128i_i8[8];
  *((_DWORD *)a1 + 5) = v63;
  v67 = (_BYTE *)n;
  *v65 = v66;
  if ( v67 != v301 )
    free(v67);
  if ( src != v307 )
    free(src);
  return a1;
}
