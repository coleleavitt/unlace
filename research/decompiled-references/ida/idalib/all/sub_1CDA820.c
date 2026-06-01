__int64 __fastcall sub_1CDA820(unsigned __int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v7; // r14d
  unsigned int *v9; // rbp
  __int64 *v11; // r12
  _BYTE *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __m128i v18; // xmm1
  __m128 v19; // xmm0
  bool v20; // zf
  unsigned int v21; // edx
  unsigned int v22; // edx
  void **v23; // rax
  __int64 *v24; // rbp
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // r14d
  unsigned __int64 *v30; // rsi
  int v31; // r15d
  unsigned __int64 v32; // r13
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 v35; // rdi
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  __int64 *v38; // rbx
  __int64 *v39; // rbp
  __int64 *v40; // r12
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rcx
  _QWORD *v44; // r12
  __int64 v45; // rsi
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __m128i *v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128i v51; // xmm3
  __m128i v52; // xmm4
  unsigned int v53; // eax
  __int64 v54; // r15
  unsigned int v55; // r8d
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // r13d
  char v59; // r12
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128i *v63; // r13
  __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  unsigned int v66; // r12d
  unsigned int v67; // eax
  char v68; // al
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdi
  unsigned int v84; // r12d
  __int64 v85; // rcx
  _BYTE *v86; // rax
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rdi
  __int64 v90; // rcx
  int v91; // eax
  __int64 v92; // rax
  __m128i *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rdx
  __m128i v96; // xmm3
  __m128i v97; // xmm4
  __int64 *v98; // rbx
  char *v99; // r13
  char *v100; // rbp
  _BYTE *j; // rax
  __int64 v102; // rsi
  unsigned int v103; // ecx
  __int64 v104; // rdi
  __int64 *v105; // r12
  __int64 *v106; // rbp
  __int64 v107; // rsi
  __int64 v108; // rdi
  _QWORD *v109; // rbp
  _QWORD *v110; // r13
  _QWORD *v111; // rdi
  _QWORD *v112; // r14
  _QWORD *v113; // r12
  char *v114; // rdi
  void *v115; // rdi
  int v116; // edx
  int v117; // ecx
  size_t v118; // r14
  _BYTE *v119; // r14
  const __m128i *v120; // rcx
  unsigned __int64 v121; // rsi
  __m128i *v122; // rdx
  __m128i v123; // xmm2
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // r15
  __int64 i; // r14
  void *v130; // rdi
  char *v131; // r14
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  unsigned int v135; // eax
  __int64 v136; // rax
  void *v137; // rax
  unsigned int v138; // eax
  __int64 *v139; // rsi
  unsigned int v140; // ecx
  unsigned int v141; // edx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rdx
  __int64 *v145; // rbx
  _DWORD *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rdx
  void *v150; // rax
  __int64 v151; // r9
  char v152; // dl
  unsigned __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  unsigned int v156; // r15d
  unsigned int v157; // eax
  __int64 v158; // rsi
  __int64 v159; // rsi
  void *v160; // rax
  __int64 *v161; // rbx
  unsigned int v162; // eax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rbp
  __int64 v170; // r8
  __int64 v171; // r9
  void *v172; // rax
  _QWORD *v173; // rax
  __m128i *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  __int64 v181; // rcx
  unsigned __int64 *v182; // rax
  unsigned __int64 v183; // rdx
  unsigned __int64 v184; // rcx
  unsigned __int64 v185; // rax
  unsigned __int64 v186; // rax
  unsigned __int64 v187; // rax
  __int64 v188; // rax
  unsigned __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // rax
  unsigned __int64 *v192; // rax
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rcx
  unsigned __int64 v195; // rax
  unsigned __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __m128i *v205; // r15
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rax
  __int64 v211; // [rsp-10h] [rbp-28B8h]
  __int64 *v212; // [rsp+8h] [rbp-28A0h]
  __int64 v213; // [rsp+8h] [rbp-28A0h]
  char v214; // [rsp+10h] [rbp-2898h]
  unsigned int v215; // [rsp+10h] [rbp-2898h]
  int v216; // [rsp+10h] [rbp-2898h]
  unsigned int v217; // [rsp+10h] [rbp-2898h]
  __int64 *v218; // [rsp+20h] [rbp-2888h]
  int v219; // [rsp+20h] [rbp-2888h]
  unsigned int v220; // [rsp+20h] [rbp-2888h]
  unsigned int v221; // [rsp+20h] [rbp-2888h]
  __int64 *v222; // [rsp+28h] [rbp-2880h]
  __int64 v223; // [rsp+30h] [rbp-2878h]
  unsigned int v224; // [rsp+40h] [rbp-2868h]
  int v225; // [rsp+48h] [rbp-2860h]
  unsigned int *v226; // [rsp+58h] [rbp-2850h]
  void *v227; // [rsp+60h] [rbp-2848h]
  unsigned int v228; // [rsp+7Ch] [rbp-282Ch]
  char v229; // [rsp+87h] [rbp-2821h] BYREF
  __int64 v230; // [rsp+88h] [rbp-2820h] BYREF
  __int64 v231; // [rsp+90h] [rbp-2818h] BYREF
  __m128i *v232; // [rsp+98h] [rbp-2810h] BYREF
  __m128i v233; // [rsp+A0h] [rbp-2808h] BYREF
  __int64 v234; // [rsp+B0h] [rbp-27F8h]
  unsigned __int64 *v235; // [rsp+C0h] [rbp-27E8h] BYREF
  unsigned __int64 v236; // [rsp+C8h] [rbp-27E0h]
  __m128i v237; // [rsp+E0h] [rbp-27C8h] BYREF
  __m128i v238; // [rsp+F0h] [rbp-27B8h] BYREF
  __m128i v239; // [rsp+100h] [rbp-27A8h] BYREF
  __m128i v240; // [rsp+110h] [rbp-2798h] BYREF
  __m128i v241; // [rsp+120h] [rbp-2788h] BYREF
  __m128i v242; // [rsp+130h] [rbp-2778h] BYREF
  __m128i v243; // [rsp+140h] [rbp-2768h] BYREF
  __m128i v244; // [rsp+150h] [rbp-2758h] BYREF
  __m128i v245; // [rsp+160h] [rbp-2748h] BYREF
  void *v246; // [rsp+170h] [rbp-2738h] BYREF
  __int64 v247; // [rsp+178h] [rbp-2730h]
  _BYTE v248[64]; // [rsp+180h] [rbp-2728h] BYREF
  __int64 v249; // [rsp+1C0h] [rbp-26E8h] BYREF
  __int64 *v250; // [rsp+1C8h] [rbp-26E0h]
  __int64 v251; // [rsp+1D0h] [rbp-26D8h]
  char v252; // [rsp+1D8h] [rbp-26D0h] BYREF
  __int128 v253; // [rsp+218h] [rbp-2690h]
  __int64 v254; // [rsp+228h] [rbp-2680h]
  unsigned __int64 v255; // [rsp+230h] [rbp-2678h]
  __m128i v256; // [rsp+238h] [rbp-2670h]
  __int64 v257; // [rsp+248h] [rbp-2660h]
  __int64 v258; // [rsp+250h] [rbp-2658h]
  __int64 v259; // [rsp+258h] [rbp-2650h]
  __int64 v260; // [rsp+260h] [rbp-2648h]
  void *v261[2]; // [rsp+270h] [rbp-2638h] BYREF
  _BYTE v262[256]; // [rsp+280h] [rbp-2628h] BYREF
  __int64 v263; // [rsp+380h] [rbp-2528h]
  __int128 v264; // [rsp+390h] [rbp-2518h] BYREF
  void *v265; // [rsp+3A0h] [rbp-2508h]
  __int64 v266; // [rsp+3A8h] [rbp-2500h]
  unsigned __int8 *v267[2]; // [rsp+3B0h] [rbp-24F8h] BYREF
  _QWORD v268[2]; // [rsp+3C0h] [rbp-24E8h] BYREF
  __int128 v269; // [rsp+3D0h] [rbp-24D8h]
  __int64 v270; // [rsp+3E0h] [rbp-24C8h]
  __int64 v271; // [rsp+3E8h] [rbp-24C0h]
  char (__fastcall *v272)(__int64, __int64, __int64, unsigned int, __int64, __int64); // [rsp+3F0h] [rbp-24B8h]
  __int16 v273; // [rsp+3F8h] [rbp-24B0h]
  char v274; // [rsp+408h] [rbp-24A0h]
  unsigned int v275; // [rsp+410h] [rbp-2498h]
  char v276; // [rsp+414h] [rbp-2494h]
  void *v277; // [rsp+418h] [rbp-2490h]
  __int64 v278; // [rsp+420h] [rbp-2488h]
  _QWORD v279[4]; // [rsp+428h] [rbp-2480h] BYREF
  __int64 v280; // [rsp+448h] [rbp-2460h]
  __int64 v281; // [rsp+450h] [rbp-2458h]
  __int64 v282; // [rsp+460h] [rbp-2448h]
  __int64 v283; // [rsp+468h] [rbp-2440h]
  int v284; // [rsp+478h] [rbp-2430h]
  char v285; // [rsp+47Ch] [rbp-242Ch]
  _QWORD *v286; // [rsp+480h] [rbp-2428h]
  __int64 v287; // [rsp+488h] [rbp-2420h]
  _QWORD v288[12]; // [rsp+490h] [rbp-2418h] BYREF
  _WORD v289[52]; // [rsp+4F0h] [rbp-23B8h] BYREF
  __int64 *v290; // [rsp+558h] [rbp-2350h]
  __int64 v291; // [rsp+560h] [rbp-2348h]
  __int64 v292; // [rsp+568h] [rbp-2340h] BYREF
  void *ptr; // [rsp+590h] [rbp-2318h] BYREF
  _BYTE v294[12]; // [rsp+598h] [rbp-2310h] BYREF
  char v295; // [rsp+5A4h] [rbp-2304h]
  void *v296; // [rsp+5A8h] [rbp-2300h]
  __int64 v297; // [rsp+5B0h] [rbp-22F8h]
  _BYTE v298[16]; // [rsp+5B8h] [rbp-22F0h] BYREF
  char v299; // [rsp+5C8h] [rbp-22E0h]
  unsigned int v300; // [rsp+9A0h] [rbp-1F08h]
  char v301; // [rsp+9A4h] [rbp-1F04h]
  void *v302; // [rsp+9B0h] [rbp-1EF8h] BYREF
  __int64 v303; // [rsp+9B8h] [rbp-1EF0h]
  _BYTE v304[256]; // [rsp+9C0h] [rbp-1EE8h] BYREF
  __int64 v305; // [rsp+AC0h] [rbp-1DE8h]
  void *v306; // [rsp+1440h] [rbp-1468h]
  __int64 v307; // [rsp+1448h] [rbp-1460h]
  int v308; // [rsp+1450h] [rbp-1458h]
  char v309; // [rsp+1454h] [rbp-1454h]
  _QWORD v310[17]; // [rsp+1458h] [rbp-1450h] BYREF
  int v311; // [rsp+14E0h] [rbp-13C8h]
  __int64 v312; // [rsp+14E8h] [rbp-13C0h]
  __int64 v313; // [rsp+14F0h] [rbp-13B8h]
  void *v314; // [rsp+14F8h] [rbp-13B0h]
  __int64 v315; // [rsp+1500h] [rbp-13A8h]
  _BYTE v316[32]; // [rsp+1508h] [rbp-13A0h] BYREF
  __int64 *v317; // [rsp+1528h] [rbp-1380h]
  __int64 v318; // [rsp+1530h] [rbp-1378h]
  _QWORD v319[2]; // [rsp+1538h] [rbp-1370h] BYREF
  unsigned int v320; // [rsp+1548h] [rbp-1360h]
  int v321; // [rsp+154Ch] [rbp-135Ch]
  __int64 v322; // [rsp+1550h] [rbp-1358h]
  char v323; // [rsp+1558h] [rbp-1350h]
  unsigned int v324; // [rsp+155Ch] [rbp-134Ch]
  _BYTE v325[4864]; // [rsp+1560h] [rbp-1348h] BYREF
  int v326; // [rsp+2860h] [rbp-48h]

  v7 = a4;
  v9 = (unsigned int *)a5;
  sub_17B46E0((__int64)&v233, (__int64 *)a1, a5, a4, a5, a6, a7);
  v230 = v233.m128i_i64[0];
  if ( v233.m128i_i64[0] )
  {
    v222 = *(__int64 **)(a2 + 72);
    v11 = (__int64 *)sub_1E85170(a1, v9);
    v231 = *v11;
    if ( (v231 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v12 = *(_BYTE **)v9;
      if ( (**(_BYTE **)v9 & 7) == 1 )
      {
        sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), v9[20], 0xEB5u, 0);
        sub_17B3DD0((__int64)&v302, &v230);
        sub_15F7200(&v302);
        return 0;
      }
      if ( (**(_BYTE **)v9 & 7) != 0 )
      {
        sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), v9[20], 0xEB8u, 0);
        v91 = *(_DWORD *)(*(_QWORD *)v9 + 168LL);
        v295 = 0;
        *(_QWORD *)&v294[4] = 0;
        v296 = v298;
        v297 = 0;
        v298[0] = 0;
        v299 = 0;
        LODWORD(ptr) = v91;
        HIDWORD(ptr) = v91;
        v294[0] = 1;
        sub_1589170((__int64)&v302, &ptr);
        if ( v296 != v298 )
          operator delete(v296);
        sub_15F7200(&v302);
        v92 = *(_QWORD *)v9;
        *(_BYTE *)v92 &= 0xC0u;
        *(_QWORD *)(v92 + 168) = 0;
        v12 = *(_BYTE **)v9;
      }
      if ( (v12[3] >> 7) | v12[4] & 1 )
      {
        if ( (char)v12[3] < 0 )
          v13 = *((_DWORD *)v12 + 60);
        else
          v13 = *((_DWORD *)v12 + 65);
        sub_168B9F0(
          (__int64)&v302,
          (__int64 *)(a1 + 8),
          v13,
          (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 ? 6885 : 3758,
          0);
        v14 = *(_QWORD *)v9;
        if ( *(char *)(*(_QWORD *)v9 + 3LL) < 0 )
          v15 = *(_DWORD *)(v14 + 240);
        else
          v15 = *(_DWORD *)(v14 + 260);
        *(_QWORD *)&v294[4] = 0;
        v295 = 0;
        v296 = v298;
        v297 = 0;
        v298[0] = 0;
        v299 = 0;
        LODWORD(ptr) = v15;
        HIDWORD(ptr) = v15;
        v294[0] = 1;
        sub_1589170((__int64)&v302, &ptr);
        if ( v296 != v298 )
          operator delete(v296);
        sub_15F7200(&v302);
        v12 = *(_BYTE **)v9;
      }
      if ( (v12[4] & 0x30) != 0
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v231 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), *((_DWORD *)v12 + 68), 0xEA8u, 0);
        sub_15F7200(&v302);
      }
      if ( (v230 & 7) == 7 && !*(_DWORD *)(v230 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v9 + 160LL), 0xE25u, 0);
        LODWORD(ptr) = 0;
        sub_1587D10((__int64)&v302, (int *)&ptr);
        sub_15F7200(&v302);
        return 0;
      }
      v18 = _mm_load_si128(&v233);
      v19 = 0;
      v253 = 0;
      v228 = (a3 == 0) + 3;
      v250 = (__int64 *)&v252;
      v251 = 0x800000000LL;
      v257 = v234;
      v249 = 0;
      v254 = 0;
      v255 = a1;
      v256 = v18;
      v258 = 0;
      v259 = 0;
      v260 = 0x101010000LL;
      sub_1A395A0((__int64)&v249);
      sub_1A5D3E0(a1, (__int64)&v249, v222, (__int64)(v9 + 2), 0, 0, 0.0, *(double *)v18.m128i_i64, 0);
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v231 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        v20 = v9[14] == 7;
        v261[1] = (void *)0x800000000LL;
        v261[0] = v262;
        v263 = 0;
        if ( v20 )
        {
          v142 = *((_QWORD *)v9 + 8);
          v143 = *(_QWORD *)(v142 + 36);
          v303 = 0x800000000LL;
          v142 += 56;
          v305 = v143;
          v144 = *(unsigned int *)(v142 - 12);
          v302 = v304;
          *(_QWORD *)v294 = v144;
          ptr = (void *)v142;
          sub_1CB4530(a1, &ptr, (__int64 *)&v302);
          sub_1CB6C40((char ***)v261, (char ***)&v302);
          v263 = v305;
          if ( v302 != v304 )
            free(v302);
          v214 = 1;
        }
        else
        {
          v214 = 0;
        }
        v21 = v9[22];
        v246 = v248;
        v306 = v310;
        v314 = v316;
        v317 = v319;
        v247 = 0x800000000LL;
        v320 = v21;
        v22 = v9[20];
        v302 = v304;
        v303 = 0x1000000000LL;
        *(_QWORD *)v294 = 0x1000000000LL;
        v307 = 16;
        v308 = 0;
        v309 = 1;
        v310[16] = 0;
        v311 = 0;
        v312 = 0;
        v313 = 0;
        v315 = 0x400000000LL;
        v318 = 0;
        v319[0] = 0;
        v319[1] = 1;
        v321 = 0;
        v322 = 0;
        v323 = 0;
        v324 = 0;
        v326 = 0;
        ptr = &v294[8];
        v300 = v22;
        v301 = 0;
        v218 = &v250[(unsigned int)v251];
        if ( v218 != v250 )
        {
          LODWORD(v23) = 0;
          if ( v214 )
            v23 = v261;
          v226 = v9;
          v24 = v250;
          v225 = (int)v23;
          while ( 1 )
          {
            v32 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
            v25 = *(_BYTE *)(v32 + 28) & 0x7F;
            if ( !v214 && (unsigned int)v25 - 35 <= 3 )
            {
              v33 = sub_1D3AE30(a1, v231, *(_QWORD *)(v32 + 48), 1);
              if ( sub_1CAFE20(*(_QWORD *)(v32 + 48), v33) )
              {
                if ( sub_B77AF0(v32) )
                {
                  *(_QWORD *)&v264 = v32 | *v24 & 3;
                  sub_1743080((__int64)&v246, v264);
                }
                else
                {
                  v19 = 0;
                  v119 = v302;
                  v265 = nullptr;
                  v266 = 0;
                  v120 = (const __m128i *)&v264;
                  v272 = sub_19E7200;
                  v267[0] = nullptr;
                  v121 = (unsigned int)v303 + 1LL;
                  v268[0] = 0;
                  v268[1] = 0;
                  v122 = (__m128i *)((char *)v302 + 168 * (unsigned int)v303);
                  v269 = 0;
                  v270 = 0;
                  v271 = 0;
                  v273 &= 0xFC03u;
                  if ( v121 > HIDWORD(v303) )
                  {
                    if ( v302 > &v264 || v122 <= (__m128i *)&v264 )
                    {
                      sub_1BD93E0((__int64)&v302, v121);
                      v120 = (const __m128i *)&v264;
                      v122 = (__m128i *)((char *)v302 + 168 * (unsigned int)v303);
                    }
                    else
                    {
                      sub_1BD93E0((__int64)&v302, v121);
                      v120 = (const __m128i *)((char *)v302 + (char *)&v264 - v119);
                      v122 = (__m128i *)((char *)v302 + 168 * (unsigned int)v303);
                    }
                  }
                  v122->m128i_i64[0] = v120->m128i_i64[0];
                  v122->m128i_i64[1] = v120->m128i_i64[1];
                  v122[1].m128i_i64[0] = v120[1].m128i_i64[0];
                  v122[1].m128i_i64[1] = v120[1].m128i_i64[1];
                  v122[2].m128i_i64[0] = v120[2].m128i_i64[0];
                  v122[2].m128i_i64[1] = v120[2].m128i_i64[1];
                  v123 = _mm_loadu_si128(v120 + 3);
                  v122[4].m128i_i64[1] = 0;
                  v122[3] = v123;
                  v122[5].m128i_i64[0] = 0;
                  v122[4].m128i_i64[0] = 0;
                  v122[4].m128i_i64[0] = v120[4].m128i_i64[0];
                  v124 = v120[4].m128i_i64[1];
                  v120[4].m128i_i64[0] = 0;
                  v125 = v122[4].m128i_i64[1];
                  v122[4].m128i_i64[1] = v124;
                  v126 = v120[5].m128i_i64[0];
                  v120[4].m128i_i64[1] = v125;
                  v127 = v122[5].m128i_i64[0];
                  v122[5].m128i_i64[0] = v126;
                  v120[5].m128i_i64[0] = v127;
                  v122[5].m128i_i32[2] = v120[5].m128i_i32[2];
                  v122[5].m128i_i32[3] = v120[5].m128i_i32[3];
                  v122[6].m128i_i64[0] = v120[6].m128i_i64[0];
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 1 | v122[6].m128i_i8[8] & 0xFE;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 2 | v127 & 0xFD;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 4 | v127 & 0xFB;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 8 | v127 & 0xF7;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 0x10 | v127 & 0xEF;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 0x20 | v127 & 0xDF;
                  v122[6].m128i_i8[8] = v127;
                  LOBYTE(v127) = v120[6].m128i_i8[8] & 0x40 | v127 & 0xBF;
                  v122[6].m128i_i8[8] = v127;
                  v122[6].m128i_i8[8] = v120[6].m128i_i8[8] & 0x80 | v127 & 0x7F;
                  v122[6].m128i_i8[9] = v120[6].m128i_i8[9] & 3 | v122[6].m128i_i8[9] & 0xFC;
                  v122[6].m128i_i32[2] = v120[6].m128i_i32[2] & 0x3FC00 | v122[6].m128i_i32[2] & 0xFFFC03FF;
                  v122[6].m128i_i32[3] = v120[6].m128i_i32[3];
                  v122[7] = _mm_loadu_si128(v120 + 7);
                  v122[8] = _mm_loadu_si128(v120 + 8);
                  v122[9] = _mm_loadu_si128(v120 + 9);
                  v122[10].m128i_i64[0] = v120[10].m128i_i64[0];
                  v128 = *((_QWORD *)&v269 + 1);
                  LODWORD(v303) = v303 + 1;
                  v227 = (void *)v269;
                  for ( i = v269; v128 != i; i += 64 )
                  {
                    while ( 1 )
                    {
                      v130 = *(void **)(i + 24);
                      if ( v130 == (void *)(i + 40) )
                        break;
                      operator delete(v130);
                      i += 64;
                      if ( v128 == i )
                        goto LABEL_164;
                    }
                  }
LABEL_164:
                  if ( v227 )
                    operator delete(v227);
                  v131 = (char *)v302 + 168 * (unsigned int)v303 - 168;
                  v132 = v324;
                  *((_QWORD *)v131 + 7) = 0;
                  *((_QWORD *)v131 + 6) = &v325[v132];
                  v133 = *v24;
                  *(_QWORD *)v131 = v32;
                  *((_QWORD *)v131 + 1) = v133;
                  v131[104] |= 1u;
                  v265 = v267;
                  LOWORD(v275) = 0;
                  v264 = 0u;
                  v266 = 0x400000000LL;
                  v277 = v279;
                  v278 = 0x400000000LL;
                  v134 = *(_QWORD *)(v32 + 56);
                  if ( (v134 & 4) != 0 && *(_QWORD *)((v134 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
                  {
                    if ( (unsigned __int8)sub_17516B0(a1, v32, (__int64)&v264, v226[20], 1u, 0.0) || !(_BYTE)v275 )
                    {
                      v135 = *((_DWORD *)v131 + 26) & 0xFFFC03FE;
                      BYTE1(v135) |= 0x3Cu;
                      *((_DWORD *)v131 + 26) = v135;
                    }
                    if ( v277 != v279 )
                      free(v277);
                    if ( v265 != v267 )
                      free(v265);
                  }
                }
              }
              v25 = *(_BYTE *)(v32 + 28) & 0x7F;
            }
            if ( v25 != 71 )
              goto LABEL_37;
            v19 = 0;
            LODWORD(v265) = v300;
            v267[0] = (unsigned __int8 *)v268;
            v280 &= 0xFFFFFFFE00000000LL;
            v282 &= 0xFFFFFFFE00000000LL;
            v286 = v288;
            v287 = 0x800000000LL;
            v288[10] = v289;
            v264 = 0;
            WORD2(v265) = 0;
            v266 = 0;
            v267[1] = (unsigned __int8 *)0x400000000LL;
            v279[3] = 0;
            v281 = 0;
            v283 = 0;
            v284 = 0;
            v285 = 0;
            v288[8] = 0;
            v288[9] = 0;
            v288[11] = 0x400000000LL;
            v289[48] = 0;
            v290 = &v292;
            v291 = 0x400000000LL;
            v235 = nullptr;
            v29 = sub_1D75BD0(a1, v32, v225, v231, (unsigned int)&v235, (unsigned int)&v264, 0);
            if ( v29 )
              break;
            v30 = v235;
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
            {
              v31 = sub_178EA20(*(_QWORD *)(a1 + 664), (__int64)v235, (__int64 *)((char *)&dword_0 + 1), v26, v27, v28);
              if ( v31 != (unsigned int)sub_178E2C0(*(_QWORD *)(a1 + 664), *(_QWORD *)v226 + 32LL) )
              {
                sub_1CB6690((__int64)&ptr);
                v93 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)*(unsigned int *)v294 - 64);
                sub_1BD97A0((__int64)&v240, *(_QWORD *)(a1 + 248), 17, (__int64 *)&v264);
                v94 = *(_QWORD *)(v32 + 48);
                v95 = *v24;
                v96 = _mm_load_si128(&v241);
                v97 = _mm_load_si128(&v242);
                v243 = _mm_load_si128(&v240);
                v244 = v96;
                v245 = v97;
                v93->m128i_i64[0] = v95;
                v93->m128i_i64[1] = v94;
                v93[1] = _mm_load_si128(&v243);
                v93[2] = _mm_load_si128(&v244);
                v93[3] = _mm_load_si128(&v245);
                goto LABEL_68;
              }
              v30 = v235;
            }
            v243.m128i_i64[0] = *v24 & 3 | (unsigned __int64)v30;
            sub_1743080((__int64)&v246, v243.m128i_i64[0]);
            sub_19A2E00((__int64)&v264);
LABEL_37:
            if ( v218 == ++v24 )
            {
              v9 = v226;
              v42 = v303;
              goto LABEL_55;
            }
          }
          sub_1CB6690((__int64)&ptr);
          v48 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)*(unsigned int *)v294 - 64);
          sub_1BD97A0((__int64)&v237, *(_QWORD *)(a1 + 248), v29, (__int64 *)&v264);
          v49 = *(_QWORD *)(v32 + 48);
          v50 = *v24;
          v51 = _mm_load_si128(&v238);
          v52 = _mm_load_si128(&v239);
          v243 = _mm_load_si128(&v237);
          v244 = v51;
          v245 = v52;
          v48->m128i_i64[0] = v50;
          v48->m128i_i64[1] = v49;
          v48[1] = _mm_load_si128(&v243);
          v48[2] = _mm_load_si128(&v244);
          v48[3] = _mm_load_si128(&v245);
