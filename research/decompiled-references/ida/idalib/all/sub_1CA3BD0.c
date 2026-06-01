__int64 __fastcall sub_1CA3BD0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 *v7; // r12
  char v8; // al
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r13
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  unsigned __int8 *v26; // rbp
  __int64 v27; // r15
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  unsigned __int8 *v32; // rsi
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int8 *v35; // r8
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  unsigned __int8 *v38; // rdi
  unsigned __int64 v39; // rcx
  char v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rbp
  unsigned __int8 *v51; // r12
  _BYTE *v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 *v56; // rsi
  unsigned __int8 *v57; // rbp
  unsigned __int8 *v58; // rdx
  __int64 v59; // rax
  unsigned __int8 *v60; // rdx
  __int64 v61; // rbp
  bool v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r13
  unsigned __int8 *v70; // rbp
  _BYTE *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // r12
  unsigned __int8 *v82; // rbp
  _BYTE *v83; // rdx
  __int64 v84; // rax
  int v85; // eax
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r14
  int v89; // r15d
  __int64 v90; // rdi
  __int64 v91; // rax
  unsigned int v92; // r15d
  bool v93; // r14
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // r13
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // r12
  _BOOL8 v104; // rbp
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // r13
  __int64 v110; // rax
  __int64 v111; // r14
  unsigned __int8 *v112; // r13
  _BYTE *v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rbp
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // r12
  unsigned __int8 *v123; // rbp
  __int64 v124; // rcx
  __int64 v125; // rax
  unsigned __int8 *v126; // rdx
  unsigned int v127; // ebp
  unsigned int v128; // r10d
  unsigned __int8 *v129; // r12
  _BYTE *v130; // rdx
  __int64 v131; // rax
  unsigned __int8 *v132; // r13
  _BYTE *v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rdx
  int v136; // eax
  unsigned __int8 *v137; // r12
  _BYTE *v138; // rdx
  __int64 v139; // rax
  unsigned int v140; // r12d
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 *v146; // rsi
  unsigned int v147; // ecx
  __int64 v148; // rax
  unsigned __int8 *v149; // rdx
  _BOOL8 v150; // r13
  unsigned __int8 *v151; // r12
  _BYTE *v152; // rdx
  __int64 v153; // rax
  unsigned __int8 *v154; // r12
  unsigned __int8 *v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rdx
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rbp
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // rbp
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rax
  _QWORD *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // r13
  __int64 v178; // rax
  _BOOL8 v179; // r15
  _QWORD *v180; // rax
  __int64 v181; // r13
  unsigned __int8 *v182; // r12
  _BYTE *v183; // rdx
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // r12
  __int64 v187; // r13
  __int64 v188; // r12
  void *v189; // rdi
  __int64 v190; // rdx
  int v191; // eax
  __int64 v192; // rax
  __int64 v193; // r13
  __int64 v194; // r14
  __int64 v195; // r13
  void *v196; // rdi
  __int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rdx
  int v200; // eax
  __int64 v201; // rdx
  int v202; // eax
  __int64 v203; // rdx
  int v204; // eax
  __int64 v205; // rdx
  int v206; // eax
  __int64 v207; // rax
  __int64 v208; // r13
  __int64 v209; // r14
  __int64 v210; // r13
  void *v211; // rdi
  __int64 v212; // rdx
  int v213; // eax
  __int64 v214; // rdx
  int v215; // eax
  __int64 v216; // rax
  __int64 v217; // r14
  __int64 v218; // r15
  __int64 v219; // r14
  void *v220; // rdi
  __int64 v221; // rdx
  int v222; // eax
  __int64 v223; // rax
  __int64 v224; // r13
  __int64 v225; // r14
  __int64 v226; // r13
  void *v227; // rdi
  __int64 v228; // rax
  __int64 v229; // r13
  __int64 v230; // r14
  __int64 v231; // r13
  void *v232; // rdi
  __int64 v233; // rdx
  int v234; // eax
  __int64 v235; // rax
  __int64 v236; // r14
  __int64 v237; // r15
  __int64 v238; // r14
  void *v239; // rdi
  __int64 v240; // rax
  __int64 v241; // r14
  __int64 v242; // r15
  __int64 v243; // r14
  void *v244; // rdi
  __int64 v245; // rax
  __int64 v246; // r13
  __int64 v247; // r14
  __int64 v248; // r13
  void *v249; // rdi
  __int64 v250; // rax
  __int64 v251; // r13
  __int64 v252; // r15
  __int64 v253; // r13
  void *v254; // rdi
  __int64 v255; // rax
  __int64 v256; // r15
  __int64 v257; // rdx
  __int64 v258; // r15
  __int64 v259; // rbx
  void *v260; // rdi
  __int64 v261; // rax
  __int64 v262; // r14
  __int64 v263; // rdx
  __int64 v264; // r14
  __int64 v265; // rbx
  void *v266; // rdi
  __int64 v269; // [rsp+18h] [rbp-140h]
  unsigned int v270; // [rsp+20h] [rbp-138h]
  __int16 v271; // [rsp+2Eh] [rbp-12Ah]
  bool v272; // [rsp+30h] [rbp-128h]
  char v273; // [rsp+31h] [rbp-127h]
  char v274; // [rsp+32h] [rbp-126h]
  char v275; // [rsp+33h] [rbp-125h]
  unsigned int v276; // [rsp+34h] [rbp-124h]
  __int64 *v277; // [rsp+38h] [rbp-120h]
  __m128i v278; // [rsp+40h] [rbp-118h] BYREF
  __int64 v279; // [rsp+58h] [rbp-100h] BYREF
  __m128i v280; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int8 *v281; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v282; // [rsp+78h] [rbp-E0h]
  _DWORD *v283; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v284; // [rsp+88h] [rbp-D0h]
  __int64 v285[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v286; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v287; // [rsp+B0h] [rbp-A8h]
  __int64 v288; // [rsp+B8h] [rbp-A0h]
  char v289; // [rsp+108h] [rbp-50h]
  unsigned int v290; // [rsp+110h] [rbp-48h]
  char v291; // [rsp+114h] [rbp-44h]

  v7 = a1;
  v8 = *(_BYTE *)(a2 + 28);
  v278 = (__m128i)__PAIR128__(a4, a3);
  v9 = v8 & 0x7F;
  if ( v9 == 18 )
  {
    v285[0] = *(_QWORD *)(a2 + 40);
    v28 = sub_FDE930(v285);
    v12 = *(_QWORD *)(a2 + 96);
    v13 = v28;
    v269 = v28;
    goto LABEL_4;
  }
  v10 = (unsigned int)v9 - 34;
  if ( (unsigned int)v10 > 5 )
  {
    v21 = (v9 + 109) & 0x7F;
    if ( (unsigned __int8)v21 > 0x38u || (v22 = 0x100EF81CFE06003LL, !_bittest64(&v22, v21)) || (_BYTE)a7 )
    {
      v54 = a5;
      LODWORD(v55) = 6539;
      v56 = a1;
      goto LABEL_46;
    }
    LOBYTE(v285[0]) = 46;
    v23 = sub_2246E40(&v278, v285, 1);
    if ( v23 == -1 )
    {
      v27 = v278.m128i_i64[1];
      v26 = (unsigned __int8 *)v278.m128i_i64[0];
    }
    else
    {
      v24 = v278.m128i_i64[1];
      v25 = v23 + 1;
      v26 = (unsigned __int8 *)v278.m128i_i64[0];
      if ( v23 + 1 > v278.m128i_i64[1] )
      {
        if ( v23 <= v278.m128i_i64[1] )
          v24 = v23;
        v27 = v24;
      }
      else
      {
        if ( v23 > v278.m128i_i64[1] )
          v23 = v278.m128i_u64[1];
        v27 = v278.m128i_i64[1] - v25;
        if ( v278.m128i_i64[1] != v25 )
        {
          if ( !(unsigned __int8)sub_1CA2150(v278.m128i_i64[0], v23) )
          {
            sub_168B9F0((__int64)v285, a1, a5, 0x198Fu, 0);
            v125 = sub_15DD120((__int64)v285, a6);
            LODWORD(v283) = 1;
            goto LABEL_127;
          }
          v26 += v25;
          goto LABEL_125;
        }
        v27 = v23;
      }
    }
    if ( !v27 )
    {
LABEL_126:
      sub_168B9F0((__int64)v285, a1, a5, 0x198Fu, 0);
      v125 = sub_15DD120((__int64)v285, a6);
      LODWORD(v283) = 0;
LABEL_127:
      sub_1587D10(v125, (int *)&v283);
      sub_15F7200(v285);
      return a7;
    }
LABEL_125:
    v124 = *v26;
    if ( (byte_2411740[2 * v124] & 0xE0) != 0 )
    {
      v126 = &v26[v27];
      if ( byte_23F75C0[v124] )
      {
        do
        {
          if ( v126 == ++v26 )
            return 1;
        }
        while ( byte_23F75C0[*v26] );
      }
    }
    goto LABEL_126;
  }
  v11 = sub_B76070(a2, a2, v10, a4);
  v12 = *(_QWORD *)(a2 + 120);
  v13 = v11;
  v269 = (unsigned int)sub_B76070(a2, a2, v14, v15);
  if ( (*(_BYTE *)(a2 + 82) & 0x20) == 0 )
  {
    sub_168B9F0((__int64)v285, a1, a5, 0x19C6u, 0);
    v103 = sub_15DD120((__int64)v285, a6);
    v104 = (*(_BYTE *)(a6 + 35) & 2) != 0;
    if ( *(_BYTE *)(v103 + 120) )
    {
      v132 = *(unsigned __int8 **)(v103 + 32);
      if ( !v132 )
      {
        v203 = *(_QWORD *)(v103 + 40);
        v204 = *(_DWORD *)(v203 + 14976);
        if ( v204 )
        {
          v235 = (unsigned int)(v204 - 1);
          *(_DWORD *)(v203 + 14976) = v235;
          v132 = *(unsigned __int8 **)(v203 + 8 * v235 + 14848);
          v236 = *((unsigned int *)v132 + 134);
          *v132 = 0;
          v237 = *((_QWORD *)v132 + 66);
          *((_DWORD *)v132 + 106) = 0;
          v238 = v237 + (v236 << 6);
          while ( v237 != v238 )
          {
            while ( 1 )
            {
              v238 -= 64;
              v239 = *(void **)(v238 + 24);
              if ( v239 == (void *)(v238 + 40) )
                break;
              operator delete(v239);
              if ( v237 == v238 )
                goto LABEL_293;
            }
          }
LABEL_293:
          *((_DWORD *)v132 + 134) = 0;
        }
        else
        {
          v132 = (unsigned __int8 *)operator new(0x3A0u);
          *v132 = 0;
          *((_QWORD *)v132 + 12) = v132 + 112;
          *((_QWORD *)v132 + 16) = v132 + 144;
          *((_QWORD *)v132 + 20) = v132 + 176;
          *((_QWORD *)v132 + 24) = v132 + 208;
          *((_QWORD *)v132 + 28) = v132 + 240;
          *((_QWORD *)v132 + 32) = v132 + 272;
          *((_QWORD *)v132 + 36) = v132 + 304;
          *((_QWORD *)v132 + 40) = v132 + 336;
          *((_QWORD *)v132 + 44) = v132 + 368;
          *((_QWORD *)v132 + 48) = v132 + 400;
          *((_QWORD *)v132 + 52) = v132 + 432;
          *((_QWORD *)v132 + 13) = 0;
          v132[112] = 0;
          *((_QWORD *)v132 + 17) = 0;
          v132[144] = 0;
          *((_QWORD *)v132 + 21) = 0;
          v132[176] = 0;
          *((_QWORD *)v132 + 25) = 0;
          v132[208] = 0;
          *((_QWORD *)v132 + 29) = 0;
          v132[240] = 0;
          *((_QWORD *)v132 + 33) = 0;
          v132[272] = 0;
          *((_QWORD *)v132 + 37) = 0;
          v132[304] = 0;
          *((_QWORD *)v132 + 41) = 0;
          v132[336] = 0;
          *((_QWORD *)v132 + 45) = 0;
          v132[368] = 0;
          *((_QWORD *)v132 + 49) = 0;
          v132[400] = 0;
          *((_QWORD *)v132 + 53) = 0x800000000LL;
          *((_QWORD *)v132 + 66) = v132 + 544;
          *((_QWORD *)v132 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v103 + 32) = v132;
      }
      v132[*v132 + 1] = 2;
      v133 = *(_BYTE **)(v103 + 32);
      v134 = (unsigned __int8)*v133;
      *v133 = v134 + 1;
      *(_QWORD *)&v133[8 * v134 + 16] = v104;
    }
    else
    {
      if ( !*(_BYTE *)(v103 + 132) )
        goto LABEL_12;
      v109 = sub_168B9E0((_QWORD *)v103);
      v110 = *(_QWORD *)(v103 + 16);
      if ( v110 )
        v110 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v110 + 32LL))(*(_QWORD *)(v103 + 16));
      v283 = (_DWORD *)v110;
      v111 = *sub_1587BC0(v109, (__int64 *)&v283, v105, v106, v107, v108) + 32LL * *(unsigned int *)(v103 + 128);
      v112 = *(unsigned __int8 **)(v111 + 8);
      if ( !v112 )
      {
        v221 = *(_QWORD *)(v111 + 16);
        v222 = *(_DWORD *)(v221 + 14976);
        if ( v222 )
        {
          v255 = (unsigned int)(v222 - 1);
          *(_DWORD *)(v221 + 14976) = v255;
          v112 = *(unsigned __int8 **)(v221 + 8 * v255 + 14848);
          v256 = *((unsigned int *)v112 + 134);
          *v112 = 0;
          v257 = *((_QWORD *)v112 + 66);
          *((_DWORD *)v112 + 106) = 0;
          v258 = v257 + (v256 << 6);
          if ( v257 != v258 )
          {
            v259 = v257;
            do
            {
              while ( 1 )
              {
                v258 -= 64;
                v260 = *(void **)(v258 + 24);
                if ( v260 == (void *)(v258 + 40) )
                  break;
                operator delete(v260);
                if ( v259 == v258 )
                  goto LABEL_314;
              }
            }
            while ( v259 != v258 );
          }
LABEL_314:
          *((_DWORD *)v112 + 134) = 0;
        }
        else
        {
          v112 = (unsigned __int8 *)operator new(0x3A0u);
          *v112 = 0;
          *((_QWORD *)v112 + 12) = v112 + 112;
          *((_QWORD *)v112 + 16) = v112 + 144;
          *((_QWORD *)v112 + 20) = v112 + 176;
          *((_QWORD *)v112 + 24) = v112 + 208;
          *((_QWORD *)v112 + 28) = v112 + 240;
          *((_QWORD *)v112 + 32) = v112 + 272;
          *((_QWORD *)v112 + 36) = v112 + 304;
          *((_QWORD *)v112 + 40) = v112 + 336;
          *((_QWORD *)v112 + 44) = v112 + 368;
          *((_QWORD *)v112 + 48) = v112 + 400;
          *((_QWORD *)v112 + 52) = v112 + 432;
          *((_QWORD *)v112 + 13) = 0;
          v112[112] = 0;
          *((_QWORD *)v112 + 17) = 0;
          v112[144] = 0;
          *((_QWORD *)v112 + 21) = 0;
          v112[176] = 0;
          *((_QWORD *)v112 + 25) = 0;
          v112[208] = 0;
          *((_QWORD *)v112 + 29) = 0;
          v112[240] = 0;
          *((_QWORD *)v112 + 33) = 0;
          v112[272] = 0;
          *((_QWORD *)v112 + 37) = 0;
          v112[304] = 0;
          *((_QWORD *)v112 + 41) = 0;
          v112[336] = 0;
          *((_QWORD *)v112 + 45) = 0;
          v112[368] = 0;
          *((_QWORD *)v112 + 49) = 0;
          v112[400] = 0;
          *((_QWORD *)v112 + 53) = 0x800000000LL;
          *((_QWORD *)v112 + 66) = v112 + 544;
          *((_QWORD *)v112 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v111 + 8) = v112;
      }
      v112[*v112 + 1] = 2;
      v113 = *(_BYTE **)(v111 + 8);
      v114 = (unsigned __int8)*v113;
      *v113 = v114 + 1;
      *(_QWORD *)&v113[8 * v114 + 16] = v104;
    }
    if ( *(_BYTE *)(v103 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v103 + 32), 12, 2u);
    }
    else if ( *(_BYTE *)(v103 + 132) )
    {
      v161 = sub_168B9E0((_QWORD *)v103);
      v164 = *(_QWORD *)(v103 + 16);
      if ( v164 )
        v164 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v164 + 32LL))(*(_QWORD *)(v103 + 16));
      v283 = (_DWORD *)v164;
      v165 = sub_1587BC0(v161, (__int64 *)&v283, v159, v160, v162, v163);
      sub_AE9DF0((unsigned __int8 **)(*v165 + 32LL * *(unsigned int *)(v103 + 128) + 8), 12, 2u);
    }
    goto LABEL_12;
  }
