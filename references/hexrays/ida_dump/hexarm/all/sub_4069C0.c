__int64 __fastcall sub_4069C0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 *v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned int v13; // r14d
  int v14; // eax
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r15d
  unsigned int v22; // eax
  __int16 v23; // ax
  char v24; // al
  __int64 first_fcref_from; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // ax
  __int16 v29; // ax
  _DWORD *v30; // rax
  __int64 v31; // rsi
  unsigned __int8 v32; // bp
  __int64 v33; // rdx
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // r15
  int v38; // r12d
  __int64 v39; // r14
  __int64 v40; // r12
  int v41; // r11d
  __int16 v42; // ax
  char v43; // al
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  signed int v46; // r11d
  char v47; // al
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r10
  int v51; // eax
  __int64 v52; // kr00_8
  _QWORD *v53; // rbx
  unsigned __int64 v54; // rsi
  _QWORD *v55; // rbp
  _QWORD *v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  _QWORD *v61; // rbp
  __int64 v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // r15
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rax
  int v71; // edx
  unsigned __int8 v72; // bl
  __int64 v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rcx
  char v76; // al
  unsigned int v77; // r11d
  __int16 v78; // ax
  unsigned __int8 v79; // r15
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rcx
  bool v83; // bl
  __int64 v84; // rax
  unsigned int v85; // ebx
  double v86; // xmm0_8
  int v87; // eax
  double v88; // xmm0_8
  int v89; // eax
  __int64 v90; // rax
  int v91; // r8d
  unsigned int v92; // r9d
  int v93; // ecx
  char v94; // al
  __int64 v95; // r8
  bool v96; // dl
  _QWORD *v97; // rbx
  unsigned __int64 v98; // rcx
  __int64 v99; // rsi
  _QWORD *v100; // rax
  _QWORD *v101; // rbp
  _QWORD *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rax
  char v105; // al
  __int64 v106; // rcx
  unsigned __int8 v107; // bl
  __int64 v108; // rcx
  unsigned __int8 v109; // bl
  char v110; // al
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // r12
  __int64 v114; // r15
  int dtype_size; // eax
  int v116; // ebx
  int v117; // edx
  __int16 v118; // dx
  unsigned __int8 v119; // bl
  unsigned __int8 v120; // bl
  __int64 v121; // rcx
  __int64 v122; // rbx
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  double v127; // xmm0_8
  int v128; // eax
  __int64 v129; // rdx
  unsigned __int8 v130; // al
  __int64 v131; // rax
  __int64 v132; // rcx
  unsigned __int8 v133; // al
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rsi
  int v140; // ebx
  __int64 v141; // r15
  __int64 v142; // r12
  unsigned __int8 v143; // al
  __int64 v144; // rax
  int v145; // eax
  __int64 v146; // rcx
  __int64 v147; // r12
  int v148; // eax
  int v149; // ebx
  unsigned __int8 v150; // cl
  __int64 v151; // r12
  __int64 v152; // rbx
  int v153; // eax
  int v154; // ebx
  int v155; // r9d
  __int16 v156; // ax
  __int64 v157; // rcx
  __int64 v158; // rbx
  unsigned int v159; // edx
  int v160; // eax
  int v161; // eax
  unsigned __int8 v162; // bl
  unsigned __int8 v163; // al
  char v164; // al
  unsigned __int8 v165; // al
  unsigned int v166; // edx
  __int16 v167; // ax
  __int64 v168; // r15
  int v169; // eax
  double v170; // xmm0_8
  int v171; // eax
  char v172; // al
  __int64 v173; // rdx
  unsigned __int8 v174; // al
  __int64 v175; // rsi
  signed int v176; // r11d
  char v177; // r8
  unsigned __int8 v178; // bl
  char v179; // al
  unsigned int v180; // r11d
  __int64 v181; // rbx
  __int64 v182; // rbp
  __int64 v183; // rcx
  unsigned __int8 v184; // al
  unsigned __int8 v185; // al
  int v186; // eax
  int v187; // eax
  unsigned int v188; // ebx
  unsigned __int8 v189; // al
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // rax
  int v193; // ebx
  __int64 v194; // [rsp+0h] [rbp-88h]
  __int64 v195; // [rsp+0h] [rbp-88h]
  __int64 v196; // [rsp+0h] [rbp-88h]
  char v197; // [rsp+0h] [rbp-88h]
  __int64 v198; // [rsp+0h] [rbp-88h]
  __int64 v199; // [rsp+0h] [rbp-88h]
  __int64 v200; // [rsp+0h] [rbp-88h]
  __int64 v201; // [rsp+0h] [rbp-88h]
  __int64 v202; // [rsp+0h] [rbp-88h]
  __int64 v203; // [rsp+0h] [rbp-88h]
  __int64 v204; // [rsp+8h] [rbp-80h]
  __int64 v205; // [rsp+8h] [rbp-80h]
  __int64 v206; // [rsp+8h] [rbp-80h]
  __int64 v207; // [rsp+8h] [rbp-80h]
  __int64 v208; // [rsp+8h] [rbp-80h]
  __int64 v209; // [rsp+8h] [rbp-80h]
  __int64 v210; // [rsp+8h] [rbp-80h]
  __int64 v211; // [rsp+8h] [rbp-80h]
  __int64 v212; // [rsp+8h] [rbp-80h]
  __int64 v213; // [rsp+8h] [rbp-80h]
  __int64 v214; // [rsp+8h] [rbp-80h]
  __int64 v215; // [rsp+10h] [rbp-78h]
  _BOOL4 v216; // [rsp+10h] [rbp-78h]
  signed int v217; // [rsp+10h] [rbp-78h]
  _QWORD *v218; // [rsp+10h] [rbp-78h]
  signed int v219; // [rsp+10h] [rbp-78h]
  __int64 v220; // [rsp+10h] [rbp-78h]
  int v221; // [rsp+10h] [rbp-78h]
  int v222; // [rsp+10h] [rbp-78h]
  signed int v223; // [rsp+18h] [rbp-70h]
  signed int v224; // [rsp+18h] [rbp-70h]
  bool v225; // [rsp+18h] [rbp-70h]
  int v226; // [rsp+20h] [rbp-68h]
  _QWORD *v227; // [rsp+20h] [rbp-68h]
  signed int v228; // [rsp+20h] [rbp-68h]
  signed int v229; // [rsp+28h] [rbp-60h]
  unsigned __int64 v230; // [rsp+28h] [rbp-60h]
  int v231; // [rsp+34h] [rbp-54h]
  signed int v232; // [rsp+38h] [rbp-50h]
  unsigned __int8 v233; // [rsp+3Fh] [rbp-49h]
  int v234; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v235; // [rsp+48h] [rbp-40h]

  v235 = __readfsqword(0x28u);
  v4 = a2;
  v215 = a1 + 64;
  v5 = a1 + 64;
  do
  {
    if ( sub_3EDFE0(a1, v5) )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
      if ( !(_BYTE)v4 )
        goto LABEL_27;
LABEL_12:
      if ( (_BYTE)v4 == 1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1184LL) = *(_DWORD *)(a1 + 872);
      v234 = 0;
      if ( *(_QWORD *)(a1 + 864) != *(_QWORD *)(a1 + 40) )
      {
        v15 = *(_WORD *)(a1 + 48);
        if ( v15 != 475 )
        {
          if ( v15 != 32 )
          {
LABEL_17:
            if ( v15 == 34 && (*(_BYTE *)(a1 + 128) & 8) != 0 )
              goto LABEL_24;
LABEL_18:
            if ( sub_CF9B0(0xBBDu, &v234, a1 + 24) != 1 )
            {
              if ( (_BYTE)v4 == 1 )
                sub_3FA600(a1, (__int64)&v234, v16, v17, v18, v19);
              return 0;
            }
            goto LABEL_24;
          }
          v60 = *(unsigned __int16 *)(a1 + 70);
          if ( (unsigned int)(v60 - 45) > 7 && (unsigned int)(v60 - 129) > 7 )
            goto LABEL_18;
          v61 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 920LL);
          if ( (getinf(57) & 0xF) == 6 )
          {
            if ( !v61 )
              sub_3EAEE0(a3, 57, v5);
            if ( (v61[20] || v61[21]) && v61[14] )
            {
              v15 = *(_WORD *)(a1 + 48);
              goto LABEL_17;
            }
          }
        }
      }
