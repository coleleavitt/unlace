__int64 __fastcall sub_40FBC0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v9; // al
  __int64 result; // rax
  int v12; // r12d
  bool v13; // bl
  bool v14; // cl
  char v15; // bl
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r12d
  __int64 v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  char v23; // dl
  unsigned __int16 v24; // ax
  int *v25; // rax
  __int64 v26; // r14
  char v27; // al
  char v28; // al
  int v29; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // r12
  unsigned __int64 v33; // r14
  _QWORD *v34; // rbx
  unsigned __int64 v35; // rdx
  char v36; // cl
  _QWORD *v37; // rax
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  char v42; // al
  __int64 v43; // rcx
  __int16 v44; // dx
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  _QWORD *v47; // r14
  unsigned __int64 v48; // rdx
  char v49; // si
  _QWORD *v50; // rax
  int v51; // eax
  _QWORD *v52; // r12
  _QWORD *v53; // rbx
  unsigned __int64 v54; // rdx
  char v55; // cl
  _QWORD *v56; // rax
  __int64 v57; // rax
  char *v58; // rcx
  int v59; // ebx
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // eax
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // r14
  int v66; // eax
  char v67; // bl
  int dtype_size; // eax
  int v69; // r13d
  int v70; // eax
  int v71; // eax
  int v72; // r13d
  int v73; // eax
  int v74; // r13d
  int v75; // eax
  int v76; // r12d
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rdi
  _QWORD *v80; // r14
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdi
  unsigned __int64 v84; // r14
  __int64 v85; // rsi
  __int64 (*v86)(); // rax
  unsigned __int64 *v87; // rax
  int v88; // ebx
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  double v92; // xmm4_8
  double v93; // xmm5_8
  int v94; // eax
  unsigned __int8 v95; // al
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  int v100; // ecx
  __int64 v101; // rax
  int v102; // ecx
  int v103; // r12d
  int v104; // ebx
  int v105; // eax
  int v106; // r13d
  int v107; // ebx
  int v108; // eax
  unsigned int v109; // eax
  int v110; // eax
  __int64 v111; // r8
  __int32 v112; // r9d
  int v113; // r11d
  signed int v114; // eax
  unsigned __int8 v115; // bl
  int v116; // r12d
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  __int64 v123; // rbx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // ebx
  int v128; // r12d
  int v129; // eax
  int v130; // ebx
  int v131; // eax
  unsigned int v132; // ebx
  unsigned int v133; // r12d
  unsigned int v134; // eax
  int v135; // ebx
  int v136; // eax
  int v137; // r12d
  int v138; // ebx
  int v139; // eax
  __int64 v140; // rbx
  __int64 v141; // rcx
  __int64 v142; // r9
  int v143; // ebx
  int v144; // r13d
  __int16 v145; // ax
  unsigned int v146; // r12d
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // ebx
  int v151; // eax
  int v152; // ebx
  int v153; // eax
  int v154; // ebx
  int v155; // r12d
  int v156; // eax
  int v157; // ebx
  int v158; // eax
  __int64 v159; // rbx
  int v160; // eax
  int v161; // ebx
  int v162; // eax
  int v163; // eax
  int v164; // ebx
  int v165; // eax
  int v166; // r12d
  int v167; // ebx
  int v168; // eax
  int v169; // ebx
  int v170; // eax
  unsigned int v171; // eax
  int v172; // ebx
  int v173; // eax
  signed int v174; // ebx
  signed int v175; // eax
  signed int v176; // ebx
  signed int v177; // eax
  int v178; // eax
  __int64 v179; // r9
  int v180; // ebx
  int v181; // ecx
  char v182; // al
  signed int v183; // ebx
  __int64 v184; // r9
  int v185; // eax
  __int64 v186; // rsi
  __m128i v187; // xmm2
  int v188; // edx
  __m128i v189; // xmm3
  signed int v190; // eax
  int v191; // eax
  int v192; // eax
  __int64 v193; // r9
  int v194; // ebx
  int v195; // eax
  unsigned int v196; // ebx
  int v197; // eax
  unsigned int v198; // ebx
  int v199; // eax
  int v200; // eax
  char *v201; // rbx
  unsigned int v202; // r14d
  unsigned int v203; // eax
  unsigned int v204; // r14d
  unsigned int v205; // ebx
  unsigned int v206; // eax
  int v207; // r14d
  __m128 *v208; // rdi
  int v209; // ebx
  int v210; // r14d
  int v211; // ebx
  int v212; // eax
  int v213; // r14d
  __m128 *v214; // rdi
  int v215; // ebx
  int v216; // eax
  int v217; // r14d
  int v218; // ebx
  int v219; // eax
  unsigned int v220; // ebx
  unsigned int v221; // eax
  int v222; // eax
  unsigned int v223; // r14d
  unsigned int v224; // ebx
  int v225; // eax
  int v226; // ebx
  int v227; // ecx
  unsigned __int8 v228; // al
  __int64 v229; // rdx
  unsigned __int64 v230; // rcx
  int v231; // eax
  __int32 v232; // ebx
  int v233; // eax
  char v234; // al
  int v235; // ebx
  int v236; // ecx
  unsigned __int8 v237; // al
  int v238; // ebx
  int v239; // eax
  int v240; // ebx
  int v241; // eax
  int v242; // r12d
  int v243; // ebx
  __int64 v244; // rdx
  unsigned __int64 v245; // rcx
  int v246; // eax
  __int64 v247; // rbx
  int v248; // eax
  int v249; // r12d
  int v250; // eax
  int v251; // eax
  int v252; // eax
  int v253; // r12d
  int v254; // ebx
  int v255; // eax
  int v256; // eax
  int v257; // ebx
  int v258; // eax
  __int32 v259; // eax
  int v260; // ebx
  int v261; // eax
  int v262; // eax
  int v263; // eax
  int v264; // eax
  int v265; // eax
  int v266; // eax
  int v267; // eax
  int v268; // eax
  int v269; // eax
  int v270; // eax
  int v271; // eax
  int v272; // eax
  int v273; // eax
  int v274; // eax
  char v275; // al
  int v276; // eax
  int v277; // eax
  int v278; // eax
  int v279; // ebx
  int v280; // eax
  int v281; // ebx
  int v282; // eax
  int v283; // ebx
  int v284; // eax
  int v285; // r12d
  int v286; // eax
  int v287; // r12d
  int v288; // eax
  int v289; // r12d
  int v290; // r14d
  int v291; // eax
  int v292; // eax
  int v293; // eax
  const char *v294; // r13
  unsigned int v295; // r12d
  unsigned int v296; // r14d
  unsigned int v297; // eax
  signed int v298; // r12d
  int v299; // ebx
  int v300; // eax
  int v301; // [rsp+8h] [rbp-248h]
  int v302; // [rsp+8h] [rbp-248h]
  int v303; // [rsp+8h] [rbp-248h]
  int v304; // [rsp+8h] [rbp-248h]
  int v305; // [rsp+10h] [rbp-240h]
  int v306; // [rsp+10h] [rbp-240h]
  int v307; // [rsp+10h] [rbp-240h]
  int v308; // [rsp+18h] [rbp-238h]
  __int64 v309; // [rsp+18h] [rbp-238h]
  unsigned __int64 v310; // [rsp+18h] [rbp-238h]
  __int64 v311; // [rsp+18h] [rbp-238h]
  __int64 v312; // [rsp+18h] [rbp-238h]
  __int64 v313; // [rsp+20h] [rbp-230h]
  signed int v314; // [rsp+28h] [rbp-228h]
  __int64 v315; // [rsp+28h] [rbp-228h]
  unsigned __int64 v316; // [rsp+28h] [rbp-228h]
  unsigned __int8 v317; // [rsp+28h] [rbp-228h]
  signed int v318; // [rsp+28h] [rbp-228h]
  signed int v319; // [rsp+30h] [rbp-220h]
  unsigned __int8 dtype_by_size; // [rsp+30h] [rbp-220h]
  __int16 v321; // [rsp+34h] [rbp-21Ch]
  unsigned int v322; // [rsp+38h] [rbp-218h]
  unsigned __int64 v323; // [rsp+38h] [rbp-218h]
  __int128 v324; // [rsp+40h] [rbp-210h] BYREF
  _BYTE v325[12]; // [rsp+50h] [rbp-200h] BYREF
  __int64 tinfo_property; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v327; // [rsp+68h] [rbp-1E8h]
  __m128 v328; // [rsp+70h] [rbp-1E0h] BYREF
  char v329; // [rsp+80h] [rbp-1D0h]
  __m128i v330; // [rsp+90h] [rbp-1C0h] BYREF
  char v331; // [rsp+A0h] [rbp-1B0h]
  __int128 v332; // [rsp+B0h] [rbp-1A0h]
  __int64 v333; // [rsp+C0h] [rbp-190h]
  __int64 v334; // [rsp+C8h] [rbp-188h]
  __int64 v335; // [rsp+D0h] [rbp-180h]
  _BYTE v336[6]; // [rsp+D8h] [rbp-178h] BYREF
  __int16 v337; // [rsp+DEh] [rbp-172h]
  char v338; // [rsp+101h] [rbp-14Fh]
  __int16 v339; // [rsp+106h] [rbp-14Ah]
  unsigned __int64 v340; // [rsp+218h] [rbp-38h] BYREF

  v9 = *(_BYTE *)(a1 + 384);
  v340 = __readfsqword(0x28u);
  if ( v9 )
  {
    if ( v9 != 1 )
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
  v12 = *(unsigned __int16 *)(a1 + 48);
  v13 = (_WORD)v12 == 28;
  v14 = (_WORD)v12 == 207;
  if ( (unsigned __int16)(v12 - 107) <= 0x3Cu )
  {
    v16 = 0xEFFFFFFFFFFDFFFELL;
    v15 = !_bittest64((const __int64 *)&v16, (unsigned int)(v12 - 107)) || v14 || v13;
    if ( v15 )
      return sub_406A00(a1);
  }
  else
  {
    v15 = v14 || v13;
    if ( v15 )
      return sub_406A00(a1);
  }
  if ( (_WORD)v12 == 5 || (_WORD)v12 == 166 )
  {
    v30 = *(_QWORD **)(a1 + 856);
    v31 = &v30[*(_QWORD *)(a1 + 864)];
    if ( v30 != v31 )
    {
      while ( *(_QWORD *)(a1 + 40) != *v30 )
      {
        if ( v31 == ++v30 )
          goto LABEL_11;
      }
      if ( v31 != v30 )
        return 0;
    }
  }
LABEL_11:
  v328.m128_u64[0] = a1;
  v329 = 0;
  v328.m128_u64[1] = 0xFFFFFFFF00000000LL;
  v330.m128i_i64[0] = a1;
  v330.m128i_i64[1] = 0xFFFFFFFF00000001LL;
  v331 = 0;
  LOBYTE(v322) = sub_3FA390(a1, a1 + 64);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v18 = *(_DWORD *)(v17 + 104);
  if ( v12 >= v18 && v12 < *(_DWORD *)(v17 + 108) )
  {
    v19 = *(_DWORD *)(*(_QWORD *)(v17 + 112) + 16LL * (v12 - v18) + 8);
    v321 = v19;
  }
  else
  {
    v321 = 0;
    v19 = 0;
  }
  v20 = getseg();
  if ( v20 && !*(_BYTE *)(v20 + 43) )
  {
    v52 = *(_QWORD **)(a1 + 8);
    v53 = (_QWORD *)v52[127];
    v323 = *(_QWORD *)(a1 + 40);
    if ( !v53 )
    {
      if ( (_QWORD *)v52[128] != v52 + 126 && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v323 )
        return sub_407720(a1, v321, (__int64)&v328, (__int64)&v330, *(double *)a2.m128_u64, a3);
      goto LABEL_123;
    }
    while ( 1 )
    {
      v54 = v53[4];
      v55 = 0;
      v56 = (_QWORD *)v53[3];
      if ( v323 < v54 )
      {
        v56 = (_QWORD *)v53[2];
        v55 = 1;
      }
      if ( !v56 )
        break;
      v53 = v56;
    }
    if ( v55 )
    {
      if ( (_QWORD *)v52[128] == v53 )
        goto LABEL_123;
      v54 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v54 >= v323 )
      return sub_407720(a1, v321, (__int64)&v328, (__int64)&v330, *(double *)a2.m128_u64, a3);
LABEL_123:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v52[130];
    return sub_407720(a1, v321, (__int64)&v328, (__int64)&v330, *(double *)a2.m128_u64, a3);
  }
  if ( *(_BYTE *)(a1 + 56) != 33 || *(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
  {
    v23 = *(_BYTE *)(a1 + 65);
  }
  else
  {
    v42 = getinf();
    v43 = 262;
    v23 = *(_BYTE *)(a1 + 65);
    if ( _bittest64(&v43, v42 & 0xF)
      && (dword_42EDA0[v23 != 2] & v19) != 0
      && *(_BYTE *)(a1 + 40LL * (v23 != 2) + 65) == 2
      && !*(_QWORD *)(a1 + 40LL * (v23 != 2) + 80) )
    {
      return 0;
    }
  }
  v24 = *(_WORD *)(a1 + 48);
  if ( v23 != 1 || *(_WORD *)(a1 + 70) != 5 || (v19 & 4) == 0 )
    goto LABEL_19;
  if ( v24 == 122 )
  {
    if ( *(_BYTE *)(a1 + 105) == 1 )
      goto LABEL_97;
    goto LABEL_174;
  }
  if ( v24 != 92 )
  {
    HIBYTE(v44) = HIBYTE(*(_WORD *)(a1 + 48));
    LOBYTE(v44) = v24 & 0x7F;
    if ( v44 != 6 && v24 != 209 )
    {
LABEL_174:
      v79 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v79 + 112) & 0x10) != 0 )
      {
        v80 = sub_1CE9E0(v79);
        if ( !v80 )
        {
          if ( !under_debugger )
            sub_383060(0xC557u, *(double *)a2.m128_u64);
          goto LABEL_412;
        }
        get_func();
        v81 = v80[2] & 0xFFFFFFFFFFFFFFEFLL;
        v80[2] = v81;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v81;
        update_func();
        v24 = *(_WORD *)(a1 + 48);
      }
LABEL_19:
      v313 = a1 + 24;
      if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      {
        if ( v24 != 159 )
          goto LABEL_108;
        if ( (v19 & 0x10000) == 0 )
          goto LABEL_99;
      }
      else if ( v24 != 752 )
      {
        if ( (v19 & 0x10000) != 0 )
        {
          if ( (unsigned __int16)(v24 - 152) <= 1u )
            goto LABEL_99;
          goto LABEL_23;
        }
LABEL_108:
        if ( v24 != 515 )
        {
          if ( v24 > 0x203u )
          {
            if ( v24 != 604 )
              goto LABEL_99;
          }
          else if ( v24 > 0x100u )
          {
            if ( (unsigned __int16)(v24 - 258) > 0x53u )
              goto LABEL_99;
          }
          else if ( v24 <= 0xF4u )
          {
            goto LABEL_99;
          }
        }
        v51 = sub_40FAA0((_QWORD *)a1, a2, a3, a4, a5, v21, v22, a8, a9);
        *(_DWORD *)(a1 + 892) = v51;
        if ( v51 >= 0 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 314) <= 2u )
          return 0;
        goto LABEL_32;
      }
      if ( (v19 & 2) == 0 )
      {
LABEL_31:
        v15 = 1;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
  }
LABEL_97:
  v313 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 || (v19 & 0x10000) == 0 )
  {
LABEL_99:
    v45 = *(_QWORD *)(a1 + 8);
    v46 = *(_QWORD *)(a1 + 40);
    v47 = *(_QWORD **)(v45 + 1016);
    if ( !v47 )
    {
      v316 = *(_QWORD *)(a1 + 40);
      if ( v45 + 1008 == *(_QWORD *)(v45 + 1024) )
        goto LABEL_107;
      v311 = *(_QWORD *)(a1 + 8);
      v78 = std::_Rb_tree_decrement();
      v45 = v311;
      if ( *(_QWORD *)(v78 + 32) < v316 )
        goto LABEL_107;
LABEL_32:
      v25 = *(int **)(a1 + 832);
      v26 = v25[113];
      v308 = v25[116];
      v314 = v25[114];
      v305 = v25[115];
      v319 = v25[117];
      if ( (v19 & 0x100) != 0 || (v27 = *(_BYTE *)(a1 + 65), v27 == 1) || v27 == 11 )
      {
        sub_3FA580((int *)&v328, 1, 0, *(double *)a2.m128_u64);
      }
      else
      {
        v328.m128_i32[3] = v26;
        v329 = 1;
      }
      if ( (v19 & 0x200) != 0 || (v28 = *(_BYTE *)(a1 + 105), v28 == 1) || v28 == 11 )
      {
        sub_3FA580(v330.m128i_i32, 1, 0, *(double *)a2.m128_u64);
      }
      else
      {
        v331 = 1;
        v330.m128i_i32[3] = v314;
      }
      if ( !v15 && *(int *)(a1 + 892) < 0 || v328.m128_i32[3] == -1 || v330.m128i_i32[3] == -1 )
        goto LABEL_63;
      v29 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v29 > 0x8Fu )
      {
        if ( (unsigned __int16)v29 <= 0x2F6u )
          goto LABEL_49;
        if ( (unsigned __int16)(v29 - 1775) > 1u )
          goto LABEL_63;
      }
      else
      {
        if ( (unsigned __int16)v29 <= 0x79u )
        {
          if ( (_WORD)v29 == 6 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_167:
              v69 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v70 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v71 = sub_409840(a1, v322, v70, v69, *(double *)a2.m128_u64, a3);
              if ( v71 == 1 )
                return 0;
              if ( v71 == -1 )
                return 4294967294LL;
              v72 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v73 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x19u, (unsigned __int8)v322, v73, v72, 0, 0);
              v74 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v75 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x1Au, (unsigned __int8)v322, v75, v74, 3, 0);
              v76 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v77 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0xCu, (unsigned __int8)v322, v77, v76, v308, 0);
              v328.m128_i32[3] = v308;
              v329 = 1;
LABEL_165:
              sub_3FD520(a1, v328.m128_i32[3], v322);
              goto LABEL_75;
            }
          }
          else
          {
            if ( (_WORD)v29 != 44 )
            {
              if ( (unsigned __int16)v29 > 4u )
                goto LABEL_49;
LABEL_63:
              if ( (unsigned __int8)sub_3FD5C0(
                                      a1,
                                      (__int64)&v328,
                                      &v330,
                                      v322,
                                      *(double *)a2.m128_u64,
                                      *(double *)a3.m128_u64,
                                      a4,
                                      a5,
                                      v21,
                                      v22,
                                      a8,
                                      a9) )
                return 0;
              v32 = *(_QWORD **)(a1 + 8);
              v33 = *(_QWORD *)(a1 + 40);
              v34 = (_QWORD *)v32[127];
              if ( v34 )
              {
                while ( 1 )
                {
                  v35 = v34[4];
                  v36 = 0;
                  v37 = (_QWORD *)v34[3];
                  if ( v33 < v35 )
                  {
                    v37 = (_QWORD *)v34[2];
                    v36 = 1;
                  }
                  if ( !v37 )
                    break;
                  v34 = v37;
                }
                if ( !v36 )
                  goto LABEL_71;
              }
              else
              {
                v34 = v32 + 126;
              }
              if ( v34 == (_QWORD *)v32[128] )
                goto LABEL_72;
              v35 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_71:
              if ( v35 >= v33 )
                return sub_407720(a1, v321, (__int64)&v328, (__int64)&v330, *(double *)a2.m128_u64, a3);
LABEL_72:
              *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
              std::_Rb_tree_insert_and_rebalance();
              ++v32[130];
              return sub_407720(a1, v321, (__int64)&v328, (__int64)&v330, *(double *)a2.m128_u64, a3);
            }
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_163:
              v324 = 0xFFFFFFFF00000000LL;
              dtype_size = get_dtype_size();
              sub_120A10((__int64)&v324, *(_QWORD *)(a1 + 832), 1, dtype_size, -1, 0);
              a2.m128_u64[0] = _mm_unpacklo_epi32(
                                 _mm_cvtsi32_si128(DWORD1(v324)),
                                 _mm_cvtsi32_si128(sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3))).m128i_u64[0];
              *(_DWORD *)v325 = 1;
              tinfo_property = 0x100000001LL;
              v327 = 3;
              *(_QWORD *)&v325[4] = a2.m128_u64[0];
              sub_1D6450(a1, 26, (unsigned __int8 *)&v324, v325, (unsigned __int8 *)&tinfo_property);
              sub_1D6450(a1, 12, (unsigned __int8 *)&v324, v325, v325);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v325);
              sub_11CDA0((__int64)&v324);
