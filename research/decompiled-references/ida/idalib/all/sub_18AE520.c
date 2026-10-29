unsigned __int64 __fastcall sub_18AE520(
        __int64 *a1,
        __m128 a2,
        __m128i a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        int a17,
        char a18,
        int a19)
{
  __int64 v21; // r13
  char v22; // r12
  unsigned __int64 result; // rax
  __int64 v24; // r15
  void *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  void *v31; // rdx
  char v32; // cl
  int v33; // esi
  unsigned int v34; // ebx
  __int64 *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 *v44; // rbx
  __int64 v45; // r12
  _BYTE *v46; // r13
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbp
  size_t v63; // rax
  __m128i *v64; // rdx
  unsigned __int8 v65; // al
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 v73; // rax
  __int64 v74; // rbp
  __m128i *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  __int64 v91; // r8
  __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r9
  __int64 v100; // r12
  unsigned __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned __int64 v107; // r13
  __int64 v108; // r15
  __int64 v109; // r14
  int v110; // ebx
  __int64 v111; // rbp
  int v112; // ecx
  unsigned int v113; // eax
  __int64 v114; // rbp
  int v115; // r9d
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r9
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // r15
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 *v127; // rax
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 *v133; // rbx
  __int64 *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rbx
  unsigned int v140; // eax
  char v141; // al
  bool v142; // al
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  _QWORD *v146; // r15
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  _QWORD *v156; // r12
  __int64 (__fastcall *v157)(__int64); // rax
  __int64 v158; // rbp
  __int64 (__fastcall *v159)(__int64); // rax
  __int64 v160; // rax
  _QWORD *v161; // rbp
  __int64 (__fastcall *v162)(__int64); // rax
  __int64 v163; // r13
  __int64 (__fastcall *v164)(__int64); // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 *v167; // rdi
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rsi
  __m128i *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  int v176; // ecx
  __int64 *v177; // rbx
  unsigned __int64 *v178; // rax
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rax
  unsigned __int64 v181; // rcx
  unsigned __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // rdx
  __int64 v191; // rdx
  unsigned __int64 v192; // r14
  __int64 *v193; // r13
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 *v196; // rbx
  __int64 *v197; // rbp
  __int64 v198; // r12
  __int64 v199; // r15
  __int64 v200; // r14
  bool v201; // dl
  __int64 v202; // rax
  char v203; // al
  __int64 v204; // rdx
  _QWORD *v205; // r12
  __int64 v206; // rax
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rsi
  _QWORD *v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rax
  __int64 v219; // rcx
  _QWORD *v220; // rax
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // r15
  __int64 v226; // rax
  _QWORD *v227; // rax
  __int64 *v228; // r15
  __int64 v229; // rbp
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  char **v234; // rax
  char *v235; // rcx
  char **v236; // rbp
  __int64 v237; // r8
  char *v238; // rsi
  char *v239; // rdi
  char *v240; // rax
  __int64 v241; // rax
  char *v242; // r12
  unsigned __int64 v243; // rdx
  __int64 v244; // rax
  __int64 *v245; // rdi
  __int64 v246; // r8
  __int64 v247; // r9
  __int64 v248; // rax
  __int64 v249; // rbx
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 *v254; // rax
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 *v258; // rcx
  __int64 *v259; // rax
  __int64 v260; // rax
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  char *v265; // rax
  char *v266; // r8
  __int64 v267; // rbp
  __int64 *v268; // rax
  __int64 v269; // r12
  __int64 *v270; // rax
  unsigned int v271; // eax
  __int64 v272; // r12
  int v273; // ecx
  unsigned int v274; // edi
  __int64 v275; // rax
  __int64 v276; // rdx
  const char *v277; // rbx
  __int64 v278; // r13
  __int64 **v279; // rax
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rbx
  __int64 v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rbp
  __int64 v291; // rax
  __int64 v292; // rbx
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  __int64 *v297; // r15
  unsigned __int64 *v298; // rax
  __int64 *v299; // rdx
  unsigned __int64 v300; // rcx
  unsigned __int64 v301; // rax
  __int64 *v302; // rcx
  __int64 v303; // rax
  __int64 v304; // rdx
  __int64 v305; // rcx
  __int64 v306; // rbp
  __int64 v307; // r8
  __int64 v308; // r9
  __int64 v309; // rax
  _QWORD *v310; // rax
  unsigned __int64 v311; // [rsp+8h] [rbp-200h]
  __int64 v312; // [rsp+10h] [rbp-1F8h] BYREF
  __int64 *v313; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v314; // [rsp+20h] [rbp-1E8h]
  __int64 *v315; // [rsp+28h] [rbp-1E0h]
  __m128 *v316; // [rsp+30h] [rbp-1D8h]
  _QWORD *v317; // [rsp+38h] [rbp-1D0h]
  _BYTE *v318; // [rsp+40h] [rbp-1C8h]
  __int64 v319; // [rsp+48h] [rbp-1C0h]
  void **p_ptr; // [rsp+50h] [rbp-1B8h]
  unsigned __int8 v321; // [rsp+5Bh] [rbp-1ADh]
  int v322; // [rsp+5Ch] [rbp-1ACh]
  _QWORD *v323; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v324; // [rsp+68h] [rbp-1A0h]
  __int64 v325; // [rsp+70h] [rbp-198h] BYREF
  unsigned __int64 v326; // [rsp+78h] [rbp-190h] BYREF
  __m128i *v327; // [rsp+80h] [rbp-188h] BYREF
  __int64 v328; // [rsp+88h] [rbp-180h] BYREF
  __m128 v329; // [rsp+90h] [rbp-178h] BYREF
  unsigned __int64 *v330; // [rsp+A0h] [rbp-168h]
  __int64 *v331; // [rsp+A8h] [rbp-160h]
  void *v332[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v333; // [rsp+C0h] [rbp-148h] BYREF
  void *v334; // [rsp+C8h] [rbp-140h]
  unsigned __int8 *v335; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v336; // [rsp+D8h] [rbp-130h] BYREF
  char v337; // [rsp+128h] [rbp-E0h]
  unsigned int v338; // [rsp+130h] [rbp-D8h]
  char v339; // [rsp+134h] [rbp-D4h]
  void *ptr; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v341; // [rsp+148h] [rbp-C0h]

  v313 = a1;
  LODWORD(v312) = a7;
  v21 = a13;
  v314 = a10;
  v315 = a8;
  v22 = a18;
  v316 = (__m128 *)a11;
  v322 = a19;
  v317 = (_QWORD *)sub_168B6C0((__int64)a1);
  v319 = *(_QWORD *)(*a1 + 544);
  if ( (*(_BYTE *)(v319 + 8) & 0x7Fu) - 19 > 4 )
  {
    sub_168B9F0((__int64)&ptr, a1, a5, 0x105Du, 0);
    sub_15F7200(&ptr);
    return 0;
  }
  v325 = 0;
  v24 = v319 - 48;
  v323 = (_QWORD *)(v319 - 48);
  if ( a9 )
  {
    v25 = (void *)sub_1E5F010(a9, &v325);
    if ( (unsigned __int8)sub_1E64090(*v313, v25, a5) )
      return 0;
    ptr = v25;
    p_ptr = &ptr;
    sub_F5E9A0(&ptr);
    v26 = sub_A8A2C0(v317);
    v30 = *(_QWORD *)(v26 + 48);
    if ( v30 )
      v31 = (void *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
    else
      v31 = (void *)sub_A7AA70((__int64)v317, v26, 0, v27, v28, v29);
    v32 = ptr == v31;
  }
  else
  {
    v57 = sub_A8A250(v317);
    v62 = *(_QWORD *)(v57 + 48);
    if ( v62 )
      v25 = (void *)(v62 & 0xFFFFFFFFFFFFFFF0LL);
    else
      v25 = (void *)sub_A7AA70((__int64)v317, v57, v58, v59, v60, v61);
    p_ptr = &ptr;
    sub_168B9F0((__int64)&ptr, v313, a5, 0x1BC4u, 0);
    v63 = j__strlen("(id)");
    sub_9EC740((__int64)v332, *(_DWORD *)v314, "(id)", v63, 0);
    sub_1589170((__int64)&ptr, v332);
    if ( v334 != &v336 )
      operator delete(v334);
    sub_15F7200(p_ptr);
    v32 = 0;
  }
  v33 = a5;
  v34 = 0;
  v326 = sub_BA7B60(
           v317,
           v33,
           a6,
           a12,
           (__int64)v25,
           v325,
           *(_QWORD *)(*v313 + 544),
           (_WORD)v312 == 36,
           v22,
           0,
           0,
           0,
           0,
           (a17 == 22) + 1,
           v32);
  v341 = 0x1000000000LL;
  ptr = p_ptr + 2;
  v35 = v313;
  v318 = p_ptr + 2;
  while ( (unsigned int)sub_FDE930(&a12) > v34 )
  {
    v36 = v326;
    v37 = *(_QWORD *)(v21 + 8LL * v34);
    if ( v326 )
      v36 = v326 + 48;
    sub_B8C080(*(_QWORD *)(v21 + 8LL * v34), v36);
    sub_167AF90(*v35, v37, v38, v39, v40, v41, (__m128i)a2, *(double *)a3.m128i_i64);
    v42 = (unsigned int)v341;
    v43 = (unsigned int)v341 + 1LL;
    if ( v43 > HIDWORD(v341) )
    {
      sub_2237220(p_ptr, v318, v43, 8);
      v42 = (unsigned int)v341;
    }
    ++v34;
    *((_QWORD *)ptr + v42) = v37;
    LODWORD(v341) = v341 + 1;
  }
  if ( a15 )
  {
    v44 = (__int64 *)(a14 + 16);
    v45 = a14 + 32LL * (unsigned int)(a15 - 1) + 48;
    v46 = p_ptr + 2;
    do
    {
      while ( 1 )
      {
        v55 = *v44;
        v56 = *(_QWORD *)(*v44 + 48);
        if ( (v56 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          sub_A75DA0((__int64)v317, v56);
        }
        else
        {
          v47 = sub_A8A250(v317);
          if ( !*(_QWORD *)(v47 + 48) )
            sub_A7AA70((__int64)v317, v47, v48, v49, v50, v51);
        }
        v52 = v326;
        if ( v326 )
          v52 = v326 + 48;
        sub_B8C080(v55, v52);
        v53 = (unsigned int)v341 + 1LL;
        if ( v53 > HIDWORD(v341) )
          break;
        v44 += 4;
        *((_QWORD *)ptr + (unsigned int)v341) = v55;
        v54 = v341 + 1;
        LODWORD(v341) = v341 + 1;
        if ( (__int64 *)v45 == v44 )
          goto LABEL_33;
      }
      v44 += 4;
      sub_2237220(p_ptr, v46, v53, 8);
      *((_QWORD *)ptr + (unsigned int)v341) = v55;
      v54 = v341 + 1;
      LODWORD(v341) = v341 + 1;
    }
    while ( v44 != (__int64 *)v45 );
  }
  else
  {
    v54 = v341;
  }
LABEL_33:
  sub_BA9CC0(v326, (__int64)v317, ptr, v54, v314, (__int64)v316);
  v64 = (__m128i *)v326;
  v65 = *(_BYTE *)v315 & 0x7F;
  *(_BYTE *)(v326 + 59) = (4 * v65) | *(_BYTE *)(v326 + 59) & 3;
  v64[3].m128i_i8[12] = v64[3].m128i_i8[12] & 0xFE | (v65 >> 6);
  LOWORD(v332[0]) = 1;
  sub_1836B60((__int64 *)*v313, *(_QWORD *)(*v313 + 192), v64, a16, v332, a2, a3);
  sub_16660F0(*v313, *(_QWORD *)(*v313 + 192), v326);
  sub_167AF90(*v313, v326, v66, v67, v68, v69, (__m128i)a2, *(double *)a3.m128i_i64);
  LOBYTE(v314) = *(_BYTE *)(v319 - 20);
  if ( (v314 & 0x7F) - 21 > 1 )
  {
    v327 = nullptr;
    goto LABEL_108;
  }
  v327 = (__m128i *)v24;
  if ( !v24 )
  {
LABEL_108:
    if ( (v314 & 0x7F) != 0x13 )
    {
      v167 = (__int64 *)(*v313 + 248);
      v312 = *v313;
      sub_1894600(v167, v24, v326, v70, v71, v72);
      v170 = v24;
      LOBYTE(v312) = *(_BYTE *)(v319 - 20);
      if ( (v312 & 0x7F) != 0x14 )
        v170 = *(_QWORD *)(v319 + 40);
      if ( v170 )
        sub_18A8950(*v313, v170, v326, 0, v168, v169);
    }
    v171 = (__m128i *)sub_B8D340(v24);
    v80 = v326;
    sub_B94AD0(v171, v326, v172, v173, v174, v175);
    v101 = v326;
LABEL_67:
    v125 = v319;
    LOBYTE(v312) = *(_BYTE *)(v319 - 20);
    v126 = v312 & 0x7F;
    if ( (_BYTE)v126 == 20 )
      goto LABEL_68;
    if ( (_BYTE)v126 != 23 )
    {
      v125 = (unsigned int)(unsigned __int8)v126 - 21;
      if ( (unsigned int)v125 > 1 )
      {
        v323 = nullptr;
        if ( (_BYTE)v126 != 22 )
        {
LABEL_68:
          v127 = (__int64 *)(*(_QWORD *)(v101 + 80) & 0xFFFFFFFFFFFFFFF0LL);
          v128 = *v127;
          if ( *(_BYTE *)(*v127 + 16) != 34 )
          {
            v128 = sub_1894090(*v127, v80, v126, v125);
            if ( !v128 )
              goto LABEL_115;
          }
          v129 = *(_QWORD *)(*(_QWORD *)(v128 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v130 = (unsigned int)*(unsigned __int8 *)(v129 + 16) - 35;
          if ( (unsigned int)v130 > 1 )
            v129 = sub_F63050(v129, v80, v130, v125);
          v131 = *(unsigned __int8 *)(v129 + 19);
          LOBYTE(v131) = (unsigned __int8)v131 >> 2;
          if ( (_BYTE)v131
            || (v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v129 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v132 + 16) != 13)
            || ((*(_WORD *)(v132 + 18) >> 3) & 0x1FF) != 0x1E9 )
          {
            if ( !sub_A5E8D0(v128, v80, v131, v125, v91) )
            {
              v146 = v323;
              if ( !v323 )
              {
                v176 = 2;
LABEL_116:
                v177 = v313;
                v134 = (__int64 *)v326;
                sub_18ADF40(v313, v326, v323, v176, a2);
                if ( (*(_BYTE *)(sub_168B6E0((__int64)v177) + 107) & 4) != 0 )
                {
                  v134 = (__int64 *)v326;
                  sub_189A0E0(v313, v326);
                }
                goto LABEL_118;
              }
              v147 = sub_A5E7C0(v128, v80, v143, v144, v145);
              v151 = sub_9C7D40(v147, v80, v148, v149, v150);
              v156 = (_QWORD *)v151;
              if ( !v151 )
              {
LABEL_115:
                v176 = 1;
                goto LABEL_116;
              }
              if ( v146 != (_QWORD *)v151 )
              {
                v157 = *(__int64 (__fastcall **)(__int64))(*v146 + 32LL);
                v158 = v157 == sub_A55E60 ? v146[12] : v157((__int64)v323);
                v159 = *(__int64 (__fastcall **)(__int64))(*v156 + 32LL);
                v160 = v159 == sub_A55E60 ? v156[12] : v159((__int64)v156);
                if ( v158 != v160 && v323 != v156 )
                {
                  v161 = v323;
                  do
                  {
                    v162 = *(__int64 (__fastcall **)(__int64))(*v156 + 32LL);
                    if ( v162 == sub_A55E60 )
                      v163 = v156[12];
                    else
                      v163 = v162((__int64)v156);
                    v164 = *(__int64 (__fastcall **)(__int64))(*v161 + 32LL);
                    if ( v164 == sub_A55E60 )
                      v165 = v161[12];
                    else
                      v165 = v164((__int64)v161);
                    if ( v163 == v165 )
                      break;
                    v166 = sub_BAB630((__int64)v161, v80, v152, v153, v154, v155);
                    v161 = (_QWORD *)v166;
                    if ( !v166 )
                      goto LABEL_115;
                  }
                  while ( v156 != (_QWORD *)v166 );
                }
              }
            }
          }
          v133 = v313;
          v134 = (__int64 *)v326;
          sub_18ADF40(v313, v326, v323, 0, a2);
          if ( (*(_BYTE *)(sub_168B6E0((__int64)v133) + 107) & 4) != 0 )
          {
            v134 = (__int64 *)v326;
            if ( (unsigned __int8)sub_189A0E0(v313, v326) )
            {
LABEL_118:
              v139 = v326;
              goto LABEL_119;
            }
          }
          v139 = v326;
          if ( (*(_BYTE *)(v326 + 60) & 2) == 0 )
          {
            if ( (*(_BYTE *)(sub_168B6E0((__int64)v313) + 2) & 0x40) == 0 )
              goto LABEL_118;
            v140 = sub_BA8080(v326, (__int64)v134, v135, v136, v137, v138);
            v136 = v140;
            if ( v140 > 0xC )
              goto LABEL_118;
            v139 = v326;
            if ( ((1LL << v140) & 0x1448) != 0 )
            {
              v141 = (*(_BYTE *)(v326 + 58) & 2) != 0;
            }
            else
            {
              if ( ((1LL << v140) & 0x22) == 0 )
                goto LABEL_119;
              v141 = ((*(_BYTE *)(v326 + 58) >> 1) ^ 1) & 1;
            }
            if ( v141 )
            {
              v142 = sub_F6AD50(
                       *(_QWORD *)(*(_QWORD *)(v326 + 80) & 0xFFFFFFFFFFFFFFF0LL),
                       (__int64)v134,
                       v135,
                       v136,
                       v137);
              v139 = v326;
              if ( !v142 )
                *(_BYTE *)(v326 + 60) |= 2u;
            }
          }
LABEL_119:
          if ( !(_BYTE)v322 || *(_DWORD *)(v317[2181] + 248LL) != 37 )
            goto LABEL_121;
          v328 = 0;
          v135 = *(unsigned int *)(v139 + 104);
          v267 = *v313;
          v268 = *(__int64 **)(v139 + 96);
          v136 = (__int64)&v268[v135];
          if ( v268 != (__int64 *)v136 )
          {
            v269 = *v268;
            v270 = v268 + 1;
            v135 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v269 + 48)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 57;
            if ( (unsigned int)v135 > 1 )
            {
              while ( (__int64 *)v136 != v270 )
              {
                v269 = *v270++;
                v135 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v269 + 48)
                                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                                + 8LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 57;
                if ( (unsigned int)v135 <= 1 )
                  goto LABEL_251;
              }
            }
            else
            {
LABEL_251:
              v271 = sub_B73090(v269);
              v135 = *(_QWORD *)(v269 + 48);
              v328 = v135;
              if ( v271 )
                goto LABEL_252;
            }
          }
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 80)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 57 > 1 )
            goto LABEL_267;
          v271 = sub_BA8620(v139);
          v328 = *(_QWORD *)(v139 + 80);
LABEL_252:
          v135 = *(_QWORD *)(v267 + 248);
          v272 = *(_QWORD *)(v135 + 17448);
          v273 = *(_DWORD *)(v272 + 260);
          if ( v273 == 5 )
          {
            v136 = 0;
            v274 = 9;
          }
          else
          {
            v136 = v273 & 0xFFFFFFF7;
            if ( (_DWORD)v136 != 1 )
              goto LABEL_267;
            v136 = 11;
            v274 = 10;
          }
          v134 = *(__int64 **)(v272 + 376);
          v135 = HIDWORD(v134) & 0x7FFFFFFF;
          if ( v274 > (unsigned int)v134 || v274 == (_DWORD)v134 && (unsigned int)v135 < (unsigned int)v136 )
          {
            sub_168B9F0((__int64)v332, (__int64 *)(v267 + 8), v271, 0x110Eu, 0);
            v275 = sub_1605D30((__int64)v332, &v328);
            v276 = *(_QWORD *)(v139 + 80);
            v134 = (__int64 *)&v327;
            v277 = "macOS 10.11";
            LODWORD(v327) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v276
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                                                     + 8LL)
                                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                                             + 16LL)
                          - 57 <= 1;
            v278 = sub_1587D10(v275, (int *)&v327);
            if ( (*(_DWORD *)(v272 + 260) & 0xFFFFFFF7) != 1 )
              v277 = "iOS 9";
            if ( *(_BYTE *)(v278 + 120) )
            {
              v134 = (__int64 *)v277;
              sub_AE9DF0((unsigned __int8 **)(v278 + 32), (__int64)v277, 1u);
            }
            else if ( *(_BYTE *)(v278 + 132) )
            {
              v306 = sub_168B9E0((_QWORD *)v278);
              v309 = *(_QWORD *)(v278 + 16);
              if ( v309 )
                v309 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v309 + 32LL))(*(_QWORD *)(v278 + 16));
              v329.m128_u64[0] = v309;
              v310 = sub_1587BC0(v306, (__int64 *)&v329, v304, v305, v307, v308);
              v134 = (__int64 *)v277;
              sub_AE9DF0((unsigned __int8 **)(*v310 + 32LL * *(unsigned int *)(v278 + 128) + 8), (__int64)v277, 1u);
            }
            sub_15F7200(v332);
            v139 = v326;
LABEL_121:
            if ( (*(_BYTE *)(v139 + 29) & 1) != 0 )
            {
              v178 = sub_B8C3D0(v139, (__int64)v134, v135, v136, v137, v138);
              v179 = *v178;
              v180 = *v178 + 8LL * *((unsigned int *)v178 + 2);
              if ( v179 >= v180 )
              {
                v139 = v326;
                if ( v179 == v180 )
                  goto LABEL_127;
                while ( *(_WORD *)(*(_QWORD *)v180 + 36LL) != 142 )
                {
                  v180 += 8LL;
                  if ( v179 == v180 )
                    goto LABEL_127;
                }
              }
              else
              {
                v181 = v179;
                while ( *(_WORD *)(*(_QWORD *)v181 + 36LL) != 142 )
                {
                  v181 += 8LL;
                  if ( v180 == v181 )
                    goto LABEL_126;
                }
                v139 = v326;
                if ( v180 == v181 )
                  goto LABEL_127;
              }
              while ( 1 )
              {
                v229 = *(_QWORD *)v179;
                if ( *(_WORD *)(*(_QWORD *)v179 + 36LL) == 142 )
                  break;
                v179 += 8LL;
              }
              if ( (*(_BYTE *)(v139 + 58) & 2) == 0 )
              {
                v329.m128_u64[0] = *(_QWORD *)(v139 + 40);
                sub_FDEB80((__int64)v332, (__int64 *)&v329);
                if ( sub_9B4AA0((__int64)v332, "load") )
                {
                  if ( v332[0] != &v333 )
                    operator delete(v332[0]);
LABEL_126:
                  v139 = v326;
                  goto LABEL_127;
                }
                if ( v332[0] != &v333 )
                  operator delete(v332[0]);
                sub_168B9F0((__int64)v332, v313, *(_DWORD *)(v229 + 24), 0x19D2u, 0);
                v329.m128_i32[0] = 0;
                sub_1587D10((__int64)v332, (int *)&v329);
                sub_15F7200(v332);
                v139 = v326;
                if ( (*(_BYTE *)(v326 + 29) & 1) != 0 )
                {
                  v234 = (char **)sub_B8C3D0(v326, (__int64)&v329, v230, v231, v232, v233);
                  v235 = *v234;
                  v236 = v234;
                  v237 = 8LL * *((unsigned int *)v234 + 2);
                  v238 = &(*v234)[v237];
                  if ( v237 >> 5 )
                  {
                    if ( *(_WORD *)(*(_QWORD *)v235 + 36LL) == 142 )
                    {
                      v239 = *v234;
                      goto LABEL_242;
                    }
                    v239 = v235 + 8;
                    if ( *(_WORD *)(*((_QWORD *)v235 + 1) + 36LL) == 142
                      || (v239 = v235 + 16, *(_WORD *)(*((_QWORD *)v235 + 2) + 36LL) == 142)
                      || (v240 = *v234, v239 = v235 + 24, *(_WORD *)(*((_QWORD *)v235 + 3) + 36LL) == 142) )
                    {
LABEL_242:
                      if ( v238 != v239 )
                      {
                        v265 = v239 + 8;
                        if ( v238 != v239 + 8 )
                        {
                          do
                          {
                            if ( *(_WORD *)(*(_QWORD *)v265 + 36LL) != 142 )
                            {
                              *(_QWORD *)v239 = *(_QWORD *)v265;
                              v239 += 8;
                            }
                            v265 += 8;
                          }
                          while ( v238 != v265 );
                          v235 = *v236;
                          v266 = &(*v236)[v237];
                          v242 = &v239[v266 - v238];
                          if ( v266 != v238 )
                          {
                            memmove(v239, v238, v266 - v238);
                            v235 = *v236;
                          }
                          goto LABEL_212;
                        }
                      }
LABEL_211:
                      v242 = v239;
LABEL_212:
                      v243 = v326;
                      v244 = (v242 - v235) >> 3;
                      *((_DWORD *)v236 + 2) = v244;
                      if ( !(_DWORD)v244 )
                        *(_BYTE *)(v139 + 29) &= ~1u;
                      v139 = v243;
                      goto LABEL_127;
                    }
                    while ( 1 )
                    {
                      v239 = v240 + 32;
                      if ( &v235[32 * (v237 >> 5)] == v240 + 32 )
                        break;
                      if ( *(_WORD *)(*((_QWORD *)v240 + 4) + 36LL) == 142 )
                        goto LABEL_242;
                      if ( *(_WORD *)(*((_QWORD *)v240 + 5) + 36LL) == 142 )
                      {
                        v239 = v240 + 40;
                        goto LABEL_242;
                      }
                      if ( *(_WORD *)(*((_QWORD *)v240 + 6) + 36LL) == 142 )
                      {
                        v239 = v240 + 48;
                        goto LABEL_242;
                      }
                      if ( *(_WORD *)(*((_QWORD *)v240 + 7) + 36LL) == 142 )
                      {
                        v239 = v240 + 56;
                        goto LABEL_242;
                      }
                      v240 += 32;
                    }
                  }
                  else
                  {
                    v239 = *v234;
                  }
                  v241 = (v238 - v239) >> 3;
                  if ( v241 != 2 )
                  {
                    if ( v241 != 3 )
                    {
                      if ( v241 != 1 )
                        goto LABEL_210;
                      goto LABEL_292;
                    }
                    if ( *(_WORD *)(*(_QWORD *)v239 + 36LL) == 142 )
                      goto LABEL_242;
                    v239 += 8;
                  }
                  if ( *(_WORD *)(*(_QWORD *)v239 + 36LL) == 142 )
                    goto LABEL_242;
                  v239 += 8;
LABEL_292:
                  if ( *(_WORD *)(*(_QWORD *)v239 + 36LL) == 142 )
                    goto LABEL_242;
LABEL_210:
                  v239 = v238;
                  goto LABEL_211;
                }
              }
            }
LABEL_127:
            v182 = sub_BA85D0(v139);
            sub_BAA380(v139, v317, v182, v183, v184, v185);
            sub_17A5800((__int64 *)*v313, v326, v186, v187, v188, v189);
            result = v326;
            goto LABEL_128;
          }
LABEL_267:
          v139 = v326;
          goto LABEL_121;
        }
      }
      v125 = v319;
    }
    v125 = *(_QWORD *)(v125 + 40);
    v323 = (_QWORD *)v125;
    goto LABEL_68;
  }
  v73 = sub_BAA9D0(v24, a12, (_WORD)v312 == 36, 0, v71, v72);
  v74 = v326;
  v324 = v73;
  v75 = v327 + 3;
  sub_B90130(v326, (__int64)v327[3].m128i_i64, v76, v77, v78, v79);
  v80 = v74;
  sub_B94AD0(v75, v74, v81, v82, v83, v84);
  v85 = sub_B8E970((__int64)v327[3].m128i_i64);
  if ( !v85 )
  {
LABEL_40:
    v90 = v326;
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(v85 + 28) & 0x7F) != 0xE )
  {
    do
    {
      v86 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v85 = v86;
      if ( !v86 )
        goto LABEL_40;
    }
    while ( (*(_BYTE *)(v86 + 28) & 0x7F) != 0xE );
  }
  v87 = a12;
  v90 = v326;
