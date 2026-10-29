__int64 __fastcall sub_9D5820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r12
  char *v9; // r15
  __int64 v10; // r15
  char *v11; // r12
  int v12; // eax
  __int64 v13; // r14
  int v14; // ebp
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  _QWORD *v21; // rdi
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rbp
  __int64 v26; // r13
  unsigned __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rdi
  unsigned int v32; // ecx
  __int64 *v33; // rsi
  __int64 v34; // r10
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 *v37; // r15
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 *v40; // r14
  __int64 v41; // rbx
  __int64 v42; // rax
  unsigned __int64 *v43; // rax
  unsigned __int64 *v44; // rbx
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 *v47; // rcx
  unsigned __int64 *v48; // rbp
  unsigned __int64 *v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  void **v52; // r13
  void **v53; // rbx
  void *v54; // rax
  char v55; // al
  int *v56; // rsi
  _QWORD *v57; // rax
  __int64 i; // rbx
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  int *v61; // rax
  unsigned __int64 v62; // rbp
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rbx
  unsigned int v67; // edx
  __int64 *v68; // rsi
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 *v72; // r12
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  unsigned __int64 *v75; // rdx
  unsigned __int64 *v76; // rax
  unsigned __int64 *v77; // rdi
  unsigned __int64 *v78; // rbx
  unsigned __int64 *v79; // rax
  unsigned __int64 *v80; // rax
  unsigned __int64 *v81; // rax
  unsigned __int64 v82; // r13
  signed __int64 v83; // rbp
  __int64 v84; // rax
  unsigned __int64 v85; // rbp
  _BYTE *v86; // rax
  _BYTE *v87; // r15
  signed __int64 v88; // r14
  __int64 v89; // rax
  _QWORD *v90; // rcx
  _QWORD *v91; // rax
  _QWORD *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rbx
  char v96; // al
  __int64 v97; // rax
  unsigned int *v98; // r13
  __int64 v99; // rax
  _BYTE *v100; // r13
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rax
  __int64 v104; // r13
  char *v105; // rdi
  int v106; // eax
  unsigned __int64 v107; // rdi
  unsigned __int8 v108; // cl
  __int64 v109; // rax
  int v110; // ecx
  __int64 v111; // rsi
  int v112; // ecx
  unsigned int v113; // edx
  __int64 *v114; // rax
  __int64 v115; // rax
  int v116; // esi
  int v117; // r9d
  __int64 v118; // rax
  unsigned __int64 *v119; // rax
  unsigned __int64 v120; // r15
  __int64 v121; // r13
  signed __int64 v122; // r14
  unsigned __int64 *v123; // rax
  __int64 v124; // rdx
  unsigned __int64 v125; // r8
  unsigned __int64 v126; // r9
  __int64 v127; // rax
  void *v128; // r11
  unsigned __int64 v129; // rsi
  __int64 v130; // rdi
  unsigned __int64 v131; // rbx
  unsigned __int64 v132; // rsi
  unsigned __int64 v133; // rbp
  unsigned int v134; // r8d
  __int64 v135; // rdx
  const __m128i *v136; // rax
  unsigned __int64 v137; // r8
  __int8 v138; // cl
  const __m128i *v139; // rcx
  __int64 v140; // r13
  __int64 v141; // r14
  __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rdi
  _BYTE *v145; // rax
  _BYTE *v146; // r14
  signed __int64 v147; // rbp
  int *v148; // rdx
  signed __int64 v149; // rax
  int *v150; // rcx
  __int64 v151; // rsi
  int *v152; // rsi
  int v153; // edi
  __int64 v154; // rax
  __int64 v155; // r13
  __int64 v156; // rax
  _QWORD *v157; // r14
  _QWORD *v158; // rbx
  unsigned __int64 v159; // rax
  _QWORD *v160; // r15
  _QWORD *v161; // rdi
  void *v162; // rdi
  __int64 v164; // rax
  _QWORD *v165; // rcx
  _QWORD *v166; // rax
  _QWORD *v167; // rdx
  __int64 v168; // rax
  unsigned __int64 *v169; // rax
  int v170; // esi
  int v171; // r9d
  __int64 v172; // r8
  __int64 v173; // r8
  __int64 v174; // rbp
  __int64 v175; // rdx
  __int64 v176; // rcx
  unsigned __int64 v177; // rsi
  __int64 v178; // rsi
  __int64 v179; // rdi
  _BYTE *v180; // rbp
  _BYTE *v181; // rbx
  unsigned __int64 v182; // r9
  __int64 v183; // r13
  unsigned __int64 v184; // r12
  __int64 v185; // rdx
  _BYTE *v186; // rax
  _BYTE *v187; // rdi
  _BYTE *v188; // rax
  size_t v189; // rdx
  __int64 v190; // r15
  __int64 v191; // r13
  __int64 v192; // rbp
  __int64 v193; // rax
  __int64 v194; // rsi
  __int64 v195; // rdi
  int v196; // ecx
  __int64 v197; // rsi
  int v198; // ecx
  unsigned int v199; // edx
  __int64 *v200; // rax
  __int64 v201; // rdi
  __int64 v202; // rax
  unsigned __int64 v203; // rbx
  size_t v204; // rax
  char *v205; // rbx
  __int64 v206; // rdx
  __int64 v207; // rdi
  signed __int64 v208; // rbp
  _BYTE *v209; // rsi
  int v210; // r14d
  _BYTE *v211; // rax
  __int64 v212; // rcx
  __int64 v213; // rdx
  __int64 v214; // rax
  int v215; // eax
  int v216; // r8d
  __int64 v217; // rdi
  int v218; // eax
  int v219; // r8d
  __int64 v220; // rdi
  __int64 v221; // rbp
  __int64 v222; // rbx
  __int64 v223; // r13
  unsigned int v224; // eax
  size_t v225; // r13
  __m128 v226; // rax
  void *v227; // rdx
  unsigned __int32 v228; // ebp
  __int64 v229; // r13
  __int64 v230; // rax
  size_t v231; // r13
  __m128 v232; // rax
  size_t v233; // rdx
  size_t v234; // r13
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // r13
  unsigned int v240; // r13d
  unsigned int v241; // eax
  __int64 v242; // r13
  __int64 v243; // rbp
  unsigned int v244; // eax
  int v245; // ebx
  unsigned int v246; // ebx
  unsigned int v247; // eax
  unsigned int v248; // ebx
  _BYTE *v249; // r13
  __int64 v250; // rbp
  unsigned int v251; // eax
  __int64 v252; // rdx
  int v253; // eax
  _QWORD *v254; // rax
  unsigned int v255; // eax
  unsigned int v256; // eax
  size_t v257; // r13
  __int64 v258; // rax
  size_t v259; // rdx
  size_t v260; // r13
  size_t v261; // rdx
  size_t v262; // r13
  __int64 v263; // rax
  __int64 v264; // rax
  _WORD *v265; // rax
  unsigned __int64 *v266; // [rsp+0h] [rbp-788h]
  char *v267; // [rsp+0h] [rbp-788h]
  char *v268; // [rsp+0h] [rbp-788h]
  unsigned __int64 *v269; // [rsp+8h] [rbp-780h]
  unsigned __int64 v270; // [rsp+8h] [rbp-780h]
  unsigned __int64 v271; // [rsp+8h] [rbp-780h]
  unsigned __int64 v272; // [rsp+8h] [rbp-780h]
  char *v273; // [rsp+8h] [rbp-780h]
  unsigned __int64 v274; // [rsp+8h] [rbp-780h]
  __int64 v275; // [rsp+8h] [rbp-780h]
  const void *v276; // [rsp+8h] [rbp-780h]
  _BYTE *v277; // [rsp+8h] [rbp-780h]
  __int64 v279; // [rsp+10h] [rbp-778h]
  __int64 v280; // [rsp+18h] [rbp-770h]
  unsigned __int64 *v281; // [rsp+18h] [rbp-770h]
  __int64 v282; // [rsp+18h] [rbp-770h]
  _BYTE *v283; // [rsp+18h] [rbp-770h]
  const void *v284; // [rsp+18h] [rbp-770h]
  __int64 v285; // [rsp+18h] [rbp-770h]
  __int64 v286; // [rsp+20h] [rbp-768h]
  unsigned __int64 *v287; // [rsp+28h] [rbp-760h]
  void *v288; // [rsp+28h] [rbp-760h]
  void *v289; // [rsp+28h] [rbp-760h]
  void *v290; // [rsp+28h] [rbp-760h]
  char *v291; // [rsp+28h] [rbp-760h]
  __int64 v292; // [rsp+30h] [rbp-758h]
  size_t v294; // [rsp+40h] [rbp-748h]
  __int64 v295; // [rsp+48h] [rbp-740h]
  char src; // [rsp+58h] [rbp-730h]
  __int64 srca; // [rsp+58h] [rbp-730h]
  void *srce; // [rsp+58h] [rbp-730h]
  void *srcc; // [rsp+58h] [rbp-730h]
  void *srcd; // [rsp+58h] [rbp-730h]
  int srcb; // [rsp+58h] [rbp-730h]
  __int64 v305; // [rsp+78h] [rbp-710h]
  __int64 v306; // [rsp+78h] [rbp-710h]
  int v307; // [rsp+80h] [rbp-708h]
  unsigned __int64 v308; // [rsp+90h] [rbp-6F8h]
  __int64 v309; // [rsp+98h] [rbp-6F0h]
  __int64 v310; // [rsp+ACh] [rbp-6DCh]
  char *s[2]; // [rsp+D0h] [rbp-6B8h] BYREF
  _BYTE v312[16]; // [rsp+E0h] [rbp-6A8h] BYREF
  size_t n[2]; // [rsp+F0h] [rbp-698h] BYREF
  _BYTE v314[16]; // [rsp+100h] [rbp-688h] BYREF
  __m128i v315; // [rsp+110h] [rbp-678h] BYREF
  _BYTE v316[16]; // [rsp+120h] [rbp-668h] BYREF
  char v317; // [rsp+130h] [rbp-658h]
  char v318; // [rsp+140h] [rbp-648h] BYREF
  int v319; // [rsp+148h] [rbp-640h] BYREF
  unsigned __int64 *v320; // [rsp+150h] [rbp-638h]
  int *v321; // [rsp+158h] [rbp-630h]
  int *v322; // [rsp+160h] [rbp-628h]
  __int64 v323; // [rsp+168h] [rbp-620h]
  __m128i v324; // [rsp+170h] [rbp-618h] BYREF
  __int16 v325; // [rsp+180h] [rbp-608h] BYREF
  char v326; // [rsp+188h] [rbp-600h]
  char v327; // [rsp+190h] [rbp-5F8h]
  void *ptr; // [rsp+280h] [rbp-508h] BYREF
  __m128i si128; // [rsp+288h] [rbp-500h] BYREF
  void *v330; // [rsp+298h] [rbp-4F0h] BYREF
  __int64 v331; // [rsp+2A0h] [rbp-4E8h]
  _BYTE v332[24]; // [rsp+2A8h] [rbp-4E0h] BYREF
  __int64 v333; // [rsp+2C0h] [rbp-4C8h] BYREF
  void *v334; // [rsp+390h] [rbp-3F8h] BYREF
  _BYTE v335[24]; // [rsp+398h] [rbp-3F0h] BYREF
  __int64 v336; // [rsp+3B0h] [rbp-3D8h]
  char v337; // [rsp+3B8h] [rbp-3D0h]
  int v338; // [rsp+3BCh] [rbp-3CCh]
  void **p_ptr; // [rsp+3C0h] [rbp-3C8h]
  __m128 v340; // [rsp+4A0h] [rbp-2E8h] BYREF
  char v341; // [rsp+4B0h] [rbp-2D8h] BYREF
  void *v342; // [rsp+4B8h] [rbp-2D0h]
  _BYTE v343[24]; // [rsp+4C8h] [rbp-2C0h] BYREF
  __int64 v344; // [rsp+4E0h] [rbp-2A8h] BYREF
  char v345; // [rsp+5B0h] [rbp-1D8h]
  __m128 v346; // [rsp+5C0h] [rbp-1C8h] BYREF
  char v347[8]; // [rsp+5D0h] [rbp-1B8h] BYREF
  __int64 v348; // [rsp+5D8h] [rbp-1B0h] BYREF
  char v349; // [rsp+6D0h] [rbp-B8h]

  v8 = *(_QWORD *)(a2 + 24);
  v9 = &v318;
  v321 = &v319;
  v322 = &v319;
  v319 = 0;
  v320 = nullptr;
  v323 = 0;
  v292 = a2 + 8;
  if ( v8 == a2 + 8 )
    goto LABEL_61;
  v10 = v8;
  v11 = &v318;
  do
  {
    v266 = (unsigned __int64 *)(v10 + 32);
    v12 = sub_9CB330(a3, *(_QWORD *)(v10 + 32));
    v13 = *(_QWORD *)(v10 + 32);
    v14 = v12;
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x2B )
    {
      v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v15 = *(_QWORD *)v15;
      if ( (*(_BYTE *)(v15 + 8) & 0x7Fu) - 34 > 5
        || a5 != v15 - 72
        || v15 == 72
        || (unsigned __int8)sub_B5DF50(v15 - 72)
        || (*(_BYTE *)(v15 + 12) & 3) != 0
        || (unsigned int)sub_B53B90(v15 - 72)
        || (unsigned __int8)sub_B50B60(v15 - 72)
        || (*(_BYTE *)(v15 - 44) & 0x7Fu) - 35 <= 3
        || (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v15 - 72) + 72LL))(v15 - 72)
        && (*(_WORD *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v15 - 72) + 64LL))(v15 - 72) & 0x1FF) == 0xFB
        || (unsigned int)sub_B53B50(v15 - 72) )
      {
LABEL_9:
        v334 = &v335[8];
        *(_QWORD *)v335 = 0x400000000LL;
        goto LABEL_10;
      }
    }
    if ( v14 != 1 )
    {
      v106 = *(_BYTE *)(v13 + 28) & 0x7F;
      if ( v106 != 46 && v106 != 40 )
        goto LABEL_9;
      v107 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v107 = *(_QWORD *)(v107 + 8);
      if ( !v107 )
        goto LABEL_9;
      v108 = *(_BYTE *)(sub_B6AD60(v107) + 8) & 0x7F;
      if ( v108 > 0x12u )
      {
        if ( ((v108 + 94) & 0x7Fu) > 5 )
          goto LABEL_9;
      }
      else if ( ((1LL << v108) & 0x40182) == 0 )
      {
        goto LABEL_9;
      }
      v109 = sub_A4E300(a4, *(_QWORD *)(v13 + 48));
      if ( !v109 || (unsigned int)*(unsigned __int8 *)(v109 + 16) - 2 > 1 )
        goto LABEL_9;
      v110 = *(_DWORD *)(a6 + 24);
      v111 = *(_QWORD *)(a6 + 8);
      if ( !v110 )
        goto LABEL_483;
      v112 = v110 - 1;
      v113 = v112 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v114 = (__int64 *)(v111 + 16LL * v113);
      if ( v13 != *v114 )
      {
        if ( *v114 == -4096 )
          goto LABEL_483;
        v215 = 1;
        while ( 1 )
        {
          v216 = v215 + 1;
          v113 = v112 & (v215 + v113);
          v114 = (__int64 *)(v111 + 16LL * v113);
          v217 = *v114;
          if ( v13 == *v114 )
            break;
          v215 = v216;
          if ( v217 == -4096 )
LABEL_483:
            BUG();
        }
      }
      if ( (*(_BYTE *)(v114[1] + 8) & 1) != 0 )
        goto LABEL_9;
      v346.m128_u64[0] = (unsigned __int64)v347;
      v346.m128_u64[1] = 0x400000000LL;
      v115 = sub_A4E300(a4, *(_QWORD *)(v13 + 48));
      if ( v115 && (unsigned int)*(unsigned __int8 *)(v115 + 16) - 2 <= 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v115 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
          goto LABEL_193;
        v221 = (unsigned int)sub_991130(v13);
        v222 = *(_QWORD *)(a4 + 2320);
        v223 = *(_QWORD *)(a4 + 2312);
        v224 = sub_B4F350(v13);
        sub_990F20((__int64)s, (v221 << 32) | v224, v223, v222);
        if ( !v312[0] )
          goto LABEL_193;
        v225 = j__strlen(asc_22BE270);
        v226.m128_u64[0] = sub_9C8980(s, (__int64)asc_22BE270, v225);
        v340 = v226;
        v284 = (const void *)sub_9C89B0((__int64)&v340, (__int64)asc_22BE270, v225);
        v288 = v227;
        sub_13B89F0(&v324, (unsigned int)v221, *(_QWORD *)(a4 + 2312), *(_QWORD *)(a4 + 2320), 0);
        v228 = v324.m128i_i32[0];
        if ( !v326 )
          goto LABEL_193;
        while ( v325 != 20 )
        {
          if ( v228 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13) >> 32 )
            break;
          sub_13B89F0(&v324, v228, *(_QWORD *)(a4 + 2312), *(_QWORD *)(a4 + 2320), 0);
          v228 = v324.m128i_i32[0];
          if ( !v326 )
            goto LABEL_193;
        }
        v229 = *(_QWORD *)(a4 + 2312);
        v275 = *(_QWORD *)(a4 + 2320);
        v230 = sub_B4F300(v13);
        sub_990F20((__int64)n, (v230 << 32) | (v228 + 1), v229, v275);
        if ( !v314[0]
          || (v231 = j__strlen(asc_22BE270),
              v232.m128_u64[0] = sub_9C8980(n, (__int64)asc_22BE270, v231),
              v340 = v232,
              v276 = (const void *)sub_9C89B0((__int64)&v340, (__int64)asc_22BE270, v231),
              (v234 = v233) == 0)
          || (sub_990F70((__int64)&v315, v13, *(_QWORD *)(a4 + 2312), *(_QWORD *)(a4 + 2320)), !v316[0]) )
        {
LABEL_193:
          v334 = &v335[8];
          *(_QWORD *)v335 = 0x400000000LL;
LABEL_194:
          sub_9C9400((__int64)&v346);
          goto LABEL_10;
        }
        *(_OWORD *)&v335[8] = 0;
        ptr = &v330;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
        *(_DWORD *)v335 = 2;
        v334 = &off_2BC1F40;
        v337 = 0;
        v338 = 1;
        v336 = 0;
        p_ptr = &ptr;
        sub_2257B70(&v334, 0, 0, 0);
        v235 = sub_971800((__int64)&v334, "std::array<");
        v236 = sub_9717A0(v235, v284, (size_t)v288);
        v237 = sub_971800(v236, ", ");
        v238 = sub_9717A0(v237, v276, v234);
        v239 = sub_971800(v238, "> ");
        v340.m128_u64[0] = (unsigned __int64)&v341;
        if ( v315.m128i_i64[0] )
        {
          sub_9C77B0(&v340, v315.m128i_i64[0], v315.m128i_i64[0] + v315.m128i_i64[1]);
        }
        else
        {
          v340.m128_u64[1] = 0;
          v341 = 0;
        }
        sub_22581D0(v239, v340.m128_u64[0], v340.m128_u64[1]);
        if ( (char *)v340.m128_u64[0] != &v341 )
          operator delete((void *)v340.m128_u64[0]);
        v285 = (__int64)p_ptr[1];
        v277 = *p_ptr;
        v240 = sub_B4F350(v13);
        v241 = sub_B4F300(v13);
        sub_9C8380((__int64)&v340, __SPAIR64__(v241, v240), 1, v277, v285);
        sub_9CADB0((__int64)&v346, (unsigned __int64)&v340);
        if ( v342 != v343 )
          operator delete(v342);
        v334 = &unk_2C4C288;
        sub_2257A60(&v334);
        if ( ptr != &v330 )
          free(ptr);
      }
      v334 = &v335[8];
      *(_QWORD *)v335 = 0x400000000LL;
      if ( v346.m128_i32[2] )
        sub_9CCB40((__int64)&v334, (__int64)&v346);
      goto LABEL_194;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42 )
      goto LABEL_9;
    v96 = *(_BYTE *)(v13 + 28) & 0x7F;
    if ( v96 != 43 )
    {
      if ( v96 != 40 && v96 != 46 )
        goto LABEL_9;
      if ( !sub_9C6310(v13) )
        goto LABEL_9;
      v196 = *(_DWORD *)(a6 + 24);
      v197 = *(_QWORD *)(a6 + 8);
      if ( !v196 )
        goto LABEL_9;
      v198 = v196 - 1;
      v199 = v198 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v200 = (__int64 *)(v197 + 16LL * v199);
      v201 = *v200;
      if ( v13 != *v200 )
      {
        v218 = 1;
        if ( v201 == -4096 )
          goto LABEL_9;
        while ( 1 )
        {
          v219 = v218 + 1;
          v199 = v198 & (v218 + v199);
          v200 = (__int64 *)(v197 + 16LL * v199);
          v220 = *v200;
          if ( v13 == *v200 )
            break;
          v218 = v219;
          if ( v220 == -4096 )
            goto LABEL_9;
        }
      }
      v202 = v200[1];
      if ( !v202 || (*(_BYTE *)(v202 + 8) & 1) != 0 )
        goto LABEL_9;
      v203 = j__strlen("placeholder");
      s[0] = v312;
      v204 = j__strlen("<# ");
      sub_9C77B0(s, "<# ", (__int64)&asc_22BE1AC[v204]);
      if ( v203 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)s[1] )
        std::__throw_length_error("basic_string::append");
      sub_9CA820(s, "placeholder", v203);
      sub_9CAA80(s, " #>");
      v205 = s[0];
      if ( sub_9C7870(v13, *(_QWORD *)(a4 + 2312)) )
      {
        v334 = &v335[8];
        *(_QWORD *)v335 = 0x400000000LL;
        goto LABEL_329;
      }
      v324.m128i_i64[0] = (__int64)&v325;
      v324.m128i_i64[1] = 0x400000000LL;
      sub_9CA8B0(&v315, v13, a4);
      if ( !v317 )
      {
        *(_QWORD *)v335 = 0x400000000LL;
        v334 = &v335[8];
LABEL_404:
        sub_9C9400((__int64)&v324);
LABEL_329:
        v105 = s[0];
        if ( s[0] == v312 )
          goto LABEL_10;
LABEL_330:
        operator delete(v105);
        goto LABEL_10;
      }
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
      std::__ostream_insert<char,std::char_traits<char>>();
      v242 = sub_B4F900(v13);
      if ( !v242 )
        goto LABEL_423;
      v243 = *(_QWORD *)(a4 + 2312);
      v289 = *(void **)(a4 + 2320);
      if ( (unsigned int)sub_BDA9A0(v242, a4, 2) )
      {
        v244 = sub_EC8400(v242);
        v245 = sub_13B83B0(v244, v243, v289);
        if ( v245 && (v246 = v245 + sub_EC8400(v242) - 1) != 0 )
        {
          v247 = sub_EC7AA0(v242);
          v330 = v332;
          ptr = (void *)__PAIR64__(v246, v247);
          v334 = &v335[8];
          *(__int64 *)((char *)si128.m128i_i64 + 4) = 0;
          si128.m128i_i8[12] = 0;
          v331 = 0;
          v332[0] = 0;
          v332[16] = 0;
          si128.m128i_i8[0] = 1;
          *(_QWORD *)v335 = 0x400000000LL;
          sub_9CAEA0((__int64)&v334, (__int64)&ptr, (__int64)&v333);
          v340.m128_u64[1] = 0x400000000LL;
          v340.m128_u64[0] = (unsigned __int64)&v341;
          if ( *(_DWORD *)v335 )
            sub_9CCB40((__int64)&v340, (__int64)&v334);
          v345 = 1;
          sub_9C9400((__int64)&v334);
          if ( v330 != v332 )
            operator delete(v330);
        }
        else
        {
          v345 = 0;
        }
LABEL_416:
        if ( !v345 )
          goto LABEL_417;
        sub_9CFC40(
          (__int64)&v324,
          v324.m128i_i64[0] + ((unsigned __int64)v324.m128i_u32[2] << 6),
          v340.m128_i64[0],
          v340.m128_u64[0] + ((unsigned __int64)v340.m128_u32[2] << 6));
        if ( v345 )
          sub_9C9400((__int64)&v340);
LABEL_423:
        v248 = sub_B4F300(v13);
        if ( v248 )
        {
          if ( v248 + 1 == (unsigned int)sub_991130(v13) )
            std::operator<<<std::char_traits<char>>();
          std::stringbuf::str();
          v249 = v334;
          v250 = *(_QWORD *)v335;
          v251 = sub_B4F350(v13);
          sub_9C8380((__int64)&v340, __SPAIR64__(v248, v251), 1, v249, v250);
          sub_9CADB0((__int64)&v324, (unsigned __int64)&v340);
          if ( v342 != v343 )
            operator delete(v342);
          if ( v334 != &v335[8] )
            operator delete(v334);
          v334 = &v335[8];
          *(_QWORD *)v335 = 0x400000000LL;
          if ( v324.m128i_i32[2] )
            sub_9CCB40((__int64)&v334, (__int64)&v324);
          goto LABEL_418;
        }
LABEL_417:
        v334 = &v335[8];
        *(_QWORD *)v335 = 0x400000000LL;
LABEL_418:
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
        if ( v317 && (_BYTE *)v315.m128i_i64[0] != v316 )
          operator delete((void *)v315.m128i_i64[0]);
        goto LABEL_404;
      }
      v252 = -1;
      ptr = &si128.m128i_u64[1];
      si128.m128i_i64[0] = 0x400000000LL;
      n[0] = (size_t)v314;
      if ( v205 )
        v252 = (__int64)&v205[j__strlen(v205)];
      sub_9C77B0(n, v205, v252);
      v294 = j__strlen("{");
      v253 = sub_EC7AA0(v242);
      sub_9C8A00((__int64)&v340, v253, "{", v294, 0);
      sub_9CADB0((__int64)&ptr, (unsigned __int64)&v340);
      if ( v342 != v343 )
        operator delete(v342);
      v254 = (_QWORD *)sub_BD7B00(v242);
      if ( (*(_WORD *)v254 & 0x1FF) == 0x6A )
      {
        if ( (*v254 & 0x100000) != 0 && v254[7] )
        {
          v306 = v254[7];
          if ( (unsigned __int8)sub_BDD420(v306, a4, 1) )
          {
LABEL_441:
            *(__m128i *)v335 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
            v334 = &v335[16];
            v255 = sub_EC8400(v242);
            v256 = sub_13B8320(v255, 0, v243, v289);
            if ( v256 )
            {
              srcb = v256;
              v308 = v256 | v308 & 0xFFFFFFFF00000000LL;
              v257 = j__strlen(", ");
              v258 = *(_QWORD *)v335;
              if ( v257 + *(_QWORD *)v335 > *(_QWORD *)&v335[8] )
              {
                sub_22130D0(&v334, &v335[16], v257 + *(_QWORD *)v335, 1);
                v258 = *(_QWORD *)v335;
              }
              if ( v257 )
              {
                memcpy((char *)v334 + v258, ", ", v257);
                v258 = *(_QWORD *)v335;
              }
              v259 = v257 + v258;
              v260 = n[1];
              *(_QWORD *)v335 = v259;
              v290 = (void *)n[0];
              v261 = n[1] + v259;
              if ( v261 > *(_QWORD *)&v335[8] )
                sub_22130D0(&v334, &v335[16], v261, 1);
              if ( v260 )
                memcpy((char *)v334 + *(_QWORD *)v335, v290, v260);
              *(_QWORD *)v335 += v260;
              v291 = *(char **)v335;
              v262 = j__strlen("}");
              if ( (unsigned __int64)&v291[v262] > *(_QWORD *)&v335[8] )
                sub_22130D0(&v334, &v335[16], &v291[v262], 1);
              if ( v262 )
                memcpy((char *)v334 + *(_QWORD *)v335, "}", v262);
              *(_QWORD *)v335 += v262;
              sub_9C8A00((__int64)&v340, srcb, v334, *(__int64 *)v335, 0);
              sub_9CADB0((__int64)&ptr, (unsigned __int64)&v340);
              if ( v342 != v343 )
                operator delete(v342);
              v340.m128_u64[0] = (unsigned __int64)&v341;
              v340.m128_u64[1] = 0x400000000LL;
              if ( si128.m128i_i32[0] )
                sub_9CCB40((__int64)&v340, (__int64)&ptr);
              v345 = 1;
            }
            else
            {
              v345 = 0;
            }
            if ( v334 != &v335[16] )
              free(v334);
            goto LABEL_461;
          }
          sub_991090((__int64)&v334, v306, v243, (__int64)v289);
          if ( v335[8] )
          {
            sub_978080(n, 0, n[1], v334, *(size_t *)v335);
            goto LABEL_441;
          }
          v345 = 0;
LABEL_461:
          if ( (_BYTE *)n[0] != v314 )
            operator delete((void *)n[0]);
          sub_9C9400((__int64)&ptr);
          goto LABEL_416;
        }
        if ( (*v254 & 0x100000) != 0 )
          goto LABEL_441;
      }
      else
      {
        v263 = sub_A4E300(a4, v254[1]);
        if ( v263 && (unsigned int)*(unsigned __int8 *)(v263 + 16) - 2 <= 1 )
        {
          v345 = 1;
          v334 = &v335[8];
          v340.m128_u64[0] = (unsigned __int64)&v341;
          *(_QWORD *)v335 = 0x400000000LL;
          v340.m128_u64[1] = 0x400000000LL;
          sub_9C9400((__int64)&v334);
          goto LABEL_461;
        }
        v264 = sub_BD7B00(v242);
        if ( (*(_WORD *)v264 & 0x1FF) != 4 )
          goto LABEL_441;
        if ( *(_BYTE *)(v264 + 2) >> 3 != 4 )
          goto LABEL_441;
        v265 = *(_WORD **)(v264 + 16);
        if ( !v265 || (*v265 & 0x1FF) != 0x47 )
          goto LABEL_441;
      }
      sub_978080(n, 0, n[1], "1", 1u);
      goto LABEL_441;
    }
    if ( sub_9C7870(v13, *(_QWORD *)(a4 + 2312)) )
      goto LABEL_9;
    if ( (unsigned __int8)sub_B50AE0(v13) )
      goto LABEL_9;
    *(_OWORD *)n = 0;
    sub_991190(&v324, v13, *(_QWORD *)(a4 + 2312), *(_QWORD *)(a4 + 2320), (__int64)n);
    if ( !v327 )
      goto LABEL_9;
    v97 = *(_QWORD *)(v13 + 40);
    if ( (v97 & 7) != 0 )
      BUG();
    v98 = *(unsigned int **)((v97 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v99 = *v98;
    v100 = v98 + 4;
    v282 = v99;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream();
    sub_9CA8B0((__m128i *)&ptr, v13, a4);
    if ( LOBYTE(n[1]) )
    {
      v101 = n[0];
      v102 = n[1];
    }
    else
    {
      LOBYTE(v309) = 0;
      v101 = 0;
      v102 = v309;
    }
    sub_9CBF30((__m128i *)&v340, v324.m128i_i64[0], v324.m128i_i64[1], v101, v102);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (char *)v340.m128_u64[0] != &v341 )
      operator delete((void *)v340.m128_u64[0]);
    v103 = *(_QWORD *)(v13 + 48);
    if ( (v103 & 0xF) != 0 || (byte_8[v103 & 0xFFFFFFFFFFFFFFF0LL] & 0xF) != 0 )
    {
      v340.m128_i8[0] = 32;
      std::__ostream_insert<char,std::char_traits<char>>();
      v212 = *(_QWORD *)(v13 + 48);
      v213 = 0;
      v214 = *(_QWORD *)&byte_8[v212 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v214 & 8) != 0 )
        v213 = *(__int64 *)((char *)&qword_18 + (v214 & 0xFFFFFFFFFFFFFFF0LL));
      v334 = (void *)(v213 | ((unsigned __int8)v212 | (unsigned __int8)v214) & 7);
      sub_F4DEF0(&v340, &v334);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (char *)v340.m128_u64[0] != &v341 )
        operator delete((void *)v340.m128_u64[0]);
    }
    v340.m128_i8[0] = 32;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v100 )
    {
      v340.m128_u64[0] = (unsigned __int64)&v341;
      sub_9C77B0(&v340, v100, (__int64)&v100[v282]);
    }
    else
    {
      v341 = 0;
      v340.m128_u64[0] = (unsigned __int64)&v341;
      v340.m128_u64[1] = 0;
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (char *)v340.m128_u64[0] != &v341 )
      operator delete((void *)v340.m128_u64[0]);
    std::stringbuf::str();
    v104 = v315.m128i_i64[1];
    v283 = (_BYTE *)v315.m128i_i64[0];
    v310 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 16LL))(v13, &v348);
    sub_9C8380((__int64)&v340, v310, 1, v283, v104);
    v334 = &v335[8];
    *(_QWORD *)v335 = 0x400000000LL;
    sub_9CAEA0((__int64)&v334, (__int64)&v340, (__int64)&v344);
    if ( v342 != v343 )
      operator delete(v342);
    if ( (_BYTE *)v315.m128i_i64[0] != v316 )
      operator delete((void *)v315.m128i_i64[0]);
    if ( (_BYTE)v331 && ptr != &si128.m128i_u64[1] )
      operator delete(ptr);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
    if ( v327 )
    {
      v105 = (char *)v324.m128i_i64[0];
      if ( (__int16 *)v324.m128i_i64[0] != &v325 )
        goto LABEL_330;
    }