LABEL_4:
  if ( (_BYTE)a7 )
  {
    if ( !v13 )
    {
      sub_168B9F0((__int64)v285, a1, a5, 0x198Cu, 0);
      v61 = sub_15DD120((__int64)v285, a6);
      v62 = (*(_BYTE *)(a2 + 28) & 0x7F) == 18;
      if ( !*(_BYTE *)(v61 + 120) )
      {
        if ( !*(_BYTE *)(v61 + 132) )
          goto LABEL_12;
        v67 = sub_168B9E0((_QWORD *)v61);
        v68 = *(_QWORD *)(v61 + 16);
        if ( v68 )
          v68 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v68 + 32LL))(*(_QWORD *)(v61 + 16));
        v283 = (_DWORD *)v68;
        v69 = *sub_1587BC0(v67, (__int64 *)&v283, v63, v64, v65, v66) + 32LL * *(unsigned int *)(v61 + 128);
        v70 = *(unsigned __int8 **)(v69 + 8);
        if ( !v70 )
        {
          v205 = *(_QWORD *)(v69 + 16);
          v206 = *(_DWORD *)(v205 + 14976);
          if ( v206 )
          {
            v240 = (unsigned int)(v206 - 1);
            *(_DWORD *)(v205 + 14976) = v240;
            v70 = *(unsigned __int8 **)(v205 + 8 * v240 + 14848);
            v241 = *((unsigned int *)v70 + 134);
            *v70 = 0;
            v242 = *((_QWORD *)v70 + 66);
            *((_DWORD *)v70 + 106) = 0;
            v243 = v242 + (v241 << 6);
            while ( v242 != v243 )
            {
              while ( 1 )
              {
                v243 -= 64;
                v244 = *(void **)(v243 + 24);
                if ( v244 == (void *)(v243 + 40) )
                  break;
                operator delete(v244);
                if ( v242 == v243 )
                  goto LABEL_299;
              }
            }
LABEL_299:
            *((_DWORD *)v70 + 134) = 0;
          }
          else
          {
            v70 = (unsigned __int8 *)operator new(0x3A0u);
            *v70 = 0;
            *((_QWORD *)v70 + 12) = v70 + 112;
            *((_QWORD *)v70 + 16) = v70 + 144;
            *((_QWORD *)v70 + 20) = v70 + 176;
            *((_QWORD *)v70 + 24) = v70 + 208;
            *((_QWORD *)v70 + 28) = v70 + 240;
            *((_QWORD *)v70 + 32) = v70 + 272;
            *((_QWORD *)v70 + 36) = v70 + 304;
            *((_QWORD *)v70 + 40) = v70 + 336;
            *((_QWORD *)v70 + 44) = v70 + 368;
            *((_QWORD *)v70 + 48) = v70 + 400;
            *((_QWORD *)v70 + 52) = v70 + 432;
            *((_QWORD *)v70 + 13) = 0;
            v70[112] = 0;
            *((_QWORD *)v70 + 17) = 0;
            v70[144] = 0;
            *((_QWORD *)v70 + 21) = 0;
            v70[176] = 0;
            *((_QWORD *)v70 + 25) = 0;
            v70[208] = 0;
            *((_QWORD *)v70 + 29) = 0;
            v70[240] = 0;
            *((_QWORD *)v70 + 33) = 0;
            v70[272] = 0;
            *((_QWORD *)v70 + 37) = 0;
            v70[304] = 0;
            *((_QWORD *)v70 + 41) = 0;
            v70[336] = 0;
            *((_QWORD *)v70 + 45) = 0;
            v70[368] = 0;
            *((_QWORD *)v70 + 49) = 0;
            v70[400] = 0;
            *((_QWORD *)v70 + 53) = 0x800000000LL;
            *((_QWORD *)v70 + 66) = v70 + 544;
            *((_QWORD *)v70 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v69 + 8) = v70;
        }
        v70[*v70 + 1] = 2;
        v71 = *(_BYTE **)(v69 + 8);
        v72 = (unsigned __int8)*v71;
        *v71 = v72 + 1;
        *(_QWORD *)&v71[8 * v72 + 16] = v62;
        goto LABEL_12;
      }
      v150 = v62;
      v151 = *(unsigned __int8 **)(v61 + 32);
      if ( !v151 )
      {
        v197 = *(_QWORD *)(v61 + 40);
        v198 = *(_DWORD *)(v197 + 14976);
        if ( v198 )
        {
          v216 = (unsigned int)(v198 - 1);
          *(_DWORD *)(v197 + 14976) = v216;
          v151 = *(unsigned __int8 **)(v197 + 8 * v216 + 14848);
          v217 = *((unsigned int *)v151 + 134);
          v218 = *((_QWORD *)v151 + 66);
          *v151 = 0;
          *((_DWORD *)v151 + 106) = 0;
          v219 = v218 + (v217 << 6);
          while ( v218 != v219 )
          {
            while ( 1 )
            {
              v219 -= 64;
              v220 = *(void **)(v219 + 24);
              if ( v220 == (void *)(v219 + 40) )
                break;
              operator delete(v220);
              if ( v218 == v219 )
                goto LABEL_266;
            }
          }
LABEL_266:
          *((_DWORD *)v151 + 134) = 0;
        }
        else
        {
          v151 = (unsigned __int8 *)operator new(0x3A0u);
          *v151 = 0;
          *((_QWORD *)v151 + 12) = v151 + 112;
          *((_QWORD *)v151 + 16) = v151 + 144;
          *((_QWORD *)v151 + 20) = v151 + 176;
          *((_QWORD *)v151 + 24) = v151 + 208;
          *((_QWORD *)v151 + 28) = v151 + 240;
          *((_QWORD *)v151 + 32) = v151 + 272;
          *((_QWORD *)v151 + 36) = v151 + 304;
          *((_QWORD *)v151 + 40) = v151 + 336;
          *((_QWORD *)v151 + 44) = v151 + 368;
          *((_QWORD *)v151 + 48) = v151 + 400;
          *((_QWORD *)v151 + 52) = v151 + 432;
          *((_QWORD *)v151 + 13) = 0;
          v151[112] = 0;
          *((_QWORD *)v151 + 17) = 0;
          v151[144] = 0;
          *((_QWORD *)v151 + 21) = 0;
          v151[176] = 0;
          *((_QWORD *)v151 + 25) = 0;
          v151[208] = 0;
          *((_QWORD *)v151 + 29) = 0;
          v151[240] = 0;
          *((_QWORD *)v151 + 33) = 0;
          v151[272] = 0;
          *((_QWORD *)v151 + 37) = 0;
          v151[304] = 0;
          *((_QWORD *)v151 + 41) = 0;
          v151[336] = 0;
          *((_QWORD *)v151 + 45) = 0;
          v151[368] = 0;
          *((_QWORD *)v151 + 49) = 0;
          v151[400] = 0;
          *((_QWORD *)v151 + 53) = 0x800000000LL;
          *((_QWORD *)v151 + 66) = v151 + 544;
          *((_QWORD *)v151 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v61 + 32) = v151;
      }
      v151[*v151 + 1] = 2;
      v152 = *(_BYTE **)(v61 + 32);
      v153 = (unsigned __int8)*v152;
      *v152 = v153 + 1;
      *(_QWORD *)&v152[8 * v153 + 16] = v150;
      goto LABEL_12;
    }
    --v13;
  }
  v16 = _mm_load_si128(&v278);
  v17 = *a1;
  v280 = v16;
  v18 = v16.m128i_i64[1];
  v19 = v16.m128i_i64[0];
  if ( v16.m128i_i64[1] <= 6uLL )
    goto LABEL_8;
  if ( *(_DWORD *)v16.m128i_i64[0] == 1953785191
    && *(_WORD *)(v16.m128i_i64[0] + 4) == 29285
    && *(_BYTE *)(v16.m128i_i64[0] + 6) == 58 )
  {
    v18 = v16.m128i_i64[1] - 7;
    v19 = v16.m128i_i64[0] + 7;
    v273 = 1;
    v280.m128i_i64[0] = v16.m128i_i64[0] + 7;
    v280.m128i_i64[1] = v16.m128i_i64[1] - 7;
    v271 = 256;
  }
  else
  {
    if ( *(_DWORD *)v16.m128i_i64[0] != 1953785203
      || *(_WORD *)(v16.m128i_i64[0] + 4) != 29285
      || *(_BYTE *)(v16.m128i_i64[0] + 6) != 58 )
    {
LABEL_8:
      v273 = 0;
      v271 = 0;
      goto LABEL_9;
    }
    v18 = v16.m128i_i64[1] - 7;
    v19 = v16.m128i_i64[0] + 7;
    v273 = 1;
    v280.m128i_i64[0] = v16.m128i_i64[0] + 7;
    v280.m128i_i64[1] = v16.m128i_i64[1] - 7;
    v271 = 1;
  }