LABEL_131:
  v190 = *(_QWORD *)(v85 + 72);
  if ( v190 )
  {
    if ( v87 == *(_QWORD *)(v190 + 40) )
    {
      v80 = (*(_BYTE *)(v90 + 58) & 2) != 0;
      if ( (_BYTE)v80 == ((*(_BYTE *)(v190 + 58) & 2) != 0) )
        *(_QWORD *)(v85 + 72) = v90;
    }
  }
  v191 = *(_QWORD *)(v85 + 64);
  if ( v191
    && v87 == *(_QWORD *)(v191 + 40)
    && (v80 = (*(_BYTE *)(v90 + 58) & 2) != 0, v86 = (*(_BYTE *)(v191 + 58) & 2) != 0, (_BYTE)v80 == (_BYTE)v86) )
  {
    *(_QWORD *)(v85 + 64) = v90;
  }
  else
  {
    while ( 1 )
    {
      v86 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v85 = v86;
      if ( !v86 )
        break;
      if ( (*(_BYTE *)(v86 + 28) & 0x7F) == 0xE )
        goto LABEL_131;
    }
  }
LABEL_41:
  if ( !(unsigned __int8)sub_BA7E40(v90, v80, v86, v87, v88, v89) )
  {
    v92 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v326 + 32LL))(v326);
    if ( (unsigned __int8)sub_BA7E40(v92, v80, v93, v94, v95, v96) )
    {
      v248 = sub_1895800(v92, v80, v97, v98, v91, v99);
      v249 = v326;
      v80 = sub_B32F60(
              (__int64)v317,
              *(unsigned int *)(v248 + 24) | ((unsigned __int64)*(unsigned int *)(v248 + 24) << 32),
              0);
      sub_B8CC60(v249, v80, v250, v251, v252, v253);
    }
  }
  v100 = v327[5].m128i_i64[1];
  v101 = v326;
  if ( !v100 )
    goto LABEL_66;
  v102 = *(_QWORD *)(v326 + 40);
  v107 = sub_BAD910(v327[5].m128i_i64[1], v102, (*(_BYTE *)(v326 + 58) & 2) != 0, 0, 1, 0);
  v328 = v107;
  if ( !v107 )
  {
    v245 = (__int64 *)(*v313 + 248);
    v312 = *v313;
    sub_1894600(v245, v24, v326, v104, v105, v106);
    v80 = v100;
    sub_18A8950(*v313, v100, v326, (__int64)v327, v246, v247);
    goto LABEL_57;
  }
  v108 = v326;
  v109 = *v313;
  if ( (*(_BYTE *)(v107 + 29) & 1) != 0 )
  {
    v254 = sub_B8C3D0(v107, v102, v103, v104, v105, v106);
    v257 = *v254;
    v258 = (__int64 *)(*v254 + 8LL * *((unsigned int *)v254 + 2));
    if ( *v254 >= (unsigned __int64)v258 )
    {
      if ( (__int64 *)v257 == v258 )
        goto LABEL_47;
      if ( *(_WORD *)(*v258 + 36) != 314 )
      {
        v279 = (__int64 **)(v258 + 1);
        while ( (__int64 **)v257 != v279 )
        {
          v258 = *v279++;
          if ( *((_WORD *)v258 + 18) == 314 )
            goto LABEL_239;
        }
        goto LABEL_47;
      }
    }
    else
    {
      v259 = (__int64 *)*v254;
      while ( 1 )
      {
        v257 = *v259;
        if ( *(_WORD *)(*v259 + 36) == 314 )
          break;
        if ( v258 == ++v259 )
          goto LABEL_47;
      }
      if ( v258 == v259 )
        goto LABEL_47;
    }
LABEL_239:
    if ( (*(_BYTE *)(v108 + 29) & 1) != 0 )
    {
      v298 = sub_B8C3D0(v108, v102, v257, (__int64)v258, v255, v256);
      v299 = (__int64 *)*v298;
      v300 = *v298 + 8LL * *((unsigned int *)v298 + 2);
      if ( *v298 >= v300 )
      {
        if ( v299 != (__int64 *)v300 )
        {
          if ( *(_WORD *)(*(_QWORD *)v300 + 36LL) == 314 )
            goto LABEL_47;
          v302 = (__int64 *)(v300 + 8);
          while ( v299 != v302 )
          {
            v303 = *v302++;
            if ( *(_WORD *)(v303 + 36) == 314 )
              goto LABEL_47;
          }
        }
      }
      else
      {
        v301 = *v298;
        while ( *(_WORD *)(*(_QWORD *)v301 + 36LL) != 314 )
        {
          v301 += 8LL;
          if ( v300 == v301 )
            goto LABEL_240;
        }
        if ( v300 != v301 )
          goto LABEL_47;
      }
    }
LABEL_240:
    v260 = sub_B32A30(
             *(_QWORD *)(v109 + 248),
             *(unsigned int *)(v108 + 24) | ((unsigned __int64)*(unsigned int *)(v108 + 24) << 32),
             0);
    sub_B8CC60(v108, v260, v261, v262, v263, v264);
  }
