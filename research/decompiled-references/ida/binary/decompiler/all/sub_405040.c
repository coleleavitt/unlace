__int64 __fastcall sub_405040(__int64 a1)
{
  char v1; // al
  __int64 result; // rax
  int v4; // r12d
  bool v5; // bl
  bool v6; // cl
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rax
  char v13; // dl
  unsigned __int16 v14; // ax
  _DWORD *v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  char v18; // al
  char v19; // al
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // r12
  unsigned __int64 v24; // r14
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rdx
  char v27; // cl
  _QWORD *v28; // rax
  int v29; // ebx
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // ecx
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  char v41; // al
  __int64 v42; // rcx
  __int16 v43; // dx
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  _QWORD *v46; // r14
  unsigned __int64 v47; // rdx
  char v48; // si
  _QWORD *v49; // rax
  int v50; // eax
  _QWORD *v51; // r12
  _QWORD *v52; // rbx
  unsigned __int64 v53; // rdx
  char v54; // cl
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // ebx
  unsigned int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // eax
  int v62; // eax
  __int64 v63; // rbx
  int v64; // r14d
  int v65; // eax
  char v66; // bl
  int dtype_size; // eax
  unsigned int v68; // ebx
  unsigned int v69; // eax
  int v70; // r9d
  int v71; // r9d
  int v72; // r13d
  int v73; // eax
  int v74; // eax
  int v75; // r13d
  int v76; // eax
  int v77; // r13d
  int v78; // eax
  int v79; // r12d
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // r14
  unsigned __int64 v84; // rax
  __m128i *v85; // rdi
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // rsi
  __int64 (*v91)(); // rax
  unsigned __int64 *v92; // rax
  int v93; // ebx
  int v94; // eax
  __int64 v95; // rdx
  int v96; // ecx
  int v97; // ecx
  __int64 v98; // r9
  int v99; // eax
  __int64 v100; // rcx
  __int64 v101; // r8
  int v102; // r9d
  unsigned __int8 v103; // al
  int v104; // r9d
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // ecx
  __int64 v110; // rax
  int v111; // ecx
  int v112; // r12d
  int v113; // ebx
  int v114; // eax
  int v115; // r13d
  int v116; // ebx
  int v117; // eax
  unsigned int v118; // eax
  int v119; // eax
  __int64 v120; // r8
  __int32 v121; // r9d
  int v122; // r11d
  int v123; // r9d
  signed int v124; // eax
  unsigned __int8 v125; // bl
  unsigned int v126; // r12d
  unsigned int v127; // eax
  __int64 v128; // r9
  int v129; // ecx
  int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // r8
  int v133; // r9d
  int v134; // eax
  __int64 v135; // rcx
  __int64 v136; // r8
  int v137; // r9d
  int v138; // eax
  __int64 v139; // rcx
  __int64 v140; // r8
  int v141; // r9d
  int v142; // eax
  unsigned int v143; // eax
  __int64 v144; // rbx
  int v145; // eax
  unsigned int v146; // eax
  int v147; // eax
  unsigned int v148; // ebx
  unsigned int v149; // eax
  int v150; // r9d
  int v151; // r9d
  int v152; // ebx
  int v153; // r12d
  int v154; // eax
  int v155; // ebx
  unsigned int v156; // eax
  unsigned int v157; // ebx
  unsigned int v158; // r12d
  unsigned int v159; // eax
  int v160; // ebx
  unsigned int v161; // eax
  int v162; // r12d
  int v163; // ebx
  int v164; // eax
  __int64 v165; // rbx
  int v166; // ecx
  __int64 v167; // r9
  int v168; // ebx
  int v169; // r13d
  __int16 v170; // ax
  unsigned int v171; // r12d
  int v172; // eax
  int v173; // eax
  int v174; // r9d
  int v175; // eax
  int v176; // ebx
  int v177; // eax
  int v178; // ebx
  int v179; // eax
  int v180; // ebx
  int v181; // r12d
  int v182; // eax
  int v183; // ebx
  int v184; // eax
  int v185; // ebx
  int v186; // eax
  int v187; // ebx
  int v188; // eax
  unsigned int v189; // ebx
  unsigned int v190; // eax
  int v191; // r9d
  int v192; // eax
  int v193; // ebx
  unsigned int v194; // eax
  int v195; // r12d
  int v196; // ebx
  int v197; // eax
  int v198; // ebx
  int v199; // eax
  unsigned int v200; // eax
  int v201; // ebx
  int v202; // eax
  unsigned int v203; // ebx
  unsigned int v204; // eax
  unsigned int v205; // ebx
  unsigned int v206; // eax
  unsigned int v207; // eax
  __int64 v208; // r9
  int v209; // ecx
  unsigned int v210; // ebx
  __int64 v211; // rcx
  char v212; // al
  signed int v213; // ebx
  __int64 v214; // r9
  __int64 v215; // r8
  __int64 v216; // rdx
  int v217; // eax
  __int64 v218; // rsi
  __m128i v219; // xmm2
  int v220; // edx
  __m128i v221; // xmm3
  __m128i v222; // xmm0
  int v223; // r9d
  signed int v224; // eax
  unsigned int v225; // eax
  int v226; // eax
  __int64 v227; // r9
  int v228; // ecx
  unsigned int v229; // ebx
  unsigned int v230; // eax
  unsigned int v231; // ebx
  int v232; // eax
  unsigned int v233; // ebx
  int v234; // eax
  int v235; // eax
  char *v236; // rbx
  unsigned int v237; // r14d
  int v238; // eax
  unsigned int v239; // r14d
  unsigned int v240; // ebx
  int v241; // eax
  int v242; // r14d
  __m128i *v243; // rdi
  int v244; // ebx
  int v245; // r14d
  int v246; // ebx
  int v247; // eax
  int v248; // r14d
  __m128i *v249; // rdi
  int v250; // ebx
  int v251; // eax
  int v252; // r14d
  int v253; // ebx
  int v254; // eax
  __m128i v255; // xmm0
  unsigned int v256; // ebx
  int v257; // eax
  int v258; // eax
  unsigned int v259; // r14d
  unsigned int v260; // ebx
  int v261; // eax
  unsigned int v262; // ebx
  __int64 v263; // rcx
  unsigned __int8 v264; // al
  __int64 v265; // rdx
  unsigned __int64 v266; // rcx
  int v267; // eax
  __int32 v268; // ebx
  int v269; // eax
  __m128i v270; // xmm0
  char v271; // al
  unsigned int v272; // ebx
  __int64 v273; // rcx
  unsigned __int8 v274; // al
  unsigned int v275; // ebx
  unsigned int v276; // eax
  int v277; // ebx
  unsigned int v278; // eax
  int v279; // r12d
  int v280; // ebx
  __int64 v281; // rdx
  unsigned __int64 v282; // rcx
  int v283; // eax
  __int64 v284; // rbx
  int v285; // eax
  int v286; // r12d
  int v287; // eax
  int v288; // eax
  int v289; // eax
  int v290; // r12d
  int v291; // ebx
  int v292; // eax
  int v293; // eax
  int v294; // ebx
  int v295; // eax
  __int32 v296; // eax
  int v297; // ebx
  int v298; // eax
  int v299; // eax
  int v300; // eax
  int v301; // eax
  int v302; // eax
  int v303; // eax
  int v304; // eax
  int v305; // eax
  int v306; // eax
  int v307; // ecx
  __int64 v308; // r9
  int v309; // eax
  int v310; // eax
  int v311; // eax
  int v312; // eax
  char v313; // al
  int v314; // eax
  int v315; // eax
  int v316; // eax
  int v317; // ebx
  int v318; // eax
  int v319; // ebx
  int v320; // eax
  int v321; // ebx
  int v322; // eax
  int v323; // r12d
  int v324; // eax
  int v325; // r12d
  int v326; // eax
  int v327; // r12d
  int v328; // r14d
  int v329; // eax
  int v330; // eax
  int v331; // eax
  __int64 v332; // rdx
  const char *v333; // r13
  unsigned int v334; // r12d
  unsigned int v335; // r14d
  int v336; // eax
  signed int v337; // r12d
  int v338; // ebx
  int v339; // eax
  signed int v340; // [rsp+0h] [rbp-250h]
  __int64 v341; // [rsp+0h] [rbp-250h]
  int v342; // [rsp+8h] [rbp-248h]
  int v343; // [rsp+8h] [rbp-248h]
  int v344; // [rsp+8h] [rbp-248h]
  int v345; // [rsp+8h] [rbp-248h]
  __int64 v346; // [rsp+8h] [rbp-248h]
  int v347; // [rsp+10h] [rbp-240h]
  int v348; // [rsp+10h] [rbp-240h]
  unsigned int v349; // [rsp+10h] [rbp-240h]
  int v350; // [rsp+18h] [rbp-238h]
  __int64 v351; // [rsp+18h] [rbp-238h]
  unsigned __int64 v352; // [rsp+18h] [rbp-238h]
  __int64 v353; // [rsp+18h] [rbp-238h]
  __int64 v354; // [rsp+18h] [rbp-238h]
  __int64 v355; // [rsp+20h] [rbp-230h]
  signed int v356; // [rsp+28h] [rbp-228h]
  __int64 v357; // [rsp+28h] [rbp-228h]
  unsigned __int64 v358; // [rsp+28h] [rbp-228h]
  unsigned __int8 v359; // [rsp+28h] [rbp-228h]
  signed int v360; // [rsp+28h] [rbp-228h]
  signed int v361; // [rsp+30h] [rbp-220h]
  unsigned __int8 dtype_by_size; // [rsp+30h] [rbp-220h]
  __int16 v363; // [rsp+34h] [rbp-21Ch]
  unsigned int v364; // [rsp+38h] [rbp-218h]
  unsigned __int64 v365; // [rsp+38h] [rbp-218h]
  __int128 v366; // [rsp+40h] [rbp-210h] BYREF
  _BYTE v367[12]; // [rsp+50h] [rbp-200h] BYREF
  __int64 tinfo_property; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v369; // [rsp+68h] [rbp-1E8h]
  __m128i v370; // [rsp+70h] [rbp-1E0h] BYREF
  char v371; // [rsp+80h] [rbp-1D0h]
  __m128i v372; // [rsp+90h] [rbp-1C0h] BYREF
  char v373; // [rsp+A0h] [rbp-1B0h]
  __int128 v374; // [rsp+B0h] [rbp-1A0h]
  __int64 v375; // [rsp+C0h] [rbp-190h]
  __int64 v376; // [rsp+C8h] [rbp-188h]
  __int64 v377; // [rsp+D0h] [rbp-180h]
  _BYTE v378[6]; // [rsp+D8h] [rbp-178h] BYREF
  __int16 v379; // [rsp+DEh] [rbp-172h]
  char v380; // [rsp+101h] [rbp-14Fh]
  __int16 v381; // [rsp+106h] [rbp-14Ah]
  unsigned __int64 v382; // [rsp+218h] [rbp-38h] BYREF

  v1 = *(_BYTE *)(a1 + 384);
  v382 = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 832) + 240LL))(
            *(_QWORD *)(a1 + 832),
            5,
            *(_QWORD *)(a1 + 40))
        & 1) == 0 )
    {
      sub_3FF2A0(a1);
      return 0;
    }
  }
  v4 = *(unsigned __int16 *)(a1 + 48);
  v5 = (_WORD)v4 == 28;
  v6 = (_WORD)v4 == 207;
  if ( (unsigned __int16)(v4 - 107) <= 0x3Cu )
  {
    v8 = 0xEFFFFFFFFFFDFFFELL;
    v7 = !_bittest64((const __int64 *)&v8, (unsigned int)(v4 - 107)) || v6 || v5;
    if ( v7 )
      return sub_3FBE80(a1);
  }
  else
  {
    v7 = v6 || v5;
    if ( v7 )
      return sub_3FBE80(a1);
  }
  if ( (_WORD)v4 == 5 || (_WORD)v4 == 166 )
  {
    v21 = *(_QWORD **)(a1 + 856);
    v22 = &v21[*(_QWORD *)(a1 + 864)];
    if ( v21 != v22 )
    {
      while ( *(_QWORD *)(a1 + 40) != *v21 )
      {
        if ( v22 == ++v21 )
          goto LABEL_11;
      }
      if ( v22 != v21 )
        return 0;
    }
  }
