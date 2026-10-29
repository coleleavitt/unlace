__int64 __fastcall sub_16B28E0(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  unsigned __int64 v10; // r15
  int v12; // ebp
  _QWORD *v13; // r14
  __int64 **v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 **v16; // rdi
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rax
  bool v22; // cc
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebp
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 *v37; // rbp
  __int64 v38; // r13
  __int64 v39; // r9
  __int64 *v40; // rdi
  __int64 v41; // r12
  char v42; // al
  __int64 v43; // rdx
  char v44; // al
  unsigned __int64 v45; // rdx
  void *v46; // rbp
  __int64 *v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  unsigned int v50; // eax
  __int64 v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rsi
  _QWORD *v61; // rbp
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __m128i *v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rdx
  bool v71; // bp
  __int64 v72; // rdx
  _QWORD *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // ebp
  __int64 v79; // rax
  __int64 v80; // r12
  char v81; // dl
  __int64 v82; // r8
  unsigned __int64 v83; // rsi
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // r12d
  __int64 v87; // rdx
  __int64 v88; // rcx
  _QWORD *v89; // rbp
  __int64 v90; // r8
  __int64 v91; // r9
  _QWORD *v92; // rax
  __int64 v93; // r12
  void **v94; // rax
  __int64 v95; // rsi
  __int64 v96; // r9
  __int64 *v97; // r13
  __int64 *v98; // r12
  __int64 v99; // rdx
  __int64 v100; // r15
  char v101; // al
  __int64 *v102; // rax
  unsigned __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // r9
  __int64 v106; // rbx
  _QWORD *v107; // rbp
  __int64 v108; // rax
  __int64 v109; // rdx
  _QWORD *v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rbx
  _QWORD *v115; // r14
  __int64 v116; // rbp
  __int64 v117; // rdi
  int v118; // edi
  int v119; // edi
  unsigned int j; // eax
  int v121; // eax
  bool v122; // zf
  __int64 v123; // r8
  __int64 v124; // rdx
  __int64 *v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rdi
  __int64 v131; // rdx
  unsigned __int64 v132; // rsi
  __int64 *v133; // rdi
  __int64 v134; // rax
  char v135; // cl
  int v136; // r13d
  unsigned int v137; // r12d
  __int64 *v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 *v141; // r9
  __int64 v142; // rbp
  __int64 v143; // rax
  __int64 v144; // rbp
  size_t v145; // rax
  __int64 *v146; // r10
  __int64 *v147; // r9
  __int64 *v148; // r9
  unsigned int v149; // eax
  int v150; // r10d
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  unsigned __int64 v156; // rdx
  unsigned int v157; // r12d
  __int64 *v158; // rbp
  __int64 v159; // rdx
  unsigned __int64 v160; // r13
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  unsigned __int64 v165; // r13
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rax
  __int64 *v170; // rdi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rbp
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // rax
  _QWORD *v177; // rax
  __int64 v178; // rbp
  char v179; // cl
  __int64 v180; // rax
  __int64 v181; // rax
  __int64 v182; // r14
  __int64 v183; // rax
  unsigned __int64 v184; // rdx
  unsigned __int64 v185; // rdx
  __int64 v186; // rsi
  unsigned __int64 v187; // rax
  _DWORD *v188; // rax
  __int64 v189; // rdi
  int v190; // edx
  void ***v191; // r12
  void ***v192; // rdi
  void **v193; // r13
  __int64 v194; // r13
  __int64 v195; // rax
  __int64 v196; // rax
  unsigned __int64 v197; // rdx
  __int64 v198; // rsi
  unsigned __int64 v199; // rax
  _DWORD *v200; // rax
  __int64 v201; // rdi
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r12
  __int64 v206; // rax
  _QWORD *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  __int64 v211; // r12
  __int64 v212; // rax
  _QWORD *v213; // rax
  __int64 v214; // r12
  __int64 v215; // r13
  int v216; // r10d
  __int64 v217; // rax
  __int64 v218; // r13
  unsigned __int64 v219; // rax
  int v220; // r10d
  __int64 *v221; // r9
  unsigned __int64 v222; // r12
  unsigned int v223; // eax
  unsigned __int64 v224; // rdx
  __int64 *v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  int v230; // r11d
  int v231; // eax
  int v232; // eax
  unsigned int i; // r14d
  __int64 v234; // rdi
  __int64 *v235; // rsi
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rbp
  __int64 v239; // rdx
  __int64 v240; // rcx
  __int64 v241; // rbp
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // rax
  _QWORD *v245; // rax
  __int64 *v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // r8
  int v250; // r10d
  __int64 v251; // rax
  _QWORD *v252; // rax
  __int64 v253; // rdx
  __int64 v254; // rcx
  __int64 v255; // r8
  __int64 v256; // r13
  __int64 v257; // rax
  _QWORD *v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rcx
  __int64 v261; // rbp
  __int64 v262; // r8
  __int64 v263; // rax
  _QWORD *v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 v267; // r8
  __int64 v268; // r13
  __int64 v269; // rax
  _QWORD *v270; // rax
  int v271; // r14d
  int v272; // eax
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // r8
  __int64 v277; // r9
  _QWORD *v278; // rax
  _QWORD *v279; // rax
  __int64 v280; // [rsp-8h] [rbp-3F0h]
  __int64 v281; // [rsp-8h] [rbp-3F0h]
  __int64 v285; // [rsp+18h] [rbp-3D0h]
  __int64 v286; // [rsp+18h] [rbp-3D0h]
  int v288; // [rsp+30h] [rbp-3B8h]
  __int64 *p_si128; // [rsp+38h] [rbp-3B0h] BYREF
  unsigned __int64 v290; // [rsp+40h] [rbp-3A8h]
  __int64 *v291; // [rsp+48h] [rbp-3A0h]
  __int64 v292; // [rsp+50h] [rbp-398h]
  unsigned __int64 v293; // [rsp+58h] [rbp-390h]
  _QWORD *v294; // [rsp+60h] [rbp-388h]
  unsigned __int64 v295; // [rsp+68h] [rbp-380h]
  __int64 **v296; // [rsp+70h] [rbp-378h]
  void **v297; // [rsp+78h] [rbp-370h]
  char v298; // [rsp+83h] [rbp-365h]
  int v299; // [rsp+84h] [rbp-364h]
  void **v300; // [rsp+88h] [rbp-360h]
  __int64 v301; // [rsp+90h] [rbp-358h]
  __int64 v302; // [rsp+98h] [rbp-350h]
  unsigned int v303; // [rsp+A8h] [rbp-340h] BYREF
  int v304; // [rsp+ACh] [rbp-33Ch] BYREF
  __int64 **v305; // [rsp+B0h] [rbp-338h] BYREF
  unsigned __int64 v306; // [rsp+B8h] [rbp-330h] BYREF
  __int64 v307; // [rsp+C0h] [rbp-328h] BYREF
  int v308; // [rsp+C8h] [rbp-320h]
  void *v309[2]; // [rsp+D0h] [rbp-318h] BYREF
  _BYTE v310[16]; // [rsp+E0h] [rbp-308h] BYREF
  _BYTE v311[20]; // [rsp+F0h] [rbp-2F8h] BYREF
  char v312; // [rsp+104h] [rbp-2E4h]
  void *v313[2]; // [rsp+108h] [rbp-2E0h] BYREF
  _BYTE v314[24]; // [rsp+118h] [rbp-2D0h] BYREF
  __int64 *v315; // [rsp+130h] [rbp-2B8h] BYREF
  __int64 v316; // [rsp+138h] [rbp-2B0h] BYREF
  unsigned __int64 v317; // [rsp+140h] [rbp-2A8h] BYREF
  __int64 v318; // [rsp+148h] [rbp-2A0h]
  unsigned int v319; // [rsp+150h] [rbp-298h]
  int v320; // [rsp+154h] [rbp-294h] BYREF
  unsigned int v321; // [rsp+158h] [rbp-290h]
  void *ptr[6]; // [rsp+160h] [rbp-288h] BYREF
  char v323; // [rsp+190h] [rbp-258h]
  _BYTE v324[12]; // [rsp+194h] [rbp-254h] BYREF
  __int64 v325[2]; // [rsp+1A0h] [rbp-248h] BYREF
  __m128i si128; // [rsp+1B0h] [rbp-238h] BYREF
  __int64 (__fastcall **v327)(); // [rsp+240h] [rbp-1A8h] BYREF
  void *v328; // [rsp+248h] [rbp-1A0h] BYREF
  void **v329; // [rsp+250h] [rbp-198h]
  __int64 v330; // [rsp+258h] [rbp-190h]
  unsigned __int8 *v331; // [rsp+260h] [rbp-188h] BYREF
  __int64 v332; // [rsp+268h] [rbp-180h] BYREF
  unsigned int v333; // [rsp+270h] [rbp-178h]
  char v334; // [rsp+2B8h] [rbp-130h]
  unsigned int v335; // [rsp+2C0h] [rbp-128h]
  char v336; // [rsp+2C4h] [rbp-124h]
  void *v337[2]; // [rsp+2E8h] [rbp-100h] BYREF
  int v338; // [rsp+2F8h] [rbp-F0h]
  char v339; // [rsp+2FCh] [rbp-ECh]
  _QWORD v340[5]; // [rsp+300h] [rbp-E8h] BYREF
  void *v341; // [rsp+328h] [rbp-C0h]
  __int64 v342; // [rsp+330h] [rbp-B8h]
  _DWORD v343[26]; // [rsp+338h] [rbp-B0h] BYREF
  __int64 v344; // [rsp+3A0h] [rbp-48h]
  __int16 v345; // [rsp+3A8h] [rbp-40h]
  char v346; // [rsp+3AAh] [rbp-3Eh]

  v10 = a1;
  LOBYTE(v12) = 1;
  v13 = (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v13 + 17LL) & 4) == 0 )
    v12 = HIWORD(*(_DWORD *)(a5 & 0xFFFFFFFFFFFFFFFELL)) & 1;
  v14 = &v315;
  v15 = a1;
  v16 = &v315;
  sub_16A8350((__int64)&v315, v15, *a4, a5);
  *(_QWORD *)&v324[4] = a8;
  *(_DWORD *)v324 = a2;
  v325[0] = a6;
  v21 = *(_QWORD *)&byte_8[v317 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v21 & 8) != 0 && (v20 = *(_DWORD *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL) + 4)) != 0 )
  {
    sub_168B9F0((__int64)&v327, v315 + 1, v325[0], 0x130Bu, 0);
    v15 = (unsigned __int64)&v317;
    v79 = sub_1605D30((__int64)&v327, (__int64 *)&v317);
    v80 = v79;
    if ( *(_BYTE *)(v79 + 120) )
    {
      si128.m128i_i8[8] = 1;
      v15 = (unsigned __int64)&si128;
      si128.m128i_i64[0] = v325[0];
      sub_AEC610((__int64 *)(v79 + 32), si128.m128i_i64);
      LODWORD(v16) = (unsigned int)&v327;
      sub_15F7200(&v327);
    }
    else
    {
      if ( *(_BYTE *)(v79 + 132) )
      {
        v125 = (__int64 *)sub_168B9E0((_QWORD *)v79);
        v128 = *(__int64 **)(v80 + 16);
        if ( v128 )
        {
          v129 = *v128;
          p_si128 = v125;
          v128 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v129 + 32))(v128);
          v125 = p_si128;
        }
        *(_QWORD *)v311 = v128;
        v15 = (unsigned __int64)&si128;
        v130 = *sub_1587BC0((__int64)v125, (__int64 *)v311, v124, (__int64)v125, v126, v127)
             + 32LL * *(unsigned int *)(v80 + 128);
        si128.m128i_i8[8] = 1;
        si128.m128i_i64[0] = v325[0];
        sub_AEC610((__int64 *)(v130 + 8), si128.m128i_i64);
      }
      LODWORD(v16) = (unsigned int)&v327;
      sub_15F7200(&v327);
    }
    v22 = a3 <= 0x90u;
    if ( a3 == 144 )
    {
LABEL_80:
      v81 = v319;
      v82 = v316;
      if ( (_BYTE)v12 )
      {
LABEL_164:
        v31 = sub_C99210(
                *(_QWORD **)(v10 + 248),
                v318,
                v81,
                v320,
                v82 & 0xFFFFFFFFFFFFFFFELL,
                0,
                (__int64)a4,
                a2,
                SHIDWORD(a8),
                a6);
        goto LABEL_24;
      }
      if ( v319 )
      {
        if ( v321 && v321 != 498 )
        {
          v316 = sub_1907C70(v315, v316 & 0xFFFFFFFFFFFFFFFELL);
          if ( v316 == 1 )
            goto LABEL_74;
          v321 = 0;
LABEL_86:
          v83 = (unsigned __int64)&v316;
          v303 = 3283;
          v86 = sub_16AEA70(v315, &v316, v317, 0, *(__int64 *)v324, *(unsigned int *)&v324[8], a7, &v303, &v320);
          if ( v86 == 1 )
            goto LABEL_92;
          v83 = v303;
          if ( v303 )
          {
            if ( v316 == 1 )
              goto LABEL_74;
            if ( *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8) == *(_QWORD *)(v315[31] + 19080) )
            {
              sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCEAu, 0);
              v194 = *(_QWORD *)(sub_16A9540(v316 & 0xFFFFFFFFFFFFFFFELL) + 16);
              if ( v334 )
              {
                sub_AE9DF0(&v331, v194, 9u);
              }
              else if ( v336 )
              {
                v241 = sub_168B9E0(&v327);
                v244 = (__int64)v329;
                if ( v329 )
                  v244 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
                si128.m128i_i64[0] = v244;
                v245 = sub_1587BC0(v241, si128.m128i_i64, v239, v240, v242, v243);
                sub_AE9DF0((unsigned __int8 **)(*v245 + 32LL * v335 + 8), v194, 9u);
              }
              v195 = sub_1605D30((__int64)&v327, (__int64 *)&v317);
              sub_16AAEC0(v195, (unsigned int *)v324);
              sub_15F7200(&v327);
              v83 = v316 & 0xFFFFFFFFFFFFFFFELL;
              sub_1BE6FF0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 0, 0);
            }
            else
            {
              sub_16ADB50(
                (__int64)v315,
                v303,
                2,
                *(__int64 *)v324,
                *(unsigned int *)&v324[8],
                v316 & 0xFFFFFFFFFFFFFFFELL,
                a7,
                v317,
                0);
            }
          }
          if ( v86 == 2 )
          {
LABEL_92:
            p_si128 = v315;
            if ( (*(_BYTE *)(v315[29] + 107) & 0x14) != 0 )
            {
              v83 = 3;
              sub_16A7710((__int64)&v315, 3, 1u);
              p_si128 = v315;
            }
            v307 = *(_QWORD *)v324;
            v290 = v317;
            v308 = *(_DWORD *)&v324[8];
            v293 = *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8);
            v89 = sub_F67D30(*(_QWORD *)(v293 & 0xFFFFFFFFFFFFFFF0LL), v83, *(unsigned int *)&v324[8], v317, v84, v85);
            if ( !v89 )
            {
              v89 = sub_F63270(*(_QWORD *)(v293 & 0xFFFFFFFFFFFFFFF0LL), v83, v87, v88, v90, v91);
              if ( !v89 )
                goto LABEL_160;
            }
            if ( (*((_BYTE *)v89 + 74) & 1) == 0 )
              goto LABEL_160;
            if ( *((char *)v89 + 28) < 0 )
              goto LABEL_160;
            v92 = sub_F67D30(*(_QWORD *)(v290 & 0xFFFFFFFFFFFFFFF0LL), v83, v87, v88, v90, v91);
            v93 = (__int64)v92;
            if ( !v92 || (*((_BYTE *)v92 + 74) & 1) == 0 || *((char *)v92 + 28) < 0 )
              goto LABEL_160;
            v327 = nullptr;
            v329 = &v328;
            v330 = 0;
            v331 = (_BYTE *)(&dword_0 + 1);
            v328 = &v328;
            v94 = (void **)&v332;
            do
            {
              *v94 = nullptr;
              v94 += 2;
            }
            while ( v94 != v337 );
            v95 = v93;
            v337[1] = &byte_4;
            v338 = 0;
            v337[0] = v340;
            v341 = v343;
            v339 = 1;
            v340[4] = 0;
            v342 = 0x400000000LL;
            v343[24] = 0;
            v344 = 0;
            v345 = 257;
            v346 = 1;
            v298 = sub_B70530((__int64)v89, v93, (__int64)&v327);
            if ( v298 )
            {
              v88 = (__int64)v328;
              v297 = (void **)v328;
              if ( v328 == &v328 )
                goto LABEL_367;
              v299 = 0;
            }
            else
            {
              v95 = (__int64)v89;
              v298 = sub_B70530(v93, (__int64)v89, (__int64)&v327);
              if ( !v298 )
              {
LABEL_245:
                if ( v341 != v343 )
                  free(v341);
                if ( !v339 )
                  free(v337[0]);
                if ( ((unsigned __int8)v331 & 1) == 0 )
                  operator delete(v332, 16LL * v333, 8);
                v191 = (void ***)v328;
                if ( v328 != &v328 )
                {
                  while ( 1 )
                  {
                    v192 = (void ***)v191[2];
                    v193 = *v191;
                    if ( v192 == v191 + 4 )
                    {
                      operator delete(v191);
                      if ( v193 == &v328 )
                        break;
                    }
                    else
                    {
                      free(v192);
                      operator delete(v191);
                      if ( v193 == &v328 )
                        break;
                    }
                    v191 = (void ***)v193;
                  }
                }
LABEL_160:
                v149 = sub_16A8F30((__int64)v315, v14 + 1, v317, v88, v90);
                if ( v149 )
                {
                  sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, v149, 0);
                  si128.m128i_i64[0] = *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8);
                  v180 = sub_162B6D0((__int64)&v327, si128.m128i_i64);
                  v181 = sub_1605D30(v180, (__int64 *)v14 + 2);
                  sub_16AAEC0(v181, (unsigned int *)v14 + 25);
                  sub_15F7200(&v327);
                }
                if ( v316 != 1 )
                {
                  sub_16C73C0(v10, *v13, a5);
                  v81 = v319;
                  v82 = v316;
                  goto LABEL_164;
                }
