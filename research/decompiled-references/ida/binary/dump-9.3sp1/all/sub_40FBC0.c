__int64 __fastcall sub_40FBC0(__int64 a1, __m128i a2, __m128 a3)
{
  char v3; // al
  __int64 result; // rax
  int v6; // r12d
  bool v7; // bl
  bool v8; // cl
  char v9; // bl
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rax
  char v15; // dl
  unsigned __int16 v16; // ax
  int *v17; // rax
  __int64 v18; // r14
  char v19; // al
  char v20; // al
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // r12
  unsigned __int64 v25; // r14
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rdx
  char v28; // cl
  _QWORD *v29; // rax
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char v34; // al
  __int64 v35; // rcx
  __int16 v36; // dx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  _QWORD *v39; // r14
  unsigned __int64 v40; // rdx
  char v41; // si
  _QWORD *v42; // rax
  int v43; // eax
  _QWORD *v44; // r12
  _QWORD *v45; // rbx
  unsigned __int64 v46; // rdx
  char v47; // cl
  _QWORD *v48; // rax
  __int64 v49; // rax
  char *v50; // rcx
  int v51; // ebx
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // eax
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // r14
  int v58; // eax
  char v59; // bl
  int dtype_size; // eax
  int v61; // r13d
  int v62; // eax
  int v63; // eax
  int v64; // r13d
  int v65; // eax
  int v66; // r13d
  int v67; // eax
  int v68; // r12d
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdi
  _QWORD *v72; // r14
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdi
  unsigned __int64 v76; // r14
  __int64 v77; // rsi
  __int64 (*v78)(); // rax
  unsigned __int64 *v79; // rax
  int v80; // ebx
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  unsigned __int8 v85; // al
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  int v90; // ecx
  __int64 v91; // rax
  int v92; // ecx
  int v93; // r12d
  int v94; // ebx
  int v95; // eax
  int v96; // r13d
  int v97; // ebx
  int v98; // eax
  unsigned int v99; // eax
  int v100; // eax
  __int64 v101; // r8
  __int32 v102; // r9d
  int v103; // r11d
  signed int v104; // eax
  unsigned __int8 v105; // bl
  int v106; // r12d
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  __int64 v113; // rbx
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // ebx
  int v118; // r12d
  int v119; // eax
  int v120; // ebx
  int v121; // eax
  unsigned int v122; // ebx
  unsigned int v123; // r12d
  unsigned int v124; // eax
  int v125; // ebx
  int v126; // eax
  int v127; // r12d
  int v128; // ebx
  int v129; // eax
  __int64 v130; // rbx
  __int64 v131; // rcx
  __int64 v132; // r9
  int v133; // ebx
  int v134; // r13d
  __int16 v135; // ax
  unsigned int v136; // r12d
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // ebx
  int v141; // eax
  int v142; // ebx
  int v143; // eax
  int v144; // ebx
  int v145; // r12d
  int v146; // eax
  int v147; // ebx
  int v148; // eax
  __int64 v149; // rbx
  int v150; // eax
  int v151; // ebx
  int v152; // eax
  int v153; // eax
  int v154; // ebx
  int v155; // eax
  int v156; // r12d
  int v157; // ebx
  int v158; // eax
  int v159; // ebx
  int v160; // eax
  unsigned int v161; // eax
  int v162; // ebx
  int v163; // eax
  signed int v164; // ebx
  signed int v165; // eax
  signed int v166; // ebx
  signed int v167; // eax
  int v168; // eax
  __int64 v169; // r9
  int v170; // ebx
  int v171; // ecx
  char v172; // al
  signed int v173; // ebx
  __int64 v174; // r9
  int v175; // eax
  __int64 v176; // rsi
  __m128i v177; // xmm2
  int v178; // edx
  __m128i v179; // xmm3
  signed int v180; // eax
  int v181; // eax
  int v182; // eax
  __int64 v183; // r9
  int v184; // ebx
  int v185; // eax
  unsigned int v186; // ebx
  int v187; // eax
  unsigned int v188; // ebx
  int v189; // eax
  int v190; // eax
  char *v191; // rbx
  unsigned int v192; // r14d
  unsigned int v193; // eax
  unsigned int v194; // r14d
  unsigned int v195; // ebx
  unsigned int v196; // eax
  int v197; // r14d
  __m128i *v198; // rdi
  int v199; // ebx
  int v200; // r14d
  int v201; // ebx
  int v202; // eax
  int v203; // r14d
  __m128i *v204; // rdi
  int v205; // ebx
  int v206; // eax
  int v207; // r14d
  int v208; // ebx
  int v209; // eax
  unsigned int v210; // ebx
  unsigned int v211; // eax
  int v212; // eax
  unsigned int v213; // r14d
  unsigned int v214; // ebx
  int v215; // eax
  int v216; // ebx
  int v217; // ecx
  unsigned __int8 v218; // al
  __int64 v219; // rdx
  unsigned __int64 v220; // rcx
  int v221; // eax
  __int32 v222; // ebx
  int v223; // eax
  char v224; // al
  int v225; // ebx
  int v226; // ecx
  unsigned __int8 v227; // al
  int v228; // ebx
  int v229; // eax
  int v230; // ebx
  int v231; // eax
  int v232; // r12d
  int v233; // ebx
  __int64 v234; // rdx
  unsigned __int64 v235; // rcx
  int v236; // eax
  __int64 v237; // rbx
  int v238; // eax
  int v239; // r12d
  int v240; // eax
  int v241; // eax
  int v242; // eax
  int v243; // r12d
  int v244; // ebx
  int v245; // eax
  int v246; // eax
  int v247; // ebx
  int v248; // eax
  __int32 v249; // eax
  int v250; // ebx
  int v251; // eax
  int v252; // eax
  int v253; // eax
  int v254; // eax
  int v255; // eax
  int v256; // eax
  int v257; // eax
  int v258; // eax
  int v259; // eax
  int v260; // eax
  int v261; // eax
  int v262; // eax
  int v263; // eax
  int v264; // eax
  char v265; // al
  int v266; // eax
  int v267; // eax
  int v268; // eax
  int v269; // ebx
  int v270; // eax
  int v271; // ebx
  int v272; // eax
  int v273; // ebx
  int v274; // eax
  int v275; // r12d
  int v276; // eax
  int v277; // r12d
  int v278; // eax
  int v279; // r12d
  int v280; // r14d
  int v281; // eax
  int v282; // eax
  int v283; // eax
  const char *v284; // r13
  unsigned int v285; // r12d
  unsigned int v286; // r14d
  unsigned int v287; // eax
  signed int v288; // r12d
  int v289; // ebx
  int v290; // eax
  int v291; // [rsp+8h] [rbp-248h]
  int v292; // [rsp+8h] [rbp-248h]
  int v293; // [rsp+8h] [rbp-248h]
  int v294; // [rsp+8h] [rbp-248h]
  int v295; // [rsp+10h] [rbp-240h]
  int v296; // [rsp+10h] [rbp-240h]
  int v297; // [rsp+10h] [rbp-240h]
  int v298; // [rsp+18h] [rbp-238h]
  __int64 v299; // [rsp+18h] [rbp-238h]
  unsigned __int64 v300; // [rsp+18h] [rbp-238h]
  __int64 v301; // [rsp+18h] [rbp-238h]
  __int64 v302; // [rsp+18h] [rbp-238h]
  __int64 v303; // [rsp+20h] [rbp-230h]
  signed int v304; // [rsp+28h] [rbp-228h]
  __int64 v305; // [rsp+28h] [rbp-228h]
  unsigned __int64 v306; // [rsp+28h] [rbp-228h]
  unsigned __int8 v307; // [rsp+28h] [rbp-228h]
  signed int v308; // [rsp+28h] [rbp-228h]
  signed int v309; // [rsp+30h] [rbp-220h]
  unsigned __int8 dtype_by_size; // [rsp+30h] [rbp-220h]
  __int16 v311; // [rsp+34h] [rbp-21Ch]
  unsigned int v312; // [rsp+38h] [rbp-218h]
  unsigned __int64 v313; // [rsp+38h] [rbp-218h]
  __int128 v314; // [rsp+40h] [rbp-210h] BYREF
  _BYTE v315[12]; // [rsp+50h] [rbp-200h] BYREF
  __int64 tinfo_property; // [rsp+60h] [rbp-1F0h] BYREF
  __int64 v317; // [rsp+68h] [rbp-1E8h]
  __m128i v318; // [rsp+70h] [rbp-1E0h] BYREF
  char v319; // [rsp+80h] [rbp-1D0h]
  __m128i v320; // [rsp+90h] [rbp-1C0h] BYREF
  char v321; // [rsp+A0h] [rbp-1B0h]
  __int128 v322; // [rsp+B0h] [rbp-1A0h]
  __int64 v323; // [rsp+C0h] [rbp-190h]
  __int64 v324; // [rsp+C8h] [rbp-188h]
  __int64 v325; // [rsp+D0h] [rbp-180h]
  _BYTE v326[6]; // [rsp+D8h] [rbp-178h] BYREF
  __int16 v327; // [rsp+DEh] [rbp-172h]
  char v328; // [rsp+101h] [rbp-14Fh]
  __int16 v329; // [rsp+106h] [rbp-14Ah]
  unsigned __int64 v330; // [rsp+218h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 384);
  v330 = __readfsqword(0x28u);
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
    v22 = *(_QWORD **)(a1 + 856);
    v23 = &v22[*(_QWORD *)(a1 + 864)];
    if ( v22 != v23 )
    {
      while ( *(_QWORD *)(a1 + 40) != *v22 )
      {
        if ( v23 == ++v22 )
          goto LABEL_11;
      }
      if ( v23 != v22 )
        return 0;
    }
  }