LABEL_11:
  v370.m128i_i64[0] = a1;
  v371 = 0;
  v370.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v372.m128i_i64[0] = a1;
  v372.m128i_i64[1] = 0xFFFFFFFF00000001LL;
  v373 = 0;
  LOBYTE(v364) = sub_3EF830(a1, a1 + 64);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v10 = *(_DWORD *)(v9 + 104);
  if ( v4 >= v10 && v4 < *(_DWORD *)(v9 + 108) )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + 16LL * (v4 - v10) + 8);
    v363 = v11;
  }
  else
  {
    v363 = 0;
    v11 = 0;
  }
  v12 = getseg();
  if ( v12 && !*(_BYTE *)(v12 + 43) )
  {
    v51 = *(_QWORD **)(a1 + 8);
    v52 = (_QWORD *)v51[127];
    v365 = *(_QWORD *)(a1 + 40);
    if ( !v52 )
    {
      if ( (_QWORD *)v51[128] != v51 + 126 && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v365 )
        return sub_3FCBA0(a1, v363, (__int64)&v370, (__int64)&v372);
      goto LABEL_124;
    }
    while ( 1 )
    {
      v53 = v52[4];
      v54 = 0;
      v55 = (_QWORD *)v52[3];
      if ( v365 < v53 )
      {
        v55 = (_QWORD *)v52[2];
        v54 = 1;
      }
      if ( !v55 )
        break;
      v52 = v55;
    }
    if ( v54 )
    {
      if ( (_QWORD *)v51[128] == v52 )
        goto LABEL_124;
      v53 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v53 >= v365 )
      return sub_3FCBA0(a1, v363, (__int64)&v370, (__int64)&v372);
LABEL_124:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v51[130];
    return sub_3FCBA0(a1, v363, (__int64)&v370, (__int64)&v372);
  }
  if ( *(_BYTE *)(a1 + 56) != 33 || *(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
  {
    v13 = *(_BYTE *)(a1 + 65);
  }
  else
  {
    v41 = getinf();
    v42 = 262;
    v13 = *(_BYTE *)(a1 + 65);
    if ( _bittest64(&v42, v41 & 0xF)
      && (dword_430160[v13 != 2] & v11) != 0
      && *(_BYTE *)(a1 + 40LL * (v13 != 2) + 65) == 2
      && !*(_QWORD *)(a1 + 40LL * (v13 != 2) + 80) )
    {
      return 0;
    }
  }
  v14 = *(_WORD *)(a1 + 48);
  if ( v13 != 1 || *(_WORD *)(a1 + 70) != 5 || (v11 & 4) == 0 )
    goto LABEL_19;
  if ( v14 == 122 )
  {
    if ( *(_BYTE *)(a1 + 105) == 1 )
      goto LABEL_98;
    goto LABEL_175;
  }
  if ( v14 != 92 )
  {
    HIBYTE(v43) = HIBYTE(*(_WORD *)(a1 + 48));
    LOBYTE(v43) = v14 & 0x7F;
    if ( v43 != 6 && v14 != 209 )
    {
LABEL_175:
      v82 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v82 + 112) & 0x10) != 0 )
      {
        v83 = sub_1CBEA0(v82);
        if ( !v83 )
        {
          if ( !under_debugger )
            sub_37EA20(50519);
          goto LABEL_414;
        }
        get_func();
        v84 = *(_QWORD *)(v83 + 16) & 0xFFFFFFFFFFFFFFEFLL;
        *(_QWORD *)(v83 + 16) = v84;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v84;
        update_func();
        v14 = *(_WORD *)(a1 + 48);
      }
LABEL_19:
      v355 = a1 + 24;
      if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      {
        if ( v14 != 159 )
          goto LABEL_109;
        if ( (v11 & 0x10000) == 0 )
          goto LABEL_100;
      }
      else if ( v14 != 752 )
      {
        if ( (v11 & 0x10000) != 0 )
        {
          if ( (unsigned __int16)(v14 - 152) <= 1u )
            goto LABEL_100;
          goto LABEL_23;
        }
LABEL_109:
        if ( v14 != 515 )
        {
          if ( v14 > 0x203u )
          {
            if ( v14 != 604 )
              goto LABEL_100;
          }
          else if ( v14 > 0x100u )
          {
            if ( (unsigned __int16)(v14 - 258) > 0x53u )
              goto LABEL_100;
          }
          else if ( v14 <= 0xF4u )
          {
            goto LABEL_100;
          }
        }
        v50 = sub_404F20((_QWORD *)a1);
        *(_DWORD *)(a1 + 892) = v50;
        if ( v50 >= 0 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 314) <= 2u )
          return 0;
        goto LABEL_32;
      }
      if ( (v11 & 2) == 0 )
      {
LABEL_31:
        v7 = 1;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
  }