LABEL_74:
                v28 = 1;
                goto LABEL_25;
              }
              v88 = (__int64)v328;
              v299 = 1;
              v297 = (void **)v328;
              if ( v328 == &v328 )
                goto LABEL_152;
            }
            v298 = 1;
            v294 = v13;
            v97 = p_si128;
            v295 = v10;
            v300 = &v328;
            v296 = &v315;
            while ( 1 )
            {
              v98 = (__int64 *)v297[2];
              v291 = &v98[3 * *((unsigned int *)v297 + 6)];
              if ( v98 == v291 )
              {
LABEL_244:
                v13 = v294;
                v10 = v295;
                v14 = v296;
                goto LABEL_245;
              }
              v99 = *v98;
              v100 = 0;
              v101 = *(_BYTE *)(*v98 + 12) & 1;
              if ( !v101 )
                break;
LABEL_147:
              LOBYTE(v292) = v101;
LABEL_148:
              if ( !v100 && !(_BYTE)v292 )
                goto LABEL_244;
              v298 &= v292;
              v297 = (void **)*v297;
              if ( v297 == v300 )
              {
                v13 = v294;
                v10 = v295;
                v14 = v296;
                if ( v299 )
                {
LABEL_152:
                  v136 = 1;
                  v305 = (__int64 **)v293;
                  v306 = v290;
LABEL_153:
                  v137 = v307;
                  v138 = p_si128 + 1;
                  p_si128 = (__int64 *)&si128;
                  v290 = (unsigned __int64)v138;
                  sub_168B9F0((__int64)&si128, v138, v307, 0x1C9Fu, 0);
                  v291 = (__int64 *)&si128;
                  v139 = sub_1605D30((__int64)&si128, (__int64 *)&v306);
                  v140 = sub_1605D30(v139, (__int64 *)&v305);
                  v141 = (__int64 *)&si128;
                  v142 = v140;
                  v122 = *(_BYTE *)(v140 + 120) == 0;
                  LOBYTE(p_si128) = v298 ^ 1;
                  if ( v122 )
                  {
                    if ( *(_BYTE *)(v140 + 132) )
                    {
                      v292 = (__int64)v291;
                      v273 = sub_168B9E0((_QWORD *)v140);
                      v277 = (__int64)v291;
                      v291 = (__int64 *)v273;
                      v278 = *(_QWORD **)(v142 + 16);
                      if ( v278 )
                      {
                        v278 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 ***, _QWORD, __int64, __int64, __int64))(*v278 + 32LL))(
                                           *(_QWORD *)(v142 + 16),
                                           &v305,
                                           *v278,
                                           v275,
                                           v276,
                                           v277);
                        v277 = v292;
                      }
                      v293 = v277;
                      v292 = (__int64)v311;
                      *(_QWORD *)v311 = v278;
                      v279 = sub_1587BC0((__int64)v291, (__int64 *)v311, v274, v275, v276, v277);
                      sub_AE9DF0(
                        (unsigned __int8 **)(*v279 + 32LL * *(unsigned int *)(v142 + 128) + 8),
                        (unsigned __int8)p_si128,
                        2u);
                      v141 = (__int64 *)v293;
                    }
                  }
                  else
                  {
                    sub_AE9DF0((unsigned __int8 **)(v140 + 32), (unsigned __int8)v298 ^ 1u, 2u);
                    v141 = v291;
                  }
                  v291 = (__int64 *)v311;
                  p_si128 = v141;
                  *(_DWORD *)v311 = v136;
                  v143 = sub_1587D10(v142, (int *)v311);
                  sub_16AAEC0(v143, (unsigned int *)&v307);
                  sub_15F7200(p_si128);
                  sub_168B9F0((__int64)p_si128, (__int64 *)v290, v137, 0x18C9u, 0);
                  v304 = v136;
                  v290 = (unsigned __int64)p_si128;
                  v144 = sub_1587D10((__int64)p_si128, &v304);
                  v145 = j__strlen("static_cast");
                  *(_DWORD *)v311 = v137;
                  *(_DWORD *)&v311[4] = v137;
                  p_si128 = (__int64 *)v311;
                  v313[0] = v314;
                  *(_QWORD *)&v311[12] = 0;
                  v312 = 0;
                  v313[1] = nullptr;
                  v314[0] = 0;
                  v314[16] = 0;
                  v311[8] = 1;
                  v309[0] = v310;
                  sub_16A7CB0(v309, "static_cast", (__int64)&aStaticCast[v145]);
                  sub_A0AAD0((__int64)v313, v309);
                  v146 = (__int64 *)v311;
                  v147 = (__int64 *)v290;
                  if ( v309[0] != v310 )
                  {
                    v290 = (unsigned __int64)p_si128;
                    p_si128 = v147;
                    operator delete(v309[0]);
                    v146 = (__int64 *)v290;
                    v147 = p_si128;
                  }
                  v290 = (unsigned __int64)v147;
                  p_si128 = v146;
                  sub_1589170(v144, v146);
                  v148 = (__int64 *)v290;
                  if ( v313[0] != p_si128 + 5 )
                  {
                    p_si128 = (__int64 *)v290;
                    operator delete(v313[0]);
                    v148 = (__int64 *)v290;
                  }
                  sub_15F7200(v148);
                  sub_F7C4A0((__int64)&v327);
                  goto LABEL_160;
                }
