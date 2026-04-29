__int64 __fastcall sub_40FBC0(__int64 a1, __m128i a2, __m128 a3)
{
  char v3; // al
  __int64 result; // rax
  int v6; // r12d
  bool v7; // bl
  bool v8; // cl
  char v9; // bl
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rsi
  char v25; // al
  char v26; // al
  int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  __m128i *v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // r12
  unsigned __int64 v35; // r14
  _QWORD *v36; // rbx
  _QWORD *v37; // rax
  __int64 v38; // rax
  int v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r9
  char v45; // al
  _QWORD *v46; // r14
  _QWORD *v47; // r13
  __int64 v48; // rsi
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // eax
  _QWORD *v52; // r12
  _QWORD *v53; // rbx
  _QWORD *v54; // r14
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _BOOL4 v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // ebx
  int v62; // eax
  __int64 v63; // rax
  unsigned int v64; // eax
  int v65; // eax
  int v66; // ecx
  __int64 v67; // rbx
  __int64 v68; // r14
  unsigned __int8 v69; // al
  int v70; // eax
  char v71; // bl
  int dtype_size; // eax
  __int64 v73; // rsi
  int v74; // r13d
  int v75; // eax
  int v76; // eax
  int v77; // r13d
  int v78; // eax
  int v79; // r13d
  int v80; // eax
  int v81; // r12d
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rdi
  _QWORD *v85; // rax
  _QWORD *v86; // r14
  unsigned __int64 v87; // rax
  __m128i *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rdi
  unsigned __int64 v91; // r14
  __int64 v92; // rsi
  __int64 (*v93)(); // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  int v96; // ebx
  int v97; // eax
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // r9
  int v101; // eax
  unsigned __int8 v102; // al
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // ecx
  __int64 v108; // rax
  int v109; // ecx
  int v110; // r12d
  int v111; // ebx
  int v112; // eax
  int v113; // r13d
  int v114; // ebx
  int v115; // eax
  unsigned int v116; // eax
  int v117; // eax
  __int64 v118; // r8
  __int32 v119; // r9d
  int v120; // r11d
  signed int v121; // eax
  unsigned __int8 v122; // bl
  int v123; // r12d
  int v124; // eax
  __int64 v125; // r9
  __int64 v126; // rcx
  int v127; // eax
  int v128; // eax
  int v129; // eax
  unsigned int v130; // eax
  __int64 v131; // rbx
  int v132; // eax
  unsigned int v133; // eax
  int v134; // eax
  __int64 v135; // rsi
  int v136; // ebx
  int v137; // r12d
  int v138; // eax
  int v139; // ebx
  int v140; // eax
  unsigned int v141; // ebx
  unsigned int v142; // r12d
  unsigned int v143; // eax
  int v144; // ebx
  int v145; // r12d
  int v146; // ebx
  __int64 v147; // rdx
  int v148; // eax
  __int64 v149; // rbx
  __int64 v150; // rcx
  __int64 v151; // r9
  int v152; // ebx
  int v153; // r13d
  __int16 v154; // ax
  unsigned int v155; // r12d
  int v156; // eax
  int v157; // eax
  int v158; // eax
  __int64 v159; // rsi
  int v160; // ebx
  int v161; // eax
  int v162; // ebx
  int v163; // eax
  int v164; // ebx
  int v165; // r12d
  int v166; // eax
  int v167; // ebx
  int v168; // eax
  __int64 v169; // rbx
  int v170; // eax
  int v171; // ebx
  int v172; // eax
  __int64 v173; // rsi
  int v174; // eax
  int v175; // ebx
  int v176; // eax
  int v177; // r12d
  int v178; // ebx
  int v179; // eax
  int v180; // ebx
  int v181; // eax
  unsigned int v182; // eax
  int v183; // ebx
  int v184; // eax
  signed int v185; // ebx
  signed int v186; // eax
  signed int v187; // ebx
  signed int v188; // eax
  unsigned int v189; // eax
  __int64 v190; // r9
  __int64 v191; // rcx
  int v192; // ebx
  int v193; // ecx
  unsigned __int8 v194; // al
  signed int v195; // ebx
  __int64 v196; // r9
  __int64 v197; // r8
  unsigned __int8 v198; // dl
  int v199; // eax
  __int64 v200; // rsi
  __m128i v201; // xmm2
  int v202; // edx
  __m128i v203; // xmm3
  signed int v204; // eax
  int v205; // eax
  __int64 v206; // rsi
  __int64 v207; // rsi
  int v208; // eax
  int v209; // eax
  __int64 v210; // r9
  __int64 v211; // rcx
  int v212; // ebx
  int v213; // eax
  unsigned int v214; // ebx
  int v215; // eax
  unsigned int v216; // ebx
  int v217; // eax
  int v218; // eax
  char *v219; // rbx
  unsigned int v220; // r14d
  unsigned int v221; // eax
  unsigned int v222; // r14d
  unsigned int v223; // ebx
  unsigned int v224; // eax
  int v225; // r14d
  __m128i *v226; // rdi
  int v227; // ebx
  int v228; // r14d
  int v229; // ebx
  int v230; // eax
  int v231; // r14d
  __m128i *v232; // rdi
  int v233; // ebx
  int v234; // eax
  int v235; // r14d
  int v236; // ebx
  int v237; // eax
  unsigned int v238; // ebx
  unsigned int v239; // eax
  int v240; // eax
  unsigned int v241; // r14d
  unsigned int v242; // ebx
  int v243; // eax
  int v244; // ebx
  int v245; // ecx
  unsigned __int8 v246; // al
  __int64 v247; // rdx
  unsigned __int64 v248; // rcx
  int v249; // eax
  __int32 v250; // ebx
  int v251; // eax
  char v252; // al
  int v253; // ebx
  int v254; // ecx
  unsigned __int8 v255; // al
  int v256; // ebx
  int v257; // eax
  int v258; // ebx
  unsigned int v259; // eax
  int v260; // r12d
  int v261; // ebx
  __int64 v262; // rsi
  __int64 v263; // rdx
  unsigned __int64 v264; // rcx
  int v265; // eax
  __int64 v266; // rbx
  int v267; // eax
  int v268; // r12d
  int v269; // eax
  __int64 v270; // rsi
  int v271; // eax
  int v272; // eax
  int v273; // r12d
  int v274; // ebx
  int v275; // eax
  int v276; // eax
  int v277; // ebx
  int v278; // eax
  __int32 v279; // eax
  int v280; // ebx
  int v281; // eax
  int v282; // eax
  int v283; // eax
  int v284; // eax
  int v285; // eax
  int v286; // eax
  int v287; // eax
  int v288; // eax
  int v289; // eax
  __int64 v290; // rcx
  __int64 v291; // r9
  int v292; // eax
  __int64 v293; // rsi
  int v294; // eax
  int v295; // eax
  int v296; // eax
  char v297; // al
  int v298; // eax
  int v299; // eax
  int v300; // eax
  int v301; // ebx
  int v302; // eax
  int v303; // ebx
  int v304; // eax
  int v305; // ebx
  int v306; // eax
  int v307; // r12d
  int v308; // eax
  int v309; // r12d
  int v310; // eax
  int v311; // r12d
  int v312; // r14d
  int v313; // eax
  unsigned int v314; // eax
  int v315; // eax
  __int64 v316; // rdx
  const char *v317; // r13
  unsigned int v318; // r12d
  unsigned int v319; // r14d
  unsigned int v320; // eax
  signed int v321; // r12d
  int v322; // ebx
  int v323; // eax
  signed int v324; // [rsp+0h] [rbp-250h]
  __int64 v325; // [rsp+0h] [rbp-250h]
  __int64 v326; // [rsp+0h] [rbp-250h]
  __int64 v327; // [rsp+8h] [rbp-248h]
  int v328; // [rsp+8h] [rbp-248h]
  int v329; // [rsp+8h] [rbp-248h]
  int v330; // [rsp+8h] [rbp-248h]
  int v331; // [rsp+8h] [rbp-248h]
  __int64 v332; // [rsp+8h] [rbp-248h]
  int v333; // [rsp+10h] [rbp-240h]
  int v334; // [rsp+10h] [rbp-240h]
  int v335; // [rsp+10h] [rbp-240h]
  int v336; // [rsp+18h] [rbp-238h]
  __int64 v337; // [rsp+18h] [rbp-238h]
  unsigned __int64 v338; // [rsp+18h] [rbp-238h]
  __int64 v339; // [rsp+18h] [rbp-238h]
  __int64 v340; // [rsp+18h] [rbp-238h]
  __int64 v341; // [rsp+20h] [rbp-230h]
  signed int v342; // [rsp+28h] [rbp-228h]
  _BOOL4 v343; // [rsp+28h] [rbp-228h]
  _BOOL4 v344; // [rsp+28h] [rbp-228h]
  __int64 v345; // [rsp+28h] [rbp-228h]
  unsigned __int64 v346; // [rsp+28h] [rbp-228h]
  unsigned __int8 v347; // [rsp+28h] [rbp-228h]
  signed int v348; // [rsp+28h] [rbp-228h]
  signed int v349; // [rsp+30h] [rbp-220h]
  unsigned __int8 dtype_by_size; // [rsp+30h] [rbp-220h]
  __int16 v351; // [rsp+34h] [rbp-21Ch]
  unsigned __int8 v352; // [rsp+38h] [rbp-218h]
  _QWORD *v353; // [rsp+38h] [rbp-218h]
  unsigned __int64 v354; // [rsp+38h] [rbp-218h]
  __int128 v355; // [rsp+40h] [rbp-210h] BYREF
  _BYTE v356[12]; // [rsp+50h] [rbp-200h] BYREF
  __int64 tinfo_property; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v358; // [rsp+68h] [rbp-1E8h]
  __m128i v359; // [rsp+70h] [rbp-1E0h] BYREF
  char v360; // [rsp+80h] [rbp-1D0h]
  __m128i v361; // [rsp+90h] [rbp-1C0h] BYREF
  char v362; // [rsp+A0h] [rbp-1B0h]
  __int128 v363; // [rsp+B0h] [rbp-1A0h] BYREF
  __int64 v364; // [rsp+C0h] [rbp-190h]
  __int64 v365; // [rsp+C8h] [rbp-188h]
  __int64 v366; // [rsp+D0h] [rbp-180h]
  _BYTE v367[6]; // [rsp+D8h] [rbp-178h] BYREF
  __int16 v368; // [rsp+DEh] [rbp-172h]
  char v369; // [rsp+101h] [rbp-14Fh]
  __int16 v370; // [rsp+106h] [rbp-14Ah]
  _QWORD v371[7]; // [rsp+218h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 384);
  v371[0] = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( v3 != 1 )
      return 0;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 832) + 240LL))(
            *(_QWORD *)(a1 + 832),
            5,
            *(_QWORD *)(a1 + 40))
        & 1) == 0 )
    {
      sub_409E20(a1);
      return 0;
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 48);
  v7 = (_WORD)v6 == 28;
  v8 = (_WORD)v6 == 207;
  if ( (unsigned __int16)(v6 - 107) <= 0x3Cu )
  {
    v10 = 0xEFFFFFFFFFFDFFFELL;
    v9 = !_bittest64((const __int64 *)&v10, (unsigned int)(v6 - 107)) || v8 || v7;
    if ( v9 )
      return sub_406A00(a1);
  }
  else
  {
    v9 = v8 || v7;
    if ( v9 )
      return sub_406A00(a1);
  }
  if ( (_WORD)v6 == 5 || (_WORD)v6 == 166 )
  {
    v28 = *(_QWORD **)(a1 + 856);
    v29 = &v28[*(_QWORD *)(a1 + 864)];
    if ( v28 != v29 )
    {
      while ( *(_QWORD *)(a1 + 40) != *v28 )
      {
        if ( v29 == ++v28 )
          goto LABEL_11;
      }
      if ( v29 != v28 )
        return 0;
    }
  }