LABEL_98:
  v355 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 || (v11 & 0x10000) == 0 )
  {
LABEL_100:
    v44 = *(_QWORD *)(a1 + 8);
    v45 = *(_QWORD *)(a1 + 40);
    v46 = *(_QWORD **)(v44 + 1016);
    if ( !v46 )
    {
      v358 = *(_QWORD *)(a1 + 40);
      if ( v44 + 1008 == *(_QWORD *)(v44 + 1024) )
        goto LABEL_108;
      v353 = *(_QWORD *)(a1 + 8);
      v81 = std::_Rb_tree_decrement();
      v44 = v353;
      if ( *(_QWORD *)(v81 + 32) < v358 )
        goto LABEL_108;
LABEL_32:
      v15 = *(_DWORD **)(a1 + 832);
      v16 = (int)v15[113];
      v350 = v15[116];
      v356 = v15[114];
      v17 = (unsigned int)v15[115];
      v347 = v15[115];
      v361 = v15[117];
      if ( (v11 & 0x100) != 0 || (v18 = *(_BYTE *)(a1 + 65), v18 == 1) || v18 == 11 )
      {
        v17 = 1;
        sub_3EFA20(v370.m128i_i32, 1, 0);
      }
      else
      {
        v370.m128i_i32[3] = v16;
        v371 = 1;
      }
      if ( (v11 & 0x200) != 0 || (v19 = *(_BYTE *)(a1 + 105), v19 == 1) || v19 == 11 )
      {
        v17 = 1;
        sub_3EFA20(v372.m128i_i32, 1, 0);
      }
      else
      {
        v373 = 1;
        v372.m128i_i32[3] = v356;
      }
      if ( !v7 && *(int *)(a1 + 892) < 0 || v370.m128i_i32[3] == -1 || v372.m128i_i32[3] == -1 )
        goto LABEL_63;
      v20 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v20 > 0x8Fu )
      {
        if ( (unsigned __int16)v20 <= 0x2F6u )
          goto LABEL_49;
        if ( (unsigned __int16)(v20 - 1775) > 1u )
          goto LABEL_63;
      }
      else
      {
        if ( (unsigned __int16)v20 <= 0x79u )
        {
          if ( (_WORD)v20 == 6 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_168:
              v72 = sub_3F02C0((__int64)&v372);
              v73 = sub_3F02C0((__int64)&v370);
              v74 = sub_3FECC0(a1, v364, v73, v72);
              if ( v74 == 1 )
                return 0;
              if ( v74 == -1 )
                return 4294967294LL;
              v75 = sub_3F02C0((__int64)&v370);
              v76 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x19u, (unsigned __int8)v364, v76, v75, 0, 0);
              v77 = sub_3F02C0((__int64)&v370);
              v78 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x1Au, (unsigned __int8)v364, v78, v77, 3, 0);
              v79 = sub_3F02C0((__int64)&v370);
              v80 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0xCu, (unsigned __int8)v364, v80, v79, v350, 0);
              v370.m128i_i32[3] = v350;
              v371 = 1;
LABEL_166:
              v17 = v370.m128i_u32[3];
              sub_3F29C0(a1, v370.m128i_i32[3], v364);
              goto LABEL_75;
            }
          }
          else
          {
            if ( (_WORD)v20 != 44 )
            {
              if ( (unsigned __int16)v20 > 4u )
                goto LABEL_49;
LABEL_63:
              if ( (unsigned __int8)sub_3F2A40(a1, (__int64)&v370, &v372, v364) )
                return 0;
              v23 = *(_QWORD **)(a1 + 8);
              v24 = *(_QWORD *)(a1 + 40);
              v25 = (_QWORD *)v23[127];
              if ( v25 )
              {
                while ( 1 )
                {
                  v26 = v25[4];
                  v27 = 0;
                  v28 = (_QWORD *)v25[3];
                  if ( v24 < v26 )
                  {
                    v28 = (_QWORD *)v25[2];
                    v27 = 1;
                  }
                  if ( !v28 )
                    break;
                  v25 = v28;
                }
                if ( !v27 )
                  goto LABEL_71;
              }
              else
              {
                v25 = v23 + 126;
              }
              if ( v25 == (_QWORD *)v23[128] )
                goto LABEL_72;
              v26 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_71:
              if ( v26 >= v24 )
                return sub_3FCBA0(a1, v363, (__int64)&v370, (__int64)&v372);
LABEL_72:
              *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
              std::_Rb_tree_insert_and_rebalance();
              ++v23[130];
              return sub_3FCBA0(a1, v363, (__int64)&v370, (__int64)&v372);
            }
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_164:
              v366 = 0xFFFFFFFF00000000LL;
              dtype_size = get_dtype_size();
              sub_11E5D0((__int64)&v366, *(_QWORD *)(a1 + 832), 1, dtype_size, -1, 0);
              v68 = DWORD1(v366);
              v69 = sub_3F02C0((__int64)&v370);
              *(_DWORD *)v367 = 1;
              tinfo_property = 0x100000001LL;
              v369 = 3;
              *(_QWORD *)&v367[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v69)).m128i_u64[0];
              sub_1D38D0(a1, 26, (unsigned int)&v366, (unsigned int)v367, (unsigned int)&tinfo_property, v70);
              v17 = 12;
              sub_1D38D0(a1, 12, (unsigned int)&v366, (unsigned int)v367, (unsigned int)v367, v71);
              sub_11A960((__int64)&tinfo_property);
              sub_11A960((__int64)v367);
              sub_11A960((__int64)&v366);
LABEL_165:
              if ( !v371 )
              {
                v85 = &v370;
                if ( !(unsigned __int8)sub_3F0150((__int64)&v370) )
                  goto LABEL_179;
              }
              goto LABEL_166;
            }
          }
          v17 = *(unsigned __int8 *)(a1 + 65);
          if ( (unsigned __int8)(v17 - 2) <= 2u )
            goto LABEL_63;
LABEL_49:
          switch ( (__int16)v20 )
          {
            case 5:
              v152 = sub_3F02C0((__int64)&v370);
              v153 = sub_3F02C0((__int64)&v372);
              v154 = sub_3F02C0((__int64)&v370);
              v17 = (unsigned __int8)v364;
              sub_1D3D90(a1, (unsigned __int8)v364, v154, v153, v152, v350, v347);
              goto LABEL_165;
            case 6:
              goto LABEL_168;
            case 7:
              v112 = sub_3F02C0((__int64)&v370);
              v113 = sub_3F02C0((__int64)&v370);
              v114 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x14u, (unsigned __int8)v364, v114, v113, v112, 0);
              goto LABEL_219;
            case 16:
            case 86:
            case 89:
              if ( (unsigned __int8)sub_1D3640(a1) )
                goto LABEL_75;
              if ( *(_BYTE *)(a1 + 65) == 7 )
              {
                v105 = *(_QWORD *)(a1 + 800);
                tinfo_property = 0xFFFFFFFF00000000LL;
                v106 = *(_QWORD *)(*(_QWORD *)(v105 + 24) + 16LL);
                v107 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                if ( v107 != v106 )
                {
                  if ( v107 == -1 )
                    v106 = -1;
                  else
                    v106 &= v107;
                }
                v108 = *(_QWORD *)(a1 + 832);
                LOBYTE(tinfo_property) = 6;
                v109 = *(_DWORD *)(v108 + 84);
                v110 = 0;
                v111 = 8 * v109;
                if ( (unsigned __int64)v111 <= 0x3F )
                  v110 = 1LL << v111;
                v17 = 55;
                v369 = v106 & (v110 - 1);
                sub_1D38D0(a1, 55, (unsigned int)&tinfo_property, 0, 0, v104);
                sub_11A960((__int64)&tinfo_property);
              }
              else
              {
                v337 = sub_3E1020(*(_DWORD *)(a1 + 52));
                v338 = sub_3F02C0((__int64)&v370);
                v339 = sub_3F02C0((__int64)&v370);
                v214 = v338;
                v216 = (unsigned __int8)v364;
                v215 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + v339;
                v340 = v337;
LABEL_291:
                v17 = 54;
                sub_3ED260(a1, 0x36u, v216, 346938453, v215, v214, v340);
              }
              goto LABEL_75;
            case 17:
            case 87:
              if ( !v371 )
                sub_3EFA20(v370.m128i_i32, 0, 0);
              v217 = get_dtype_size();
              v218 = *(_QWORD *)(a1 + 832);
              v219 = _mm_cvtsi32_si128(v361);
              v220 = 4;
              v221 = _mm_cvtsi32_si128(v356);
              v348 = v217;
              v222 = _mm_cvtsi32_si128(*(_DWORD *)(v218 + 80));
              if ( v217 != 6 )
                v220 = v217;
              LODWORD(v366) = 1;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v369 = 0;
              *(_DWORD *)v367 = 1;
              *(_QWORD *)((char *)&v366 + 4) = _mm_unpacklo_epi32(v222, v219).m128i_u64[0];
              *(_QWORD *)&v367[4] = _mm_unpacklo_epi32(v222, v221).m128i_u64[0];
              sub_11E5D0((__int64)&tinfo_property, v218, v220, _mm_cvtsi128_si32(v222), -1, 0);
              sub_1D38D0(a1, 12, (unsigned int)&tinfo_property, (unsigned int)&v366, (unsigned int)v367, v223);
              v224 = sub_3E1020(*(_DWORD *)(a1 + 52));
              v354 = v356;
              sub_3ED260(a1, 2u, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), v356, v356, v224);
              if ( v356 != (unsigned int)sub_3F02C0((__int64)&v370) )
              {
                if ( (int)sub_3E2110(v355) > v348 )
                {
                  v359 = *(_BYTE *)(a1 + 69);
                  dtype_by_size = get_dtype_by_size();
                  v349 = sub_3F02C0((__int64)&v370);
                  v225 = sub_3F02C0((__int64)&v370);
                  sub_1D3CC0(a1, v359, dtype_by_size, v225, v349, 0);
                }
                v360 = sub_3E2110(v355);
                v226 = sub_3F02C0((__int64)&v370);
                v17 = 54;
                sub_3ED260(a1, 0x36u, (unsigned __int8)v364, 346938453, v354, v226, v360);
                sub_11A960((__int64)&tinfo_property);
                sub_11A960((__int64)v367);
                sub_11A960((__int64)&v366);
                goto LABEL_75;
              }
              if ( !under_debugger )
                sub_37EA20(51142);
              return result;
            case 18:
            case 88:
              v213 = sub_3E2110(v355);
              v214 = (int)sub_3F02C0((__int64)&v370);
              v215 = *(int *)(*(_QWORD *)(a1 + 832) + 64LL);
              v216 = (unsigned __int8)v364;
              v340 = v213;
              goto LABEL_291;
            case 19:
            case 20:
            case 21:
              v210 = sub_3F02C0((__int64)&v370);
              v211 = (unsigned int)sub_3F02C0((__int64)&v370);
              if ( (_BYTE)v364 )
              {
                if ( (_BYTE)v364 == 1 )
                  v212 = 2;
                else
                  v212 = ((_BYTE)v364 != 2) + 7;
              }
              else
              {
                v212 = 1;
              }
              v17 = (unsigned __int8)v364;
              sub_1D3CC0(a1, (unsigned __int8)v364, (unsigned int)v212, v211, v210, 1);
              goto LABEL_75;
            case 22:
              v208 = 0;
              goto LABEL_284;
            case 23:
              v208 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