LABEL_47:
  v110 = *(_DWORD *)(v107 + 60);
  v111 = *(_QWORD *)(v107 + 80);
  sub_BA8620(v107);
  v112 = *(_DWORD *)(v108 + 60) & 1;
  v312 = *(_QWORD *)(v108 + 80);
  LODWORD(v314) = v112;
  v80 = (unsigned int)sub_BA8620(v108);
  *(_QWORD *)(v108 + 80) = sub_189E6F0(v109, v80, v312, (unsigned int)v314, v111, v110 & 1);
  v113 = *(_DWORD *)(v107 + 104);
  if ( *(_DWORD *)(v108 + 104) <= v113 )
    v113 = *(_DWORD *)(v108 + 104);
  if ( v113 )
  {
    v114 = 0;
    v312 = 8LL * (v113 - 1) + 8;
    do
    {
      while ( 1 )
      {
        LOBYTE(v115) = 0;
        v116 = *(_QWORD *)(*(_QWORD *)(v108 + 96) + v114);
        v117 = *(_QWORD *)(*(_QWORD *)(v107 + 96) + v114);
        if ( (*(_BYTE *)(v117 + 97) & 0x10) != 0 )
          v115 = (*(_DWORD *)(v117 + 96) >> 19) & 1;
        v118 = *(_QWORD *)(v117 + 48);
        if ( (*(_BYTE *)(v116 + 97) & 0x10) == 0 )
          break;
        v114 += 8;
        v80 = *(unsigned int *)(v116 + 24);
        *(_QWORD *)(v116 + 48) = sub_189E6F0(
                                   v109,
                                   v80,
                                   *(_QWORD *)(v116 + 48),
                                   (*(_DWORD *)(v116 + 96) >> 19) & 1,
                                   v118,
                                   v115);
        if ( v114 == v312 )
          goto LABEL_55;
      }
      v80 = *(unsigned int *)(v116 + 24);
      v114 += 8;
      *(_QWORD *)(v116 + 48) = sub_189E6F0(v109, v80, *(_QWORD *)(v116 + 48), 0, v118, v115);
    }
    while ( v312 != v114 );
  }