LABEL_68:
          sub_19A2E00((__int64)&v264);
          goto LABEL_37;
        }
        v42 = 0;
LABEL_55:
        v232 = nullptr;
        if ( !(v42 | v311 & 0x3FFFFFFF) )
        {
LABEL_56:
          sub_168B9B0((__int64)&v264, a1 + 8, 5964);
          sub_168B9B0((__int64)&v243, a1 + 8, 3751);
          sub_AE9DF0((unsigned __int8 **)&v243, v230, 9u);
          sub_168B9B0((__int64)&v235, a1 + 8, 3764);
          sub_AE9DF0((unsigned __int8 **)&v235, v230, 9u);
          v44 = (_QWORD *)sub_1D7EDC0(
                            a1,
                            (_DWORD)v246,
                            (int)v246 + 8 * (int)v247,
                            (unsigned int)&ptr,
                            v9[20],
                            (unsigned int)&v235,
                            (__int64)&v243,
                            (__int64)&v264,
                            1,
                            0);
          if ( v235 && v236 )
            sub_1580C40(v236, (unsigned __int64)v235);
          if ( v243.m128i_i64[0] && v243.m128i_i64[1] )
            sub_1580C40(v243.m128i_u64[1], v243.m128i_u64[0]);
          v45 = v264;
          if ( (_QWORD)v264 && *((_QWORD *)&v264 + 1) )
            sub_1580C40(*((unsigned __int64 *)&v264 + 1), v264);
          v46 = (unsigned int)v247;
          if ( v44 == (_QWORD *)((char *)v246 + 8 * (unsigned int)v247) )
            goto LABEL_114;
          v47 = *v44 & 0xFFFFFFFFFFFFFFF8LL;
          v232 = (__m128i *)v47;
LABEL_74:
          v54 = *(_QWORD *)(v231 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v54 + 16) == 26
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
            && (v47 = (unsigned __int64)v232,
                (v54 = sub_F63050(*(_QWORD *)(v231 & 0xFFFFFFFFFFFFFFF0LL), v45, v46, v43)) != 0) )
          {
            if ( (*(_BYTE *)(v54 + 19) & 0x1E) != 0 )
            {
              v215 = v9[22];
              v55 = *(_DWORD *)(v47 + 24);
              v56 = *(_QWORD *)(v47 + 48) & 0xFFFFFFFFFFFFFFF0LL;
              v57 = *(_QWORD *)v56;
              v58 = ((**(char **)(a1 + 232) >> 31) & 0x597) + 4176;
              if ( *(_BYTE *)(*(_QWORD *)v56 + 16LL) != 26 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
                {
                  v220 = *(_DWORD *)(v47 + 24);
                  v147 = sub_F63050(v57, v45, v46, v57);
                  v55 = v220;
                  v57 = v147;
                }
                else
                {
                  v57 = 0;
                }
              }
              v224 = v55;
              v223 = v57;
              sub_168B9B0((__int64)&v264, a1 + 8, 5966);
              sub_168B9B0((__int64)&v243, a1 + 8, v58);
              sub_AE9DF0((unsigned __int8 **)&v243, v232[3].m128i_i64[0], 8u);
              v59 = sub_18B1670(
                      a1,
                      (__int64)&v243,
                      (__int64)&v264,
                      v223,
                      v224,
                      v54,
                      *(double *)v19.m128_u64,
                      (__m128)v18,
                      v215);
              if ( v243.m128i_i64[0] && v243.m128i_i64[1] )
                sub_1580C40(v243.m128i_u64[1], v243.m128i_u64[0]);
              v45 = v264;
              if ( (_QWORD)v264 && *((_QWORD *)&v264 + 1) )
                sub_1580C40(*((unsigned __int64 *)&v264 + 1), v264);
              if ( **(char **)(a1 + 232) >= 0 && v59 )
                goto LABEL_114;
              v47 = (unsigned __int64)v232;
            }
          }
          if ( !(unsigned int)sub_B77D20(v47) )
          {
            v98 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v264, v98, v9[20], 0xEB0u, 0);
            if ( v274 )
            {
              sub_AE9DF0(v267, (__int64)v232, 0xAu);
            }
            else if ( v276 )
            {
              v169 = sub_168B9E0(&v264);
              v172 = v265;
              if ( v265 )
                v172 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v265 + 32LL))(v265);
              v243.m128i_i64[0] = (__int64)v172;
              v173 = sub_1587BC0(v169, v243.m128i_i64, v167, v168, v170, v171);
              sub_AE9DF0((unsigned __int8 **)(*v173 + 32LL * v275 + 8), (__int64)v232, 0xAu);
            }
            v243.m128i_i8[0] = (unsigned int)sub_B77D20((__int64)v232) == 2;
            sub_1588420((__int64)&v264, (unsigned __int8 *)&v243);
            sub_15F7200(&v264);
            sub_168B9F0((__int64)&v264, v98, v232[1].m128i_u32[2], 0x174Eu, 0);
            sub_15F7200(&v264);
            goto LABEL_114;
          }
          v63 = v232;
          v64 = v232[6].m128i_i64[1];
          if ( (((unsigned __int8)v64 | (unsigned __int8)(v64 >> 1)) & 1) != 0
            || (v65 = v64 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          {
            v186 = v232[5].m128i_u64[0];
            if ( ((v232[5].m128i_i8[2] & 0x40) == 0 || (v186 & 0x2000000) != 0)
              && (v186 & 0x2000000) == 0
              && ((v232[5].m128i_i8[3] & 8) != 0 || (v232[8].m128i_i8[0] & 1) == 0 && !v232[8].m128i_i64[0])
              && (v232[5].m128i_i8[3] & 0x40) == 0 )
            {
              v187 = HIDWORD(v186);
              if ( (v187 & 0x20) == 0 && (v187 & 0x40) == 0 )
              {
                v63 = v232;
                if ( !sub_B8CF80((__int64)v232, v45, v232[5].m128i_i8[3] & 0x40, v60, v61, v62) || !v232 )
                {
LABEL_93:
                  if ( (v63[1].m128i_i8[13] & 1) == 0 )
                    goto LABEL_94;
                  v182 = sub_B8C3D0((__int64)v63, v45, v69, v70, v71, v72);
                  v183 = *v182;
                  v184 = *v182 + 8LL * *((unsigned int *)v182 + 2);
                  if ( *v182 >= v184 )
                  {
                    v63 = v232;
                    v174 = v232;
                    if ( v183 == v184 )
                    {
LABEL_94:
                      v73 = *(_QWORD *)v9;
                      LOWORD(v264) = 1;
                      sub_1836B60((__int64 *)a1, (__int64)v222, v63, v73 + 32, &v264, v19, v18);
                      v74 = (__int64)v232;
                      sub_167AF90(a1, (__int64)v232, v75, v76, v77, v78, (__m128i)v19, *(double *)v18.m128i_i64);
                      v83 = (__int64)v232;
                      if ( v228 != 4 )
                        goto LABEL_95;
                      goto LABEL_221;
                    }
                    while ( *(_WORD *)(*(_QWORD *)v184 + 36LL) != 238 )
                    {
                      v184 += 8LL;
                      if ( v183 == v184 )
                        goto LABEL_94;
                    }
                  }
                  else
                  {
                    v185 = *v182;
                    while ( *(_WORD *)(*(_QWORD *)v185 + 36LL) != 238 )
                    {
                      v185 += 8LL;
                      if ( v184 == v185 )
                      {
                        v63 = v232;
                        goto LABEL_94;
                      }
                    }
                    v174 = v232;
                    v63 = v232;
                    if ( v184 == v185 )
                      goto LABEL_94;
                  }
                  if ( v228 != 3 )
                  {
                    v175 = *(_QWORD *)v9;
                    LOWORD(v264) = 1;
                    sub_1836B60((__int64 *)a1, (__int64)v222, v174, v175 + 32, &v264, v19, v18);
                    v74 = (__int64)v232;
                    sub_167AF90(a1, (__int64)v232, v176, v177, v178, v179, (__m128i)v19, *(double *)v18.m128i_i64);
LABEL_221:
                    v180 = (__int64)v232;
                    if ( (v232[1].m128i_i8[13] & 1) == 0 )
                      goto LABEL_222;
                    v192 = sub_B8C3D0((__int64)v232, v74, v79, v80, v81, v82);
                    v193 = *v192;
                    v194 = *v192 + 8LL * *((unsigned int *)v192 + 2);
                    if ( *v192 >= v194 )
                    {
                      v83 = (__int64)v232;
                      v180 = (__int64)v232;
                      if ( v193 == v194 )
                      {
LABEL_222:
                        v84 = 4;
                        sub_B77E40(v180, 4, v9[20]);
                        if ( !(unsigned __int8)sub_B7D390((__int64)v232, (__int64)&v264, 0, v181) )
                        {
                          sub_1E3D740(a1, v9[20], v232, 0, 0, 0);
LABEL_96:
                          v86 = (_BYTE *)sub_B77AF0((__int64)v232);
                          if ( v9[14] == 7 )
                          {
                            v88 = v9[20];
                            v90 = *((_QWORD *)v9 + 2) != 0;
                            if ( v86 )
                              goto LABEL_99;
                          }
                          else
                          {
                            v88 = v9[20];
                            v89 = *((_QWORD *)v9 + 2);
                            if ( v86 )
                            {
                              v90 = v89 != 0;
LABEL_99:
                              sub_1CD8AB0((__int64 *)a1, v86, v88, v90, v84, v87);
                              goto LABEL_114;
                            }
                            if ( v89 )
                            {
                              v189 = *((_QWORD *)v9 + 2);
                              while ( 1 )
                              {
                                v190 = *(_QWORD *)(v189 + 8);
                                if ( ((v190 >> 1) & 3) == 2 )
                                {
                                  v191 = *(_QWORD *)(v189 + 16);
                                  if ( v191 )
                                  {
                                    if ( *(_BYTE *)(v191 + 16) == 49 )
                                      break;
                                  }
                                }
                                v189 = v190 & 0xFFFFFFFFFFFFFFF8LL;
                                if ( (v190 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                                {
                                  sub_168B9F0((__int64)&v264, (__int64 *)(a1 + 8), v88, 0x15AFu, 0);
                                  v210 = sub_1795A40((__int64)&v264, (__int64 *)&v232);
                                  v243.m128i_i64[0] = *((_QWORD *)v9 + 1);
                                  sub_1587DB0(v210, v243.m128i_i64);
                                  sub_15F7200(&v264);
                                  v89 = *((_QWORD *)v9 + 2);
                                  LODWORD(v88) = v9[20];
                                  break;
                                }
                              }
                            }
                            LODWORD(v90) = v89 != 0;
                          }
                          v221 = v88;
                          v217 = v90;
                          v86 = sub_B77970((__int64)v232);
                          v88 = v221;
                          v90 = v217;
                          goto LABEL_99;
                        }
LABEL_196:
                        (*(void (__fastcall **)(_QWORD, __m128i *))(**(_QWORD **)(a1 + 256) + 24LL))(
                          *(_QWORD *)(a1 + 256),
                          v232);
                        goto LABEL_96;
                      }
                      while ( *(_WORD *)(*(_QWORD *)v194 + 36LL) != 197 )
                      {
                        v194 += 8LL;
                        if ( v193 == v194 )
                          goto LABEL_222;
                      }
                    }
                    else
                    {
                      v195 = *v192;
                      while ( *(_WORD *)(*(_QWORD *)v195 + 36LL) != 197 )
                      {
                        v195 += 8LL;
                        if ( v194 == v195 )
                          goto LABEL_271;
                      }
                      if ( v194 == v195 )
                      {
LABEL_271:
                        v180 = (__int64)v232;
                        goto LABEL_222;
                      }
                      v83 = (__int64)v232;
                    }
                    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) != 10 )
                    {
                      v180 = v83;
                      goto LABEL_222;
                    }
LABEL_95:
                    v84 = 3;
                    sub_B77E40(v83, 3, v9[20]);
                    if ( !(unsigned __int8)sub_B7D390((__int64)v232, (__int64)&v264, 0, v85) )
                      goto LABEL_96;
                    goto LABEL_196;
                  }
                  v196 = v174[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v174[1].m128i_i64[0] & 4) != 0 )
                    v196 = *(_QWORD *)v196;
                  if ( (*(_BYTE *)(v196 + 8) & 0x7Fu) - 59 > 2
                    || (v197 = v196 - 64, v196 == 64)
                    || (v198 = *(_QWORD *)(v196 - 24), (v198 & 7) != 0)
                    || (v199 = v198 & 0xFFFFFFFFFFFFFFF8LL) == 0
                    || (v200 = *(_QWORD *)(v199 + 16), *(_DWORD *)v200 != 8)
                    || *(_QWORD *)(v200 + 16) != 0x79617272616C6176LL )
                  {
LABEL_279:
                    LOWORD(v264) = 1;
                    sub_1836B60((__int64 *)a1, (__int64)v222, v174, *(_QWORD *)v9 + 32LL, &v264, v19, v18);
                    sub_167AF90(a1, (__int64)v232, v201, v202, v203, v204, (__m128i)v19, *(double *)v18.m128i_i64);
                    v83 = (__int64)v232;
                    goto LABEL_95;
                  }
                  if ( !sub_B8EC80(v197) )
                  {
                    v174 = v232;
                    goto LABEL_279;
                  }
LABEL_114:
                  sub_1BD6E90((__int64 *)&ptr);
                  if ( ptr != &v294[8] )
                    free(ptr);
                  sub_1BD27A0((__int64 *)&v302);
                  v99 = (char *)v314;
                  v100 = (char *)v314 + 8 * (unsigned int)v315;
                  if ( v314 != v100 )
                  {
                    for ( j = v314; ; j = v314 )
                    {
                      v102 = 0x40000000000LL;
                      v103 = (unsigned int)((v99 - j) >> 3) >> 7;
                      if ( v103 <= 0x1D )
                        v102 = 4096LL << v103;
                      v104 = *(_QWORD *)v99;
                      v99 += 8;
                      operator delete(v104, v102, 16);
                      if ( v100 == v99 )
                        break;
                    }
                  }
                  v105 = v317;
                  v106 = &v317[2 * (unsigned int)v318];
                  if ( v317 != v106 )
                  {
                    do
                    {
                      v107 = v105[1];
                      v108 = *v105;
                      v105 += 2;
                      operator delete(v108, v107, 16);
                    }
                    while ( v106 != v105 );
                    v106 = v317;
                  }
                  if ( v106 != v319 )
                    free(v106);
                  if ( v314 != v316 )
                    free(v314);
                  if ( !v309 )
                    free(v306);
                  v109 = v302;
                  v110 = (char *)v302 + 168 * (unsigned int)v303;
                  if ( v302 != v110 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v110 -= 21;
                        v111 = (_QWORD *)v110[8];
                        v112 = (_QWORD *)v110[9];
                        v113 = v111;
                        if ( v112 != v111 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v114 = (char *)v113[3];
                              if ( v114 == (char *)(v113 + 5) )
                                break;
                              operator delete(v114);
                              v113 += 8;
                              if ( v113 == v112 )
                                goto LABEL_135;
                            }
                            v113 += 8;
                          }
                          while ( v112 != v113 );
LABEL_135:
                          v111 = (_QWORD *)v110[8];
                        }
                        if ( !v111 )
                          break;
                        operator delete(v111);
                        if ( v109 == v110 )
                          goto LABEL_138;
                      }
                    }
                    while ( v109 != v110 );
LABEL_138:
                    v110 = v302;
                  }
                  if ( v110 != (_QWORD *)v304 )
                    free(v110);
                  if ( v246 != v248 )
                    free(v246);
                  v115 = v261[0];
                  if ( v261[0] == v262 )
                    goto LABEL_53;
LABEL_144:
                  free(v115);
                  goto LABEL_53;
                }
              }
            }
          }
          else
          {
            v63 = (__m128i *)v65;
          }
          LOBYTE(v264) = 0;
          v66 = sub_B77EF0((__int64)v63);
          v67 = sub_B77D20((__int64)v63);
          v68 = sub_1CBF140(a1, v9[20], v228, (__int64)v63, v67, v66, &v264);
          v45 = v211;
          if ( v68 || (_BYTE)v264 )
            goto LABEL_114;
          v63 = v232;
          goto LABEL_93;
        }
        v45 = a1;
        v53 = sub_1BF27B0((__int64)&v302, (_QWORD *)a1, v9[20], (__int64 **)&v235, *(double *)v19.m128_u64, (__m128)v18);
        v43 = v53;
        switch ( v53 )
        {
          case 1u:
            LODWORD(v43) = 0;
            v116 = 3762;
            break;
          case 0u:
LABEL_185:
            v47 = *v235;
            v232 = (__m128i *)*v235;
LABEL_73:
            if ( v47 )
              goto LABEL_74;
            goto LABEL_56;
          case 2u:
            v116 = 3751;
            break;
          default:
            v47 = (unsigned __int64)v232;
            if ( v53 != 3 )
              goto LABEL_73;
            goto LABEL_185;
        }
        v216 = v43;
        sub_168B9B0((__int64)&v264, a1 + 8, v116);
        sub_AE9DF0((unsigned __int8 **)&v264, v230, 9u);
        sub_1582CA0((__int64)&v243, (_BYTE **)&v264);
        v117 = v216;
        if ( (_QWORD)v264 && *((_QWORD *)&v264 + 1) )
        {
          sub_1580C40(*((unsigned __int64 *)&v264 + 1), v264);
          v117 = v216;
        }
        v219 = v117;
        v118 = j__strlen(&byte_22F0C30);
        LODWORD(v264) = v9[20];
        sub_1582CA0((__int64)&v264 + 8, &v243);
        sub_1C022A0(
          (__int64)&v302,
          (unsigned int *)&v264,
          (__m128 *)a1,
          v219,
          0,
          0,
          v19,
          (__m128)v18,
          &byte_22F0C30,
          v118,
          0,
          (unsigned __int8 (__fastcall *)(__int64, __int64))sub_16A7620,
          (__int64)&v229);
        if ( *((_QWORD *)&v264 + 1) && v265 )
          sub_1580C40((unsigned __int64)v265, *((unsigned __int64 *)&v264 + 1));
        if ( v243.m128i_i64[0] && v243.m128i_i64[1] )
          sub_1580C40(v243.m128i_u64[1], v243.m128i_u64[0]);
        goto LABEL_114;
      }
      if ( (_DWORD)v249 == 5 )
      {
LABEL_53:
        sub_169D230((__int64)&v249);
        return 0;
      }
      if ( (_DWORD)v249 == 2 )
      {
        v212 = v250;
        v34 = (_BYTE *)sub_16C47B0(*v250 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v34[28] & 0x7Fu) - 40 <= 6 )
        {
          v246 = v34;
          v35 = *v212;
          v213 = (__int64)v34;
          v36 = (_BYTE *)sub_16C47B0(v35 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v36[28] & 0x7F) != 0x45 )
          {
            v261[0] = nullptr;
            if ( (*(_BYTE *)(v213 + 28) & 0x7F) == 0x2B )
              goto LABEL_51;
            v37 = *(_QWORD *)(v213 + 16) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v213 + 16) & 4) != 0 )
              v37 = *(_QWORD *)v37;
            if ( ((*(_BYTE *)(v37 + 8) + 70) & 0x7Fu) > 3 )
              goto LABEL_51;
            if ( !sub_B73FE0(v213) )
            {
              v145 = (__int64 *)(a1 + 8);
              sub_168B9F0((__int64)&v302, v145, v9[20], 0xEA9u, 0);
              sub_17B9080((__int64)&v302, (__int64 *)&v246);
              sub_15F7200(&v302);
              v146 = v246;
              goto LABEL_189;
            }
