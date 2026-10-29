__int64 __fastcall sub_18B6770(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  unsigned int v5; // r13d
  char *v6; // rax
  __int64 v7; // rcx
  char v8; // r14
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  void **v18; // r9
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r14
  __int64 v25; // rsi
  __int64 *v26; // rax
  __int64 v27; // r13
  __int64 *v28; // rax
  __int64 v29; // r14
  int v30; // r15d
  __int64 *v31; // rdx
  __int64 *v32; // rcx
  void **v33; // rax
  __m128i v34; // xmm2
  __int64 v35; // xmm3_8^8
  __m128i v36; // xmm4
  __m128i v37; // xmm5
  unsigned int v38; // r15d
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __m128i v41; // xmm0
  __int64 v43; // rbx
  __m128i si128; // xmm7
  __m128i v45; // xmm6
  __m128i v46; // xmm7
  __m128i v47; // xmm6
  __m128i v48; // xmm7
  char **v49; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int8 v52; // si
  __int64 v53; // rdi
  char v54; // dl
  __int64 v55; // rax
  char *v56; // r14
  _QWORD *v57; // rsi
  _QWORD *v58; // rdi
  void *v59; // rdx
  signed __int64 *v60; // rax
  signed __int64 v61; // rdi
  unsigned __int64 v62; // rsi
  signed __int64 v63; // rax
  int v64; // r14d
  unsigned __int8 *v65; // r15
  __int64 *v66; // rcx
  __int64 *p_src; // rbx
  void **v68; // r15
  __m128i *v69; // rax
  __int64 v70; // rcx
  _BYTE *v71; // rsi
  _BYTE *v72; // rdi
  __int64 *v73; // rax
  __int64 *v74; // r9
  __int64 v75; // r14
  unsigned __int64 v76; // rdx
  __int64 v77; // r14
  unsigned __int64 v78; // rax
  void **v79; // rcx
  unsigned __int64 v80; // r14
  _BYTE *v81; // rax
  __int64 *v82; // rsi
  signed __int64 v83; // rbx
  void *v84; // rdi
  unsigned int v85; // edx
  unsigned __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  void *v92; // rax
  _QWORD *v93; // rax
  unsigned __int8 *v94; // rbx
  unsigned __int8 *v95; // rbp
  __int64 *v96; // r15
  __int64 v97; // rax
  __int64 *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rcx
  void *v101; // rsi
  __int64 v102; // rax
  __int64 *v103; // rbx
  __int64 *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  bool v108; // bl
  bool v109; // al
  bool v110; // bl
  unsigned int v111; // edx
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 *v116; // r9
  unsigned __int64 *v117; // r14
  __int64 v118; // r13
  const __m128i *v119; // rbx
  unsigned __int64 *v120; // rbp
  void *v121; // r12
  void *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r14
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 *v131; // rdx
  __int64 *v132; // r9
  __int64 v133; // r14
  unsigned __int64 v134; // rax
  void **v135; // rcx
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // r14
  void *v138; // rax
  __int64 *v139; // rsi
  signed __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rsi
  __int64 *v143; // rbx
  void **v144; // rdi
  void *v145; // rbx
  __int64 *v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 *v150; // rbp
  __int64 *v151; // rdi
  __int64 v152; // rax
  void **v153; // rax
  size_t v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // r14
  void *v160; // rax
  _QWORD *v161; // rax
  __int64 v162; // r14
  unsigned __int8 *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 *v171; // rcx
  __int64 v172; // rbp
  void *v173; // rax
  _QWORD *v174; // rax
  __int64 *v175; // rcx
  __int64 *v176; // r8
  __int64 *v177; // rax
  __int64 v178; // rdx
  void **v179; // rdi
  void *v180; // rbp
  _BYTE *v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rax
  _BYTE *v185; // r15
  _BYTE *v186; // rdi
  __int64 v187; // rax
  void **v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rbx
  __int64 v192; // r8
  __int64 v193; // r9
  void *v194; // rax
  _QWORD *v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rdx
  __int64 v198; // rdx
  int v199; // eax
  __int64 v200; // rdx
  int v201; // eax
  __int64 v202; // rdx
  int v203; // eax
  __int64 v204; // rdx
  int v205; // eax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rbp
  __int64 v209; // r8
  __int64 v210; // r9
  void *v211; // rax
  _QWORD *v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  void **v215; // rsi
  void **v216; // r14
  char *v217; // rdi
  __int64 v218; // rax
  __int64 v219; // rbp
  __int64 *v220; // rax
  __int64 *v221; // rbp
  __int64 *v222; // r12
  __int64 *v223; // rdi
  __int64 v224; // rdx
  int v225; // eax
  __int64 v226; // rax
  __int64 v227; // r15
  __int64 v228; // rcx
  __int64 v229; // r15
  unsigned __int8 *v230; // r13
  unsigned __int8 *v231; // rbp
  unsigned __int8 *v232; // r12
  __int64 v233; // rbx
  void *v234; // rdi
  __int64 v235; // rax
  __int64 v236; // rbp
  __int64 v237; // rdx
  __int64 v238; // rbp
  __int64 *v239; // r13
  __int64 v240; // rbx
  __int64 *v241; // r12
  void *v242; // rdi
  __int64 v243; // rbx
  int v244; // r14d
  __int64 *v245; // rdi
  __int64 v246; // r14
  __int64 *v247; // rcx
  __int64 v248; // rax
  __int64 v249; // r14
  __int64 v250; // rdx
  __int64 v251; // r14
  __int64 v252; // rbx
  __int64 *v253; // rbp
  void *v254; // rdi
  __int64 v255; // r14
  int v256; // ebx
  __int64 *v257; // rdi
  __int64 v258; // rax
  __int64 v259; // rcx
  int v260; // eax
  __int64 v261; // rbx
  int v262; // r14d
  __int64 *v263; // rdi
  __int64 v264; // r14
  __int64 *v265; // rcx
  __int64 v266; // r14
  int v267; // ebx
  __int64 *v268; // rdi
  __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // r14
  __int64 v272; // rax
  __int64 v273; // r14
  __int64 *v274; // rbp
  __int64 v275; // rbx
  __int64 *v276; // r12
  void *v277; // rdi
  __m128i v278; // [rsp+0h] [rbp-2E8h] BYREF
  unsigned __int8 **p_ptr; // [rsp+18h] [rbp-2D0h]
  __int64 *v280; // [rsp+20h] [rbp-2C8h]
  __int64 (__fastcall ***v281)(); // [rsp+28h] [rbp-2C0h]
  void **v282; // [rsp+30h] [rbp-2B8h]
  __int64 v283; // [rsp+38h] [rbp-2B0h]
  __int64 *v284; // [rsp+40h] [rbp-2A8h] BYREF
  __int64 *v285; // [rsp+48h] [rbp-2A0h]
  __int64 *v286; // [rsp+50h] [rbp-298h]
  __int64 *v287; // [rsp+58h] [rbp-290h]
  char v288; // [rsp+66h] [rbp-282h] BYREF
  char v289; // [rsp+67h] [rbp-281h] BYREF
  __int64 v290; // [rsp+68h] [rbp-280h] BYREF
  void *v291[2]; // [rsp+70h] [rbp-278h] BYREF
  _BYTE v292[16]; // [rsp+80h] [rbp-268h] BYREF
  void *v293; // [rsp+90h] [rbp-258h] BYREF
  __int64 v294; // [rsp+98h] [rbp-250h]
  __m128i v295; // [rsp+A0h] [rbp-248h] BYREF
  void *src; // [rsp+B0h] [rbp-238h] BYREF
  size_t n; // [rsp+B8h] [rbp-230h]
  __int64 *v298; // [rsp+C0h] [rbp-228h]
  __int64 *v299; // [rsp+D8h] [rbp-210h]
  __int64 *v300; // [rsp+E0h] [rbp-208h]
  __int64 (__fastcall **v301)(); // [rsp+100h] [rbp-1E8h] BYREF
  int v302; // [rsp+108h] [rbp-1E0h]
  __int128 v303; // [rsp+110h] [rbp-1D8h]
  _WORD *v304; // [rsp+120h] [rbp-1C8h]
  char v305; // [rsp+128h] [rbp-1C0h]
  int v306; // [rsp+12Ch] [rbp-1BCh]
  unsigned __int8 **v307; // [rsp+130h] [rbp-1B8h]
  void *v308; // [rsp+140h] [rbp-1A8h] BYREF
  __int128 v309; // [rsp+148h] [rbp-1A0h] BYREF
  void *dest; // [rsp+158h] [rbp-190h]
  __m128 v311; // [rsp+160h] [rbp-188h]
  char v312; // [rsp+178h] [rbp-170h]
  void *v313[2]; // [rsp+180h] [rbp-168h] BYREF
  __m128i v314; // [rsp+190h] [rbp-158h] BYREF
  __int64 *v315; // [rsp+1A0h] [rbp-148h]
  __int64 v316; // [rsp+1A8h] [rbp-140h]
  __m128i v317; // [rsp+1C0h] [rbp-128h] BYREF
  __m128i v318; // [rsp+1D0h] [rbp-118h] BYREF
  __m128i v319; // [rsp+1E0h] [rbp-108h] BYREF
  __int64 v320; // [rsp+1F0h] [rbp-F8h]
  char v321; // [rsp+1F8h] [rbp-F0h]
  unsigned int v322; // [rsp+200h] [rbp-E8h]
  char v323; // [rsp+204h] [rbp-E4h]
  __m256i ptr; // [rsp+210h] [rbp-D8h] BYREF
  __int64 *v325; // [rsp+230h] [rbp-B8h]
  __int64 *v326; // [rsp+238h] [rbp-B0h]
  __int64 v327; // [rsp+240h] [rbp-A8h]
  __int64 v328; // [rsp+248h] [rbp-A0h]
  __m128i v329; // [rsp+250h] [rbp-98h]
  __m128i v330; // [rsp+260h] [rbp-88h]
  __m128i v331; // [rsp+270h] [rbp-78h]
  __int64 v332; // [rsp+280h] [rbp-68h]
  char v333; // [rsp+288h] [rbp-60h]
  unsigned int v334; // [rsp+290h] [rbp-58h]
  char v335; // [rsp+294h] [rbp-54h]

  v6 = *(char **)(a1 + 232);
  if ( (v6[13] & 0x20) == 0 && (v6[1] & 0x40) == 0 )
    return 0;
  v7 = *(_QWORD *)(a3 + 40);
  v8 = 0;
  if ( (*(_DWORD *)(a3 + 40) & 7) == 6 )
  {
    v7 = *(_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD;
    v8 = (_DWORD)v7 == 1;
  }
  v9 = *v6;
  v10 = a1;
  v11 = a3;
  v12 = (__int64 *)a2;
  v288 = 0;
  v289 = 0;
  LOBYTE(v5) = (v9 & 0x20) == 0;
  if ( !sub_18B0030(a2, a2, a3, v7) && !sub_18B0030(v11, a2, v13, v14) )
  {
    LODWORD(v281) = *(_DWORD *)(v11 + 24);
    v17 = *(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v18 = *(void ***)v17;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)v18[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
        v18 = (void **)sub_F63050(v18, a2, v15, v16);
      else
        v18 = nullptr;
    }
    v19 = *(_DWORD *)(a2 + 24);
    v20 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v21 = *(__int64 **)v20;
    if ( *(_BYTE *)(*(_QWORD *)v20 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
      {
        LODWORD(p_ptr) = *(_DWORD *)(a2 + 24);
        v278.m128i_i64[0] = (__int64)v18;
        v106 = sub_F63050(v21, a2, v15, v21);
        v18 = (void **)v278.m128i_i64[0];
        v19 = (int)p_ptr;
        v21 = (__int64 *)v106;
      }
      else
      {
        v21 = nullptr;
      }
    }
    v284 = v21;
    LODWORD(v285) = v19;
    v282 = v18;
    v280 = (__int64 *)(a1 + 8);
    p_ptr = (unsigned __int8 **)&ptr;
    sub_168B9B0((__int64)&ptr, a1 + 8, 112);
    v278.m128i_i64[0] = (__int64)v313;
    sub_168B9B0((__int64)v313, a1 + 8, (-(unsigned __int8)v5 & 0xFFFFFA69) + 5606);
    v24 = sub_18B0720(
            a1,
            (__int64)v313,
            (__int64)&ptr,
            (__int64)v284,
            (unsigned int)v285,
            (__int64)v282,
            a4,
            a5,
            (unsigned int)v281,
            &v288,
            &v289,
            1,
            v8);
    if ( v313[0] && v313[1] )
      sub_1580C40((unsigned __int64)v313[1], (unsigned __int64)v313[0]);
    v25 = ptr.m256i_i64[0];
    if ( ptr.m256i_i64[0] && ptr.m256i_i64[1] )
      sub_1580C40(ptr.m256i_u64[1], ptr.m256i_u64[0]);
    if ( !v24 )
    {
      v107 = *(_QWORD *)(a1 + 232);
      if ( (*(_BYTE *)(v107 + 1) & 0x10) != 0 && (*(_BYTE *)(v107 + 13) & 0x20) != 0 )
      {
        v108 = sub_18AFF90((__int64)v12, v25);
        if ( v108 != sub_18AFF90(v11, v25) )
        {
          sub_168B9F0((__int64)p_ptr, v280, *(_DWORD *)(v11 + 24), 0x15C7u, 0);
          v109 = sub_18AFF90((__int64)v12, (__int64)v280);
          v110 = v109;
          if ( v333 )
          {
            sub_AE9DF0(p_ptr + 4, v109, 2u);
          }
          else if ( v335 )
          {
            v208 = sub_168B9E0(p_ptr);
            v211 = (void *)ptr.m256i_i64[2];
            if ( ptr.m256i_i64[2] )
              v211 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)ptr.m256i_i64[2] + 32LL))(ptr.m256i_i64[2]);
            v313[0] = v211;
            v212 = sub_1587BC0(v208, (__int64 *)v278.m128i_i64[0], v206, v207, v209, v210);
            sub_AE9DF0((unsigned __int8 **)(*v212 + 32LL * v334 + 8), v110, 2u);
          }
          sub_15F7200(p_ptr);
          v111 = *((_DWORD *)v12 + 6);
          if ( v111 )
          {
            v5 = 0;
            sub_168B9F0((__int64)p_ptr, v280, v111, 0x70u, 0);
            sub_15F7200(p_ptr);
            return v5;
          }
        }
      }
      return 0;
    }
    LOBYTE(v281) = v288;
    if ( !v288 )
      return v5;
    v26 = (__int64 *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v27 = *v26;
    if ( *(_BYTE *)(*v26 + 16) != 26 )
      v27 = sub_F63050(*v26, v25, v22, v23);
    if ( v289 )
    {
      if ( (v25 = *((unsigned int *)v12 + 6), !(_DWORD)v25)
        || (v112 = sub_1021680(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2312LL), v25)) != 0 && v112 != 3
        || (v25 = 0, (unsigned int)sub_B75A50((__int64)v12, 0)) )
      {
        if ( (unsigned __int8)sub_B82220((__int64)v12) )
        {
          v43 = *(_QWORD *)(a1 + 248);
          sub_A5E110((__m128 *)v278.m128i_i64[0], v27);
          si128 = _mm_load_si128((const __m128i *)v313);
          v45 = _mm_load_si128(&v317);
          v325 = nullptr;
          v326 = nullptr;
          *(__m128i *)ptr.m256i_i8 = si128;
          v46 = _mm_load_si128(&v314);
          v329 = v45;
          v47 = _mm_load_si128(&v319);
          *(__m128i *)&ptr.m256i_u64[2] = v46;
          v48 = _mm_load_si128(&v318);
          v331 = v47;
          v330 = v48;
          v332 = v320;
          ptr.m256i_i32[6] = 1;
          v327 = 0;
          v328 = 0;
          v329.m128i_i64[0] = 0;
          *(_QWORD *)(v11 + 48) = sub_A73610(
                                    v43,
                                    *(_QWORD *)(v27 + 24),
                                    (__int64 *)(v27 + 48),
                                    *(unsigned __int16 *)(v27 + 22),
                                    (const __m128i *)p_ptr,
                                    0);
          return 0;
        }
      }
    }
    v28 = (__int64 *)(v12[6] & 0xFFFFFFFFFFFFFFF0LL);
    v29 = *v28;
    if ( *(_BYTE *)(*v28 + 16) != 26 )
      v29 = sub_F63050(*v28, v25, v22, v23);
    v30 = (*(_BYTE *)(v29 + 19) >> 1) & 0xF;
    switch ( v30 )
    {
      case 2:
        v32 = (__int64 *)sub_6F33F0(v29);
        v299 = v32;
        v300 = v31;
        break;
      case 7:
        v31 = nullptr;
        v32 = nullptr;
        v30 = 0;
        break;
      case 8:
        v31 = nullptr;
        v32 = nullptr;
        v30 = 5;
        break;
      case 6:
        sub_B88650(v11, 1);
        if ( !sub_B74C70(v11) )
          sub_B760E0(v11, nullptr, nullptr);
        goto LABEL_120;
      default:
        v31 = nullptr;
        v32 = nullptr;
        break;
    }
    v33 = *(void ***)(a1 + 248);
    v285 = v31;
    v284 = v32;
    v282 = v33;
    sub_A5E110((__m128 *)v278.m128i_i64[0], v27);
    a5 = (__m128)_mm_load_si128((const __m128i *)v313);
    v327 = 0;
    v34 = _mm_load_si128(&v314);
    v326 = v285;
    *(__m128 *)ptr.m256i_i8 = a5;
    v35 = _mm_load_si128(&v317).m128i_i64[1];
    v36 = _mm_load_si128(&v318);
    *(__m128i *)&ptr.m256i_u64[2] = v34;
    v37 = _mm_load_si128(&v319);
    v329.m128i_i64[1] = v35;
    v330 = v36;
    v331 = v37;
    v332 = v320;
    ptr.m256i_i32[6] = v30;
    v325 = v284;
    v328 = 0;
    v329.m128i_i64[0] = 0;
    *(_QWORD *)(v11 + 48) = sub_A73610(
                              (__int64)v282,
                              *(_QWORD *)(v27 + 24),
                              (__int64 *)(v27 + 48),
                              *(unsigned __int16 *)(v27 + 22),
                              (const __m128i *)p_ptr,
                              0);
    if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 && (unsigned int)(v30 - 1) <= 2
      || !sub_B74C70(v11) && sub_B760E0(v11, nullptr, nullptr) )
    {
      goto LABEL_30;
    }
    if ( v30 == 4 )
    {
      if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
      {
LABEL_30:
        v5 = 0;
        v38 = 5608;
        goto LABEL_31;
      }
      return 0;
    }