LABEL_11:
  v318.m128i_i64[0] = a1;
  v319 = 0;
  v318.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  v320.m128i_i64[0] = a1;
  v320.m128i_i64[1] = 0xFFFFFFFF00000001LL;
  v321 = 0;
  LOBYTE(v312) = sub_3FA390(a1, a1 + 64);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v12 = *(_DWORD *)(v11 + 104);
  if ( v6 >= v12 && v6 < *(_DWORD *)(v11 + 108) )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 112) + 16LL * (v6 - v12) + 8);
    v311 = v13;
  }
  else
  {
    v311 = 0;
    v13 = 0;
  }
  v14 = getseg();
  if ( v14 && !*(_BYTE *)(v14 + 43) )
  {
    v44 = *(_QWORD **)(a1 + 8);
    v45 = (_QWORD *)v44[127];
    v313 = *(_QWORD *)(a1 + 40);
    if ( !v45 )
    {
      if ( (_QWORD *)v44[128] != v44 + 126 && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v313 )
        return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, a3);
      goto LABEL_123;
    }
    while ( 1 )
    {
      v46 = v45[4];
      v47 = 0;
      v48 = (_QWORD *)v45[3];
      if ( v313 < v46 )
      {
        v48 = (_QWORD *)v45[2];
        v47 = 1;
      }
      if ( !v48 )
        break;
      v45 = v48;
    }
    if ( v47 )
    {
      if ( (_QWORD *)v44[128] == v45 )
        goto LABEL_123;
      v46 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v46 >= v313 )
      return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, a3);
LABEL_123:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v44[130];
    return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, a3);
  }
  if ( *(_BYTE *)(a1 + 56) != 33 || *(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
  {
    v15 = *(_BYTE *)(a1 + 65);
  }
  else
  {
    v34 = getinf();
    v35 = 262;
    v15 = *(_BYTE *)(a1 + 65);
    if ( _bittest64(&v35, v34 & 0xF)
      && (dword_42EDA0[v15 != 2] & v13) != 0
      && *(_BYTE *)(a1 + 40LL * (v15 != 2) + 65) == 2
      && !*(_QWORD *)(a1 + 40LL * (v15 != 2) + 80) )
    {
      return 0;
    }
  }
  v16 = *(_WORD *)(a1 + 48);
  if ( v15 != 1 || *(_WORD *)(a1 + 70) != 5 || (v13 & 4) == 0 )
    goto LABEL_19;
  if ( v16 == 122 )
  {
    if ( *(_BYTE *)(a1 + 105) == 1 )
      goto LABEL_97;
    goto LABEL_174;
  }
  if ( v16 != 92 )
  {
    HIBYTE(v36) = HIBYTE(*(_WORD *)(a1 + 48));
    LOBYTE(v36) = v16 & 0x7F;
    if ( v36 != 6 && v16 != 209 )
    {
LABEL_174:
      v71 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v71 + 112) & 0x10) != 0 )
      {
        v72 = sub_1CE9E0(v71);
        if ( !v72 )
        {
          if ( !under_debugger )
            sub_383060(0xC557u, *(double *)a2.m128i_i64);
          goto LABEL_412;
        }
        get_func();
        v73 = v72[2] & 0xFFFFFFFFFFFFFFEFLL;
        v72[2] = v73;
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v73;
        update_func();
        v16 = *(_WORD *)(a1 + 48);
      }
LABEL_19:
      v303 = a1 + 24;
      if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
      {
        if ( v16 != 159 )
          goto LABEL_108;
        if ( (v13 & 0x10000) == 0 )
          goto LABEL_99;
      }
      else if ( v16 != 752 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          if ( (unsigned __int16)(v16 - 152) <= 1u )
            goto LABEL_99;
          goto LABEL_23;
        }
LABEL_108:
        if ( v16 != 515 )
        {
          if ( v16 > 0x203u )
          {
            if ( v16 != 604 )
              goto LABEL_99;
          }
          else if ( v16 > 0x100u )
          {
            if ( (unsigned __int16)(v16 - 258) > 0x53u )
              goto LABEL_99;
          }
          else if ( v16 <= 0xF4u )
          {
            goto LABEL_99;
          }
        }
        v43 = sub_40FAA0((_QWORD *)a1);
        *(_DWORD *)(a1 + 892) = v43;
        if ( v43 >= 0 && (unsigned __int16)(*(_WORD *)(a1 + 48) - 314) <= 2u )
          return 0;
        goto LABEL_32;
      }
      if ( (v13 & 2) == 0 )
      {
LABEL_31:
        v9 = 1;
        goto LABEL_32;
      }
      goto LABEL_29;
    }
  }