LABEL_367:
                v136 = 0;
                v305 = (__int64 **)v290;
                v306 = v293;
                goto LABEL_153;
              }
            }
            while ( 1 )
            {
              v103 = *(_QWORD *)(**(_QWORD **)(v99 + 16) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v103 + 8) & 0xF) != 0 )
                v103 = sub_F64F00(**(_QWORD **)(v99 + 16), v95, v99, v88, v90);
              v104 = sub_F63270(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL), v95, v99, v88, v90, v96);
              v106 = v98[1];
              v107 = v104;
              v108 = *(_QWORD *)(v106 + 128);
              if ( !v108 )
              {
                v182 = *(_QWORD *)(v106 + 104);
                v183 = *(_QWORD *)(v182 + 96);
                v184 = v183 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v183 & 1) == 0 )
                {
                  v88 = v183 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (v183 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  {
                    if ( (v183 & 2) == 0 )
                      goto LABEL_244;
                    v90 = *(_QWORD *)(v88 + 18360);
                    v185 = v182 & 0xFFFFFFFFFFFFFFFBLL;
                    if ( v90 )
                    {
                      v186 = *(_QWORD *)(v88 + 2352);
                      *(_QWORD *)(v88 + 2432) += 24LL;
                      v187 = (v186 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( *(_QWORD *)(v88 + 2360) >= v187 + 24 && v186 )
                      {
                        *(_QWORD *)(v88 + 2352) = v187 + 24;
                      }
                      else
                      {
                        v292 = v90;
                        v187 = sub_986170(v88 + 2352, 24, 24, 3, v90, v105);
                        v90 = v292;
                      }
                      *(_QWORD *)v187 = v90;
                      *(_DWORD *)(v187 + 8) = 0;
                      *(_QWORD *)(v187 + 16) = v182;
                      v185 = v187 | 4;
                    }
                    v184 = v185 & 0xFFFFFFFFFFFFFFFELL;
                    v183 = v184 | 1;
                    *(_QWORD *)(v182 + 96) = v184 | 1;
                  }
                }
                if ( v184 )
                {
                  if ( (v184 & 4) != 0 )
                  {
                    v188 = (_DWORD *)(v183 & 0xFFFFFFFFFFFFFFF8LL);
                    if ( v188 )
                    {
                      v189 = *(_QWORD *)v188;
                      v190 = *(_DWORD *)(*(_QWORD *)v188 + 12LL);
                      if ( v188[2] != v190 )
                      {
                        v188[2] = v190;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v189 + 152LL))(v189, v182);
                      }
                    }
                  }
                }
                v108 = *(_QWORD *)(v106 + 128);
                if ( !v108 )
                  goto LABEL_244;
              }
              v109 = *(_QWORD *)(v108 + 88);
              LOBYTE(v88) = v109 == 0;
              LOBYTE(v292) = (v109 == 0) | (*(_BYTE *)(v106 + 28) >> 7);
              if ( (_BYTE)v292 || (*(_BYTE *)(v109 + 74) & 1) == 0 )
                goto LABEL_244;
              v110 = sub_EDE580(v97[31], (char *)v106, v109, v88, v90, v105);
              v114 = v107[16];
              v115 = v110;
              if ( v114 )
                goto LABEL_119;
              v96 = v107[13];
              v196 = *(_QWORD *)(v96 + 96);
              v111 = v196 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v196 & 1) == 0 )
              {
                v112 = v196 & 0xFFFFFFFFFFFFFFFCLL;
                if ( (v196 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  if ( (v196 & 2) == 0 )
                    goto LABEL_120;
                  v113 = *(_QWORD *)(v112 + 18360);
                  v197 = v96 & 0xFFFFFFFFFFFFFFFBLL;
                  if ( v113 )
                  {
                    v198 = *(_QWORD *)(v112 + 2352);
                    *(_QWORD *)(v112 + 2432) += 24LL;
                    v199 = (v198 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( *(_QWORD *)(v112 + 2360) >= v199 + 24 && v198 )
                    {
                      *(_QWORD *)(v112 + 2352) = v199 + 24;
                    }
                    else
                    {
                      v302 = v113;
                      v301 = v96;
                      v199 = sub_986170(v112 + 2352, 24, 24, 3, v113, v96);
                      v113 = v302;
                      v96 = v301;
                    }
                    *(_QWORD *)v199 = v113;
                    *(_DWORD *)(v199 + 8) = 0;
                    *(_QWORD *)(v199 + 16) = v96;
                    v197 = v199 | 4;
                  }
                  v111 = v197 & 0xFFFFFFFFFFFFFFFELL;
                  v196 = v111 | 1;
                  *(_QWORD *)(v96 + 96) = v111 | 1;
                }
              }
              if ( v111 )
              {
                v111 &= 4u;
                if ( (_DWORD)v111 )
                {
                  v200 = (_DWORD *)(v196 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v200 )
                  {
                    v201 = *(_QWORD *)v200;
                    v111 = *(unsigned int *)(*(_QWORD *)v200 + 12LL);
                    if ( v200[2] != (_DWORD)v111 )
                    {
                      v200[2] = v111;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v201 + 152LL))(v201, v96);
                    }
                  }
                }
              }
              if ( v107[16] )
              {
                v114 = v107[16];
LABEL_119:
                v114 = *(_QWORD *)(v114 + 88);
              }