LABEL_9:
  if ( *(_BYTE *)(v19 + v18 - 1) != 41 )
  {
    sub_168B9F0((__int64)v285, (__int64 *)(v17 + 8), a5, 0x198Du, 0);
    if ( v289 )
    {
      v57 = v287;
      if ( !v287 )
      {
        v157 = v288;
        v158 = *(_DWORD *)(v288 + 14976);
        if ( v158 )
        {
          v185 = (unsigned int)(v158 - 1);
          *(_DWORD *)(v288 + 14976) = v185;
          v57 = *(unsigned __int8 **)(v157 + 8 * v185 + 14848);
          v186 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          v187 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v188 = v187 + (v186 << 6);
          while ( v187 != v188 )
          {
            while ( 1 )
            {
              v188 -= 64;
              v189 = *(void **)(v188 + 24);
              if ( v189 == (void *)(v188 + 40) )
                break;
              operator delete(v189);
              if ( v187 == v188 )
                goto LABEL_226;
            }
          }
LABEL_226:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        v287 = v57;
      }
      v57[*v57 + 1] = 16;
      v58 = v287;
    }
    else
    {
      if ( !v291 )
        goto LABEL_12;
      v117 = sub_168B9E0(v285);
      v120 = v286;
      if ( v286 )
        v120 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v286 + 32LL))(v286);
      v283 = (_DWORD *)v120;
      v121 = sub_1587BC0(v117, (__int64 *)&v283, v115, v116, v118, v119);
      v122 = *v121 + 32LL * v290;
      v123 = *(unsigned __int8 **)(v122 + 8);
      if ( !v123 )
      {
        v135 = *(_QWORD *)(v122 + 16);
        v136 = *(_DWORD *)(v135 + 14976);
        if ( v136 )
        {
          v192 = (unsigned int)(v136 - 1);
          *(_DWORD *)(v135 + 14976) = v192;
          v123 = *(unsigned __int8 **)(v135 + 8 * v192 + 14848);
          v193 = *((unsigned int *)v123 + 134);
          *v123 = 0;
          v194 = *((_QWORD *)v123 + 66);
          *((_DWORD *)v123 + 106) = 0;
          v195 = v194 + (v193 << 6);
          while ( v194 != v195 )
          {
            while ( 1 )
            {
              v195 -= 64;
              v196 = *(void **)(v195 + 24);
              if ( v196 == (void *)(v195 + 40) )
                break;
              operator delete(v196);
              if ( v194 == v195 )
                goto LABEL_235;
            }
          }
LABEL_235:
          *((_DWORD *)v123 + 134) = 0;
        }
        else
        {
          v123 = (unsigned __int8 *)operator new(0x3A0u);
          *v123 = 0;
          *((_QWORD *)v123 + 12) = v123 + 112;
          *((_QWORD *)v123 + 16) = v123 + 144;
          *((_QWORD *)v123 + 20) = v123 + 176;
          *((_QWORD *)v123 + 24) = v123 + 208;
          *((_QWORD *)v123 + 28) = v123 + 240;
          *((_QWORD *)v123 + 32) = v123 + 272;
          *((_QWORD *)v123 + 36) = v123 + 304;
          *((_QWORD *)v123 + 40) = v123 + 336;
          *((_QWORD *)v123 + 44) = v123 + 368;
          *((_QWORD *)v123 + 48) = v123 + 400;
          *((_QWORD *)v123 + 52) = v123 + 432;
          *((_QWORD *)v123 + 13) = 0;
          v123[112] = 0;
          *((_QWORD *)v123 + 17) = 0;
          v123[144] = 0;
          *((_QWORD *)v123 + 21) = 0;
          v123[176] = 0;
          *((_QWORD *)v123 + 25) = 0;
          v123[208] = 0;
          *((_QWORD *)v123 + 29) = 0;
          v123[240] = 0;
          *((_QWORD *)v123 + 33) = 0;
          v123[272] = 0;
          *((_QWORD *)v123 + 37) = 0;
          v123[304] = 0;
          *((_QWORD *)v123 + 41) = 0;
          v123[336] = 0;
          *((_QWORD *)v123 + 45) = 0;
          v123[368] = 0;
          *((_QWORD *)v123 + 49) = 0;
          v123[400] = 0;
          *((_QWORD *)v123 + 53) = 0x800000000LL;
          *((_QWORD *)v123 + 66) = v123 + 544;
          *((_QWORD *)v123 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v122 + 8) = v123;
      }
      v123[*v123 + 1] = 16;
      v58 = *(unsigned __int8 **)(v122 + 8);
    }
    v59 = *v58;
    *v58 = v59 + 1;
    *(_QWORD *)&v58[8 * v59 + 16] = a6;
    goto LABEL_12;
  }
  v281 = nullptr;
  v282 = 0;
  v283 = nullptr;
  v284 = 0;
  LOBYTE(v285[0]) = 40;
  v29 = sub_2246AB0(&v280, v285, 1, 0);
  if ( v29 == -1 )
  {
    v29 = v280.m128i_u64[1];
    v32 = (unsigned __int8 *)v280.m128i_i64[0];
    v31 = 0;
    v33 = 0;
  }
  else
  {
    v30 = v29 + 1;
    if ( v29 + 1 > v280.m128i_i64[1] )
    {
      v30 = v280.m128i_u64[1];
      v31 = 0;
    }
    else
    {
      v31 = v280.m128i_i64[1] - v30;
    }
    v32 = (unsigned __int8 *)v280.m128i_i64[0];
    v33 = v280.m128i_i64[0] + v30;
    if ( v29 > v280.m128i_i64[1] )
      v29 = v280.m128i_u64[1];
  }
  v281 = v32;
  v283 = (_DWORD *)v33;
  v284 = v31;
  v282 = v29;
  LOBYTE(v285[0]) = 46;
  v34 = sub_2246E40(&v281, v285, 1);
  if ( v34 == -1 )
  {
    v38 = v281;
    v36 = v282;
    goto LABEL_57;
  }
  v36 = v282;
  v37 = v34 + 1;
  if ( v34 + 1 > v282 )
  {
    v38 = v281;
    if ( v34 <= v282 )
      v36 = v34;
    goto LABEL_57;
  }
  v38 = v281;
  v39 = v282 - v37;
  if ( v34 <= v282 )
    v36 = v34;
  v282 -= v37;
  v281 += v37;
  if ( !v39 )
  {
LABEL_57:
    v281 = v38;
    v40 = 0;
    v282 = v36;
    goto LABEL_37;
  }
  if ( !v36 || (v40 = sub_1CA2150((__int64)v38, v36)) == 0 )
  {
    sub_168B9F0((__int64)v285, (__int64 *)(v17 + 8), a5, 0x198Fu, 0);
    v73 = sub_15DD120((__int64)v285, a6);
    v74 = v73;
    if ( !*(_BYTE *)(v73 + 120) )
    {
      if ( !*(_BYTE *)(v73 + 132) )
        goto LABEL_12;
      v79 = sub_168B9E0((_QWORD *)v73);
      v80 = *(_QWORD *)(v74 + 16);
      if ( v80 )
        v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v80 + 32LL))(*(_QWORD *)(v74 + 16));
      v279 = v80;
      v81 = *sub_1587BC0(v79, &v279, v75, v76, v77, v78) + 32LL * *(unsigned int *)(v74 + 128);
      v82 = *(unsigned __int8 **)(v81 + 8);
      if ( !v82 )
      {
        v212 = *(_QWORD *)(v81 + 16);
        v213 = *(_DWORD *)(v212 + 14976);
        if ( v213 )
        {
          v245 = (unsigned int)(v213 - 1);
          *(_DWORD *)(v212 + 14976) = v245;
          v82 = *(unsigned __int8 **)(v212 + 8 * v245 + 14848);
          v246 = *((unsigned int *)v82 + 134);
          *v82 = 0;
          v247 = *((_QWORD *)v82 + 66);
          *((_DWORD *)v82 + 106) = 0;
          v248 = v247 + (v246 << 6);
          while ( v247 != v248 )
          {
            while ( 1 )
            {
              v248 -= 64;
              v249 = *(void **)(v248 + 24);
              if ( v249 == (void *)(v248 + 40) )
                break;
              operator delete(v249);
              if ( v247 == v248 )
                goto LABEL_304;
            }
          }
LABEL_304:
          *((_DWORD *)v82 + 134) = 0;
        }
        else
        {
          v82 = (unsigned __int8 *)operator new(0x3A0u);
          *v82 = 0;
          *((_QWORD *)v82 + 12) = v82 + 112;
          *((_QWORD *)v82 + 16) = v82 + 144;
          *((_QWORD *)v82 + 20) = v82 + 176;
          *((_QWORD *)v82 + 24) = v82 + 208;
          *((_QWORD *)v82 + 28) = v82 + 240;
          *((_QWORD *)v82 + 32) = v82 + 272;
          *((_QWORD *)v82 + 36) = v82 + 304;
          *((_QWORD *)v82 + 40) = v82 + 336;
          *((_QWORD *)v82 + 44) = v82 + 368;
          *((_QWORD *)v82 + 48) = v82 + 400;
          *((_QWORD *)v82 + 52) = v82 + 432;
          *((_QWORD *)v82 + 13) = 0;
          v82[112] = 0;
          *((_QWORD *)v82 + 17) = 0;
          v82[144] = 0;
          *((_QWORD *)v82 + 21) = 0;
          v82[176] = 0;
          *((_QWORD *)v82 + 25) = 0;
          v82[208] = 0;
          *((_QWORD *)v82 + 29) = 0;
          v82[240] = 0;
          *((_QWORD *)v82 + 33) = 0;
          v82[272] = 0;
          *((_QWORD *)v82 + 37) = 0;
          v82[304] = 0;
          *((_QWORD *)v82 + 41) = 0;
          v82[336] = 0;
          *((_QWORD *)v82 + 45) = 0;
          v82[368] = 0;
          *((_QWORD *)v82 + 49) = 0;
          v82[400] = 0;
          *((_QWORD *)v82 + 53) = 0x800000000LL;
          *((_QWORD *)v82 + 66) = v82 + 544;
          *((_QWORD *)v82 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v81 + 8) = v82;
      }
      v82[*v82 + 1] = 2;
      v83 = *(_BYTE **)(v81 + 8);
      v84 = (unsigned __int8)*v83;
      *v83 = v84 + 1;
      *(_QWORD *)&v83[8 * v84 + 16] = 1;
      goto LABEL_12;
    }
    v129 = *(unsigned __int8 **)(v73 + 32);
    if ( !v129 )
    {
      v199 = *(_QWORD *)(v73 + 40);
      v200 = *(_DWORD *)(v199 + 14976);
      if ( v200 )
      {
        v223 = (unsigned int)(v200 - 1);
        *(_DWORD *)(v199 + 14976) = v223;
        v129 = *(unsigned __int8 **)(v199 + 8 * v223 + 14848);
        v224 = *((unsigned int *)v129 + 134);
        v225 = *((_QWORD *)v129 + 66);
        *v129 = 0;
        *((_DWORD *)v129 + 106) = 0;
        v226 = v225 + (v224 << 6);
        while ( v225 != v226 )
        {
          while ( 1 )
          {
            v226 -= 64;
            v227 = *(void **)(v226 + 24);
            if ( v227 == (void *)(v226 + 40) )
              break;
            operator delete(v227);
            if ( v225 == v226 )
              goto LABEL_276;
          }
        }
LABEL_276:
        *((_DWORD *)v129 + 134) = 0;
      }
      else
      {
        v129 = (unsigned __int8 *)operator new(0x3A0u);
        *v129 = 0;
        *((_QWORD *)v129 + 12) = v129 + 112;
        *((_QWORD *)v129 + 16) = v129 + 144;
        *((_QWORD *)v129 + 20) = v129 + 176;
        *((_QWORD *)v129 + 24) = v129 + 208;
        *((_QWORD *)v129 + 28) = v129 + 240;
        *((_QWORD *)v129 + 32) = v129 + 272;
        *((_QWORD *)v129 + 36) = v129 + 304;
        *((_QWORD *)v129 + 40) = v129 + 336;
        *((_QWORD *)v129 + 44) = v129 + 368;
        *((_QWORD *)v129 + 48) = v129 + 400;
        *((_QWORD *)v129 + 52) = v129 + 432;
        *((_QWORD *)v129 + 13) = 0;
        v129[112] = 0;
        *((_QWORD *)v129 + 17) = 0;
        v129[144] = 0;
        *((_QWORD *)v129 + 21) = 0;
        v129[176] = 0;
        *((_QWORD *)v129 + 25) = 0;
        v129[208] = 0;
        *((_QWORD *)v129 + 29) = 0;
        v129[240] = 0;
        *((_QWORD *)v129 + 33) = 0;
        v129[272] = 0;
        *((_QWORD *)v129 + 37) = 0;
        v129[304] = 0;
        *((_QWORD *)v129 + 41) = 0;
        v129[336] = 0;
        *((_QWORD *)v129 + 45) = 0;
        v129[368] = 0;
        *((_QWORD *)v129 + 49) = 0;
        v129[400] = 0;
        *((_QWORD *)v129 + 53) = 0x800000000LL;
        *((_QWORD *)v129 + 66) = v129 + 544;
        *((_QWORD *)v129 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v74 + 32) = v129;
    }
    v129[*v129 + 1] = 2;
    v130 = *(_BYTE **)(v74 + 32);
    v131 = (unsigned __int8)*v130;
    *v130 = v131 + 1;
    *(_QWORD *)&v130[8 * v131 + 16] = 1;
    goto LABEL_12;
  }
  v38 = v281;
  v36 = v282;