LABEL_97:
  v303 = a1 + 24;
  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 || (v13 & 0x10000) == 0 )
  {
LABEL_99:
    v37 = *(_QWORD *)(a1 + 8);
    v38 = *(_QWORD *)(a1 + 40);
    v39 = *(_QWORD **)(v37 + 1016);
    if ( !v39 )
    {
      v306 = *(_QWORD *)(a1 + 40);
      if ( v37 + 1008 == *(_QWORD *)(v37 + 1024) )
        goto LABEL_107;
      v301 = *(_QWORD *)(a1 + 8);
      v70 = std::_Rb_tree_decrement();
      v37 = v301;
      if ( *(_QWORD *)(v70 + 32) < v306 )
        goto LABEL_107;
LABEL_32:
      v17 = *(int **)(a1 + 832);
      v18 = v17[113];
      v298 = v17[116];
      v304 = v17[114];
      v295 = v17[115];
      v309 = v17[117];
      if ( (v13 & 0x100) != 0 || (v19 = *(_BYTE *)(a1 + 65), v19 == 1) || v19 == 11 )
      {
        sub_3FA580(v318.m128i_i32, 1, 0, *(double *)a2.m128i_i64);
      }
      else
      {
        v318.m128i_i32[3] = v18;
        v319 = 1;
      }
      if ( (v13 & 0x200) != 0 || (v20 = *(_BYTE *)(a1 + 105), v20 == 1) || v20 == 11 )
      {
        sub_3FA580(v320.m128i_i32, 1, 0, *(double *)a2.m128i_i64);
      }
      else
      {
        v321 = 1;
        v320.m128i_i32[3] = v304;
      }
      if ( !v9 && *(int *)(a1 + 892) < 0 || v318.m128i_i32[3] == -1 || v320.m128i_i32[3] == -1 )
        goto LABEL_63;
      v21 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v21 > 0x8Fu )
      {
        if ( (unsigned __int16)v21 <= 0x2F6u )
          goto LABEL_49;
        if ( (unsigned __int16)(v21 - 1775) > 1u )
          goto LABEL_63;
      }
      else
      {
        if ( (unsigned __int16)v21 <= 0x79u )
        {
          if ( (_WORD)v21 == 6 )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_167:
              v61 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v62 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v63 = sub_409840(a1, v312, v62, v61, *(double *)a2.m128i_i64, a3);
              if ( v63 == 1 )
                return 0;
              if ( v63 == -1 )
                return 4294967294LL;
              v64 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v65 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x19u, (unsigned __int8)v312, v65, v64, 0, 0);
              v66 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v67 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x1Au, (unsigned __int8)v312, v67, v66, 3, 0);
              v68 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v69 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v69, v68, v298, 0);
              v318.m128i_i32[3] = v298;
              v319 = 1;
LABEL_165:
              sub_3FD520(a1, v318.m128i_i32[3], v312);
              goto LABEL_75;
            }
          }
          else
          {
            if ( (_WORD)v21 != 44 )
            {
              if ( (unsigned __int16)v21 > 4u )
                goto LABEL_49;
LABEL_63:
              if ( (unsigned __int8)sub_3FD5C0(a1, (__int64)&v318, &v320, v312) )
                return 0;
              v24 = *(_QWORD **)(a1 + 8);
              v25 = *(_QWORD *)(a1 + 40);
              v26 = (_QWORD *)v24[127];
              if ( v26 )
              {
                while ( 1 )
                {
                  v27 = v26[4];
                  v28 = 0;
                  v29 = (_QWORD *)v26[3];
                  if ( v25 < v27 )
                  {
                    v29 = (_QWORD *)v26[2];
                    v28 = 1;
                  }
                  if ( !v29 )
                    break;
                  v26 = v29;
                }
                if ( !v28 )
                  goto LABEL_71;
              }
              else
              {
                v26 = v24 + 126;
              }
              if ( v26 == (_QWORD *)v24[128] )
                goto LABEL_72;
              v27 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_71:
              if ( v27 >= v25 )
                return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, a3);
LABEL_72:
              *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
              std::_Rb_tree_insert_and_rebalance();
              ++v24[130];
              return sub_407720(a1, v311, (__int64)&v318, (__int64)&v320, *(double *)a2.m128i_i64, a3);
            }
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            {
LABEL_163:
              v314 = 0xFFFFFFFF00000000LL;
              dtype_size = get_dtype_size();
              sub_120A10((__int64)&v314, *(_QWORD *)(a1 + 832), 1, dtype_size, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v314)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 26, (unsigned __int8 *)&v314, v315, (unsigned __int8 *)&tinfo_property);
              sub_1D6450(a1, 12, (unsigned __int8 *)&v314, v315, v315);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