LABEL_284:
              v209 = 0;
              goto LABEL_285;
            case 26:
              v227 = 0;
              goto LABEL_301;
            case 27:
              v175 = sub_3F02C0((__int64)&v370);
              v364 = (unsigned __int8)v364;
              sub_3ED260(a1, 4u, (unsigned __int8)v364, v175, 0x3BEA45E214ADDC55LL, (int)v16, 0);
              v370.m128i_i32[3] = v16;
              v371 = 1;
              goto LABEL_262;
            case 29:
            case 30:
            case 31:
              v173 = get_dtype_size();
              *(_DWORD *)v367 = 1;
              *(_DWORD *)&v367[4] = v173;
              *(_DWORD *)&v367[8] = 8;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v369 = 0;
              sub_122DA0((__int64)&tinfo_property, 8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL), v173);
              v17 = 8;
              sub_1D38D0(a1, 8, (unsigned int)v367, 0, (unsigned int)&tinfo_property, v174);
              sub_11A960((__int64)&tinfo_property);
              sub_11A960((__int64)v367);
              goto LABEL_75;
            case 34:
              v366 = 0xFFFFFFFF00000000LL;
              v147 = get_dtype_size();
              sub_11E5D0((__int64)&v366, *(_QWORD *)(a1 + 832), 1, v147, -1, 0);
              v148 = DWORD1(v366);
              v149 = sub_3F02C0((__int64)&v370);
              *(_DWORD *)v367 = 1;
              tinfo_property = 0x100000001LL;
              v369 = 3;
              *(_QWORD *)&v367[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v148), _mm_cvtsi32_si128(v149)).m128i_u64[0];
              sub_1D38D0(a1, 30, (unsigned int)v367, (unsigned int)&v366, (unsigned int)&tinfo_property, v150);
              v17 = 13;
              sub_1D38D0(a1, 13, (unsigned int)v367, (unsigned int)&v366, (unsigned int)v367, v151);
              sub_11A960((__int64)&tinfo_property);
              sub_11A960((__int64)v367);
              sub_11A960((__int64)&v366);
              goto LABEL_165;
            case 35:
              v146 = sub_3F02C0((__int64)&v372);
              v17 = v146;
              sub_3F08F0(a1, v146, v364, 0);
              goto LABEL_75;
            case 36:
            case 37:
            case 38:
              sub_3EE1E0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL), v364);
              if ( *(_QWORD *)(a1 + 112) )
                return 4294967294LL;
              sub_3ED260(
                a1,
                4u,
                (unsigned __int8)v364,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v144 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
              v145 = sub_3F02C0((__int64)&v370);
              v17 = 13;
              sub_3ED260(a1, 0xDu, (unsigned __int8)v364, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), v145, v144, 0);
              goto LABEL_75;
            case 41:
              v143 = sub_3F02C0((__int64)&v372);
              v17 = v143;
              sub_3F08F0(a1, v143, v364, 1u);
              goto LABEL_75;
            case 42:
              v155 = sub_3F02C0((__int64)&v372);
              v156 = sub_3F02C0((__int64)&v370);
              v17 = 1;
              sub_3F0D60(a1, 1u, v156, v155, v364);
              goto LABEL_75;
            case 44:
              goto LABEL_164;
            case 53:
            case 69:
            case 229:
            case 251:
              v165 = v350;
              v166 = 0;
              v167 = v350;
              goto LABEL_250;
            case 54:
            case 68:
            case 70:
            case 236:
            case 249:
              v36 = 0;
              v37 = v350;
              goto LABEL_81;
            case 55:
            case 57:
            case 67:
            case 230:
            case 245:
              v32 = sub_3F02C0((__int64)&v370);
              v17 = 0;
              sub_3F1970(a1, 0, v32, v33, v34, v35);
              goto LABEL_75;
            case 56:
            case 66:
            case 231:
            case 247:
              v97 = 0;
              v98 = v350;
              goto LABEL_207;
            case 58:
            case 59:
            case 60:
              v17 = 33;
              v103 = sub_3E1160(*(_DWORD *)(a1 + 52));
              sub_3F0BC0(a1, 33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v103, v350);
              goto LABEL_82;
            case 61:
            case 85:
            case 244:
            case 246:
              v99 = sub_3F02C0((__int64)&v370);
              v17 = 1;
              sub_3F1970(a1, 1, v99, v100, v101, v102);
              goto LABEL_75;
            case 62:
            case 75:
            case 232:
              v165 = v350;
              sub_3ED260(a1, 0x15u, 0, 2, 3, v350, 0);
              v167 = v350;
              v166 = v350;
LABEL_250:
              sub_3ED260(a1, 0x13u, 0, v166, 1, v167, 0);
              goto LABEL_251;
            case 63:
            case 74:
            case 233:
              v165 = v350;
              sub_3ED260(a1, 0x15u, 0, 2, 3, v350, 0);
LABEL_251:
              v37 = v165;
              v36 = v165;
              goto LABEL_81;
            case 64:
            case 73:
            case 234:
              v17 = 21;
              sub_3ED260(a1, 0x15u, 0, 2, 3, v350, 0);
              goto LABEL_82;
            case 65:
            case 72:
            case 235:
              sub_3ED260(a1, 0x15u, 0, 2, 3, v350, 0);
              v98 = v350;
              v97 = v350;
LABEL_207:
              v17 = 19;
              sub_3ED260(a1, 0x13u, 0, v97, 1, v98, 0);
              goto LABEL_82;
            case 71:
            case 79:
            case 240:
            case 250:
              v36 = 1;
              v37 = v350;
              goto LABEL_81;
            case 76:
            case 237:
              v36 = 3;
              v37 = v350;
              goto LABEL_81;
            case 77:
            case 83:
            case 238:
            case 252:
              v36 = 4;
              v37 = v350;
              goto LABEL_81;
            case 78:
            case 239:
              v36 = 2;
              v37 = v350;
LABEL_81:
              v17 = 6;
              sub_3ED260(a1, 6u, 0, v36, 0x3BEA45E214ADDC55LL, v37, 0);