LABEL_37:
  if ( !v36 || (v41 = *v38, (byte_2411740[2 * v41] & 0xE0) == 0) )
  {
LABEL_39:
    sub_168B9F0((__int64)v285, (__int64 *)(v17 + 8), a5, 0x198Fu, 0);
    v42 = sub_15DD120((__int64)v285, a6);
    v43 = v42;
    if ( *(_BYTE *)(v42 + 120) )
    {
      v137 = *(unsigned __int8 **)(v42 + 32);
      if ( !v137 )
      {
        v190 = *(_QWORD *)(v42 + 40);
        v191 = *(_DWORD *)(v190 + 14976);
        if ( v191 )
        {
          v207 = (unsigned int)(v191 - 1);
          *(_DWORD *)(v190 + 14976) = v207;
          v137 = *(unsigned __int8 **)(v190 + 8 * v207 + 14848);
          v208 = *((unsigned int *)v137 + 134);
          v209 = *((_QWORD *)v137 + 66);
          *v137 = 0;
          *((_DWORD *)v137 + 106) = 0;
          v210 = v209 + (v208 << 6);
          while ( v209 != v210 )
          {
            while ( 1 )
            {
              v210 -= 64;
              v211 = *(void **)(v210 + 24);
              if ( v211 == (void *)(v210 + 40) )
                break;
              operator delete(v211);
              if ( v209 == v210 )
                goto LABEL_255;
            }
          }
LABEL_255:
          *((_DWORD *)v137 + 134) = 0;
        }
        else
        {
          v137 = (unsigned __int8 *)operator new(0x3A0u);
          *v137 = 0;
          *((_QWORD *)v137 + 12) = v137 + 112;
          *((_QWORD *)v137 + 16) = v137 + 144;
          *((_QWORD *)v137 + 20) = v137 + 176;
          *((_QWORD *)v137 + 24) = v137 + 208;
          *((_QWORD *)v137 + 28) = v137 + 240;
          *((_QWORD *)v137 + 32) = v137 + 272;
          *((_QWORD *)v137 + 36) = v137 + 304;
          *((_QWORD *)v137 + 40) = v137 + 336;
          *((_QWORD *)v137 + 44) = v137 + 368;
          *((_QWORD *)v137 + 48) = v137 + 400;
          *((_QWORD *)v137 + 52) = v137 + 432;
          *((_QWORD *)v137 + 13) = 0;
          v137[112] = 0;
          *((_QWORD *)v137 + 17) = 0;
          v137[144] = 0;
          *((_QWORD *)v137 + 21) = 0;
          v137[176] = 0;
          *((_QWORD *)v137 + 25) = 0;
          v137[208] = 0;
          *((_QWORD *)v137 + 29) = 0;
          v137[240] = 0;
          *((_QWORD *)v137 + 33) = 0;
          v137[272] = 0;
          *((_QWORD *)v137 + 37) = 0;
          v137[304] = 0;
          *((_QWORD *)v137 + 41) = 0;
          v137[336] = 0;
          *((_QWORD *)v137 + 45) = 0;
          v137[368] = 0;
          *((_QWORD *)v137 + 49) = 0;
          v137[400] = 0;
          *((_QWORD *)v137 + 53) = 0x800000000LL;
          *((_QWORD *)v137 + 66) = v137 + 544;
          *((_QWORD *)v137 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v43 + 32) = v137;
      }
      v137[*v137 + 1] = 2;
      v138 = *(_BYTE **)(v43 + 32);
      v139 = (unsigned __int8)*v138;
      *v138 = v139 + 1;
      *(_QWORD *)&v138[8 * v139 + 16] = 0;
    }
    else if ( *(_BYTE *)(v42 + 132) )
    {
      v48 = sub_168B9E0((_QWORD *)v42);
      v49 = *(_QWORD *)(v43 + 16);
      if ( v49 )
        v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v49 + 32LL))(*(_QWORD *)(v43 + 16));
      v279 = v49;
      v50 = *sub_1587BC0(v48, &v279, v44, v45, v46, v47) + 32LL * *(unsigned int *)(v43 + 128);
      v51 = *(unsigned __int8 **)(v50 + 8);
      if ( !v51 )
      {
        v201 = *(_QWORD *)(v50 + 16);
        v202 = *(_DWORD *)(v201 + 14976);
        if ( v202 )
        {
          v228 = (unsigned int)(v202 - 1);
          *(_DWORD *)(v201 + 14976) = v228;
          v51 = *(unsigned __int8 **)(v201 + 8 * v228 + 14848);
          v229 = *((unsigned int *)v51 + 134);
          v230 = *((_QWORD *)v51 + 66);
          *v51 = 0;
          *((_DWORD *)v51 + 106) = 0;
          v231 = v230 + (v229 << 6);
          while ( v230 != v231 )
          {
            while ( 1 )
            {
              v231 -= 64;
              v232 = *(void **)(v231 + 24);
              if ( v232 == (void *)(v231 + 40) )
                break;
              operator delete(v232);
              if ( v230 == v231 )
                goto LABEL_281;
            }
          }
LABEL_281:
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          *((_QWORD *)v51 + 66) = v51 + 544;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v50 + 8) = v51;
      }
      v51[*v51 + 1] = 2;
      v52 = *(_BYTE **)(v50 + 8);
      v53 = (unsigned __int8)*v52;
      *v52 = v53 + 1;
      *(_QWORD *)&v52[8 * v53 + 16] = 0;
    }
    goto LABEL_12;
  }
  if ( &v38[v36] != v38 )
  {
    if ( !byte_23F75C0[v41] )
      goto LABEL_39;
    v60 = v38;
    while ( &v38[v36] != ++v60 )
    {
      if ( !byte_23F75C0[*v60] )
        goto LABEL_39;
    }
  }
  if ( v36 == 1 )
  {
    if ( *v38 == 95 )
      goto LABEL_39;
  }
  else if ( v36 == 9 )
  {
    if ( *(_QWORD *)v38 != 0x7069726373627573LL || (v85 = 0, v38[8] != 116) )
      v85 = 1;
    v272 = v85 == 0;
    if ( !v271 && !v85 )
    {
      sub_168B9F0((__int64)v285, (__int64 *)(v17 + 8), a5, 0x1995u, 0);
      v148 = sub_15DD120((__int64)v285, a6);
      LODWORD(v279) = 0;
      goto LABEL_181;
    }
    goto LABEL_84;
  }
  v272 = 0;