LABEL_24:
      v5 = *(unsigned int *)(a1 + 872);
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 832) + 176LL))(
              *(_QWORD *)(a1 + 832),
              v5,
              v13);
      v7 = v22;
      if ( v234 != 1 << v22 )
      {
        v23 = *(_WORD *)(a1 + 48);
        if ( v23 == 32 )
        {
          if ( *(_WORD *)(a1 + 70) != 14 )
            goto LABEL_27;
        }
        else if ( v23 != 12
               || *(unsigned __int16 *)(a1 + 70) != (_DWORD)v7
               || *(_QWORD *)(a1 + 864) != *(_QWORD *)(a1 + 40) )
        {
          goto LABEL_27;
        }
      }
      return 0;
    }
    v5 += 40;
  }
  while ( v5 != v8 );
  v10 = (unsigned __int8 *)(a1 + 69);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v12 = *(int *)(v11 + 80);
  v13 = *(_DWORD *)(v11 + 80);
  do
  {
    if ( v12 >= get_dtype_size(*v10) )
      goto LABEL_10;
    v14 = *(unsigned __int16 *)(a1 + 48);
    if ( (unsigned __int16)v14 > 0x4Fu )
    {
      if ( (unsigned __int16)v14 > 0x11Bu )
      {
        if ( (unsigned __int16)(v14 - 871) <= 1u )
          goto LABEL_10;
      }
      else if ( (unsigned __int16)v14 > 0x119u || (unsigned __int16)(v14 - 158) <= 1u )
      {
        goto LABEL_10;
      }
    }
    else if ( (unsigned __int16)v14 > 0x28u )
    {
      v7 = 0x7FC0000161LL;
      if ( _bittest64(&v7, (unsigned int)(v14 - 41)) )
        goto LABEL_10;
    }
    else if ( (unsigned __int16)(v14 - 3) <= 1u )
    {
      goto LABEL_10;
    }
    if ( *(char *)(a1 + 54) >= 0 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC6E6u, v5, a3);
LABEL_432:
      BUG();
    }
LABEL_10:
    v10 += 40;
  }
  while ( v10 != (unsigned __int8 *)(a1 + 389) );
  if ( (_BYTE)v4 )
    goto LABEL_12;