LABEL_164:
              if ( !v329 && !(unsigned __int8)sub_3FACB0((__int64)&v328, *(double *)a2.m128_u64, a3) )
                goto LABEL_178;
              goto LABEL_165;
            }
          }
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
            goto LABEL_63;
LABEL_49:
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 5:
              v127 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v128 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v129 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_1D6910(a1, v322, v129, v128, v127, v308, v305);
              goto LABEL_164;
            case 6:
              goto LABEL_167;
            case 7:
              v103 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v104 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v105 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v322, v105, v104, v103, 0);
              goto LABEL_218;
            case 0x10:
            case 0x56:
            case 0x59:
              if ( !(unsigned __int8)sub_1D61C0(a1) )
              {
                if ( *(_BYTE *)(a1 + 65) == 7 )
                {
                  v96 = *(_QWORD *)(a1 + 800);
                  tinfo_property = 0xFFFFFFFF00000000LL;
                  v97 = *(_QWORD *)(*(_QWORD *)(v96 + 24) + 16LL);
                  v98 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                  if ( v98 != v97 )
                  {
                    if ( v98 == -1 )
                      v97 = -1;
                    else
                      v97 &= v98;
                  }
                  v99 = *(_QWORD *)(a1 + 832);
                  LOBYTE(tinfo_property) = 6;
                  v100 = *(_DWORD *)(v99 + 84);
                  v101 = 0;
                  v102 = 8 * v100;
                  if ( (unsigned __int64)v102 <= 0x3F )
                    v101 = 1LL << v102;
                  v327 = v97 & (v101 - 1);
                  sub_1D6450(a1, 55, (unsigned __int8 *)&tinfo_property, nullptr, nullptr);
                  sub_11CDA0((__int64)&tinfo_property);
                }
                else
                {
                  v298 = sub_3EBC60(*(_DWORD *)(a1 + 52));
                  v299 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                  v300 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                  sub_3F7E20(
                    a1,
                    0x36u,
                    (unsigned __int8)v322,
                    0x3BEA45E214ADDC55LL,
                    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + v300,
                    v299,
                    v298);
                }
              }
              goto LABEL_75;
            case 0x11:
            case 0x57:
              if ( !v329 )
                sub_3FA580((int *)&v328, 0, 0, *(double *)a2.m128_u64);
              v185 = get_dtype_size();
              v186 = *(_QWORD *)(a1 + 832);
              v187 = _mm_cvtsi32_si128(v319);
              v188 = 4;
              v189 = _mm_cvtsi32_si128(v314);
              v306 = v185;
              a2 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(v186 + 80));
              if ( v185 != 6 )
                v188 = v185;
              LODWORD(v324) = 1;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v327 = 0;
              *(_DWORD *)v325 = 1;
              *(_QWORD *)((char *)&v324 + 4) = _mm_unpacklo_epi32((__m128i)a2, v187).m128i_u64[0];
              a3 = (__m128)_mm_unpacklo_epi32((__m128i)a2, v189);
              *(_QWORD *)&v325[4] = a3.m128_u64[0];
              sub_120A10((__int64)&tinfo_property, v186, v188, _mm_cvtsi128_si32((__m128i)a2), -1, 0);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, (unsigned __int8 *)&v324, v325);
              v190 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              v312 = v314;
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v314, v314, v190);
              if ( v314 != (unsigned int)sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3) )
              {
                if ( (int)sub_3ECD50(v313) > v306 )
                {
                  v317 = *(_BYTE *)(a1 + 69);
                  dtype_by_size = get_dtype_by_size();
                  v307 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                  v191 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                  sub_1D6840(a1, v317, dtype_by_size, v191, v307, 0);
                }
                v318 = sub_3ECD50(v313);
                v192 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0x36u, (unsigned __int8)v322, 0x3BEA45E214ADDC55LL, v312, v192, v318);
                sub_11CDA0((__int64)&tinfo_property);
                sub_11CDA0((__int64)v325);
                sub_11CDA0((__int64)&v324);
                goto LABEL_75;
              }
              if ( !under_debugger )
                sub_383060(0xC7C6u, *(double *)a2.m128_u64);
              return result;
            case 0x12:
            case 0x58:
              v183 = sub_3ECD50(v313);
              v184 = (int)sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(
                a1,
                0x36u,
                (unsigned __int8)v322,
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
                v184,
                v183);
              goto LABEL_75;
            case 0x13:
            case 0x14:
            case 0x15:
              v180 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v181 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              if ( (_BYTE)v322 )
              {
                if ( (_BYTE)v322 == 1 )
                  v182 = 2;
                else
                  v182 = ((_BYTE)v322 != 2) + 7;
              }
              else
              {
                v182 = 1;
              }
              sub_1D6840(a1, (unsigned __int8)v322, (unsigned int)v182, v181, v180, 1u);
              goto LABEL_75;
            case 0x16:
              v179 = 0;
              goto LABEL_283;
            case 0x17:
              v179 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