LABEL_120:
              v116 = v115[9];
              v95 = *(unsigned int *)(v116 + 80);
              v117 = v116 + 64;
              if ( !(_DWORD)v95 )
                goto LABEL_121;
              v96 = *(_QWORD *)(v116 + 64);
              v90 = ((_DWORD)v95 - 1) & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4));
              v102 = (__int64 *)(v96 + 16 * v90);
              v88 = *v102;
              if ( v114 != *v102 )
              {
                v230 = 1;
                v111 = 0;
                if ( v88 == -4096 )
                  goto LABEL_306;
                while ( 1 )
                {
                  if ( !v111 && v88 == -8192 )
                    v111 = (unsigned __int64)v102;
                  v90 = ((_DWORD)v95 - 1) & (unsigned int)(v230 + v90);
                  LODWORD(v301) = v230 + 1;
                  v102 = (__int64 *)(v96 + 16LL * (unsigned int)v90);
                  v88 = *v102;
                  if ( v114 == *v102 )
                    goto LABEL_110;
                  if ( v88 == -4096 )
                    break;
                  v230 = v301;
                }
                if ( !v111 )
LABEL_306:
                  v111 = (unsigned __int64)v102;
                v112 = (unsigned int)(3 * v95);
                v121 = *(_DWORD *)(v116 + 72) + 1;
                v113 = (unsigned int)(4 * v121);
                if ( (unsigned int)v113 < (unsigned int)v112 )
                {
                  v88 = (unsigned int)(v95 - *(_DWORD *)(v116 + 76) - v121);
                  v90 = (unsigned int)v95 >> 3;
                  if ( (unsigned int)v88 <= (unsigned int)v90 )
                  {
                    sub_7055A0(v117, v95, v111, v88, v90, v96);
                    v231 = *(_DWORD *)(v116 + 80);
                    if ( !v231 )
                    {
LABEL_373:
                      ++*(_DWORD *)(v116 + 72);
                      BUG();
                    }
                    v232 = v231 - 1;
                    v90 = *(_QWORD *)(v116 + 64);
                    v95 = 1;
                    v88 = 0;
                    for ( i = v232 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4)); ; i = v232 & v271 )
                    {
                      v111 = v90 + 16LL * i;
                      v234 = *(_QWORD *)v111;
                      if ( v114 == *(_QWORD *)v111 )
                        break;
                      if ( v234 == -4096 )
                      {
                        v121 = *(_DWORD *)(v116 + 72) + 1;
                        if ( v88 )
                          v111 = v88;
                        goto LABEL_125;
                      }
                      if ( v234 != -8192 || v88 )
                        v111 = v88;
                      v271 = v95 + i;
                      v88 = v111;
                      v95 = (unsigned int)(v95 + 1);
                    }
LABEL_124:
                    v121 = *(_DWORD *)(v116 + 72) + 1;
                  }