LABEL_27:
  v24 = *(_BYTE *)(a1 + 56) & 0xF;
  if ( v24 == 15 )
    return 0;
  if ( v24 != 14 && (unsigned __int8)sub_3FAFB0(a1, a3) )
    return 1;
  if ( (*(_WORD *)(a1 + 52) & 0x6004) != 0 )
    goto LABEL_52;
  first_fcref_from = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v26 != first_fcref_from )
  {
    v27 = first_fcref_from & v26;
    if ( first_fcref_from != -1 )
      first_fcref_from = v27;
  }
  v28 = *(_WORD *)(a1 + 48);
  if ( v28 == 3 || v28 == 41 )
  {
    if ( !(unsigned __int8)sub_3F0A30((_QWORD *)a1, &v234, first_fcref_from) )
      goto LABEL_52;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
      sub_3F56D0(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
    return 1;
  }
  if ( !(unsigned __int8)is_call_insn(a1 + 24, v5, v6, v7, v8, v9) )
    goto LABEL_52;
  v29 = *(_WORD *)(a1 + 48);
  if ( v29 == 4 || v29 == 46 )
  {
    if ( first_fcref_from == -1 )
    {
      v63 = *(_DWORD **)(a1 + 832);
      v223 = v63[155];
      v226 = v63[156];
      v229 = v63[157];
      v231 = v63[158];
      goto LABEL_54;
    }
LABEL_39:
    v20 = 0;
    if ( !(unsigned int)sub_CF9B0(0xBC0u, first_fcref_from) )
    {
      if ( !(unsigned __int8)sub_3F0A30((_QWORD *)a1, &v234, first_fcref_from) )
        goto LABEL_52;
      return (unsigned __int8)v234;
    }
    return v20;
  }
  first_fcref_from = get_first_fcref_from(*(_QWORD *)(a1 + 40));
  if ( first_fcref_from != -1 )
    goto LABEL_39;
LABEL_52:
  v30 = *(_DWORD **)(a1 + 832);
  v223 = v30[155];
  v226 = v30[156];
  v229 = v30[157];
  v231 = v30[158];
  if ( *(_WORD *)(a1 + 48) == 354 && *(_WORD *)(a1 + 70) == 31 && *(_WORD *)(a1 + 110) == 25 )
  {
LABEL_92:
    sub_3F6660(a1);
    return 0;
  }
LABEL_54:
  v31 = a1 + 64;
  v32 = sub_3EE110(a1, v215, a3);
  v33 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v34 = *(unsigned __int16 *)(a1 + 48);
  v35 = *(_DWORD *)(v33 + 104);
  if ( v35 > v34 || *(_DWORD *)(v33 + 108) <= v34 )
  {
    v38 = 0;
    v37 = 0;
    if ( *(_BYTE *)(a1 + 65) != 1 )
      goto LABEL_73;
    v31 = 0;
    v39 = (int)sub_3FCA60(a1, 0, 0, a3);
  }
  else
  {
    v36 = *(_QWORD *)(v33 + 112) + 16LL * (v34 - v35);
    v37 = *(unsigned int *)(v36 + 8);
    v38 = *(_DWORD *)(v36 + 8) & 0x200;
    if ( (v37 & 0x100) != 0 || *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_58;
LABEL_73:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && !*(_QWORD *)(a1 + 72) && *(char *)(a1 + 98) > 0
      || (v39 = v223, *(char *)(a1 + 54) < 0) )
    {
LABEL_58:
      v31 = 0;
      v39 = (int)sub_3FCA60(a1, 0, 0, a3);
    }
    if ( v38 )
    {
LABEL_60:
      v31 = 1;
      v40 = (int)sub_3FCA60(a1, 1, 0, a3);
      goto LABEL_61;
    }
  }
  if ( *(_BYTE *)(a1 + 105) == 1
    || *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && !*(_QWORD *)(a1 + 112) && *(char *)(a1 + 138) > 0 )
  {
    goto LABEL_60;
  }
  v40 = v226;
  if ( *(char *)(a1 + 54) < 0 )
    goto LABEL_60;
LABEL_61:
  v41 = v39;
  if ( *(_BYTE *)(a1 + 145) )
  {
    v31 = 2;
    v59 = sub_3FCA60(a1, 2, 0, a3);
    v41 = v40;
    v40 = v59;
  }
  v42 = *(_WORD *)(a1 + 48);
  if ( (unsigned __int16)(v42 - 515) <= 1u )
    return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 112), v32, v39, -1, a3, -1);
  if ( (unsigned __int16)(v42 - 517) <= 2u )
    return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 152), v32, v39, v41, a3, v41);
  v232 = v41;
  v43 = sub_3F0CB0(a1, a3);
  v46 = v232;
  v233 = v43;
  if ( !v43 || (v47 = sub_3EE5A0(a1), v46 = v232, v47) )
  {
LABEL_101:
    v53 = *(_QWORD **)(a1 + 8);
    v54 = *(_QWORD *)(a1 + 40);
    v55 = (_QWORD *)v53[127];
    v56 = v53 + 126;
    if ( v55 )
    {
      while ( 1 )
      {
        v44 = v55[4];
        v45 = 0;
        v57 = (_QWORD *)v55[3];
        if ( v54 < v44 )
        {
          v57 = (_QWORD *)v55[2];
          v45 = 1;
        }
        if ( !v57 )
          break;
        v55 = v57;
      }
      if ( !(_BYTE)v45 )
        goto LABEL_108;
    }
    else
    {
      v55 = v53 + 126;
    }
    if ( v55 == (_QWORD *)v53[128] )
      goto LABEL_109;
    v217 = v46;
    v62 = std::_Rb_tree_decrement(v55, v54, v44, v45, v56);
    v56 = v53 + 126;
    v44 = *(_QWORD *)(v62 + 32);
    v46 = v217;
LABEL_108:
    if ( v44 >= v54 )
    {
LABEL_112:
      sub_4066C0(a1, v37, v39, v46, v40, a3);
      return 0;
    }
LABEL_109:
    v216 = 1;
    if ( v55 != v56 )
      v216 = v54 < v55[4];
    v224 = v46;
    v227 = v56;
    v58 = operator new(0x28u);
    *(_QWORD *)(v58 + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance(v216, v58, v55, v227);
    ++v53[130];
    v46 = v224;
    goto LABEL_112;
  }
  v51 = *(unsigned __int16 *)(a1 + 48);
  v44 = v233;
  if ( (unsigned __int16)v51 > 0x8Du )
  {
    if ( (_WORD)v51 == 343 )
      goto LABEL_141;
    if ( (_WORD)v51 != 416 )
    {
      if ( (unsigned __int16)v51 > 0xE2u )
      {
        v44 = (unsigned __int16)(v51 - 236);
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0xEC:
            v122 = v223;
            sub_3F8F20(a1, 2u, 7u, v40, v223, 1u);
            v123 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            sub_3F8F20(a1, 2u, 7u, v123, v226, 1u);
            sub_3F6E70(a1, 0xEu, 7u, v122, v226, v122, a3, 0, 1);
            sub_3F8F20(a1, 2u, 7u, v39, v226, 1u);
            sub_3F6E70(a1, 0xCu, 7u, v122, v226, v122, a3, 0, 1);
            sub_3F8F20(a1, 2u, 7u, v232, v226, 1u);
            sub_3F6E70(a1, 0xCu, 7u, v122, v226, v122, a3, 0, 1);
            sub_3F6E70(a1, 4u, 2u, v223, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
            v127 = (*(double (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 832)
                                                                                                + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 110),
                     v124,
                     v125,
                     v126,
                     v200);
            sub_3F6E70(a1, 4u, 2u, v223 + 4, 0x3BEA45E214ADDC55LL, v128, v127, 0, 1);
            return 0;
          case 0xFA:
          case 0xFE:
            sub_3F8F20(a1, (_WORD)v51 != 250, 2u, v40, v223, 0);
            sub_3F6E70(a1, 0xCu, v32, v232, v223, (int)v39, a3, 0, 1);
            return 0;
          case 0xFB:
          case 0xFF:
            sub_3F8F20(a1, (_WORD)v51 != 251, v32, v40, v232, 0);
            return 0;
          case 0x10C:
            v121 = (int)v40;
            v109 = v32;
            LODWORD(v40) = v229;
            sub_3F6E70(a1, 7u, v32, v121, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
            v46 = v232;
LABEL_231:
            sub_3F6E70(a1, 0x13u, v109, v46, (int)v40, (int)v39, a3, 0, 1);
            v66 = v198;
            v65 = v210;
            goto LABEL_160;
          case 0x10D:
            v65 = 4;
            sub_3F6E70(a1, 4u, 1u, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39 + 2, a3, 0, 1);
            goto LABEL_160;
          case 0x10E:
          case 0x10F:
            v118 = 500;
            if ( (_WORD)v51 == 270 )
              v118 = 499;
            sub_3F7310(
              a1,
              (unsigned int)v118,
              v39,
              v232,
              *(_BYTE *)(a1 + 69),
              *(_QWORD *)(a1 + 152),
              a3,
              *(_QWORD *)(a1 + 152) + *(_DWORD *)(a1 + 192) - 1);
            return 0;
          case 0x110:
          case 0x1F5:
            v113 = *(_QWORD *)(a1 + 152);
            v114 = *(_QWORD *)(a1 + 192);
            dtype_size = get_dtype_size(v32);
            v116 = v113;
            v117 = v114 + v113 - 1;
            if ( *(_WORD *)(a1 + 48) == 272 )
            {
              v117 = v114 - 1;
              v116 = (8 * dtype_size - 1) & (8 * dtype_size - v113);
            }
            sub_3F7310(a1, 498, v39, v232, *(_BYTE *)(a1 + 69), v116, a3, v117);
            return 0;
          case 0x111:
            v111 = *(_QWORD *)(a1 + 152);
            v112 = 0;
            if ( (unsigned __int64)(int)v111 <= 0x1F )
              v112 = 1 << v111;
            sub_3F56D0(a1, 3u, v32, (unsigned int)~((v112 - 1) << *(_QWORD *)(a1 + 112)), 0x3BEA45E214ADDC55LL, v229, 0);
            sub_3F6E70(a1, 0x14u, v32, (int)v39, v229, (int)v39, a3, 0, 1);
            return 0;
          case 0x116:
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL)
                                                     + *(unsigned __int16 *)(a1 + 50);
            return 0;
          case 0x117:
LABEL_197:
            v85 = 13;
LABEL_198:
            v86 = (*(double (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 832) + 168LL))(
                    *(_QWORD *)(a1 + 832),
                    *(unsigned __int16 *)(a1 + 150),
                    v44);
            sub_3F6E70(a1, 0xEu, v32, v232, v87, v223, v86, 0, 1);
            v88 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                    *(_QWORD *)(a1 + 832),
                    *(unsigned __int16 *)(a1 + 190));
            v65 = v85;
            sub_3F6E70(a1, v85, v32, v89, v223, (int)v39, v88, 0, 1);
            v69 = v206;
            goto LABEL_160;
          case 0x118:
            sub_3F6E70(a1, 0x10u, *(_BYTE *)(a1 + 69), v232, (int)v40, (int)v39, a3, 0, 1);
            return 0;
          case 0x119:
            sub_3F6E70(a1, 0xFu, *(_BYTE *)(a1 + 69), v232, (int)v40, (int)v39, a3, 0, 1);
            return 0;
          case 0x11A:
          case 0x11B:
            v166 = 32;
            if ( (_WORD)v51 == 282 )
              v166 = 33;
            sub_3FA4B0(a1, a1 + 24, v166, v232, 1);
            return 0;
          case 0x132:
          case 0x232:
LABEL_352:
            v79 = v32;
            v80 = (int)v39;
            LOBYTE(v81) = sub_3ED380(v32);
            v82 = v232;
            v65 = 12;
            if ( (_BYTE)v81 )
              v65 = 69;
            goto LABEL_178;
          case 0x136:
          case 0x137:
          case 0x14B:
          case 0x15F:
          case 0x166:
          case 0x16B:
          case 0x16C:
LABEL_134:
            sub_3F7A10(a1, (unsigned int)(char)v32, v39, v232, v40, a3);
            return 0;
          case 0x142:
          case 0x143:
          case 0x24E:
          case 0x24F:
LABEL_143:
            v20 = 0;
            v72 = v32;
            goto LABEL_144;
          case 0x145:
            v165 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
            sub_3F8D80(a1, v165, v40, v32, v232);
            return 0;
          case 0x149:
          case 0x272:
            v162 = v32;
            if ( (_WORD)v51 == 329 )
            {
              v163 = sub_3ED380(v32);
              v46 = v232;
              v65 = 72;
              if ( !v163 )
              {
                v164 = *(_BYTE *)(a1 + 57);
                v65 = 16;
                if ( v164 < 0 )
                  v65 = 16 - (unsigned int)((unsigned __int8)((v164 & 0x7F) - 9) < 4u);
              }
            }
            else
            {
              v65 = 72;
            }
LABEL_320:
            sub_3F56D0(a1, v65, v162, v46, (int)v40, (int)v39, 0);
            goto LABEL_160;
          case 0x14D:
          case 0x14E:
          case 0x15B:
          case 0x15D:
LABEL_179:
            v83 = (unsigned __int16)(v51 - 118) <= 1u || (_WORD)v51 == 333 || (_WORD)v51 == 347;
            sub_3F6E70(a1, 0x47u, v32, v232, (int)v40, v223, a3, 0, 1);
            v65 = 70 - (unsigned int)v83;
            sub_3F6E70(a1, v65, v32, (int)v39, v223, (int)v39, a3, 0, 1);
            v68 = v195;
            goto LABEL_160;
          case 0x14F:
          case 0x150:
          case 0x168:
          case 0x169:
LABEL_170:
            sub_3F6E70(a1, 0x47u, v32, v232, (int)v40, v223, a3, 0, 1);
            v78 = *(_WORD *)(a1 + 48);
            if ( v78 == 335 || v78 == 360 || (unsigned __int16)(v78 - 127) <= 1u )
              sub_3F6E70(a1, 0x44u, v32, v223, 0x3BEA45E214ADDC55LL, v223, a3, 0, 1);
            v65 = 70;
            sub_3F6E70(a1, 0x46u, v32, v223, (int)v39, (int)v39, a3, 0, 1);
            goto LABEL_160;
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
            v161 = sub_3FB520(a1, 1, v223, a3);
            sub_3F6B30(a1, 2u, *(unsigned __int16 *)(a1 + 48) - 338, v161, v215, a3);
            sub_3F9F40(a1, a1 + 104, v223, a3);
            return 0;
          case 0x158:
LABEL_350:
            sub_3F6E70(a1, 4u, v32, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
            return 0;
          case 0x164:
          case 0x29B:
LABEL_176:
            v79 = v32;
            v80 = (int)v39;
            LOBYTE(v81) = sub_3ED380(v32);
            v82 = v232;
            v65 = 14;
            if ( (_BYTE)v81 )
              v65 = 71;
            goto LABEL_178;
          case 0x167:
          case 0x2A3:
            goto LABEL_166;
          case 0x16A:
LABEL_167:
            if ( sub_3ED380(v32) )
            {
              sub_3F56D0(a1, 0x47u, v32, v232, v40, v223, 0);
              v65 = 68;
            }
            else
            {
              sub_3F56D0(a1, 0xEu, v32, v232, v40, v223, 0);
              v65 = 5;
            }
            sub_3F56D0(a1, v65, v32, v223, 0x3BEA45E214ADDC55LL, (int)v39, 0);
            goto LABEL_160;
          case 0x172:
LABEL_413:
            sub_3F5D80((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), v215, v4, 193);
            return 0;
          case 0x173:
LABEL_412:
            sub_3F5D80((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), v215, v4, 80);
            return 0;
          case 0x19C:
          case 0x19D:
          case 0x19E:
          case 0x19F:
            v160 = sub_3FB520(a1, 1, v223, a3);
            sub_3F6B30(a1, 1u, *(unsigned __int16 *)(a1 + 48) - 411, v160, v215, a3);
            sub_3F9F40(a1, a1 + 104, v223, a3);
            return 0;
          case 0x1A1:
          case 0x1D9:
LABEL_164:
            sub_3FD520(a1, 1, a3);
            return 0;
          case 0x1A2:
          case 0x305:
LABEL_191:
            v79 = v32;
            v80 = (int)v39;
            LOBYTE(v81) = sub_3ED380(v32);
            v82 = v232;
            v65 = 13;
            if ( (_BYTE)v81 )
              v65 = 70;
LABEL_178:
            v205 = v81;
            sub_3F56D0(a1, v65, v79, v82, v40, v80, 0);
            v69 = v205;
            goto LABEL_160;
          case 0x1A6:
            sub_3F6E70(a1, 4u, v32, v39, 0x3BEA45E214ADDC55LL, v231, a3, 0, 1);
            sub_3F6E70(a1, 4u, v32, v40, 0x3BEA45E214ADDC55LL, v39, a3, 0, 1);
            sub_3F6E70(a1, 4u, v32, v231, 0x3BEA45E214ADDC55LL, v40, a3, 0, 1);
            return 0;
          case 0x1B3:
            return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_BYTE *)(a1 + 56) & 0xF, v32, v39, v232, a3, v40);
          case 0x1D4:
          case 0x1D5:
            v158 = v223;
            sub_3F56D0(a1, 3u, v32, 1, 0x3BEA45E214ADDC55LL, v223, 0);
            sub_3F6E70(a1, 0x16u, v32, v158, v232, v158, a3, 0, 1);
            sub_3F6E70(a1, 0x14u, v32, (int)v39, v158, v158, a3, 0, 1);
            v159 = 32;
            if ( *(_WORD *)(a1 + 48) == 468 )
              v159 = 33;
            sub_3FA4B0(a1, a1 + 24, v159, v223, 2);
            return 0;
          case 0x1D6:
            goto LABEL_336;
          case 0x1D7:
LABEL_335:
            v172 = sub_3F4EC0(a1, a1 + 24, (unsigned int)v232, v45, v48, v49, a3);
            v46 = v232;
            if ( v172 )
              return 0;
LABEL_336:
            v173 = *(_QWORD *)(a1 + 832);
            v174 = 2;
            if ( *(_DWORD *)(v173 + 84) == 8 )
              v174 = 7;
            sub_3F56D0(
              a1,
              0x36u,
              v174,
              0x3BEA45E214ADDC55LL,
              *(int *)(v173 + 64),
              v46,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
            return 0;
          case 0x1D8:
          case 0x1E4:
          case 0x1F1:
LABEL_128:
            v64 = a1 + 24;
            goto LABEL_129;
          case 0x1DA:
          case 0x1DC:
            sub_3FD1A0(a1, (unsigned int)v39, v232, a3);
            return 0;
          case 0x1DB:
          case 0x1DD:
            goto LABEL_356;
          case 0x1EC:
          case 0x1ED:
          case 0x273:
            if ( sub_3EE080(a1, v215) )
            {
              if ( *(_WORD *)(a1 + 48) == 493 )
              {
                v108 = (int)v40;
                LODWORD(v40) = v229;
                sub_3F6E70(a1, 7u, v32, v108, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
              }
LABEL_228:
              v65 = (unsigned int)v39;
              sub_3F8030(a1, v39, v40, a3);
            }
            else
            {
              sub_3F6E70(a1, 4u, v32, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
              v66 = v202;
              v65 = v213;
            }
            goto LABEL_160;
          case 0x1EE:
            goto LABEL_151;
          case 0x1EF:
            v75 = (int)v40;
            LODWORD(v40) = v229;
            sub_3F6E70(a1, 7u, v32, v75, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
            v46 = v232;
LABEL_151:
            sub_3F56D0(a1, 4u, v32, (int)v40, 0x3BEA45E214ADDC55LL, v46, 0);
            return 0;
          case 0x1F0:
            sub_3F56D0(a1, 3u, v32, ~(0xFFFFLL << *(_QWORD *)(a1 + 128)), 0x3BEA45E214ADDC55LL, v229, 0);
            sub_3F6E70(a1, 0x14u, v32, (int)v39, v229, v229, a3, 0, 1);
            v65 = 19;
            sub_3F6E70(a1, 0x13u, v32, (int)v40, v229, (int)v39, a3, 0, 1);
            v67 = v212;
            goto LABEL_160;
          case 0x1F2:
          case 0x1F3:
          case 0x1F4:
            sub_3F7310(
              a1,
              (unsigned __int16)v51,
              v39,
              v232,
              *(_BYTE *)(a1 + 69),
              *(_DWORD *)(a1 + 152),
              a3,
              *(_QWORD *)(a1 + 192));
            return 0;
          case 0x1F6:
          case 0x1F7:
            v151 = *(_QWORD *)(a1 + 152);
            v152 = *(_QWORD *)(a1 + 192);
            v153 = get_dtype_size(v32);
            v154 = v152 - 1;
            v155 = (8 * v153 - 1) & (8 * v153 - v151);
            v156 = 500;
            if ( *(_WORD *)(a1 + 48) == 502 )
              v156 = 499;
            sub_3F7310(a1, (unsigned int)v156, v39, v232, *(_BYTE *)(a1 + 69), v155, a3, v154);
            return 0;
          case 0x1F8:
            v149 = get_dtype_size(v32);
            v220 = *(_QWORD *)(a1 + 192);
            sub_3F6E70(a1, 4u, v32, v232, 0x3BEA45E214ADDC55LL, v229 + v149, a3, 0, 1);
            sub_3F6E70(a1, 4u, v32, (int)v40, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
            v150 = 8;
            if ( v149 == 4 )
              v150 = 7;
            sub_3F7220(a1, 0x17u, v229, v150, v220, v229, a3);
            sub_3F6E70(a1, 4u, v32, v229, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
            return 0;
          case 0x1F9:
          case 0x1FA:
            sub_3F8F20(a1, 2u, v32, v40, v39, (_WORD)v51 == 505);
            return 0;
          case 0x1FB:
            v146 = (int)v40;
            v120 = v32;
            LODWORD(v40) = v229;
            sub_3F6E70(a1, 7u, v32, v146, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
            v223 = v39;
            v46 = v232;
LABEL_252:
            LODWORD(v39) = v223;
            v65 = 21;
            v20 = 0;
            sub_3F6E70(a1, 0x15u, v120, v46, (int)v40, v223, a3, 0, 1);
            goto LABEL_131;
          case 0x1FF:
          case 0x200:
          case 0x201:
          case 0x202:
          case 0x252:
            return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 192), v32, v39, v232, a3, v40);
          case 0x208:
            v65 = (unsigned int)(char)v32;
            sub_3F85C0((_QWORD *)a1, v32, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), v232, v39, a3);
            goto LABEL_160;
          case 0x209:
          case 0x20A:
          case 0x250:
          case 0x251:
            v138 = *(_QWORD *)(a1 + 192);
            if ( (unsigned int)(v138 - 14) > 1 )
            {
              v139 = 16;
              if ( (int)v138 <= 15 )
                v139 = (unsigned int)v138 ^ 1;
              v140 = sub_3FAA90(a1, v139, a3);
              v141 = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              v142 = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              sub_1D7370(a1, *(_DWORD *)(v142 + 72), v140);
              *(_QWORD *)(a1 + 16) = v141;
              sub_3F64E0(a1, *(_DWORD *)(a1 + 152));
              v143 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v143 = 7;
              sub_3F56D0(
                a1,
                0x37u,
                v143,
                *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
                0x3BEA45E214ADDC55LL,
                0x3BEA45E214ADDC55LL,
                0);
              v144 = *(_QWORD *)(a1 + 832);
              *(_QWORD *)(a1 + 16) = v142;
              if ( *(_DWORD *)(v144 + 80) == 8 && *(_BYTE *)(a1 + 65) == 1 && *(_WORD *)(a1 + 70) == 160 )
              {
                v147 = *(int *)(v144 + 480);
                v148 = get_dtype_size(v32);
                sub_1D5D50(a1, 3u, v148, 0, 0x3BEA45E214ADDC55LL, v147, 0);
              }
            }
            v31 = 1;
            v40 = (int)sub_3FCA60(a1, 1, 0, a3);
            v145 = *(unsigned __int16 *)(a1 + 48);
            v44 = (unsigned int)(v145 - 592);
            if ( (unsigned __int16)(v145 - 592) > 1u )
            {
              if ( (_WORD)v145 == 521 )
              {
                v157 = (int)v40;
                v119 = v32;
                v31 = 5;
                v40 = v229;
                v20 = 1;
                sub_3F6E70(a1, 5u, v32, v157, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
                v49 = v201;
              }
              else
              {
                v20 = 1;
                v119 = v32;
              }
LABEL_247:
              if ( (unsigned __int8)sub_3EAA70(a1 + 24, v31, v44, v45, v48, v49) )
              {
                sub_3F56D0(a1, 0x1Eu, v32, v39, v40, 3, 0);
                sub_3F56D0(a1, 0x22u, v32, v39, v40, 0, 0);
              }
              sub_3F6E70(a1, 0xDu, v119, v39, v40, v223, a3, 0, 1);
              v66 = v199;
              v65 = v211;
              LODWORD(v39) = v223;
              goto LABEL_131;
            }
            v46 = v39;
            v20 = 1;
            v72 = v32;
LABEL_144:
            v73 = *(_QWORD *)(a1 + 832);
            v74 = v46;
            if ( *(_DWORD *)(v73 + 80) == 8 )
            {
              sub_3F56D0(a1, 0x1Fu, v72, v46, v40, 3, -1);
              sub_3F56D0(a1, 0x21u, v72, v74, v40, 1, -1);
              sub_3F56D0(a1, 0x22u, v72, v74, v40, 0, -1);
              sub_3F56D0(a1, 0x23u, v72, v74, v40, 2, -1);
            }
            else
            {
              sub_3F56D0(a1, 0x1Fu, v72, v46, v40, *(int *)(v73 + 636), -1);
              sub_3F56D0(a1, 0x21u, v72, v74, v40, *(int *)(*(_QWORD *)(a1 + 832) + 644LL), -1);
              sub_3F56D0(a1, 0x22u, v72, v74, v40, *(int *)(*(_QWORD *)(a1 + 832) + 640LL), -1);
              sub_3F56D0(a1, 0x23u, v72, v74, v40, *(int *)(*(_QWORD *)(a1 + 832) + 648LL), -1);
            }
            break;
          case 0x20B:
          case 0x212:
            v137 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            v92 = 12;
            v93 = v40;
            v91 = v137;
            v208 = v137;
            v197 = 0;
            v46 = v232;
            goto LABEL_205;
          case 0x20C:
          case 0x213:
            v136 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            v92 = 13;
            v93 = v40;
            v91 = v136;
            v208 = v136;
            v197 = 0;
            v46 = v232;
            goto LABEL_205;
          case 0x20D:
          case 0x214:
            v92 = 13;
            v91 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
            v208 = *(_QWORD *)(a1 + 832);
            v197 = 0;
            goto LABEL_204;
          case 0x20E:
            v135 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            v92 = 12;
            v93 = v40;
            v91 = v135;
            v208 = v135;
            v197 = 32;
            v46 = v232;
            goto LABEL_205;
          case 0x20F:
            v134 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            v92 = 13;
            v93 = v40;
            v91 = v134;
            v208 = v134;
            v197 = 32;
            v46 = v232;
            goto LABEL_205;
          case 0x210:
            v92 = 13;
            v91 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
            v208 = v37;
            v197 = 32;
            goto LABEL_204;
          case 0x211:
            v91 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
            v208 = v50;
            v197 = 96;
            goto LABEL_203;
          case 0x215:
            v91 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL);
            v208 = v4;
            v197 = 64;
            goto LABEL_203;
          case 0x254:
            v133 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
            sub_3F8CC0(a1, v133, v32, v40, v232, 0x43u);
            return 0;
          case 0x255:
          case 0x25A:
            v188 = 64;
            if ( (_WORD)v51 == 597 )
              v188 = 63;
            goto LABEL_401;
          case 0x25F:
          case 0x260:
            v188 = 66;
            if ( (_WORD)v51 == 608 )
              v188 = 65;
LABEL_401:
            v189 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
            sub_3F8CC0(a1, v189, v32, v40, v232, v188);
            return 0;
          case 0x26E:
          case 0x26F:
          case 0x270:
          case 0x271:
            v65 = (unsigned int)(char)v32;
            sub_3F63B0(a1, v32, v39, v232, v40);
            goto LABEL_160;
          case 0x274:
            v64 = a1 + 24;
            v32 = sub_3F0810(a1, a1 + 24, v215, 0, a3);
LABEL_129:
            if ( (unsigned __int8)sub_3F4EC0(a1, v64, (unsigned int)v40, v45, v48, v49, a3) )
              return 0;
            v65 = 4;
            v20 = 0;
            sub_3F6E70(a1, 4u, v32, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
            v69 = v204;
            goto LABEL_131;
          case 0x27A:
          case 0x27B:
          case 0x27C:
          case 0x27D:
            v187 = sub_3FB520(a1, 1, v223, a3);
            sub_3F6B30(a1, 2u, *(unsigned __int16 *)(a1 + 48) - 633, v187, v215, a3);
            sub_3F9F40(a1, a1 + 104, v223, a3);
            return 0;
          case 0x27E:
          case 0x27F:
          case 0x280:
          case 0x281:
            v186 = sub_3FB520(a1, 1, v223, a3);
            sub_3F6940(a1, *(unsigned __int16 *)(a1 + 48) - 637, v186, v215, a3);
            sub_3F9F40(a1, a1 + 104, v223, a3);
            return 0;
          case 0x292:
            v185 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
            sub_3F8F20(a1, v185, v32, v40, v232, 0);
            return 0;
          case 0x293:
            v184 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
            sub_3F8F20(a1, v184, v32, v40, v232, 1u);
            return 0;
          case 0x294:
            v65 = a1 + 64;
            sub_3F7190(a1, v215, v39, a1 + 104, v40, a3);
            goto LABEL_160;
          case 0x29E:
            sub_3F56D0(a1, 0x47u, v32, v232, (int)v40, v229, 0);
            LODWORD(v40) = v229;
LABEL_166:
            v65 = 68;
            sub_3F6E70(a1, 0x44u, v32, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
            v68 = v194;
            goto LABEL_160;
          case 0x2F1:
          case 0x2F2:
          case 0x2F3:
          case 0x2F4:
            sub_3F9580(a1, v39, v232, a3);
            return 0;
          case 0x301:
          case 0x302:
          case 0x303:
          case 0x304:
            v190 = sub_3FB520(a1, 1, v223, a3);
            sub_3F6B30(a1, 1u, *(unsigned __int16 *)(a1 + 48) - 768, v190, v215, a3);
            sub_3F9F40(a1, a1 + 104, v223, a3);
            return 0;
          case 0x367:
            v183 = (int)v40;
            if ( (_WORD)v51 == 871 )
              goto LABEL_426;
LABEL_390:
            if ( *(unsigned __int16 *)(a1 + 110) == *(unsigned __int16 *)(a1 + 70) + 1 )
            {
LABEL_426:
              v192 = 1;
              v193 = v39 + (-*(unsigned __int8 *)(*(_QWORD *)(a1 + 800) + 145LL) & 0xFFFFFFFC);
              if ( *(_BYTE *)(a1 + 145) )
                v192 = 2;
              if ( *(_WORD *)(a1 + 40 * v192 + 70) == 13 || (*(_BYTE *)(a1 + 70) & 1) != 0 )
              {
                sub_3F6E70(a1, 4u, 2u, v183, 0x3BEA45E214ADDC55LL, v193, a3, 0, 3);
                sub_3F6E70(a1, 4u, 2u, (int)v40 + 4, 0x3BEA45E214ADDC55LL, v193 + 4, a3, 0, 3);
              }
              else
              {
                sub_3F6E70(a1, 4u, 7u, v183, 0x3BEA45E214ADDC55LL, v193, a3, 0, 1);
              }
            }
            else
            {
              sub_3F6E70(a1, 4u, 2u, v183, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 3);
              sub_3F6E70(a1, 4u, 2u, (int)v40 + 4, 0x3BEA45E214ADDC55LL, v232, a3, 0, 3);
            }
            return 0;
          case 0x368:
            if ( (_WORD)v51 == 872 )
              goto LABEL_358;
LABEL_355:
            if ( *(unsigned __int16 *)(a1 + 110) == *(unsigned __int16 *)(a1 + 70) + 1 )
            {
LABEL_358:
              v175 = 1;
              if ( *(_BYTE *)(a1 + 145) )
                v175 = 2;
              sub_3FD520(a1, v175, a3);
            }
            else
            {
LABEL_356:
              sub_3FD520(a1, 2, a3);
            }
            return 0;
          case 0x379:
            sub_3F6E70(a1, 0x21u, 0, 0, *(int *)(*(_QWORD *)(a1 + 832) + 480LL), 0, a3, 0, 1);
            return 0;
          case 0x37A:
            v181 = *(_QWORD *)(a1 + 112);
            v182 = *(_QWORD *)(a1 + 152);
            if ( (v182 & 8) != 0 )
              sub_3F75C0(a1, v39, v181 + 3, 2, a3);
            if ( (v182 & 4) != 0 )
              sub_3F75C0(a1, v39, v181 + 2, 1, a3);
            if ( (v182 & 2) != 0 )
              sub_3F75C0(a1, v39, v181 + 1, 0, a3);
            if ( (v182 & 1) != 0 )
              sub_3F75C0(a1, v39, v181, 3, a3);
            return 0;
          case 0x37B:
          case 0x37C:
            v178 = (_WORD)v51 != 891;
            sub_3F56D0(a1, 3u, (_WORD)v51 != 891, 0, 0x3BEA45E214ADDC55LL, v223, 0);
            sub_3F56D0(a1, 0x28u, v178, v232, v223, 2, 0);
            sub_3F56D0(a1, 0x21u, v178, v232, v223, 1, 0);
            sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v226, 0);
            sub_3F56D0(a1, 0x17u, 2u, v232, v226, v226, 0);
            sub_3F56D0(a1, 0x28u, v178, v226, v223, 3, 0);
            sub_3F56D0(a1, 0x15u, 0, 3, 2, 3, 0);
            return 0;
          case 0x37D:
            sub_3F56D0(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v223, 0);
            sub_3F56D0(a1, 0x21u, 0, 1, v223, 2, 0);
            sub_3F56D0(a1, 0x21u, 0, 0, v223, 3, 0);
            sub_3F56D0(a1, 0x14u, 0, 2, 3, 2, 0);
            sub_3F56D0(a1, 0x14u, 0, 3, 1, 3, 0);
            sub_3F56D0(a1, 4u, 0, 1, 0x3BEA45E214ADDC55LL, v223, 0);
            sub_3F56D0(a1, 0x14u, 0, 1, 0, 1, 0);
            sub_3F56D0(a1, 0x13u, 0, 0, v223, 0, 0);
            return 0;
          case 0x37E:
            sub_3F56D0(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v223, 0);
            sub_3F56D0(a1, 0x13u, 0, 1, 3, 1, 0);
            sub_3F56D0(a1, 0x21u, 0, 3, v223, 3, 0);
            sub_3F56D0(a1, 0x14u, 0, 0, 3, 0, 0);
            sub_3F56D0(a1, 4u, 0, v223, 0x3BEA45E214ADDC55LL, 3, 0);
            sub_3F56D0(a1, 4u, 0, v223, 0x3BEA45E214ADDC55LL, 2, 0);
            return 0;
          default:
            v44 = (unsigned int)(v51 - 236);
            goto LABEL_101;
        }
        return v20;
      }
      if ( (unsigned __int16)v51 > 0xCFu )
      {
        v45 = (unsigned int)(v51 - 208);
        v44 = 1LL << ((unsigned __int8)v51 + 48);
        if ( (v44 & 0x15) != 0 )
        {
          sub_3F8F20(a1, 2u, 7u, v232, v223, 1u);
          sub_3F8F20(a1, 2u, 7u, v40, v226, 1u);
          sub_3F6E70(a1, 0xEu, 7u, v223, v226, v223, a3, 0, 1);
          v167 = *(_WORD *)(a1 + 48);
          v168 = v223 + 4;
          if ( v167 == 208 )
          {
            v170 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)(a1 + 190));
            sub_3F6E70(a1, 0xCu, 2u, v168, v171, (int)v39, v170, 0, 1);
          }
          else
          {
            if ( v167 == 212 )
            {
              v169 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                       *(_QWORD *)(a1 + 832),
                       *(unsigned __int16 *)(a1 + 190));
              sub_3F8F20(a1, 2u, 7u, v169, v226, 1u);
              sub_3F56D0(a1, 3u, 0, 32, 0x3BEA45E214ADDC55LL, v231, 0);
              sub_3F6E70(a1, 0x16u, 7u, v226, v231, v226, a3, 0, 1);
              sub_3F6E70(a1, 0xDu, 7u, v223, v226, v223, a3, 0, 1);
            }
            sub_3F6E70(a1, 4u, 2u, v168, 0x3BEA45E214ADDC55LL, (int)v39, a3, 0, 1);
          }
          return 0;
        }
        if ( (v44 & 0x22000) != 0 )
        {
          sub_3F8F20(a1, (_WORD)v51 != 221, 2u, v40, v223, 1u);
          sub_3F6E70(a1, 0xCu, v32, v232, v223, (int)v39, a3, 0, 1);
          return 0;
        }
        if ( (v44 & 0x44000) != 0 )
        {
          sub_3F8F20(a1, (_WORD)v51 != 222, v32, v40, v232, 1u);
          return 0;
        }
        goto LABEL_101;
      }
      goto LABEL_100;
    }
LABEL_140:
    v71 = *(_DWORD *)(a1 + 52) & 0xD0;
    goto LABEL_139;
  }
  if ( (unsigned __int16)v51 > 0x8Au )
    goto LABEL_140;
  if ( (unsigned __int16)v51 <= 0x22u )
  {
    if ( (unsigned __int16)v51 > 0x20u )
    {
      v71 = *(_DWORD *)(a1 + 52) & 0xD0;
      if ( (_WORD)v51 == 33 )
        goto LABEL_138;
      goto LABEL_139;
    }
LABEL_100:
    v45 = (unsigned int)(v51 - 1);
    if ( (unsigned __int16)(v51 - 1) <= 0xC8u )
    {
LABEL_71:
      v52 = v45;
      v45 = (unsigned __int16)v51;
      switch ( (__int16)v51 )
      {
        case 1:
          sub_3F56D0(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
          return 0;
        case 2:
          return 0;
        case 3:
          goto LABEL_269;
        case 4:
          if ( (unsigned __int8)sub_3F4EC0(a1, a1 + 24, (unsigned int)v232, (unsigned __int16)v51, v48, v49, a3) )
            return 0;
          v129 = *(_QWORD *)(a1 + 832);
          v130 = 2;
          if ( *(_DWORD *)(v129 + 84) == 8 )
            v130 = 7;
          sub_3F56D0(
            a1,
            3u,
            v130,
            *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50),
            0x3BEA45E214ADDC55LL,
            *(int *)(v129 + 656),
            0);
LABEL_269:
          if ( !(unsigned __int8)sub_1D5C00(a1) )
          {
            v131 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
            v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
            if ( v131 != v132 )
            {
              if ( v131 == -1 )
                v132 = -1;
              else
                v132 &= v131;
            }
            sub_3F56D0(a1, 0x37u, v32, v132, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 4);
          }
          return 0;
        case 5:
        case 7:
          if ( (unsigned __int8)sub_3EAA70(a1 + 24, v31, v233, (unsigned __int16)v51, v48, v49) )
            sub_3F6E70(a1, 0x1Cu, v32, v232, v40, 0, a3, 0, 1);
          v65 = 23;
          if ( *(_WORD *)(a1 + 48) == 5 )
            v65 = 24;
          sub_3F6E70(a1, v65, v32, v232, v40, (int)v39, a3, 0, 1);
          goto LABEL_160;
        case 6:
          if ( (unsigned __int8)sub_3EAA70(a1 + 24, v31, v233, (unsigned __int16)v51, v48, v49) )
            sub_3F6E70(a1, 0x1Bu, v32, v232, v40, 0, a3, 0, 1);
          v20 = 0;
          sub_3F6E70(a1, 0x16u, v32, v232, v40, (int)v39, a3, 0, 1);
          v66 = v203;
          v65 = v214;
          goto LABEL_131;
        case 8:
          v179 = sub_3EAA70(a1 + 24, v31, v233, (unsigned __int16)v51, v48, v49);
          v180 = v232;
          if ( v179 )
          {
            sub_3F6E70(a1, 0x1Cu, v32, v232, (int)v40, 0, a3, 0, 1);
            v180 = v232;
          }
          v65 = v32;
          sub_3F67C0(a1, v32, v180, v40, v39, a3);
          goto LABEL_160;
        case 9:
          v31 = 3;
          sub_3F56D0(a1, 3u, v32, 0, 0x3BEA45E214ADDC55LL, v229, 0);
          v20 = 0;
          v223 = v39;
          v39 = v229;
          v119 = v32;
          goto LABEL_247;
        case 10:
          v223 = v39;
          goto LABEL_255;
        case 11:
          v223 = v39;
          goto LABEL_251;
        case 12:
          v223 = v39;
          v20 = 0;
          v39 = v232;
          v119 = v32;
          goto LABEL_247;
        case 13:
          v223 = v39;
          v20 = 0;
          v39 = (int)v40;
          v119 = v32;
          v40 = v232;
          goto LABEL_247;
        case 14:
          v223 = v39;
          goto LABEL_155;
        case 15:
          v65 = (unsigned int)(char)v32;
          sub_3F8480(a1, v32, v232, v40, v39, a3);
          goto LABEL_160;
        case 16:
          v46 = v40;
          LODWORD(v40) = v232;
          goto LABEL_159;
        case 17:
LABEL_159:
          v65 = (unsigned int)(char)v32;
          sub_3F85C0((_QWORD *)a1, v32, v40, v46, v39, a3);
          goto LABEL_160;
        case 18:
LABEL_255:
          v107 = v32;
          goto LABEL_224;
        case 19:
LABEL_251:
          v120 = v32;
          goto LABEL_252;
        case 20:
          v39 = v232;
          v20 = 0;
          v119 = v32;
          goto LABEL_247;
        case 21:
LABEL_155:
          v76 = sub_3EAA70(a1 + 24, v31, v233, (unsigned __int16)v51, v48, v49);
          v77 = v232;
          if ( v76 )
          {
            sub_3F6E70(a1, 0x19u, v32, v232, (int)v40, 0, a3, 0, 1);
            sub_3F6E70(a1, 0x1Au, v32, v232, (int)v40, 3, a3, 0, 1);
            v77 = v232;
          }
          LODWORD(v39) = v223;
          v65 = (unsigned int)(char)v32;
          v20 = 0;
          sub_3F8370(a1, v32, v77, v40, v223, a3);
          goto LABEL_131;
        case 22:
          v109 = v32;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
          {
            v110 = sub_3EE080(a1, v215);
            v46 = v232;
            if ( v110 )
              goto LABEL_228;
          }
          goto LABEL_231;
        case 23:
        case 30:
        case 31:
        case 44:
        case 80:
        case 81:
          goto LABEL_128;
        case 24:
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
          {
            v105 = sub_3EE080(a1, v215);
            v46 = v232;
            if ( v105 )
              goto LABEL_228;
          }
          v219 = v46;
          v106 = (int)v40;
          v107 = v32;
          LODWORD(v40) = v229;
          sub_3F6E70(a1, 7u, v32, v106, 0x3BEA45E214ADDC55LL, v229, a3, 0, 1);
          v223 = v39;
          v46 = v219;
LABEL_224:
          LODWORD(v39) = v223;
          v65 = 20;
          v20 = 0;
          sub_3F6E70(a1, 0x14u, v107, v46, (int)v40, v223, a3, 0, 1);
          v69 = v209;
          goto LABEL_131;
        case 25:
          v65 = 7;
          sub_3F70E0(a1, 7u, v32, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, a3);
          goto LABEL_160;
        case 26:
        case 27:
          v94 = sub_3F57F0(a1);
          v96 = v233;
          v46 = v232;
          if ( v94 )
            return 0;
          v97 = *(_QWORD **)(a1 + 8);
          v98 = *(_QWORD *)(a1 + 40);
          v99 = v233;
          v100 = (_QWORD *)v97[127];
          v218 = v97 + 126;
          v101 = v97 + 126;
          while ( v100 )
          {
            v95 = v100[2];
            v102 = (_QWORD *)v100[3];
            v99 = 0;
            if ( v98 < v100[4] )
            {
              v102 = (_QWORD *)v100[2];
              v99 = v233;
            }
            v101 = v100;
            v100 = v102;
          }
          if ( (_BYTE)v99 )
          {
            if ( (_QWORD *)v97[128] == v101 )
              goto LABEL_216;
            v230 = *(_QWORD *)(a1 + 40);
            v103 = std::_Rb_tree_decrement(v101, v99, v233, v98, v95);
            v96 = v233;
            v46 = v232;
            v98 = v230;
          }
          else
          {
            v103 = (__int64)v101;
          }
          if ( *(_QWORD *)(v103 + 32) >= v98 )
            goto LABEL_112;
LABEL_216:
          if ( v218 != v101 )
            v96 = v98 < v101[4];
          v228 = v46;
          v225 = v96;
          v104 = operator new(0x28u);
          *(_QWORD *)(v104 + 32) = *(_QWORD *)(a1 + 40);
          std::_Rb_tree_insert_and_rebalance(v225, v104, v101, v218);
          ++v97[130];
          v46 = v228;
          goto LABEL_112;
        case 28:
          v90 = *(_QWORD *)(a1 + 832);
          if ( *(_DWORD *)(v90 + 80) != 8 )
          {
            sub_3F6E70(a1, 0xEu, v32, v232, (int)v40, (int)v39, a3, 0, 1);
            v66 = v196;
            v65 = v207;
            goto LABEL_160;
          }
          v91 = *(_DWORD *)(v90 + 480);
          v208 = v49;
          v197 = 0;
          break;
        case 29:
          v85 = 12;
          if ( (_WORD)v51 != 29 )
            goto LABEL_197;
          goto LABEL_198;
        case 32:
          if ( !(_BYTE)v4 || *(_DWORD *)(*(_QWORD *)(a1 + 832) + 372LL) > v232 || sub_CF9B0(0xBBDu, 0, a1 + 24) != 1 )
            goto LABEL_164;
          return 0;
        case 37:
          v84 = *(_QWORD *)(a1 + 832);
          if ( *(_DWORD *)(v84 + 80) == 8 )
            sub_3F92E0(a1, v39, v232, v40, *(_DWORD *)(v84 + 480), 0xCu, a3, 32);
          else
            sub_3F9020(a1, v39, v232, v40, 0x20u);
          return 0;
        case 38:
          sub_3F9020(a1, v39, v232, v40, 0x30u);
          return 0;
        case 39:
          v191 = *(_QWORD *)(a1 + 832);
          if ( *(_DWORD *)(v191 + 80) == 8 )
            sub_3F92E0(a1, v39, v232, v40, *(_DWORD *)(v191 + 480), 0xCu, a3, 0);
          else
            sub_3F9020(a1, v39, v232, v40, 0);
          return 0;
        case 40:
          sub_3F9020(a1, v39, v232, v40, 0x10u);
          return 0;
        case 41:
          goto LABEL_335;
        case 42:
          goto LABEL_413;
        case 43:
          goto LABEL_412;
        case 46:
        case 47:
          if ( (unsigned __int8)sub_3F4EC0(a1, a1 + 24, (unsigned int)v232, (unsigned __int16)v51, v48, v49, a3) )
            return 0;
          if ( !under_debugger )
            sub_3835A0(0xC35Cu, a1 + 24, a3);
          goto LABEL_432;
        case 49:
          v183 = (int)v40;
          goto LABEL_390;
        case 55:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 21);
          return 0;
        case 56:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 22);
          return 0;
        case 57:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 25);
          return 0;
        case 58:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 26);
          return 0;
        case 59:
          sub_3F9020(a1, v39, v232, v40, 0x35u);
          return 0;
        case 60:
          sub_3F9020(a1, v39, v232, v40, 0x36u);
          return 0;
        case 61:
          sub_3F9020(a1, v39, v232, v40, 0x39u);
          return 0;
        case 62:
          sub_3F9020(a1, v39, v232, v40, 0x3Au);
          return 0;
        case 63:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 20);
          return 0;
        case 64:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 4);
          return 0;
        case 65:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 24);
          return 0;
        case 66:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 8);
          return 0;
        case 67:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 5);
          return 0;
        case 68:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 6);
          return 0;
        case 69:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 9);
          return 0;
        case 70:
          sub_3F9150(a1, v39, v232, (unsigned int)v40, 10);
          return 0;
        case 71:
          goto LABEL_355;
        case 97:
        case 98:
          goto LABEL_352;
        case 99:
        case 100:
        case 101:
        case 102:
          goto LABEL_143;
        case 103:
        case 104:
        case 105:
        case 106:
          v72 = v32;
          v20 = 0;
          v40 = v223;
          sub_3F56D0(a1, 3u, 2u, 0, 0x3BEA45E214ADDC55LL, v223, 0);
          sub_3F8CC0(a1, 2u, v32, v40, v40, 0x43u);
          v46 = v232;
          goto LABEL_144;
        case 107:
        case 108:
        case 160:
        case 161:
        case 162:
        case 163:
        case 164:
        case 165:
          goto LABEL_134;
        case 109:
        case 110:
          sub_3F8CC0(a1, *(_BYTE *)(a1 + 109), v32, v40, v232, 0x43u);
          return 0;
        case 111:
        case 112:
          v162 = v32;
          v65 = 72;
          goto LABEL_320;
        case 113:
        case 114:
          goto LABEL_350;
        case 118:
        case 119:
        case 120:
        case 121:
          goto LABEL_179;
        case 122:
          goto LABEL_92;
        case 123:
        case 124:
          goto LABEL_176;
        case 125:
        case 126:
          goto LABEL_166;
        case 127:
        case 128:
        case 129:
        case 130:
          goto LABEL_170;
        case 131:
        case 132:
          goto LABEL_167;
        case 133:
        case 134:
          sub_3F8CC0(a1, *(_BYTE *)(a1 + 109), v32, v40, v232, 0x41u);
          return 0;
        case 137:
        case 138:
          goto LABEL_164;
        case 142:
        case 143:
          goto LABEL_191;
        case 146:
        case 147:
          sub_3F8CC0(a1, *(_BYTE *)(a1 + 109), v32, v40, v232, 0x3Fu);
          return 0;
        case 148:
        case 149:
        case 150:
        case 151:
          sub_3F8CC0(a1, *(_BYTE *)(a1 + 109), v32, v40, v232, 0x40u);
          return 0;
        case 152:
        case 153:
          sub_3F8CC0(a1, *(_BYTE *)(a1 + 109), v32, v40, v232, 0x42u);
          return 0;
        case 154:
        case 156:
          if ( (_WORD)v51 != 156 )
            LODWORD(v39) = v39 + 4;
          goto LABEL_184;
        case 155:
        case 157:
          if ( (_WORD)v51 == 155 )
            LODWORD(v40) = v40 + 4;
