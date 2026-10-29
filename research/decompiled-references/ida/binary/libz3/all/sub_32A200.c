__int64 __fastcall sub_32A200(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r15d
  __m128i *v9; // rax
  unsigned __int64 v10; // rdi
  __m128i *v11; // rbx
  __m128i v12; // xmm0
  void (***v13)(void); // rdi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 *v17; // rbx
  char **exception; // r15
  int v19; // r8d
  int v20; // r9d
  int v21; // r15d
  __int64 v22; // r14
  _QWORD *v23; // rax
  int v24; // eax
  __int64 *v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // r15d
  __int64 v28; // rdi
  unsigned int v29; // r12d
  int v30; // r8d
  int v31; // r9d
  __int64 *v32; // r14
  unsigned int v33; // ecx
  unsigned int v34; // esi
  __int64 *v35; // rdx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  __int64 *v39; // r12
  unsigned int v40; // ecx
  unsigned int v41; // esi
  __int64 *v42; // rdx
  __int64 v43; // r14
  unsigned int v44; // ecx
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rcx
  __int64 k; // r12
  unsigned int v49; // eax
  __int64 v50; // rax
  std::ios_base *v51; // rax
  void *v52; // r15
  int v53; // eax
  int v54; // eax
  __int64 *v55; // r12
  __int64 *v56; // r14
  __int64 v57; // rsi
  int v59; // edx
  int v60; // r15d
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rdx
  int v66; // eax
  __int64 *v67; // rdx
  __int64 v68; // r12
  unsigned int v69; // eax
  unsigned int v70; // r14d
  unsigned int v71; // edx
  unsigned int *v72; // rax
  __int64 v73; // rdx
  __int64 *v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // r14d
  __int64 *v77; // rsi
  __int64 v78; // r12
  __int64 v79; // rcx
  __int64 v80; // rdi
  __int64 v81; // rax
  unsigned int v82; // r14d
  _DWORD *v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rcx
  unsigned int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 *v89; // rdx
  unsigned int v90; // eax
  unsigned int v91; // r8d
  __int64 *v92; // rcx
  __int64 v93; // r9
  __int64 *v94; // r12
  __int64 v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rax
  _DWORD *v99; // rax
  __int64 v100; // rax
  _QWORD *v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // rcx
  int v104; // eax
  __int64 *v105; // rcx
  unsigned int v106; // eax
  __int64 v107; // rcx
  int v108; // eax
  __int64 *v109; // rcx
  int v110; // eax
  unsigned int v111; // ecx
  size_t v112; // rsi
  __int64 v113; // rax
  unsigned int v114; // r12d
  unsigned int v115; // ecx
  unsigned int *v116; // rax
  __int64 v117; // rcx
  __int64 *v118; // rdx
  __int64 v119; // rdi
  __m128i v120; // xmm0
  __int64 v121; // rcx
  __int64 *v122; // r12
  __int64 v123; // rsi
  __int64 *v124; // rcx
  unsigned int v125; // ecx
  size_t v126; // rsi
  unsigned int *v127; // rax
  _DWORD *v128; // rdx
  _QWORD *v129; // rdx
  unsigned int v130; // edi
  unsigned int v131; // ecx
  unsigned int *v132; // rax
  __int64 v133; // rcx
  _QWORD *v134; // rax
  __int64 *v135; // r9
  _QWORD *v136; // rdx
  unsigned int v137; // eax
  _DWORD *v138; // rdi
  __int64 v139; // rcx
  __int64 v140; // rdx
  unsigned int v141; // edx
  unsigned int v142; // ecx
  unsigned int *v143; // rax
  _DWORD *v144; // rsi
  __int64 v145; // r12
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 *v148; // r12
  __int64 *v149; // rcx
  unsigned int v150; // edx
  size_t v151; // rsi
  unsigned int *v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rdx
  __int64 *v155; // r8
  unsigned int v156; // eax
  _QWORD *v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  unsigned int v160; // edx
  unsigned int v161; // ecx
  unsigned int *v162; // rax
  _DWORD *v163; // rsi
  __int64 v164; // r12
  __int64 v165; // rax
  _QWORD *v166; // rdx
  _QWORD *v167; // rax
  _QWORD *v168; // r12
  __int64 v169; // rdi
  _QWORD *v170; // r15
  _QWORD *m; // r12
  unsigned __int8 v172; // al
  unsigned int v173; // eax
  _QWORD *v174; // r12
  __int64 v175; // rax
  void *v176; // r12
  int v177; // eax
  void *v178; // r15
  int v179; // eax
  void *v180; // rdi
  void *v181; // rdi
  int v182; // edx
  char v183; // cl
  __int64 v184; // rax
  __int64 v185; // rdx
  char v186; // si
  __int64 v187; // rax
  char v188; // cl
  __int64 v189; // rdx
  void *v190; // r12
  void *v191; // r12
  __int64 v192; // r14
  __int64 v193; // rdi
  __int64 v194; // rcx
  __int64 v195; // r12
  _DWORD *v196; // rax
  __int64 v197; // rax
  _QWORD *v198; // rax
  unsigned int v199; // edx
  __int64 v200; // rcx
  int v201; // edx
  __int64 *v202; // rcx
  unsigned int v203; // esi
  unsigned int v204; // ecx
  __int64 *v205; // rax
  __int64 v206; // r14
  __int64 j; // r12
  __int64 v208; // rax
  unsigned int v209; // ecx
  __int64 *v210; // rax
  int v211; // esi
  unsigned int v212; // r9d
  unsigned int v213; // eax
  __int64 v214; // rax
  __int64 v215; // rax
  int v216; // ecx
  unsigned int v217; // r14d
  unsigned int v218; // eax
  unsigned int *v219; // rax
  __int64 v220; // rax
  __int64 v221; // rdi
  __m128i v222; // xmm0
  __int64 v223; // rax
  __int64 *v224; // r14
  __int64 v225; // rdi
  __int64 *v226; // rax
  _QWORD *v227; // rax
  _QWORD *v228; // rdx
  __int64 *v229; // r8
  _QWORD *v230; // r12
  unsigned int v231; // eax
  __int64 v232; // rsi
  __int64 v233; // rdx
  unsigned int v234; // edx
  size_t v235; // rsi
  unsigned int *v236; // rax
  __int64 v237; // r14
  __int64 v238; // rax
  unsigned int v239; // ecx
  size_t v240; // rsi
  unsigned int *v241; // rdx
  _QWORD *v242; // rax
  __int64 v243; // rcx
  _QWORD *v244; // rax
  _QWORD *v245; // rcx
  _QWORD *v246; // rax
  _QWORD *v247; // rax
  __int64 v248; // rax
  int v249; // edx
  char **v250; // r13
  char **v251; // r13
  char **v252; // r13
  char **v253; // r13
  char **v254; // r13
  char **v255; // r13
  char **v256; // r13
  char **v257; // r13
  char **v258; // r13
  char **v259; // r13
  char **v260; // r13
  char **v261; // r13
  char **v262; // r13
  __int64 v263; // [rsp+0h] [rbp-120h]
  unsigned int v264; // [rsp+0h] [rbp-120h]
  unsigned __int64 v265; // [rsp+8h] [rbp-118h]
  __int64 v266; // [rsp+10h] [rbp-110h]
  __int64 v267; // [rsp+10h] [rbp-110h]
  unsigned int v268; // [rsp+10h] [rbp-110h]
  __int64 *v269; // [rsp+10h] [rbp-110h]
  unsigned int v270; // [rsp+10h] [rbp-110h]
  __int64 v271; // [rsp+10h] [rbp-110h]
  __int64 v272; // [rsp+18h] [rbp-108h]
  unsigned int v273; // [rsp+18h] [rbp-108h]
  unsigned int v274; // [rsp+18h] [rbp-108h]
  __int64 v275; // [rsp+18h] [rbp-108h]
  __int64 *v276; // [rsp+18h] [rbp-108h]
  unsigned int v277; // [rsp+18h] [rbp-108h]
  unsigned int v278; // [rsp+18h] [rbp-108h]
  __int64 v279; // [rsp+18h] [rbp-108h]
  __int64 v280; // [rsp+20h] [rbp-100h]
  __int64 *v281; // [rsp+20h] [rbp-100h]
  int v282; // [rsp+28h] [rbp-F8h]
  __int64 *v283; // [rsp+28h] [rbp-F8h]
  int v284; // [rsp+30h] [rbp-F0h]
  void *v285; // [rsp+30h] [rbp-F0h]
  unsigned int v286; // [rsp+30h] [rbp-F0h]
  __int64 *v287; // [rsp+30h] [rbp-F0h]
  unsigned int v288; // [rsp+30h] [rbp-F0h]
  unsigned int v289; // [rsp+30h] [rbp-F0h]
  unsigned int v290; // [rsp+38h] [rbp-E8h]
  __int64 *v291; // [rsp+40h] [rbp-E0h]
  __int64 *v292; // [rsp+40h] [rbp-E0h]
  unsigned int v293; // [rsp+40h] [rbp-E0h]
  int v294; // [rsp+40h] [rbp-E0h]
  unsigned int v295; // [rsp+40h] [rbp-E0h]
  unsigned int v296; // [rsp+40h] [rbp-E0h]
  unsigned int v297; // [rsp+40h] [rbp-E0h]
  void *v298; // [rsp+40h] [rbp-E0h]
  void *v299; // [rsp+40h] [rbp-E0h]
  void *v300; // [rsp+40h] [rbp-E0h]
  void *v301; // [rsp+40h] [rbp-E0h]
  __int64 v302; // [rsp+48h] [rbp-D8h]
  __int64 v303; // [rsp+50h] [rbp-D0h]
  __int64 *v304; // [rsp+50h] [rbp-D0h]
  _QWORD *v305; // [rsp+50h] [rbp-D0h]
  int v306; // [rsp+58h] [rbp-C8h]
  _QWORD *v307; // [rsp+58h] [rbp-C8h]
  unsigned int v308; // [rsp+58h] [rbp-C8h]
  unsigned int v309; // [rsp+58h] [rbp-C8h]
  unsigned int i; // [rsp+58h] [rbp-C8h]
  __int64 v311; // [rsp+58h] [rbp-C8h]
  unsigned int v312; // [rsp+58h] [rbp-C8h]
  _DWORD *v313; // [rsp+58h] [rbp-C8h]
  _DWORD *v314; // [rsp+58h] [rbp-C8h]
  __int64 v315; // [rsp+58h] [rbp-C8h]
  _QWORD *v316; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD *v317; // [rsp+70h] [rbp-B0h] BYREF
  __int64 *v318; // [rsp+78h] [rbp-A8h] BYREF
  __int64 *v319; // [rsp+80h] [rbp-A0h] BYREF
  __int64 *v320; // [rsp+88h] [rbp-98h] BYREF
  _QWORD v321[2]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v322[2]; // [rsp+A0h] [rbp-80h] BYREF
  __int64 *v323; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v324; // [rsp+B8h] [rbp-68h]
  int v325; // [rsp+C0h] [rbp-60h] BYREF
  char v326; // [rsp+C4h] [rbp-5Ch]
  __int64 v327; // [rsp+C8h] [rbp-58h]
  __int64 v328[2]; // [rsp+D0h] [rbp-50h] BYREF
  _QWORD v329[8]; // [rsp+E0h] [rbp-40h] BYREF

  v6 = 0;
  if ( !(unsigned __int8)sub_300830(a1, a2, a3, a4, a5, a6) )
    return v6;
  v9 = (__m128i *)sub_186B270(0x50u);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v9;
  v9[1].m128i_i64[0] = 0;
  v9[1].m128i_i8[8] = 1;
  v12 = (__m128i)v10;
  v265 = v10;
  v13 = *(void (****)(void))(a1 + 224);
  strcpy(&v9[3].m128i_i8[8], "sortmax");
  v9->m128i_i64[0] = (__int64)&off_1C60CE8;
  v9[3].m128i_i64[0] = 7;
  v9[4].m128i_i64[1] = 0;
  v9->m128i_i32[2] = 1;
  v9[2] = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)&v9[3].m128i_u64[1]);
  if ( v13 )
  {
    v306 = *((_DWORD *)v13 + 2);
    *((_DWORD *)v13 + 2) = v306 - 1;
    if ( v306 == 1 )
    {
      (**v13)();
      sub_186B220(v13);
      v265 = *(_QWORD *)(a1 + 8);
    }
  }
  v14 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 224) = v11;
  v6 = 1;
  v15 = *v14;
  if ( !*v14 )
    return v6;
  v303 = v15 + 56LL * *(unsigned int *)(v15 - 4);
  if ( v15 == v303 )
  {
    v17 = nullptr;
LABEL_302:
    v6 = 1;
    goto LABEL_72;
  }
  v16 = *v14;
  v17 = nullptr;
  do
  {
    if ( (*(_BYTE *)(v16 + 36) & 1) != 0
      || *(_DWORD *)(v16 + 32) != 1
      || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, v16 + 16)
      || (unsigned __int64)sub_182D020(qword_1C7F2C0, v16 + 16) > 0xFFFFFFFF )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v328, "sortmax can only handle unsigned weights. Use a different heuristic.");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v328);
      sub_233E40((__int64)v328);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v21 = sub_182D020(qword_1C7F2C0, v16 + 16);
    if ( v21 )
    {
      v22 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
        ++*(_DWORD *)(v22 + 8);
      if ( !v17 )
      {
        v23 = (_QWORD *)sub_186B270(0x18u);
        *v23 = 2;
        v17 = v23 + 1;
        v24 = 1;
        v25 = v17;
        goto LABEL_19;
      }
      while ( 1 )
      {
        v26 = *((_DWORD *)v17 - 1);
        if ( v26 == *((_DWORD *)v17 - 2) )
        {
          v44 = (3 * v26 + 1) >> 1;
          v45 = 8 * v44 + 8;
          v308 = v44;
          if ( 8 * v26 + 8 >= (unsigned int)v45 || v26 >= v44 )
          {
            v260 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v260 = (char *)off_1C63128;
            sub_2333C0(v260 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v260, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v46 = (unsigned int *)sub_186B300(v17 - 1, v45);
          v47 = v46[1];
          v17 = (__int64 *)(v46 + 2);
          *v46 = v308;
          LODWORD(v46) = v47;
          v25 = &v17[v47];
          v24 = (_DWORD)v46 + 1;
LABEL_19:
          *v25 = v22;
          *((_DWORD *)v17 - 1) = v24;
          if ( !--v21 )
            break;
        }
        else
        {
          v17[v26] = v22;
          *((_DWORD *)v17 - 1) = v26 + 1;
          if ( !--v21 )
            break;
        }
        v22 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 )
          ++*(_DWORD *)(v22 + 8);
      }
    }
    v16 += 56;
  }
  while ( v303 != v16 );
  if ( !v17 )
    goto LABEL_241;
  v27 = *((_DWORD *)v17 - 1);
  if ( v27 == 1 )
  {
    v62 = (_QWORD *)sub_186B270(0x18u);
    v305 = v62 + 1;
    v62[1] = *v17;
    *v62 = 0x100000002LL;
    v43 = **(_QWORD **)(a1 + 32);
    goto LABEL_53;
  }
  v302 = a1 + 160;
  if ( v27 == 2 )
  {
    v316 = nullptr;
    sub_326720(a1 + 160, 1u, v17, 1u, v17 + 1, &v316);
    v305 = v316;
    v43 = **(_QWORD **)(a1 + 32);
    goto LABEL_53;
  }
  if ( !v27 )
  {
LABEL_241:
    v43 = **(_QWORD **)(a1 + 32);
    v305 = nullptr;
    goto LABEL_53;
  }
  if ( v27 > 9 )
  {
    v28 = a1 + 160;
    v29 = v27 >> 1;
    if ( v27 > 0x13 )
      goto LABEL_31;
    goto LABEL_331;
  }
  v63 = sub_329440(a1 + 160, v27);
  v64 = 1 << (v27 - 1);
  if ( *(_DWORD *)(a1 + 176) >= 2u )
    v64 = 2 << (v27 - 1);
  if ( v64 + 5 * v27 < 5 * (int)v63 + HIDWORD(v63) )
  {
    v323 = nullptr;
    v305 = nullptr;
    for ( i = 0; i < v27; ++i )
    {
      ++*(_DWORD *)(a1 + 180);
      v68 = sub_320ED0(*(_QWORD *)(a1 + 168), "dsort");
      if ( v305 )
      {
        v69 = *((_DWORD *)v305 - 1);
        if ( v69 == *((_DWORD *)v305 - 2) )
        {
          v70 = (3 * v69 + 1) >> 1;
          v71 = 8 * v70 + 8;
          if ( 8 * v69 + 8 >= v71 || v69 >= v70 )
          {
            v250 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v250 = (char *)off_1C63128;
            sub_2333C0(v250 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v250, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v72 = (unsigned int *)sub_186B300(v305 - 1, v71);
          v73 = v72[1];
          *v72 = v70;
          v305 = v72 + 2;
          LODWORD(v72) = v73;
          v67 = &v305[v73];
          v66 = (_DWORD)v72 + 1;
        }
        else
        {
          v65 = v69;
          v66 = v69 + 1;
          v67 = &v305[v65];
        }
      }
      else
      {
        v167 = (_QWORD *)sub_186B270(0x18u);
        *v167 = 2;
        v305 = v167 + 1;
        v67 = v167 + 1;
        v66 = 1;
      }
      *v67 = v68;
      *((_DWORD *)v305 - 1) = v66;
    }
    if ( *(_DWORD *)(a1 + 176) != 1 )
    {
      v74 = v323;
      v290 = v27 + 1;
      if ( v323 )
      {
        v284 = -1;
        v280 = 0;
        goto LABEL_108;
      }
      v242 = (_QWORD *)sub_186B270(0x18u);
      v74 = v242 + 1;
      v284 = -1;
      v323 = v242 + 1;
      v280 = 0;
      v243 = *v305;
      *v242 = 0x100000002LL;
      v242[1] = v243;
      v282 = 0;
LABEL_112:
      v78 = *(_QWORD *)(a1 + 168);
      v79 = *v17;
      v291 = v17 + 1;
      v80 = *(_QWORD *)(v78 + 8);
      v81 = *(_QWORD *)(v80 + 864);
      v311 = *(_QWORD *)(v80 + 856);
      if ( *v17 == v311 )
      {
        v311 = *(_QWORD *)(v80 + 864);
        v82 = 0;
        goto LABEL_124;
      }
      v82 = 0;
LABEL_114:
      if ( v79 == v81 )
        goto LABEL_124;
      if ( !*(_WORD *)(v79 + 4) )
      {
        v83 = *(_DWORD **)(*(_QWORD *)(v79 + 16) + 24LL);
        if ( v83 )
        {
          if ( !*v83 && v83[1] == 8 && *(_DWORD *)(v79 + 24) == 1 )
          {
            v311 = *(_QWORD *)(v79 + 32);
            goto LABEL_124;
          }
        }
      }
      v84 = sub_15E1A70(v80);
      v311 = v84;
      if ( v84 )
        ++*(_DWORD *)(v84 + 8);
      v85 = *(_QWORD **)(v78 + 200);
      if ( v85 )
      {
        v86 = *((_DWORD *)v85 - 1);
        if ( v86 == *((_DWORD *)v85 - 2) )
        {
          v150 = (3 * v86 + 1) >> 1;
          v151 = 8 * v150 + 8;
          if ( 8 * v86 + 8 >= (unsigned int)v151 || v86 >= v150 )
          {
            v257 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v257 = (char *)off_1C63128;
            sub_2333C0(v257 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v257, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v278 = (3 * v86 + 1) >> 1;
          v152 = (unsigned int *)sub_186B300(v85 - 1, v151);
          v85 = v152 + 2;
          *(_QWORD *)(v78 + 200) = v152 + 2;
          *v152 = v278;
          LODWORD(v152) = v152[1];
          v89 = &v85[(unsigned int)v152];
          v88 = (_DWORD)v152 + 1;
        }
        else
        {
          v87 = v86;
          v88 = v86 + 1;
          v89 = &v85[v87];
        }
      }
      else
      {
        v245 = (_QWORD *)sub_186B270(0x18u);
        *v245 = 2;
        v88 = 1;
        v85 = v245 + 1;
        *(_QWORD *)(v78 + 200) = v85;
        v89 = v85;
      }
      *v89 = v311;
      v74 = v323;
      *((_DWORD *)v85 - 1) = v88;
      if ( v74 )
      {
LABEL_124:
        v90 = *((_DWORD *)v74 - 1);
        if ( v90 == *((_DWORD *)v74 - 2) )
          goto LABEL_151;
LABEL_125:
        v91 = v90 + 1;
        v92 = &v74[v90];
        goto LABEL_126;
      }
      v153 = (_QWORD *)sub_186B270(0x18u);
      v74 = v153 + 1;
      *v153 = 0x100000002LL;
      ++v82;
      v153[1] = v311;
      v90 = 0;
      v323 = v74;
      if ( !v282 )
      {
        v121 = *(_QWORD *)(a1 + 168);
        v91 = 1;
        v120 = _mm_loadl_epi64((const __m128i *)&qword_18B6000);
LABEL_160:
        v122 = v74;
        v123 = *(_QWORD *)(*(_QWORD *)(v121 + 8) + 856LL);
        v124 = v74;
        while ( *v124 != v123 )
        {
          if ( ++v124 == &v74[v91] )
          {
            v268 = v91;
            v276 = &v74[v91];
            *(_QWORD *)(a1 + 184) = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 184)), v120).m128i_u64[0];
            v134 = (_QWORD *)sub_186B270(0x18u);
            v135 = v276;
            v91 = v268;
            *v134 = 2;
            v136 = v134 + 1;
            v137 = 1;
            v313 = v136;
            v138 = v136;
            while ( 1 )
            {
              v139 = *v122++;
              *v136 = v139;
              *(v138 - 1) = v137;
              if ( v122 == v135 )
                break;
              if ( *(v138 - 2) == v137 )
              {
                v141 = (3 * v137 + 1) >> 1;
                v142 = 8 * v141 + 8;
                if ( 8 * v137 + 8 >= v142 || v137 >= v141 )
                {
                  v256 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v328, "Overflow encountered when expanding vector");
                  *v256 = (char *)off_1C63128;
                  sub_2333C0(v256 + 1, v328);
                  sub_233E40((__int64)v328);
                  __cxa_throw(v256, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v264 = v91;
                v269 = v135;
                v277 = (3 * v137 + 1) >> 1;
                v143 = (unsigned int *)sub_186B300(v313 - 2, v142);
                v144 = v143 + 2;
                v135 = v269;
                v313 = v143 + 2;
                v91 = v264;
                v138 = v143 + 2;
                *v143 = v277;
                LODWORD(v143) = v143[1];
                v136 = &v144[2 * (unsigned int)v143];
                v137 = (_DWORD)v143 + 1;
              }
              else
              {
                v140 = v137++;
                v136 = &v138[2 * v140];
              }
            }
            v119 = *(_QWORD *)(a1 + 168);
            goto LABEL_179;
          }
        }
        goto LABEL_148;
      }
LABEL_127:
      if ( v82 >= v290 )
        goto LABEL_148;
      v93 = *(_QWORD *)(a1 + 168);
      v94 = v291;
      v312 = v82;
      v95 = *(_QWORD *)(v93 + 8);
      v96 = *v291;
      v97 = *(_QWORD *)(v95 + 856);
      v98 = *(_QWORD *)(v95 + 864);
      if ( *v291 != v97 )
      {
LABEL_129:
        if ( v96 == v98 )
          goto LABEL_139;
        if ( !*(_WORD *)(v96 + 4) )
        {
          v99 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL);
          if ( v99 )
          {
            if ( !*v99 && v99[1] == 8 && *(_DWORD *)(v96 + 24) == 1 )
            {
              v97 = *(_QWORD *)(v96 + 32);
              goto LABEL_139;
            }
          }
        }
        v272 = v93;
        v100 = sub_15E1A70(v95);
        v97 = v100;
        if ( v100 )
          ++*(_DWORD *)(v100 + 8);
        v101 = *(_QWORD **)(v272 + 200);
        if ( v101 )
        {
          v102 = *((_DWORD *)v101 - 1);
          if ( v102 == *((_DWORD *)v101 - 2) )
          {
            v125 = (3 * v102 + 1) >> 1;
            v126 = 8 * v125 + 8;
            if ( 8 * v102 + 8 >= (unsigned int)v126 || v102 >= v125 )
            {
              v258 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v328, "Overflow encountered when expanding vector");
              *v258 = (char *)off_1C63128;
              sub_2333C0(v258 + 1, v328);
              sub_233E40((__int64)v328);
              __cxa_throw(v258, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v263 = v272;
            v267 = v97;
            v274 = (3 * v102 + 1) >> 1;
            v127 = (unsigned int *)sub_186B300(v101 - 1, v126);
            v128 = v127 + 2;
            v97 = v267;
            *(_QWORD *)(v263 + 200) = v127 + 2;
            *v127 = v274;
            LODWORD(v127) = v127[1];
            *(_QWORD *)&v128[2 * (unsigned int)v127] = v267;
            *(v128 - 1) = (_DWORD)v127 + 1;
            v74 = v323;
            if ( v323 )
            {
LABEL_139:
              v106 = *((_DWORD *)v74 - 1);
              if ( v106 == *((_DWORD *)v74 - 2) )
                goto LABEL_144;
LABEL_140:
              v107 = v106;
              v108 = v106 + 1;
              v109 = &v74[v107];
              goto LABEL_141;
            }
LABEL_167:
            v275 = v97;
            v129 = (_QWORD *)sub_186B270(0x18u);
            *v129 = 2;
            v97 = v275;
            v108 = 1;
            v74 = v129 + 1;
            v323 = v74;
            v109 = v74;
            goto LABEL_141;
          }
          v103 = v102;
          v104 = v102 + 1;
          v105 = &v101[v103];
        }
        else
        {
          v271 = v272;
          v279 = v100;
          v166 = (_QWORD *)sub_186B270(0x18u);
          *v166 = 2;
          v104 = 1;
          v101 = v166 + 1;
          v97 = v279;
          *(_QWORD *)(v271 + 200) = v101;
          v105 = v101;
        }
        *v105 = v97;
        *((_DWORD *)v101 - 1) = v104;
        v74 = v323;
        if ( v323 )
          goto LABEL_139;
        goto LABEL_167;
      }
      while ( 1 )
      {
        v97 = v98;
        v106 = *((_DWORD *)v74 - 1);
        if ( v106 != *((_DWORD *)v74 - 2) )
          goto LABEL_140;
LABEL_144:
        v111 = (3 * v106 + 1) >> 1;
        v112 = 8 * v111 + 8;
        if ( 8 * v106 + 8 >= (unsigned int)v112 || v106 >= v111 )
        {
          v253 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v328, "Overflow encountered when expanding vector");
          *v253 = (char *)off_1C63128;
          sub_2333C0(v253 + 1, v328);
          sub_233E40((__int64)v328);
          __cxa_throw(v253, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v266 = v97;
        v273 = (3 * v106 + 1) >> 1;
        v113 = sub_186B300(v74 - 1, v112);
        v74 = (__int64 *)(v113 + 8);
        v97 = v266;
        v323 = (__int64 *)(v113 + 8);
        *(_DWORD *)v113 = v273;
        LODWORD(v113) = *(_DWORD *)(v113 + 4);
        v109 = &v74[(unsigned int)v113];
        v108 = v113 + 1;
LABEL_141:
        *v109 = v97;
        ++v312;
        *((_DWORD *)v74 - 1) = v108;
        sub_322E00(v302, 1, v284, v312, &v323, v27, (__int64)v17);
        ++v94;
        v74 = v323;
        v110 = *((_DWORD *)v323 - 1);
        *((_DWORD *)v323 - 1) = v110 - 1;
        if ( v312 >= v290 )
          break;
        v93 = *(_QWORD *)(a1 + 168);
        v96 = *v94;
        v95 = *(_QWORD *)(v93 + 8);
        v97 = *(_QWORD *)(v95 + 856);
        v98 = *(_QWORD *)(v95 + 864);
        if ( v97 != *v94 )
          goto LABEL_129;
      }
      v90 = v110 - 2;
LABEL_148:
      while ( 1 )
      {
        ++v291;
        *((_DWORD *)v74 - 1) = v90;
        if ( v27 - v282 == v82 )
          break;
        v78 = *(_QWORD *)(a1 + 168);
        v79 = *(v291 - 1);
        v80 = *(_QWORD *)(v78 + 8);
        v81 = *(_QWORD *)(v80 + 864);
        v311 = *(_QWORD *)(v80 + 856);
        if ( v311 != v79 )
          goto LABEL_114;
        v311 = *(_QWORD *)(v80 + 864);
        v90 = *((_DWORD *)v74 - 1);
        if ( v90 != *((_DWORD *)v74 - 2) )
          goto LABEL_125;
LABEL_151:
        v114 = (3 * v90 + 1) >> 1;
        v115 = 8 * v114 + 8;
        if ( 8 * v90 + 8 >= v115 || v90 >= v114 )
        {
          v261 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v328, "Overflow encountered when expanding vector");
          *v261 = (char *)off_1C63128;
          sub_2333C0(v261 + 1, v328);
          sub_233E40((__int64)v328);
          __cxa_throw(v261, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v116 = (unsigned int *)sub_186B300(v74 - 1, v115);
        v117 = v116[1];
        v74 = (__int64 *)(v116 + 2);
        *v116 = v114;
        v323 = v74;
        v90 = v117;
        v92 = &v74[v117];
        v91 = v90 + 1;
LABEL_126:
        ++v82;
        *v92 = v311;
        *((_DWORD *)v74 - 1) = v91;
        if ( v282 )
          goto LABEL_127;
        v119 = *(_QWORD *)(a1 + 168);
        v120 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(v91));
        v121 = v119;
        if ( v91 )
          goto LABEL_160;
        ++*(_DWORD *)(a1 + 184);
        v313 = nullptr;
LABEL_179:
        v270 = v91;
        v145 = sub_2FF8B0(v119);
        v146 = sub_15EC240(*(_QWORD *)(v119 + 8), v270);
        sub_E5EBF0(v145, v146);
        if ( v313 )
          sub_186B220(v313 - 2);
        v74 = v323;
        v90 = *((_DWORD *)v323 - 1) - 1;
      }
      v75 = v90 - 1;
      while ( 1 )
      {
        ++v280;
        *((_DWORD *)v74 - 1) = v75;
        --v290;
        ++v284;
        if ( v27 < (int)v280 + 1 )
          break;
LABEL_108:
        v75 = *((_DWORD *)v74 - 1);
        if ( v75 == *((_DWORD *)v74 - 2) )
        {
          v130 = (3 * v75 + 1) >> 1;
          v131 = 8 * v130 + 8;
          if ( 8 * v75 + 8 >= v131 || v75 >= v130 )
          {
            v259 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v259 = (char *)off_1C63128;
            sub_2333C0(v259 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v259, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v132 = (unsigned int *)sub_186B300(v74 - 1, v131);
          v133 = v132[1];
          v74 = (__int64 *)(v132 + 2);
          *v132 = v130;
          v323 = v74;
          v75 = v133;
          v77 = &v74[v133];
          v76 = v133 + 1;
        }
        else
        {
          v76 = v75 + 1;
          v77 = &v74[v75];
        }
        v282 = v280;
        *v77 = v305[v280];
        *((_DWORD *)v74 - 1) = v76;
        if ( (_DWORD)v280 == -1 )
        {
          v147 = *(_QWORD *)(a1 + 168);
          if ( v76 )
          {
            v148 = v74;
            v149 = v74;
            while ( *v149 != *(_QWORD *)(*(_QWORD *)(v147 + 8) + 856LL) )
            {
              if ( ++v149 == &v74[v76] )
              {
                v292 = &v74[v76];
                *(_QWORD *)(a1 + 184) = _mm_add_epi32(
                                          _mm_loadl_epi64((const __m128i *)(a1 + 184)),
                                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(v76))).m128i_u64[0];
                v154 = (_QWORD *)sub_186B270(0x18u);
                v155 = v292;
                *v154 = 2;
                v156 = 1;
                v157 = v154 + 1;
                v314 = v157;
                while ( 1 )
                {
                  v158 = *v148++;
                  *v157 = v158;
                  *(v314 - 1) = v156;
                  if ( v148 == v155 )
                    break;
                  if ( *(v314 - 2) == v156 )
                  {
                    v160 = (3 * v156 + 1) >> 1;
                    v161 = 8 * v160 + 8;
                    if ( 8 * v156 + 8 >= v161 || v156 >= v160 )
                    {
                      v255 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v328, "Overflow encountered when expanding vector");
                      *v255 = (char *)off_1C63128;
                      sub_2333C0(v255 + 1, v328);
                      sub_233E40((__int64)v328);
                      __cxa_throw(
                        v255,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v283 = v155;
                    v293 = (3 * v156 + 1) >> 1;
                    v162 = (unsigned int *)sub_186B300(v314 - 2, v161);
                    v163 = v162 + 2;
                    v155 = v283;
                    v314 = v162 + 2;
                    *v162 = v293;
                    LODWORD(v162) = v162[1];
                    v157 = &v163[2 * (unsigned int)v162];
                    v156 = (_DWORD)v162 + 1;
                  }
                  else
                  {
                    v159 = v156++;
                    v157 = &v314[2 * v159];
                  }
                }
                v147 = *(_QWORD *)(a1 + 168);
                goto LABEL_203;
              }
            }
          }
          else
          {
            ++*(_DWORD *)(a1 + 184);
            v314 = nullptr;
LABEL_203:
            v164 = sub_2FF8B0(v147);
            v165 = sub_15EC240(*(_QWORD *)(v147 + 8), v76);
            sub_E5EBF0(v164, v165);
            if ( v314 )
              sub_186B220(v314 - 2);
            v74 = v323;
            v75 = *((_DWORD *)v323 - 1) - 1;
          }
        }
        else if ( v290 != 1 )
        {
          goto LABEL_112;
        }
      }
      if ( !*(_DWORD *)(a1 + 176) )
      {
        v118 = v323;
        if ( v323 )
LABEL_158:
          sub_186B220(v118 - 1);
        goto LABEL_48;
      }
    }
    v315 = 1;
    while ( 1 )
    {
      v192 = *(_QWORD *)(a1 + 168);
      v193 = *(_QWORD *)(v192 + 8);
      v194 = v305[v315 - 1];
      v195 = *(_QWORD *)(v193 + 856);
      if ( v194 == v195 )
      {
        v195 = *(_QWORD *)(v193 + 864);
      }
      else if ( v194 != *(_QWORD *)(v193 + 864) )
      {
        if ( !*(_WORD *)(v194 + 4)
          && (v196 = *(_DWORD **)(*(_QWORD *)(v194 + 16) + 24LL)) != nullptr
          && !*v196
          && v196[1] == 8
          && *(_DWORD *)(v194 + 24) == 1 )
        {
          v195 = *(_QWORD *)(v194 + 32);
        }
        else
        {
          v197 = sub_15E1A70(v193);
          v195 = v197;
          if ( v197 )
            ++*(_DWORD *)(v197 + 8);
          v198 = *(_QWORD **)(v192 + 200);
          if ( v198 )
          {
            v199 = *((_DWORD *)v198 - 1);
            if ( v199 == *((_DWORD *)v198 - 2) )
            {
              v239 = (3 * v199 + 1) >> 1;
              v240 = 8 * v239 + 8;
              if ( 8 * v199 + 8 >= (unsigned int)v240 || v199 >= v239 )
              {
                v251 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v328, "Overflow encountered when expanding vector");
                *v251 = (char *)off_1C63128;
                sub_2333C0(v251 + 1, v328);
                sub_233E40((__int64)v328);
                __cxa_throw(v251, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v297 = (3 * v199 + 1) >> 1;
              v241 = (unsigned int *)sub_186B300(v198 - 1, v240);
              v198 = v241 + 2;
              *(_QWORD *)(v192 + 200) = v241 + 2;
              *v241 = v297;
              LODWORD(v241) = v241[1];
              v202 = &v198[(unsigned int)v241];
              v201 = (_DWORD)v241 + 1;
            }
            else
            {
              v200 = v199;
              v201 = v199 + 1;
              v202 = &v198[v200];
            }
          }
          else
          {
            v246 = (_QWORD *)sub_186B270(0x18u);
            *v246 = 2;
            v198 = v246 + 1;
            v201 = 1;
            *(_QWORD *)(v192 + 200) = v198;
            v202 = v198;
          }
          *v202 = v195;
          *((_DWORD *)v198 - 1) = v201;
        }
      }
      v118 = v323;
      if ( v323 )
      {
        v203 = *((_DWORD *)v323 - 1);
        if ( v203 == *((_DWORD *)v323 - 2) )
        {
          v217 = (3 * v203 + 1) >> 1;
          v218 = 8 * v217 + 8;
          if ( 8 * v203 + 8 >= v218 || v203 >= v217 )
          {
            v252 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v252 = (char *)off_1C63128;
            sub_2333C0(v252 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v252, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v219 = (unsigned int *)sub_186B300(v323 - 1, v218);
          v118 = (__int64 *)(v219 + 2);
          *v219 = v217;
          v220 = v219[1];
          v323 = v118;
          v203 = v220;
          v205 = &v118[v220];
          v204 = v203 + 1;
        }
        else
        {
          v204 = v203 + 1;
          v205 = &v323[v203];
        }
        *v205 = v195;
        *((_DWORD *)v118 - 1) = v204;
        if ( (_DWORD)v315 == v27 + 1 )
        {
          v221 = *(_QWORD *)(a1 + 168);
          v222 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(v204));
          v223 = v221;
          if ( !v204 )
          {
            ++*(_DWORD *)(a1 + 184);
            v230 = nullptr;
LABEL_288:
            v289 = v204;
            v237 = sub_2FF8B0(v221);
            v238 = sub_15EC240(*(_QWORD *)(v221 + 8), v289);
            sub_E5EBF0(v237, v238);
            if ( v230 )
              sub_186B220(v230 - 1);
            v118 = v323;
            v203 = *((_DWORD *)v323 - 1) - 1;
            goto LABEL_269;
          }
          goto LABEL_275;
        }
        v294 = v27 - v315;
      }
      else
      {
        v244 = (_QWORD *)sub_186B270(0x18u);
        v118 = v244 + 1;
        v244[1] = v195;
        *v244 = 0x100000002LL;
        v323 = v244 + 1;
        if ( (_DWORD)v315 == v27 + 1 )
        {
          v223 = *(_QWORD *)(a1 + 168);
          v204 = 1;
          v203 = 0;
          v222 = _mm_loadl_epi64((const __m128i *)&qword_18B6000);
LABEL_275:
          v224 = v118;
          v225 = *(_QWORD *)(*(_QWORD *)(v223 + 8) + 856LL);
          v226 = v118;
          while ( *v226 != v225 )
          {
            if ( &v118[v204] == ++v226 )
            {
              v287 = &v118[v204];
              v295 = v204;
              *(_QWORD *)(a1 + 184) = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 184)), v222).m128i_u64[0];
              v227 = (_QWORD *)sub_186B270(0x18u);
              v204 = v295;
              v228 = v227 + 1;
              v229 = v287;
              *v227 = 2;
              v230 = v227 + 1;
              v231 = 1;
              while ( 1 )
              {
                v232 = *v224++;
                *v228 = v232;
                *((_DWORD *)v230 - 1) = v231;
                if ( v224 == v229 )
                  break;
                if ( *((_DWORD *)v230 - 2) == v231 )
                {
                  v234 = (3 * v231 + 1) >> 1;
                  v235 = 8 * v234 + 8;
                  if ( 8 * v231 + 8 >= (unsigned int)v235 || v231 >= v234 )
                  {
                    v262 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v328, "Overflow encountered when expanding vector");
                    *v262 = (char *)off_1C63128;
                    sub_2333C0(v262 + 1, v328);
                    sub_233E40((__int64)v328);
                    __cxa_throw(
                      v262,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v281 = v229;
                  v288 = (3 * v231 + 1) >> 1;
                  v296 = v204;
                  v236 = (unsigned int *)sub_186B300(v230 - 1, v235);
                  v230 = v236 + 2;
                  v204 = v296;
                  v229 = v281;
                  *v236 = v288;
                  LODWORD(v236) = v236[1];
                  v228 = &v230[(unsigned int)v236];
                  v231 = (_DWORD)v236 + 1;
                }
                else
                {
                  v233 = v231++;
                  v228 = &v230[v233];
                }
              }
              v221 = *(_QWORD *)(a1 + 168);
              goto LABEL_288;
            }
          }
          goto LABEL_269;
        }
        v204 = 1;
        v294 = v27 - v315;
      }
      v206 = *v17;
      for ( j = 0; ; v206 = v17[j] )
      {
        if ( *((_DWORD *)v118 - 2) == v204 )
        {
          v212 = (3 * v204 + 1) >> 1;
          v213 = 8 * v212 + 8;
          if ( 8 * v204 + 8 >= v213 || v204 >= v212 )
          {
            v254 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v328, "Overflow encountered when expanding vector");
            *v254 = (char *)off_1C63128;
            sub_2333C0(v254 + 1, v328);
            sub_233E40((__int64)v328);
            __cxa_throw(v254, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v286 = (3 * v204 + 1) >> 1;
          v214 = sub_186B300(v118 - 1, v213);
          v118 = (__int64 *)(v214 + 8);
          v323 = (__int64 *)(v214 + 8);
          *(_DWORD *)v214 = v286;
          v215 = *(unsigned int *)(v214 + 4);
          v216 = v215;
          v210 = &v118[v215];
          v209 = v216 + 1;
        }
        else
        {
          v208 = v204;
          v209 = v204 + 1;
          v210 = &v118[v208];
        }
        *v210 = v206;
        *((_DWORD *)v118 - 1) = v209;
        sub_322E00(v302, 0, v294, j + 1, &v323, v27, (__int64)v17);
        v118 = v323;
        ++j;
        v211 = *((_DWORD *)v323 - 1);
        v204 = v211 - 1;
        *((_DWORD *)v323 - 1) = v211 - 1;
        if ( v315 == j )
          break;
      }
      v203 = v211 - 2;
LABEL_269:
      ++v315;
      *((_DWORD *)v118 - 1) = v203;
      if ( v27 < (unsigned int)v315 )
        goto LABEL_158;
    }
  }
  v29 = v27 >> 1;
  if ( v27 >> 1 == 1 )
  {
    v247 = (_QWORD *)sub_186B270(0x18u);
    v307 = v247 + 1;
    v247[1] = *v17;
    *v247 = 0x100000002LL;
    v38 = 1;
  }
  else
  {
    v28 = a1 + 160;
    if ( v29 == 2 )
    {
      v317 = nullptr;
      sub_326720(v302, 1u, v17, 1u, v17 + 1, &v317);
      v307 = v317;
      v38 = 2;
    }
    else
    {
LABEL_331:
      v248 = sub_329440(v28, v29);
      v249 = 1 << (v29 - 1);
      if ( *(_DWORD *)(a1 + 176) >= 2u )
        v249 = 2 << (v29 - 1);
      if ( v249 + 5 * v29 >= 5 * (int)v248 + HIDWORD(v248) )
      {
LABEL_31:
        v319 = nullptr;
        sub_329D10(v302, v27 >> 2, v17, &v319, v19, v20);
        v320 = nullptr;
        v304 = v319;
        sub_329D10(v302, v29 - (v27 >> 2), &v17[v27 >> 2], &v320, v30, v31);
        v32 = v320;
        if ( v320 )
          v33 = *((_DWORD *)v320 - 1);
        else
          v33 = 0;
        if ( v304 )
        {
          v34 = *((_DWORD *)v304 - 1);
          v35 = v304;
        }
        else
        {
          v34 = 0;
          v35 = nullptr;
        }
        v317 = nullptr;
        sub_326720(v302, v34, v35, v33, v320, &v317);
        v307 = v317;
        if ( v32 )
          sub_186B220(v32 - 1);
        if ( v304 )
          sub_186B220(v304 - 1);
        v38 = v29;
      }
      else
      {
        v317 = nullptr;
        sub_323400(v302, v29, v29, v17, &v317);
        v307 = v317;
        v38 = v29;
      }
    }
  }
  v318 = nullptr;
  sub_329D10(v302, v27 - v29, &v17[v38], &v318, v36, v37);
  v39 = v318;
  if ( v318 )
    v40 = *((_DWORD *)v318 - 1);
  else
    v40 = 0;
  if ( v307 )
  {
    v41 = *((_DWORD *)v307 - 1);
    v42 = v307;
  }
  else
  {
    v41 = 0;
    v42 = nullptr;
  }
  v316 = nullptr;
  sub_326720(v302, v41, v42, v40, v318, &v316);
  v305 = v316;
  if ( v39 )
    sub_186B220(v39 - 1);
  if ( v307 )
    sub_186B220(v307 - 1);
LABEL_48:
  v43 = **(_QWORD **)(a1 + 32);
LABEL_53:
  if ( v43 )
  {
    v309 = 0;
    for ( k = v43 + 56LL * *(unsigned int *)(v43 - 4); v43 != k; v43 += 56 )
    {
      if ( *(_DWORD *)(v43 + 48) == 1 )
      {
        v59 = sub_182D020(qword_1C7F2C0, v43 + 16);
        if ( v59 )
        {
          v60 = v59 + v309;
          do
          {
            v61 = sub_2FF8B0(a1);
            sub_E5EBF0(v61, v305[v309++]);
          }
          while ( v309 != v60 );
        }
      }
    }
  }
  else
  {
    v309 = 0;
  }
  if ( !v305 )
    goto LABEL_302;
  while ( 1 )
  {
    if ( v309 >= *((_DWORD *)v305 - 1) )
      goto LABEL_70;
    if ( (*(_BYTE *)(a1 + 92) & 1) != 0
      || *(_DWORD *)(a1 + 88) != 1
      || (*(_BYTE *)(a1 + 124) & 1) != 0
      || *(_DWORD *)(a1 + 120) != 1 )
    {
      LOBYTE(v49) = sub_1848D40(qword_1C7F2C0, a1 + 72, a1 + 104);
    }
    else if ( (*(_BYTE *)(a1 + 76) & 1) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
    {
      v49 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a1 + 72, a1 + 104) >> 31;
    }
    else
    {
      LOBYTE(v49) = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 104);
    }
    if ( !(_BYTE)v49 )
      goto LABEL_70;
    sub_302130(a1, "sortmax");
    v50 = sub_2FF8B0(a1);
    sub_E5EBF0(v50, v305[v309]);
    v51 = (std::ios_base *)sub_2FF8B0(a1);
    v6 = sub_E60CB0(v51, 0, 0);
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
      break;
    if ( v6 != 1 )
    {
      if ( v6 != -1 )
        goto LABEL_71;
      v52 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, a1 + 72, a1 + 104);
      }
      else
      {
        v53 = *(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 76) &= ~1u;
        *(_DWORD *)(a1 + 72) = v53;
      }
      if ( (*(_BYTE *)(a1 + 124) & 1) != 0 )
      {
        sub_182C690(v52, a1 + 88, a1 + 120);
      }
      else
      {
        v54 = *(_DWORD *)(a1 + 120);
        *(_BYTE *)(a1 + 92) &= ~1u;
        *(_DWORD *)(a1 + 88) = v54;
      }
LABEL_70:
      v6 = 1;
      goto LABEL_71;
    }
    ++v309;
    v168 = (_QWORD *)sub_2FF8B0(a1);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v168 + 32LL))(v168, a1 + 136);
    if ( *(_QWORD *)(a1 + 136) )
    {
      v169 = v168[7];
      if ( v169 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v169 + 32LL))(v169, a1 + 136);
    }
    v170 = **(_QWORD ***)(a1 + 32);
    if ( v170 )
    {
      for ( m = &v170[7 * *((unsigned int *)v170 - 1)]; m != v170; *((_DWORD *)v170 - 2) = v172 )
      {
        v172 = sub_1374270(*(_QWORD *)(a1 + 136), *v170);
        v170 += 7;
      }
    }
    v173 = *((_DWORD *)v305 - 1);
    if ( v309 < v173 )
    {
      v174 = &v305[v309];
      while ( (unsigned __int8)sub_1374270(*(_QWORD *)(a1 + 136), *v174) )
      {
        v175 = sub_2FF8B0(a1);
        sub_E5EBF0(v175, *v174);
        ++v309;
        ++v174;
        v173 = *((_DWORD *)v305 - 1);
        if ( v309 >= v173 )
          goto LABEL_220;
      }
      v173 = *((_DWORD *)v305 - 1);
    }
LABEL_220:
    v322[0] = 1;
    v321[0] = 0;
    v176 = qword_1C7F2C0;
    v321[1] = 0;
    v322[1] = 0;
    v177 = v173 - v309;
    if ( v177 < 0 )
      sub_1830C40(qword_1C7F2C0, v321, (unsigned int)v177);
    else
      LODWORD(v321[0]) = v177;
    sub_182CBA0(v176, v322);
    BYTE4(v322[0]) &= ~1u;
    LODWORD(v322[0]) = 1;
    v328[0] = 0;
    v178 = qword_1C7F2C0;
    v328[1] = 0;
    v329[0] = 1;
    v329[1] = 0;
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v328, a1 + 72);
    else
      LODWORD(v328[0]) = *(_DWORD *)(a1 + 72);
    if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
    {
      sub_182C690(v178, v329, a1 + 88);
    }
    else
    {
      v179 = *(_DWORD *)(a1 + 88);
      BYTE4(v329[0]) &= ~1u;
      LODWORD(v329[0]) = v179;
    }
    v180 = qword_1C7F2C0;
    if ( LODWORD(v321[0]) )
    {
      if ( LODWORD(v328[0]) )
      {
        if ( (v329[0] & 0x100000000LL) != 0
          || LODWORD(v329[0]) != 1
          || (v322[0] & 0x100000000LL) != 0
          || LODWORD(v322[0]) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v328, v321, v328);
        }
        else
        {
          v301 = qword_1C7F2C0;
          sub_1831A80(qword_1C7F2C0, v328, v321, v328);
          sub_182CBA0(v301, v329);
          BYTE4(v329[0]) &= ~1u;
          LODWORD(v329[0]) = 1;
        }
      }
      else
      {
        if ( (v321[0] & 0x100000000LL) != 0 )
        {
          v300 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v328, v321);
          v180 = v300;
        }
        else
        {
          BYTE4(v328[0]) &= ~1u;
          LODWORD(v328[0]) = v321[0];
        }
        if ( (v322[0] & 0x100000000LL) != 0 )
        {
          sub_182C690(v180, v329, v322);
        }
        else
        {
          BYTE4(v329[0]) &= ~1u;
          LODWORD(v329[0]) = v322[0];
        }
      }
    }
    else
    {
      if ( (v328[0] & 0x100000000LL) != 0 )
      {
        v299 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v328, v328);
        v180 = v299;
      }
      else
      {
        BYTE4(v328[0]) &= ~1u;
      }
      if ( (v329[0] & 0x100000000LL) != 0 )
        sub_182C690(v180, v329, v329);
      else
        BYTE4(v329[0]) &= ~1u;
    }
    BYTE4(v323) &= 0xFCu;
    v326 &= 0xFCu;
    LODWORD(v323) = 0;
    v181 = qword_1C7F2C0;
    v324 = 0;
    v325 = 1;
    v327 = 0;
    if ( (v328[0] & 0x100000000LL) != 0 )
    {
      v298 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, &v323, v328);
      v181 = v298;
    }
    else
    {
      LODWORD(v323) = v328[0];
    }
    if ( (v329[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v181, &v325, v329);
    }
    else
    {
      v326 &= ~1u;
      v325 = v329[0];
    }
    v285 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v328);
    sub_182CBA0(v285, v329);
    v182 = (int)v323;
    v183 = BYTE4(v323);
    LODWORD(v323) = *(_DWORD *)(a1 + 104);
    v184 = *(_QWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 104) = v182;
    v185 = v324;
    v324 = v184;
    LOBYTE(v184) = *(_BYTE *)(a1 + 108);
    *(_QWORD *)(a1 + 112) = v185;
    LOBYTE(v185) = v183;
    v183 &= ~2u;
    v186 = v184 & 0xFD;
    BYTE4(v323) = v184 & 1 | v183 & 0xFE | v184 & 2;
    LODWORD(v184) = *(_DWORD *)(a1 + 120);
    *(_BYTE *)(a1 + 108) = v183 & 1 | v186 & 0xFE | v185 & 2;
    LODWORD(v185) = v325;
    v325 = v184;
    v187 = *(_QWORD *)(a1 + 128);
    v188 = v326;
    *(_DWORD *)(a1 + 120) = v185;
    v189 = v327;
    v327 = v187;
    LOBYTE(v187) = *(_BYTE *)(a1 + 124);
    *(_QWORD *)(a1 + 128) = v189;
    LOBYTE(v189) = v188;
    v188 &= ~2u;
    v326 = v187 & 1 | v188 & 0xFE | v187 & 2;
    *(_BYTE *)(a1 + 124) = v188 & 1 | v187 & 0xFC | v189 & 2;
    v190 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v323);
    sub_182CBA0(v190, &v325);
    v191 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v321);
    sub_182CBA0(v191, v322);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 224) + 32LL))(*(_QWORD *)(a1 + 224), a1 + 136);
  }
  v6 = 0;
LABEL_71:
  sub_186B220(v305 - 1);
LABEL_72:
  if ( v17 )
  {
    v55 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 < v55 )
    {
      v56 = v17;
      do
      {
        while ( 1 )
        {
          v57 = *v56;
          if ( *v56 )
          {
            if ( (*(_DWORD *)(v57 + 8))-- == 1 )
              break;
          }
          if ( ++v56 >= v55 )
            goto LABEL_79;
        }
        sub_15D7BC0(v265, v57);
        ++v56;
      }
      while ( v56 < v55 );
    }
LABEL_79:
    sub_186B220(v17 - 1);
  }
  return v6;
}