LABEL_283:
              sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v179, 0);
              goto LABEL_75;
            case 0x1A:
              v193 = 0;
              goto LABEL_299;
            case 0x1B:
              v149 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v322 = (unsigned __int8)v322;
              sub_3F7E20(a1, 4u, (unsigned __int8)v322, v149, 0x3BEA45E214ADDC55LL, (int)v26, 0);
              v328.m128_i32[3] = v26;
              v329 = 1;
              goto LABEL_261;
            case 0x1D:
            case 0x1E:
            case 0x1F:
              v148 = get_dtype_size();
              *(_DWORD *)v325 = 1;
              *(_DWORD *)&v325[4] = v148;
              *(_DWORD *)&v325[8] = 8;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v327 = 0;
              sub_1252A0((__int64)&tinfo_property, 8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL), v148);
              sub_1D6450(a1, 8, v325, nullptr, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v325);
              goto LABEL_75;
            case 0x22:
              v324 = 0xFFFFFFFF00000000LL;
              v126 = get_dtype_size();
              sub_120A10((__int64)&v324, *(_QWORD *)(a1 + 832), 1, v126, -1, 0);
              a2.m128_u64[0] = _mm_unpacklo_epi32(
                                 _mm_cvtsi32_si128(DWORD1(v324)),
                                 _mm_cvtsi32_si128(sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3))).m128i_u64[0];
              *(_DWORD *)v325 = 1;
              tinfo_property = 0x100000001LL;
              v327 = 3;
              *(_QWORD *)&v325[4] = a2.m128_u64[0];
              sub_1D6450(a1, 30, v325, (unsigned __int8 *)&v324, (unsigned __int8 *)&tinfo_property);
              sub_1D6450(a1, 13, v325, (unsigned __int8 *)&v324, v325);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v325);
              sub_11CDA0((__int64)&v324);
              goto LABEL_164;
            case 0x23:
              v125 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3FB450(a1, v125, v322, 0);
              goto LABEL_75;
            case 0x24:
            case 0x25:
            case 0x26:
              sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL), v322);
              if ( *(_QWORD *)(a1 + 112) )
                return 4294967294LL;
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v322,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v123 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
              v124 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0xDu, (unsigned __int8)v322, *(int *)(*(_QWORD *)(a1 + 832) + 60LL), v124, v123, 0);
              goto LABEL_75;
            case 0x29:
              v122 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3FB450(a1, v122, v322, 1u);
              goto LABEL_75;
            case 0x2A:
              v130 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v131 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FB8C0(a1, 1u, v131, v130, v322);
              goto LABEL_75;
            case 0x2C:
              goto LABEL_163;
            case 0x35:
            case 0x45:
            case 0xE5:
            case 0xFB:
              v140 = v308;
              v141 = 0;
              v142 = v308;
              goto LABEL_249;
            case 0x36:
            case 0x44:
            case 0x46:
            case 0xEC:
            case 0xF9:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v308, 0);
              goto LABEL_81;
            case 0x37:
            case 0x39:
            case 0x43:
            case 0xE6:
            case 0xF5:
              v41 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC4D0(a1, 0, v41, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x38:
            case 0x42:
            case 0xE7:
            case 0xF7:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v308, 0);
              goto LABEL_81;
            case 0x3A:
            case 0x3B:
            case 0x3C:
              v95 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              sub_3FB720(a1, 33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v95, v308);
              goto LABEL_81;
            case 0x3D:
            case 0x55:
            case 0xF4:
            case 0xF6:
              v94 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC4D0(a1, 1, v94, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x3E:
            case 0x4B:
            case 0xE8:
              v140 = v308;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v308, 0);
              v142 = v308;
              v141 = v308;