LABEL_201:
            v153 = *((_QWORD *)v9 + 2);
            if ( v153 )
            {
              while ( 1 )
              {
                if ( ((*(__int64 *)(v153 + 8) >> 1) & 3) == 2 )
                {
                  v154 = *(_QWORD *)(v153 + 16);
                  if ( v154 )
                  {
                    if ( *(_BYTE *)(v154 + 16) == 49 )
                      break;
                  }
                }
                v153 = *(_QWORD *)(v153 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v153 )
                  goto LABEL_247;
              }
            }
            else
            {
LABEL_247:
              v155 = v9[20];
              if ( v261[0] )
              {
LABEL_208:
                sub_1CD8AB0((__int64 *)a1, v246, v155, 1, v228, v151);
                v156 = sub_B740B0((__int64)v246);
                v157 = sub_B73F60((__int64)v246);
                v158 = v9[20];
                v240.m128i_i8[0] = 0;
                if ( (unsigned __int8)sub_1CBF140(a1, v158, v228, (__int64)v246, v156, v157, &v240) )
                  goto LABEL_53;
                if ( v240.m128i_i8[0] )
                {
LABEL_210:
                  if ( v261[0] )
                  {
                    v159 = *(_QWORD *)&byte_8[*((_QWORD *)v246 + 6) & 0xFFFFFFFFFFFFFFF0LL];
                    if ( (v159 & 0xFFFFFFFFFFFFFFF8LL
                        | ((unsigned __int8)v159 | (unsigned __int8)*((_QWORD *)v246 + 6)) & 7) != (*(_QWORD *)&byte_8[v231 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                                                                                  | ((unsigned __int8)*(_QWORD *)&byte_8[v231 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v231) & 7) )
                    {
                      v160 = (void *)*v11;
                      v161 = (__int64 *)(a1 + 8);
                      *(_QWORD *)v294 = v11 + 1;
                      ptr = v160;
                      v162 = sub_F6CCB0((__int64 *)&ptr, (__m128)0LL);
                      sub_168B9F0((__int64)&v302, v161, v162, 0xFE3u, 0);
                      v243.m128i_i32[0] = 0;
                      v163 = sub_1587D10((__int64)&v302, v243.m128i_i32);
                      v164 = sub_1CBD220(v163, (__int64 *)v261);
                      v165 = sub_1605D30(v164, &v231);
                      *(_QWORD *)&v264 = *((_QWORD *)v246 + 6);
                      sub_162B6D0(v165, (__int64 *)&v264);
                      sub_15F7200(&v302);
                      sub_168B9F0((__int64)&v302, v161, *((_DWORD *)v261[0] + 6), 0x18F6u, 0);
                      LODWORD(v264) = 2;
                      v166 = sub_1587D10((__int64)&v302, (int *)&v264);
                      ptr = *((void **)v261[0] + 5);
                      sub_15894B0(v166, (__int64 *)&ptr);
                      sub_15F7200(&v302);
                    }
                  }
                  goto LABEL_53;
                }
                sub_B74430((__int64)v246, v228, v9[20]);
                v205 = (__m128i *)v246;
                if ( (*((_BYTE *)v246 + 28) & 0x7F) == 0x2A )
                {
                  sub_BC14E0((__int64)v246, a3);
                  sub_BC5770((__int64)v205, v7);
                  v205 = (__m128i *)v246;
                }
                LOWORD(v302) = 1;
                sub_1836B60((__int64 *)a1, (__int64)v222, v205, *(_QWORD *)v9 + 32LL, &v302, (__m128)0LL, v18);
                if ( v261[0] )
                {
                  sub_167AF90(a1, (__int64)v246, v206, v207, v208, v209, (__m128i)0LL, *(double *)v18.m128i_i64);
                  if ( a3 != 0 )
                    goto LABEL_210;
                }
                else if ( a3 != 0 )
                {
                  goto LABEL_53;
                }
                sub_1E3BC50(a1, v9[20], v246, 0, 0, 0);
                goto LABEL_210;
              }
              sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), v155, 0x15AFu, 0);
              v188 = sub_17B9080((__int64)&v302, (__int64 *)&v246);
              ptr = *((void **)v9 + 1);
              sub_1587DB0(v188, (__int64 *)&ptr);
              sub_15F7200(&v302);
            }
            v155 = v9[20];
            goto LABEL_208;
          }