LABEL_11:
  v359.m128i_i64[0] = a1;
  v11 = a1 + 64;
  v360 = 0;
  v359.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v361.m128i_i64[0] = a1;
  v361.m128i_i64[1] = 0xFFFFFFFF00000001LL;
  v362 = 0;
  v352 = sub_3FA390(a1, a1 + 64);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v13 = *(_DWORD *)(v12 + 104);
  if ( v6 >= v13 && v6 < *(_DWORD *)(v12 + 108) )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v6 - v13) + 8);
    v351 = v14;
  }
  else
  {
    v351 = 0;
    v14 = 0;
  }
  v15 = getseg(*(_QWORD *)(a1 + 40));
  if ( v15 && !*(_BYTE *)(v15 + 43) )
  {
    v52 = *(_QWORD **)(a1 + 8);
    v53 = (_QWORD *)v52[127];
    v354 = *(_QWORD *)(a1 + 40);
    v54 = v52 + 126;
    if ( !v53 )
    {
      if ( (_QWORD *)v52[128] != v54 && *(_QWORD *)(std::_Rb_tree_decrement(v52 + 126, v11, v16, v17, v18) + 32) >= v354 )
        return sub_407720(a1, v351, (__int64)&v359, (__int64)&v361, *(double *)a2.m128i_i64, a3);
      v53 = v52 + 126;
      v58 = 1;
      goto LABEL_130;
    }
    while ( 1 )
    {
      v55 = v53[4];
      v56 = 0;
      v57 = (_QWORD *)v53[3];
      if ( v354 < v55 )
      {
        v57 = (_QWORD *)v53[2];
        v56 = 1;
      }
      if ( !v57 )
        break;
      v53 = v57;
    }
    if ( (_BYTE)v56 )
    {
      if ( (_QWORD *)v52[128] == v53 )
      {
LABEL_128:
        v58 = 1;
        if ( v54 != v53 )
          v58 = v354 < v53[4];
LABEL_130:
        v59 = operator new(0x28u);
        *(_QWORD *)(v59 + 32) = *(_QWORD *)(a1 + 40);
        std::_Rb_tree_insert_and_rebalance(v58, v59, v53, v52 + 126);
        ++v52[130];
        return sub_407720(a1, v351, (__int64)&v359, (__int64)&v361, *(double *)a2.m128i_i64, a3);
      }
      v55 = *(_QWORD *)(std::_Rb_tree_decrement(v53, v53[2], v55, v56, v18) + 32);
    }
    if ( v55 >= v354 )
      return sub_407720(a1, v351, (__int64)&v359, (__int64)&v361, *(double *)a2.m128i_i64, a3);
    goto LABEL_128;
  }
  if ( *(_BYTE *)(a1 + 56) != 33 || *(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
  {
    v19 = *(unsigned __int8 *)(a1 + 65);
  }
  else
  {
    v45 = getinf(57);
    v17 = 262;
    v19 = *(unsigned __int8 *)(a1 + 65);
    if ( _bittest64((const __int64 *)&v17, v45 & 0xF) )
    {
      v17 = (unsigned __int64)dword_42EDA0;
      v11 = (_BYTE)v19 != 2;
      if ( (dword_42EDA0[v11] & v14) != 0 )
      {
        v17 = 5LL * ((_BYTE)v19 != 2);
        if ( *(_BYTE *)(a1 + 40LL * ((_BYTE)v19 != 2) + 65) == 2 && !*(_QWORD *)(a1 + 40LL * ((_BYTE)v19 != 2) + 80) )
          return 0;
      }
    }
  }
  v20 = *(unsigned __int16 *)(a1 + 48);
  if ( (_BYTE)v19 != 1 || *(_WORD *)(a1 + 70) != 5 || (v14 & 4) == 0 )
    goto LABEL_19;
  if ( (_WORD)v20 == 122 )
  {
    if ( *(_BYTE *)(a1 + 105) == 1 )
      goto LABEL_100;
    goto LABEL_183;
  }
  if ( (_WORD)v20 != 92 )
  {
    v19 = *(unsigned __int16 *)(a1 + 48);
    LOBYTE(v19) = v20 & 0x7F;
    if ( (_WORD)v19 != 6 && (_WORD)v20 != 209 )
    {
LABEL_183:
      v84 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v84 + 112) & 0x10) != 0 )
      {
        v85 = sub_1CE9E0(v84);
        v86 = v85;
        if ( !v85 )
        {
          if ( !under_debugger )
            sub_383060(0xC557u, v11, *(double *)a2.m128i_i64);
          goto LABEL_421;
        }
        get_func(*v85);
        v87 = v86[2] & 0xFFFFFFFFFFFFFFEFLL;
        v86[2] = v87;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v87;
        update_func(v86);
        v20 = *(unsigned __int16 *)(a1 + 48);
      }
LABEL_19:
      v21 = a1 + 24;
      v341 = a1 + 24;
      if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      {
        if ( (_WORD)v20 != 159 )
          goto LABEL_113;
        if ( (v14 & 0x10000) == 0 )
          goto LABEL_102;
      }
      else if ( (_WORD)v20 != 752 )
      {
        if ( (v14 & 0x10000) != 0 )
        {
          v19 = (unsigned int)(v20 - 152);
          if ( (unsigned __int16)(v20 - 152) <= 1u )
            goto LABEL_102;
          goto LABEL_23;
        }
LABEL_113:
        if ( (_WORD)v20 != 515 )
        {
          if ( (unsigned __int16)v20 > 0x203u )
          {
            if ( (_WORD)v20 != 604 )
              goto LABEL_102;
          }
          else if ( (unsigned __int16)v20 > 0x100u )
          {
            if ( (unsigned __int16)(v20 - 258) > 0x53u )
              goto LABEL_102;
          }
          else if ( (unsigned __int16)v20 <= 0xF4u )
          {
            goto LABEL_102;
          }
        }
        v51 = sub_40FAA0((_QWORD *)a1);
        *(_DWORD *)(a1 + 892) = v51;
        if ( v51 >= 0 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 314) <= 2u )
          return 0;
        goto LABEL_32;
      }
      if ( (v14 & 2) == 0 )
        goto LABEL_31;
      goto LABEL_29;
    }
  }