LABEL_55:
  if ( sub_BA85D0(v328) != v100 )
    goto LABEL_56;
  v312 = (__int64)&v327;
  v330 = &v326;
  a2 = _mm_loadh_ps((const double *)&v312);
  v331 = v313;
  v329 = a2;
  if ( (unsigned __int8)sub_BA7E40(v326, v80, v119, v120, v91, v121) )
  {
    v284 = sub_1895800(v326, v80, v280, v281, v282, v283);
    v285 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v326 + 32LL))(v326);
    if ( v285 == v328 )
    {
      if ( !(unsigned __int8)sub_BA7E40(v285, v80, v286, v287, v288, v289) )
      {
        v297 = v313;
        sub_168B9F0((__int64)v332, v313, *(_DWORD *)(v284 + 24), 0x1101u, 0);
        sub_15F7200(v332);
        v80 = (unsigned __int64)v297;
        sub_168B9F0((__int64)v332, v297, *(_DWORD *)(v328 + 24), 0x70u, 0);
        sub_15F7200(v332);
      }
      goto LABEL_56;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_BA7E40(v328, v80, v280, v281, v282, v283) )
      goto LABEL_56;
    v290 = sub_1895800(v328, v80, v119, v120, v91, v121);
    v291 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v326 + 32LL))(v326);
    if ( v291 == v328 )
    {
      v292 = v326;
      v80 = sub_B32F60(
              (__int64)v317,
              *(unsigned int *)(v290 + 24) | ((unsigned __int64)*(unsigned int *)(v290 + 24) << 32),
              0);
      sub_B8CC60(v292, v80, v293, v294, v295, v296);
      goto LABEL_56;
    }
  }
  sub_189FE80(&v329);