LABEL_84:
  v86 = v284;
  if ( !v284 )
  {
    v56 = (__int64 *)(v17 + 8);
    LODWORD(v55) = 6544;
    goto LABEL_196;
  }
  v87 = v284 - 1;
  v55 = (__int64)v283;
  --v284;
  if ( v86 == 1 )
  {
    if ( !v272 )
    {
      if ( (_BYTE)v271 )
      {
        v56 = (__int64 *)(v17 + 8);
        LODWORD(v55) = 6547;
        goto LABEL_196;
      }
      if ( !v13 )
        return 1;
      v270 = 0;
LABEL_90:
      v88 = v12 + 8 * v269;
      if ( v88 == v12 )
      {
        v92 = v270;
      }
      else
      {
        v89 = 0;
        do
        {
          v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v90 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
          {
            v91 = sub_F68450(v90, v36, v87, v55, (__int64)v35);
            if ( (v91 & 1) == 0 )
              v89 += (*(_DWORD *)&byte_8[v91 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0;
          }
          v12 += 8;
        }
        while ( v88 != v12 );
        v92 = v270 + v89;
      }
      if ( v92 < v13 )
        goto LABEL_98;
      return 1;
    }
    sub_168B9F0((__int64)v285, (__int64 *)(v17 + 8), a5, 0x1995u, 0);
    v148 = sub_15DD120((__int64)v285, a6);
    LODWORD(v279) = 1;
LABEL_181:
    sub_1587D10(v148, (int *)&v279);
    goto LABEL_12;
  }
  if ( *((_BYTE *)v283 + v86 - 2) != 58 )
  {
    v56 = (__int64 *)(v17 + 8);
    LODWORD(v55) = 6541;
    goto LABEL_196;
  }
  v276 = v13;
  v275 = 0;
  v127 = 0;
  v274 = 0;
  v277 = v7;
  v140 = 0;
  do
  {
    LOBYTE(v285[0]) = 58;
    v141 = sub_2246AB0(&v283, v285, 1, 0);
    if ( v141 == -1 )
    {
      v35 = (unsigned __int8 *)v283;
      v141 = v284;
      v143 = 0;
      v144 = 0;
    }
    else
    {
      v142 = v141 + 1;
      if ( v141 + 1 > v284 )
      {
        v142 = v284;
        v143 = 0;
      }
      else
      {
        v143 = v284 - v142;
      }
      v35 = (unsigned __int8 *)v283;
      v144 = (__int64)v283 + v142;
      if ( v141 > v284 )
        v141 = v284;
    }
    v283 = (_DWORD *)v144;
    v284 = v143;
    if ( !v141 || (v145 = *v35, v55 = (__int64)byte_2411740, (byte_2411740[2 * v145] & 0xE0) == 0) )
    {
LABEL_179:
      v146 = (__int64 *)(v17 + 8);
      v147 = 6543;
LABEL_180:
      sub_168B9F0((__int64)v285, v146, a5, v147, 0);
      v148 = sub_15DD120((__int64)v285, a6);
      LODWORD(v279) = 2;
      goto LABEL_181;
    }
    v36 = (__int64)&v35[v141];
    if ( &v35[v141] != v35 )
    {
      if ( !byte_23F75C0[v145] )
        goto LABEL_179;
      v149 = v35;
      while ( (unsigned __int8 *)v36 != ++v149 )
      {
        v55 = *v149;
        if ( !byte_23F75C0[v55] )
          goto LABEL_179;
      }
    }
    if ( v40 && v141 == 4 )
    {
      if ( *(_DWORD *)v35 == 1718379891 )
      {
        if ( v274 )
        {
          v56 = (__int64 *)(v17 + 8);
          LODWORD(v55) = 6545;
          goto LABEL_196;
        }
        v274 = 1;
      }
    }
    else if ( v141 == 8 )
    {
      v55 = 0x65756C615677656ELL;
      if ( *(_QWORD *)v35 == 0x65756C615677656ELL )
      {
        ++v140;
        v275 = 1;
      }
    }
    ++v127;
  }
  while ( v143 );
  v128 = v140;
  v270 = v127;
  v7 = v277;
  v13 = v276;
  if ( v272 && !v274 )
  {
    v146 = (__int64 *)(v17 + 8);
    v147 = 6549;
    goto LABEL_180;
  }
  v87 = 0;
  if ( v270 == 1 && v282 == 4 )
  {
    v55 = (__int64)v281;
    if ( *(_DWORD *)v281 == 1953066601 )
    {
      v87 = 1;
      if ( v141 == 1 )
        LOBYTE(v87) = *v35 != 95;
    }
  }
  if ( !v273 )
    goto LABEL_149;
  v36 = HIBYTE(v271) == 0;
  v55 = (-(unsigned __int8)v36 & 5u) + 6542;
  if ( v274 )
    v36 = (unsigned int)((HIBYTE(v271) << 31 >> 31) + 2);
  if ( !v272 )
  {
    if ( v270 == (_DWORD)v36 )
      goto LABEL_149;
LABEL_271:
    v56 = (__int64 *)(v17 + 8);
    goto LABEL_196;
  }
  if ( v270 < (unsigned int)v36 )
    goto LABEL_271;
  if ( (_BYTE)v271 )
  {
    if ( v275 )
    {
      if ( v128 <= 1 )
        goto LABEL_149;
      v56 = (__int64 *)(v17 + 8);
      LODWORD(v55) = 6550;
    }
    else
    {
      v56 = (__int64 *)(v17 + 8);
      LODWORD(v55) = 6551;
    }
LABEL_196:
    v54 = a5;
LABEL_46:
    sub_168B9F0((__int64)v285, v56, v54, v55, 0);
    sub_15DD120((__int64)v285, a6);
    goto LABEL_12;
  }
  if ( v275 )
  {
    v56 = (__int64 *)(v17 + 8);
    LODWORD(v55) = 6548;
    goto LABEL_196;
  }
LABEL_149:
  if ( v270 == v276 )
    return 1;
  if ( v270 <= v276 )
    goto LABEL_90;
  if ( !v276 && (_BYTE)v87 )
    return 1;
LABEL_98:
  sub_168B9F0((__int64)v285, v7, a5, 0x1992u, 0);
  v93 = v13 < v270;
  if ( v289 )
  {
    v154 = v287;
    if ( !v287 )
    {
      v214 = v288;
      v215 = *(_DWORD *)(v288 + 14976);
      if ( v215 )
      {
        v250 = (unsigned int)(v215 - 1);
        *(_DWORD *)(v288 + 14976) = v250;
        v154 = *(unsigned __int8 **)(v214 + 8 * v250 + 14848);
        v251 = *((unsigned int *)v154 + 134);
        v252 = *((_QWORD *)v154 + 66);
        *v154 = 0;
        *((_DWORD *)v154 + 106) = 0;
        v253 = v252 + (v251 << 6);
        while ( v252 != v253 )
        {
          while ( 1 )
          {
            v253 -= 64;
            v254 = *(void **)(v253 + 24);
            if ( v254 == (void *)(v253 + 40) )
              break;
            operator delete(v254);
            if ( v252 == v253 )
              goto LABEL_309;
          }
        }
LABEL_309:
        *((_DWORD *)v154 + 134) = 0;
      }
      else
      {
        v154 = (unsigned __int8 *)operator new(0x3A0u);
        *v154 = 0;
        *((_QWORD *)v154 + 12) = v154 + 112;
        *((_QWORD *)v154 + 16) = v154 + 144;
        *((_QWORD *)v154 + 20) = v154 + 176;
        *((_QWORD *)v154 + 24) = v154 + 208;
        *((_QWORD *)v154 + 28) = v154 + 240;
        *((_QWORD *)v154 + 32) = v154 + 272;
        *((_QWORD *)v154 + 36) = v154 + 304;
        *((_QWORD *)v154 + 40) = v154 + 336;
        *((_QWORD *)v154 + 44) = v154 + 368;
        *((_QWORD *)v154 + 48) = v154 + 400;
        *((_QWORD *)v154 + 52) = v154 + 432;
        *((_QWORD *)v154 + 13) = 0;
        v154[112] = 0;
        *((_QWORD *)v154 + 17) = 0;
        v154[144] = 0;
        *((_QWORD *)v154 + 21) = 0;
        v154[176] = 0;
        *((_QWORD *)v154 + 25) = 0;
        v154[208] = 0;
        *((_QWORD *)v154 + 29) = 0;
        v154[240] = 0;
        *((_QWORD *)v154 + 33) = 0;
        v154[272] = 0;
        *((_QWORD *)v154 + 37) = 0;
        v154[304] = 0;
        *((_QWORD *)v154 + 41) = 0;
        v154[336] = 0;
        *((_QWORD *)v154 + 45) = 0;
        v154[368] = 0;
        *((_QWORD *)v154 + 49) = 0;
        v154[400] = 0;
        *((_QWORD *)v154 + 53) = 0x800000000LL;
        *((_QWORD *)v154 + 66) = v154 + 544;
        *((_QWORD *)v154 + 67) = 0x600000000LL;
      }
      v287 = v154;
    }
    v154[*v154 + 1] = 2;
    v155 = v287;
    v156 = *v287;
    *v287 = v156 + 1;
    *(_QWORD *)&v155[8 * v156 + 16] = v93;
  }
  else if ( v291 )
  {
    v177 = sub_168B9E0(v285);
    v178 = v286;
    if ( v286 )
      v178 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v286 + 32LL))(v286);
    v283 = (_DWORD *)v178;
    v179 = v93;
    v180 = sub_1587BC0(v177, (__int64 *)&v283, v173, v174, v175, v176);
    v181 = *v180 + 32LL * v290;
    v182 = *(unsigned __int8 **)(v181 + 8);
    if ( !v182 )
    {
      v233 = *(_QWORD *)(v181 + 16);
      v234 = *(_DWORD *)(v233 + 14976);
      if ( v234 )
      {
        v261 = (unsigned int)(v234 - 1);
        *(_DWORD *)(v233 + 14976) = v261;
        v182 = *(unsigned __int8 **)(v233 + 8 * v261 + 14848);
        v262 = *((unsigned int *)v182 + 134);
        v263 = *((_QWORD *)v182 + 66);
        *v182 = 0;
        *((_DWORD *)v182 + 106) = 0;
        v264 = v263 + (v262 << 6);
        if ( v263 != v264 )
        {
          v265 = v263;
          do
          {
            while ( 1 )
            {
              v264 -= 64;
              v266 = *(void **)(v264 + 24);
              if ( v266 == (void *)(v264 + 40) )
                break;
              operator delete(v266);
              if ( v265 == v264 )
                goto LABEL_324;
            }
          }
          while ( v265 != v264 );
        }
LABEL_324:
        *((_DWORD *)v182 + 134) = 0;
      }
      else
      {
        v182 = (unsigned __int8 *)operator new(0x3A0u);
        *v182 = 0;
        *((_QWORD *)v182 + 12) = v182 + 112;
        *((_QWORD *)v182 + 16) = v182 + 144;
        *((_QWORD *)v182 + 20) = v182 + 176;
        *((_QWORD *)v182 + 24) = v182 + 208;
        *((_QWORD *)v182 + 28) = v182 + 240;
        *((_QWORD *)v182 + 32) = v182 + 272;
        *((_QWORD *)v182 + 36) = v182 + 304;
        *((_QWORD *)v182 + 40) = v182 + 336;
        *((_QWORD *)v182 + 44) = v182 + 368;
        *((_QWORD *)v182 + 48) = v182 + 400;
        *((_QWORD *)v182 + 52) = v182 + 432;
        *((_QWORD *)v182 + 13) = 0;
        v182[112] = 0;
        *((_QWORD *)v182 + 17) = 0;
        v182[144] = 0;
        *((_QWORD *)v182 + 21) = 0;
        v182[176] = 0;
        *((_QWORD *)v182 + 25) = 0;
        v182[208] = 0;
        *((_QWORD *)v182 + 29) = 0;
        v182[240] = 0;
        *((_QWORD *)v182 + 33) = 0;
        v182[272] = 0;
        *((_QWORD *)v182 + 37) = 0;
        v182[304] = 0;
        *((_QWORD *)v182 + 41) = 0;
        v182[336] = 0;
        *((_QWORD *)v182 + 45) = 0;
        v182[368] = 0;
        *((_QWORD *)v182 + 49) = 0;
        v182[400] = 0;
        *((_QWORD *)v182 + 53) = 0x800000000LL;
        *((_QWORD *)v182 + 66) = v182 + 544;
        *((_QWORD *)v182 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v181 + 8) = v182;
    }
    v182[*v182 + 1] = 2;
    v183 = *(_BYTE **)(v181 + 8);
    v184 = (unsigned __int8)*v183;
    *v183 = v184 + 1;
    *(_QWORD *)&v183[8 * v184 + 16] = v179;
  }
  v94 = sub_15DD120((__int64)v285, a6);
  v95 = v94;
  if ( *(_BYTE *)(v94 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v94 + 32), v13, 3u);
  }
  else
  {
    if ( !*(_BYTE *)(v94 + 132) )
      goto LABEL_12;
    v100 = sub_168B9E0((_QWORD *)v94);
    v101 = *(_QWORD *)(v95 + 16);
    if ( v101 )
      v101 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v101 + 32LL))(*(_QWORD *)(v95 + 16));
    v283 = (_DWORD *)v101;
    v102 = sub_1587BC0(v100, (__int64 *)&v283, v96, v97, v98, v99);
    sub_AE9DF0((unsigned __int8 **)(*v102 + 32LL * *(unsigned int *)(v95 + 128) + 8), v13, 3u);
  }
  if ( *(_BYTE *)(v95 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v95 + 32), v270, 3u);
  }
  else if ( *(_BYTE *)(v95 + 132) )
  {
    v168 = sub_168B9E0((_QWORD *)v95);
    v171 = *(_QWORD *)(v95 + 16);
    if ( v171 )
      v171 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v171 + 32LL))(*(_QWORD *)(v95 + 16));
    v283 = (_DWORD *)v171;
    v172 = sub_1587BC0(v168, (__int64 *)&v283, v166, v167, v169, v170);
    sub_AE9DF0((unsigned __int8 **)(*v172 + 32LL * *(unsigned int *)(v95 + 128) + 8), v270, 3u);
  }
LABEL_12:
  sub_15F7200(v285);
  return 0;
}