LABEL_100:
  v21 = a1 + 24;
  v341 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 || (v14 & 0x10000) == 0 )
  {
LABEL_102:
    v18 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 40);
    v46 = *(_QWORD **)(v18 + 1016);
    v47 = (_QWORD *)(v18 + 1008);
    if ( !v46 )
    {
      v346 = *(_QWORD *)(a1 + 40);
      if ( v47 == *(_QWORD **)(v18 + 1024)
        || (v339 = *(_QWORD *)(a1 + 8),
            v83 = std::_Rb_tree_decrement(v18 + 1008, v21, v19, v17, v18),
            v17 = v346,
            v18 = v339,
            *(_QWORD *)(v83 + 32) < v346) )
      {
        v344 = 1;
        v46 = v47;
LABEL_112:
        v337 = v18;
        v50 = operator new(0x28u);
        *(_QWORD *)(v50 + 32) = *(_QWORD *)(a1 + 40);
        std::_Rb_tree_insert_and_rebalance(v344, v50, v46, v47);
        v18 = v337;
        ++*(_QWORD *)(v337 + 1040);
      }
LABEL_32:
      v22 = *(_DWORD **)(a1 + 832);
      v23 = (int)v22[113];
      v336 = v22[116];
      v342 = v22[114];
      v24 = (unsigned int)v22[115];
      v333 = v22[115];
      v349 = v22[117];
      if ( (v14 & 0x100) != 0 || (v25 = *(_BYTE *)(a1 + 65), v25 == 1) || v25 == 11 )
      {
        v24 = 1;
        sub_3FA580(v359.m128i_i32, 1, 0, *(double *)a2.m128i_i64);
      }
      else
      {
        v359.m128i_i32[3] = v23;
        v360 = 1;
      }
      if ( (v14 & 0x200) != 0 || (v26 = *(_BYTE *)(a1 + 105), v26 == 1) || v26 == 11 )
      {
        v24 = 1;
        sub_3FA580(v361.m128i_i32, 1, 0, *(double *)a2.m128i_i64);
      }
      else
      {
        v362 = 1;
        v361.m128i_i32[3] = v342;
      }
      if ( !v9 )
      {
        v17 = *(unsigned int *)(a1 + 892);
        if ( (v17 & 0x80000000) != 0LL )
          goto LABEL_63;
      }
      if ( v359.m128i_i32[3] == -1 || v361.m128i_i32[3] == -1 )
        goto LABEL_63;
      v27 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v27 > 0x8Fu )
      {
        if ( (unsigned __int16)v27 <= 0x2F6u )
          goto LABEL_49;
        if ( (unsigned __int16)(v27 - 1775) > 1u )
          goto LABEL_63;
      }
      else
      {
        if ( (unsigned __int16)v27 <= 0x79u )
        {
          if ( (_WORD)v27 == 6 )
          {
            v24 = *(unsigned __int8 *)(a1 + 56);
            if ( (unsigned __int8)(v24 - 33) > 1u )
            {
LABEL_176:
              v74 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v75 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v76 = sub_409840(a1, v352, v75, v74, *(double *)a2.m128i_i64, a3);
              if ( v76 == 1 )
                return 0;
              if ( v76 == -1 )
                return 4294967294LL;
              v77 = sub_3FAE20((__int64)&v359, v352, *(double *)a2.m128i_i64, a3);
              v78 = sub_3FAE20((__int64)&v361, v352, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x19u, v352, v78, v77, 0, 0);
              v79 = sub_3FAE20((__int64)&v359, 25, *(double *)a2.m128i_i64, a3);
              v80 = sub_3FAE20((__int64)&v361, 25, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x1Au, v352, v80, v79, 3, 0);
              v81 = sub_3FAE20((__int64)&v359, 26, *(double *)a2.m128i_i64, a3);
              v82 = sub_3FAE20((__int64)&v361, 26, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0xCu, v352, v82, v81, v336, 0);
              v359.m128i_i32[3] = v336;
              v360 = 1;
LABEL_174:
              v24 = v359.m128i_u32[3];
              sub_3FD520(a1, v359.m128i_i32[3], v352);
              goto LABEL_77;
            }
          }
          else
          {
            if ( (_WORD)v27 != 44 )
            {
              if ( (unsigned __int16)v27 > 4u )
                goto LABEL_49;
LABEL_63:
              v30 = &v359;
              if ( (unsigned __int8)sub_3FD5C0(a1, &v359, &v361, v352) )
                return 0;
              v34 = *(_QWORD **)(a1 + 8);
              v35 = *(_QWORD *)(a1 + 40);
              v36 = (_QWORD *)v34[127];
              v353 = v34 + 126;
              if ( v36 )
              {
                while ( 1 )
                {
                  v31 = v36[4];
                  v30 = (__m128i *)v36[2];
                  v32 = 0;
                  v37 = (_QWORD *)v36[3];
                  if ( v35 < v31 )
                  {
                    v37 = (_QWORD *)v36[2];
                    v32 = 1;
                  }
                  if ( !v37 )
                    break;
                  v36 = v37;
                }
                v353 = v34 + 126;
                if ( !(_BYTE)v32 )
                  goto LABEL_71;
              }
              else
              {
                v36 = v34 + 126;
              }
              if ( v36 == (_QWORD *)v34[128] )
                goto LABEL_72;
              v31 = *(_QWORD *)(std::_Rb_tree_decrement(v36, v30, v31, v32, v33) + 32);
LABEL_71:
              if ( v31 >= v35 )
                return sub_407720(a1, v351, (__int64)&v359, (__int64)&v361, *(double *)a2.m128i_i64, a3);
LABEL_72:
              v343 = 1;
              if ( v36 != v353 )
                v343 = v35 < v36[4];
              v38 = operator new(0x28u);
              *(_QWORD *)(v38 + 32) = *(_QWORD *)(a1 + 40);
              std::_Rb_tree_insert_and_rebalance(v343, v38, v36, v353);
              ++v34[130];
              return sub_407720(a1, v351, (__int64)&v359, (__int64)&v361, *(double *)a2.m128i_i64, a3);
            }
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_172:
              v355 = 0xFFFFFFFF00000000LL;
              dtype_size = get_dtype_size(v352);
              v73 = *(_QWORD *)(a1 + 832);
              sub_120A10((__int64)&v355, v73, 1, dtype_size, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v355)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v359, v73, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v356 = 1;
              tinfo_property = 0x100000001LL;
              v358 = 3;
              *(_QWORD *)&v356[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 26, (unsigned __int8 *)&v355, v356, (unsigned __int8 *)&tinfo_property);
              v24 = 12;
              sub_1D6450(a1, 12, (unsigned __int8 *)&v355, v356, v356);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v356);
              sub_11CDA0((__int64)&v355);
LABEL_173:
              if ( !v360 )
              {
                v88 = &v359;
                if ( !(unsigned __int8)sub_3FACB0((__int64)&v359, *(double *)a2.m128i_i64, a3) )
                  goto LABEL_187;
              }
              goto LABEL_174;
            }
          }
          v24 = *(unsigned __int8 *)(a1 + 65);
          v19 = (unsigned int)(v24 - 2);
          if ( (unsigned __int8)(v24 - 2) <= 2u )
            goto LABEL_63;