LABEL_125:
                  v122 = *(_QWORD *)v111 == -4096;
                  *(_DWORD *)(v116 + 72) = v121;
                  if ( !v122 )
                    --*(_DWORD *)(v116 + 76);
                  *(_QWORD *)v111 = v114;
                  *(_QWORD *)(v111 + 8) = 0;
                  goto LABEL_111;
                }
LABEL_121:
                sub_7055A0(v117, 2 * v95, v111, v112, v113, v96);
                v118 = *(_DWORD *)(v116 + 80);
                if ( !v118 )
                  goto LABEL_373;
                v119 = v118 - 1;
                v90 = *(_QWORD *)(v116 + 64);
                v88 = 1;
                v95 = 0;
                for ( j = v119 & (((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4)); ; j = v119 & v272 )
                {
                  v111 = v90 + 16LL * j;
                  v96 = *(_QWORD *)v111;
                  if ( v114 == *(_QWORD *)v111 )
                    break;
                  if ( v96 == -4096 )
                  {
                    v121 = *(_DWORD *)(v116 + 72) + 1;
                    if ( v95 )
                      v111 = v95;
                    goto LABEL_125;
                  }
                  if ( v95 || v96 != -8192 )
                    v111 = v95;
                  v272 = v88 + j;
                  v95 = v111;
                  v88 = (unsigned int)(v88 + 1);
                }
                goto LABEL_124;
              }
LABEL_110:
              v100 += v102[1];
LABEL_111:
              v98 += 3;
              if ( v291 == v98 )
                goto LABEL_148;
              v99 = *v98;
              v101 = *(_BYTE *)(*v98 + 12) & 1;
              if ( v101 )
                goto LABEL_147;
            }
          }