LABEL_56:
  if ( (v327[1].m128i_i8[12] & 0x7F) == 0x16
    && (*(_BYTE *)(v328 + 60) & 0x10) != 0
    && (unsigned int)sub_FDEF00(*(_QWORD *)(v326 + 40)) == 7 )
  {
    sub_168B9F0((__int64)v332, v313, *(_DWORD *)(v326 + 24), 0x1A8Fu, 0);
    v80 = (unsigned __int64)&v329;
    v329.m128_u64[0] = *(_QWORD *)(v326 + 40);
    sub_15894B0((__int64)v332, (__int64 *)&v329);
    sub_15F7200(v332);
  }
LABEL_57:
  v122 = *(_QWORD *)(v100 + 120);
  if ( !v122 )
  {
    v80 = *(_QWORD *)(v100 + 96);
    sub_A794E0((__int64 *)(v80 + 88), v80, v119, v120, v91, v121);
    v122 = *(_QWORD *)(v100 + 120);
  }
  v123 = v122 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v123 )
  {
    v101 = v326;
    goto LABEL_66;
  }
  if ( (*(_BYTE *)(v123 + 72) & 1) != 0 )
  {
    sub_BA8900(v100);
    v123 = *(_QWORD *)(v100 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v124 = *(_QWORD *)(v123 + 56);
  v101 = v326;
  if ( v124 )
  {
    while ( *(char *)(v124 + 28) < 0 || (*(_BYTE *)(v124 + 8) & 6) != 0 )
    {
      v124 = *(_QWORD *)(v124 + 128);
      if ( !v124 )
        goto LABEL_66;
    }
    v192 = v124;
    v316 = &v329;
LABEL_146:
    v193 = *(__int64 **)(v192 + 104);
    v194 = (__int64)&v193[*(unsigned int *)(v192 + 112)];
    v315 = (__int64 *)v194;
    if ( v193 == (__int64 *)v194 )
      goto LABEL_167;
    v314 = v192;
    while ( 1 )
    {
      v80 = *(_QWORD *)(v101 + 40);
      v195 = sub_BAAC40(*v193, v80, (*(_BYTE *)(v101 + 58) & 2) != 0, v194, v91, v121);
      if ( v195 )
        break;
LABEL_148:
      v101 = v326;
LABEL_149:
      if ( v315 == ++v193 )
      {
        v192 = v314;
LABEL_167:
        while ( 1 )
        {
          v192 = *(_QWORD *)(v192 + 128);
          if ( !v192 )
            goto LABEL_66;
          if ( *(char *)(v192 + 28) >= 0 && (*(_BYTE *)(v192 + 8) & 6) == 0 )
            goto LABEL_146;
        }
      }
    }
    v196 = *(__int64 **)(v195 + 96);
    v194 = (__int64)&v196[*(unsigned int *)(v195 + 104)];
    v312 = v194;
    v101 = v326;
    v197 = *(__int64 **)(v326 + 96);
    if ( (__int64 *)v194 == v196 )
      goto LABEL_149;
    while ( 1 )
    {
      v198 = *v197;
      v80 = *v196;
      v199 = *v193;
      v200 = *v313;
      if ( !(unsigned __int8)sub_1894240(*v197, *v196, *v313, v194, v91, v121) )
        break;
LABEL_153:
      ++v196;
      ++v197;
      if ( v196 == (__int64 *)v312 )
        goto LABEL_148;
    }
    v80 = v200 + 8;
    sub_168B9F0((__int64)v332, (__int64 *)(v200 + 8), *(_DWORD *)(v314 + 24), 0x16BDu, 0);
    v201 = 1;
    v202 = *(_QWORD *)(v314 + 40);
    if ( (v202 & 7) == 0 )
      v201 = (v202 & 0xFFFFFFFFFFFFFFF8LL) == 0;
    if ( v337 )
    {
      v80 = v201;
      sub_AE9DF0(&v335, v201, 2u);
      if ( !v337 )
        goto LABEL_177;
    }
    else
    {
      v203 = v339;
      if ( !v339 )
      {
LABEL_159:
        v204 = *(_QWORD *)(v198 + 16);
        v205 = (_QWORD *)(v204 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v204 & 4) != 0 )
          v205 = (_QWORD *)*v205;
        if ( v205 )
          v205 -= 6;
        if ( v203 )
        {
          v80 = (unsigned __int64)v205;
          sub_1894370(&v335, (__int64)v205);
        }
        else if ( v339 )
        {
          v225 = sub_168B9E0(v332);
          v226 = v333;
          if ( v333 )
            v226 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v333 + 32LL))(v333);
          v329.m128_u64[0] = v226;
          v227 = sub_1587BC0(v225, (__int64 *)v316, v221, v222, v223, v224);
          v80 = (unsigned __int64)v205;
          sub_1894370((unsigned __int8 **)(*v227 + 32LL * v338 + 8), (__int64)v205);
        }
        sub_15F7200(v332);
        goto LABEL_153;
      }
      LOBYTE(v318) = v201;
      v206 = sub_168B9E0(v332);
      v209 = (unsigned __int8)v318;
      v210 = v206;
      v211 = v333;
      if ( v333 )
      {
        v212 = *(_QWORD *)v333;
        v321 = (unsigned __int8)v318;
        v318 = (_BYTE *)v210;
        v211 = (*(__int64 (__fastcall **)(__int64))(v212 + 32))(v333);
        v209 = v321;
        v210 = (__int64)v318;
      }
      LOBYTE(v318) = v209;
      v329.m128_u64[0] = v211;
      v213 = sub_1587BC0(v210, (__int64 *)v316, v209, v210, v207, v208);
      v80 = (unsigned __int8)v318;
      sub_AE9DF0((unsigned __int8 **)(*v213 + 32LL * v338 + 8), (unsigned __int8)v318, 2u);
      if ( !v337 )
      {
LABEL_177:
        v203 = v339;
        if ( v339 )
        {
          v214 = sub_168B9E0(v332);
          v218 = v333;
          if ( v333 )
          {
            v219 = *(_QWORD *)v333;
            v318 = (_BYTE *)v214;
            v218 = (*(__int64 (__fastcall **)(__int64))(v219 + 32))(v333);
            v214 = (__int64)v318;
          }
          v329.m128_u64[0] = v218;
          v220 = sub_1587BC0(v214, (__int64 *)v316, v214, v215, v216, v217);
          v80 = v199;
          sub_1894370((unsigned __int8 **)(*v220 + 32LL * v338 + 8), v199);
          v203 = v337;
        }
        goto LABEL_159;
      }
    }
    v80 = v199;
    sub_1894370(&v335, v199);
    v203 = v337;
    goto LABEL_159;
  }
LABEL_66:
  if ( !v324 )
    goto LABEL_67;
  v228 = v313;
  sub_168B9F0((__int64)v332, v313, *(_DWORD *)(v101 + 24), 0xE84u, 0);
  v329.m128_u64[0] = *(_QWORD *)(v326 + 40);
  sub_15894B0((__int64)v332, (__int64 *)&v329);
  sub_15F7200(v332);
  sub_168B9F0((__int64)v332, v228, *(_DWORD *)(v324 + 24), 0x70u, 0);
  sub_15F7200(v332);
  sub_B88650(v326, 1);
  result = v326;
LABEL_128:
  if ( ptr != p_ptr + 2 )
  {
    v311 = result;
    free(ptr);
    return v311;
  }
  return result;
}