LABEL_249:
              sub_3F7E20(a1, 0x13u, 0, v141, 1, v142, 0);
              goto LABEL_250;
            case 0x3F:
            case 0x4A:
            case 0xE9:
              v140 = v308;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v308, 0);
LABEL_250:
              sub_3F7E20(a1, 6u, 0, v140, 0x3BEA45E214ADDC55LL, v140, 0);
              goto LABEL_81;
            case 0x40:
            case 0x49:
            case 0xEA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v308, 0);
              goto LABEL_81;
            case 0x41:
            case 0x48:
            case 0xEB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v308, 0);
              sub_3F7E20(a1, 0x13u, 0, v308, 1, v308, 0);
              goto LABEL_81;
            case 0x47:
            case 0x4F:
            case 0xF0:
            case 0xFA:
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v308, 0);
              goto LABEL_81;
            case 0x4C:
            case 0xED:
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v308, 0);
              goto LABEL_81;
            case 0x4D:
            case 0x53:
            case 0xEE:
            case 0xFC:
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v308, 0);
              goto LABEL_81;
            case 0x4E:
            case 0xEF:
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v308, 0);
LABEL_81:
              if ( !v329 && !(unsigned __int8)sub_3FACB0((__int64)&v328, *(double *)a2.m128_u64, a3) )
                goto LABEL_178;
              sub_3FC4D0(a1, v308, v328.m128_i32[3], *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x50:
            case 0xF1:
              v119 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC4D0(a1, 3, v119, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x51:
            case 0x52:
            case 0xF2:
            case 0xF8:
              v118 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC4D0(a1, 4, v118, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x54:
            case 0xF3:
              v120 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC4D0(a1, 2, v120, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x5A:
              sub_3F7E20(a1, 4u, 0, *(int *)(*(_QWORD *)(a1 + 832) + 524LL), 0x3BEA45E214ADDC55LL, 9, 0);
              goto LABEL_75;
            case 0x5C:
              v115 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              if ( v115 < (unsigned __int8)v322 )
              {
                v116 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                v117 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                sub_1D6840(a1, v115, (unsigned __int8)v322, v117, v116, 0);
                goto LABEL_75;
              }
              v88 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v121 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v90 = (unsigned int)(char)v322;
              v91 = v121;
              goto LABEL_191;
            case 0x5D:
            case 0x5E:
            case 0x5F:
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v322,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              sub_3F8EE0(a1);
              goto LABEL_75;
            case 0x63:
              v106 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL);
              goto LABEL_220;
            case 0x65:
              v106 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 52LL);
              goto LABEL_220;
            case 0x66:
              v106 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
              goto LABEL_220;
            case 0x67:
              v106 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL);
LABEL_220:
              v107 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v108 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v322, v108, 0x3BEA45E214ADDC55LL, v107, 0);
              v109 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              *(_DWORD *)v325 = 1;
              v327 = 0;
              a2.m128_u64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v109), _mm_cvtsi32_si128(v319)).m128i_u64[0];
              tinfo_property = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v325[4] = a2.m128_u64[0];
              v110 = sub_3ECD50(v313);
              sub_120A10((__int64)&tinfo_property, *(_QWORD *)(a1 + 832), v110, v113, v111, v112);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, v325, v325);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v325);
              v114 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v319, v106, v114);
              goto LABEL_75;
            case 0x6C:
            case 0x6D:
            case 0x6E:
            case 0x6F:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
              v40 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FC800(a1, v40, *(double *)a2.m128_u64, a3);
              goto LABEL_75;
            case 0x7A:
              goto LABEL_190;
            case 0x7D:
            case 0x252:
              v194 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v195 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v322, v195, v194, 1u);
              goto LABEL_75;
            case 0x7E:
              goto LABEL_138;
            case 0x7F:
              v164 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v165 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FB8C0(a1, 0, v165, v164, v322);
              goto LABEL_75;
            case 0x80:
              v161 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v301 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 5u, (unsigned __int8)v322, v301, 0x3BEA45E214ADDC55LL, v161, 0);
              v324 = 0xFFFFFFFF00000000LL;
              v162 = get_dtype_size();
              sub_120A10((__int64)&v324, *(_QWORD *)(a1 + 832), 1, v162, -1, 0);
              a2.m128_u64[0] = _mm_unpacklo_epi32(
                                 _mm_cvtsi32_si128(DWORD1(v324)),
                                 _mm_cvtsi32_si128(sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3))).m128i_u64[0];
              *(_DWORD *)v325 = 1;
              tinfo_property = 0x100000001LL;
              v327 = 3;
              *(_QWORD *)&v325[4] = a2.m128_u64[0];
              sub_1D6450(a1, 30, v325, (unsigned __int8 *)&v324, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v325);
              sub_11CDA0((__int64)&v324);
              v163 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FB720(a1, 32, v163, (unsigned __int8)v322, 0);
              goto LABEL_164;
            case 0x81:
            case 0xD5:
            case 0x14A:
              goto LABEL_75;
            case 0x82:
              v169 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v170 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 7u, (unsigned __int8)v322, v170, 0x3BEA45E214ADDC55LL, v169, 0);
              goto LABEL_75;
            case 0x83:
              v166 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v167 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v168 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x13u, (unsigned __int8)v322, v168, v167, v166, 0);
              goto LABEL_218;
            case 0x86:
              sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F8EE0(a1);
              goto LABEL_75;
            case 0x88:
              sub_3F92A0(a1, v322);
              goto LABEL_75;
            case 0x8F:
              v178 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F8D40(a1, v178, v322);
              goto LABEL_75;
            case 0x91:
              sub_3F9020(a1, v322);
              goto LABEL_75;
            case 0x9A:
              v176 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v177 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_4072A0(a1, 0x1Bu, v322, v177, v176);
              goto LABEL_75;
            case 0x9B:
              v174 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v175 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_4072A0(a1, 0x1Cu, v322, v175, v174);
              goto LABEL_75;
            case 0x9F:
            case 0xA0:
              sub_3FD260(a1);
              goto LABEL_75;
            case 0xA1:
              sub_3FB820(a1, 0, 1, 9);
              sub_3FB820(a1, 4, 4, 9);
              sub_3FB820(a1, 1, 64, 9);
              sub_3FB820(a1, 2, 128, 9);
              goto LABEL_75;
            case 0xA2:
            case 0xA4:
              v172 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v173 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_407390(a1, 0x16u, v322, v173, v172);
              goto LABEL_75;
            case 0xA3:
              v283 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v284 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_407390(a1, 0x18u, v322, v284, v283);
              goto LABEL_75;
            case 0xA5:
              v281 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v282 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_407390(a1, 0x17u, v322, v282, v281);
              goto LABEL_75;
            case 0xA6:
              sub_1D6840(a1, 0, (unsigned __int8)v322, 0, v308, 0);
              v275 = *(_BYTE *)(a1 + 65);
              if ( *(_BYTE *)(a1 + 105) == v275 && v275 == 1 && *(_WORD *)(a1 + 70) == *(_WORD *)(a1 + 110) )
              {
                sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v293 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 5u, (unsigned __int8)v322, v308, 0x3BEA45E214ADDC55LL, v293, 0);
              }
              else
              {
                v276 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v322, v308, v276, v308, 0);
                v277 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0x23u, (unsigned __int8)v322, v277, v308, 0, 0);
                v278 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0x1Eu, (unsigned __int8)v322, v278, v308, 3, 0);
                v279 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                v280 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0xDu, (unsigned __int8)v322, v280, v308, v279, 0);
              }
              goto LABEL_164;
            case 0xA8:
            case 0xB5:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v26, 0);
              goto LABEL_377;
            case 0xA9:
            case 0xB4:
            case 0xB6:
              v193 = (int)sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