LABEL_49:
          switch ( (__int16)v27 )
          {
            case 5:
              v136 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v137 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v138 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v352;
              sub_1D6910(a1, v352, v138, v137, v136, v336, v333);
              goto LABEL_173;
            case 6:
              goto LABEL_176;
            case 7:
              v110 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v111 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v112 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, v352, v112, v111, v110, 0);
              goto LABEL_226;
            case 16:
            case 86:
            case 89:
              if ( (unsigned __int8)sub_1D61C0(a1) )
                goto LABEL_77;
              if ( *(_BYTE *)(a1 + 65) == 7 )
              {
                v103 = *(_QWORD *)(a1 + 800);
                tinfo_property = 0xFFFFFFFF00000000LL;
                v104 = *(_QWORD *)(*(_QWORD *)(v103 + 24) + 16LL);
                v105 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                if ( v105 != v104 )
                {
                  if ( v105 == -1 )
                    v104 = -1;
                  else
                    v104 &= v105;
                }
                v106 = *(_QWORD *)(a1 + 832);
                LOBYTE(tinfo_property) = 6;
                v107 = *(_DWORD *)(v106 + 84);
                v108 = 0;
                v109 = 8 * v107;
                if ( (unsigned __int64)v109 <= 0x3F )
                  v108 = 1LL << v109;
                v24 = 55;
                v358 = v104 & (v108 - 1);
                sub_1D6450(a1, 55, (unsigned __int8 *)&tinfo_property, nullptr, nullptr);
                sub_11CDA0((__int64)&tinfo_property);
              }
              else
              {
                v321 = sub_3EBC60(*(_DWORD *)(a1 + 52));
                v322 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
                v323 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
                v196 = v322;
                v198 = v352;
                v197 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + v323;
                v324 = v321;
LABEL_298:
                v24 = 54;
                sub_3F7E20(a1, 0x36u, v198, 0x3BEA45E214ADDC55LL, v197, v196, v324);
              }
              goto LABEL_77;
            case 17:
            case 87:
              if ( !v360 )
                sub_3FA580(v359.m128i_i32, 0, 0, *(double *)a2.m128i_i64);
              v199 = get_dtype_size(v352);
              v200 = *(_QWORD *)(a1 + 832);
              v201 = _mm_cvtsi32_si128(v349);
              v202 = 4;
              v203 = _mm_cvtsi32_si128(v342);
              v334 = v199;
              a2 = _mm_cvtsi32_si128(*(_DWORD *)(v200 + 80));
              if ( v199 != 6 )
                v202 = v199;
              LODWORD(v355) = 1;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v358 = 0;
              *(_DWORD *)v356 = 1;
              *(_QWORD *)((char *)&v355 + 4) = _mm_unpacklo_epi32(a2, v201).m128i_u64[0];
              a3 = (__m128)_mm_unpacklo_epi32(a2, v203);
              *(_QWORD *)&v356[4] = a3.m128_u64[0];
              sub_120A10((__int64)&tinfo_property, v200, v202, _mm_cvtsi128_si32(a2), -1, 0);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, (unsigned __int8 *)&v355, v356);
              v204 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              v340 = v342;
              sub_3F7E20(a1, 2u, 1u, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v342, v342, v204);
              if ( v342 != (unsigned int)sub_3FAE20((__int64)&v359, v325, *(double *)a2.m128i_i64, a3) )
              {
                v205 = sub_3ECD50(v341);
                v206 = (unsigned int)v334;
                if ( v205 > v334 )
                {
                  v207 = *(unsigned __int8 *)(a1 + 69);
                  v347 = *(_BYTE *)(a1 + 69);
                  dtype_by_size = get_dtype_by_size(v205);
                  v335 = sub_3FAE20((__int64)&v359, v207, *(double *)a2.m128i_i64, a3);
                  v208 = sub_3FAE20((__int64)&v359, v207, *(double *)a2.m128i_i64, a3);
                  v206 = v347;
                  sub_1D6840(a1, v347, dtype_by_size, v208, v335, 0);
                }
                v348 = sub_3ECD50(v341);
                v209 = sub_3FAE20((__int64)&v359, v206, *(double *)a2.m128i_i64, a3);
                v24 = 54;
                sub_3F7E20(a1, 0x36u, v352, 0x3BEA45E214ADDC55LL, v340, v209, v348);
                sub_11CDA0((__int64)&tinfo_property);
                sub_11CDA0((__int64)v356);
                sub_11CDA0((__int64)&v355);
                goto LABEL_77;
              }
              if ( !under_debugger )
                sub_383060(0xC7C6u, v325, *(double *)a2.m128i_i64);
              return result;
            case 18:
            case 88:
              v195 = sub_3ECD50(v341);
              v196 = (int)sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v197 = *(int *)(*(_QWORD *)(a1 + 832) + 64LL);
              v198 = v352;
              v324 = v195;
              goto LABEL_298;
            case 19:
            case 20:
            case 21:
              v192 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v193 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              if ( v352 )
              {
                if ( v352 == 1 )
                  v194 = 2;
                else
                  v194 = (v352 != 2) + 7;
              }
              else
              {
                v194 = 1;
              }
              v24 = v352;
              sub_1D6840(a1, v352, v194, v193, v192, 1u);
              goto LABEL_77;
            case 22:
              v190 = 0;
              goto LABEL_291;
            case 23:
              v190 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
LABEL_291:
              v191 = 0;
              goto LABEL_292;
            case 26:
              v210 = 0;
              goto LABEL_308;
            case 27:
              v158 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v159 = 4;
              sub_3F7E20(a1, 4u, v352, v158, 0x3BEA45E214ADDC55LL, (int)v23, 0);
              v359.m128i_i32[3] = v23;
              v360 = 1;
              goto LABEL_269;
            case 29:
            case 30:
            case 31:
              v157 = get_dtype_size(v352);
              *(_DWORD *)v356 = 1;
              *(_DWORD *)&v356[4] = v157;
              *(_DWORD *)&v356[8] = 8;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v358 = 0;
              sub_1252A0((__int64)&tinfo_property, 8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL), v157);
              v24 = 8;
              sub_1D6450(a1, 8, v356, nullptr, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v356);
              goto LABEL_77;
            case 34:
              v355 = 0xFFFFFFFF00000000LL;
              v134 = get_dtype_size(v352);
              v135 = *(_QWORD *)(a1 + 832);
              sub_120A10((__int64)&v355, v135, 1, v134, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v355)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v359, v135, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v356 = 1;
              tinfo_property = 0x100000001LL;
              v358 = 3;
              *(_QWORD *)&v356[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v356, (unsigned __int8 *)&v355, (unsigned __int8 *)&tinfo_property);
              v24 = 13;
              sub_1D6450(a1, 13, v356, (unsigned __int8 *)&v355, v356);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v356);
              sub_11CDA0((__int64)&v355);
              goto LABEL_173;
            case 35:
              v133 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = v133;
              sub_3FB450(a1, v133, v352, 0);
              goto LABEL_77;
            case 36:
            case 37:
            case 38:
              sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL), v352);
              if ( *(_QWORD *)(a1 + 112) )
                return 4294967294LL;
              sub_3F7E20(
                a1,
                4u,
                v352,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v131 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
              v132 = sub_3FAE20((__int64)&v359, 4, *(double *)a2.m128i_i64, a3);
              v24 = 13;
              sub_3F7E20(a1, 0xDu, v352, *(int *)(*(_QWORD *)(a1 + 832) + 60LL), v132, v131, 0);
              goto LABEL_77;
            case 41:
              v130 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = v130;
              sub_3FB450(a1, v130, v352, 1u);
              goto LABEL_77;
            case 42:
              v139 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v140 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 1;
              sub_3FB8C0(a1, 1u, v140, v139, v352);
              goto LABEL_77;
            case 44:
              goto LABEL_172;
            case 53:
            case 69:
            case 229:
            case 251:
              v149 = v336;
              v150 = 0;
              v151 = v336;
              goto LABEL_257;
            case 54:
            case 68:
            case 70:
            case 236:
            case 249:
              v43 = 0;
              v44 = v336;
              goto LABEL_83;
            case 55:
            case 57:
            case 67:
            case 230:
            case 245:
              v42 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 0;
              sub_3FC4D0(a1, 0, v42, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 56:
            case 66:
            case 231:
            case 247:
              v99 = 0;
              v100 = v336;
              goto LABEL_214;
            case 58:
            case 59:
            case 60:
              v24 = 33;
              v102 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              sub_3FB720(a1, 33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v102, v336);
              goto LABEL_84;
            case 61:
            case 85:
            case 244:
            case 246:
              v101 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 1;
              sub_3FC4D0(a1, 1, v101, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 62:
            case 75:
            case 232:
              v149 = v336;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v336, 0);
              v151 = v336;
              v150 = v336;
LABEL_257:
              sub_3F7E20(a1, 0x13u, 0, v150, 1, v151, 0);
              goto LABEL_258;
            case 63:
            case 74:
            case 233:
              v149 = v336;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v336, 0);
LABEL_258:
              v44 = v149;
              v43 = v149;
              goto LABEL_83;
            case 64:
            case 73:
            case 234:
              v24 = 21;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v336, 0);
              goto LABEL_84;
            case 65:
            case 72:
            case 235:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v336, 0);
              v100 = v336;
              v99 = v336;