LABEL_10:
    v16 = v320;
    if ( !v320 )
    {
      v18 = (unsigned __int64 *)(v11 + 8);
LABEL_17:
      v346.m128_u64[0] = v10 + 32;
      v18 = sub_9D0430(v11, v18, (unsigned __int64 **)&v346);
      goto LABEL_18;
    }
    v17 = *(_QWORD *)(v10 + 32);
    v18 = (unsigned __int64 *)(v11 + 8);
    do
    {
      while ( v16[4] >= v17 )
      {
        v18 = v16;
        v16 = (unsigned __int64 *)v16[2];
        if ( !v16 )
          goto LABEL_15;
      }
      v16 = (unsigned __int64 *)v16[3];
    }
    while ( v16 );
LABEL_15:
    if ( v18 == (unsigned __int64 *)(v11 + 8) || v18[4] > v17 )
      goto LABEL_17;
LABEL_18:
    sub_9CCB40((__int64)(v18 + 5), (__int64)&v334);
    v19 = v334;
    v20 = (char *)v334 + 64 * (unsigned __int64)*(unsigned int *)v335;
    if ( v334 != v20 )
    {
      do
      {
        while ( 1 )
        {
          v20 -= 8;
          v21 = (_QWORD *)v20[3];
          if ( v21 == v20 + 5 )
            break;
          operator delete(v21);
          if ( v19 == v20 )
            goto LABEL_21;
        }
      }
      while ( v19 != v20 );
LABEL_21:
      v20 = v334;
    }
    if ( v20 != (_QWORD *)&v335[8] )
      free(v20);
    v22 = v320;
    if ( v320 )
    {
      v23 = *(_QWORD *)(v10 + 32);
      v24 = (unsigned __int64 *)(v11 + 8);
      do
      {
        while ( v22[4] >= v23 )
        {
          v24 = v22;
          v22 = (unsigned __int64 *)v22[2];
          if ( !v22 )
            goto LABEL_29;
        }
        v22 = (unsigned __int64 *)v22[3];
      }
      while ( v22 );
LABEL_29:
      if ( v24 != (unsigned __int64 *)(v11 + 8) && v24[4] <= v23 )
        goto LABEL_32;
    }
    else
    {
      v24 = (unsigned __int64 *)(v11 + 8);
    }
    v346.m128_u64[0] = v10 + 32;
    v24 = sub_9D0430(v11, v24, (unsigned __int64 **)&v346);
