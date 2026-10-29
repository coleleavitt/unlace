unsigned __int64 __fastcall sub_1C07820(
        __m128 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r15
  unsigned int v13; // ebp
  __m128 *v14; // rbx
  unsigned __int64 v15; // rax
  __m128 v17; // xmm0
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int32 v25; // r9d
  __int32 v26; // ecx
  __int64 v27; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int32 v35; // ecx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // r11
  int v42; // r10d
  __int64 v43; // r14
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // r14d
  int v47; // r10d
  char v48; // r11
  __int64 v49; // r12
  unsigned int *v50; // rax
  char *v51; // rax
  size_t v52; // rdx
  int v53; // edi
  char *v54; // rax
  unsigned __int8 **v55; // rbp
  signed __int64 v56; // rdx
  _BYTE *v57; // rsi
  __int64 *v58; // r12
  void *v59; // rax
  void *v60; // rax
  int v61; // ecx
  __m128 *v62; // rdx
  __int64 *v63; // r8
  __int64 *v64; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  size_t v69; // rdx
  __int64 *v70; // r13
  __int64 v71; // r14
  bool v72; // al
  __int8 v73; // cl
  char v74; // dl
  __int64 *v75; // rdi
  __int64 *v76; // rdx
  char *v77; // rax
  size_t v78; // rdx
  char *v79; // rax
  signed __int64 v80; // rdx
  __int64 v81; // rsi
  void *v82; // rax
  void *v83; // rax
  __int64 v84; // rdx
  __m128d v85; // xmm0
  __int64 v86; // rcx
  __int64 v87; // r12
  char *v88; // r12
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // r10d
  unsigned __int64 v95; // r12
  __int64 v96; // rax
  _QWORD *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rax
  const char *v100; // r10
  unsigned __int64 v101; // rcx
  __int64 v102; // rdx
  char *v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r12
  int v107; // eax
  __int64 v108; // rsi
  unsigned __int64 v109; // rax
  __int32 v110; // ecx
  char v111; // r8
  char v112; // al
  __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // rcx
  unsigned __int16 *v117; // r14
  int v118; // r10d
  char v119; // al
  __int64 v120; // r12
  __int64 v121; // rsi
  __int64 v122; // r8
  __int64 v123; // r9
  int v124; // r10d
  __int64 v125; // rsi
  __int64 v126; // rdi
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  size_t v130; // rax
  __int64 v131; // rax
  __int64 v132; // rcx
  char *v133; // r12
  unsigned __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  __int64 v136; // r8
  unsigned __int16 *v137; // rax
  __int64 v138; // r9
  __int64 v139; // r12
  __int64 *v140; // rax
  bool v141; // r14
  _QWORD *v142; // rdi
  __int64 *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rcx
  void **v148; // rsi
  _DWORD *v149; // rdi
  int v150; // r8d
  int v151; // r9d
  __int64 v152; // rdx
  char *v153; // r12
  unsigned __int8 v154; // al
  unsigned __int8 v155; // bp
  __int64 v156; // rax
  __int64 v157; // r14
  unsigned __int64 v158; // rax
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // r12
  __int64 *v162; // rax
  unsigned __int64 v163; // rax
  __int64 v164; // rbp
  __int64 v165; // rax
  __int64 v166; // rbp
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // r13
  void *v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rsi
  __int64 v175; // rdx
  __int64 v176; // rbp
  __int64 v177; // rdi
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // r13
  __int64 v183; // r13
  __int64 v184; // r12
  unsigned int v185; // eax
  __int64 *v186; // rbp
  unsigned int v187; // r12d
  __int64 v188; // rax
  unsigned __int64 v189; // rdx
  char v190; // r11
  __int64 *v191; // r12
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rsi
  __int64 v196; // rax
  char v197; // r11
  int v198; // r10d
  __int64 v199; // r12
  __int64 *v200; // rcx
  __int64 v201; // r12
  __int64 *v202; // r12
  __int64 *v203; // rsi
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // r13
  void *v211; // rax
  _QWORD *v212; // rax
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rax
  __int64 *v217; // r12
  int v218; // r10d
  int v219; // ebp
  char *v220; // r12
  char *i; // rbx
  __int64 v222; // rax
  __int64 v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rdx
  __int64 v229; // rcx
  char *v230; // rax
  unsigned __int64 v231; // rdx
  char *v232; // rdi
  __int64 v233; // rax
  __int64 v234; // r12
  __int64 v235; // rax
  __int64 v236; // r8
  __int64 v237; // r9
  char *v238; // rax
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // r9
  char v243; // r11
  int v244; // r10d
  __int64 v245; // rax
  _QWORD *v246; // rax
  __int64 v247; // rdx
  unsigned __int64 v248; // rbp
  _WORD *v249; // rax
  char v250; // bl
  __int64 v251; // r13
  char v252; // al
  unsigned __int8 v253; // al
  bool v254; // al
  __int64 v255; // rdx
  __int64 v256; // rcx
  char v257; // al
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r12
  __int64 v261; // rdx
  __int64 v262; // rcx
  __int64 v263; // rax
  __int64 v264; // rsi
  bool v265; // al
  __int64 v266; // r12
  __int64 v267; // rdx
  __int64 v268; // rcx
  __int64 v269; // rax
  __int64 v270; // rsi
  bool v271; // al
  __int64 v272; // r12
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // rax
  bool v276; // al
  __int64 *v277; // r12
  _QWORD v278[2]; // [rsp-40h] [rbp-21B8h] BYREF
  char *v279; // [rsp-30h] [rbp-21A8h]
  size_t v280; // [rsp-28h] [rbp-21A0h]
  __int64 v281; // [rsp-20h] [rbp-2198h]
  unsigned __int8 (__fastcall *v282)(__int64, __int64); // [rsp-18h] [rbp-2190h]
  __int64 *v283; // [rsp-10h] [rbp-2188h]
  const char *v284; // [rsp-8h] [rbp-2180h]
  __int64 **v285; // [rsp+0h] [rbp-2178h] BYREF
  __m128i *v286; // [rsp+8h] [rbp-2170h]
  char *v287; // [rsp+10h] [rbp-2168h]
  size_t v288; // [rsp+18h] [rbp-2160h]
  void **p_ptr; // [rsp+20h] [rbp-2158h]
  __int64 *v290; // [rsp+28h] [rbp-2150h]
  char *v291; // [rsp+30h] [rbp-2148h]
  size_t v292; // [rsp+38h] [rbp-2140h]
  __int64 *v293; // [rsp+40h] [rbp-2138h]
  unsigned __int8 **v294; // [rsp+48h] [rbp-2130h] BYREF
  char v295; // [rsp+57h] [rbp-2121h]
  __int64 v296; // [rsp+58h] [rbp-2120h]
  __int64 *v297; // [rsp+60h] [rbp-2118h]
  __int64 v298; // [rsp+68h] [rbp-2110h]
  __int64 *v299; // [rsp+70h] [rbp-2108h]
  __int64 *v300; // [rsp+78h] [rbp-2100h]
  __int64 *v301; // [rsp+80h] [rbp-20F8h]
  __int64 v302; // [rsp+88h] [rbp-20F0h]
  char **v303; // [rsp+98h] [rbp-20E0h] BYREF
  __int64 v304; // [rsp+A0h] [rbp-20D8h] BYREF
  __int64 v305; // [rsp+A8h] [rbp-20D0h] BYREF
  __int64 v306; // [rsp+B0h] [rbp-20C8h] BYREF
  __int64 v307; // [rsp+B8h] [rbp-20C0h] BYREF
  __m128i v308; // [rsp+C0h] [rbp-20B8h] BYREF
  __int64 v309; // [rsp+D0h] [rbp-20A8h] BYREF
  __int64 v310; // [rsp+D8h] [rbp-20A0h]
  void *v311; // [rsp+E0h] [rbp-2098h] BYREF
  unsigned __int64 v312; // [rsp+E8h] [rbp-2090h]
  _BYTE v313[128]; // [rsp+F0h] [rbp-2088h] BYREF
  void *ptr; // [rsp+170h] [rbp-2008h] BYREF
  char *v315; // [rsp+178h] [rbp-2000h] BYREF
  char *v316; // [rsp+180h] [rbp-1FF8h]
  __int64 v317; // [rsp+188h] [rbp-1FF0h]
  __int64 v318; // [rsp+190h] [rbp-1FE8h]
  int v319; // [rsp+198h] [rbp-1FE0h]
  __int64 v320; // [rsp+1A0h] [rbp-1FD8h]
  __int64 v321; // [rsp+1A8h] [rbp-1FD0h]
  __int64 *v322; // [rsp+280h] [rbp-1EF8h] BYREF
  __int64 v323; // [rsp+288h] [rbp-1EF0h]
  _QWORD v324[338]; // [rsp+290h] [rbp-1EE8h] BYREF
  int v325; // [rsp+D20h] [rbp-1458h]
  char v326; // [rsp+D24h] [rbp-1454h]
  char v327; // [rsp+D28h] [rbp-1450h] BYREF
  __int64 v328; // [rsp+DA8h] [rbp-13D0h]
  int v329; // [rsp+DB0h] [rbp-13C8h]
  __int64 v330; // [rsp+DB8h] [rbp-13C0h]
  __int64 v331; // [rsp+DC0h] [rbp-13B8h]
  char *v332; // [rsp+DC8h] [rbp-13B0h]
  __int64 v333; // [rsp+DD0h] [rbp-13A8h]
  char v334; // [rsp+DD8h] [rbp-13A0h] BYREF
  _QWORD *v335; // [rsp+DF8h] [rbp-1380h]
  __int64 v336; // [rsp+E00h] [rbp-1378h]
  _QWORD v337[2]; // [rsp+E08h] [rbp-1370h] BYREF
  unsigned int v338; // [rsp+E18h] [rbp-1360h]
  int v339; // [rsp+E1Ch] [rbp-135Ch]
  int v340; // [rsp+E20h] [rbp-1358h]
  unsigned int v341; // [rsp+E24h] [rbp-1354h]
  char v342; // [rsp+E28h] [rbp-1350h]
  int v343; // [rsp+E2Ch] [rbp-134Ch]
  int v344; // [rsp+2130h] [rbp-48h]

  v11 = a2;
  v13 = a3;
  v14 = a1;
  v15 = a1[14].m128_u64[1];
  v285 = (__int64 **)a6;
  v286 = (__m128i *)a5;
  v17 = _mm_loadh_ps((const double *)&v285);
  if ( *(char *)(v15 + 1) >= 0 )
    a10 = 0;
  v308 = (__m128i)v17;
  v18 = sub_BFAD70(a3);
  if ( (*(_DWORD *)v308.m128i_i64[0] & 0x10000) == 0 && (*(_DWORD *)v308.m128i_i64[1] & 0x10000) == 0 )
  {
    if ( !v13 )
    {
      v29 = sub_1907C70((__int64)a1, v308.m128i_i64[0], (__m128i)v17, a8, v19, v20, v21, v22);
      if ( v29 > 1 )
      {
        v308.m128i_i64[0] = v29 & 0xFFFFFFFFFFFFFFFELL;
        v34 = sub_1907C70((__int64)a1, (_QWORD *)v308.m128i_i64[1], (__m128i)v17, a8, v30, v31, v32, v33);
        if ( v34 > 1 )
        {
          v308.m128i_i64[1] = v34 & 0xFFFFFFFFFFFFFFFELL;
          return sub_1928110((__int64)a1, a2, 0, v308.m128i_u64[0], v34 & 0xFFFFFFFFFFFFFFFELL, 0, v17, a8);
        }
      }
      return 1;
    }
    LODWORD(v285) = v18;
    v286 = &v308;
    if ( (unsigned __int8)sub_1BC8220((__int64)a1, &v308.m128i_i64[1], (__m128i)v17, a8, v19, v20, v21, v22) )
      return 1;
    v41 = sub_1BC8220((__int64)a1, v286->m128i_i64, (__m128i)v17, a8, v37, v38, v39, v40);
    if ( v41 )
      return 1;
    v42 = (int)v285;
    if ( v13 != 21 )
    {
LABEL_26:
      v324[337] = 16;
      v322 = v324;
      v323 = 0x1000000000LL;
      v324[336] = &v327;
      v332 = &v334;
      v333 = 0x400000000LL;
      v285 = &v322;
      v325 = 0;
      v326 = 1;
      v328 = 0;
      v329 = 0;
      v330 = 0;
      v331 = 0;
      v335 = v337;
      v336 = 0;
      v337[0] = 0;
      v337[1] = 1;
      v338 = a2;
      v339 = 1;
      v340 = v42;
      v341 = a2;
      v342 = a10;
      v343 = 0;
      v344 = 0;
      if ( a11 )
      {
        LODWORD(p_ptr) = v42;
        LOBYTE(v287) = 0;
        sub_1BCD280((__int64)&v322, a11, 0);
        sub_1BCD280((__int64)v285, a11, 1);
        v42 = (int)p_ptr;
        v41 = (char)v287;
      }
      LOBYTE(p_ptr) = v41;
      v43 = (__int64)v285;
      LODWORD(v287) = v42;
      sub_1BFF680((__int64 *)a1, (__int64)v285, v42, a4, v286, 2u, v17, a8, a9);
      LODWORD(v293) = v323;
      LODWORD(v291) = v329 & 0x3FFFFFFF;
      v46 = sub_1BF27B0(v43, a1, a2, (__int64 **)&v303, *(double *)v17.m128_u64, a8);
      v47 = (int)v287;
      if ( v46 != 1 )
      {
        v48 = (char)p_ptr;
        if ( v46 )
        {
          if ( v46 == 2 )
          {
            p_ptr = (void **)sub_16A7620;
            v290 = &v309;
            v77 = sub_BFA720(v13);
            v288 = v78;
            v287 = v77;
            sub_168B9B0((__int64)&v311, (__int64)&a1->m128_i64[1], 4747);
            v79 = sub_BFA720(v13);
            sub_AEC220((unsigned __int8 **)&v311, v79, v80);
            sub_AE9DF0((unsigned __int8 **)&v311, *(_QWORD *)(v308.m128i_i64[0] + 8), 8u);
            v81 = *(_QWORD *)(v308.m128i_i64[1] + 8);
            sub_AE9DF0((unsigned __int8 **)&v311, v81, 8u);
            v82 = (void *)sub_EEC8C0(v308.m128i_u64[0], v81, *(double *)v17.m128_u64);
            LOBYTE(v315) = 1;
            ptr = v82;
            sub_AEC610((__int64 *)&v311, (__int64 *)&ptr);
            v83 = (void *)sub_EEC8C0(v308.m128i_u64[1], (__int64)&ptr, *(double *)v17.m128_u64);
            LOBYTE(v315) = 1;
            ptr = v83;
            sub_AEC610((__int64 *)&v311, (__int64 *)&ptr);
            LODWORD(ptr) = v11;
            sub_1582CA0((__int64)&v315, (_BYTE **)&v311);
            v62 = a1;
            v61 = 2;
            v283 = v290;
            v282 = (unsigned __int8 (__fastcall *)(__int64, __int64))p_ptr;
            v281 = v11;
            v280 = v288;
            v279 = v287;
            v63 = (__int64 *)v286;
LABEL_41:
            sub_1C022A0(
              (__int64)v285,
              (unsigned int *)&ptr,
              v62,
              v61,
              (__int64)v63,
              2u,
              v17,
              a8,
              v279,
              v280,
              v281,
              v282,
              (__int64)v283);
            if ( v315 && v316 )
              sub_1580C40((unsigned __int64)v316, (unsigned __int64)v315);
            if ( v311 && v312 )
              sub_1580C40(v312, (unsigned __int64)v311);
            goto LABEL_47;
          }
          if ( v46 == 3 )
          {
            if ( sub_183DF10((__int64)a1, *v303) )
            {
              v286 = (__m128i *)&a1->m128_u16[4];
              v153 = *v303;
              v154 = sub_183C740((__int64)a1, *v303);
              p_ptr = &ptr;
              v155 = v154;
              if ( v154 == 6 )
              {
                sub_168B9F0((__int64)&ptr, v286->m128i_i64, a2, 0x128Fu, 0);
                v309 = *(_QWORD *)(v308.m128i_i64[0] + 8);
                v165 = sub_162B6D0((__int64)&ptr, &v309);
                v166 = v165;
                if ( *(_BYTE *)(v165 + 120) )
                {
                  sub_AE9DF0((unsigned __int8 **)(v165 + 32), (__int64)v153, 0xAu);
                }
                else if ( *(_BYTE *)(v165 + 132) )
                {
                  v171 = sub_168B9E0((_QWORD *)v165);
                  v172 = *(void **)(v166 + 16);
                  if ( v172 )
                    v172 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v172 + 32LL))(*(_QWORD *)(v166 + 16));
                  v311 = v172;
                  v173 = sub_1587BC0(v171, (__int64 *)&v311, v167, v168, v169, v170);
                  sub_AE9DF0(
                    (unsigned __int8 **)(*v173 + 32LL * *(unsigned int *)(v166 + 128) + 8),
                    (__int64)v153,
                    0xAu);
                }
              }
              else
              {
                sub_168B9F0((__int64)&ptr, v286->m128i_i64, a2, 0x1295u, 0);
                v309 = *(_QWORD *)(v308.m128i_i64[0] + 8);
                v156 = sub_162B6D0((__int64)&ptr, &v309);
                v157 = v156;
                if ( *(_BYTE *)(v156 + 120) )
                {
                  sub_AE9DF0((unsigned __int8 **)(v156 + 32), v155, 2u);
                }
                else if ( *(_BYTE *)(v156 + 132) )
                {
                  v210 = sub_168B9E0((_QWORD *)v156);
                  v211 = *(void **)(v157 + 16);
                  if ( v211 )
                    v211 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v211 + 32LL))(*(_QWORD *)(v157 + 16));
                  v311 = v211;
                  v212 = sub_1587BC0(v210, (__int64 *)&v311, v206, v207, v208, v209);
                  sub_AE9DF0((unsigned __int8 **)(*v212 + 32LL * *(unsigned int *)(v157 + 128) + 8), v155, 2u);
                }
              }
              sub_15F7200(p_ptr);
              sub_18F5080((__int64)a1, (__int64)v153);
              goto LABEL_47;
            }
            v49 = 0;
            if ( ((*v303)[83] & 8) != 0 )
            {
              v50 = *((unsigned int **)*v303 + 16);
              if ( *((_BYTE *)v50 + 4) )
                v49 = *(_QWORD *)&v50[2 * *v50 + 2];
            }
            p_ptr = (void **)&a1->m128_u64[1];
            v51 = sub_BFA720(v13);
            v288 = v52;
            v287 = v51;
            v294 = (unsigned __int8 **)&v311;
            sub_168B9B0((__int64)&v311, (__int64)p_ptr, 4755);
            v53 = 0;
            if ( (*((_DWORD *)*v303 + 10) & 7) == 6 )
              v53 = *(_DWORD *)(*((_QWORD *)*v303 + 5) & 0xFFFFFFFFFFFFFFF8LL);
            v54 = sub_FDF900(v53);
            v55 = v294;
            sub_AE9DF0(v294, (__int64)v54, 1u);
            sub_AE9DF0(v55, v49 != 0, 2u);
            v56 = 0;
            if ( v49 )
            {
              v56 = *(_DWORD *)(v49 + 16) * ((*(_WORD *)(v49 + 2) >> 6) & 7u);
              v49 += 4LL * *(unsigned int *)(v49 + 4) + 20;
            }
            v57 = (_BYTE *)v49;
            v58 = (__int64 *)v294;
            sub_AEC220(v294, v57, v56);
            v59 = (void *)sub_EEC8C0(v308.m128i_u64[0], (__int64)v57, *(double *)v17.m128_u64);
            LOBYTE(v315) = 1;
            ptr = v59;
            sub_AEC610(v58, (__int64 *)&ptr);
            v60 = (void *)sub_EEC8C0(v308.m128i_u64[1], (__int64)&ptr, *(double *)v17.m128_u64);
            LOBYTE(v315) = 1;
            ptr = v60;
            sub_AEC610(v58, (__int64 *)&ptr);
            LODWORD(ptr) = v11;
            sub_1582CA0((__int64)&v315, (_BYTE **)v58);
            v61 = 0;
            v62 = v14;
            v283 = &v309;
            v282 = (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620;
            v281 = v11;
            v280 = v288;
            v279 = v287;
            v63 = (__int64 *)v286;
            goto LABEL_41;
          }
LABEL_55:
          v64 = (__int64 *)sub_1928110((__int64)a1, a2, v13, v308.m128i_u64[0], v308.m128i_u64[1], 0, v17, a8);
          goto LABEL_48;
        }
        v84 = *((unsigned __int8 *)v303 + 105);
        v287 = *v303;
        v295 = v84 & 2;
        if ( (v84 & 2) != 0 )
        {
          v85 = (__m128d)_mm_load_si128(&v308);
          v17 = (__m128)_mm_shuffle_pd(v85, v85, 1);
          v308 = (__m128i)v17;
        }
        if ( !v287 )
        {
          v67 = sub_19AFC70(
                  (__int64)a1,
                  (__int64 *)v308.m128i_i64[0],
                  (__int64)v303[2],
                  (__int64)v303[6],
                  1,
                  4u,
                  v17,
                  a8);
          if ( v67 != 1 )
          {
            v308.m128i_i64[0] = v67 & 0xFFFFFFFFFFFFFFFELL;
            v68 = sub_19AFC70(
                    (__int64)a1,
                    (__int64 *)v308.m128i_i64[1],
                    (__int64)v303[3],
                    (__int64)(v303[6] + 152),
                    1,
                    4u,
                    v17,
                    a8);
            if ( v68 != 1 )
            {
              v308.m128i_i64[1] = v68 & 0xFFFFFFFFFFFFFFFELL;
              goto LABEL_55;
            }
          }
          goto LABEL_47;
        }
        if ( v287[28] < 0 )
          goto LABEL_47;
        v86 = *((_QWORD *)v287 + 5) & 7LL;
        if ( (_DWORD)v86 != 6 )
        {
          LODWORD(v296) = 0;
          p_ptr = &ptr;
          goto LABEL_72;
        }
        LOBYTE(v84) = v84 & 3;
        LODWORD(v296) = *(_DWORD *)(*((_QWORD *)v287 + 5) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (_BYTE)v84 && (_DWORD)v296 == 30 )
        {
          LODWORD(v294) = v47;
          v213 = sub_C1D490((__int64)v287, (__int64)a1, v84, v86);
          v48 = (char)p_ptr;
          v47 = (int)v294;
          v216 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v213 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v216 + 16) != 13 || ((*(_WORD *)(v216 + 18) >> 3) & 0x1FF) != 0x1B4 )
          {
            LODWORD(v299) = (_DWORD)v294;
            LOBYTE(v298) = (_BYTE)p_ptr;
            v223 = sub_C1D490((__int64)v287, (__int64)a1, v214, v215);
            LOBYTE(v297) = sub_F61920(*(_QWORD *)(v223 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a1, v224, v225, v226, v227);
            v294 = (unsigned __int8 **)&a1->m128_u64[1];
            p_ptr = &ptr;
            sub_168B9F0((__int64)&ptr, &a1->m128_i64[1], a2, (_BYTE)v297 == 0 ? 4769 : 5644, 0);
            v306 = sub_C1D490((__int64)v287, (__int64)&a1->m128_i64[1], v228, v229);
            v296 = sub_162B6D0((__int64)p_ptr, &v306);
            v230 = sub_BFA720(v13);
            v312 = v231;
            v311 = v230;
            v296 = sub_166BAF0(v296, (__int64)&v311);
            v307 = sub_EEC8C0(v308.m128i_u64[0], (__int64)&v311, *(double *)v17.m128_u64);
            v296 = sub_1587DB0(v296, &v307);
            v309 = sub_EEC8C0(v308.m128i_u64[1], (__int64)&v307, *(double *)v17.m128_u64);
            sub_1587DB0(v296, &v309);
            sub_15F7200(p_ptr);
            sub_168B9F0((__int64)p_ptr, (__int64 *)v294, *((_DWORD *)v287 + 6), 0x67u, 0);
            sub_15F7200(p_ptr);
            v45 = (unsigned __int8)v297;
            if ( !(_BYTE)v297 )
              goto LABEL_47;
            LODWORD(v296) = 30;
            v47 = (int)v299;
            v48 = v298;
LABEL_72:
            if ( !v295 )
            {
              if ( a10 )
              {
                LOBYTE(v298) = v342 & (v340 != 0);
                if ( (_BYTE)v298 )
                {
                  if ( (unsigned int)(v340 - 16) <= 0x11 && ((1LL << ((unsigned __int8)v340 - 16)) & 0x38003) != 0
                    || ((v340 - 30) & 0xFFFFFFFB) == 0 )
                  {
                    v44 = (__int64)v322;
                    v294 = (unsigned __int8 **)&v311;
                    v184 = 21LL * (unsigned int)v323;
                    v312 = 0x400000000LL;
                    v311 = v313;
                    v297 = &v322[v184];
                    if ( &v322[v184] != v322 )
                    {
                      v299 = (__int64 *)v313;
                      v185 = v13;
                      v186 = v322;
                      LOBYTE(v300) = v48;
                      v187 = v185;
                      LODWORD(v301) = v47;
                      do
                      {
                        if ( (v186[13] & 1) != 0
                          && *v186
                          && (*((_BYTE *)v186 + 105) & 2) != 0
                          && (unsigned __int8)sub_1BC9DB0(a1[15].m128_i64[1], (_BYTE *)*v186, v287)
                          && ((unsigned int)sub_1BD5570((__int64)a1, a2, v186[6], (__int64)v303[6]) == -1
                           || (unsigned int)sub_1BD5570((__int64)a1, a2, v186[6] + 152, (__int64)(v303[6] + 152)) == -1) )
                        {
                          v188 = (unsigned int)v312;
                          v45 = *v186;
                          v189 = (unsigned int)v312 + 1LL;
                          if ( v189 > HIDWORD(v312) )
                          {
                            v302 = *v186;
                            sub_2237220(v294, v299, v189, 8);
                            v188 = (unsigned int)v312;
                            v45 = v302;
                          }
                          *((_QWORD *)v311 + v188) = v45;
                          LODWORD(v312) = v312 + 1;
                        }
                        v186 += 21;
                      }
                      while ( v297 != v186 );
                      v190 = (char)v300;
                      v13 = v187;
                      v47 = (int)v301;
                      if ( (_DWORD)v312 )
                      {
                        if ( (_DWORD)v312 == 1 )
                        {
                          v232 = *(char **)v311;
                          if ( *(_QWORD *)v311 )
                          {
                            if ( v287 == v232 )
                            {
                              v190 = v298;
                            }
                            else
                            {
                              v233 = *(_QWORD *)v232;
                              LODWORD(v297) = (_DWORD)v301;
                              v234 = (*(__int64 (__fastcall **)(char *))(v233 + 32))(v232);
                              v235 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v287 + 32LL))(v287);
                              v47 = (int)v297;
                              v190 = v234 == v235;
                            }
                          }
                        }
                        v191 = (__int64 *)p_ptr;
                        LODWORD(v300) = v47;
                        LOBYTE(v298) = v190;
                        v297 = &v14->m128_i64[1];
                        sub_168B9F0((__int64)p_ptr, &v14->m128_i64[1], a2, 0x160Bu, 0);
                        v309 = (__int64)sub_BFA720(v13);
                        v310 = v192;
                        v299 = &v309;
                        v193 = sub_166BAF0((__int64)v191, (__int64)&v309);
                        v304 = *(_QWORD *)(v308.m128i_i64[0] + 8);
                        v194 = sub_162B6D0(v193, &v304);
                        v195 = (__int64)&v305;
                        v305 = *(_QWORD *)(v308.m128i_i64[1] + 8);
                        v196 = sub_162B6D0(v194, &v305);
                        v197 = v298;
                        v198 = (int)v300;
                        v199 = v196;
                        if ( *(_BYTE *)(v196 + 120) )
                        {
                          v195 = (unsigned __int8)v298;
                          sub_AE9DF0((unsigned __int8 **)(v196 + 32), (unsigned __int8)v298, 2u);
                          v197 = v298;
                          v198 = (int)v300;
                          v200 = &v307;
                        }
                        else
                        {
                          v200 = &v307;
                          if ( *(_BYTE *)(v196 + 132) )
                          {
                            LODWORD(v301) = (_DWORD)v300;
                            LOBYTE(v300) = v298;
                            v239 = sub_168B9E0((_QWORD *)v196);
                            v243 = (char)v300;
                            v244 = (int)v301;
                            v298 = v239;
                            v245 = *(_QWORD *)(v199 + 16);
                            if ( v245 )
                            {
                              v245 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v245 + 32LL))(*(_QWORD *)(v199 + 16));
                              v244 = (int)v301;
                              v243 = (char)v300;
                            }
                            LODWORD(v302) = v244;
                            LOBYTE(v301) = v243;
                            v300 = &v307;
                            v307 = v245;
                            v246 = sub_1587BC0(v298, &v307, v240, (__int64)&v307, v241, v242);
                            v195 = (unsigned __int8)v301;
                            v247 = *v246 + 32LL * *(unsigned int *)(v199 + 128);
                            LOBYTE(v298) = (_BYTE)v301;
                            sub_AE9DF0((unsigned __int8 **)(v247 + 8), (unsigned __int8)v301, 2u);
                            v200 = v300;
                            v198 = v302;
                            v197 = v298;
                          }
                        }
                        LODWORD(v300) = v198;
                        LOBYTE(v298) = v197;
                        v301 = v200;
                        v306 = sub_EEC8C0(v308.m128i_u64[0], v195, *(double *)v17.m128_u64);
                        v201 = sub_1587DB0(v199, &v306);
                        v307 = sub_EEC8C0(v308.m128i_u64[1], (__int64)&v306, *(double *)v17.m128_u64);
                        sub_1587DB0(v201, v301);
                        v202 = (__int64 *)p_ptr;
                        sub_15F7200(p_ptr);
                        if ( (_BYTE)v298 )
                        {
                          v203 = v297;
                          LODWORD(v298) = (_DWORD)v300;
                          sub_168B9F0((__int64)v202, v297, *((_DWORD *)v287 + 6), 0x183Fu, 0);
                          sub_15F7200(v202);
                          v47 = v298;
                          if ( (v287[28] & 0x7Fu) - 35 <= 3 && (_DWORD)v298 == 30 )
                          {
                            v254 = sub_E9C200((__int64)v287, (__int64)v203, v204, v205);
                            v47 = v298;
                            if ( !v254 )
                            {
                              v257 = sub_B771C0((__int64)v287, (__int64)v203, v255, v256);
                              v47 = v298;
                              if ( !v257 )
                              {
                                v309 = *(_QWORD *)(**((_QWORD **)v287 + 15) + 48LL);
                                v260 = sub_C1BEF0((__int64)v299, (__int64)v203, v258, v259);
                                ptr = (void *)sub_B987D0(v287, (__int64)v203);
                                v263 = sub_C1BEF0((__int64)p_ptr, (__int64)v203, v261, v262);
                                v264 = v260;
                                v265 = sub_1BC70C0(v263, v260);
                                v47 = v298;
                                if ( v265 )
                                {
                                  v266 = *(_QWORD *)(v308.m128i_i64[0] + 8);
                                  ptr = (void *)sub_B987D0(v287, v264);
                                  v269 = sub_C1BEF0((__int64)p_ptr, v264, v267, v268);
                                  v270 = v266;
                                  v271 = sub_1BC70C0(v269, v266);
                                  v47 = v298;
                                  if ( v271 )
                                  {
                                    v272 = *(_QWORD *)(v308.m128i_i64[1] + 8);
                                    ptr = (void *)sub_B987D0(v287, v270);
                                    v275 = sub_C1BEF0((__int64)p_ptr, v270, v273, v274);
                                    v276 = sub_1BC70C0(v275, v272);
                                    v47 = v298;
                                    if ( v276 )
                                    {
                                      v277 = (__int64 *)p_ptr;
                                      sub_168B9F0((__int64)p_ptr, v297, *((_DWORD *)v287 + 6), 0x183Du, 0);
                                      sub_15F7200(v277);
                                      v47 = v298;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else
                        {
                          v217 = (__int64 *)p_ptr;
                          LODWORD(v299) = (_DWORD)v300;
                          sub_168B9F0((__int64)p_ptr, v297, *((_DWORD *)v287 + 6), 0x1840u, 0);
                          sub_15F7200(v217);
                          v218 = (int)v299;
                          LODWORD(v298) = v13;
                          v299 = (__int64 *)a4;
                          a4 = (__int64)v14;
                          v219 = v218;
                          v220 = (char *)v311 + 8 * (unsigned int)v312;
                          for ( i = (char *)v311; v220 != i; i += 8 )
                          {
                            v222 = *(_QWORD *)i;
                            sub_168B9F0((__int64)p_ptr, v297, *(_DWORD *)(v222 + 24), 0x183Eu, 0);
                            sub_15F7200(p_ptr);
                          }
                          v47 = v219;
                          v14 = (__m128 *)a4;
                          v13 = v298;
                          LODWORD(a4) = (_DWORD)v299;
                        }
                      }
                      if ( v311 != v294 + 2 )
                      {
                        LODWORD(v294) = v47;
                        free(v311);
                        v47 = (int)v294;
                      }
                    }
                  }
                }
              }
            }
            v87 = v308.m128i_i64[0];
            if ( v47 == 15 )
            {
              v174 = *(_QWORD *)(v308.m128i_i64[0] + 8);
              LODWORD(v294) = 15;
              sub_160A450((__int64)v14, v174, *(_QWORD *)(v308.m128i_i64[1] + 8), (unsigned int)v11, v44);
              v87 = v308.m128i_i64[0];
              v47 = (int)v294;
            }
            if ( (v287[28] & 0x7Fu) - 35 > 3 )
            {
              LODWORD(v297) = v47;
              sub_19CF970(
                (__int64)p_ptr,
                (_QWORD *)v14[15].m128_u64[1],
                **((_QWORD **)v287 + 15),
                *(_QWORD *)(**((_QWORD **)v287 + 15) + 48LL),
                v44,
                v45);
              v294 = (unsigned __int8 **)sub_1A24E20((__int64)v14, (__int64)p_ptr, 0, v87, 0, 0, v17, a8);
              if ( v294 == (unsigned __int8 **)((char *)&dword_0 + 1) )
                goto LABEL_47;
              v161 = v308.m128i_i64[1];
              sub_19CF970(
                (__int64)p_ptr,
                (_QWORD *)v14[15].m128_u64[1],
                *(_QWORD *)(*((_QWORD *)v287 + 15) + 8LL),
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v287 + 15) + 8LL) + 48LL),
                v159,
                v160);
              v162 = (__int64 *)sub_1A24E20((__int64)v14, (__int64)p_ptr, 0, v161, 0, 0, v17, a8);
              if ( v162 == (__int64 *)((char *)&dword_0 + 1) )
                goto LABEL_47;
              v294 = (unsigned __int8 **)v162;
              v101 = 0;
              v100 = (const char *)(unsigned int)v297;
              v17 = (__m128)_mm_and_si128((__m128i)_mm_loadh_ps((const double *)&v294), (__m128i)xmmword_23AA750);
              v308 = (__m128i)v17;
            }
            else
            {
              LODWORD(v294) = v47;
              sub_1663420(
                v14,
                (unsigned int)v11,
                v87,
                v308.m128i_u64[1],
                (__int64)v303[1],
                v45,
                *(double *)v17.m128_u64);
              v88 = v287;
              if ( (unsigned __int8)sub_B981D0(v287, (unsigned int)v11) )
              {
                v91 = sub_1BCBCC0((__int64)v14, v308.m128i_i64[0], (__int64)v88, v89, v90, v17, a8);
                v94 = (int)v294;
                v95 = v91;
                v96 = 1;
              }
              else
              {
                v158 = sub_1BF87F0(
                         (__int64)v14,
                         v308.m128i_i64[0],
                         0,
                         (unsigned __int64)v303[1] & 0xFFFFFFFFFFFFFFF8LL,
                         (__int64)v287,
                         v17,
                         a8);
                v94 = (int)v294;
                v95 = v158;
                v96 = 0;
              }
              LODWORD(v297) = v94;
              v97 = (_QWORD *)v14[15].m128_u64[1];
              v98 = *((_QWORD *)v287 + 15);
              v294 = (unsigned __int8 **)v308.m128i_i64[1];
              sub_19CF970(
                (__int64)p_ptr,
                v97,
                *(_QWORD *)(v98 + 8 * v96),
                *(_QWORD *)(*(_QWORD *)(v98 + 8 * v96) + 48LL),
                v92,
                v93);
              v99 = sub_1A24E20((__int64)v14, (__int64)p_ptr, 0, (__int64)v294, 0, 0, v17, a8);
              if ( v99 == 1 || v95 == 1 )
                goto LABEL_47;
              v100 = (const char *)(unsigned int)v297;
              v101 = v95 & 0xFFFFFFFFFFFFFFFELL;
              v308.m128i_i64[1] = v99 & 0xFFFFFFFFFFFFFFFELL;
              v308.m128i_i64[0] = v95 & 0xFFFFFFFFFFFFFFFELL;
            }
            LODWORD(v294) = (_DWORD)v100;
            ptr = nullptr;
            v102 = (__int64)v303[1];
            v284 = v100;
            v103 = v287;
            v106 = sub_1BC7390(
                     v14,
                     (__int64)v287,
                     v102 & 0xFFFFFFFFFFFFFFF8LL,
                     v101,
                     (unsigned int)v293 + (unsigned __int64)(unsigned int)v291 > 1,
                     v11,
                     v17,
                     a8,
                     p_ptr);
            if ( v106 == 1 )
              goto LABEL_47;
            v309 = sub_C1D490((__int64)v287, (__int64)v103, v104, v105);
            v107 = sub_18C0240(v309, (__int64)v103);
            v108 = v14[15].m128_i64[1];
            LODWORD(v291) = v107;
            v109 = sub_F67970(&v309, v108);
            v110 = v14[122].m128_i32[0];
            v111 = (char)v291;
            v309 = v109;
            v112 = ((_BYTE)v303[13] & 0x40) != 0;
            if ( v14[121].m128_i32[2] == v110 && v14[121].m128_i32[3] == v14[122].m128_i32[1] )
            {
              v113 = 0;
            }
            else
            {
              v113 = v14[122].m128_u32[1];
              v46 = v110;
            }
            LODWORD(v291) = (_DWORD)v294;
            v114 = (unsigned int)v296;
            v117 = (unsigned __int16 *)sub_C98520(
                                         (_QWORD *)v14[15].m128_u64[1],
                                         v296,
                                         v106 & 0xFFFFFFFFFFFFFFFELL,
                                         v286,
                                         2,
                                         v309,
                                         v111,
                                         v11,
                                         (v113 << 32) | v46,
                                         v112);
            v118 = (int)v291;
            if ( (v287[28] & 0x7Fu) - 35 <= 3 && (v119 = sub_B98200(v287, v114), v118 = (int)v291, v119) )
            {
              v120 = v308.m128i_i64[0];
              v291 = (_BYTE *)(&dword_0 + 1);
              v286 = (__m128i *)((char *)v286 + 8);
            }
            else
            {
              v291 = (_BYTE *)(&dword_0 + 2);
              v120 = 0;
            }
            LODWORD(v293) = v118;
            v121 = sub_C1D490((__int64)v287, v114, v115, v116);
            if ( (unsigned __int8)sub_18C4140((__int64)v14, v121, (unsigned int)v11, (__int64)v117, (__int64)v287) )
              goto LABEL_47;
            v124 = (int)v293;
            if ( (_DWORD)v293 == 15 )
            {
              sub_16D7770((__int64)v14, v308.m128i_u64[0], v308.m128i_u64[1], v11, v122, v123, *(double *)v17.m128_u64);
              v121 = (__int64)p_ptr;
              ptr = (void *)v308.m128i_i64[0];
              v238 = nullptr;
              if ( (v287[28] & 0x7Fu) - 35 <= 3 )
                v238 = v287;
              v315 = v238;
              sub_15A1710((__int64)v14, (__int64 *)p_ptr, v308.m128i_i64[1], (__int64)v287, v236, v237);
              v124 = (int)v293;
            }
            if ( v120 )
            {
              v125 = *(_QWORD *)(v120 + 8);
              v126 = v14[15].m128_i64[1];
              LODWORD(v296) = v124;
              v294 = (unsigned __int8 **)sub_A70010(v126, v125);
              v293 = (__int64 *)v14[15].m128_u64[1];
              ptr = (void *)sub_B987D0(v287, v125);
              v129 = sub_C1BEF0((__int64)p_ptr, v125, v127, v128);
              v293 = (__int64 *)sub_A70010((__int64)v293, v129);
              v130 = j__strlen("'this'");
              v121 = (unsigned int)v11;
              v284 = "'this'";
              sub_16D4620(
                (__int64)v14,
                (unsigned int)v11,
                (__int64)v287,
                (__int64)"'this'",
                v130,
                (__int64)v294,
                (__int64)v293);
              v124 = v296;
            }
            LODWORD(v293) = v124;
            v131 = sub_EEC8C0((unsigned __int64)v117, v121, *(double *)v17.m128_u64);
            v132 = v120;
            v133 = v287;
            sub_16E9510(
              (__int64)v14,
              (__int64)v287,
              0,
              v132,
              (__int64)v286,
              (unsigned __int64)v291,
              (__m128i)v17,
              (v287[28] & 0x7Fu) - 35 <= 3,
              v11,
              v131,
              4u);
            v137 = sub_19A3E40((__int64)v14, v117, v134, v135, v136, v17, a8);
            if ( v137 == (unsigned __int16 *)((char *)&dword_0 + 1) )
              goto LABEL_47;
            v139 = sub_18C3A50((__int64)v14, (unsigned __int64)v137, (__int64)v133);
            if ( v139 == 1 )
              goto LABEL_47;
            v140 = (__int64 *)v303;
            v141 = v295 != 0;
            if ( (*((_BYTE *)v303 + 105) & 1) != 0 )
            {
              if ( (_DWORD)v293 == 31 )
              {
                v139 = sub_19249E0((__int64)v14, v11, 9u, v139 & 0xFFFFFFFFFFFFFFFELL, 0, v138, v17, a8);
                goto LABEL_108;
              }
            }
            else if ( (_DWORD)v293 != 34 || !v295 )
            {
              goto LABEL_110;
            }
            LODWORD(v312) = sub_A97D20(
                              v14[15].m128_i64[1],
                              *(_QWORD *)(*(_QWORD *)(v14[15].m128_u64[1] + 18720) & 0xFFFFFFFFFFFFFFF0LL));
            if ( (unsigned int)v312 > 0x40 )
            {
              v294 = (unsigned __int8 **)&v311;
              sub_2205470(&v311, 0, 0);
            }
            else
            {
              v311 = nullptr;
              v294 = (unsigned __int8 **)&v311;
            }
            v142 = (_QWORD *)v14[15].m128_u64[1];
            BYTE4(v312) = 0;
            v143 = (__int64 *)sub_C0C5D0(v142, (__int64)v294, v142[2340], v11);
            v147 = 16;
            LODWORD(v315) = 0;
            v286 = (__m128i *)v143;
            v317 = 0;
            v318 = 0;
            v319 = 0;
            v320 = 0;
            v321 = 0;
            LODWORD(ptr) = 20;
            WORD2(ptr) = 0;
            v316 = v287;
            v148 = p_ptr;
            v149 = v278;
            while ( v147 )
            {
              *v149 = *(_DWORD *)v148;
              v148 = (void **)((char *)v148 + 4);
              ++v149;
              --v147;
            }
            sub_1DBA9B0(v14, v148, v144, 0, v145, v146, v278[0], v278[1], v279, v280, v281, v282, v283, v284);
            v150 = (int)v286;
            v151 = v139 & 0xFFFFFFFE;
            if ( !v295 )
            {
              v150 = v139 & 0xFFFFFFFE;
              v151 = (int)v286;
            }
            v284 = (const char *)v148;
            v139 = sub_1C07820((_DWORD)v14, v11, v13, a4, v150, v151, 1, 0, 0);
            sub_1DBAAE0(v14, (unsigned int)v11);
            if ( (unsigned int)v312 > 0x40 && v311 )
              operator delete[](v311);
LABEL_108:
            if ( v139 != 1 )
            {
              v140 = (__int64 *)v303;
LABEL_110:
              if ( (*((_BYTE *)v140 + 105) & 3) != 0 )
              {
                v248 = v139 & 0xFFFFFFFFFFFFFFFELL;
                v249 = (_WORD *)sub_EEE9A0(24, (_QWORD *)v14[15].m128_u64[1], 8u);
                v250 = *(_BYTE *)((v139 & 0xFFFFFFFFFFFFFFFELL) + 1);
                v251 = *(_QWORD *)((v139 & 0xFFFFFFFFFFFFFFFELL) + 8);
                v139 = (__int64)v249;
                *v249 = *v249 & 0xFE00 | 0x65;
                if ( unk_2CD7484 )
                  sub_EE9B50(101);
                v252 = *(_BYTE *)(v139 + 1);
                *(_BYTE *)(v139 + 2) &= 0xF8u;
                *(_QWORD *)(v139 + 8) = v251;
                *(_QWORD *)(v139 + 16) = v248;
                *(_BYTE *)(v139 + 1) = v250 & 0x3E | v252 & 1;
                *(_BYTE *)(v139 + 3) = (2 * v141) | *(_BYTE *)(v139 + 3) & 0xFD;
                v253 = sub_B63330(v139);
                *(_BYTE *)(v139 + 1) = (v253 << 6) | *(_BYTE *)(v139 + 1) & 0x3F;
                *(_BYTE *)(v139 + 2) = *(_BYTE *)(v139 + 2) & 0xF8 | (v253 >> 2) & 7;
              }
              v64 = (__int64 *)v139;
              goto LABEL_48;
            }
LABEL_47:
            v64 = (_QWORD *)(&dword_0 + 1);
LABEL_48:
            v286 = (__m128i *)v64;
            sub_17A20D0((__int64)v285);
            return (unsigned __int64)v286;
          }
          LODWORD(v296) = 30;
        }
        p_ptr = &ptr;
        goto LABEL_72;
      }
      if ( v13 == 32 )
        goto LABEL_55;
      if ( a11 )
      {
        if ( v13 == 9 )
        {
          v64 = (__int64 *)sub_1C09850(a1, a2, a4, v308.m128i_i64[0], v308.m128i_i64[1], a11);
          v47 = (int)v287;
          if ( v64 )
            goto LABEL_48;
        }
      }
      LODWORD(v293) = v47;
      v291 = sub_BFA720(v13);
      v292 = v69;
      p_ptr = &ptr;
      v70 = (__int64 *)v286;
      v71 = (__int64)v285;
      sub_1C004B0(
        (__int64)&ptr,
        (__int64)v285,
        a1,
        0,
        (__int64)v286,
        2u,
        v17,
        a8,
        (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1837230,
        (__int64)&v311);
      v72 = sub_1C00760(v71, a1, (__int64)v70, 2u, v17, a8);
      v73 = a1[697].m128_i8[8];
      a1[697].m128_i8[8] = v72;
      LOBYTE(v287) = v73;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v308.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48
        && v13 - 21 <= 0xA )
      {
        v294 = (unsigned __int8 **)&a1->m128_u64[1];
        sub_168B9F0((__int64)&v311, &a1->m128_i64[1], a2, 0x129Fu, 0);
        v309 = (__int64)sub_BFA720(v13);
        v310 = v175;
        v293 = &v309;
        v176 = sub_166BAF0((__int64)&v311, (__int64)&v309);
        v306 = sub_EEC8C0(v308.m128i_u64[0], (__int64)&v309, *(double *)v17.m128_u64);
        v177 = sub_1587DB0(v176, &v306);
        v164 = 1;
        v307 = sub_EEC8C0(v308.m128i_u64[1], (__int64)&v306, *(double *)v17.m128_u64);
        sub_1587DB0(v177, &v307);
        sub_15F7200(&v311);
        LOBYTE(v163) = sub_F62670(
                         *(_QWORD *)(*(_QWORD *)(v308.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL),
                         nullptr,
                         v178,
                         v179,
                         v180,
                         v181);
        if ( (_BYTE)v163 )
        {
          sub_168B9F0((__int64)&v311, (__int64 *)v294, a2, 0x16A2u, 0);
          v306 = *(_QWORD *)(v308.m128i_i64[0] + 8);
          v182 = sub_162B6D0((__int64)&v311, &v306);
          v307 = sub_EEC8C0(v308.m128i_u64[0], (__int64)&v306, *(double *)v17.m128_u64);
          v183 = sub_1587DB0(v182, &v307);
          v309 = sub_EEC8C0(v308.m128i_u64[1], (__int64)&v307, *(double *)v17.m128_u64);
          sub_1587DB0(v183, v293);
          sub_15F7200(&v311);
        }
      }
      else
      {
        v74 = sub_1BF82B0(a1, (int)v293, a2, (unsigned __int64 *)v286, 2u, *(double *)v17.m128_u64, a8);
        v64 = (_QWORD *)(&dword_0 + 1);
        if ( v74 )
          goto LABEL_63;
        v163 = sub_1928110((__int64)a1, a2, v13, v308.m128i_u64[0], v308.m128i_u64[1], 0, v17, a8);
        v164 = v163;
      }
      v284 = (const char *)v163;
      sub_1C007F0((__int64)v285, v14, (__int64)v286, 2u, (__int64 *)ptr, (unsigned int)v315, v17, a8, v291, v292, a2);
      v64 = (__int64 *)v164;
LABEL_63:
      v75 = (__int64 *)ptr;
      v76 = (__int64 *)(p_ptr + 2);
      v14[697].m128_i8[8] = (char)v287;
      if ( v75 != v76 )
      {
        v286 = (__m128i *)v64;
        free(v75);
        v64 = (__int64 *)v286;
      }
      goto LABEL_48;
    }
    v65 = *(_QWORD *)(*(_QWORD *)(v308.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v66 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (*(_BYTE *)(v65 + 17) & 4) != 0 )
    {
      if ( (unsigned __int8)v66 > 0x2Au )
        goto LABEL_26;
      v152 = 0x4040600007CLL;
      if ( !_bittest64(&v152, v66) && (_BYTE)v66 != 33 )
        goto LABEL_26;
    }
    else if ( (unsigned __int8)(v66 - 47) <= 1u )
    {
      goto LABEL_26;
    }
    return sub_1928110((__int64)a1, a2, 0x15u, v308.m128i_u64[0], v308.m128i_u64[1], 0, v17, a8);
  }
  v23 = (_QWORD *)a1[15].m128_u64[1];
  if ( *(_DWORD *)(a4 + 8) )
  {
    LODWORD(v285) = v18;
    LODWORD(v323) = a2;
    v322 = (__int64 *)((unsigned __int64)&v23[2 * v18 + 2199] | 6);
    sub_B85890(v324, (__int64)v322);
    v283 = (__int64 *)v324[0];
    v282 = (unsigned __int8 (__fastcall *)(__int64, __int64))v323;
    v281 = (__int64)v322;
    result = sub_1BD6F20((__int64)v14, 0, 0, 0, a4, a9, (const __m128i)v17);
    if ( result != 1 )
    {
      v35 = v14[122].m128_u32[0];
      v36 = v14[122].m128_u32[1];
      if ( v14[121].m128_u64[1] == __PAIR64__(v36, v35) )
      {
        v36 = 0;
        v35 = 0;
      }
      return sub_C98520(
               (_QWORD *)v14[15].m128_u64[1],
               (char)v285,
               result & 0xFFFFFFFFFFFFFFFELL,
               &v308,
               2,
               *(_QWORD *)(v14[15].m128_u64[1] + 19072),
               0,
               v11,
               (v36 << 32) | v35,
               0);
    }
  }
  else
  {
    v24 = v14[122].m128_u32[0];
    v25 = v14[121].m128_i32[3];
    v26 = v14[121].m128_i32[2];
    v27 = v14[122].m128_u32[1];
    if ( v13 - 22 > 9 )
    {
      if ( __PAIR64__(v27, v24) == __PAIR64__(v25, v26) )
      {
        v27 = 0;
        v24 = 0;
      }
      return sub_C09F10(v23, v308.m128i_u64[0], v308.m128i_u64[1], v13, v23[2384], 0, 0, a2, (v27 << 32) | v24);
    }
    else
    {
      if ( __PAIR64__(v27, v24) == __PAIR64__(v25, v26) )
      {
        v27 = 0;
        v24 = 0;
      }
      return sub_C0BCA0(
               v23,
               v308.m128i_i64[0],
               v308.m128i_i64[1],
               v13,
               v23[2384],
               1,
               0,
               a2,
               (v27 << 32) | v24,
               v23[2384],
               v23[2384]);
    }
  }
  return result;
}