LABEL_214:
              v24 = 19;
              sub_3F7E20(a1, 0x13u, 0, v99, 1, v100, 0);
              goto LABEL_84;
            case 71:
            case 79:
            case 240:
            case 250:
              v43 = 1;
              v44 = v336;
              goto LABEL_83;
            case 76:
            case 237:
              v43 = 3;
              v44 = v336;
              goto LABEL_83;
            case 77:
            case 83:
            case 238:
            case 252:
              v43 = 4;
              v44 = v336;
              goto LABEL_83;
            case 78:
            case 239:
              v43 = 2;
              v44 = v336;
LABEL_83:
              v24 = 6;
              sub_3F7E20(a1, 6u, 0, v43, 0x3BEA45E214ADDC55LL, v44, 0);
LABEL_84:
              if ( !v360 )
              {
                v88 = &v359;
                if ( !(unsigned __int8)sub_3FACB0((__int64)&v359, *(double *)a2.m128i_i64, a3) )
                  goto LABEL_187;
              }
              v24 = (unsigned int)v336;
              sub_3FC4D0(a1, v336, v359.m128i_i32[3], *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 80:
            case 241:
              v128 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 3;
              sub_3FC4D0(a1, 3, v128, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 81:
            case 82:
            case 242:
            case 248:
              v127 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 4;
              sub_3FC4D0(a1, 4, v127, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 84:
            case 243:
              v129 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 2;
              sub_3FC4D0(a1, 2, v129, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 90:
              v125 = 9;
              v126 = *(int *)(*(_QWORD *)(a1 + 832) + 524LL);
              goto LABEL_234;
            case 92:
              v122 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              if ( v122 >= v352 )
                goto LABEL_199;
              v123 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v124 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = v122;
              sub_1D6840(a1, v122, v352, v124, v123, 0);
              goto LABEL_77;
            case 93:
            case 94:
            case 95:
              sub_3F7E20(
                a1,
                4u,
                v352,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v24 = *(unsigned int *)(*(_QWORD *)(a1 + 832) + 400LL);
              sub_3F8EE0(a1);
              goto LABEL_77;
            case 99:
              v113 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL);
              goto LABEL_228;
            case 101:
              v113 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 52LL);
              goto LABEL_228;
            case 102:
              v113 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
              goto LABEL_228;
            case 103:
              v113 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL);
LABEL_228:
              v114 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v115 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, v352, v115, 0x3BEA45E214ADDC55LL, v114, 0);
              v116 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              *(_DWORD *)v356 = 1;
              v358 = 0;
              a2.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v116), _mm_cvtsi32_si128(v349)).m128i_u64[0];
              tinfo_property = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v356[4] = a2.m128i_i64[0];
              v117 = sub_3ECD50(v341);
              sub_120A10((__int64)&tinfo_property, *(_QWORD *)(a1 + 832), v117, v120, v118, v119);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, v356, v356);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v356);
              v24 = 2;
              v121 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              sub_3F7E20(a1, 2u, 1u, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v349, v113, v121);
              goto LABEL_77;
            case 108:
            case 109:
            case 110:
            case 111:
            case 112:
            case 113:
            case 114:
            case 115:
            case 116:
            case 117:
            case 118:
            case 119:
              v41 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v41;
              sub_3FC800(a1, v41, *(double *)a2.m128i_i64, a3);
              goto LABEL_77;
            case 122:
              goto LABEL_199;
            case 125:
            case 594:
              v212 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v213 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = *(unsigned __int8 *)(a1 + 109);
              sub_1D6840(a1, v24, v352, v213, v212, 1u);
              goto LABEL_77;
            case 126:
              goto LABEL_145;
            case 127:
              v175 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v176 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 0;
              sub_3FB8C0(a1, 0, v176, v175, v352);
              goto LABEL_77;
            case 128:
              v171 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v328 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 5u, v352, v328, 0x3BEA45E214ADDC55LL, v171, 0);
              v355 = 0xFFFFFFFF00000000LL;
              v172 = get_dtype_size(v352);
              v173 = *(_QWORD *)(a1 + 832);
              sub_120A10((__int64)&v355, v173, 1, v172, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v355)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v359, v173, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v356 = 1;
              tinfo_property = 0x100000001LL;
              v358 = 3;
              *(_QWORD *)&v356[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v356, (unsigned __int8 *)&v355, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v356);
              sub_11CDA0((__int64)&v355);
              v174 = sub_3FAE20((__int64)&v359, 30, *(double *)a2.m128i_i64, a3);
              v24 = 32;
              sub_3FB720(a1, 32, v174, v352, 0);
              goto LABEL_173;
            case 129:
            case 213:
            case 330:
              goto LABEL_77;
            case 130:
              v180 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v181 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 7;
              sub_3F7E20(a1, 7u, v352, v181, 0x3BEA45E214ADDC55LL, v180, 0);
              goto LABEL_77;
            case 131:
              v177 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v178 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v179 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x13u, v352, v179, v178, v177, 0);
              goto LABEL_226;
            case 134:
              v24 = (unsigned int)sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F8EE0(a1);
              goto LABEL_77;
            case 136:
              v24 = v352;
              sub_3F92A0(a1, v352);
              goto LABEL_77;
            case 143:
              v189 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v189;
              sub_3F8D40(a1, v189, v352);
              goto LABEL_77;
            case 145:
              v24 = v352;
              sub_3F9020(a1, v352);
              goto LABEL_77;
            case 154:
              v187 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v188 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 27;
              sub_4072A0(a1, 0x1Bu, v352, v188, v187);
              goto LABEL_77;
            case 155:
              v185 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v186 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 28;
              sub_4072A0(a1, 0x1Cu, v352, v186, v185);
              goto LABEL_77;
            case 159:
            case 160:
              sub_3FD260(a1);
              goto LABEL_77;
            case 161:
              sub_3FB820(a1, 0, 1, 9);
              sub_3FB820(a1, 4, 4, 9);
              sub_3FB820(a1, 1, 64, 9);
              v24 = 2;
              sub_3FB820(a1, 2, 128, 9);
              goto LABEL_77;
            case 162:
            case 164:
              v183 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v184 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 22;
              sub_407390(a1, 0x16u, v352, v184, v183);
              goto LABEL_77;
            case 163:
              v305 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v306 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 24;
              sub_407390(a1, 0x18u, v352, v306, v305);
              goto LABEL_77;
            case 165:
              v303 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v304 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 23;
              sub_407390(a1, 0x17u, v352, v304, v303);
              goto LABEL_77;
            case 166:
              sub_1D6840(a1, 0, v352, 0, v336, 0);
              v297 = *(_BYTE *)(a1 + 65);
              if ( *(_BYTE *)(a1 + 105) == v297 && v297 == 1 && *(_WORD *)(a1 + 70) == *(_WORD *)(a1 + 110) )
              {
                sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v315 = sub_3FAE20((__int64)&v359, 3, *(double *)a2.m128i_i64, a3);
                v332 = v316;
                sub_3F7E20(a1, 5u, v352, v336, 0x3BEA45E214ADDC55LL, v315, 0);
                v24 = v332;
              }
              else
              {
                v298 = sub_3FAE20((__int64)&v361, 0, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xCu, v352, v336, v298, v336, 0);
                v299 = sub_3FAE20((__int64)&v359, 12, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x23u, v352, v299, v336, 0, 0);
                v300 = sub_3FAE20((__int64)&v359, 35, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x1Eu, v352, v300, v336, 3, 0);
                v301 = sub_3FAE20((__int64)&v359, 30, *(double *)a2.m128i_i64, a3);
                v302 = sub_3FAE20((__int64)&v359, 30, *(double *)a2.m128i_i64, a3);
                v24 = 13;
                sub_3F7E20(a1, 0xDu, v352, v302, v336, v301, 0);
              }
              goto LABEL_173;
            case 168:
            case 181:
              v293 = 19;
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v23, 0);
              goto LABEL_386;
            case 169:
            case 180:
            case 182:
              v210 = (int)sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