LABEL_82:
              if ( !v371 )
              {
                v85 = &v370;
                if ( !(unsigned __int8)sub_3F0150((__int64)&v370) )
                  goto LABEL_179;
              }
              v17 = (unsigned int)v350;
              sub_3F1970(a1, v350, v370.m128i_i32[3], v38, v39, v40);
              goto LABEL_75;
            case 80:
            case 241:
              v134 = sub_3F02C0((__int64)&v370);
              v17 = 3;
              sub_3F1970(a1, 3, v134, v135, v136, v137);
              goto LABEL_75;
            case 81:
            case 82:
            case 242:
            case 248:
              v130 = sub_3F02C0((__int64)&v370);
              v17 = 4;
              sub_3F1970(a1, 4, v130, v131, v132, v133);
              goto LABEL_75;
            case 84:
            case 243:
              v138 = sub_3F02C0((__int64)&v370);
              v17 = 2;
              sub_3F1970(a1, 2, v138, v139, v140, v141);
              goto LABEL_75;
            case 90:
              v128 = 9;
              v129 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 524LL);
              goto LABEL_227;
            case 92:
              v125 = sub_3E1160(*(_DWORD *)(a1 + 52));
              if ( v125 < (unsigned __int8)v364 )
              {
                v126 = sub_3F02C0((__int64)&v370);
                v127 = sub_3F02C0((__int64)&v372);
                v17 = v125;
                sub_1D3CC0(a1, v125, (unsigned __int8)v364, v127, v126, 0);
                goto LABEL_75;
              }
              v93 = sub_3F02C0((__int64)&v370);
              v142 = sub_3F02C0((__int64)&v372);
              v95 = (unsigned int)(char)v364;
              v96 = v142;
              goto LABEL_192;
            case 93:
            case 94:
            case 95:
              sub_3ED260(
                a1,
                4u,
                (unsigned __int8)v364,
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v17 = *(unsigned int *)(*(_QWORD *)(a1 + 832) + 400LL);
              sub_3EE380(a1);
              goto LABEL_75;
            case 99:
              v115 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL);
              goto LABEL_221;
            case 101:
              v115 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 52LL);
              goto LABEL_221;
            case 102:
              v115 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
              goto LABEL_221;
            case 103:
              v115 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL);