LABEL_73:
          v316 = 1;
          goto LABEL_74;
        }
      }
      else if ( v321 != 498 )
      {
        v316 = sub_19179A0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 1);
        v82 = v316;
      }
      if ( v82 == 1 )
        goto LABEL_74;
      goto LABEL_86;
    }
  }
  else
  {
    v22 = a3 <= 0x90u;
    if ( a3 == 144 )
      goto LABEL_80;
  }
  if ( !v22 )
  {
    if ( a3 != 145 )
    {
      if ( a3 == 354 )
      {
        if ( (_BYTE)v12 )
        {
          v123 = v316;
        }
        else
        {
          *(_DWORD *)v311 = 3283;
          v78 = sub_16A89A0((__int64)v315, &v316, v317, v311, &v320);
          if ( v78 != 1 )
          {
            if ( *(_DWORD *)v311 )
            {
              sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, *(unsigned int *)v311, 0);
              if ( v334 )
              {
                sub_AE9DF0(&v331, 6, 2u);
              }
              else if ( v336 )
              {
                v205 = sub_168B9E0(&v327);
                v206 = (__int64)v329;
                if ( v329 )
                  v206 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
                si128.m128i_i64[0] = v206;
                v207 = sub_1587BC0(v205, si128.m128i_i64, v202, v203, v204, (__int64)&si128);
                sub_AE9DF0((unsigned __int8 **)(*v207 + 32LL * v335 + 8), 6, 2u);
              }
              si128.m128i_i64[0] = *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8);
              v151 = sub_162B6D0((__int64)&v327, si128.m128i_i64);
              v152 = sub_1605D30(v151, (__int64 *)&v317);
              sub_16AAEC0(v152, (unsigned int *)v324);
              sub_15F7200(&v327);
            }
            if ( v78 != 2 )
              goto LABEL_73;
          }
          v123 = v316;
          if ( v316 == 1 )
            goto LABEL_74;
        }
        v31 = sub_C94990(
                *(_QWORD *)(v10 + 248),
                v318,
                v319,
                v320,
                v123 & 0xFFFFFFFFFFFFFFFELL,
                (__int64)a4,
                a2,
                SHIDWORD(a8),
                a6);
LABEL_24:
        v28 = sub_16A7A90((__int64)v315, v323, v31);
        goto LABEL_25;
      }
      return sub_16B5360((_DWORD)v16, v15, v17, v18, v19, v20, a8, a9, a10);
    }
    if ( (_BYTE)v12 )
    {
LABEL_21:
      v29 = *(unsigned int *)(v10 + 1952);
      v30 = *(unsigned int *)(v10 + 1956);
      if ( *(_QWORD *)(v10 + 1944) == __PAIR64__(v30, v29) )
      {
        v30 = 0;
        v29 = 0;
      }
      v31 = sub_C99830(
              *(_QWORD **)(v10 + 248),
              v318,
              v319,
              v320,
              v316 & 0xFFFFFFFFFFFFFFFELL,
              (__int64)ptr,
              (__int64)a4,
              (v30 << 32) | v29,
              a2,
              SHIDWORD(a8),
              a6);
      goto LABEL_24;
    }
    v131 = v321;
    v309[0] = &v315;
    if ( v321 )
    {
      v132 = v316;
      if ( v321 == 498 )
      {
        if ( v316 == 1 )
          goto LABEL_142;
      }
      else
      {
        v132 = v316 & 0xFFFFFFFFFFFFFFFELL;
        v316 = sub_1907C70(v315, v316 & 0xFFFFFFFFFFFFFFFELL);
        if ( v316 == 1 )
          goto LABEL_142;
        v321 = 0;
        LODWORD(v131) = 0;
      }
    }
    v133 = v315;
    v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v317 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v135 = *(_BYTE *)(v134 + 16);
    if ( v135 != 13 || ((*(_WORD *)(v134 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      if ( !v319 && v135 != 48 && (_DWORD)v131 != 498 )
      {
        v132 = v316 & 0xFFFFFFFFFFFFFFFELL;
        v316 = sub_19179A0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 1);
        if ( v316 == 1 )
          goto LABEL_142;
        v133 = v315;
      }
      v132 = (unsigned __int64)&v316;
      LODWORD(v307) = 3283;
      v150 = sub_16AC3B0(
               (__int64)v133,
               &v316,
               v317,
               3,
               *(__int64 *)v324,
               *(int *)&v324[8],
               a7,
               (int *)&v307,
               &v320,
               (__int64)ptr,
               0);
      if ( v150 != 1 )
      {
        v132 = (unsigned int)v307;
        if ( (_DWORD)v307 )
        {
          if ( v316 == 1 )
            goto LABEL_142;
          if ( *(_QWORD *)(v315[31] + 19080) == *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8) )
          {
            LODWORD(p_si128) = v150;
            v214 = sub_16A9540(v316 & 0xFFFFFFFFFFFFFFFELL);
            sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCEFu, 0);
            v215 = *(_QWORD *)(v214 + 16);
            v216 = (int)p_si128;
            if ( v334 )
            {
              sub_AE9DF0(&v331, *(_QWORD *)(v214 + 16), 9u);
              v216 = (int)p_si128;
            }
            else if ( v336 )
            {
              LODWORD(v290) = (_DWORD)p_si128;
              v246 = (__int64 *)sub_168B9E0(&v327);
              v250 = (int)p_si128;
              p_si128 = v246;
              v251 = (__int64)v329;
              if ( v329 )
              {
                v251 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
                v250 = v290;
              }
              LODWORD(v291) = v250;
              v290 = (unsigned __int64)&si128;
              si128.m128i_i64[0] = v251;
              v252 = sub_1587BC0((__int64)p_si128, si128.m128i_i64, v247, v248, v249, (__int64)&si128);
              sub_AE9DF0((unsigned __int8 **)(*v252 + 32LL * v335 + 8), v215, 9u);
              v216 = (int)v291;
            }
            v290 = (unsigned __int64)&si128;
            LODWORD(p_si128) = v216;
            v217 = sub_1605D30((__int64)&v327, (__int64 *)&v317);
            v218 = sub_16AAEC0(v217, (unsigned int *)v324);
            *(__m128i *)v311 = _mm_loadu_si128((const __m128i *)(v214 + 40));
            v219 = sub_E90530((__int64 *)v311);
            v220 = (int)p_si128;
            v221 = (__int64 *)&si128;
            v222 = HIDWORD(v219);
            v223 = 0;
            if ( *(_QWORD *)v311 )
            {
              si128 = _mm_load_si128((const __m128i *)v311);
              v224 = *(_QWORD *)(*(_QWORD *)v311 + 8LL) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v224 )
              {
                p_si128 = (__int64 *)si128.m128i_i64[1];
                si128 = (__m128i)_mm_loadh_ps((const double *)&p_si128);
                while ( (*(_QWORD *)(v224 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  LOBYTE(v12) = 1;
                  v224 = *(_QWORD *)(v224 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                }
                if ( (_BYTE)v12 )
                  si128.m128i_i64[0] = v224;
              }
              v225 = (__int64 *)v290;
              LODWORD(v290) = v220;
              p_si128 = (__int64 *)&si128;
              v223 = sub_E90530(v225);
              v220 = v290;
              v221 = p_si128;
            }
            LODWORD(p_si128) = v220;
            si128.m128i_i64[0] = __PAIR64__(v222, v223);
            sub_1587DB0(v218, v221);
            sub_15F7200(&v327);
            v132 = v316 & 0xFFFFFFFFFFFFFFFELL;
            sub_1BE6FF0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 0, 0);
            v150 = (int)p_si128;
          }
          else
          {
            v288 = v150;
            sub_16ADB50(
              (__int64)v315,
              v307,
              1,
              *(__int64 *)v324,
              *(unsigned int *)&v324[8],
              v316 & 0xFFFFFFFFFFFFFFFELL,
              a7,
              v317,
              0);
            v131 = v281;
            v150 = v288;
          }
        }
        if ( v150 != 2 )
        {
          v316 = 1;
          goto LABEL_142;
        }
      }
      v170 = v315;
      if ( v320 == 1 )
      {
        v132 = v316 & 0xFFFFFFFFFFFFFFFELL;
        sub_16D1370(
          v315,
          v316 & 0xFFFFFFFFFFFFFFFELL,
          v317,
          ((unsigned __int64)*(unsigned int *)&v324[8] << 32) | *(unsigned int *)v324);
        v170 = v315;
      }
      if ( (*(_BYTE *)(v170[29] + 107) & 0x14) != 0 )
      {
        v132 = 3;
        sub_16A7710((__int64)&v315, 3, 0);
      }
      goto LABEL_142;
    }
    v320 = 24;
    if ( (_DWORD)v131 == 498 )
    {
      v321 = 0;
      sub_1BE7810((_DWORD)v315, (unsigned int)&v316, 0, 1, *(_DWORD *)v324, v317, 3311);
      v132 = v316;
      v19 = v280;
      if ( v316 == 1 )
        goto LABEL_142;
      v133 = v315;
    }
    else
    {
      v132 = v316;
    }
    v132 &= ~1uLL;
    v316 = sub_19A6720(v133, v132);
LABEL_142:
    sub_16A7650((__int64 *)v309, v132, v131, v18, v19);
    if ( v316 == 1 )
      goto LABEL_74;
    sub_16C73C0(v10, *v13, a5);
    goto LABEL_21;
  }
  if ( a3 != 130 )
  {
    if ( a3 == 132 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 52LL) & 1) != 0 )
      {
        sub_168B9F0((__int64)&v327, (__int64 *)(v10 + 8), a2, 0x32u, 0);
        if ( v334 )
        {
          sub_AE9DF0(&v331, (__int64)"dynamic_cast", 1u);
        }
        else if ( v336 )
        {
          v173 = sub_168B9E0(&v327);
          v176 = (__int64)v329;
          if ( v329 )
            v176 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
          si128.m128i_i64[0] = v176;
          v177 = sub_1587BC0(v173, si128.m128i_i64, v171, v172, v174, v175);
          sub_AE9DF0((unsigned __int8 **)(*v177 + 32LL * v335 + 8), (__int64)"dynamic_cast", 1u);
        }
        v28 = 1;
        sub_15F7200(&v327);
        goto LABEL_25;
      }
      v33 = v319;
      v34 = v316;
      if ( (_BYTE)v12 )
      {
LABEL_67:
        v31 = sub_C99680(
                *(_QWORD **)(v10 + 248),
                v318,
                v33,
                v320,
                v34 & 0xFFFFFFFFFFFFFFFELL,
                (__int64)ptr,
                (__int64)a4,
                a2,
                SHIDWORD(a8),
                a6);
        goto LABEL_24;
      }
      v305 = &v315;
      if ( v319 )
      {
        v35 = v321;
        if ( v321 )
        {
          v15 = v316 & 0xFFFFFFFFFFFFFFFELL;
          v316 = sub_1907C70(v315, v316 & 0xFFFFFFFFFFFFFFFELL);
          v34 = v316;
        }
      }
      else
      {
        v15 = v316 & 0xFFFFFFFFFFFFFFFELL;
        v316 = sub_19179A0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 1);
        v34 = v316;
      }
      if ( v34 == 1 )
        goto LABEL_194;
      v306 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v36 = *(_QWORD *)&byte_8[v317 & 0xFFFFFFFFFFFFFFF0LL];
      v307 = 0;
      v37 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
      v38 = *v37;
      if ( *(_BYTE *)(*v37 + 16) == 42 || (v38 = sub_16A7B30(*v37, v15, v33, v35)) != 0 )
      {
        v39 = 0;
        v307 = *(_QWORD *)(v38 + 32);
      }
      else
      {
        v168 = *v37;
        if ( (unsigned int)*(unsigned __int8 *)(*v37 + 16) - 43 > 1 )
        {
          v168 = sub_16A7B60(*v37, v15, v166, v35);
          if ( !v168 )
          {
            sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCDEu, 0);
            v155 = sub_1605D30((__int64)&v327, (__int64 *)&v317);
            goto LABEL_193;
          }
        }
        v286 = v168;
        v169 = sub_9B4870(v168, v15, v166, v35, v167);
        v39 = v286;
        v307 = v169;
      }
      v40 = v315;
      v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v42 = *(_BYTE *)(v41 + 16);
      if ( v42 == 48 )
      {
        v285 = v39;
        v15 = *(unsigned int *)v324;
        LODWORD(v328) = 3277;
        v327 = off_2BC64B0;
        v329 = (void **)v325;
        if ( (unsigned __int8)sub_1E63C20(v315, *(unsigned int *)v324, v307, 1, &v327) )
        {
LABEL_207:
          v316 = 1;
          goto LABEL_194;
        }
        v40 = v315;
        v39 = v285;
      }
      else
      {
        if ( v42 != 13 || ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCDBu, 0);
          si128.m128i_i64[0] = sub_6D5440(&v307);
          v155 = sub_162B6D0((__int64)&v327, si128.m128i_i64);
LABEL_193:
          sub_15884C0(v155, v325);
          sub_15F7200(&v327);
          v316 = 1;
LABEL_194:
          v156 = (unsigned __int64)v305[1];
          if ( v156 != 1 )
          {
            v157 = *((_DWORD *)v305 + 25);
            v158 = *v305;
            v159 = *(_QWORD *)((v156 & 0xFFFFFFFFFFFFFFFELL) + 8);
            v160 = (unsigned __int64)v305[3];
            v161 = *(_QWORD *)(v159 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v161 + 16) == 42 )
            {
              if ( (unsigned __int8)sub_F6A690(
                                      *(_QWORD *)(*(_QWORD *)(v161 + 32) & 0xFFFFFFFFFFFFFFF0LL),
                                      21,
                                      v159,
                                      v35,
                                      v34) )
              {
                v165 = v160 & 0xFFFFFFFFFFFFFFF0LL;
                if ( *(_BYTE *)(*(_QWORD *)v165 + 16LL) == 42
                  && !(unsigned __int8)sub_F6A690(
                                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v165 + 32LL) & 0xFFFFFFFFFFFFFFF0LL),
                                         21,
                                         v162,
                                         v163,
                                         v164) )
                {
                  sub_168B9F0((__int64)&v327, v158 + 1, v157, 0x1BDFu, 0);
                  sub_15F7200(&v327);
                }
              }
            }
          }