LABEL_32:
    if ( !*((_DWORD *)v24 + 12) )
    {
      sub_9C9FF0(v11, v266);
      goto LABEL_37;
    }
    v295 = v10 + 48;
    v280 = *(_QWORD *)(v10 + 64);
    if ( v280 == v10 + 48 )
      goto LABEL_37;
    while ( 1 )
    {
      (*(void (__fastcall **)(__m128 *, _QWORD, __int64))(**(_QWORD **)(v280 + 32) + 40LL))(
        &v346,
        *(_QWORD *)(v280 + 32),
        a3);
      if ( !v349 )
        break;
      v119 = sub_9D04F0(v11, v266);
      v120 = v346.m128_u64[0];
      v121 = (__int64)v119;
      v122 = (unsigned __int64)v346.m128_u32[2] << 6;
      v271 = v346.m128_u64[0] + v122;
      v123 = sub_9D04F0(v11, v266);
      v124 = *(_QWORD *)v121;
      v125 = v122 >> 6;
      v126 = *v123 + ((unsigned __int64)*((unsigned int *)v123 + 2) << 6);
      v127 = *(unsigned int *)(v121 + 8);
      v128 = (void *)(v126 - *(_QWORD *)v121);
      v129 = v127 + (v122 >> 6);
      v130 = v127 << 6;
      v131 = *(_QWORD *)v121 + (v127 << 6);
      if ( v126 != v131 )
      {
        if ( v129 > *(unsigned int *)(v121 + 12) )
        {
          srcc = (void *)(v126 - *(_QWORD *)v121);
          sub_9CAC70(v121, v129);
          v127 = *(unsigned int *)(v121 + 8);
          v124 = *(_QWORD *)v121;
          v128 = srcc;
          v125 = v122 >> 6;
          v130 = v127 << 6;
          v126 = (unsigned __int64)srcc + *(_QWORD *)v121;
          v131 = *(_QWORD *)v121 + (v127 << 6);
        }
        srca = v130 - (_QWORD)v128;
        v132 = (v130 - (__int64)v128) >> 6;
        v133 = v132;
        if ( v132 < v125 )
        {
          v134 = v127 + v125;
          *(_DWORD *)(v121 + 8) = v134;
          v135 = ((unsigned __int64)v134 << 6) - srca + v124;
          if ( v126 != v131 )
          {
            v136 = (const __m128i *)(v126 + 40);
            v137 = v135 + ((v131 - 64 - v126) & 0xFFFFFFFFFFFFFFC0LL) + 64;
            do
            {
              *(_QWORD *)v135 = v136[-3].m128i_i64[1];
              *(_DWORD *)(v135 + 8) = v136[-2].m128i_i32[0];
              *(_QWORD *)(v135 + 12) = *(__int64 *)((char *)v136[-2].m128i_i64 + 4);
              *(_DWORD *)(v135 + 20) = v136[-2].m128i_i32[3];
              *(_QWORD *)(v135 + 24) = v135 + 40;
              v139 = (const __m128i *)v136[-1].m128i_i64[0];
              if ( v139 == v136 )
              {
                *(__m128i *)(v135 + 40) = _mm_loadu_si128(v136);
              }
              else
              {
                *(_QWORD *)(v135 + 24) = v139;
                *(_QWORD *)(v135 + 40) = v136->m128i_i64[0];
              }
              v135 += 64;
              *(_QWORD *)(v135 - 32) = v136[-1].m128i_i64[1];
              v138 = v136[1].m128i_i8[0];
              v136[-1].m128i_i64[0] = (__int64)v136;
              v136 += 4;
              v136[-5].m128i_i64[1] = 0;
              v136[-4].m128i_i8[0] = 0;
              *(_BYTE *)(v135 - 8) = v138;
            }
            while ( v135 != v137 );
          }
          v140 = v126 + 24;
          v141 = v120 + 24;
          if ( v132 )
          {
            do
            {
              v142 = *(_QWORD *)(v141 - 24);
              v143 = v141;
              v144 = v140;
              v141 += 64;
              v140 += 64;
              *(_QWORD *)(v140 - 88) = v142;
              *(_BYTE *)(v140 - 80) = *(_BYTE *)(v141 - 80);
              *(_QWORD *)(v140 - 76) = *(_QWORD *)(v141 - 76);
              *(_BYTE *)(v140 - 68) = *(_BYTE *)(v141 - 68);
              sub_9CAB60(v144, v143);
              *(_BYTE *)(v140 - 32) = *(_BYTE *)(v141 - 32);
              --v133;
            }
            while ( v133 );
            v120 += srca;
            if ( v271 == v120 )
              goto LABEL_215;
            goto LABEL_222;
          }
          while ( 1 )
          {
            if ( v271 == v120 )
              goto LABEL_215;
LABEL_222:
            *(_QWORD *)v131 = *(_QWORD *)v120;
            *(_DWORD *)(v131 + 8) = *(_DWORD *)(v120 + 8);
            *(_QWORD *)(v131 + 12) = *(_QWORD *)(v120 + 12);
            *(_DWORD *)(v131 + 20) = *(_DWORD *)(v120 + 20);
            *(_QWORD *)(v131 + 24) = v131 + 40;
            v146 = *(_BYTE **)(v120 + 24);
            v147 = *(_QWORD *)(v120 + 32);
            if ( &v146[v147] && !v146 )
LABEL_347:
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( (unsigned __int64)v147 > 0xF )
              break;
            v145 = *(_BYTE **)(v131 + 24);
            if ( v147 == 1 )
            {
              *v145 = *v146;
              v145 = *(_BYTE **)(v131 + 24);
              goto LABEL_220;
            }
            if ( v147 )
              goto LABEL_230;
LABEL_220:
            *(_QWORD *)(v131 + 32) = v147;
            v120 += 64LL;
            v131 += 64LL;
            v145[v147] = 0;
            *(_BYTE *)(v131 - 8) = *(_BYTE *)(v120 - 8);
          }
          if ( v147 < 0 )
            goto LABEL_370;
          v145 = (_BYTE *)operator new(v147 + 1);
          *(_QWORD *)(v131 + 40) = v147;
          *(_QWORD *)(v131 + 24) = v145;
LABEL_230:
          memcpy(v145, v146, v147);
          v145 = *(_BYTE **)(v131 + 24);
          goto LABEL_220;
        }
        v173 = v130 - v122;
        v174 = v124 + v130 - v122;
        v175 = v131;
        v176 = v122 >> 6;
        v177 = (v122 >> 6) + v127;
        if ( v177 > *(unsigned int *)(v121 + 12) )
        {
          srcd = v128;
          v274 = v126;
          sub_9CAC70(v121, v177);
          v173 = v130 - v122;
          v176 = v122 >> 6;
          v128 = srcd;
          v126 = v274;
          v175 = *(_QWORD *)v121 + ((unsigned __int64)*(unsigned int *)(v121 + 8) << 6);
        }
        v178 = v131;
        v179 = v174;
        v305 = v173;
        v180 = (_BYTE *)(v174 - 24);
        v307 = v176;
        v181 = (_BYTE *)(v131 - 24);
        srce = v128;
        v272 = v126;
        sub_9CCA80(v179, v178, v175);
        *(_DWORD *)(v121 + 8) += v307;
        v182 = v272;
        v183 = (v305 - (__int64)srce) >> 6;
        if ( v305 - (__int64)srce <= 0 )
        {
LABEL_314:
          v190 = v120 + 24;
          v191 = v182 + 24;
          v192 = v190 + v122;
          if ( v122 )
          {
            do
            {
              v193 = *(_QWORD *)(v190 - 24);
              v194 = v190;
              v195 = v191;
              v190 += 64;
              v191 += 64;
              *(_QWORD *)(v191 - 88) = v193;
              *(_BYTE *)(v191 - 80) = *(_BYTE *)(v190 - 80);
              *(_QWORD *)(v191 - 76) = *(_QWORD *)(v190 - 76);
              *(_BYTE *)(v191 - 68) = *(_BYTE *)(v190 - 68);
              sub_9CAB60(v195, v194);
              *(_BYTE *)(v191 - 32) = *(_BYTE *)(v190 - 32);
            }
            while ( v192 != v190 );
          }
          goto LABEL_215;
        }
        v273 = v11;
        v184 = v182;
        while ( 1 )
        {
          v187 = *((_BYTE **)v181 - 2);
          *((_QWORD *)v181 - 5) = *((_QWORD *)v180 - 5);
          *(v181 - 32) = *(v180 - 32);
          *(_QWORD *)(v181 - 28) = *(_QWORD *)(v180 - 28);
          *(v181 - 20) = *(v180 - 20);
          v188 = *((_BYTE **)v180 - 2);
          if ( v188 == v180 )
          {
            v189 = *((_QWORD *)v180 - 1);
            if ( v189 )
            {
              if ( v189 == 1 )
              {
                *v187 = *v180;
                v206 = *((_QWORD *)v180 - 1);
                v207 = *((_QWORD *)v181 - 2);
                *((_QWORD *)v181 - 1) = v206;
                *(_BYTE *)(v207 + v206) = 0;
                goto LABEL_305;
              }
              memcpy(v187, v180, v189);
              v187 = *((_BYTE **)v181 - 2);
              v189 = *((_QWORD *)v180 - 1);
            }
            *((_QWORD *)v181 - 1) = v189;
            v187[v189] = 0;
          }
          else
          {
            if ( v187 == v181 )
            {
              *((_QWORD *)v181 - 2) = v188;
              *((_QWORD *)v181 - 1) = *((_QWORD *)v180 - 1);
              *(_QWORD *)v181 = *(_QWORD *)v180;
LABEL_312:
              *((_QWORD *)v180 - 2) = v180;
              goto LABEL_305;
            }
            *((_QWORD *)v181 - 2) = v188;
            v185 = *(_QWORD *)v181;
            *((_QWORD *)v181 - 1) = *((_QWORD *)v180 - 1);
            *(_QWORD *)v181 = *(_QWORD *)v180;
            if ( !v187 )
              goto LABEL_312;
            *((_QWORD *)v180 - 2) = v187;
            *(_QWORD *)v180 = v185;
          }
LABEL_305:
          v186 = *((_BYTE **)v180 - 2);
          *((_QWORD *)v180 - 1) = 0;
          v181 -= 64;
          v180 -= 64;
          *v186 = 0;
          v181[80] = v180[80];
          if ( !--v183 )
          {
            v182 = v184;
            v11 = v273;
            goto LABEL_314;
          }
        }
      }
      if ( v129 > *(unsigned int *)(v121 + 12) )
      {
        sub_9CAC70(v121, v129);
        LODWORD(v127) = *(_DWORD *)(v121 + 8);
        v125 = v122 >> 6;
        v131 = *(_QWORD *)v121 + ((unsigned __int64)(unsigned int)v127 << 6);
      }
      if ( v120 != v271 )
      {
        *(_QWORD *)v131 = *(_QWORD *)v120;
        *(_DWORD *)(v131 + 8) = *(_DWORD *)(v120 + 8);
        *(_QWORD *)(v131 + 12) = *(_QWORD *)(v120 + 12);
        *(_DWORD *)(v131 + 20) = *(_DWORD *)(v120 + 20);
        *(_QWORD *)(v131 + 24) = v131 + 40;
        v208 = *(_QWORD *)(v120 + 32);
        if ( v208 + *(_QWORD *)(v120 + 24) && !*(_QWORD *)(v120 + 24) )
          goto LABEL_347;
        v209 = *(_BYTE **)(v120 + 24);
        v210 = v125;
        while ( (unsigned __int64)v208 <= 0xF )
        {
          v211 = *(_BYTE **)(v131 + 24);
          if ( v208 == 1 )
          {
            *v211 = *v209;
            v211 = *(_BYTE **)(v131 + 24);
            goto LABEL_344;
          }
          if ( v208 )
            goto LABEL_352;
LABEL_344:
          *(_QWORD *)(v131 + 32) = v208;
          v120 += 64LL;
          v131 += 64LL;
          v211[v208] = 0;
          *(_BYTE *)(v131 - 8) = *(_BYTE *)(v120 - 8);
          if ( v271 == v120 )
          {
            LODWORD(v127) = *(_DWORD *)(v121 + 8);
            LODWORD(v125) = v210;
            goto LABEL_354;
          }
          *(_QWORD *)v131 = *(_QWORD *)v120;
          *(_DWORD *)(v131 + 8) = *(_DWORD *)(v120 + 8);
          *(_QWORD *)(v131 + 12) = *(_QWORD *)(v120 + 12);
          *(_DWORD *)(v131 + 20) = *(_DWORD *)(v120 + 20);
          *(_QWORD *)(v131 + 24) = v131 + 40;
          v209 = *(_BYTE **)(v120 + 24);
          v208 = *(_QWORD *)(v120 + 32);
          if ( &v209[v208] && !v209 )
            goto LABEL_347;
        }
        if ( v208 < 0 )
LABEL_370:
          std::__throw_length_error("basic_string::_M_create");
        v211 = (_BYTE *)operator new(v208 + 1);
        *(_QWORD *)(v131 + 40) = v208;
        *(_QWORD *)(v131 + 24) = v211;
LABEL_352:
        memcpy(v211, v209, v208);
        v211 = *(_BYTE **)(v131 + 24);
        goto LABEL_344;
      }
LABEL_354:
      *(_DWORD *)(v121 + 8) = v125 + v127;
LABEL_215:
      if ( v349 )
        sub_9C9400((__int64)&v346);
      v280 = std::_Rb_tree_increment();
      if ( v295 == v280 )
        goto LABEL_37;
    }
    sub_9C9FF0(v11, v266);
    if ( v349 )
      sub_9C9400((__int64)&v346);