LABEL_308:
              v211 = 0;
              goto LABEL_309;
            case 170:
            case 172:
            case 179:
              v296 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v126 = 0;
              v125 = v296;
              goto LABEL_234;
            case 171:
            case 178:
              v295 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v290 = 0;
              v291 = v295;
              goto LABEL_383;
            case 173:
            case 197:
              v294 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v126 = 1;
              v125 = v294;
              goto LABEL_234;
            case 174:
            case 187:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v23, 0);
              v293 = 19;
              sub_3F7E20(a1, 0x13u, 0, v23, 1, v23, 0);
              goto LABEL_386;
            case 175:
            case 186:
              v293 = 21;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v23, 0);
LABEL_386:
              v210 = (int)sub_3FAE20((__int64)&v359, v293, *(double *)a2.m128i_i64, a3);
              v211 = v23;
              goto LABEL_309;
            case 176:
            case 185:
              v292 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 21;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v292, 0);
              goto LABEL_77;
            case 177:
            case 184:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v23, 0);
              v289 = sub_3FAE20((__int64)&v359, 21, *(double *)a2.m128i_i64, a3);
              v290 = v23;
              v291 = v289;
LABEL_383:
              v24 = 19;
              sub_3F7E20(a1, 0x13u, 0, v290, 1, v291, 0);
              goto LABEL_77;
            case 183:
            case 191:
              v288 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v211 = 1;
              v210 = v288;
              goto LABEL_309;
            case 188:
              v287 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v211 = 3;
              v210 = v287;
              goto LABEL_309;
            case 189:
            case 195:
              v286 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v211 = 4;
              v210 = v286;
              goto LABEL_309;
            case 190:
              v285 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v211 = 2;
              v210 = v285;
LABEL_309:
              v24 = 6;
              sub_3F7E20(a1, 6u, 0, v211, 0x3BEA45E214ADDC55LL, v210, 0);
              goto LABEL_77;
            case 192:
              v284 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v126 = 3;
              v125 = v284;
              goto LABEL_234;
            case 193:
            case 194:
              v283 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v126 = 4;
              v125 = v283;
              goto LABEL_234;
            case 196:
              v282 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v126 = 2;
              v125 = v282;
              goto LABEL_234;
            case 200:
              v280 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v281 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v352;
              v279 = sub_3FBF90(a1, v352, v281, v280, 0);
              goto LABEL_372;
            case 201:
              v277 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v278 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v352;
              v279 = sub_3FBF90(a1, v352, v278, v277, 1u);
LABEL_372:
              v359.m128i_i32[3] = v279;
              v360 = 1;
              if ( (v14 & 4) != 0 )
                goto LABEL_162;
              goto LABEL_78;
            case 204:
              v190 = 0;
              v191 = 1;
              goto LABEL_292;
            case 205:
              v190 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
              v191 = 1;
LABEL_292:
              v24 = 3;
              sub_3F7E20(a1, 3u, 0, v191, 0x3BEA45E214ADDC55LL, v190, 0);
              goto LABEL_77;
            case 209:
              v274 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v275 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v159 = v352;
              v276 = sub_409840(a1, v352, v275, v274, *(double *)a2.m128i_i64, a3);
              if ( v276 == 1 )
                return 0;
              if ( v276 == -1 )
                return 4294967294LL;
LABEL_269:
              v160 = sub_3FAE20((__int64)&v361, v159, *(double *)a2.m128i_i64, a3);
              v161 = sub_3FAE20((__int64)&v359, v159, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x23u, v352, v161, v160, 0, 0);
              v162 = sub_3FAE20((__int64)&v361, 35, *(double *)a2.m128i_i64, a3);
              v163 = sub_3FAE20((__int64)&v359, 35, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x1Eu, v352, v163, v162, 3, 0);
              if ( *(_WORD *)(a1 + 48) == 209
                && *(_BYTE *)(a1 + 65) == 1
                && *(_WORD *)(a1 + 70) == 4
                && *(_BYTE *)(a1 + 105) == 1 )
              {
                v182 = sub_3FAE20((__int64)&v361, 30, *(double *)a2.m128i_i64, a3);
                v24 = v182;
                sub_408540(a1, v182);
              }
              else
              {
                v164 = sub_3FAE20((__int64)&v359, 30, *(double *)a2.m128i_i64, a3);
                v165 = sub_3FAE20((__int64)&v361, 30, *(double *)a2.m128i_i64, a3);
                v166 = sub_3FAE20((__int64)&v359, 30, *(double *)a2.m128i_i64, a3);
                v24 = 13;
                sub_3F7E20(a1, 0xDu, v352, v166, v165, v164, 0);
              }
              goto LABEL_173;
            case 210:
              v272 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, v352, v272, 0x3BEA45E214ADDC55LL, (int)v23, 0);
              v359.m128i_i32[3] = v23;
              v360 = 1;
              v273 = sub_3FAE20((__int64)&v359, 4, *(double *)a2.m128i_i64, a3);
              v331 = sub_3FAE20((__int64)&v361, 4, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, v352, v331, v273, (int)v23, 0);
              goto LABEL_226;
            case 214:
            case 219:
              if ( *(_BYTE *)(a1 + 105) != 1 && v352 > 1u )
                goto LABEL_63;
              v262 = a1 + 40;
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40), v19, v17, v18);
              do
              {
                v263 = *(_QWORD *)(a1 + 832);
                v264 = *(int *)(v263 + 3776);
                v265 = *(_DWORD *)(v263 + 3776);
                if ( v264 > 3 )
                {
                  v265 = 0;
                  v264 = 0;
                }
                *(_DWORD *)(v263 + 3776) = v265 + 1;
                v266 = *(int *)(v263 + 4 * v264 + 3760);
              }
              while ( (unsigned int)sub_3FAE20((__int64)&v359, v262, *(double *)a2.m128i_i64, a3) == (_DWORD)v266
                   || (_DWORD)v266 == (unsigned int)sub_3FAE20((__int64)&v361, v262, *(double *)a2.m128i_i64, a3) );
              v267 = sub_3FAE20((__int64)&v359, v262, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, v352, v267, 0x3BEA45E214ADDC55LL, v266, 0);
              if ( *(_WORD *)(a1 + 48) == 219 )
              {
                v307 = sub_3FAE20((__int64)&v361, 4, *(double *)a2.m128i_i64, a3);
                v308 = sub_3FAE20((__int64)&v359, 4, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x19u, v352, v308, v307, 0, 0);
                v309 = sub_3FAE20((__int64)&v361, 25, *(double *)a2.m128i_i64, a3);
                v310 = sub_3FAE20((__int64)&v359, 25, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x1Au, v352, v310, v309, 3, 0);
                v311 = sub_3FAE20((__int64)&v359, 26, *(double *)a2.m128i_i64, a3);
                v312 = sub_3FAE20((__int64)&v361, 26, *(double *)a2.m128i_i64, a3);
                v313 = sub_3FAE20((__int64)&v359, 26, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xCu, v352, v313, v312, v311, 0);
                v314 = sub_3FAE20((__int64)&v359, 12, *(double *)a2.m128i_i64, a3);
                v270 = v314;
                sub_3FD520(a1, v314, v352);
              }
              else
              {
                v268 = sub_3FAE20((__int64)&v359, 4, *(double *)a2.m128i_i64, a3);
                v269 = sub_3FAE20((__int64)&v361, 4, *(double *)a2.m128i_i64, a3);
                v270 = 4;
                sub_3F7E20(a1, 4u, v352, v269, 0x3BEA45E214ADDC55LL, v268, 0);
              }
              v271 = sub_3FAE20((__int64)&v361, v270, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, v352, v266, 0x3BEA45E214ADDC55LL, v271, 0);
              v24 = v326;
              goto LABEL_77;
            case 216:
              v260 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v261 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v330 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x15u, v352, v330, v261, v260, 0);
              goto LABEL_226;
            case 253:
            case 254:
            case 255:
            case 256:
              v258 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v259 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v259;
              sub_3FA190(a1, v259, v258, 0xFu);
              goto LABEL_77;
            case 258:
            case 262:
              v256 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v257 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              sub_1D6740(a1, 0xFu, 0xFu, v257, v256, 67);
              goto LABEL_272;
            case 259:
            case 260:
              v253 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v254 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v255 = *(_BYTE *)(a1 + 109);
              if ( v255 == 5 )
                v255 = 15;
              sub_1D6740(a1, 0xFu, v255, v254, v253, 67);
              goto LABEL_272;
            case 261:
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40), v19, v17, v18);
              v247 = *(_QWORD *)(a1 + 832);
              v248 = *(int *)(v247 + 3776);
              v249 = *(_DWORD *)(v247 + 3776);
              if ( v248 > 3 )
              {
                v249 = 0;
                v248 = 0;
              }
              *(_DWORD *)(v247 + 3776) = v249 + 1;
              v250 = *(_DWORD *)(v247 + 4 * v248 + 3760);
              v251 = sub_3FAE20((__int64)&v359, a1 + 40, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x43u, 0xFu, v251, 0x3BEA45E214ADDC55LL, v250, 0);
              a2 = _mm_load_si128(&v361);
              v252 = v362;
              v361.m128i_i32[3] = v250;
              v362 = 1;
              v360 = v252;
              v359 = a2;
              goto LABEL_272;
            case 263:
            case 264:
            case 604:
              v244 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v245 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v246 = *(_BYTE *)(a1 + 109);
              if ( v246 == 5 )
                v246 = 15;
              sub_1D6740(a1, 0xFu, v246, v245, v244, 63);
              goto LABEL_272;
            case 265:
              a2 = _mm_load_si128(&v361);
              v219 = "__FBLD__";
              v360 = v362;
              v359 = a2;
              goto LABEL_322;
            case 266:
              sub_408CD0(a1, (__int64)&v359, (__int64)&v361);
              LOBYTE(v351) = v14 & 0xF7;
              goto LABEL_272;
            case 267:
            case 268:
            case 269:
              v235 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v236 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v237 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x45u, 0xFu, v237, v236, v235, 0);
              goto LABEL_272;
            case 270:
            case 271:
            case 272:
              v231 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v232 = &v359;
              v233 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              goto LABEL_330;
            case 273:
            case 274:
            case 275:
              v231 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v232 = &v361;
              v233 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