LABEL_177:
          v261[0] = v36;
          v136 = sub_F57E80(*(_QWORD *)(v231 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v136 && (*(_QWORD *)(v136 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v136 + 17) & 4) == 0 )
          {
            v137 = (void *)*v11;
            *(_QWORD *)v294 = v11 + 1;
            ptr = v137;
            v138 = sub_F6CCB0((__int64 *)&ptr, (__m128)0LL);
            v139 = (__int64 *)(a1 + 8);
            v140 = 3267;
            v141 = v138;
LABEL_181:
            sub_168B9F0((__int64)&v302, v139, v141, v140, 0);
            sub_15F7200(&v302);
            goto LABEL_53;
          }
          if ( v9[14] != 7 )
          {
            v145 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v302, v145, v9[20], 0xEBDu, 0);
            sub_1CBD220((__int64)&v302, (__int64 *)v261);
            sub_15F7200(&v302);
            v146 = v261[0];
LABEL_189:
            v141 = v146[6];
            v140 = 5966;
            v139 = v145;
            goto LABEL_181;
          }
          v148 = *((_QWORD *)v9 + 8);
          v149 = *(_QWORD *)(v148 + 36);
          v303 = 0x800000000LL;
          v148 += 56;
          v302 = v304;
          v305 = v149;
          *(_QWORD *)v294 = *(unsigned int *)(v148 - 12);
          ptr = (void *)v148;
          sub_1CB4530(a1, &ptr, (__int64 *)&v302);
          v150 = sub_1CD6960(a1, (char *)v261[0], v9[20], (__int64)&v302, 0.0, (__m128)v18);
          if ( !v152 )
          {
            if ( v150 )
            {
              v246 = v150;
              if ( v302 != v304 )
                free(v302);
              goto LABEL_201;
            }
            sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v9[20], 0xEABu, 0);
            sub_15F7200(&ptr);
          }
          v115 = v302;
          if ( v302 == v304 )
            goto LABEL_53;
          goto LABEL_144;
        }
        v246 = nullptr;
        v36 = (_BYTE *)sub_16C47B0(*v212 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v36[28] & 0x7F) == 0x45 )
          goto LABEL_177;
        v261[0] = nullptr;
      }
      else
      {
        v246 = nullptr;
        v261[0] = nullptr;
      }
LABEL_51:
      v38 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)&v302, v38, v9[20], 0xEB4u, 0);
      sub_17B3DD0((__int64)&v302, &v230);
      sub_15F7200(&v302);
      v39 = v250;
      v40 = &v250[(unsigned int)v251];
      if ( v40 != v250 )
      {
        do
        {
          v41 = *v39++;
          sub_168B9F0((__int64)&v302, v38, *(_DWORD *)((v41 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0x174Eu, 0);
          sub_15F7200(&v302);
        }
        while ( v40 != v39 );
      }
      goto LABEL_53;
    }
  }
  else if ( (v9[180] & 1) == 0 && ((**(_DWORD **)v9 >> 12) & 0x7F) != 0x45 )
  {
    sub_168B9F0((__int64)&v302, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)v9 + 160LL), 0xEB7u, 0);
    *(_QWORD *)&v264 = *(_QWORD *)(*(_QWORD *)v9 + 160LL);
    v16 = sub_1587DB0((__int64)&v302, (__int64 *)&v264);
    ptr = *((void **)v9 + 11);
    sub_1587DB0(v16, (__int64 *)&ptr);
    sub_15F7200(&v302);
  }
  return 0;
}