LABEL_184:
          sub_3F56D0(a1, 4u, 2u, (int)v40, 0x3BEA45E214ADDC55LL, (int)v39, 0);
          return 0;
        case 173:
          sub_3F65A0(a1, v39, v232, v40);
          return 0;
        case 174:
          sub_3F65A0(a1, v39, v40, v232 + 2);
          return 0;
        case 196:
          v222 = v232;
          sub_3F9150(a1, v231, v232, (unsigned int)v40, 5);
          v177 = 10;
          goto LABEL_365;
        case 197:
          v222 = v232;
          sub_3F9150(a1, v231, v232, (unsigned int)v40, 9);
          v177 = 6;
LABEL_365:
          sub_3F9150(a1, v223, v222, (unsigned int)v40, v177);
          sub_3F6E70(a1, 0xCu, 2u, v231, v223, v223, a3, 0, 1);
          sub_3F6E70(a1, 0xCu, 2u, (int)v39, v223, (int)v39, a3, 0, 1);
          return 0;
        case 200:
          sub_3F9020(a1, v231, v231 + 4, v40, 0x25u);
          sub_3F9020(a1, v223, v223 + 4, v40, 0x2Au);
          v176 = v232;
          goto LABEL_362;
        case 201:
          sub_3F9020(a1, v231, v231 + 4, v40, 0x29u);
          sub_3F9020(a1, v223, v223 + 4, v40, 0x26u);
          v176 = v232;