LABEL_299:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v193, 0);
              goto LABEL_75;
            case 0xAA:
            case 0xAC:
            case 0xB3:
              v274 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, v274, 0);
              goto LABEL_75;
            case 0xAB:
            case 0xB2:
              v273 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v273, 0);
              goto LABEL_75;
            case 0xAD:
            case 0xC5:
              v272 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 0, 1, 0x3BEA45E214ADDC55LL, v272, 0);
              goto LABEL_75;
            case 0xAE:
            case 0xBB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v26, 0);
              sub_3F7E20(a1, 0x13u, 0, v26, 1, v26, 0);
              goto LABEL_377;
            case 0xAF:
            case 0xBA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v26, 0);
LABEL_377:
              v271 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 6u, 0, v26, 0x3BEA45E214ADDC55LL, v271, 0);
              goto LABEL_75;
            case 0xB0:
            case 0xB9:
              v270 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v270, 0);
              goto LABEL_75;
            case 0xB1:
            case 0xB8:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v26, 0);
              v269 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x13u, 0, v26, 1, v269, 0);
              goto LABEL_75;
            case 0xB7:
            case 0xBF:
              v268 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v268, 0);
              goto LABEL_75;
            case 0xBC:
              v267 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v267, 0);
              goto LABEL_75;
            case 0xBD:
            case 0xC3:
              v266 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v266, 0);
              goto LABEL_75;
            case 0xBE:
              v265 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v265, 0);
              goto LABEL_75;
            case 0xC0:
              v264 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 0, 3, 0x3BEA45E214ADDC55LL, v264, 0);
              goto LABEL_75;
            case 0xC1:
            case 0xC2:
              v263 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 0, 4, 0x3BEA45E214ADDC55LL, v263, 0);
              goto LABEL_75;
            case 0xC4:
              v262 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 0, 2, 0x3BEA45E214ADDC55LL, v262, 0);
              goto LABEL_75;
            case 0xC8:
              v260 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v261 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v259 = sub_3FBF90(a1, (unsigned __int8)v322, v261, v260, 0);
              goto LABEL_363;
            case 0xC9:
              v257 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v258 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v259 = sub_3FBF90(a1, (unsigned __int8)v322, v258, v257, 1u);