LABEL_221:
              v116 = sub_3F02C0((__int64)&v370);
              v117 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 4u, (unsigned __int8)v364, v117, 0x3BEA45E214ADDC55LL, v116, 0);
              v118 = sub_3E1020(*(_DWORD *)(a1 + 52));
              *(_DWORD *)v367 = 1;
              v369 = 0;
              tinfo_property = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v367[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v118), _mm_cvtsi32_si128(v361)).m128i_u64[0];
              v119 = sub_3E2110(v355);
              sub_11E5D0((__int64)&tinfo_property, *(_QWORD *)(a1 + 832), v119, v122, v120, v121);
              sub_1D38D0(a1, 12, (unsigned int)&tinfo_property, (unsigned int)v367, (unsigned int)v367, v123);
              sub_11A960((__int64)&tinfo_property);
              sub_11A960((__int64)v367);
              v17 = 2;
              v124 = sub_3E1020(*(_DWORD *)(a1 + 52));
              sub_3ED260(a1, 2u, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), v361, v115, v124);
              goto LABEL_75;
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
              v31 = sub_3F02C0((__int64)&v370);
              v17 = v31;
              sub_3F1CA0(a1, v31);
              goto LABEL_75;
            case 122:
              goto LABEL_191;
            case 125:
            case 594:
              v229 = sub_3F02C0((__int64)&v370);
              v230 = sub_3F02C0((__int64)&v372);
              v17 = *(unsigned __int8 *)(a1 + 109);
              sub_1D3CC0(a1, v17, (unsigned __int8)v364, v230, v229, 1);
              goto LABEL_75;
            case 126:
              goto LABEL_139;
            case 127:
              v193 = sub_3F02C0((__int64)&v372);
              v194 = sub_3F02C0((__int64)&v370);
              v17 = 0;
              sub_3F0D60(a1, 0, v194, v193, v364);
              goto LABEL_75;
            case 128:
              v187 = sub_3F02C0((__int64)&v370);
              v342 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 5u, (unsigned __int8)v364, v342, 0x3BEA45E214ADDC55LL, v187, 0);
              v366 = 0xFFFFFFFF00000000LL;
              v188 = get_dtype_size();
              sub_11E5D0((__int64)&v366, *(_QWORD *)(a1 + 832), 1, v188, -1, 0);
              v189 = DWORD1(v366);
              v190 = sub_3F02C0((__int64)&v370);
              *(_DWORD *)v367 = 1;
              tinfo_property = 0x100000001LL;
              v369 = 3;
              *(_QWORD *)&v367[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v189), _mm_cvtsi32_si128(v190)).m128i_u64[0];
              sub_1D38D0(a1, 30, (unsigned int)v367, (unsigned int)&v366, (unsigned int)&tinfo_property, v191);
              sub_11A960((__int64)&tinfo_property);
              sub_11A960((__int64)v367);
              sub_11A960((__int64)&v366);
              v192 = sub_3F02C0((__int64)&v370);
              v17 = 32;
              sub_3F0BC0(a1, 32, v192, (unsigned __int8)v364, 0);
              goto LABEL_165;
            case 129:
            case 213:
            case 330:
              goto LABEL_75;
            case 130:
              v198 = sub_3F02C0((__int64)&v370);
              v199 = sub_3F02C0((__int64)&v370);
              v17 = 7;
              sub_3ED260(a1, 7u, (unsigned __int8)v364, v199, 0x3BEA45E214ADDC55LL, v198, 0);
              goto LABEL_75;
            case 131:
              v195 = sub_3F02C0((__int64)&v370);
              v196 = sub_3F02C0((__int64)&v370);
              v197 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x13u, (unsigned __int8)v364, v197, v196, v195, 0);
              goto LABEL_219;
            case 134:
              v17 = (unsigned int)sub_3F02C0((__int64)&v370);
              sub_3EE380(a1);
              goto LABEL_75;
            case 136:
              v17 = (unsigned __int8)v364;
              sub_3EE740(a1, v364);
              goto LABEL_75;
            case 143:
              v207 = sub_3F02C0((__int64)&v370);
              v17 = v207;
              sub_3EE1E0(a1, v207, v364);
              goto LABEL_75;
            case 145:
              v17 = (unsigned __int8)v364;
              sub_3EE4C0(a1, v364);
              goto LABEL_75;
            case 154:
              v205 = sub_3F02C0((__int64)&v372);
              v206 = sub_3F02C0((__int64)&v370);
              v17 = 27;
              sub_3FC720(a1, 27, v364, v206, v205);
              goto LABEL_75;
            case 155:
              v203 = sub_3F02C0((__int64)&v372);
              v204 = sub_3F02C0((__int64)&v370);
              v17 = 28;
              sub_3FC720(a1, 28, v364, v204, v203);
              goto LABEL_75;
            case 159:
            case 160:
              sub_3F2700(a1);
              goto LABEL_75;
            case 161:
              sub_3F0CC0(a1, 0, 1, 9);
              sub_3F0CC0(a1, 4, 4, 9);
              sub_3F0CC0(a1, 1, 64, 9);
              v17 = 2;
              sub_3F0CC0(a1, 2, 128, 9);
              goto LABEL_75;
            case 162:
            case 164:
              v201 = sub_3F02C0((__int64)&v372);
              v202 = sub_3F02C0((__int64)&v370);
              v17 = 22;
              sub_3FC810(a1, 22, v364, v202, v201);
              goto LABEL_75;
            case 163:
              v321 = sub_3F02C0((__int64)&v372);
              v322 = sub_3F02C0((__int64)&v370);
              v17 = 24;
              sub_3FC810(a1, 24, v364, v322, v321);
              goto LABEL_75;
            case 165:
              v319 = sub_3F02C0((__int64)&v372);
              v320 = sub_3F02C0((__int64)&v370);
              v17 = 23;
              sub_3FC810(a1, 23, v364, v320, v319);
              goto LABEL_75;
            case 166:
              sub_1D3CC0(a1, 0, (unsigned __int8)v364, 0, (unsigned int)v350, 0);
              v313 = *(_BYTE *)(a1 + 65);
              if ( *(_BYTE *)(a1 + 105) == v313 && v313 == 1 && *(_WORD *)(a1 + 70) == *(_WORD *)(a1 + 110) )
              {
                sub_3ED260(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v331 = sub_3F02C0((__int64)&v370);
                v346 = v332;
                sub_3ED260(a1, 5u, (unsigned __int8)v364, v350, 0x3BEA45E214ADDC55LL, v331, 0);
                v17 = v346;
              }
              else
              {
                v314 = sub_3F02C0((__int64)&v372);
                sub_3ED260(a1, 0xCu, (unsigned __int8)v364, v350, v314, v350, 0);
                v315 = sub_3F02C0((__int64)&v370);
                sub_3ED260(a1, 0x23u, (unsigned __int8)v364, v315, v350, 0, 0);
                v316 = sub_3F02C0((__int64)&v370);
                sub_3ED260(a1, 0x1Eu, (unsigned __int8)v364, v316, v350, 3, 0);
                v317 = sub_3F02C0((__int64)&v370);
                v318 = sub_3F02C0((__int64)&v370);
                v17 = 13;
                sub_3ED260(a1, 0xDu, (unsigned __int8)v364, v318, v350, v317, 0);
              }
              goto LABEL_165;
            case 168:
            case 181:
              sub_3ED260(a1, 0x13u, 0, 0, 1, v16, 0);
              goto LABEL_379;
            case 169:
            case 180:
            case 182:
              v227 = (int)sub_3F02C0((__int64)&v370);
LABEL_301:
              v228 = 0;
              goto LABEL_302;
            case 170:
            case 172:
            case 179:
              v312 = sub_3F02C0((__int64)&v370);
              v129 = 0;
              v128 = v312;
              goto LABEL_227;
            case 171:
            case 178:
              v311 = sub_3F02C0((__int64)&v370);
              v307 = 0;
              v308 = v311;
              goto LABEL_376;
            case 173:
            case 197:
              v310 = sub_3F02C0((__int64)&v370);
              v129 = 1;
              v128 = v310;
              goto LABEL_227;
            case 174:
            case 187:
              sub_3ED260(a1, 0x15u, 0, 2, 3, v16, 0);
              sub_3ED260(a1, 0x13u, 0, v16, 1, v16, 0);
              goto LABEL_379;
            case 175:
            case 186:
              sub_3ED260(a1, 0x15u, 0, 2, 3, v16, 0);
LABEL_379:
              v227 = (int)sub_3F02C0((__int64)&v370);
              v228 = v16;
              goto LABEL_302;
            case 176:
            case 185:
              v309 = sub_3F02C0((__int64)&v370);
              v17 = 21;
              sub_3ED260(a1, 0x15u, 0, 2, 3, v309, 0);
              goto LABEL_75;
            case 177:
            case 184:
              sub_3ED260(a1, 0x15u, 0, 2, 3, v16, 0);
              v306 = sub_3F02C0((__int64)&v370);
              v307 = v16;
              v308 = v306;
LABEL_376:
              v17 = 19;
              sub_3ED260(a1, 0x13u, 0, v307, 1, v308, 0);
              goto LABEL_75;
            case 183:
            case 191:
              v305 = sub_3F02C0((__int64)&v370);
              v228 = 1;
              v227 = v305;
              goto LABEL_302;
            case 188:
              v304 = sub_3F02C0((__int64)&v370);
              v228 = 3;
              v227 = v304;
              goto LABEL_302;
            case 189:
            case 195:
              v303 = sub_3F02C0((__int64)&v370);
              v228 = 4;
              v227 = v303;
              goto LABEL_302;
            case 190:
              v302 = sub_3F02C0((__int64)&v370);
              v228 = 2;
              v227 = v302;
LABEL_302:
              v17 = 6;
              sub_3ED260(a1, 6u, 0, v228, 0x3BEA45E214ADDC55LL, v227, 0);
              goto LABEL_75;
            case 192:
              v301 = sub_3F02C0((__int64)&v370);
              v129 = 3;
              v128 = v301;
              goto LABEL_227;
            case 193:
            case 194:
              v300 = sub_3F02C0((__int64)&v370);
              v129 = 4;
              v128 = v300;
              goto LABEL_227;
            case 196:
              v299 = sub_3F02C0((__int64)&v370);
              v129 = 2;
              v128 = v299;
              goto LABEL_227;
            case 200:
              v297 = sub_3F02C0((__int64)&v372);
              v298 = sub_3F02C0((__int64)&v370);
              v17 = (unsigned __int8)v364;
              v296 = sub_3F1430(a1, (unsigned __int8)v364, v298, v297, 0);
              goto LABEL_365;
            case 201:
              v294 = sub_3F02C0((__int64)&v372);
              v295 = sub_3F02C0((__int64)&v370);
              v17 = (unsigned __int8)v364;
              v296 = sub_3F1430(a1, (unsigned __int8)v364, v295, v294, 1u);
LABEL_365:
              v370.m128i_i32[3] = v296;
              v371 = 1;
              if ( (v11 & 4) != 0 )
                goto LABEL_154;
              goto LABEL_76;
            case 204:
              v208 = 0;
              v209 = 1;
              goto LABEL_285;
            case 205:
              v208 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
              v209 = 1;
LABEL_285:
              v17 = 3;
              sub_3ED260(a1, 3u, 0, v209, 0x3BEA45E214ADDC55LL, v208, 0);
              goto LABEL_75;
            case 209:
              v291 = sub_3F02C0((__int64)&v372);
              v292 = sub_3F02C0((__int64)&v370);
              v364 = (unsigned __int8)v364;
              v293 = sub_3FECC0(a1, v364, v292, v291);
              if ( v293 == 1 )
                return 0;
              if ( v293 == -1 )
                return 4294967294LL;
LABEL_262:
              v176 = sub_3F02C0((__int64)&v372);
              v177 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x23u, v364, v177, v176, 0, 0);
              v178 = sub_3F02C0((__int64)&v372);
              v179 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x1Eu, v364, v179, v178, 3, 0);
              if ( *(_WORD *)(a1 + 48) == 209
                && *(_BYTE *)(a1 + 65) == 1
                && *(_WORD *)(a1 + 70) == 4
                && *(_BYTE *)(a1 + 105) == 1 )
              {
                v200 = sub_3F02C0((__int64)&v372);
                v17 = v200;
                sub_3FD9C0(a1, v200);
              }
              else
              {
                v180 = sub_3F02C0((__int64)&v370);
                v181 = sub_3F02C0((__int64)&v372);
                v182 = sub_3F02C0((__int64)&v370);
                v17 = 13;
                sub_3ED260(a1, 0xDu, v364, v182, v181, v180, 0);
              }
              goto LABEL_165;
            case 210:
              v289 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 4u, (unsigned __int8)v364, v289, 0x3BEA45E214ADDC55LL, (int)v16, 0);
              v370.m128i_i32[3] = v16;
              v371 = 1;
              v290 = sub_3F02C0((__int64)&v370);
              v345 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x14u, (unsigned __int8)v364, v345, v290, (int)v16, 0);
              goto LABEL_219;
            case 214:
            case 219:
              if ( *(_BYTE *)(a1 + 105) != 1 && (unsigned __int8)v364 > 1u )
                goto LABEL_63;
              sub_16C780(*(_QWORD *)(a1 + 8) + 1048LL, a1 + 40);
              do
              {
                v281 = *(_QWORD *)(a1 + 832);
                v282 = *(int *)(v281 + 3776);
                v283 = *(_DWORD *)(v281 + 3776);
                if ( v282 > 3 )
                {
                  v283 = 0;
                  v282 = 0;
                }
                *(_DWORD *)(v281 + 3776) = v283 + 1;
                v284 = *(int *)(v281 + 4 * v282 + 3760);
              }
              while ( (unsigned int)sub_3F02C0((__int64)&v370) == (_DWORD)v284
                   || (_DWORD)v284 == (unsigned int)sub_3F02C0((__int64)&v372) );
              v285 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 4u, (unsigned __int8)v364, v285, 0x3BEA45E214ADDC55LL, v284, 0);
              if ( *(_WORD *)(a1 + 48) == 219 )
              {
                v323 = sub_3F02C0((__int64)&v372);
                v324 = sub_3F02C0((__int64)&v370);
                sub_3ED260(a1, 0x19u, (unsigned __int8)v364, v324, v323, 0, 0);
                v325 = sub_3F02C0((__int64)&v372);
                v326 = sub_3F02C0((__int64)&v370);
                sub_3ED260(a1, 0x1Au, (unsigned __int8)v364, v326, v325, 3, 0);
                v327 = sub_3F02C0((__int64)&v370);
                v328 = sub_3F02C0((__int64)&v372);
                v329 = sub_3F02C0((__int64)&v370);
                sub_3ED260(a1, 0xCu, (unsigned __int8)v364, v329, v328, v327, 0);
                v330 = sub_3F02C0((__int64)&v370);
                sub_3F29C0(a1, v330, v364);
              }
              else
              {
                v286 = sub_3F02C0((__int64)&v370);
                v287 = sub_3F02C0((__int64)&v372);
                sub_3ED260(a1, 4u, (unsigned __int8)v364, v287, 0x3BEA45E214ADDC55LL, v286, 0);
              }
              v288 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 4u, (unsigned __int8)v364, v284, 0x3BEA45E214ADDC55LL, v288, 0);
              v17 = v341;
              goto LABEL_75;
            case 216:
              v279 = sub_3F02C0((__int64)&v370);
              v280 = sub_3F02C0((__int64)&v370);
              v344 = sub_3F02C0((__int64)&v372);
              sub_3ED260(a1, 0x15u, (unsigned __int8)v364, v344, v280, v279, 0);
              goto LABEL_219;
            case 253:
            case 254:
            case 255:
            case 256:
              v277 = sub_3F02C0((__int64)&v372);
              v278 = sub_3F02C0((__int64)&v370);
              v17 = v278;
              sub_3EF630(a1, v278, v277);
              goto LABEL_75;
            case 258:
            case 262:
              v275 = sub_3F02C0((__int64)&v370);
              v276 = sub_3F02C0((__int64)&v372);
              sub_1D3BC0(a1, 15, 15, v276, v275, 67);
              goto LABEL_265;
            case 259:
            case 260:
              v272 = sub_3F02C0((__int64)&v372);
              v273 = (unsigned int)sub_3F02C0((__int64)&v370);
              v274 = *(_BYTE *)(a1 + 109);
              if ( v274 == 5 )
                v274 = 15;
              sub_1D3BC0(a1, 15, v274, v273, v272, 67);
              goto LABEL_265;
            case 261:
              sub_16C780(*(_QWORD *)(a1 + 8) + 1048LL, a1 + 40);
              v265 = *(_QWORD *)(a1 + 832);
              v266 = *(int *)(v265 + 3776);
              v267 = *(_DWORD *)(v265 + 3776);
              if ( v266 > 3 )
              {
                v267 = 0;
                v266 = 0;
              }
              *(_DWORD *)(v265 + 3776) = v267 + 1;
              v268 = *(_DWORD *)(v265 + 4 * v266 + 3760);
              v269 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x43u, 15, v269, 0x3BEA45E214ADDC55LL, v268, 0);
              v270 = _mm_load_si128(&v372);
              v271 = v373;
              v372.m128i_i32[3] = v268;
              v373 = 1;
              v371 = v271;
              v370 = v270;
              goto LABEL_265;
            case 263:
            case 264:
            case 604:
              v262 = sub_3F02C0((__int64)&v372);
              v263 = (unsigned int)sub_3F02C0((__int64)&v370);
              v264 = *(_BYTE *)(a1 + 109);
              if ( v264 == 5 )
                v264 = 15;
              sub_1D3BC0(a1, 15, v264, v263, v262, 63);
              goto LABEL_265;
            case 265:
              v255 = _mm_load_si128(&v372);
              v236 = "__FBLD__";
              v371 = v373;
              v370 = v255;
              goto LABEL_315;
            case 266:
              sub_3FE150((_QWORD *)a1, (__int64)&v370, (__int64)&v372);
              LOBYTE(v363) = v11 & 0xF7;
              goto LABEL_265;
            case 267:
            case 268:
            case 269:
              v252 = sub_3F02C0((__int64)&v370);
              v253 = sub_3F02C0((__int64)&v372);
              v254 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x45u, 15, v254, v253, v252, 0);
              goto LABEL_265;
            case 270:
            case 271:
            case 272:
              v248 = sub_3F02C0((__int64)&v370);
              v249 = &v370;
              v250 = sub_3F02C0((__int64)&v372);
              goto LABEL_323;
            case 273:
            case 274:
            case 275:
              v248 = sub_3F02C0((__int64)&v370);
              v249 = &v372;
              v250 = sub_3F02C0((__int64)&v370);