LABEL_164:
              if ( !v319 && !(unsigned __int8)sub_3FACB0((__int64)&v318, *(double *)a2.m128i_i64, a3) )
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
              v117 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v118 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v119 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_1D6910(a1, v312, v119, v118, v117, v298, v295);
              goto LABEL_164;
            case 6:
              goto LABEL_167;
            case 7:
              v93 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v94 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v95 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v95, v94, v93, 0);
              goto LABEL_218;
            case 0x10:
            case 0x56:
            case 0x59:
              if ( !(unsigned __int8)sub_1D61C0(a1) )
              {
                if ( *(_BYTE *)(a1 + 65) == 7 )
                {
                  v86 = *(_QWORD *)(a1 + 800);
                  tinfo_property = 0xFFFFFFFF00000000LL;
                  v87 = *(_QWORD *)(*(_QWORD *)(v86 + 24) + 16LL);
                  v88 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                  if ( v88 != v87 )
                  {
                    if ( v88 == -1 )
                      v87 = -1;
                    else
                      v87 &= v88;
                  }
                  v89 = *(_QWORD *)(a1 + 832);
                  LOBYTE(tinfo_property) = 6;
                  v90 = *(_DWORD *)(v89 + 84);
                  v91 = 0;
                  v92 = 8 * v90;
                  if ( (unsigned __int64)v92 <= 0x3F )
                    v91 = 1LL << v92;
                  v317 = v87 & (v91 - 1);
                  sub_1D6450(a1, 55, (unsigned __int8 *)&tinfo_property, nullptr, nullptr);
                  sub_11CDA0((__int64)&tinfo_property);
                }
                else
                {
                  v288 = sub_3EBC60(*(_DWORD *)(a1 + 52));
                  v289 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                  v290 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                  sub_3F7E20(
                    a1,
                    0x36u,
                    (unsigned __int8)v312,
                    0x3BEA45E214ADDC55LL,
                    *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) + v290,
                    v289,
                    v288);
                }
              }
              goto LABEL_75;
            case 0x11:
            case 0x57:
              if ( !v319 )
                sub_3FA580(v318.m128i_i32, 0, 0, *(double *)a2.m128i_i64);
              v175 = get_dtype_size();
              v176 = *(_QWORD *)(a1 + 832);
              v177 = _mm_cvtsi32_si128(v309);
              v178 = 4;
              v179 = _mm_cvtsi32_si128(v304);
              v296 = v175;
              a2 = _mm_cvtsi32_si128(*(_DWORD *)(v176 + 80));
              if ( v175 != 6 )
                v178 = v175;
              LODWORD(v314) = 1;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v317 = 0;
              *(_DWORD *)v315 = 1;
              *(_QWORD *)((char *)&v314 + 4) = _mm_unpacklo_epi32(a2, v177).m128i_u64[0];
              a3 = (__m128)_mm_unpacklo_epi32(a2, v179);
              *(_QWORD *)&v315[4] = a3.m128_u64[0];
              sub_120A10((__int64)&tinfo_property, v176, v178, _mm_cvtsi128_si32(a2), -1, 0);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, (unsigned __int8 *)&v314, v315);
              v180 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              v302 = v304;
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v304, v304, v180);
              if ( v304 != (unsigned int)sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3) )
              {
                if ( (int)sub_3ECD50(v303) > v296 )
                {
                  v307 = *(_BYTE *)(a1 + 69);
                  dtype_by_size = get_dtype_by_size();
                  v297 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                  v181 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                  sub_1D6840(a1, v307, dtype_by_size, v181, v297, 0);
                }
                v308 = sub_3ECD50(v303);
                v182 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x36u, (unsigned __int8)v312, 0x3BEA45E214ADDC55LL, v302, v182, v308);
                sub_11CDA0((__int64)&tinfo_property);
                sub_11CDA0((__int64)v315);
                sub_11CDA0((__int64)&v314);
                goto LABEL_75;
              }
              if ( !under_debugger )
                sub_383060(0xC7C6u, *(double *)a2.m128i_i64);
              return result;
            case 0x12:
            case 0x58:
              v173 = sub_3ECD50(v303);
              v174 = (int)sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(
                a1,
                0x36u,
                (unsigned __int8)v312,
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
                v174,
                v173);
              goto LABEL_75;
            case 0x13:
            case 0x14:
            case 0x15:
              v170 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v171 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              if ( (_BYTE)v312 )
              {
                if ( (_BYTE)v312 == 1 )
                  v172 = 2;
                else
                  v172 = ((_BYTE)v312 != 2) + 7;
              }
              else
              {
                v172 = 1;
              }
              sub_1D6840(a1, (unsigned __int8)v312, (unsigned int)v172, v171, v170, 1u);
              goto LABEL_75;
            case 0x16:
              v169 = 0;
              goto LABEL_283;
            case 0x17:
              v169 = *(int *)(*(_QWORD *)(a1 + 832) + 700LL);
LABEL_283:
              sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v169, 0);
              goto LABEL_75;
            case 0x1A:
              v183 = 0;
              goto LABEL_299;
            case 0x1B:
              v139 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v312 = (unsigned __int8)v312;
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v139, 0x3BEA45E214ADDC55LL, (int)v18, 0);
              v318.m128i_i32[3] = v18;
              v319 = 1;
              goto LABEL_261;
            case 0x1D:
            case 0x1E:
            case 0x1F:
              v138 = get_dtype_size();
              *(_DWORD *)v315 = 1;
              *(_DWORD *)&v315[4] = v138;
              *(_DWORD *)&v315[8] = 8;
              tinfo_property = 0xFFFFFFFF00000000LL;
              v317 = 0;
              sub_1252A0((__int64)&tinfo_property, 8, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL), v138);
              sub_1D6450(a1, 8, v315, nullptr, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              goto LABEL_75;
            case 0x22:
              v314 = 0xFFFFFFFF00000000LL;
              v116 = get_dtype_size();
              sub_120A10((__int64)&v314, *(_QWORD *)(a1 + 832), 1, v116, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v314)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v315, (unsigned __int8 *)&v314, (unsigned __int8 *)&tinfo_property);
              sub_1D6450(a1, 13, v315, (unsigned __int8 *)&v314, v315);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
              goto LABEL_164;
            case 0x23:
              v115 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3FB450(a1, v115, v312, 0);
              goto LABEL_75;
            case 0x24:
            case 0x25:
            case 0x26:
              sub_3F8D40(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL), v312);
              if ( *(_QWORD *)(a1 + 112) )
                return 4294967294LL;
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v312,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              v113 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
              v114 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0xDu, (unsigned __int8)v312, *(int *)(*(_QWORD *)(a1 + 832) + 60LL), v114, v113, 0);
              goto LABEL_75;
            case 0x29:
              v112 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3FB450(a1, v112, v312, 1u);
              goto LABEL_75;
            case 0x2A:
              v120 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v121 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FB8C0(a1, 1u, v121, v120, v312);
              goto LABEL_75;
            case 0x2C:
              goto LABEL_163;
            case 0x35:
            case 0x45:
            case 0xE5:
            case 0xFB:
              v130 = v298;
              v131 = 0;
              v132 = v298;
              goto LABEL_249;
            case 0x36:
            case 0x44:
            case 0x46:
            case 0xEC:
            case 0xF9:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v298, 0);
              goto LABEL_81;
            case 0x37:
            case 0x39:
            case 0x43:
            case 0xE6:
            case 0xF5:
              v33 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC4D0(a1, 0, v33, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x38:
            case 0x42:
            case 0xE7:
            case 0xF7:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v298, 0);
              goto LABEL_81;
            case 0x3A:
            case 0x3B:
            case 0x3C:
              v85 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              sub_3FB720(a1, 0x21u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v85, v298);
              goto LABEL_81;
            case 0x3D:
            case 0x55:
            case 0xF4:
            case 0xF6:
              v84 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC4D0(a1, 1, v84, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x3E:
            case 0x4B:
            case 0xE8:
              v130 = v298;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, 0);
              v132 = v298;
              v131 = v298;