LABEL_363:
              v328.m128_i32[3] = v259;
              v329 = 1;
              if ( (v19 & 4) != 0 )
                goto LABEL_153;
              goto LABEL_76;
            case 0xCC:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, 0, 0);
              goto LABEL_75;
            case 0xCD:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 700LL), 0);
              goto LABEL_75;
            case 0xD1:
              v254 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v255 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v322 = (unsigned __int8)v322;
              v256 = sub_409840(a1, v322, v255, v254, *(double *)a2.m128_u64, a3);
              if ( v256 == 1 )
                return 0;
              if ( v256 == -1 )
                return 4294967294LL;
LABEL_261:
              v150 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v151 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x23u, v322, v151, v150, 0, 0);
              v152 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v153 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x1Eu, v322, v153, v152, 3, 0);
              if ( *(_WORD *)(a1 + 48) == 209
                && *(_BYTE *)(a1 + 65) == 1
                && *(_WORD *)(a1 + 70) == 4
                && *(_BYTE *)(a1 + 105) == 1 )
              {
                v171 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                sub_408540(a1, v171);
              }
              else
              {
                v154 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                v155 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                v156 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0xDu, v322, v156, v155, v154, 0);
              }
              goto LABEL_164;
            case 0xD2:
              v252 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v322, v252, 0x3BEA45E214ADDC55LL, (int)v26, 0);
              v328.m128_i32[3] = v26;
              v329 = 1;
              v253 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v304 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v322, v304, v253, (int)v26, 0);
              goto LABEL_218;
            case 0xD6:
            case 0xDB:
              if ( *(_BYTE *)(a1 + 105) != 1 && (unsigned __int8)v322 > 1u )
                goto LABEL_63;
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              do
              {
                v244 = *(_QWORD *)(a1 + 832);
                v245 = *(int *)(v244 + 3776);
                v246 = *(_DWORD *)(v244 + 3776);
                if ( v245 > 3 )
                {
                  v246 = 0;
                  v245 = 0;
                }
                *(_DWORD *)(v244 + 3776) = v246 + 1;
                v247 = *(int *)(v244 + 4 * v245 + 3760);
              }
              while ( (unsigned int)sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3) == (_DWORD)v247
                   || (_DWORD)v247 == (unsigned int)sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3) );
              v248 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v322, v248, 0x3BEA45E214ADDC55LL, v247, 0);
              if ( *(_WORD *)(a1 + 48) == 219 )
              {
                v285 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                v286 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0x19u, (unsigned __int8)v322, v286, v285, 0, 0);
                v287 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                v288 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0x1Au, (unsigned __int8)v322, v288, v287, 3, 0);
                v289 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                v290 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                v291 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v322, v291, v290, v289, 0);
                v292 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                sub_3FD520(a1, v292, v322);
              }
              else
              {
                v249 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
                v250 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
                sub_3F7E20(a1, 4u, (unsigned __int8)v322, v250, 0x3BEA45E214ADDC55LL, v249, 0);
              }
              v251 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v322, v247, 0x3BEA45E214ADDC55LL, v251, 0);
              goto LABEL_75;
            case 0xD8:
              v242 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v243 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v303 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x15u, (unsigned __int8)v322, v303, v243, v242, 0);
              goto LABEL_218;
            case 0xFD:
            case 0xFE:
            case 0xFF:
            case 0x100:
              v240 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v241 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FA190(a1, v241, v240);
              goto LABEL_75;
            case 0x102:
            case 0x106:
              v238 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v239 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_1D6740(a1, 15, 15, v239, v238, 67);
              goto LABEL_264;
            case 0x103:
            case 0x104:
              v235 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v236 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v237 = *(_BYTE *)(a1 + 109);
              if ( v237 == 5 )
                v237 = 15;
              sub_1D6740(a1, 15, v237, v236, v235, 67);
              goto LABEL_264;
            case 0x105:
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              v229 = *(_QWORD *)(a1 + 832);
              v230 = *(int *)(v229 + 3776);
              v231 = *(_DWORD *)(v229 + 3776);
              if ( v230 > 3 )
              {
                v231 = 0;
                v230 = 0;
              }
              *(_DWORD *)(v229 + 3776) = v231 + 1;
              v232 = *(_DWORD *)(v229 + 4 * v230 + 3760);
              v233 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x43u, 15, v233, 0x3BEA45E214ADDC55LL, v232, 0);
              a2 = (__m128)_mm_load_si128(&v330);
              v234 = v331;
              v330.m128i_i32[3] = v232;
              v331 = 1;
              v329 = v234;
              v328 = a2;
              goto LABEL_264;
            case 0x107:
            case 0x108:
            case 0x25C:
              v226 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v227 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v228 = *(_BYTE *)(a1 + 109);
              if ( v228 == 5 )
                v228 = 15;
              sub_1D6740(a1, 15, v228, v227, v226, 63);
              goto LABEL_264;
            case 0x109:
              a2 = (__m128)_mm_load_si128(&v330);
              v201 = "__FBLD__";
              v329 = v331;
              v328 = a2;
              goto LABEL_313;
            case 0x10A:
              sub_408CD0(a1, (__int64)&v328, (__int64)&v330);
              LOBYTE(v321) = v19 & 0xF7;
              goto LABEL_264;
            case 0x10B:
            case 0x10C:
            case 0x10D:
              v217 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v218 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v219 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x45u, 15, v219, v218, v217, 0);
              goto LABEL_264;
            case 0x10E:
            case 0x10F:
            case 0x110:
              v213 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v214 = &v328;
              v215 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              goto LABEL_321;
            case 0x111:
            case 0x112:
            case 0x113:
              v213 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v214 = (__m128 *)&v330;
              v215 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