LABEL_65:
          v34 = v316;
          if ( v316 == 1 )
            goto LABEL_74;
          LOBYTE(v33) = v319;
          goto LABEL_67;
        }
        v41 = 0;
      }
      v43 = *(_QWORD *)&byte_8[v306 & 0xFFFFFFFFFFFFFFF0LL];
      v309[0] = nullptr;
      v44 = v43 | v306;
      v45 = v43 & 0xFFFFFFFFFFFFFFF8LL;
      v46 = (void *)(v45 | v44 & 7);
      v47 = (__int64 *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v38 )
      {
        v48 = *v47;
        if ( *(_BYTE *)(*v47 + 16) != 42 )
        {
          v48 = sub_16A7B30(*v47, v15, v45, v35);
          if ( !v48 )
          {
            sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCDDu, 0);
            v228 = sub_1605D30((__int64)&v327, (__int64 *)&v306);
            v178 = sub_1605D30(v228, (__int64 *)&v317);
            si128.m128i_i64[0] = sub_EEC8C0(v316 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v317, a7);
            goto LABEL_217;
          }
          v40 = v315;
        }
        v49 = *(_QWORD *)(v48 + 32);
        v50 = *(_DWORD *)v324;
        v309[0] = (void *)v49;
        v47 = (__int64 *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v179 = (*(_BYTE *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 1) >> 1) & 3;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 43 )
        {
          v50 = *(_DWORD *)v324;
          if ( v179 != 1 )
          {
            sub_168B9F0((__int64)&v327, v40 + 1, *(unsigned int *)v324, 0xCD6u, 0);
            if ( v334 )
            {
              sub_AE9DF0(&v331, 3, 2u);
            }
            else if ( v336 )
            {
              v256 = sub_168B9E0(&v327);
              v257 = (__int64)v329;
              if ( v329 )
                v257 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
              si128.m128i_i64[0] = v257;
              v258 = sub_1587BC0(v256, si128.m128i_i64, v253, v254, v255, (__int64)&si128);
              sub_AE9DF0((unsigned __int8 **)(*v258 + 32LL * v335 + 8), 3, 2u);
            }
            v226 = sub_1605D30((__int64)&v327, (__int64 *)&v306);
            v227 = sub_1605D30(v226, (__int64 *)&v317);
            sub_16AAEC0(v227, (unsigned int *)v324);
            sub_15F7200(&v327);
            v40 = v315;
            v50 = *(_DWORD *)v324;
          }
          v309[0] = v46;
        }
        else
        {
          if ( !v179 )
          {
            v229 = sub_1A0BDC0(v40, v46, v316 & 0xFFFFFFFFFFFFFFFELL, 0);
            v40 = v315;
            v316 = v229;
          }
          v309[0] = v46;
          v50 = *(_DWORD *)v324;
        }
      }
      v51 = *(_QWORD *)(*(_QWORD *)(*v47 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v51 + 16) == 48 )
      {
        LODWORD(v328) = 3277;
        v329 = (void **)&si128;
        si128.m128i_i64[0] = v316 & 0xFFFFFFFFFFFFFFFELL;
        v327 = off_2BC64D8;
        if ( !(unsigned __int8)sub_1E63C20(v40, v50, v309[0], 1, &v327) )
        {
          v52 = (__int64)v309[0];
          if ( !sub_16A8D90(&v307, (__int64)v309[0], v315[31], v35, v34) )
          {
            v235 = v315 + 1;
            sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCD5u, 0);
            if ( v334 )
            {
              sub_AE9DF0(&v331, 3, 2u);
            }
            else if ( v336 )
            {
              v261 = sub_168B9E0(&v327);
              v263 = (__int64)v329;
              if ( v329 )
                v263 = (*((__int64 (__fastcall **)(void **, __int64 *, void *, __int64, __int64, __m128i *))*v329 + 4))(
                         v329,
                         v235,
                         *v329,
                         v260,
                         v262,
                         &si128);
              si128.m128i_i64[0] = v263;
              v264 = sub_1587BC0(v261, si128.m128i_i64, v259, v260, v262, (__int64)&si128);
              sub_AE9DF0((unsigned __int8 **)(*v264 + 32LL * v335 + 8), 3, 2u);
            }
            v236 = sub_1605D30((__int64)&v327, (__int64 *)&v306);
            v237 = sub_1605D30(v236, (__int64 *)&v317);
            sub_16AAEC0(v237, (unsigned int *)v324);
            sub_15F7200(&v327);
            v316 = 1;
            goto LABEL_194;
          }
          if ( v51 == v41 )
          {
            v320 = 5;
            goto LABEL_194;
          }
          if ( v41
            && (v52 = *(unsigned int *)v324, (unsigned __int8)sub_183BD10(v315, *(unsigned int *)v324, v309[0], v307)) )
          {
            if ( !(unsigned __int8)sub_1851070(
                                     (_DWORD)v315,
                                     v309[0],
                                     v307,
                                     *(_DWORD *)v324,
                                     *(_DWORD *)v324,
                                     (unsigned int)ptr,
                                     0) )
            {
              v320 = 7;
              goto LABEL_194;
            }
          }
          else
          {
            v54 = sub_F60F10(v51, v52, v53, v35, v34, (__int64)&si128);
            v59 = sub_B7E870((__int64)v54, v52, v55, v56, v57, v58);
            v60 = v59[13];
            v61 = v59;
            sub_7052B0((__int64 *)(v60 + 96), v60, v62, v63, v64, v65);
            v68 = &si128;
            if ( (*(_BYTE *)(v61[16] + 1LL) & 4) == 0 )
            {
              sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0xCDCu, 0);
              *(_QWORD *)v311 = sub_6D5440(v309);
              v238 = sub_162B6D0((__int64)&v327, (__int64 *)v311);
              si128.m128i_i64[0] = sub_EEC8C0(v316 & 0xFFFFFFFFFFFFFFFELL, (__int64)v311, a7);
              v60 = (__int64)&si128;
              sub_1587DB0(v238, si128.m128i_i64);
              sub_15F7200(&v327);
              v68 = &si128;
              v316 = 1;
            }
            if ( (*(_BYTE *)(v315[29] + 14) & 8) != 0
              || (v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                  *(_BYTE *)(v69 + 16) == 13)
              && (v66 = *(unsigned __int16 *)(v69 + 18),
                  LOWORD(v66) = ((unsigned __int16)v66 >> 3) & 0x1FF,
                  (_WORD)v66 == 435) )
            {
              v70 = *(_BYTE *)(v315[29] + 14) & 0x10;
              if ( (*(_BYTE *)(v315[29] + 14) & 0x10) == 0 )
              {
                v71 = ((*(_BYTE *)(*(_QWORD *)(v315[33] + 40) + 40LL) >> 1) & 3) == 1;
                if ( *(_DWORD *)(*(_QWORD *)(v315[31] + 17448) + 340LL) == 10
                  || (v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v307 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL),
                      *(_BYTE *)(v72 + 16) != 13)
                  || (v70 = *(unsigned __int16 *)(v72 + 18),
                      LOWORD(v70) = ((unsigned __int16)v70 >> 3) & 0x1FF,
                      (_WORD)v70 != 435) )
                {
                  v60 = (__int64)(v315 + 1);
                  sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0x1BD9u, 0);
                  if ( v334 )
                  {
                    v60 = v71;
                    sub_AE9DF0(&v331, v71, 2u);
                  }
                  else if ( v336 )
                  {
                    v268 = sub_168B9E0(&v327);
                    v269 = (__int64)v329;
                    if ( v329 )
                      v269 = (*((__int64 (__fastcall **)(void **, __int64, void *, __int64, __int64, __m128i *))*v329 + 4))(
                               v329,
                               v60,
                               *v329,
                               v266,
                               v267,
                               &si128);
                    si128.m128i_i64[0] = v269;
                    v270 = sub_1587BC0(v268, si128.m128i_i64, v265, v266, v267, (__int64)&si128);
                    v60 = v71;
                    sub_AE9DF0((unsigned __int8 **)(*v270 + 32LL * v335 + 8), v71, 2u);
                  }
                  sub_15F7200(&v327);
                }
              }
              if ( v41 )
              {
                v73 = sub_F63270(v41, v60, v70, v66, v67, (__int64)v68);
                if ( sub_B9CEB0((__int64)v73, v60, v74, v75, v76, v77) )
                {
                  v60 = *(unsigned int *)v324;
                  sub_1884910(v315, *(unsigned int *)v324, v73, 0);
                }
              }
              v320 = 9;
              sub_16A7650((__int64 *)&v305, v60, v70, v66, v67);
              goto LABEL_65;
            }
            sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, 0x10AFu, 0);
            sub_15F7200(&v327);
          }
        }
        goto LABEL_207;
      }
      sub_168B9F0((__int64)&v327, v40 + 1, v50, 0xCDBu, 0);
      *(_QWORD *)v311 = sub_6D5440(v309);
      v178 = sub_162B6D0((__int64)&v327, (__int64 *)v311);
      si128.m128i_i64[0] = sub_EEC8C0(v316 & 0xFFFFFFFFFFFFFFFELL, (__int64)v311, a7);