LABEL_37:
    v10 = std::_Rb_tree_increment();
  }
  while ( v292 != v10 );
  v25 = (unsigned __int64 *)(v11 + 8);
  v9 = v11;
  v346.m128_u64[0] = (unsigned __int64)v347;
  v346.m128_u64[1] = 0x800000000LL;
  if ( v321 == (int *)(v11 + 8) )
    goto LABEL_61;
  v26 = (__int64)v321;
  while ( 2 )
  {
    v27 = *(_QWORD *)(v26 + 32);
    v28 = a8[5];
    sub_9D5600(
      &v340,
      (_QWORD *)(*(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 16)),
      (_QWORD *)(*(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 16)),
      v28,
      1);
    v29 = *(unsigned int *)(v28 + 16);
    v30 = v340.m128_u64[0];
    v31 = *(_QWORD *)v28;
    if ( !(_DWORD)v29 )
      goto LABEL_199;
    v32 = (v29 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
    v33 = (__int64 *)(v31 + 8LL * v32);
    v34 = *v33;
    if ( v27 == *v33 )
      goto LABEL_42;
    v116 = 1;
    if ( v34 == -4096 )
    {
LABEL_199:
      sub_9D5600(&v340, (_QWORD *)(v31 + 8 * v29), (_QWORD *)(v31 + 8 * v29), v28, 1);
      v35 = v340.m128_u64[0];
    }
    else
    {
      while ( 1 )
      {
        v117 = v116 + 1;
        v32 = (v29 - 1) & (v116 + v32);
        v33 = (__int64 *)(v31 + 8LL * v32);
        v118 = *v33;
        if ( v27 == *v33 )
          break;
        v116 = v117;
        if ( v118 == -4096 )
          goto LABEL_199;
      }
LABEL_42:
      sub_9D5600(&v340, v33, (_QWORD *)(v31 + 8 * v29), v28, 1);
      v35 = v340.m128_u64[0];
    }
    if ( v35 != v30 )
    {
      v36 = a8[5];
      v37 = *(unsigned __int64 **)(v36 + 24);
      v38 = *(unsigned int *)(v36 + 32);
      goto LABEL_45;
    }
    v89 = a8[4];
    v90 = (_QWORD *)(v89 + 8);
    v91 = *(_QWORD **)(v89 + 16);
    if ( !v91 )
      goto LABEL_55;
    v92 = v90;
    do
    {
      while ( v91[4] >= v27 )
      {
        v92 = v91;
        v91 = (_QWORD *)v91[2];
        if ( !v91 )
          goto LABEL_134;
      }
      v91 = (_QWORD *)v91[3];
    }
    while ( v91 );
LABEL_134:
    if ( v92 == v90 || v92[4] > v27 )
      goto LABEL_55;
    v93 = a8[1] + 24LL * *((unsigned int *)v92 + 10);
    v37 = *(unsigned __int64 **)v93;
    v38 = (__int64)(*(_QWORD *)(v93 + 8) - *(_QWORD *)v93) >> 3;
LABEL_45:
    v39 = 8 * v38;
    v40 = &v37[v38];
    v41 = (8 * v38) >> 5;
    v42 = v39 >> 3;
    if ( v41 <= 0 )
    {
      v44 = v37;
LABEL_125:
      if ( v42 != 2 )
      {
        if ( v42 != 3 )
        {
          if ( v42 != 1 )
            goto LABEL_55;
          goto LABEL_360;
        }
        v340.m128_u64[0] = *v44;
        if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
          goto LABEL_54;
        ++v44;
      }
      v340.m128_u64[0] = *v44;
      if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
        goto LABEL_54;
      ++v44;
LABEL_360:
      v340.m128_u64[0] = *v44;
      if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
        goto LABEL_54;
      goto LABEL_55;
    }
    v43 = &v37[4 * v41];
    v44 = v37;
    v269 = v43;
    while ( 1 )
    {
      v45 = v320;
      v46 = *v44;
      if ( !v320 )
        break;
      v47 = (unsigned __int64 *)(v11 + 8);
      do
      {
        while ( v45[4] >= v46 )
        {
          v47 = v45;
          v45 = (unsigned __int64 *)v45[2];
          if ( !v45 )
            goto LABEL_52;
        }
        v45 = (unsigned __int64 *)v45[3];
      }
      while ( v45 );
LABEL_52:
      if ( v47 == v25 || v47[4] > v46 )
        break;
      v340.m128_u64[0] = v44[1];
      if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
      {
        ++v44;
        break;
      }
      v340.m128_u64[0] = v44[2];
      if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
      {
        v44 += 2;
        break;
      }
      v340.m128_u64[0] = v44[3];
      if ( v25 == sub_9C9EE0((__int64)v11, (unsigned __int64 *)&v340) )
      {
        v44 += 3;
        break;
      }
      v44 += 4;
      if ( v269 == v44 )
      {
        v42 = v40 - v44;
        goto LABEL_125;
      }
    }
LABEL_54:
    if ( v40 != v44 && v40 != v37 )
    {
      v94 = v346.m128_u32[2];
      do
      {
        v95 = *v37;
        if ( v94 + 1 <= (unsigned __int64)v346.m128_u32[3] )
        {
          *(_QWORD *)(v346.m128_u64[0] + 8 * v94) = v95;
        }
        else
        {
          sub_22134E0(&v346, v347, v94 + 1, 8);
          *(_QWORD *)(v346.m128_u64[0] + 8LL * v346.m128_u32[2]) = v95;
        }
        ++v37;
        v94 = (unsigned int)++v346.m128_i32[2];
      }
      while ( v40 != v37 );
    }
LABEL_55:
    v26 = std::_Rb_tree_increment();
    if ( (unsigned __int64 *)v26 != v25 )
      continue;
    break;
  }
  v48 = (unsigned __int64 *)v346.m128_u64[0];
  v9 = v11;
  v49 = (unsigned __int64 *)(v346.m128_u64[0] + 8LL * v346.m128_u32[2]);
  if ( (unsigned __int64 *)v346.m128_u64[0] != v49 )
  {
    do
    {
      v50 = *v48++;
      v340.m128_u64[0] = v50;
      sub_9C9FF0(v11, (unsigned __int64 *)&v340);
    }
    while ( v49 != v48 );
    v49 = (unsigned __int64 *)v346.m128_u64[0];
  }
  if ( v49 != (unsigned __int64 *)v347 )
    free(v49);
LABEL_61:
  *(_QWORD *)v335 = 0x400000000LL;
  v334 = &v335[8];
  if ( (*(_BYTE *)(a5 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v340.m128_u64[1] = 0x400000000LL;
    v340.m128_u64[0] = (unsigned __int64)&v341;
    sub_9CE6E0(&v346, a3, (_QWORD *)a5, a4, a7);
    if ( v349 )
    {
      sub_9CAEA0((__int64)&v340, v346.m128_i64[0], v346.m128_u64[0] + ((unsigned __int64)v346.m128_u32[2] << 6));
      v55 = v349;
LABEL_66:
      if ( v55 )
        sub_9C9400((__int64)&v346);
    }
    else
    {
      v51 = a8[5];
      v52 = *(void ***)(v51 + 24);
      v53 = &v52[*(unsigned int *)(v51 + 32)];
      if ( v53 != v52 )
      {
        do
        {
          v54 = *v52++;
          ptr = v54;
          sub_9C9FF0(v9, (unsigned __int64 *)&ptr);
        }
        while ( v53 != v52 );
        v55 = v349;
        goto LABEL_66;
      }
    }
    sub_9CCB40((__int64)&v334, (__int64)&v340);
    sub_9C9400((__int64)&v340);
  }
  v56 = (int *)v320;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v287 = (unsigned __int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  if ( !v56 )
  {
    v279 = (__int64)v321;
    if ( v321 == (int *)(v9 + 8) )
      goto LABEL_267;
LABEL_77:
    v267 = v9;
    while ( 1 )
    {
      v62 = *(_QWORD *)(v279 + 32);
      v63 = a8[5];
      sub_9D5600(
        &v346,
        (_QWORD *)(*(_QWORD *)v63 + 8LL * *(unsigned int *)(v63 + 16)),
        (_QWORD *)(*(_QWORD *)v63 + 8LL * *(unsigned int *)(v63 + 16)),
        v63,
        1);
      v64 = *(unsigned int *)(v63 + 16);
      v65 = *(_QWORD *)v63;
      v66 = v346.m128_u64[0];
      if ( !(_DWORD)v64 )
        break;
      v67 = (v64 - 1) & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
      v68 = (__int64 *)(v65 + 8LL * v67);
      v69 = *v68;
      if ( v62 != *v68 )
      {
        v170 = 1;
        if ( v69 == -4096 )
          break;
        while ( 1 )
        {
          v171 = v170 + 1;
          v67 = (v64 - 1) & (v170 + v67);
          v68 = (__int64 *)(v65 + 8LL * v67);
          v172 = *v68;
          if ( v62 == *v68 )
            break;
          v170 = v171;
          if ( v172 == -4096 )
            goto LABEL_295;
        }
      }
      sub_9D5600(&v346, v68, (_QWORD *)(v65 + 8 * v64), v63, 1);
      v70 = v346.m128_u64[0];
LABEL_81:
      if ( v66 != v70 )
      {
        v71 = a8[5];
        src = 1;
        v72 = *(unsigned __int64 **)(v71 + 24);
        v281 = &v72[*(unsigned int *)(v71 + 32)];
        if ( v72 != v281 )
          goto LABEL_83;
LABEL_283:
        v169 = sub_9D04F0((_QWORD *)a1, (unsigned __int64 *)(v279 + 32));
        sub_9CAEA0((__int64)v169, (__int64)v334, (__int64)v334 + 64 * (unsigned __int64)*(unsigned int *)v335);
        goto LABEL_236;
      }
      v164 = a8[4];
      v165 = (_QWORD *)(v164 + 8);
      v166 = *(_QWORD **)(v164 + 16);
      if ( !v166 )
        goto LABEL_236;
      v167 = v165;
      do
      {
        while ( v166[4] >= v62 )
        {
          v167 = v166;
          v166 = (_QWORD *)v166[2];
          if ( !v166 )
            goto LABEL_278;
        }
        v166 = (_QWORD *)v166[3];
      }
      while ( v166 );
LABEL_278:
      if ( v167 == v165 )
        goto LABEL_236;
      if ( v167[4] > v62 )
        goto LABEL_236;
      v168 = a8[1] + 24LL * *((unsigned int *)v167 + 10);
      v72 = *(unsigned __int64 **)v168;
      v281 = *(unsigned __int64 **)(v168 + 8);
      if ( *(unsigned __int64 **)v168 == v281 )
        goto LABEL_236;
      src = 0;
      do
      {
LABEL_83:
        v73 = *v72;
        v340.m128_u64[0] = v73;
        v74 = *(_QWORD *)(v279 + 32);
        if ( v73 != v74 )
        {
          v75 = v320;
          if ( v320 )
          {
            v76 = v320;
            v77 = (unsigned __int64 *)(v267 + 8);
            do
            {
              while ( v76[4] >= v73 )
              {
                v77 = v76;
                v76 = (unsigned __int64 *)v76[2];
                if ( !v76 )
                  goto LABEL_89;
              }
              v76 = (unsigned __int64 *)v76[3];
            }
            while ( v76 );
LABEL_89:
            if ( v77 != (unsigned __int64 *)(v267 + 8) && v77[4] <= v73 )
            {
              v78 = (unsigned __int64 *)(a1 + 8);
              v79 = *(unsigned __int64 **)(a1 + 16);
              if ( !v79 )
                goto LABEL_486;
              do
              {
                while ( v79[4] >= v74 )
                {
                  v78 = v79;
                  v79 = (unsigned __int64 *)v79[2];
                  if ( !v79 )
                    goto LABEL_96;
                }
                v79 = (unsigned __int64 *)v79[3];
              }
              while ( v79 );
LABEL_96:
              if ( v287 == v78 || v78[4] > v74 )
              {
LABEL_486:
                v346.m128_u64[0] = v279 + 32;
                v80 = sub_9D0430((_QWORD *)a1, v78, (unsigned __int64 **)&v346);
                v75 = v320;
                v78 = v80;
                if ( !v320 )
                {
                  v81 = (unsigned __int64 *)(v267 + 8);
                  goto LABEL_105;
                }
              }
              v81 = (unsigned __int64 *)(v267 + 8);
              do
              {
                while ( v75[4] >= v340.m128_u64[0] )
                {
                  v81 = v75;
                  v75 = (unsigned __int64 *)v75[2];
                  if ( !v75 )
                    goto LABEL_103;
                }
                v75 = (unsigned __int64 *)v75[3];
              }
              while ( v75 );
LABEL_103:
              if ( v81 == (unsigned __int64 *)(v267 + 8) || v81[4] > v340.m128_u64[0] )
              {
LABEL_105:
                v346.m128_u64[0] = (unsigned __int64)&v340;
                v81 = sub_9D0430(v267, v81, (unsigned __int64 **)&v346);
              }
              v82 = v81[5];
              v83 = (unsigned __int64)*((unsigned int *)v81 + 12) << 6;
              v270 = v82 + v83;
              v84 = *((unsigned int *)v78 + 12);
              v286 = v83 >> 6;
              if ( (v83 >> 6) + v84 > (unsigned __int64)*((unsigned int *)v78 + 13) )
              {
                sub_9CAC70((__int64)(v78 + 5), (v83 >> 6) + v84);
                v84 = *((unsigned int *)v78 + 12);
              }
              v85 = v78[5] + (v84 << 6);
              if ( v82 == v270 )
              {
LABEL_233:
                *((_DWORD *)v78 + 12) = v84 + v286;
                goto LABEL_234;
              }
              while ( 2 )
              {
                *(_QWORD *)v85 = *(_QWORD *)v82;
                *(_DWORD *)(v85 + 8) = *(_DWORD *)(v82 + 8);
                *(_QWORD *)(v85 + 12) = *(_QWORD *)(v82 + 12);
                *(_DWORD *)(v85 + 20) = *(_DWORD *)(v82 + 20);
                *(_QWORD *)(v85 + 24) = v85 + 40;
                v87 = *(_BYTE **)(v82 + 24);
                v88 = *(_QWORD *)(v82 + 32);
                if ( &v87[v88] && !v87 )
                  goto LABEL_347;
                if ( (unsigned __int64)v88 > 0xF )
                {
                  if ( v88 < 0 )
                    goto LABEL_370;
                  v86 = (_BYTE *)operator new(v88 + 1);
                  *(_QWORD *)(v85 + 40) = v88;
                  *(_QWORD *)(v85 + 24) = v86;
LABEL_270:
                  memcpy(v86, v87, v88);
                  v86 = *(_BYTE **)(v85 + 24);
                }
                else
                {
                  v86 = *(_BYTE **)(v85 + 24);
                  if ( v88 == 1 )
                  {
                    *v86 = *v87;
                    v86 = *(_BYTE **)(v85 + 24);
                  }
                  else if ( v88 )
                  {
                    goto LABEL_270;
                  }
                }
                *(_QWORD *)(v85 + 32) = v88;
                v82 += 64LL;
                v85 += 64LL;
                v86[v88] = 0;
                *(_BYTE *)(v85 - 8) = *(_BYTE *)(v82 - 8);
                if ( v270 == v82 )
                {
                  LODWORD(v84) = *((_DWORD *)v78 + 12);
                  goto LABEL_233;
                }
                continue;
              }
            }
          }
        }
LABEL_234:
        ++v72;
      }
      while ( v281 != v72 );
      if ( src )
        goto LABEL_283;
LABEL_236:
      v279 = std::_Rb_tree_increment();
      if ( (char *)v279 == v267 + 8 )
      {
        v9 = v267;
        i = *(_QWORD *)(a1 + 24);
        goto LABEL_238;
      }
    }
LABEL_295:
    sub_9D5600(&v346, (_QWORD *)(v65 + 8 * v64), (_QWORD *)(v65 + 8 * v64), v63, 1);
    v70 = v346.m128_u64[0];
    goto LABEL_81;
  }
  v346.m128_u64[0] = a1;
  v57 = sub_9D0560(a1, v56, a1 + 8, (__int64)&v346);
  for ( i = (__int64)v57; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
    ;
  v59 = v57;
  *(_QWORD *)(a1 + 24) = i;
  while ( v59[3] )
    v59 = (_QWORD *)v59[3];
  v60 = v323;
  *(_QWORD *)(a1 + 16) = v57;
  v61 = v321;
  *(_QWORD *)(a1 + 32) = v59;
  *(_QWORD *)(a1 + 40) = v60;
  v279 = (__int64)v61;
  if ( v61 != (int *)(v9 + 8) )
    goto LABEL_77;
LABEL_238:
  if ( v287 != (unsigned __int64 *)i )
  {
    v268 = v9;
    while ( 1 )
    {
      v148 = *(int **)(i + 40);
      v149 = (unsigned __int64)*(unsigned int *)(i + 48) << 6;
      v150 = (int *)((char *)v148 + v149);
      v151 = v149 >> 6;
      if ( (unsigned __int8)((__int64)*(unsigned int *)(i + 48) >> 2) )
      {
        if ( *v148 >= 0 && v148[1] >= 0 )
        {
          v152 = v148 + 16;
          if ( v148[16] >= 0 && v148[17] >= 0 )
          {
            v152 = v148 + 32;
            if ( v148[32] >= 0 )
            {
              v153 = v148[33];
              v154 = (__int64)&v148[64 * (__int64)(char)((__int64)*(unsigned int *)(i + 48) >> 2) - 32];
              while ( v153 >= 0 )
              {
                v148 = v152 + 16;
                if ( v152[16] < 0 || v152[17] < 0 )
                  goto LABEL_257;
                v148 = v152 + 32;
                if ( v152 == (int *)v154 )
                {
                  v151 = ((char *)v150 - (char *)v148) >> 6;
                  goto LABEL_285;
                }
                if ( v152[32] < 0 )
                  goto LABEL_257;
                if ( v152[33] < 0 )
                  goto LABEL_257;
                v148 = v152 + 48;
                if ( v152[48] < 0 || v152[49] < 0 )
                  goto LABEL_257;
                v152 += 64;
                v153 = v152[1];
                if ( *v152 < 0 )
                  break;
              }
            }
          }
          v148 = v152;
        }
        goto LABEL_257;
      }
LABEL_285:
      if ( v151 == 2 )
        goto LABEL_365;
      if ( v151 != 3 )
      {
        if ( v151 != 1 )
          goto LABEL_290;
LABEL_288:
        if ( *v148 >= 0 && v148[1] >= 0 )
          goto LABEL_290;
        goto LABEL_257;
      }
      if ( *v148 >= 0 && v148[1] >= 0 )
        break;
LABEL_257:
      if ( v150 != v148 )
        goto LABEL_258;
LABEL_290:
      if ( (unsigned __int8)sub_9CB8F0(i + 40, *(_QWORD *)(a4 + 2312)) )
      {
LABEL_258:
        v155 = std::_Rb_tree_increment();
        v156 = std::_Rb_tree_rebalance_for_erase();
        v157 = *(_QWORD **)(v156 + 40);
        v158 = (_QWORD *)v156;
        v159 = (unsigned __int64)*(unsigned int *)(v156 + 48) << 6;
        v160 = (_QWORD *)((char *)v157 + v159);
        if ( v157 != (_QWORD *)((char *)v157 + v159) )
        {
          do
          {
            while ( 1 )
            {
              v160 -= 8;
              v161 = (_QWORD *)v160[3];
              if ( v161 == v160 + 5 )
                break;
              operator delete(v161);
              if ( v157 == v160 )
                goto LABEL_261;
            }
          }
          while ( v157 != v160 );
LABEL_261:
          v160 = (_QWORD *)v158[5];
        }
        if ( v160 != v158 + 7 )
          free(v160);
        v162 = v158;
        i = v155;
        operator delete(v162);
        --*(_QWORD *)(a1 + 40);
        goto LABEL_265;
      }
      i = std::_Rb_tree_increment();
LABEL_265:
      if ( v287 == (unsigned __int64 *)i )
      {
        v9 = v268;
        goto LABEL_267;
      }
    }
    v148 += 16;
LABEL_365:
    if ( *v148 >= 0 && v148[1] >= 0 )
    {
      v148 += 16;
      goto LABEL_288;
    }
    goto LABEL_257;
  }
LABEL_267:
  sub_9C9400((__int64)&v334);
  sub_9C9F30((__int64)v9, (__int64)v320);
  return a1;
}