LABEL_362:
          v221 = v176;
          sub_3F56D0(a1, 0xCu, 7u, v231, v223, v223, 0);
          sub_3F8830(a1, v223, v39, v221, 16);
          return 0;
        default:
          v45 = v52;
          goto LABEL_101;
      }
LABEL_203:
      v92 = 12;
LABEL_204:
      v93 = v40;
LABEL_205:
      v65 = (unsigned int)v39;
      sub_3F92E0(a1, v39, v46, v93, v91, v92, a3, v197);
      v67 = v208;
LABEL_160:
      v20 = 0;
LABEL_131:
      v70 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v70 + 660) == (_DWORD)v39 )
      {
        sub_3F56D0(a1, 0x36u, 2u, 0x3BEA45E214ADDC55LL, *(int *)(v70 + 64), (int)v39, 4);
      }
      else if ( (unsigned __int8)sub_3EAA70(a1 + 24, v65, v69, v66, v67, v68) )
      {
        sub_3FA3B0(a1, 0x21u, v39, v32, 1);
        sub_3F56D0(a1, 0x1Du, v32, (int)v39, 0x3BEA45E214ADDC55LL, 2, 0);
      }
      return v20;
    }
    goto LABEL_101;
  }
  v45 = (unsigned int)(v51 - 115);
  if ( (unsigned __int16)(v51 - 115) > 2u )
    goto LABEL_71;
LABEL_141:
  v71 = *(_DWORD *)(a1 + 52) & 0xD0;
LABEL_138:
  v71 |= 1u;
LABEL_139:
  sub_3F5D80((_QWORD *)a1, v232, a1 + 104, v4, v71);
  return 0;
}