LABEL_323:
              v251 = sub_3F02C0((__int64)v249);
              sub_3ED260(a1, 0x46u, 15, v251, v250, v248, 0);
              goto LABEL_265;
            case 276:
            case 277:
            case 278:
              v245 = sub_3F02C0((__int64)&v370);
              v246 = sub_3F02C0((__int64)&v372);
              v247 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x47u, 15, v247, v246, v245, 0);
              goto LABEL_265;
            case 279:
            case 280:
            case 281:
              v242 = sub_3F02C0((__int64)&v370);
              v243 = &v370;
              v244 = sub_3F02C0((__int64)&v372);
              goto LABEL_319;
            case 282:
            case 283:
            case 284:
              v242 = sub_3F02C0((__int64)&v370);
              v243 = &v372;
              v244 = sub_3F02C0((__int64)&v370);
LABEL_319:
              v343 = sub_3F02C0((__int64)v243);
              sub_3ED260(a1, 0x48u, 15, v343, v244, v242, 0);
              goto LABEL_265;
            case 285:
              v236 = "sqrt";
              goto LABEL_315;
            case 286:
              v239 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              v240 = sub_3F02C0((__int64)&v370);
              v241 = sub_3F02C0((__int64)&v370);
              sub_3FDE90((_QWORD *)a1, (int)"__FSCALE__", v241, v240, v239);
              goto LABEL_265;
            case 287:
              v333 = "__FPREM__";
              goto LABEL_399;
            case 290:
              v236 = "fabs";
              goto LABEL_315;
            case 291:
              v183 = sub_3F02C0((__int64)&v370);
              v184 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x44u, 15, v184, 0x3BEA45E214ADDC55LL, v183, 0);
              goto LABEL_265;
            case 292:
            case 293:
            case 294:
            case 295:
            case 296:
            case 339:
            case 340:
            case 341:
              goto LABEL_74;
            case 297:
              v235 = sub_3F02C0((__int64)&v372);
              sub_3EF6D0(a1, 0, v235);
LABEL_74:
              v29 = sub_3F02C0((__int64)&v372);
              v30 = sub_3F02C0((__int64)&v370);
              v17 = v30;
              sub_3EF560(a1, v30, v29);
              goto LABEL_75;
            case 299:
              v231 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              v232 = sub_3F02C0((__int64)&v370);
              sub_3FDE90((_QWORD *)a1, (int)"tan", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v232, v231, 0xFFFFFFFF);
              goto LABEL_311;
            case 300:
              v259 = sub_3F02C0((__int64)&v370);
              v260 = sub_3F02C0((__int64)&v370) + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL);
              v261 = sub_3F02C0((__int64)&v370);
              sub_3FDE90((_QWORD *)a1, (int)"atan2", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v261, v260, v259);
              goto LABEL_265;
            case 301:
              v236 = "__F2XM1__";
              goto LABEL_315;
            case 302:
              v333 = "__FYL2X__";
              goto LABEL_395;
            case 303:
              v333 = "__FYL2XP1__";
LABEL_395:
              v334 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              v335 = sub_3F02C0((__int64)&v370);
              v336 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              goto LABEL_396;
            case 304:
              v233 = 0;
              goto LABEL_312;
            case 305:
LABEL_311:
              v233 = 1;
              goto LABEL_312;
            case 306:
              v233 = 9;
              goto LABEL_312;
            case 307:
              v233 = 3;
              goto LABEL_312;
            case 308:
              v233 = 5;
              goto LABEL_312;
            case 309:
              v233 = 4;
              goto LABEL_312;
            case 310:
              v233 = 7;
LABEL_312:
              v234 = sub_3F02C0((__int64)&v370);
              sub_3EF6D0(a1, v233, v234);
              goto LABEL_265;
            case 317:
            case 318:
              v258 = sub_3F02C0((__int64)&v370);
              v17 = 4;
              sub_3ED260(a1, 4u, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 444LL), 0x3BEA45E214ADDC55LL, v258, 0);
              goto LABEL_75;
            case 335:
              v333 = "__FPREM1__";
LABEL_399:
              v334 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              v335 = sub_3F02C0((__int64)&v370);
              v336 = sub_3F02C0((__int64)&v370);
LABEL_396:
              sub_3FDE90((_QWORD *)a1, (int)v333, v336, v335, v334);
              goto LABEL_265;
            case 336:
              v256 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3F02C0((__int64)&v370);
              v257 = sub_3F02C0((__int64)&v370);
              sub_3FDE90((_QWORD *)a1, (int)"cos", v257, v256, 0xFFFFFFFF);
              sub_3FDE90((_QWORD *)a1, (int)"sin", v256, v256, 0xFFFFFFFF);
              LOBYTE(v363) = 0;
              goto LABEL_265;
            case 337:
              v236 = "sin";
              goto LABEL_315;
            case 338:
              v236 = "cos";
LABEL_315:
              v237 = sub_3F02C0((__int64)&v370);
              v238 = sub_3F02C0((__int64)&v370);
              sub_3FDE90((_QWORD *)a1, (int)v236, v238, v237, 0xFFFFFFFF);