LABEL_321:
              v216 = sub_3FAE20((__int64)v214, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x46u, 15, v216, v215, v213, 0);
              goto LABEL_264;
            case 0x114:
            case 0x115:
            case 0x116:
              v210 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v211 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v212 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x47u, 15, v212, v211, v210, 0);
              goto LABEL_264;
            case 0x117:
            case 0x118:
            case 0x119:
              v207 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v208 = &v328;
              v209 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              goto LABEL_317;
            case 0x11A:
            case 0x11B:
            case 0x11C:
              v207 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v208 = (__m128 *)&v330;
              v209 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
LABEL_317:
              v302 = sub_3FAE20((__int64)v208, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x48u, 15, v302, v209, v207, 0);
              goto LABEL_264;
            case 0x11D:
              v201 = "sqrt";
              goto LABEL_313;
            case 0x11E:
              v204 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v205 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v206 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"__FSCALE__", v206, v205, v204);
              goto LABEL_264;
            case 0x11F:
              v294 = "__FPREM__";
              goto LABEL_397;
            case 0x122:
              v201 = "fabs";
              goto LABEL_313;
            case 0x123:
              v157 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v158 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x44u, 15, v158, 0x3BEA45E214ADDC55LL, v157, 0);
              goto LABEL_264;
            case 0x124:
            case 0x125:
            case 0x126:
            case 0x127:
            case 0x128:
            case 0x153:
            case 0x154:
            case 0x155:
              goto LABEL_74;
            case 0x129:
              v200 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              sub_3FA230(a1, 0, v200, *(double *)a2.m128_u64);
LABEL_74:
              v38 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v39 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FA0C0(a1, v39, v38);
              goto LABEL_75;
            case 0x12B:
              v196 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v197 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_408A10(
                (_QWORD *)a1,
                (__int64)"tan",
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v197,
                v196,
                0xFFFFFFFF);
              goto LABEL_309;
            case 0x12C:
              v223 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v224 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3) + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL);
              v225 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"atan2", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v225, v224, v223);
              goto LABEL_264;
            case 0x12D:
              v201 = "__F2XM1__";
              goto LABEL_313;
            case 0x12E:
              v294 = "__FYL2X__";
              goto LABEL_393;
            case 0x12F:
              v294 = "__FYL2XP1__";
LABEL_393:
              v295 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v296 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v297 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              goto LABEL_394;
            case 0x130:
              v198 = 0;
              goto LABEL_310;
            case 0x131:
LABEL_309:
              v198 = 1;
              goto LABEL_310;
            case 0x132:
              v198 = 9;
              goto LABEL_310;
            case 0x133:
              v198 = 3;
              goto LABEL_310;
            case 0x134:
              v198 = 5;
              goto LABEL_310;
            case 0x135:
              v198 = 4;
              goto LABEL_310;
            case 0x136:
              v198 = 7;
LABEL_310:
              v199 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FA230(a1, v198, v199, *(double *)a2.m128_u64);
              goto LABEL_264;
            case 0x13D:
            case 0x13E:
              v222 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 4u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 444LL), 0x3BEA45E214ADDC55LL, v222, 0);
              goto LABEL_75;
            case 0x14F:
              v294 = "__FPREM1__";
LABEL_397:
              v295 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v296 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v297 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
LABEL_394:
              sub_408A10((_QWORD *)a1, (__int64)v294, v297, v296, v295);
              goto LABEL_264;
            case 0x150:
              v220 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v221 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"cos", v221, v220, 0xFFFFFFFF);
              sub_408A10((_QWORD *)a1, (__int64)"sin", v220, v220, 0xFFFFFFFF);
              LOBYTE(v321) = 0;
              goto LABEL_264;
            case 0x151:
              v201 = "sin";
              goto LABEL_313;
            case 0x152:
              v201 = "cos";
LABEL_313:
              v202 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              v203 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_408A10((_QWORD *)a1, (__int64)v201, v203, v202, 0xFFFFFFFF);
LABEL_264:
              v159 = *(int *)(*(_QWORD *)(a1 + 832) + 444LL);
              v160 = get_dtype_size();
              sub_1D6310(a1, 0x3Du, v160, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v159, 0);
              goto LABEL_75;
            case 0x156:
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, 8, 0);
              goto LABEL_75;
            case 0x2E9:
              v137 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v138 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 7u, (unsigned __int8)v322, v137, 0x3BEA45E214ADDC55LL, v308, 0);
              v139 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v322, v138, v308, v139, 0);