LABEL_120:
    v5 = (unsigned __int8)v281;
    v38 = 4188;
LABEL_31:
    v302 = 2;
    *(__m128i *)&ptr.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr.m256i_i64[0] = (__int64)(p_ptr + 3);
    v307 = p_ptr;
    v305 = 0;
    v301 = &off_2BEBEE0;
    v281 = &v301;
    v306 = 1;
    v304 = nullptr;
    v303 = 0;
    sub_227B8B0(&v301, 0, 0, 0);
    switch ( (*(_BYTE *)(v29 + 19) >> 1) & 0xF )
    {
      case 1:
        sub_995540((__int64)v281, "throw()");
        break;
      case 2:
        sub_995540((__int64)v281, "throw(");
        v282 = &v308;
        v117 = (unsigned __int64 *)sub_6F33F0(v29);
        if ( v117 != &v117[v113] )
        {
          LOBYTE(v285) = v5;
          v118 = (__int64)v281;
          LODWORD(v284) = v38;
          v119 = (const __m128i *)v282;
          v286 = (__int64 *)v11;
          v120 = &v117[v113];
          v282 = (void **)v12;
          v121 = (void *)(v278.m128i_i64[0] + 16);
          while ( 1 )
          {
            v122 = (void *)sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v113, v114, v115, v116);
            *(_QWORD *)&v309 = v123;
            v308 = v122;
            sub_F785A0(v278.m128i_i64[0], v117, v119);
            sub_227BF10(v118, v313[0], v313[1]);
            if ( v313[0] != v121 )
              operator delete(v313[0]);
            if ( ++v117 == v120 )
              break;
            v113 = (__int64)v304;
            if ( *((_QWORD *)&v303 + 1) - (_QWORD)v304 > 1u )
              *v304++ = 8236;
            else
              sub_227BF10(v118, ", ", 2);
          }
          v10 = a1;
          v5 = (unsigned __int8)v285;
          v38 = (unsigned int)v284;
          v12 = (__int64 *)v282;
          v11 = (__int64)v286;
        }
        sub_995540((__int64)v281, ")");
        break;
      case 4:
        sub_995540((__int64)v281, "__attribute__((nothrow))");
        break;
      case 5:
        sub_995540((__int64)v281, "noexcept");
        break;
      case 6:
      case 7:
      case 8:
        sub_995540((__int64)v281, "noexcept(");
        v51 = *(unsigned __int8 *)(v29 + 19);
        v52 = (*(_BYTE *)(v29 + 19) >> 1) & 0xF;
        if ( (unsigned int)v52 - 6 > 2 )
        {
          v56 = nullptr;
        }
        else
        {
          v53 = 8LL * *(unsigned __int16 *)(v29 + 22) + 48;
          v54 = BYTE3(*(_QWORD *)(v29 + 16));
          v55 = (v54 & 0x40) != 0;
          v50 = (v29 + v53 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v51 & 0x40) != 0 )
            v55 += (*(_BYTE *)(((v29 + v53 + (((char)v51 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
          v49 = (char **)(v50 + 8 * v55);
          if ( v52 == 2 )
          {
            v51 = ((char)v51 >> 5) & 4;
            v49 = (char **)(v50 + 8 * ((*(_WORD *)((v29 + (char)v51 + v53 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v55));
          }
          v56 = *v49;
        }
        v57 = *(_QWORD **)(v10 + 240);
        v58 = *(_QWORD **)(v10 + 248);
        v282 = (void **)"\n";
        v283 = 1;
        v313[0] = (void *)sub_16043A0(v58, v57, (__int64)v49, v51, v50, (__int64 *)"\n");
        v313[1] = v59;
        sub_F07C00(v56, (__int64)v281, 0, (const __m128i *)v278.m128i_i64[0], 0, 0, "\n", 1);
        sub_995540((__int64)v281, ")");
        break;
      default:
        break;
    }
    v60 = (signed __int64 *)(*(_QWORD *)(v11 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v11 + 56) & 4) != 0 )
      v60 = (signed __int64 *)v60[4];
    if ( v60 )
    {
      v62 = (unsigned __int64)(v60 + 1);
      v63 = *v60;
      v61 = v63;
      if ( !(v63 & 7 | (v63 >> 3) & 1) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 40
          || (v63 = sub_F6D010(v63, v62), v62 = v86, v61 = v63, !(v63 & 7 | (v63 >> 3) & 1)) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
          {
            if ( v63 )
            {
              if ( (*(_BYTE *)(v63 + 20) & 1) == 0 )
              {
                v64 = sub_15F0EF0(v10, *(_DWORD *)(v62 + 12), 0, (__m128i)0LL, *(double *)a5.m128_u64);
                if ( v64 )
                {
                  sub_168B9F0(v278.m128i_i64[0], v280, *(_DWORD *)(v11 + 24), v38, 0);
                  if ( v321 )
                  {
                    v142 = v11;
                    sub_AE9DF0((unsigned __int8 **)(v278.m128i_i64[0] + 32), v11, 0xAu);
                    v282 = &v308;
                  }
                  else
                  {
                    if ( !v323 )
                    {
                      v65 = v307[1];
                      v66 = (__int64 *)*v307;
                      v282 = &v308;
LABEL_57:
                      p_src = (__int64 *)&src;
                      goto LABEL_58;
                    }
                    v191 = sub_168B9E0(v278.m128i_i64[0]);
                    v194 = (void *)v314.m128i_i64[0];
                    if ( v314.m128i_i64[0] )
                      v194 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v314.m128i_i64[0] + 32LL))(v314.m128i_i64[0]);
                    v308 = v194;
                    v282 = &v308;
                    v195 = sub_1587BC0(v191, (__int64 *)&v308, v189, v190, v192, v193);
                    v142 = v11;
                    sub_AE9DF0((unsigned __int8 **)(*v195 + 32LL * v322 + 8), v11, 0xAu);
                  }
                  v65 = v307[1];
                  v66 = (__int64 *)*v307;
                  if ( v321 )
                  {
                    v143 = v315;
                    if ( !v315 )
                    {
                      v198 = v316;
                      v199 = *(_DWORD *)(v316 + 14976);
                      if ( v199 )
                      {
                        v218 = (unsigned int)(v199 - 1);
                        *(_DWORD *)(v316 + 14976) = v218;
                        v143 = *(__int64 **)(v198 + 8 * v218 + 14848);
                        v219 = *((unsigned int *)v143 + 134);
                        *(_BYTE *)v143 = 0;
                        v220 = (__int64 *)v143[66];
                        *((_DWORD *)v143 + 106) = 0;
                        v221 = &v220[8 * v219];
                        v284 = v220;
                        if ( v220 != v221 )
                        {
                          v285 = v12;
                          v222 = v66;
                          do
                          {
                            while ( 1 )
                            {
                              v221 -= 8;
                              v223 = (__int64 *)v221[3];
                              if ( v223 == v221 + 5 )
                                break;
                              operator delete(v223);
                              if ( v284 == v221 )
                                goto LABEL_252;
                            }
                          }
                          while ( v284 != v221 );
LABEL_252:
                          v66 = v222;
                          v12 = v285;
                        }
                        *((_DWORD *)v143 + 134) = 0;
                      }
                      else
                      {
                        v284 = (__int64 *)*v307;
                        v143 = (__int64 *)operator new(0x3A0u);
                        *(_BYTE *)v143 = 0;
                        v143[12] = (__int64)(v143 + 14);
                        v143[16] = (__int64)(v143 + 18);
                        v143[20] = (__int64)(v143 + 22);
                        v143[24] = (__int64)(v143 + 26);
                        v143[28] = (__int64)(v143 + 30);
                        v143[32] = (__int64)(v143 + 34);
                        v143[36] = (__int64)(v143 + 38);
                        v143[40] = (__int64)(v143 + 42);
                        v143[44] = (__int64)(v143 + 46);
                        v143[48] = (__int64)(v143 + 50);
                        v143[52] = (__int64)(v143 + 54);
                        v143[13] = 0;
                        *((_BYTE *)v143 + 112) = 0;
                        v143[17] = 0;
                        *((_BYTE *)v143 + 144) = 0;
                        v143[21] = 0;
                        *((_BYTE *)v143 + 176) = 0;
                        v143[25] = 0;
                        *((_BYTE *)v143 + 208) = 0;
                        v143[29] = 0;
                        *((_BYTE *)v143 + 240) = 0;
                        v143[33] = 0;
                        *((_BYTE *)v143 + 272) = 0;
                        v143[37] = 0;
                        *((_BYTE *)v143 + 304) = 0;
                        v143[41] = 0;
                        *((_BYTE *)v143 + 336) = 0;
                        v143[45] = 0;
                        *((_BYTE *)v143 + 368) = 0;
                        v143[49] = 0;
                        *((_BYTE *)v143 + 400) = 0;
                        v143[53] = 0x800000000LL;
                        v66 = v284;
                        v143[66] = (__int64)(v143 + 68);
                        v143[67] = 0x600000000LL;
                      }
                      v315 = v143;
                    }
                    v144 = v282;
                    *((_BYTE *)v143 + *(unsigned __int8 *)v143 + 1) = 0;
                    v145 = v144 + 2;
                    v308 = v144 + 2;
                    sub_18B00B0(v144, v66, (__int64)&v65[(_QWORD)v66]);
                    v146 = v315;
                    v147 = *(unsigned __int8 *)v315;
                    *(_BYTE *)v315 = v147 + 1;
                    v148 = (unsigned __int8)v147;
                    v149 = 4 * (v147 + 3);
                    v150 = &v146[v149];
                    v151 = (__int64 *)v146[v149];
                    if ( v308 == v145 )
                    {
                      v196 = v309;
                      if ( (_QWORD)v309 )
                      {
                        if ( (_QWORD)v309 == 1 )
                          *(_BYTE *)v151 = BYTE8(v309);
                        else
                          memcpy(v151, v308, v309);
                        v196 = v309;
                        v151 = (__int64 *)*v150;
                      }
                      v150[1] = v196;
                      *((_BYTE *)v151 + v196) = 0;
                      v151 = (__int64 *)v308;
                      goto LABEL_164;
                    }
                    if ( v151 == &v146[v149 + 2] )
                    {
                      *v150 = (__int64)v308;
                      *(_OWORD *)(v150 + 1) = v309;
                    }
                    else
                    {
                      v152 = v146[4 * v148 + 14];
                      *v150 = (__int64)v308;
                      *(_OWORD *)(v150 + 1) = v309;
                      if ( v151 )
                      {
                        v308 = v151;
                        *((_QWORD *)&v309 + 1) = v152;
LABEL_164:
                        v153 = v282;
                        *(_QWORD *)&v309 = 0;
                        *(_BYTE *)v151 = 0;
                        if ( v308 != v153 + 2 )
                          operator delete(v308);
                        p_src = (__int64 *)&src;
                        v65 = v307[1];
                        v66 = (__int64 *)*v307;
                        goto LABEL_58;
                      }
                    }
                    v151 = (__int64 *)(v282 + 2);
                    v308 = v282 + 2;
                    goto LABEL_164;
                  }
                  if ( !v323 )
                    goto LABEL_57;
                  v284 = (__int64 *)*v307;
                  v167 = sub_168B9E0(v278.m128i_i64[0]);
                  v171 = v284;
                  v172 = v167;
                  v173 = (void *)v314.m128i_i64[0];
                  if ( v314.m128i_i64[0] )
                  {
                    v173 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v314.m128i_i64[0]
                                                                                                  + 32LL))(
                                     v314.m128i_i64[0],
                                     v142,
                                     *(_QWORD *)v314.m128i_i64[0],
                                     v284);
                    v171 = v284;
                  }
                  p_src = (__int64 *)&src;
                  v284 = v171;
                  src = v173;
                  v174 = sub_1587BC0(v172, (__int64 *)&src, v168, (__int64)v171, v169, v170);
                  v175 = v284;
                  v176 = (__int64 *)(*v174 + 32LL * v322);
                  v177 = (__int64 *)v176[1];
                  if ( !v177 )
                  {
                    v202 = v176[2];
                    v203 = *(_DWORD *)(v202 + 14976);
                    if ( v203 )
                    {
                      v235 = (unsigned int)(v203 - 1);
                      *(_DWORD *)(v202 + 14976) = v235;
                      v177 = *(__int64 **)(v202 + 8 * v235 + 14848);
                      v236 = *((unsigned int *)v177 + 134);
                      *(_BYTE *)v177 = 0;
                      v237 = v177[66];
                      *((_DWORD *)v177 + 106) = 0;
                      v238 = v237 + (v236 << 6);
                      if ( v237 != v238 )
                      {
                        LOBYTE(v285) = v5;
                        v239 = v176;
                        v286 = (__int64 *)&src;
                        v240 = v237;
                        v287 = v12;
                        v241 = v175;
                        do
                        {
                          while ( 1 )
                          {
                            v238 -= 64;
                            v242 = *(void **)(v238 + 24);
                            if ( v242 == (void *)(v238 + 40) )
                              break;
                            v284 = v177;
                            operator delete(v242);
                            v177 = v284;
                            if ( v240 == v238 )
                              goto LABEL_271;
                          }
                        }
                        while ( v240 != v238 );
LABEL_271:
                        v175 = v241;
                        v176 = v239;
                        p_src = v286;
                        v12 = v287;
                        v5 = (unsigned __int8)v285;
                      }
                      *((_DWORD *)v177 + 134) = 0;
                    }
                    else
                    {
                      v285 = v176;
                      v177 = (__int64 *)operator new(0x3A0u);
                      *(_BYTE *)v177 = 0;
                      v177[12] = (__int64)(v177 + 14);
                      v177[16] = (__int64)(v177 + 18);
                      v177[20] = (__int64)(v177 + 22);
                      v177[24] = (__int64)(v177 + 26);
                      v177[28] = (__int64)(v177 + 30);
                      v177[32] = (__int64)(v177 + 34);
                      v177[36] = (__int64)(v177 + 38);
                      v177[40] = (__int64)(v177 + 42);
                      v177[44] = (__int64)(v177 + 46);
                      v177[48] = (__int64)(v177 + 50);
                      v177[52] = (__int64)(v177 + 54);
                      v177[13] = 0;
                      *((_BYTE *)v177 + 112) = 0;
                      v177[17] = 0;
                      *((_BYTE *)v177 + 144) = 0;
                      v177[21] = 0;
                      *((_BYTE *)v177 + 176) = 0;
                      v177[25] = 0;
                      *((_BYTE *)v177 + 208) = 0;
                      v177[29] = 0;
                      *((_BYTE *)v177 + 240) = 0;
                      v177[33] = 0;
                      *((_BYTE *)v177 + 272) = 0;
                      v177[37] = 0;
                      *((_BYTE *)v177 + 304) = 0;
                      v177[41] = 0;
                      *((_BYTE *)v177 + 336) = 0;
                      v177[45] = 0;
                      *((_BYTE *)v177 + 368) = 0;
                      v177[49] = 0;
                      *((_BYTE *)v177 + 400) = 0;
                      v177[53] = 0x800000000LL;
                      v175 = v284;
                      v177[66] = (__int64)(v177 + 68);
                      v176 = v285;
                      v177[67] = 0x600000000LL;
                    }
                    v176[1] = (__int64)v177;
                  }
                  v178 = *(unsigned __int8 *)v177;
                  v179 = v282;
                  v284 = v176;
                  *((_BYTE *)v177 + v178 + 1) = 0;
                  v180 = v179 + 2;
                  v308 = v179 + 2;
                  sub_18B00B0(v179, v175, (__int64)&v65[(_QWORD)v175]);
                  v181 = (_BYTE *)v284[1];
                  v182 = (unsigned __int8)*v181;
                  *v181 = v182 + 1;
                  v183 = (unsigned __int8)v182;
                  v184 = 32 * (v182 + 3);
                  v185 = &v181[v184];
                  v186 = *(_BYTE **)&v181[v184];
                  if ( v308 == v180 )
                  {
                    v197 = v309;
                    if ( (_QWORD)v309 )
                    {
                      if ( (_QWORD)v309 == 1 )
                        *v186 = BYTE8(v309);
                      else
                        memcpy(v186, v308, v309);
                      v197 = v309;
                      v186 = *(_BYTE **)v185;
                    }
                    *((_QWORD *)v185 + 1) = v197;
                    v186[v197] = 0;
                    v186 = v308;
                    goto LABEL_194;
                  }
                  if ( v186 == &v181[v184 + 16] )
                  {
                    *(_QWORD *)v185 = v308;
                    *(_OWORD *)(v185 + 8) = v309;
                  }
                  else
                  {
                    v187 = *(_QWORD *)&v181[32 * v183 + 112];
                    *(_QWORD *)v185 = v308;
                    *(_OWORD *)(v185 + 8) = v309;
                    if ( v186 )
                    {
                      v308 = v186;
                      *((_QWORD *)&v309 + 1) = v187;
LABEL_194:
                      v188 = v282;
                      *(_QWORD *)&v309 = 0;
                      *v186 = 0;
                      if ( v308 != v188 + 2 )
                        operator delete(v308);
                      v65 = v307[1];
                      v66 = (__int64 *)*v307;
LABEL_58:
                      v291[0] = v292;
                      if ( v66 )
                      {
                        sub_18B00B0(v291, v66, (__int64)&v65[(_QWORD)v66]);
                      }
                      else
                      {
                        v291[1] = nullptr;
                        v292[0] = 0;
                      }
                      v68 = &v293;
                      v69 = (__m128i *)sub_99BDC0(v291, 0, 0, " ", 1u);
                      v293 = &v295;
                      if ( (__m128i *)v69->m128i_i64[0] == &v69[1] )
                      {
                        v295 = _mm_loadu_si128(v69 + 1);
                      }
                      else
                      {
                        v293 = (void *)v69->m128i_i64[0];
                        v295.m128i_i64[0] = v69[1].m128i_i64[0];
                      }
                      v70 = v69->m128i_i64[1];
                      v69[1].m128i_i8[0] = 0;
                      v294 = v70;
                      v69->m128i_i64[0] = (__int64)v69[1].m128i_i64;
                      v71 = v293;
                      v69->m128i_i64[1] = 0;
                      LODWORD(v308) = v64;
                      HIDWORD(v308) = v64;
                      dest = v282 + 5;
                      v284 = (__int64 *)(v282 + 5);
                      *(_QWORD *)((char *)&v309 + 4) = 0;
                      BYTE12(v309) = 0;
                      v311.m128_u64[0] = 0;
                      v311.m128_i8[8] = 0;
                      v312 = 0;
                      LOBYTE(v309) = 0;
                      src = p_src + 2;
                      sub_18B00B0(p_src, v71, (__int64)&v71[v294]);
                      v72 = dest;
                      if ( src == p_src + 2 )
                      {
                        v154 = n;
                        if ( n )
                        {
                          if ( n == 1 )
                            *(_BYTE *)dest = (_BYTE)v298;
                          else
                            memcpy(dest, src, n);
                          v154 = n;
                          v72 = dest;
                        }
                        v311.m128_u64[0] = v154;
                        v72[v154] = 0;
                        v72 = src;
                      }
                      else
                      {
                        if ( dest == v284 )
                        {
                          v284 = v298;
                          dest = src;
                          v311 = _mm_loadh_ps((const double *)&v284);
                        }
                        else
                        {
                          v284 = v298;
                          v73 = (__int64 *)v311.m128_u64[1];
                          dest = src;
                          v311 = _mm_loadh_ps((const double *)&v284);
                          if ( v72 )
                          {
                            src = v72;
                            v298 = v73;
                            goto LABEL_66;
                          }
                        }
                        v72 = p_src + 2;
                        src = p_src + 2;
                      }
LABEL_66:
                      n = 0;
                      *v72 = 0;
                      if ( src != p_src + 2 )
                        operator delete(src);
                      v312 = 0;
                      if ( v321 )
                      {
                        if ( (_DWORD)v308 && HIDWORD(v308) )
                        {
                          v74 = v315;
                          if ( v315 )
                          {
                            v75 = *((unsigned int *)v315 + 134);
                            v76 = v75 + 1;
                            v77 = v75 << 6;
                          }
                          else
                          {
                            v224 = v316;
                            v225 = *(_DWORD *)(v316 + 14976);
                            if ( v225 )
                            {
                              v248 = (unsigned int)(v225 - 1);
                              *(_DWORD *)(v316 + 14976) = v248;
                              v74 = *(__int64 **)(v224 + 8 * v248 + 14848);
                              v249 = *((unsigned int *)v74 + 134);
                              *(_BYTE *)v74 = 0;
                              v250 = v74[66];
                              *((_DWORD *)v74 + 106) = 0;
                              v251 = v250 + (v249 << 6);
                              if ( v250 != v251 )
                              {
                                v284 = p_src;
                                v252 = v250;
                                v285 = v12;
                                v253 = v74;
                                do
                                {
                                  while ( 1 )
                                  {
                                    v251 -= 64;
                                    v254 = *(void **)(v251 + 24);
                                    if ( v254 == (void *)(v251 + 40) )
                                      break;
                                    operator delete(v254);
                                    if ( v252 == v251 )
                                      goto LABEL_290;
                                  }
                                }
                                while ( v252 != v251 );
LABEL_290:
                                v74 = v253;
                                p_src = v284;
                                v12 = v285;
                              }
                              *((_DWORD *)v74 + 134) = 0;
                            }
                            else
                            {
                              v74 = (__int64 *)operator new(0x3A0u);
                              *(_BYTE *)v74 = 0;
                              v74[12] = (__int64)(v74 + 14);
                              v74[16] = (__int64)(v74 + 18);
                              v74[20] = (__int64)(v74 + 22);
                              v74[24] = (__int64)(v74 + 26);
                              v74[28] = (__int64)(v74 + 30);
                              v74[32] = (__int64)(v74 + 34);
                              v74[36] = (__int64)(v74 + 38);
                              v74[40] = (__int64)(v74 + 42);
                              v74[44] = (__int64)(v74 + 46);
                              v74[48] = (__int64)(v74 + 50);
                              v74[52] = (__int64)(v74 + 54);
                              *((_BYTE *)v74 + 112) = 0;
                              v74[13] = 0;
                              v74[17] = 0;
                              *((_BYTE *)v74 + 144) = 0;
                              v74[21] = 0;
                              *((_BYTE *)v74 + 176) = 0;
                              v74[25] = 0;
                              *((_BYTE *)v74 + 208) = 0;
                              v74[29] = 0;
                              *((_BYTE *)v74 + 240) = 0;
                              v74[33] = 0;
                              *((_BYTE *)v74 + 272) = 0;
                              v74[37] = 0;
                              *((_BYTE *)v74 + 304) = 0;
                              v74[41] = 0;
                              *((_BYTE *)v74 + 336) = 0;
                              v74[45] = 0;
                              *((_BYTE *)v74 + 368) = 0;
                              v74[49] = 0;
                              *((_BYTE *)v74 + 400) = 0;
                              v74[53] = 0x800000000LL;
                              v74[66] = (__int64)(v74 + 68);
                              v74[67] = 0x600000000LL;
                            }
                            v315 = v74;
                            v77 = 0;
                            v76 = 1;
                          }
                          v78 = v74[66];
                          v79 = v282;
                          v80 = v78 + v77;
                          if ( *((unsigned int *)v74 + 135) < v76 )
                          {
                            if ( v78 > (unsigned __int64)v282 || v80 <= (unsigned __int64)v282 )
                            {
                              v286 = v74;
                              v285 = v74 + 68;
                              v284 = v74 + 66;
                              v255 = sub_2237400(v74 + 66, v74 + 68, v76, 64, p_src);
                              sub_9EF810(v284, v255);
                              v74 = v286;
                              v256 = (int)src;
                              v257 = (__int64 *)v286[66];
                              if ( v285 != v257 )
                              {
                                v284 = v286;
                                free(v257);
                                v74 = v284;
                              }
                              v258 = *((unsigned int *)v74 + 134);
                              v74[66] = v255;
                              *((_DWORD *)v74 + 135) = v256;
                              v79 = v282;
                              v80 = (v258 << 6) + v255;
                            }
                            else
                            {
                              v284 = (__int64 *)((char *)v282 - v78);
                              v287 = v74;
                              v286 = v74 + 68;
                              v285 = v74 + 66;
                              v243 = sub_2237400(v74 + 66, v74 + 68, v76, 64, p_src);
                              sub_9EF810(v285, v243);
                              v74 = v287;
                              v244 = (int)src;
                              v245 = (__int64 *)v287[66];
                              if ( v286 != v245 )
                              {
                                v285 = v287;
                                free(v245);
                                v74 = v285;
                              }
                              *((_DWORD *)v74 + 135) = v244;
                              v246 = *((unsigned int *)v74 + 134);
                              v247 = v284;
                              v74[66] = v243;
                              v79 = (void **)((char *)v247 + v243);
                              v80 = v243 + (v246 << 6);
                            }
                          }
                          *(_QWORD *)v80 = *v79;
                          *(_DWORD *)(v80 + 8) = *((_DWORD *)v79 + 2);
                          *(_QWORD *)(v80 + 12) = *(void **)((char *)v79 + 12);
                          *(_DWORD *)(v80 + 20) = *((_DWORD *)v79 + 5);
                          v81 = (_BYTE *)(v80 + 40);
                          *(_QWORD *)(v80 + 24) = v80 + 40;
                          v82 = (__int64 *)v79[3];
                          v83 = (signed __int64)v79[4];
                          if ( !(__int64 *)((char *)v82 + v83) || v82 )
                          {
                            if ( (unsigned __int64)v83 <= 0xF )
                            {
                              if ( v83 == 1 )
                              {
                                *(_BYTE *)(v80 + 40) = *(_BYTE *)v82;
LABEL_79:
                                *(_QWORD *)(v80 + 32) = v83;
                                v81[v83] = 0;
                                *(_BYTE *)(v80 + 56) = *((_BYTE *)v79 + 56);
                                ++*((_DWORD *)v74 + 134);
                                goto LABEL_80;
                              }
                              if ( !v83 )
                                goto LABEL_79;
LABEL_229:
                              v285 = (__int64 *)v79;
                              v284 = v74;
                              memcpy(v81, v82, v83);
                              v81 = *(_BYTE **)(v80 + 24);
                              v79 = (void **)v285;
                              v74 = v284;
                              goto LABEL_79;
                            }
                            if ( v83 >= 0 )
                            {
                              v286 = (__int64 *)v79;
                              v285 = v82;
                              v284 = v74;
                              v81 = (_BYTE *)operator new(v83 + 1);
                              *(_QWORD *)(v80 + 40) = v83;
                              v74 = v284;
                              v82 = v285;
                              v79 = (void **)v286;
                              *(_QWORD *)(v80 + 24) = v81;
                              goto LABEL_229;
                            }
LABEL_317:
                            std::__throw_length_error("basic_string::_M_create");
                          }
LABEL_318:
                          std::__throw_logic_error("basic_string::_M_construct null not valid");
                        }
LABEL_80:
                        if ( dest != v282 + 5 )
                          operator delete(dest);
                        if ( v293 != v68 + 2 )
                          operator delete(v293);
                        v84 = v291[0];
                        if ( v291[0] == v292 )
                          goto LABEL_86;
LABEL_85:
                        operator delete(v84);
LABEL_86:
                        sub_15F7200(v278.m128i_i64[0]);
                        v85 = *((_DWORD *)v12 + 6);
                        if ( v85 )
                        {
                          sub_168B9F0(v278.m128i_i64[0], v280, v85, 0x70u, 0);
                          sub_15F7200(v278.m128i_i64[0]);
                        }
                        v301 = (__int64 (__fastcall **)())&unk_2C76288;
                        sub_227B7A0(v281);
                        if ( (unsigned __int8 **)ptr.m256i_i64[0] != p_ptr + 3 )
                          free((void *)ptr.m256i_i64[0]);
                        return v5;
                      }
                      if ( !v323 )
                        goto LABEL_80;
                      v128 = sub_168B9E0(v278.m128i_i64[0]);
                      v129 = v314.m128i_i64[0];
                      if ( v314.m128i_i64[0] )
                        v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v314.m128i_i64[0] + 32LL))(v314.m128i_i64[0]);
                      v290 = v129;
                      v130 = sub_1587BC0(v128, &v290, v124, v125, v126, v127);
                      if ( !(_DWORD)v308 || !HIDWORD(v308) )
                        goto LABEL_80;
                      v131 = (__int64 *)(*v130 + 32LL * v322);
                      v132 = (__int64 *)v131[1];
                      if ( !v132 )
                      {
                        v259 = v131[2];
                        v260 = *(_DWORD *)(v259 + 14976);
                        if ( v260 )
                        {
                          v270 = (unsigned int)(v260 - 1);
                          *(_DWORD *)(v259 + 14976) = v270;
                          v132 = *(__int64 **)(v259 + 8 * v270 + 14848);
                          v271 = *((unsigned int *)v132 + 134);
                          *(_BYTE *)v132 = 0;
                          v272 = v132[66];
                          *((_DWORD *)v132 + 106) = 0;
                          v273 = v272 + (v271 << 6);
                          if ( v272 != v273 )
                          {
                            v284 = (__int64 *)&v293;
                            v274 = v131;
                            v285 = p_src;
                            v275 = v272;
                            v286 = v12;
                            v276 = v132;
                            do
                            {
                              while ( 1 )
                              {
                                v273 -= 64;
                                v277 = *(void **)(v273 + 24);
                                if ( v277 == (void *)(v273 + 40) )
                                  break;
                                operator delete(v277);
                                if ( v275 == v273 )
                                  goto LABEL_312;
                              }
                            }
                            while ( v275 != v273 );
LABEL_312:
                            v131 = v274;
                            v132 = v276;
                            p_src = v285;
                            v68 = (void **)v284;
                            v12 = v286;
                          }
                          *((_DWORD *)v132 + 134) = 0;
                        }
                        else
                        {
                          v284 = v131;
                          v132 = (__int64 *)operator new(0x3A0u);
                          *(_BYTE *)v132 = 0;
                          v132[12] = (__int64)(v132 + 14);
                          v132[16] = (__int64)(v132 + 18);
                          v132[20] = (__int64)(v132 + 22);
                          v132[24] = (__int64)(v132 + 26);
                          v132[28] = (__int64)(v132 + 30);
                          v132[32] = (__int64)(v132 + 34);
                          v132[36] = (__int64)(v132 + 38);
                          v132[40] = (__int64)(v132 + 42);
                          v132[44] = (__int64)(v132 + 46);
                          v132[48] = (__int64)(v132 + 50);
                          v132[52] = (__int64)(v132 + 54);
                          *((_BYTE *)v132 + 112) = 0;
                          v132[13] = 0;
                          v132[17] = 0;
                          *((_BYTE *)v132 + 144) = 0;
                          v132[21] = 0;
                          *((_BYTE *)v132 + 176) = 0;
                          v132[25] = 0;
                          *((_BYTE *)v132 + 208) = 0;
                          v132[29] = 0;
                          *((_BYTE *)v132 + 240) = 0;
                          v132[33] = 0;
                          *((_BYTE *)v132 + 272) = 0;
                          v132[37] = 0;
                          *((_BYTE *)v132 + 304) = 0;
                          v132[41] = 0;
                          *((_BYTE *)v132 + 336) = 0;
                          v132[45] = 0;
                          *((_BYTE *)v132 + 368) = 0;
                          v132[49] = 0;
                          *((_BYTE *)v132 + 400) = 0;
                          v132[53] = 0x800000000LL;
                          v131 = v284;
                          v132[66] = (__int64)(v132 + 68);
                          v132[67] = 0x600000000LL;
                        }
                        v131[1] = (__int64)v132;
                      }
                      v133 = *((unsigned int *)v132 + 134);
                      v134 = v132[66];
                      v135 = v282;
                      v136 = v133 + 1;
                      v137 = v134 + (v133 << 6);
                      if ( v136 > *((unsigned int *)v132 + 135) )
                      {
                        if ( v134 > (unsigned __int64)v282 || v137 <= (unsigned __int64)v282 )
                        {
                          v286 = v132;
                          v285 = v132 + 68;
                          v284 = v132 + 66;
                          v266 = sub_2237400(v132 + 66, v132 + 68, v136, 64, p_src);
                          sub_9EF810(v284, v266);
                          v132 = v286;
                          v267 = (int)src;
                          v268 = (__int64 *)v286[66];
                          if ( v285 != v268 )
                          {
                            v284 = v286;
                            free(v268);
                            v132 = v284;
                          }
                          v269 = *((unsigned int *)v132 + 134);
                          v132[66] = v266;
                          *((_DWORD *)v132 + 135) = v267;
                          v135 = v282;
                          v137 = (v269 << 6) + v266;
                        }
                        else
                        {
                          v284 = (__int64 *)((char *)v282 - v134);
                          v287 = v132;
                          v286 = v132 + 68;
                          v285 = v132 + 66;
                          v261 = sub_2237400(v132 + 66, v132 + 68, v136, 64, p_src);
                          sub_9EF810(v285, v261);
                          v132 = v287;
                          v262 = (int)src;
                          v263 = (__int64 *)v287[66];
                          if ( v286 != v263 )
                          {
                            v285 = v287;
                            free(v263);
                            v132 = v285;
                          }
                          *((_DWORD *)v132 + 135) = v262;
                          v264 = *((unsigned int *)v132 + 134);
                          v265 = v284;
                          v132[66] = v261;
                          v135 = (void **)((char *)v265 + v261);
                          v137 = v261 + (v264 << 6);
                        }
                      }
                      *(_QWORD *)v137 = *v135;
                      *(_DWORD *)(v137 + 8) = *((_DWORD *)v135 + 2);
                      *(_QWORD *)(v137 + 12) = *(void **)((char *)v135 + 12);
                      *(_DWORD *)(v137 + 20) = *((_DWORD *)v135 + 5);
                      v138 = (void *)(v137 + 40);
                      *(_QWORD *)(v137 + 24) = v137 + 40;
                      v139 = (__int64 *)v135[3];
                      v140 = (signed __int64)v135[4];
                      if ( (__int64 *)((char *)v139 + v140) && !v139 )
                        goto LABEL_318;
                      if ( (unsigned __int64)v140 > 0xF )
                      {
                        v286 = (__int64 *)v135;
                        v285 = v139;
                        v284 = v132;
                        if ( v140 < 0 )
                          goto LABEL_317;
                        v138 = (void *)operator new(v140 + 1);
                        *(_QWORD *)(v137 + 40) = v140;
                        v132 = v284;
                        v139 = v285;
                        v135 = (void **)v286;
                        *(_QWORD *)(v137 + 24) = v138;
                      }
                      else
                      {
                        if ( v140 == 1 )
                        {
                          *(_BYTE *)(v137 + 40) = *(_BYTE *)v139;
LABEL_151:
                          v141 = *(_QWORD *)(v137 + 24);
                          *(_QWORD *)(v137 + 32) = v140;
                          *(_BYTE *)(v141 + v140) = 0;
                          *(_BYTE *)(v137 + 56) = *((_BYTE *)v135 + 56);
                          ++*((_DWORD *)v132 + 134);
                          goto LABEL_80;
                        }
                        if ( !v140 )
                          goto LABEL_151;
                      }
                      v285 = (__int64 *)v135;
                      v284 = v132;
                      memcpy(v138, v139, v140);
                      v135 = (void **)v285;
                      v132 = v284;
                      goto LABEL_151;
                    }
                  }
                  v186 = v282 + 2;
                  v308 = v282 + 2;
                  goto LABEL_194;
                }
              }
            }
          }
        }
      }
    }
    sub_168B9F0(v278.m128i_i64[0], v280, *(_DWORD *)(v11 + 24), v38, 0);
    if ( v321 )
    {
      sub_AE9DF0((unsigned __int8 **)(v278.m128i_i64[0] + 32), v11, 0xAu);
    }
    else
    {
      if ( !v323 )
        goto LABEL_86;
      v89 = sub_168B9E0(v278.m128i_i64[0]);
      v92 = (void *)v314.m128i_i64[0];
      if ( v314.m128i_i64[0] )
        v92 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v314.m128i_i64[0] + 32LL))(v314.m128i_i64[0]);
      v308 = v92;
      v93 = sub_1587BC0(v89, (__int64 *)&v308, v87, v88, v90, v91);
      sub_AE9DF0((unsigned __int8 **)(*v93 + 32LL * v322 + 8), v11, 0xAu);
    }
    v94 = v307[1];
    v95 = *v307;
    if ( v321 )
    {
      v96 = v315;
      if ( !v315 )
      {
        v200 = v316;
        v201 = *(_DWORD *)(v316 + 14976);
        if ( v201 )
        {
          v213 = (unsigned int)(v201 - 1);
          *(_DWORD *)(v316 + 14976) = v213;
          v96 = *(__int64 **)(v200 + 8 * v213 + 14848);
          v214 = *((unsigned int *)v96 + 134);
          *(_BYTE *)v96 = 0;
          v215 = (void **)v96[66];
          *((_DWORD *)v96 + 106) = 0;
          v214 <<= 6;
          v216 = (void **)((char *)v215 + v214);
          v282 = v215;
          while ( v282 != v216 )
          {
            while ( 1 )
            {
              v216 -= 8;
              v217 = (char *)v216[3];
              if ( v217 == (char *)(v216 + 5) )
                break;
              operator delete(v217);
              if ( v282 == v216 )
                goto LABEL_245;
            }
          }
LABEL_245:
          *((_DWORD *)v96 + 134) = 0;
        }
        else
        {
          v96 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v96 = 0;
          v96[12] = (__int64)(v96 + 14);
          v96[16] = (__int64)(v96 + 18);
          v96[20] = (__int64)(v96 + 22);
          v96[24] = (__int64)(v96 + 26);
          v96[28] = (__int64)(v96 + 30);
          v96[32] = (__int64)(v96 + 34);
          v96[36] = (__int64)(v96 + 38);
          v96[40] = (__int64)(v96 + 42);
          v96[44] = (__int64)(v96 + 46);
          v96[48] = (__int64)(v96 + 50);
          v96[52] = (__int64)(v96 + 54);
          v96[13] = 0;
          *((_BYTE *)v96 + 112) = 0;
          v96[17] = 0;
          *((_BYTE *)v96 + 144) = 0;
          v96[21] = 0;
          *((_BYTE *)v96 + 176) = 0;
          v96[25] = 0;
          *((_BYTE *)v96 + 208) = 0;
          v96[29] = 0;
          *((_BYTE *)v96 + 240) = 0;
          v96[33] = 0;
          *((_BYTE *)v96 + 272) = 0;
          v96[37] = 0;
          *((_BYTE *)v96 + 304) = 0;
          v96[41] = 0;
          *((_BYTE *)v96 + 336) = 0;
          v96[45] = 0;
          *((_BYTE *)v96 + 368) = 0;
          v96[49] = 0;
          *((_BYTE *)v96 + 400) = 0;
          v96[53] = 0x800000000LL;
          v96[66] = (__int64)(v96 + 68);
          v96[67] = 0x600000000LL;
        }
        v315 = v96;
      }
      v97 = *(unsigned __int8 *)v96;
      v282 = &v308;
      *((_BYTE *)v96 + v97 + 1) = 0;
      v308 = (char *)&v309 + 8;
      sub_18B00B0(&v308, v95, (__int64)&v94[(_QWORD)v95]);
      v98 = v315;
      v99 = *(unsigned __int8 *)v315;
      *(_BYTE *)v315 = v99 + 1;
      v100 = (unsigned __int8)v99;
      v101 = v308;
      v102 = 4 * (v99 + 3);
      v103 = &v98[v102];
      v104 = (__int64 *)v98[v102];
      if ( v308 != (char *)&v309 + 8 )
      {
LABEL_99:
        if ( v104 == &v98[v102 + 2] )
        {
          *v103 = (__int64)v101;
          *(_OWORD *)(v103 + 1) = v309;
        }
        else
        {
          v105 = v98[4 * v100 + 14];
          *v103 = (__int64)v101;
          *(_OWORD *)(v103 + 1) = v309;
          if ( v104 )
          {
            v308 = v104;
            *((_QWORD *)&v309 + 1) = v105;
            goto LABEL_102;
          }
        }
        v104 = (__int64 *)(v282 + 2);
        v308 = v282 + 2;
LABEL_102:
        *(_QWORD *)&v309 = 0;
        *(_BYTE *)v104 = 0;
        v84 = v308;
        if ( v308 == v282 + 2 )
          goto LABEL_86;
        goto LABEL_85;
      }
    }
    else
    {
      if ( !v323 )
        goto LABEL_86;
      v159 = sub_168B9E0(v278.m128i_i64[0]);
      v160 = (void *)v314.m128i_i64[0];
      if ( v314.m128i_i64[0] )
        v160 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v314.m128i_i64[0] + 32LL))(v314.m128i_i64[0]);
      src = v160;
      v161 = sub_1587BC0(v159, (__int64 *)&src, v155, v156, v157, v158);
      v162 = *v161 + 32LL * v322;
      v163 = *(unsigned __int8 **)(v162 + 8);
      if ( !v163 )
      {
        v204 = *(_QWORD *)(v162 + 16);
        v205 = *(_DWORD *)(v204 + 14976);
        if ( v205 )
        {
          v226 = (unsigned int)(v205 - 1);
          *(_DWORD *)(v204 + 14976) = v226;
          v163 = *(unsigned __int8 **)(v204 + 8 * v226 + 14848);
          v227 = *((unsigned int *)v163 + 134);
          *v163 = 0;
          v228 = *((_QWORD *)v163 + 66);
          *((_DWORD *)v163 + 106) = 0;
          v229 = v228 + (v227 << 6);
          if ( v228 != v229 )
          {
            LOBYTE(v282) = v5;
            v230 = v95;
            v231 = v163;
            v284 = v12;
            v232 = v94;
            v233 = v228;
            do
            {
              while ( 1 )
              {
                v229 -= 64;
                v234 = *(void **)(v229 + 24);
                if ( v234 == (void *)(v229 + 40) )
                  break;
                operator delete(v234);
                if ( v233 == v229 )
                  goto LABEL_263;
              }
            }
            while ( v233 != v229 );
LABEL_263:
            v163 = v231;
            v94 = v232;
            v95 = v230;
            v12 = v284;
            v5 = (unsigned __int8)v282;
          }
          *((_DWORD *)v163 + 134) = 0;
        }
        else
        {
          v163 = (unsigned __int8 *)operator new(0x3A0u);
          *v163 = 0;
          *((_QWORD *)v163 + 12) = v163 + 112;
          *((_QWORD *)v163 + 16) = v163 + 144;
          *((_QWORD *)v163 + 20) = v163 + 176;
          *((_QWORD *)v163 + 24) = v163 + 208;
          *((_QWORD *)v163 + 28) = v163 + 240;
          *((_QWORD *)v163 + 32) = v163 + 272;
          *((_QWORD *)v163 + 36) = v163 + 304;
          *((_QWORD *)v163 + 40) = v163 + 336;
          *((_QWORD *)v163 + 44) = v163 + 368;
          *((_QWORD *)v163 + 48) = v163 + 400;
          *((_QWORD *)v163 + 52) = v163 + 432;
          *((_QWORD *)v163 + 13) = 0;
          v163[112] = 0;
          *((_QWORD *)v163 + 17) = 0;
          v163[144] = 0;
          *((_QWORD *)v163 + 21) = 0;
          v163[176] = 0;
          *((_QWORD *)v163 + 25) = 0;
          v163[208] = 0;
          *((_QWORD *)v163 + 29) = 0;
          v163[240] = 0;
          *((_QWORD *)v163 + 33) = 0;
          v163[272] = 0;
          *((_QWORD *)v163 + 37) = 0;
          v163[304] = 0;
          *((_QWORD *)v163 + 41) = 0;
          v163[336] = 0;
          *((_QWORD *)v163 + 45) = 0;
          v163[368] = 0;
          *((_QWORD *)v163 + 49) = 0;
          v163[400] = 0;
          *((_QWORD *)v163 + 53) = 0x800000000LL;
          *((_QWORD *)v163 + 66) = v163 + 544;
          *((_QWORD *)v163 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v162 + 8) = v163;
      }
      v164 = *v163;
      v282 = &v308;
      v163[v164 + 1] = 0;
      v308 = (char *)&v309 + 8;
      sub_18B00B0(&v308, v95, (__int64)&v94[(_QWORD)v95]);
      v98 = *(__int64 **)(v162 + 8);
      v165 = *(unsigned __int8 *)v98;
      *(_BYTE *)v98 = v165 + 1;
      v100 = (unsigned __int8)v165;
      v101 = v308;
      v102 = 4 * (v165 + 3);
      v103 = &v98[v102];
      v104 = (__int64 *)v98[v102];
      if ( v308 != (char *)&v309 + 8 )
        goto LABEL_99;
    }
    v166 = v309;
    if ( (_QWORD)v309 )
    {
      if ( (_QWORD)v309 == 1 )
        *(_BYTE *)v104 = BYTE8(v309);
      else
        memcpy(v104, v101, v309);
      v166 = v309;
      v104 = (__int64 *)*v103;
    }
    v103[1] = v166;
    *((_BYTE *)v104 + v166) = 0;
    v104 = (__int64 *)v308;
    goto LABEL_102;
  }
  v39 = *(unsigned int *)(a1 + 4376);
  v40 = *(unsigned int *)(a1 + 4380);
  v278.m128i_i64[0] = a2;
  v41 = (__m128i)_mm_loadh_ps((const double *)v278.m128i_i64);
  if ( v39 + 1 > v40 )
  {
    v278 = v41;
    sub_2237220(a1 + 4368, a1 + 4384, v39 + 1, 16);
    v39 = *(unsigned int *)(a1 + 4376);
    v41 = _mm_load_si128(&v278);
  }
  v5 = 0;
  *(__m128i *)(*(_QWORD *)(a1 + 4368) + 16 * v39) = v41;
  ++*(_DWORD *)(a1 + 4376);
  return v5;
}