LABEL_265:
              v185 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 444LL);
              v186 = get_dtype_size();
              v17 = 61;
              sub_1D3790(a1, 61, v186, 346938453, 346938453, v185, 0);
              goto LABEL_75;
            case 342:
              v128 = 8;
              v129 = 0;
LABEL_227:
              v17 = 4;
              sub_3ED260(a1, 4u, 0, v129, 0x3BEA45E214ADDC55LL, v128, 0);
              goto LABEL_75;
            case 745:
              v162 = sub_3F02C0((__int64)&v372);
              v163 = sub_3F02E0(a1, 2, 0);
              sub_3ED260(a1, 7u, (unsigned __int8)v364, v162, 0x3BEA45E214ADDC55LL, v350, 0);
              v164 = sub_3F02C0((__int64)&v370);
              sub_3ED260(a1, 0x14u, (unsigned __int8)v364, v163, v350, v164, 0);
LABEL_219:
              v17 = 9;
              sub_3F0880(a1, 9);
              goto LABEL_165;
            case 752:
              v160 = sub_3F02C0((__int64)&v372);
              v161 = sub_3F02C0((__int64)&v370);
              v17 = v161;
              sub_3F11C0(a1, v161, v160, v364);
              goto LABEL_75;
            case 755:
              v157 = sub_3F02C0((__int64)&v372);
              v158 = sub_3F02E0(a1, 2, 0);
              v159 = sub_3F02C0((__int64)&v370);
              v17 = 1;
              sub_1D40D0(a1, 1, (unsigned __int8)v364, v157, v158, v159);
              goto LABEL_75;
            case 756:
            case 757:
            case 758:
              v168 = sub_3F02C0((__int64)&v372);
              v169 = sub_3F02E0(a1, 2, 0);
              v170 = *(_WORD *)(a1 + 48);
              if ( v170 == 756 )
              {
                v171 = 24;
              }
              else
              {
                v171 = 22;
                if ( v170 == 758 )
                  v171 = 23;
              }
              v172 = sub_3F02C0((__int64)&v370);
              v17 = v171;
              sub_3ED260(a1, v171, (unsigned __int8)v364, v168, v169, v172, 0);
              goto LABEL_75;
            default:
              goto LABEL_63;
          }
LABEL_414:
          BUG();
        }
        v57 = 2101265;
        if ( !_bittest64(&v57, (unsigned int)(v20 - 122)) )
          goto LABEL_49;
        v17 = *(unsigned __int8 *)(a1 + 56);
        if ( (unsigned __int8)(v17 - 33) > 1u )
          goto LABEL_49;
        v17 = *(unsigned __int8 *)(a1 + 65);
        if ( (unsigned __int8)(v17 - 2) <= 2u )
          goto LABEL_63;
        if ( (_WORD)v20 == 122 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) > 2u )
          {
LABEL_191:
            v93 = sub_3F02C0((__int64)&v370);
            v94 = sub_3F02C0((__int64)&v372);
            v95 = (unsigned __int8)v364;
            v96 = v94;
LABEL_192:
            v17 = 4;
            sub_3ED260(a1, 4u, v95, v96, 0x3BEA45E214ADDC55LL, v93, 0);
            goto LABEL_75;
          }
          goto LABEL_63;
        }
        if ( (_WORD)v20 != 126 )
          goto LABEL_49;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          goto LABEL_63;
LABEL_139:
        v58 = sub_3F02C0((__int64)&v370);
        v59 = sub_3F02C0((__int64)&v372);
        v17 = *(unsigned __int8 *)(a1 + 109);
        sub_1D3CC0(a1, v17, (unsigned __int8)v364, v59, v58, 0);
      }
LABEL_75:
      if ( (v363 & 4) == 0 )
      {
LABEL_76:
        if ( (v363 & 8) == 0 )
          return *(unsigned __int8 *)(a1 + 896);
        v66 = 1;
        goto LABEL_158;
      }
      if ( v371 || (v85 = &v370, (unsigned __int8)sub_3F0150((__int64)&v370)) )
      {
LABEL_154:
        v17 = 0;
        v66 = sub_3F0710(a1, 0, v370.m128i_i32[3], 1);
        if ( (v363 & 8) == 0 )
        {
LABEL_155:
          if ( v66 )
            return *(unsigned __int8 *)(a1 + 896);
          return 4294967294LL;
        }
LABEL_158:
        if ( !v373 )
        {
          v85 = &v372;
          if ( !(unsigned __int8)sub_3F0150((__int64)&v372) )
            goto LABEL_179;
        }
        v66 &= sub_3F0710(a1, 1, v372.m128i_i32[3], 1);
        goto LABEL_155;
      }
LABEL_179:
      sub_3E07C0(v85, v17, v86);
    }
    while ( 1 )
    {
      v47 = v46[4];
      v48 = 0;
      v49 = (_QWORD *)v46[3];
      if ( v45 < v47 )
      {
        v49 = (_QWORD *)v46[2];
        v48 = 1;
      }
      if ( !v49 )
        break;
      v46 = v49;
    }
    if ( v48 )
    {
      if ( *(_QWORD **)(v44 + 1024) == v46 )
        goto LABEL_108;
      v352 = *(_QWORD *)(a1 + 40);
      v357 = *(_QWORD *)(a1 + 8);
      v60 = std::_Rb_tree_decrement();
      v45 = v352;
      v44 = v357;
      v47 = *(_QWORD *)(v60 + 32);
    }
    if ( v47 >= v45 )
      goto LABEL_32;
LABEL_108:
    v351 = v44;
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v351 + 1040);
    goto LABEL_32;
  }
LABEL_23:
  if ( (v11 & 2) != 0 )
  {
    if ( v14 != 16 )
    {
      if ( v14 == 18
        && *(_BYTE *)(a1 + 56) == 34
        && *(_BYTE *)(a1 + 65) == 2
        && *(_QWORD *)(a1 + 80) == 16
        && (unsigned __int8)sub_3EE170(a1) )
      {
        return 0;
      }
LABEL_29:
      sub_3F1690(a1);
      v14 = *(_WORD *)(a1 + 48);
      goto LABEL_30;
    }
    v61 = sub_3F2640(a1, v355);
    if ( v61 != -1 )
    {
      v62 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v61);
      v63 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
      v64 = v62;
      v65 = get_dtype_size();
      sub_1D3790(a1, 3, v65, v63, 346938453, v64, 0);
      return *(unsigned __int8 *)(a1 + 896);
    }
    v87 = sub_3F2570(a1, v355, a1 + 64);
    v88 = *(_QWORD *)(a1 + 832);
    v89 = v87;
    v90 = v87;
    v91 = *(__int64 (**)())(*(_QWORD *)v88 + 232LL);
    if ( v91 == sub_3E5770 )
    {
      if ( sub_D3E80() == 1 )
      {
LABEL_184:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
          goto LABEL_189;
        v375 = -1;
        v376 = 0;
        v92 = (unsigned __int64 *)v378;
        v377 = 0;
        v374 = -1;
        do
        {
          *(_WORD *)v92 = 0;
          v92 += 5;
          *((_WORD *)v92 - 19) = 0;
          *((_WORD *)v92 - 18) = 0;
          *((_DWORD *)v92 - 2) = 0;
          *((_WORD *)v92 - 17) = 0;
          *((_OWORD *)v92 - 2) = 0;
          *(v92 - 2) = 0;
        }
        while ( v92 != &v382 );
        if ( !(unsigned int)decode_insn() || (_WORD)v376 != 209 || v378[1] != 1 || v379 != 4 || v380 != 1 || v381 )
LABEL_189:
          sub_3FD9C0(a1, 8u);
        return 0;
      }
    }
    else if ( ((unsigned int (__fastcall *)(__int64, __int64))v91)(v88, v90) != -1 )
    {
      goto LABEL_184;
    }
    if ( (unsigned __int8)sub_3FE910(a1, v89) )
      return *(unsigned __int8 *)(a1 + 896);
    *(_QWORD *)v367 = 0;
    if ( (unsigned __int8)sub_37D6C0(*(_QWORD *)(a1 + 832), v89, v367, 0) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) == 9 )
        *(_DWORD *)(a1 + 892) = sub_404F20((_QWORD *)a1);
      clear_tinfo_t();
    }
    clear_tinfo_t();
    goto LABEL_29;
  }
LABEL_30:
  if ( v14 != 86 )
    goto LABEL_31;
  if ( *(_BYTE *)(a1 + 65) != 7 )
    goto LABEL_31;
  v56 = sub_3F2570(a1, v355, a1 + 64);
  if ( !(unsigned __int8)sub_3FE910(a1, v56) )
    goto LABEL_31;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
    sub_3F2700(a1);
  return 1;
}