LABEL_218:
              sub_3FB3E0(a1, 9);
              goto LABEL_164;
            case 0x2F0:
              v135 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v136 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3FBD20(a1, v136, v135, v322, *(double *)a2.m128_u64);
              goto LABEL_75;
            case 0x2F3:
              v132 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v133 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128_u64, a3);
              v134 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_1D6C50(a1, 1u, (unsigned __int8)v322, v132, v133, v134);
              goto LABEL_75;
            case 0x2F4:
            case 0x2F5:
            case 0x2F6:
              v143 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
              v144 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128_u64, a3);
              v145 = *(_WORD *)(a1 + 48);
              if ( v145 == 756 )
              {
                v146 = 24;
              }
              else
              {
                v146 = 22;
                if ( v145 == 758 )
                  v146 = 23;
              }
              v147 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
              sub_3F7E20(a1, v146, (unsigned __int8)v322, v143, v144, v147, 0);
              goto LABEL_75;
            default:
              goto LABEL_63;
          }
LABEL_412:
          BUG();
        }
        v58 = byte_201011;
        if ( !_bittest64((const __int64 *)&v58, (unsigned int)(v29 - 122))
          || (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
        {
          goto LABEL_49;
        }
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
          goto LABEL_63;
        if ( (_WORD)v29 == 122 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) > 2u )
          {
LABEL_190:
            v88 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
            v89 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
            v90 = (unsigned __int8)v322;
            v91 = v89;
LABEL_191:
            sub_3F7E20(a1, 4u, v90, v91, 0x3BEA45E214ADDC55LL, v88, 0);
            goto LABEL_75;
          }
          goto LABEL_63;
        }
        if ( (_WORD)v29 != 126 )
          goto LABEL_49;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          goto LABEL_63;
LABEL_138:
        v59 = sub_3FAE20((__int64)&v328, *(double *)a2.m128_u64, a3);
        v60 = sub_3FAE20((__int64)&v330, *(double *)a2.m128_u64, a3);
        sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v322, v60, v59, 0);
      }
LABEL_75:
      if ( (v321 & 4) == 0 )
      {
LABEL_76:
        if ( (v321 & 8) == 0 )
          return *(unsigned __int8 *)(a1 + 896);
        v67 = 1;
        goto LABEL_157;
      }
      if ( v329 || (unsigned __int8)sub_3FACB0((__int64)&v328, *(double *)a2.m128_u64, a3) )
      {
LABEL_153:
        v67 = sub_3FB270(a1, 0, v328.m128_i32[3], 1, *(double *)a2.m128_u64, a3);
        if ( (v321 & 8) == 0 )
        {
LABEL_154:
          if ( v67 )
            return *(unsigned __int8 *)(a1 + 896);
          return 4294967294LL;
        }
LABEL_157:
        if ( !v331 && !(unsigned __int8)sub_3FACB0((__int64)&v330, *(double *)a2.m128_u64, a3) )
          goto LABEL_178;
        v67 &= sub_3FB270(a1, 1, v330.m128i_i32[3], 1, *(double *)a2.m128_u64, a3);
        goto LABEL_154;
      }
LABEL_178:
      sub_3EB430(*(double *)a2.m128_u64);
    }
    while ( 1 )
    {
      v48 = v47[4];
      v49 = 0;
      v50 = (_QWORD *)v47[3];
      if ( v46 < v48 )
      {
        v50 = (_QWORD *)v47[2];
        v49 = 1;
      }
      if ( !v50 )
        break;
      v47 = v50;
    }
    if ( v49 )
    {
      if ( *(_QWORD **)(v45 + 1024) == v47 )
        goto LABEL_107;
      v310 = *(_QWORD *)(a1 + 40);
      v315 = *(_QWORD *)(a1 + 8);
      v61 = std::_Rb_tree_decrement();
      v46 = v310;
      v45 = v315;
      v48 = *(_QWORD *)(v61 + 32);
    }
    if ( v48 >= v46 )
      goto LABEL_32;
LABEL_107:
    v309 = v45;
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v309 + 1040);
    goto LABEL_32;
  }
LABEL_23:
  if ( (v19 & 2) != 0 )
  {
    if ( v24 != 16 )
    {
      if ( v24 == 18
        && *(_BYTE *)(a1 + 56) == 34
        && *(_BYTE *)(a1 + 65) == 2
        && *(_QWORD *)(a1 + 80) == 16
        && (unsigned __int8)sub_3F8CD0(a1) )
      {
        return 0;
      }
LABEL_29:
      sub_3FC1F0(a1);
      v24 = *(_WORD *)(a1 + 48);
      goto LABEL_30;
    }
    v62 = sub_3FD1A0(a1, v313);
    if ( v62 != -1 )
    {
      v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v62);
      v64 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
      v65 = v63;
      v66 = get_dtype_size();
      sub_1D6310(a1, 3u, v66, v64, 0x3BEA45E214ADDC55LL, v65, 0);
      return *(unsigned __int8 *)(a1 + 896);
    }
    v82 = sub_3FD0D0(a1, v313, a1 + 64);
    v83 = *(_QWORD *)(a1 + 832);
    v84 = v82;
    v85 = v82;
    v86 = *(__int64 (**)())(*(_QWORD *)v83 + 232LL);
    if ( v86 == sub_3F03B0 )
    {
      if ( sub_CFF70() == 1 )
      {
LABEL_183:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
          goto LABEL_188;
        v333 = -1;
        v334 = 0;
        v87 = (unsigned __int64 *)v336;
        v335 = 0;
        v332 = -1;
        do
        {
          *(_WORD *)v87 = 0;
          v87 += 5;
          *((_WORD *)v87 - 19) = 0;
          *((_WORD *)v87 - 18) = 0;
          *((_DWORD *)v87 - 2) = 0;
          *((_WORD *)v87 - 17) = 0;
          *((_OWORD *)v87 - 2) = 0;
          *(v87 - 2) = 0;
        }
        while ( v87 != &v340 );
        if ( !(unsigned int)decode_insn() || (_WORD)v334 != 209 || v336[1] != 1 || v337 != 4 || v338 != 1 || v339 )
LABEL_188:
          sub_408540(a1, 8u);
        return 0;
      }
    }
    else if ( ((unsigned int (__fastcall *)(__int64, __int64))v86)(v83, v85) != -1 )
    {
      goto LABEL_183;
    }
    if ( (unsigned __int8)sub_409490(a1, v84) )
      return *(unsigned __int8 *)(a1 + 896);
    *(_QWORD *)v325 = 0;
    if ( (unsigned __int8)sub_381D00(*(_QWORD *)(a1 + 832), v84, (__int64)v325, 0) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) == 9 )
        *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1, a2, a3, a4, a5, v92, v93, a8, a9);
      clear_tinfo_t();
    }
    clear_tinfo_t();
    goto LABEL_29;
  }
LABEL_30:
  if ( v24 != 86 )
    goto LABEL_31;
  if ( *(_BYTE *)(a1 + 65) != 7 )
    goto LABEL_31;
  v57 = sub_3FD0D0(a1, v313, a1 + 64);
  if ( !(unsigned __int8)sub_409490(a1, v57) )
    goto LABEL_31;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
    sub_3FD260(a1);
  return 1;
}