LABEL_330:
              v234 = sub_3FAE20((__int64)v232, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x46u, 0xFu, v234, v233, v231, 0);
              goto LABEL_272;
            case 276:
            case 277:
            case 278:
              v228 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v229 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v230 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x47u, 0xFu, v230, v229, v228, 0);
              goto LABEL_272;
            case 279:
            case 280:
            case 281:
              v225 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v226 = &v359;
              v227 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              goto LABEL_326;
            case 282:
            case 283:
            case 284:
              v225 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v226 = &v361;
              v227 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
LABEL_326:
              v329 = sub_3FAE20((__int64)v226, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x48u, 0xFu, v329, v227, v225, 0);
              goto LABEL_272;
            case 285:
              v219 = "sqrt";
              goto LABEL_322;
            case 286:
              v222 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v223 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v224 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"__FSCALE__", v224, v223, v222);
              goto LABEL_272;
            case 287:
              v317 = "__FPREM__";
              goto LABEL_406;
            case 290:
              v219 = "fabs";
              goto LABEL_322;
            case 291:
              v167 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v168 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x44u, 0xFu, v168, 0x3BEA45E214ADDC55LL, v167, 0);
              goto LABEL_272;
            case 292:
            case 293:
            case 294:
            case 295:
            case 296:
            case 339:
            case 340:
            case 341:
              goto LABEL_76;
            case 297:
              v218 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = 0;
              sub_3FA230(a1, 0, v218, *(double *)a2.m128i_i64);
LABEL_76:
              v39 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v40 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = v40;
              sub_3FA0C0(a1, v40, v39);
              goto LABEL_77;
            case 299:
              v214 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v215 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = (__int64)"tan";
              sub_408A10(
                (_QWORD *)a1,
                (__int64)"tan",
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v215,
                v214,
                0xFFFFFFFF);
              goto LABEL_318;
            case 300:
              v241 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v242 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3)
                   + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL);
              v243 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"atan2", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v243, v242, v241);
              goto LABEL_272;
            case 301:
              v219 = "__F2XM1__";
              goto LABEL_322;
            case 302:
              v317 = "__FYL2X__";
              goto LABEL_402;
            case 303:
              v317 = "__FYL2XP1__";
LABEL_402:
              v318 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v319 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v320 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              goto LABEL_403;
            case 304:
              v216 = 0;
              goto LABEL_319;
            case 305:
LABEL_318:
              v216 = 1;
              goto LABEL_319;
            case 306:
              v216 = 9;
              goto LABEL_319;
            case 307:
              v216 = 3;
              goto LABEL_319;
            case 308:
              v216 = 5;
              goto LABEL_319;
            case 309:
              v216 = 4;
              goto LABEL_319;
            case 310:
              v216 = 7;
LABEL_319:
              v217 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3FA230(a1, v216, v217, *(double *)a2.m128i_i64);
              goto LABEL_272;
            case 317:
            case 318:
              v240 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v24 = 4;
              sub_3F7E20(a1, 4u, 1u, *(int *)(*(_QWORD *)(a1 + 832) + 444LL), 0x3BEA45E214ADDC55LL, v240, 0);
              goto LABEL_77;
            case 335:
              v317 = "__FPREM1__";
LABEL_406:
              v318 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v319 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v320 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
LABEL_403:
              sub_408A10((_QWORD *)a1, (__int64)v317, v320, v319, v318);
              goto LABEL_272;
            case 336:
              v238 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v239 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"cos", v239, v238, 0xFFFFFFFF);
              sub_408A10((_QWORD *)a1, (__int64)"sin", v238, v238, 0xFFFFFFFF);
              LOBYTE(v351) = 0;
              goto LABEL_272;
            case 337:
              v219 = "sin";
              goto LABEL_322;
            case 338:
              v219 = "cos";
LABEL_322:
              v220 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              v221 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)v219, v221, v220, 0xFFFFFFFF);
LABEL_272:
              v169 = *(int *)(*(_QWORD *)(a1 + 832) + 444LL);
              v170 = get_dtype_size(1);
              v24 = 61;
              sub_1D6310(a1, 0x3Du, v170, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v169, 0);
              goto LABEL_77;
            case 342:
              v125 = 8;
              v126 = 0;
LABEL_234:
              v24 = 4;
              sub_3F7E20(a1, 4u, 0, v126, 0x3BEA45E214ADDC55LL, v125, 0);
              goto LABEL_77;
            case 745:
              v145 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v146 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              v327 = v147;
              sub_3F7E20(a1, 7u, v352, v145, 0x3BEA45E214ADDC55LL, v336, 0);
              v148 = sub_3FAE20((__int64)&v359, v327, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, v352, v146, v336, v148, 0);