LABEL_249:
              sub_3F7E20(a1, 0x13u, 0, v131, 1, v132, 0);
              goto LABEL_250;
            case 0x3F:
            case 0x4A:
            case 0xE9:
              v130 = v298;
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, 0);
LABEL_250:
              sub_3F7E20(a1, 6u, 0, v130, 0x3BEA45E214ADDC55LL, v130, 0);
              goto LABEL_81;
            case 0x40:
            case 0x49:
            case 0xEA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, 0);
              goto LABEL_81;
            case 0x41:
            case 0x48:
            case 0xEB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v298, 0);
              sub_3F7E20(a1, 0x13u, 0, v298, 1, v298, 0);
              goto LABEL_81;
            case 0x47:
            case 0x4F:
            case 0xF0:
            case 0xFA:
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v298, 0);
              goto LABEL_81;
            case 0x4C:
            case 0xED:
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v298, 0);
              goto LABEL_81;
            case 0x4D:
            case 0x53:
            case 0xEE:
            case 0xFC:
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v298, 0);
              goto LABEL_81;
            case 0x4E:
            case 0xEF:
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v298, 0);
LABEL_81:
              if ( !v319 && !(unsigned __int8)sub_3FACB0((__int64)&v318, *(double *)a2.m128i_i64, a3) )
                goto LABEL_178;
              sub_3FC4D0(a1, v298, v318.m128i_i32[3], *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x50:
            case 0xF1:
              v109 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC4D0(a1, 3, v109, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x51:
            case 0x52:
            case 0xF2:
            case 0xF8:
              v108 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC4D0(a1, 4, v108, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x54:
            case 0xF3:
              v110 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC4D0(a1, 2, v110, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x5A:
              sub_3F7E20(a1, 4u, 0, *(int *)(*(_QWORD *)(a1 + 832) + 524LL), 0x3BEA45E214ADDC55LL, 9, 0);
              goto LABEL_75;
            case 0x5C:
              v105 = sub_3EBDA0(*(_DWORD *)(a1 + 52));
              if ( v105 < (unsigned __int8)v312 )
              {
                v106 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                v107 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                sub_1D6840(a1, v105, (unsigned __int8)v312, v107, v106, 0);
                goto LABEL_75;
              }
              v80 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v111 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v82 = (unsigned int)(char)v312;
              v83 = v111;
              goto LABEL_191;
            case 0x5D:
            case 0x5E:
            case 0x5F:
              sub_3F7E20(
                a1,
                4u,
                (unsigned __int8)v312,
                *(int *)(*(_QWORD *)(a1 + 832) + 400LL),
                0x3BEA45E214ADDC55LL,
                *(int *)(*(_QWORD *)(a1 + 832) + 60LL),
                0);
              sub_3F8EE0(a1);
              goto LABEL_75;
            case 0x63:
              v96 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 488LL);
              goto LABEL_220;
            case 0x65:
              v96 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 52LL);
              goto LABEL_220;
            case 0x66:
              v96 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
              goto LABEL_220;
            case 0x67:
              v96 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL);
LABEL_220:
              v97 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v98 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v98, 0x3BEA45E214ADDC55LL, v97, 0);
              v99 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              *(_DWORD *)v315 = 1;
              v317 = 0;
              a2.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v99), _mm_cvtsi32_si128(v309)).m128i_u64[0];
              tinfo_property = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              v100 = sub_3ECD50(v303);
              sub_120A10((__int64)&tinfo_property, *(_QWORD *)(a1 + 832), v100, v103, v101, v102);
              sub_1D6450(a1, 12, (unsigned __int8 *)&tinfo_property, v315, v315);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              v104 = sub_3EBC60(*(_DWORD *)(a1 + 52));
              sub_3F7E20(a1, 2u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 472LL), v309, v96, v104);
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
              v32 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FC800(a1, v32, *(double *)a2.m128i_i64, a3);
              goto LABEL_75;
            case 0x7A:
              goto LABEL_190;
            case 0x7D:
            case 0x252:
              v184 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v185 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v312, v185, v184, 1u);
              goto LABEL_75;
            case 0x7E:
              goto LABEL_138;
            case 0x7F:
              v154 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v155 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FB8C0(a1, 0, v155, v154, v312);
              goto LABEL_75;
            case 0x80:
              v151 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v291 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 5u, (unsigned __int8)v312, v291, 0x3BEA45E214ADDC55LL, v151, 0);
              v314 = 0xFFFFFFFF00000000LL;
              v152 = get_dtype_size();
              sub_120A10((__int64)&v314, *(_QWORD *)(a1 + 832), 1, v152, -1, 0);
              a2.m128i_i64[0] = _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(DWORD1(v314)),
                                  _mm_cvtsi32_si128(sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3))).m128i_u64[0];
              *(_DWORD *)v315 = 1;
              tinfo_property = 0x100000001LL;
              v317 = 3;
              *(_QWORD *)&v315[4] = a2.m128i_i64[0];
              sub_1D6450(a1, 30, v315, (unsigned __int8 *)&v314, (unsigned __int8 *)&tinfo_property);
              sub_11CDA0((__int64)&tinfo_property);
              sub_11CDA0((__int64)v315);
              sub_11CDA0((__int64)&v314);
              v153 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FB720(a1, 0x20u, v153, (unsigned __int8)v312, 0);
              goto LABEL_164;
            case 0x81:
            case 0xD5:
            case 0x14A:
              goto LABEL_75;
            case 0x82:
              v159 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v160 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 7u, (unsigned __int8)v312, v160, 0x3BEA45E214ADDC55LL, v159, 0);
              goto LABEL_75;
            case 0x83:
              v156 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v157 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v158 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x13u, (unsigned __int8)v312, v158, v157, v156, 0);
              goto LABEL_218;
            case 0x86:
              sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F8EE0(a1);
              goto LABEL_75;
            case 0x88:
              sub_3F92A0(a1, v312);
              goto LABEL_75;
            case 0x8F:
              v168 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F8D40(a1, v168, v312);
              goto LABEL_75;
            case 0x91:
              sub_3F9020(a1, v312);
              goto LABEL_75;
            case 0x9A:
              v166 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v167 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_4072A0(a1, 0x1Bu, v312, v167, v166);
              goto LABEL_75;
            case 0x9B:
              v164 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v165 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_4072A0(a1, 0x1Cu, v312, v165, v164);
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
              v162 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v163 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_407390(a1, 0x16u, v312, v163, v162);
              goto LABEL_75;
            case 0xA3:
              v273 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v274 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_407390(a1, 0x18u, v312, v274, v273);
              goto LABEL_75;
            case 0xA5:
              v271 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v272 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_407390(a1, 0x17u, v312, v272, v271);
              goto LABEL_75;
            case 0xA6:
              sub_1D6840(a1, 0, (unsigned __int8)v312, 0, v298, 0);
              v265 = *(_BYTE *)(a1 + 65);
              if ( *(_BYTE *)(a1 + 105) == v265 && v265 == 1 && *(_WORD *)(a1 + 70) == *(_WORD *)(a1 + 110) )
              {
                sub_3F7E20(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, 3, 0);
                v283 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 5u, (unsigned __int8)v312, v298, 0x3BEA45E214ADDC55LL, v283, 0);
              }
              else
              {
                v266 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v298, v266, v298, 0);
                v267 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x23u, (unsigned __int8)v312, v267, v298, 0, 0);
                v268 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x1Eu, (unsigned __int8)v312, v268, v298, 3, 0);
                v269 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                v270 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xDu, (unsigned __int8)v312, v270, v298, v269, 0);
              }
              goto LABEL_164;
            case 0xA8:
            case 0xB5:
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v18, 0);
              goto LABEL_377;
            case 0xA9:
            case 0xB4:
            case 0xB6:
              v183 = (int)sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