LABEL_217:
      sub_1587DB0(v178, si128.m128i_i64);
      sub_15F7200(&v327);
      v316 = 1;
      goto LABEL_194;
    }
    return sub_16B5360((_DWORD)v16, v15, v17, v18, v19, v20, a8, a9, a10);
  }
  v23 = v319;
  v24 = v316;
  if ( !(_BYTE)v12 )
  {
    *(_QWORD *)v311 = &v315;
    if ( v319 )
    {
      v25 = v321;
      if ( v321 )
      {
        v15 = v316 & 0xFFFFFFFFFFFFFFFELL;
        v316 = sub_1907C70(v315, v316 & 0xFFFFFFFFFFFFFFFELL);
        v24 = v316;
      }
    }
    else
    {
      v15 = v316 & 0xFFFFFFFFFFFFFFFELL;
      v316 = sub_19179A0(v315, v316 & 0xFFFFFFFFFFFFFFFELL, 1);
      v24 = v316;
    }
    if ( v24 != 1 )
    {
      v15 = (unsigned __int64)&v316;
      LODWORD(v309[0]) = 3283;
      v26 = sub_16A8630((__int64)v315, &v316, v317, 0, v309);
      if ( v26 != 1 )
      {
        v24 = LODWORD(v309[0]);
        if ( LODWORD(v309[0]) )
        {
          sub_168B9F0((__int64)&v327, v315 + 1, *(unsigned int *)v324, (unsigned int)v309[0], 0);
          if ( v334 )
          {
            sub_AE9DF0(&v331, 0, 2u);
          }
          else if ( v336 )
          {
            v211 = sub_168B9E0(&v327);
            v212 = (__int64)v329;
            if ( v329 )
              v212 = (*((__int64 (__fastcall **)(void **))*v329 + 4))(v329);
            si128.m128i_i64[0] = v212;
            p_si128 = (__int64 *)&si128;
            v213 = sub_1587BC0(v211, si128.m128i_i64, v208, v209, v210, (__int64)&si128);
            sub_AE9DF0((unsigned __int8 **)(*v213 + 32LL * v335 + 8), 0, 2u);
          }
          si128.m128i_i64[0] = *(_QWORD *)((v316 & 0xFFFFFFFFFFFFFFFELL) + 8);
          v153 = sub_162B6D0((__int64)&v327, si128.m128i_i64);
          v154 = sub_1605D30(v153, (__int64 *)&v317);
          v15 = (unsigned __int64)v324;
          sub_16AAEC0(v154, (unsigned int *)v324);
          sub_15F7200(&v327);
        }
        if ( v26 != 2 )
          v316 = 1;
      }
    }
    sub_16A7650((__int64 *)v311, v15, v23, v24, v25);
    if ( v316 == 1 )
      goto LABEL_74;
    sub_16C73C0(v10, *v13, a5);
    LOBYTE(v23) = v319;
    v24 = v316;
  }
  v27 = sub_C94830(*(_QWORD *)(v10 + 248), v318, v23, v24 & 0xFFFFFFFFFFFFFFFELL, (__int64)a4, a2, SHIDWORD(a8), a6);
  v28 = sub_16A7A90((__int64)v315, v323, v27);
LABEL_25:
  if ( ptr[0] != v14 + 8 )
    free(ptr[0]);
  return v28;
}