LABEL_226:
              v24 = 9;
              sub_3FB3E0(a1, 9);
              goto LABEL_173;
            case 752:
              v144 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v24 = (unsigned int)sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
              sub_3FBD20(a1, v24, v144, v352, *(double *)a2.m128i_i64);
              goto LABEL_77;
            case 755:
              v141 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v142 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              v143 = sub_3FAE20((__int64)&v359, 2, *(double *)a2.m128i_i64, a3);
              v24 = 1;
              sub_1D6C50(a1, 1u, v352, v141, v142, v143);
              goto LABEL_77;
            case 756:
            case 757:
            case 758:
              v152 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
              v153 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              v154 = *(_WORD *)(a1 + 48);
              if ( v154 == 756 )
              {
                v155 = 24;
              }
              else
              {
                v155 = 22;
                if ( v154 == 758 )
                  v155 = 23;
              }
              v156 = sub_3FAE20((__int64)&v359, 2, *(double *)a2.m128i_i64, a3);
              v24 = v155;
              sub_3F7E20(a1, v155, v352, v152, v153, v156, 0);
              goto LABEL_77;
            default:
              goto LABEL_63;
          }
LABEL_421:
          BUG();
        }
        v19 = (unsigned int)(v27 - 122);
        v17 = (unsigned __int64)byte_201011;
        if ( !_bittest64((const __int64 *)&v17, v19) )
          goto LABEL_49;
        v24 = *(unsigned __int8 *)(a1 + 56);
        v19 = (unsigned int)(v24 - 33);
        if ( (unsigned __int8)(v24 - 33) > 1u )
          goto LABEL_49;
        v24 = *(unsigned __int8 *)(a1 + 65);
        v19 = (unsigned int)(v24 - 2);
        if ( (unsigned __int8)(v24 - 2) <= 2u )
          goto LABEL_63;
        if ( (_WORD)v27 == 122 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
            goto LABEL_63;
LABEL_199:
          v96 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
          v97 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
          v24 = 4;
          sub_3F7E20(a1, 4u, v352, v97, 0x3BEA45E214ADDC55LL, v96, 0);
        }
        else
        {
          if ( (_WORD)v27 != 126 )
            goto LABEL_49;
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
            goto LABEL_63;
LABEL_145:
          v61 = sub_3FAE20((__int64)&v359, v24, *(double *)a2.m128i_i64, a3);
          v62 = sub_3FAE20((__int64)&v361, v24, *(double *)a2.m128i_i64, a3);
          v24 = *(unsigned __int8 *)(a1 + 109);
          sub_1D6840(a1, v24, v352, v62, v61, 0);
        }
      }
LABEL_77:
      if ( (v351 & 4) == 0 )
      {
LABEL_78:
        if ( (v351 & 8) == 0 )
          return *(unsigned __int8 *)(a1 + 896);
        v71 = 1;
        goto LABEL_166;
      }
      if ( v360 || (v88 = &v359, (unsigned __int8)sub_3FACB0((__int64)&v359, *(double *)a2.m128i_i64, a3)) )
      {
LABEL_162:
        v24 = 0;
        v71 = sub_3FB270(a1, 0, v359.m128i_i32[3], 1, *(double *)a2.m128i_i64, a3);
        if ( (v351 & 8) == 0 )
        {
LABEL_163:
          if ( v71 )
            return *(unsigned __int8 *)(a1 + 896);
          return 4294967294LL;
        }
LABEL_166:
        if ( !v362 )
        {
          v88 = &v361;
          if ( !(unsigned __int8)sub_3FACB0((__int64)&v361, *(double *)a2.m128i_i64, a3) )
            goto LABEL_187;
        }
        v71 &= sub_3FB270(a1, 1, v361.m128i_i32[3], 1, *(double *)a2.m128i_i64, a3);
        goto LABEL_163;
      }
LABEL_187:
      sub_3EB430(*(double *)a2.m128i_i64, (__int64)v88, v24);
    }
    while ( 1 )
    {
      v19 = v46[4];
      v48 = 0;
      v49 = (_QWORD *)v46[3];
      if ( v17 < v19 )
      {
        v49 = (_QWORD *)v46[2];
        v48 = 1;
      }
      if ( !v49 )
        break;
      v46 = v49;
    }
    if ( (_BYTE)v48 )
    {
      if ( *(_QWORD **)(v18 + 1024) == v46 )
        goto LABEL_110;
      v338 = *(_QWORD *)(a1 + 40);
      v345 = *(_QWORD *)(a1 + 8);
      v63 = std::_Rb_tree_decrement(v46, v48, v19, v17, v18);
      v17 = v338;
      v18 = v345;
      v19 = *(_QWORD *)(v63 + 32);
    }
    if ( v19 >= v17 )
      goto LABEL_32;
LABEL_110:
    v344 = 1;
    if ( v47 != v46 )
      v344 = v17 < v46[4];
    goto LABEL_112;
  }
LABEL_23:
  if ( (v14 & 2) == 0 )
  {
LABEL_30:
    if ( (_WORD)v20 == 86 && *(_BYTE *)(a1 + 65) == 7 )
    {
      v60 = sub_3FD0D0(a1, v341, (_QWORD *)(a1 + 64));
      if ( (unsigned __int8)sub_409490(a1, v60) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
          sub_3FD260(a1);
        return 1;
      }
    }
LABEL_31:
    v9 = 1;
    goto LABEL_32;
  }
  if ( (_WORD)v20 != 16 )
  {
    if ( (_WORD)v20 == 18
      && *(_BYTE *)(a1 + 56) == 34
      && *(_BYTE *)(a1 + 65) == 2
      && *(_QWORD *)(a1 + 80) == 16
      && (unsigned __int8)sub_3F8CD0(a1) )
    {
      return 0;
    }
LABEL_29:
    sub_3FC1F0(a1);
    LOWORD(v20) = *(_WORD *)(a1 + 48);
    goto LABEL_30;
  }
  v64 = sub_3FD1A0(a1, v341);
  if ( v64 == -1 )
  {
    v89 = sub_3FD0D0(a1, v341, (_QWORD *)(a1 + 64));
    v90 = *(_QWORD *)(a1 + 832);
    v91 = v89;
    v92 = v89;
    v93 = *(__int64 (**)())(*(_QWORD *)v90 + 232LL);
    if ( v93 == sub_3F03B0 )
    {
      if ( sub_CFF70(0x2Cu, v92) == 1 )
      {
LABEL_192:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
          goto LABEL_197;
        v364 = -1;
        v365 = 0;
        v95 = v367;
        v366 = 0;
        v363 = -1;
        do
        {
          *(_WORD *)v95 = 0;
          v95 += 5;
          *((_WORD *)v95 - 19) = 0;
          *((_WORD *)v95 - 18) = 0;
          *((_DWORD *)v95 - 2) = 0;
          *((_WORD *)v95 - 17) = 0;
          *((_OWORD *)v95 - 2) = 0;
          *(v95 - 2) = 0;
        }
        while ( v95 != v371 );
        if ( !(unsigned int)decode_insn(
                              &v363,
                              *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
                              v371,
                              v94,
                              0,
                              0,
                              0.0)
          || (_WORD)v365 != 209
          || v367[1] != 1
          || v368 != 4
          || v369 != 1
          || v370 )
        {
LABEL_197:
          sub_408540(a1, 8u);
        }
        return 0;
      }
    }
    else if ( ((unsigned int (__fastcall *)(__int64, __int64))v93)(v90, v92) != -1 )
    {
      goto LABEL_192;
    }
    if ( (unsigned __int8)sub_409490(a1, v91) )
      return *(unsigned __int8 *)(a1 + 896);
    *(_QWORD *)v356 = 0;
    if ( (unsigned __int8)sub_381D00(*(_QWORD *)(a1 + 832), v91, (unsigned __int64)v356, 0, v98) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)v356, 24);
      if ( (get_tinfo_property(tinfo_property, 2) & 0xF) == 9 )
        *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1);
      clear_tinfo_t(&tinfo_property);
    }
    clear_tinfo_t(v356);
    goto LABEL_29;
  }
  v65 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v64);
  v66 = *(_DWORD *)(a1 + 52);
  v67 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v68 = v65;
  v69 = 7;
  if ( (v66 & 0x1018) != 0x1010 )
    v69 = ((v66 & 0x1018) == 4104 || (v66 & 0x1008) == 0) + 1;
  v70 = get_dtype_size(v69);
  sub_1D6310(a1, 3u, v70, v67, 0x3BEA45E214ADDC55LL, v68, 0);
  return *(unsigned __int8 *)(a1 + 896);
}