LABEL_299:
              sub_3F7E20(a1, 6u, 0, 0, 0x3BEA45E214ADDC55LL, v183, 0);
              goto LABEL_75;
            case 0xAA:
            case 0xAC:
            case 0xB3:
              v264 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, v264, 0);
              goto LABEL_75;
            case 0xAB:
            case 0xB2:
              v263 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x13u, 0, 0, 1, v263, 0);
              goto LABEL_75;
            case 0xAD:
            case 0xC5:
              v262 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 0, 1, 0x3BEA45E214ADDC55LL, v262, 0);
              goto LABEL_75;
            case 0xAE:
            case 0xBB:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v18, 0);
              sub_3F7E20(a1, 0x13u, 0, v18, 1, v18, 0);
              goto LABEL_377;
            case 0xAF:
            case 0xBA:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v18, 0);
LABEL_377:
              v261 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 6u, 0, v18, 0x3BEA45E214ADDC55LL, v261, 0);
              goto LABEL_75;
            case 0xB0:
            case 0xB9:
              v260 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v260, 0);
              goto LABEL_75;
            case 0xB1:
            case 0xB8:
              sub_3F7E20(a1, 0x15u, 0, 2, 3, v18, 0);
              v259 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x13u, 0, v18, 1, v259, 0);
              goto LABEL_75;
            case 0xB7:
            case 0xBF:
              v258 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, v258, 0);
              goto LABEL_75;
            case 0xBC:
              v257 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 6u, 0, 3, 0x3BEA45E214ADDC55LL, v257, 0);
              goto LABEL_75;
            case 0xBD:
            case 0xC3:
              v256 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 6u, 0, 4, 0x3BEA45E214ADDC55LL, v256, 0);
              goto LABEL_75;
            case 0xBE:
              v255 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 6u, 0, 2, 0x3BEA45E214ADDC55LL, v255, 0);
              goto LABEL_75;
            case 0xC0:
              v254 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 0, 3, 0x3BEA45E214ADDC55LL, v254, 0);
              goto LABEL_75;
            case 0xC1:
            case 0xC2:
              v253 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 0, 4, 0x3BEA45E214ADDC55LL, v253, 0);
              goto LABEL_75;
            case 0xC4:
              v252 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 0, 2, 0x3BEA45E214ADDC55LL, v252, 0);
              goto LABEL_75;
            case 0xC8:
              v250 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v251 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v249 = sub_3FBF90(a1, (unsigned __int8)v312, v251, v250, 0);
              goto LABEL_363;
            case 0xC9:
              v247 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v248 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v249 = sub_3FBF90(a1, (unsigned __int8)v312, v248, v247, 1u);
LABEL_363:
              v318.m128i_i32[3] = v249;
              v319 = 1;
              if ( (v13 & 4) != 0 )
                goto LABEL_153;
              goto LABEL_76;
            case 0xCC:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, 0, 0);
              goto LABEL_75;
            case 0xCD:
              sub_3F7E20(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, *(int *)(*(_QWORD *)(a1 + 832) + 700LL), 0);
              goto LABEL_75;
            case 0xD1:
              v244 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v245 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v312 = (unsigned __int8)v312;
              v246 = sub_409840(a1, v312, v245, v244, *(double *)a2.m128i_i64, a3);
              if ( v246 == 1 )
                return 0;
              if ( v246 == -1 )
                return 4294967294LL;
LABEL_261:
              v140 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v141 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x23u, v312, v141, v140, 0, 0);
              v142 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v143 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x1Eu, v312, v143, v142, 3, 0);
              if ( *(_WORD *)(a1 + 48) == 209
                && *(_BYTE *)(a1 + 65) == 1
                && *(_WORD *)(a1 + 70) == 4
                && *(_BYTE *)(a1 + 105) == 1 )
              {
                v161 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                sub_408540(a1, v161);
              }
              else
              {
                v144 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                v145 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                v146 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xDu, v312, v146, v145, v144, 0);
              }
              goto LABEL_164;
            case 0xD2:
              v242 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v242, 0x3BEA45E214ADDC55LL, (int)v18, 0);
              v318.m128i_i32[3] = v18;
              v319 = 1;
              v243 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v294 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v294, v243, (int)v18, 0);
              goto LABEL_218;
            case 0xD6:
            case 0xDB:
              if ( *(_BYTE *)(a1 + 105) != 1 && (unsigned __int8)v312 > 1u )
                goto LABEL_63;
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              do
              {
                v234 = *(_QWORD *)(a1 + 832);
                v235 = *(int *)(v234 + 3776);
                v236 = *(_DWORD *)(v234 + 3776);
                if ( v235 > 3 )
                {
                  v236 = 0;
                  v235 = 0;
                }
                *(_DWORD *)(v234 + 3776) = v236 + 1;
                v237 = *(int *)(v234 + 4 * v235 + 3760);
              }
              while ( (unsigned int)sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3) == (_DWORD)v237
                   || (_DWORD)v237 == (unsigned int)sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3) );
              v238 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v238, 0x3BEA45E214ADDC55LL, v237, 0);
              if ( *(_WORD *)(a1 + 48) == 219 )
              {
                v275 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                v276 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x19u, (unsigned __int8)v312, v276, v275, 0, 0);
                v277 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                v278 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0x1Au, (unsigned __int8)v312, v278, v277, 3, 0);
                v279 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                v280 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                v281 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 0xCu, (unsigned __int8)v312, v281, v280, v279, 0);
                v282 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                sub_3FD520(a1, v282, v312);
              }
              else
              {
                v239 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
                v240 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
                sub_3F7E20(a1, 4u, (unsigned __int8)v312, v240, 0x3BEA45E214ADDC55LL, v239, 0);
              }
              v241 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, (unsigned __int8)v312, v237, 0x3BEA45E214ADDC55LL, v241, 0);
              goto LABEL_75;
            case 0xD8:
              v232 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v233 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v293 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x15u, (unsigned __int8)v312, v293, v233, v232, 0);
              goto LABEL_218;
            case 0xFD:
            case 0xFE:
            case 0xFF:
            case 0x100:
              v230 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v231 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FA190(a1, v231, v230);
              goto LABEL_75;
            case 0x102:
            case 0x106:
              v228 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v229 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_1D6740(a1, 15, 15, v229, v228, 0x43u);
              goto LABEL_264;
            case 0x103:
            case 0x104:
              v225 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v226 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v227 = *(_BYTE *)(a1 + 109);
              if ( v227 == 5 )
                v227 = 15;
              sub_1D6740(a1, 15, v227, v226, v225, 0x43u);
              goto LABEL_264;
            case 0x105:
              sub_16EFC0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1048LL), (unsigned __int64 *)(a1 + 40));
              v219 = *(_QWORD *)(a1 + 832);
              v220 = *(int *)(v219 + 3776);
              v221 = *(_DWORD *)(v219 + 3776);
              if ( v220 > 3 )
              {
                v221 = 0;
                v220 = 0;
              }
              *(_DWORD *)(v219 + 3776) = v221 + 1;
              v222 = *(_DWORD *)(v219 + 4 * v220 + 3760);
              v223 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x43u, 15, v223, 0x3BEA45E214ADDC55LL, v222, 0);
              a2 = _mm_load_si128(&v320);
              v224 = v321;
              v320.m128i_i32[3] = v222;
              v321 = 1;
              v319 = v224;
              v318 = a2;
              goto LABEL_264;
            case 0x107:
            case 0x108:
            case 0x25C:
              v216 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v217 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v218 = *(_BYTE *)(a1 + 109);
              if ( v218 == 5 )
                v218 = 15;
              sub_1D6740(a1, 15, v218, v217, v216, 0x3Fu);
              goto LABEL_264;
            case 0x109:
              a2 = _mm_load_si128(&v320);
              v191 = "__FBLD__";
              v319 = v321;
              v318 = a2;
              goto LABEL_313;
            case 0x10A:
              sub_408CD0(a1, (__int64)&v318, (__int64)&v320);
              LOBYTE(v311) = v13 & 0xF7;
              goto LABEL_264;
            case 0x10B:
            case 0x10C:
            case 0x10D:
              v207 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v208 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v209 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x45u, 15, v209, v208, v207, 0);
              goto LABEL_264;
            case 0x10E:
            case 0x10F:
            case 0x110:
              v203 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v204 = &v318;
              v205 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              goto LABEL_321;
            case 0x111:
            case 0x112:
            case 0x113:
              v203 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v204 = &v320;
              v205 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
LABEL_321:
              v206 = sub_3FAE20((__int64)v204, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x46u, 15, v206, v205, v203, 0);
              goto LABEL_264;
            case 0x114:
            case 0x115:
            case 0x116:
              v200 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v201 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v202 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x47u, 15, v202, v201, v200, 0);
              goto LABEL_264;
            case 0x117:
            case 0x118:
            case 0x119:
              v197 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v198 = &v318;
              v199 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              goto LABEL_317;
            case 0x11A:
            case 0x11B:
            case 0x11C:
              v197 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v198 = &v320;
              v199 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
LABEL_317:
              v292 = sub_3FAE20((__int64)v198, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x48u, 15, v292, v199, v197, 0);
              goto LABEL_264;
            case 0x11D:
              v191 = "sqrt";
              goto LABEL_313;
            case 0x11E:
              v194 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v195 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v196 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"__FSCALE__", v196, v195, v194);
              goto LABEL_264;
            case 0x11F:
              v284 = "__FPREM__";
              goto LABEL_397;
            case 0x122:
              v191 = "fabs";
              goto LABEL_313;
            case 0x123:
              v147 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v148 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x44u, 15, v148, 0x3BEA45E214ADDC55LL, v147, 0);
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
              v190 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              sub_3FA230(a1, 0, v190, *(double *)a2.m128i_i64);
LABEL_74:
              v30 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v31 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FA0C0(a1, v31, v30);
              goto LABEL_75;
            case 0x12B:
              v186 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v187 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_408A10(
                (_QWORD *)a1,
                (__int64)"tan",
                *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v187,
                v186,
                0xFFFFFFFF);
              goto LABEL_309;
            case 0x12C:
              v213 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v214 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3)
                   + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL);
              v215 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"atan2", *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) + v215, v214, v213);
              goto LABEL_264;
            case 0x12D:
              v191 = "__F2XM1__";
              goto LABEL_313;
            case 0x12E:
              v284 = "__FYL2X__";
              goto LABEL_393;
            case 0x12F:
              v284 = "__FYL2XP1__";
LABEL_393:
              v285 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v286 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v287 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              goto LABEL_394;
            case 0x130:
              v188 = 0;
              goto LABEL_310;
            case 0x131:
LABEL_309:
              v188 = 1;
              goto LABEL_310;
            case 0x132:
              v188 = 9;
              goto LABEL_310;
            case 0x133:
              v188 = 3;
              goto LABEL_310;
            case 0x134:
              v188 = 5;
              goto LABEL_310;
            case 0x135:
              v188 = 4;
              goto LABEL_310;
            case 0x136:
              v188 = 7;
LABEL_310:
              v189 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FA230(a1, v188, v189, *(double *)a2.m128i_i64);
              goto LABEL_264;
            case 0x13D:
            case 0x13E:
              v212 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 4u, 1, *(int *)(*(_QWORD *)(a1 + 832) + 444LL), 0x3BEA45E214ADDC55LL, v212, 0);
              goto LABEL_75;
            case 0x14F:
              v284 = "__FPREM1__";
LABEL_397:
              v285 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v286 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v287 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
LABEL_394:
              sub_408A10((_QWORD *)a1, (__int64)v284, v287, v286, v285);
              goto LABEL_264;
            case 0x150:
              v210 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL)
                   + sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v211 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)"cos", v211, v210, 0xFFFFFFFF);
              sub_408A10((_QWORD *)a1, (__int64)"sin", v210, v210, 0xFFFFFFFF);
              LOBYTE(v311) = 0;
              goto LABEL_264;
            case 0x151:
              v191 = "sin";
              goto LABEL_313;
            case 0x152:
              v191 = "cos";
LABEL_313:
              v192 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              v193 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_408A10((_QWORD *)a1, (__int64)v191, v193, v192, 0xFFFFFFFF);
LABEL_264:
              v149 = *(int *)(*(_QWORD *)(a1 + 832) + 444LL);
              v150 = get_dtype_size();
              sub_1D6310(a1, 0x3Du, v150, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v149, 0);
              goto LABEL_75;
            case 0x156:
              sub_3F7E20(a1, 4u, 0, 0, 0x3BEA45E214ADDC55LL, 8, 0);
              goto LABEL_75;
            case 0x2E9:
              v127 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v128 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 7u, (unsigned __int8)v312, v127, 0x3BEA45E214ADDC55LL, v298, 0);
              v129 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, 0x14u, (unsigned __int8)v312, v128, v298, v129, 0);
LABEL_218:
              sub_3FB3E0(a1, 9);
              goto LABEL_164;
            case 0x2F0:
              v125 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v126 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3FBD20(a1, v126, v125, v312, *(double *)a2.m128i_i64);
              goto LABEL_75;
            case 0x2F3:
              v122 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v123 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              v124 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_1D6C50(a1, 1u, (unsigned __int8)v312, v122, v123, v124);
              goto LABEL_75;
            case 0x2F4:
            case 0x2F5:
            case 0x2F6:
              v133 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
              v134 = sub_3FAE40(a1, 2, 0, *(double *)a2.m128i_i64, a3);
              v135 = *(_WORD *)(a1 + 48);
              if ( v135 == 756 )
              {
                v136 = 24;
              }
              else
              {
                v136 = 22;
                if ( v135 == 758 )
                  v136 = 23;
              }
              v137 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
              sub_3F7E20(a1, v136, (unsigned __int8)v312, v133, v134, v137, 0);
              goto LABEL_75;
            default:
              goto LABEL_63;
          }
LABEL_412:
          BUG();
        }
        v50 = byte_201011;
        if ( !_bittest64((const __int64 *)&v50, (unsigned int)(v21 - 122))
          || (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
        {
          goto LABEL_49;
        }
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
          goto LABEL_63;
        if ( (_WORD)v21 == 122 )
        {
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) > 2u )
          {
LABEL_190:
            v80 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
            v81 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
            v82 = (unsigned __int8)v312;
            v83 = v81;
LABEL_191:
            sub_3F7E20(a1, 4u, v82, v83, 0x3BEA45E214ADDC55LL, v80, 0);
            goto LABEL_75;
          }
          goto LABEL_63;
        }
        if ( (_WORD)v21 != 126 )
          goto LABEL_49;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          goto LABEL_63;
LABEL_138:
        v51 = sub_3FAE20((__int64)&v318, *(double *)a2.m128i_i64, a3);
        v52 = sub_3FAE20((__int64)&v320, *(double *)a2.m128i_i64, a3);
        sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), (unsigned __int8)v312, v52, v51, 0);
      }
LABEL_75:
      if ( (v311 & 4) == 0 )
      {
LABEL_76:
        if ( (v311 & 8) == 0 )
          return *(unsigned __int8 *)(a1 + 896);
        v59 = 1;
        goto LABEL_157;
      }
      if ( v319 || (unsigned __int8)sub_3FACB0((__int64)&v318, *(double *)a2.m128i_i64, a3) )
      {
LABEL_153:
        v59 = sub_3FB270(a1, 0, v318.m128i_i32[3], 1, *(double *)a2.m128i_i64, a3);
        if ( (v311 & 8) == 0 )
        {
LABEL_154:
          if ( v59 )
            return *(unsigned __int8 *)(a1 + 896);
          return 4294967294LL;
        }
LABEL_157:
        if ( !v321 && !(unsigned __int8)sub_3FACB0((__int64)&v320, *(double *)a2.m128i_i64, a3) )
          goto LABEL_178;
        v59 &= sub_3FB270(a1, 1, v320.m128i_i32[3], 1, *(double *)a2.m128i_i64, a3);
        goto LABEL_154;
      }
LABEL_178:
      sub_3EB430(*(double *)a2.m128i_i64);
    }
    while ( 1 )
    {
      v40 = v39[4];
      v41 = 0;
      v42 = (_QWORD *)v39[3];
      if ( v38 < v40 )
      {
        v42 = (_QWORD *)v39[2];
        v41 = 1;
      }
      if ( !v42 )
        break;
      v39 = v42;
    }
    if ( v41 )
    {
      if ( *(_QWORD **)(v37 + 1024) == v39 )
        goto LABEL_107;
      v300 = *(_QWORD *)(a1 + 40);
      v305 = *(_QWORD *)(a1 + 8);
      v53 = std::_Rb_tree_decrement();
      v38 = v300;
      v37 = v305;
      v40 = *(_QWORD *)(v53 + 32);
    }
    if ( v40 >= v38 )
      goto LABEL_32;
LABEL_107:
    v299 = v37;
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(v299 + 1040);
    goto LABEL_32;
  }
LABEL_23:
  if ( (v13 & 2) != 0 )
  {
    if ( v16 != 16 )
    {
      if ( v16 == 18
        && *(_BYTE *)(a1 + 56) == 34
        && *(_BYTE *)(a1 + 65) == 2
        && *(_QWORD *)(a1 + 80) == 16
        && (unsigned __int8)sub_3F8CD0(a1) )
      {
        return 0;
      }
LABEL_29:
      sub_3FC1F0(a1);
      v16 = *(_WORD *)(a1 + 48);
      goto LABEL_30;
    }
    v54 = sub_3FD1A0(a1, v303);
    if ( v54 != -1 )
    {
      v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v54);
      v56 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
      v57 = v55;
      v58 = get_dtype_size();
      sub_1D6310(a1, 3u, v58, v56, 0x3BEA45E214ADDC55LL, v57, 0);
      return *(unsigned __int8 *)(a1 + 896);
    }
    v74 = sub_3FD0D0(a1, v303, a1 + 64);
    v75 = *(_QWORD *)(a1 + 832);
    v76 = v74;
    v77 = v74;
    v78 = *(__int64 (**)())(*(_QWORD *)v75 + 232LL);
    if ( v78 == sub_3F03B0 )
    {
      if ( sub_CFF70() == 1 )
      {
LABEL_183:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 800) + 144LL) )
          goto LABEL_188;
        v323 = -1;
        v324 = 0;
        v79 = (unsigned __int64 *)v326;
        v325 = 0;
        v322 = -1;
        do
        {
          *(_WORD *)v79 = 0;
          v79 += 5;
          *((_WORD *)v79 - 19) = 0;
          *((_WORD *)v79 - 18) = 0;
          *((_DWORD *)v79 - 2) = 0;
          *((_WORD *)v79 - 17) = 0;
          *((_OWORD *)v79 - 2) = 0;
          *(v79 - 2) = 0;
        }
        while ( v79 != &v330 );
        if ( !(unsigned int)decode_insn() || (_WORD)v324 != 209 || v326[1] != 1 || v327 != 4 || v328 != 1 || v329 )
LABEL_188:
          sub_408540(a1, 8u);
        return 0;
      }
    }
    else if ( ((unsigned int (__fastcall *)(__int64, __int64))v78)(v75, v77) != -1 )
    {
      goto LABEL_183;
    }
    if ( (unsigned __int8)sub_409490(a1, v76) )
      return *(unsigned __int8 *)(a1 + 896);
    *(_QWORD *)v315 = 0;
    if ( (unsigned __int8)sub_381D00(*(_QWORD *)(a1 + 832), v76, (__int64)v315, 0) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) == 9 )
        *(_DWORD *)(a1 + 892) = sub_40FAA0((_QWORD *)a1);
      clear_tinfo_t();
    }
    clear_tinfo_t();
    goto LABEL_29;
  }
LABEL_30:
  if ( v16 != 86 )
    goto LABEL_31;
  if ( *(_BYTE *)(a1 + 65) != 7 )
    goto LABEL_31;
  v49 = sub_3FD0D0(a1, v303, a1 + 64);
  if ( !(unsigned __int8)sub_409490(a1, v49) )
    goto LABEL_31;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
    sub_3FD260(a1);
  return 1;
}
