__int64 __fastcall sub_F83A90(__int64 a1)
{
  int v1; // r13d
  __int64 v2; // rax
  int v3; // ecx
  unsigned int *v4; // r8
  __int64 v5; // r10
  char *v6; // r8
  char v7; // r9
  unsigned int *v8; // rax
  size_t v9; // r12
  _WORD *v10; // rbp
  char v11; // al
  int v12; // edx
  size_t v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  char v29; // al
  int v30; // edx
  char v31; // al
  int v32; // r13d
  int v33; // edx
  int v34; // edx
  int v35; // edx
  char v36; // cl
  size_t v37; // rdx
  char v38; // cl
  char v39; // al
  int v40; // edx
  int v41; // edx
  int v42; // edx
  char v43; // cl
  size_t v44; // rdx
  char v45; // cl
  int v46; // edx
  int v47; // edx
  char v48; // al
  int v49; // edx
  int v50; // edx
  char v51; // al
  int v52; // edx
  int v53; // edx
  int v54; // edx
  int v55; // edx
  int v56; // edx
  int v57; // edx
  int v58; // edx
  char v59; // al
  int v60; // r13d
  int v61; // edx
  int v62; // edx
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  char v71; // al
  int v72; // edx
  int v73; // edx
  int v74; // edx
  int v75; // edx
  int v76; // edx
  int v77; // edx
  int v78; // edx
  int v79; // edx
  int v80; // edx
  int v81; // edx
  int v82; // edx
  int v83; // edx
  int v84; // edx
  int v85; // edx
  int v86; // edx
  int v87; // edx
  int v88; // edx
  char v89; // al
  char v90; // al
  int v91; // edx
  int v92; // edx
  int v93; // edx
  int v94; // edx
  int v95; // edx
  char v96; // al
  char v97; // al
  int v98; // edx
  int v99; // edx
  int v100; // edx
  int v101; // edx
  char v102; // al
  int v103; // edx
  int v104; // edx
  int v105; // edx
  int v106; // edx
  int v107; // edx
  int v108; // edx
  int v109; // edx
  int v110; // edx
  int v111; // edx
  int v112; // edx
  int v113; // edx
  int v114; // edx
  int v115; // edx
  int v116; // edx
  int v117; // edx
  int v118; // edx
  int v119; // edx
  int v120; // edx
  int v121; // edx
  int v122; // edx
  int v123; // edx
  int v124; // edx
  int v125; // edx
  int v126; // edx
  int v127; // edx
  int v128; // edx
  char v129; // cl
  size_t v130; // rdx
  int v131; // edx
  int v132; // edx
  int v133; // edx
  int v134; // edx
  int v135; // edx
  int v136; // edx
  int v137; // edx
  int v138; // edx
  int v139; // edx
  int v140; // edx
  int v141; // edx
  int v142; // edx
  int v143; // edx
  int v144; // edx
  int v145; // edx
  int v146; // edx
  int v147; // edx
  int v148; // edx
  int v149; // edx
  int v150; // edx
  int v151; // edx
  int v152; // edx
  int v153; // edx
  int v154; // edx
  int v155; // edx
  int v156; // edx
  int v157; // edx
  int v158; // edx
  int v159; // edx
  int v160; // edx
  int v161; // edx
  int v162; // edx
  char v163; // al
  int v164; // edx
  int v165; // edx
  int v166; // edx
  int v167; // edx
  int v168; // edx
  int v169; // edx
  int v170; // edx
  int v171; // edx
  int v172; // edx
  int v173; // edx
  int v174; // edx
  int v175; // edx
  int v176; // edx
  int v177; // edx
  int v178; // edx
  int v179; // edx
  int v180; // edx
  int v181; // edx
  int v182; // edx
  int v183; // edx
  int v184; // edx
  int v185; // edx
  int v186; // edx
  int v187; // edx
  int v188; // edx
  int v189; // edx
  size_t v190; // rdx
  int v191; // edx
  int v192; // edx
  int v193; // edx
  int v194; // edx
  int v195; // edx
  int v196; // edx
  char v197; // al
  int v198; // edx
  int v199; // edx
  int v200; // edx
  int v201; // edx
  char v202; // cl
  char v203; // al
  size_t v204; // rdx
  char v205; // cl
  int v206; // edx
  int v207; // edx
  int v208; // edx
  int v209; // edx
  int v210; // edx
  char v211; // cl
  char v212; // al
  size_t v213; // rdx
  int v214; // edx
  int v215; // edx
  int v216; // edx
  int v217; // edx
  int v218; // edx
  int v219; // edx
  int v220; // edx
  int v221; // edx
  int v222; // edx
  int v223; // edx
  size_t v224; // rdx
  int v225; // edx
  int v226; // edx
  int v227; // edx
  int v228; // edx
  int v229; // edx
  int v230; // edx
  int v231; // edx
  int v232; // edx
  int v233; // edx
  int v234; // edx
  int v235; // edx
  char v236; // al
  int v237; // r13d
  int v238; // edx
  int v239; // edx
  int v240; // edx
  int v241; // edx
  int v242; // edx
  int v243; // edx
  int v244; // edx
  int v245; // edx
  char v246; // al
  int v247; // r13d
  int v248; // edx
  int v249; // edx
  int v250; // edx
  int v251; // edx
  int v252; // edx
  char v253; // al
  int v254; // edx
  int v255; // edx
  int v256; // edx
  int v257; // edx
  char v258; // al
  int v259; // edx
  int v260; // edx
  int v261; // edx
  int v262; // edx
  int v263; // edx
  int v264; // edx
  int v265; // edx
  int v266; // edx
  int v267; // edx
  int v268; // edx
  int v269; // edx
  char v270; // al
  int v271; // edx
  int v272; // edx
  int v273; // edx
  char v274; // al
  int v275; // edx
  int v276; // edx
  int v277; // edx
  int v278; // edx
  char v279; // al
  int v280; // r13d
  int v281; // edx
  size_t v282; // rdx
  size_t v283; // rdx
  char v284; // al
  char v285; // al
  char v286; // al
  char v287; // al
  char v288; // al
  char v289; // al
  int v290; // r13d
  char v291; // al
  char v292; // al
  char v293; // al
  char v294; // al
  char v295; // al
  char v296; // al
  char v297; // al
  char v298; // al
  char v299; // al
  char v300; // al
  char v301; // al
  char v302; // al
  char v303; // al
  char v304; // al
  char v305; // al
  int v306; // r13d
  char v307; // al
  char v308; // al
  size_t v309; // rdx
  char v310; // al
  char v311; // al
  char v312; // al
  int v313; // r13d
  char v314; // al
  int v315; // r13d
  char v316; // al
  char v317; // al
  char v318; // al
  char v319; // al
  char v320; // al
  int v321; // r13d
  char v322; // al
  char v323; // al
  char v324; // al
  char v325; // al
  char v326; // al
  size_t v327; // rax
  char v328; // al
  char v329; // al
  size_t v330; // rdx
  size_t v331; // rdx
  char v332; // al
  char v333; // al
  size_t v334; // rdx
  size_t v335; // rdx
  char v336; // cl
  char v337; // al
  char v338; // [rsp+Fh] [rbp-29h]
  char v339; // [rsp+Fh] [rbp-29h]
  char v340; // [rsp+Fh] [rbp-29h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 34) & 0xF;
  if ( v2 )
  {
    v4 = *(unsigned int **)(v2 + 16);
    v5 = *v4;
    v6 = (char *)(v4 + 4);
    if ( (unsigned int)(v3 - 2) <= 1 )
    {
      v6 = sub_F722A0((__int64)v6, v5);
      v5 = v14;
    }
    v7 = v5 != 5;
  }
  else
  {
    v7 = 1;
    v5 = 0;
    v6 = (char *)&byte_22CD811;
  }
  v8 = *(unsigned int **)(*(_QWORD *)a1 + 16LL);
  v9 = *v8;
  v10 = v8 + 4;
  if ( v3 == 1 )
    goto LABEL_21;
  if ( (unsigned int)(v3 - 2) > 1 )
  {
    if ( !v5 )
    {
LABEL_8:
      v1 = 0;
LABEL_9:
      v11 = 1;
LABEL_10:
      v7 |= v11;
LABEL_11:
      if ( !v7 )
      {
        if ( *(_DWORD *)v6 == 1668508018 )
        {
          v7 = v6[4] == 118;
          if ( v6[4] == 118 )
            v1 = 8;
        }
        goto LABEL_13;
      }
      goto LABEL_12;
    }
LABEL_14:
    if ( v5 != 5 )
    {
LABEL_15:
      switch ( v5 )
      {
        case 3LL:
          goto LABEL_16;
        case 4LL:
          v11 = 1;
          if ( *(_DWORD *)v6 != 1819503720 )
          {
            if ( *(_DWORD *)v6 == 1668707181 )
            {
              v7 = 0;
              v1 = 3;
              goto LABEL_13;
            }
            goto LABEL_11;
          }
LABEL_29:
          v1 = 5;
          goto LABEL_10;
        case 2LL:
          v11 = 0;
          if ( *(_WORD *)v6 == 27510 )
          {
            v11 = 1;
            v1 = 6;
            goto LABEL_10;
          }
          goto LABEL_29;
      }
LABEL_49:
      v11 = 0;
      goto LABEL_10;
    }
    goto LABEL_48;
  }
  if ( !v5 )
    goto LABEL_21;
  if ( v5 != 3 )
  {
    if ( v5 != 5 )
      goto LABEL_15;
    if ( *(_DWORD *)v6 != 1851878499 || v6[4] != 103 )
    {
LABEL_48:
      if ( *(_DWORD *)v6 == 1851878499 && v6[4] == 103 )
      {
        v1 = 1;
        goto LABEL_9;
      }
      goto LABEL_49;
    }
    goto LABEL_21;
  }
  if ( *(_WORD *)v6 == 28263 && v6[2] == 117 )
  {
LABEL_21:
    v10 = sub_F72300((_WORD *)v8 + 8, *v8);
    v9 = v13;
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_14;
  }
LABEL_16:
  if ( *(_WORD *)v6 == 28263 && v6[2] == 117 )
  {
    v1 = 2;
    goto LABEL_9;
  }
  if ( *(_WORD *)v6 == 29543 && v6[2] == 108 )
  {
    v1 = 7;
    goto LABEL_9;
  }
  if ( *(_WORD *)v6 == 28015 )
  {
    v1 = 0;
    if ( v6[2] == 112 )
      v1 = 4;
  }
LABEL_12:
  v7 = 0;
LABEL_13:
  v12 = *(unsigned __int16 *)(a1 + 32);
  switch ( *(_WORD *)(a1 + 32) )
  {
    case 0:
      result = 0;
      v173 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v173 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v173 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v173 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 1:
      result = 0;
      v132 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v132 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v132 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v132 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0x17:
    case 0x51:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x8E:
    case 0xAB:
    case 0xB0:
    case 0xB1:
    case 0xDA:
    case 0xE7:
    case 0x129:
    case 0x135:
    case 0x13B:
    case 0x147:
    case 0x14E:
    case 0x155:
    case 0x159:
    case 0x15D:
    case 0x178:
    case 0x17C:
    case 0x186:
    case 0x18C:
    case 0x18F:
      return (v1 == 1) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 2);
    case 7:
      result = 0;
      v171 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v171 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v171 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v171 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xA:
      result = 0;
      v35 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v35 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v35 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v35 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xB:
    case 0xAA:
      return (v1 == 2) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 2);
    case 0xC:
      switch ( v9 )
      {
        case 0x12uLL:
          v316 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v316 == 1 )
            return 0;
          else
            return (v1 == 1) & (unsigned __int8)(v316 == 2);
        case 0x19uLL:
          v29 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v29 == 1 )
          {
            return 2;
          }
          else if ( v1 == 1 && v29 == 2 )
          {
            return 3;
          }
          else
          {
            return 0;
          }
        case 0x17uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        case 0x14uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 5;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0xD:
      result = 0;
      v49 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v49 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v49 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v49 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10:
      result = 0;
      v41 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v41 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v41 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v41 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x11:
      result = 0;
      v54 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v54 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v54 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v54 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x13:
      if ( j__strlen("aligned") != v9 )
        goto LABEL_203;
      if ( !v9 )
      {
        v329 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v329 == 1 && !v1 )
          return 0;
        if ( v329 == 2 && v1 == 2 )
          return 1;
        if ( v329 == 3 && v1 == 2 )
          return 2;
        v339 = *(_BYTE *)(a1 + 34);
        v330 = j__strlen("alignas");
        result = 0;
        if ( v330 )
          return result;
        v45 = v339;
        goto LABEL_209;
      }
      if ( !memcmp(v10, "aligned", v9) )
      {
        v43 = *(_BYTE *)(a1 + 34);
        if ( (v43 & 0xF) == 1 && !v1 )
          return 0;
        if ( (v43 & 0xF) == 2 && v1 == 2 )
          return 1;
        if ( (v43 & 0xF) == 3 && v1 == 2 )
          return 2;
      }
LABEL_203:
      if ( v9 == 5 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 4 && !v1 )
          return 3;
        v44 = j__strlen("alignas");
        result = 0;
        if ( v44 != 5 )
          return result;
      }
      else
      {
        if ( j__strlen("alignas") != v9 )
          goto LABEL_2225;
        if ( !v9 )
          goto LABEL_208;
      }
      if ( !memcmp(v10, "alignas", v9) )
      {
LABEL_208:
        v45 = *(_BYTE *)(a1 + 34);
LABEL_209:
        if ( (v45 & 0xF) != 6 )
          return 0;
        result = 4;
        if ( v1 )
          return 0;
        return result;
      }
LABEL_2225:
      if ( v9 != 8 )
        return 0;
      if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
        return 0;
      result = 5;
      if ( v1 )
        return 0;
      return result;
    case 0x14:
      result = 0;
      v61 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v61 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v61 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v61 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x15:
      result = 0;
      v218 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v218 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v218 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v218 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x16:
      result = 0;
      v217 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v217 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v217 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v217 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x18:
      if ( j__strlen("always_inline") != v9 )
        goto LABEL_716;
      if ( v9 )
      {
        if ( memcmp(v10, "always_inline", v9) )
        {
          v331 = j__strlen("__forceinline");
          result = 0;
          if ( v9 != v331 )
            return result;
LABEL_718:
          v131 = memcmp(v10, "__forceinline", v9);
          result = 0;
          if ( v131 )
            return result;
          goto LABEL_719;
        }
        v129 = *(_BYTE *)(a1 + 34);
        if ( (v129 & 0xF) == 1 && !v1 )
          return 0;
        if ( (v129 & 0xF) == 2 && v1 == 2 )
          return 1;
        if ( (v129 & 0xF) == 3 && v1 == 2 )
          return 2;
        if ( (v129 & 0xF) == 2 && v1 == 1 )
          return 3;
      }
      else
      {
        v129 = *(_BYTE *)(a1 + 34);
        v332 = v129 & 0xF;
        if ( (v129 & 0xF) == 1 && !v1 )
          return 0;
        if ( v1 == 2 && v332 == 2 )
          return 1;
        if ( v332 == 3 && v1 == 2 )
          return 2;
        if ( v1 == 1 && v332 == 2 )
          return 3;
      }
      if ( (v129 & 0xF) == 3 && v1 == 1 )
        return 4;
LABEL_716:
      v130 = j__strlen("__forceinline");
      result = 0;
      if ( v130 != v9 )
        return result;
      if ( v9 )
        goto LABEL_718;
LABEL_719:
      if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
        return 0;
      result = 5;
      if ( v1 )
        return 0;
      return result;
    case 0x1A:
      result = 0;
      v16 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v16 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v16 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v16 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x1B:
      return (v1 == 1) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
    case 0x1C:
      result = 0;
      v57 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v57 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v57 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v57 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x1D:
      result = 0;
      v216 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v216 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v216 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v216 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x1E:
      result = 0;
      v58 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v58 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v58 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v58 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x1F:
      if ( v9 == 22 )
      {
        v304 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v304 == 1 )
        {
          return 0;
        }
        else if ( v304 == 2 && v1 == 1 )
        {
          return 1;
        }
        else
        {
          if ( v304 != 3 )
            return 0;
          result = 2;
          if ( v1 != 1 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 21 )
        {
          v59 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v59 == 1 )
          {
            return 3;
          }
          else
          {
            v60 = v1 - 1;
            if ( v59 == 2 && !v60 )
            {
              return 4;
            }
            else
            {
              if ( v59 != 3 )
                return 0;
              result = 5;
              if ( v60 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x21:
      result = 0;
      v250 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v250 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v250 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v250 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x25:
      result = 0;
      v46 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v46 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v46 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v46 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x2C:
      result = 0;
      v26 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v26 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v26 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v26 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x2D:
      switch ( v9 )
      {
        case 0x11uLL:
          v298 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v298 == 1 )
            return 0;
          else
            return (v1 == 1) & (unsigned __int8)(v298 == 2);
        case 0x18uLL:
          v48 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v48 == 1 && !v1 )
          {
            return 2;
          }
          else
          {
            if ( v48 != 2 )
              return 0;
            result = 3;
            if ( v1 != 1 )
              return 0;
          }
          break;
        case 0x15uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        case 0x12uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 5;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x2E:
      result = 0;
      v27 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v27 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v27 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v27 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x2F:
      result = 0;
      v28 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v28 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v28 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v28 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x30:
      result = 0;
      v40 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v40 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v40 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v40 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x31:
      result = 0;
      v56 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v56 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v56 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v56 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x32:
      result = 0;
      v52 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v52 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v52 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v52 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x33:
      result = 0;
      v53 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v53 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v53 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v53 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x34:
      result = 0;
      v23 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v23 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v23 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v23 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x35:
      result = 0;
      v47 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v47 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v47 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v47 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x36:
      result = 0;
      v24 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v24 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v24 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v24 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x37:
      result = 0;
      v25 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v25 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v25 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v25 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x38:
      result = 0;
      v34 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v34 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v34 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v34 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x39:
      if ( v9 == 13 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 2 && v1 == 1 )
          return 0;
        else
          return (v1 == 1) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
      }
      else
      {
        result = 0;
        if ( v9 == 19 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 2;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0x3A:
      switch ( v9 )
      {
        case 5uLL:
          v295 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v295 == 1 )
          {
            return 0;
          }
          else if ( v295 == 2 && v1 == 2 )
          {
            return 1;
          }
          else
          {
            if ( v295 != 3 )
              return 0;
            result = 2;
            if ( v1 != 2 )
              return 0;
          }
          break;
        case 7uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 6uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x3B:
      result = 0;
      v77 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v77 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v77 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v77 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x3C:
      result = 0;
      v78 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v78 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v78 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v78 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x3D:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 4:
          return 0;
        case 1:
          return v1 == 0;
        case 2:
          if ( v1 != 1 )
            return 0;
          break;
        default:
          if ( v1 != 1 || (_DWORD)result != 3 )
            return 0;
          break;
      }
      return result;
    case 0x3E:
      result = 0;
      v257 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v257 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v257 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v257 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x3F:
      result = 0;
      v150 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v150 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v150 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v150 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x40:
      result = 0;
      v151 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v151 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v151 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v151 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x41:
      result = 0;
      v110 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v110 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v110 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v110 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x42:
      result = 0;
      v192 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v192 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v192 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v192 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x43:
      result = 0;
      v111 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v111 != 1 )
      {
        if ( v111 == 2 )
        {
          return v1 == 1;
        }
        else if ( v111 == 3 )
        {
          return 2 * (unsigned int)(v1 == 1);
        }
        else if ( v1 || v111 != 4 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0x44:
      result = 0;
      v112 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v112 != 1 )
      {
        if ( v112 == 2 )
        {
          return v1 == 1;
        }
        else if ( v112 == 3 )
        {
          return 2 * (unsigned int)(v1 == 1);
        }
        else if ( v1 || v112 != 4 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0x45:
      result = 0;
      if ( v9 == 12 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x46:
      result = 0;
      if ( v9 == 10 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x47:
      result = 0;
      if ( v9 == 31 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x48:
      result = 0;
      if ( v9 == 31 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x49:
      result = 0;
      if ( v9 == 10 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x4A:
      result = 0;
      if ( v9 == 17 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x4B:
      result = 0;
      if ( v9 == 8 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x4D:
      result = 0;
      if ( v9 == 17 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x4E:
      result = 0;
      if ( v9 == 10 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x4F:
      if ( v9 == 8 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 2 && !v1 )
          return 0;
        else
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
      }
      else
      {
        result = 0;
        if ( v9 == 9 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 3 )
            return 0;
          result = 2;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0x50:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      if ( (_DWORD)result == 2 )
      {
        if ( v1 )
        {
          if ( v1 != 1 )
            return 0;
        }
        else
        {
          return 0;
        }
      }
      else if ( (_DWORD)result == 1 )
      {
        return v1 == 0;
      }
      else if ( v1 != 1 || (_DWORD)result != 3 )
      {
        return 0;
      }
      return result;
    case 0x52:
      result = 0;
      v241 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v241 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v241 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v241 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x53:
      result = 0;
      v101 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v101 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v101 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v101 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x54:
      if ( v9 == 10 )
      {
        v288 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v288 == 1 )
          return 0;
        else
          return (v1 == 1) & (unsigned __int8)(v288 == 2);
      }
      else
      {
        result = 0;
        if ( v9 == 17 )
        {
          v102 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v102 == 1 )
          {
            return 2;
          }
          else if ( v1 == 1 && v102 == 2 )
          {
            return 3;
          }
          else
          {
            return 0;
          }
        }
      }
      return result;
    case 0x55:
      return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 2);
    case 0x56:
      result = 0;
      v268 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v268 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v268 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v268 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x57:
      result = 0;
      v182 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v182 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v182 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v182 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x5A:
      result = 0;
      v266 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v266 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v266 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v266 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x5B:
      result = 0;
      v178 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v178 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v178 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v178 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x5D:
      result = 0;
      v179 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v179 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v179 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v179 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x5E:
      result = 0;
      v239 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v239 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v239 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v239 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x5F:
      if ( v9 == 5 )
      {
        v287 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v287 == 1 )
        {
          return 0;
        }
        else if ( v287 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v287 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 7 )
        {
          v96 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v96 == 1 )
          {
            return 3;
          }
          else if ( v96 == 2 && v1 == 2 )
          {
            return 4;
          }
          else
          {
            if ( v96 != 3 )
              return 0;
            result = 5;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0x60:
      result = 0;
      if ( v9 == 31 )
      {
        v97 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v97 == 1 )
        {
          return 1;
        }
        else if ( v1 == 1 && v97 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x61:
      result = 0;
      v177 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v177 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v177 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v177 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x65:
      result = 0;
      v136 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v136 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v136 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v136 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x66:
      result = 0;
      v252 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v252 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v252 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v252 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x67:
      result = 0;
      v137 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v137 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v137 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v137 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x68:
      result = 0;
      v138 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v138 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v138 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v138 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x69:
      result = 0;
      v95 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v95 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v95 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v95 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6A:
      result = 0;
      v232 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v232 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v232 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v232 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6B:
      result = 0;
      v86 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v86 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v86 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v86 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6C:
      result = 0;
      v87 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v87 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v87 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v87 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6D:
      result = 0;
      v161 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v161 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v161 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v161 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6E:
      result = 0;
      v261 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v261 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v261 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v261 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x6F:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 4:
          return 0;
        case 1:
          return v1 == 0;
        case 2:
          if ( v1 != 2 )
            return 0;
          break;
        default:
          if ( v1 != 2 || (_DWORD)result != 3 )
            return 0;
          break;
      }
      return result;
    case 0x71:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 4:
          return 0;
        case 1:
          return v1 == 0;
        case 2:
          if ( v1 != 2 )
            return 0;
          break;
        default:
          if ( v1 != 2 || (_DWORD)result != 3 )
            return 0;
          break;
      }
      return result;
    case 0x73:
      result = 0;
      v121 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v121 != 1 )
      {
        switch ( v121 )
        {
          case 2:
            if ( v1 == 2 )
              return 1;
            else
              return v1 == 0 ? 4 : 0;
          case 3:
            if ( v1 == 2 )
              return 2;
            else
              return v1 == 0 ? 5 : 0;
          case 4:
            return v1 == 0 ? 3 : 0;
        }
      }
      return result;
    case 0x74:
      result = 0;
      v122 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v122 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v122 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v122 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x75:
      if ( j__strlen("device_kernel") != v9 )
        goto LABEL_1137;
      if ( v9 )
      {
        if ( !memcmp(v10, "device_kernel", v9) )
        {
          v202 = *(_BYTE *)(a1 + 34);
          if ( (v202 & 0xF) == 1 && !v1 )
            return 0;
          if ( (v202 & 0xF) == 2 && v1 == 1 )
            return 1;
          if ( (v202 & 0xF) == 3 && v1 == 1 )
            return 2;
        }
LABEL_1137:
        if ( v9 == 11 )
        {
          v303 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v303 == 1 && !v1 )
            return 3;
          if ( v303 == 2 && v1 == 1 )
            return 4;
          if ( v303 == 3 && v1 == 1 )
            return 5;
LABEL_1145:
          v204 = j__strlen("amdgpu_kernel");
          result = 0;
          if ( v9 != v204 )
            return result;
          goto LABEL_1146;
        }
        if ( v9 == 12 )
        {
          v203 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v203 == 1 && !v1 )
            return 6;
          if ( v203 == 2 && v1 == 1 )
            return 7;
          if ( v203 == 3 && v1 == 1 )
            return 8;
          goto LABEL_1145;
        }
        if ( j__strlen("amdgpu_kernel") != v9 )
          goto LABEL_1153;
        if ( v9 )
        {
LABEL_1146:
          if ( memcmp(v10, "amdgpu_kernel", v9) )
            goto LABEL_1153;
          v205 = *(_BYTE *)(a1 + 34);
          if ( (v205 & 0xF) == 1 && !v1 )
            return 9;
          if ( (v205 & 0xF) == 2 && v1 == 1 )
            return 10;
LABEL_1151:
          if ( (v205 & 0xF) == 3 && v1 == 1 )
            return 11;
LABEL_1153:
          if ( v9 == 8 )
          {
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
              return 0;
            result = 12;
            if ( v1 )
              return 0;
          }
          else if ( v9 == 6 )
          {
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
              return 0;
            result = 13;
            if ( v1 )
              return 0;
          }
          else
          {
            return 0;
          }
          return result;
        }
        v205 = *(_BYTE *)(a1 + 34);
      }
      else
      {
        v326 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v326 == 1 )
          return 0;
        if ( v326 == 2 && v1 == 1 )
          return 1;
        if ( v326 == 3 && v1 == 1 )
          return 2;
        v338 = *(_BYTE *)(a1 + 34);
        v327 = j__strlen("amdgpu_kernel");
        v205 = v338;
        if ( v327 )
          return 0;
      }
      v328 = v205 & 0xF;
      if ( !v1 && v328 == 1 )
        return 9;
      if ( v328 == 2 && v1 == 1 )
        return 10;
      goto LABEL_1151;
    case 0x76:
      result = 0;
      v276 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v276 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v276 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v276 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x78:
      result = 0;
      v207 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v207 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v207 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v207 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x79:
      result = 0;
      v64 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v64 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v64 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v64 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x7C:
      result = 0;
      v80 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v80 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v80 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v80 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x7D:
      result = 0;
      v81 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v81 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v81 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v81 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x7E:
      result = 0;
      v152 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v152 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v152 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v152 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x7F:
      if ( v9 == 5 )
      {
        v286 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v286 == 1 && !v1 )
        {
          return 0;
        }
        else if ( v286 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v286 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 7 )
        {
          v258 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v258 == 1 && !v1 )
          {
            return 3;
          }
          else if ( v258 == 2 && v1 == 2 )
          {
            return 4;
          }
          else
          {
            if ( v258 != 3 )
              return 0;
            result = 5;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0x80:
      result = 0;
      v153 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v153 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v153 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v153 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x81:
      result = 0;
      v154 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v154 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v154 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v154 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x82:
      result = 0;
      v113 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v113 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v113 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v113 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x83:
      result = 0;
      v114 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v114 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v114 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v114 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x84:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 2:
          if ( v1 )
          {
            if ( v1 != 1 )
              return 4 * (unsigned int)(v1 == 2);
          }
          else
          {
            return 0;
          }
          break;
        case 3:
          if ( v1 )
            return 5 * (unsigned int)(v1 == 2);
          else
            return 1;
        case 1:
          return v1 == 0 ? 3 : 0;
        default:
          return 0;
      }
      return result;
    case 0x85:
      switch ( v9 )
      {
        case 8uLL:
          v292 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v292 == 1 && !v1 )
          {
            return 0;
          }
          else if ( v292 == 2 && v1 == 2 )
          {
            return 1;
          }
          else
          {
            if ( v292 != 3 )
              return 0;
            result = 2;
            if ( v1 != 2 )
              return 0;
          }
          break;
        case 0xAuLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 9uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x86:
      result = 0;
      v193 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v193 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v193 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v193 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x87:
      result = 0;
      v265 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v265 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v265 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v265 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x88:
      result = 0;
      v194 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v194 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v194 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v194 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x89:
      result = 0;
      v195 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v195 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v195 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v195 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x8A:
      result = 0;
      v69 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v69 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v69 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v69 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x8B:
      result = 0;
      v222 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v222 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v222 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v222 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x8C:
      result = 0;
      v70 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v70 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v70 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v70 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x8F:
      result = 0;
      if ( v9 == 11 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 4);
      return result;
    case 0x91:
      result = 0;
      if ( v9 == 7 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 5);
      return result;
    case 0x93:
      result = 0;
      if ( v9 == 4 )
        return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 5);
      return result;
    case 0x96:
      result = 0;
      if ( v9 != 2 )
      {
        if ( v9 == 5 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 3 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 2;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0xA4:
      result = 0;
      v123 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v123 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v123 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v123 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xA5:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 4:
          return 0;
        case 1:
          return v1 == 0;
        case 2:
          if ( v1 != 1 )
            return 0;
          break;
        default:
          if ( v1 != 1 || (_DWORD)result != 3 )
            return 0;
          break;
      }
      return result;
    case 0xA6:
      result = 0;
      v208 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v208 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v208 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v208 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xA7:
      result = 0;
      v248 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v248 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v248 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v248 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xA8:
      result = 0;
      v209 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v209 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v209 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v209 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xA9:
      result = 0;
      v210 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v210 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v210 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v210 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xAC:
      result = 0;
      v18 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v18 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v18 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v18 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xAD:
      result = 0;
      v19 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v19 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v19 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v19 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xAF:
      result = 0;
      v99 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v99 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v99 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v99 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xB2:
      return (v1 == 1) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
    case 0xB3:
      result = 0;
      v221 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v221 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v221 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v221 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xB7:
      result = 0;
      if ( v9 != 4 )
      {
        switch ( v9 )
        {
          case 6uLL:
            return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 7);
          case 8uLL:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 7 )
              return 0;
            result = 2;
            if ( v1 )
              return 0;
            break;
          case 0xEuLL:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 7 )
              return 0;
            result = 3;
            if ( v1 )
              return 0;
            break;
          case 0x10uLL:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 7 )
              return 0;
            result = 4;
            if ( v1 )
              return 0;
            break;
        }
      }
      return result;
    case 0xB8:
      result = 0;
      v140 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v140 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v140 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v140 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xB9:
      result = 0;
      v141 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v141 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v141 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v141 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xBA:
      result = 0;
      v82 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v82 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v82 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v82 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xBD:
      result = 0;
      if ( v9 != 20 )
      {
        switch ( v9 )
        {
          case 0x16uLL:
            return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
          case 0x15uLL:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
              return 0;
            result = 2;
            if ( v1 )
              return 0;
            break;
          case 0x19uLL:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
              return 0;
            result = 3;
            if ( v1 )
              return 0;
            break;
        }
      }
      return result;
    case 0xBF:
      result = 0;
      v259 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v259 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v259 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v259 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC0:
      result = 0;
      v156 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v156 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v156 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v156 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC1:
      result = 0;
      v157 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v157 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v157 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v157 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC2:
      result = 0;
      v115 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v115 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v115 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v115 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC3:
      result = 0;
      v244 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v244 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v244 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v244 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC4:
      result = 0;
      v116 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v116 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v116 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v116 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC5:
      result = 0;
      v117 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v117 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v117 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v117 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC6:
      result = 0;
      v196 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v196 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v196 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v196 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xC7:
      if ( v9 == 9 )
      {
        v322 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v322 == 1 )
        {
          return 0;
        }
        else if ( v322 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v322 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 3 )
        {
          v274 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v274 == 1 )
          {
            return 3;
          }
          else if ( v274 == 2 && v1 == 2 )
          {
            return 4;
          }
          else
          {
            if ( v274 != 3 )
              return 0;
            result = 5;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0xC8:
      if ( v9 == 10 )
      {
        v300 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v300 == 1 )
        {
          return 0;
        }
        else if ( v300 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v300 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 4 )
        {
          v197 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v197 == 1 )
          {
            return 3;
          }
          else if ( v197 == 2 && v1 == 2 )
          {
            return 4;
          }
          else
          {
            if ( v197 != 3 )
              return 0;
            result = 5;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0xC9:
      result = 0;
      v198 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v198 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v198 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v198 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xCA:
      result = 0;
      v72 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v72 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v72 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v72 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xCB:
      result = 0;
      v226 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v226 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v226 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v226 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xCC:
      result = 0;
      v223 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v223 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v223 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v223 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xCE:
      result = 0;
      v144 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v144 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v144 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v144 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xCF:
      result = 0;
      v145 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v145 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v145 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v145 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD0:
      result = 0;
      v146 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v146 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v146 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v146 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD1:
      result = 0;
      v147 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v147 != 1 )
      {
        if ( v147 == 2 )
        {
          return v1 == 2;
        }
        else if ( v147 == 3 )
        {
          return 2 * (unsigned int)(v1 == 2);
        }
        else if ( v1 || v147 != 4 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0xD2:
      result = 0;
      v103 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v103 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v103 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v103 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD3:
      result = 0;
      v104 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v104 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v104 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v104 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD5:
      result = 0;
      v106 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v106 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v106 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v106 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD6:
      result = 0;
      v185 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v185 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v185 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v185 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD7:
      result = 0;
      v242 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v242 != 1 )
      {
        if ( v242 == 2 )
        {
          return v1 == 1;
        }
        else if ( v242 == 3 )
        {
          return 2 * (unsigned int)(v1 == 1);
        }
        else if ( v1 || v242 != 4 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0xD8:
      result = 0;
      v186 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v186 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v186 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v186 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xD9:
      result = 0;
      v187 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v187 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v187 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v187 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xDB:
      result = 0;
      v235 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v235 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v235 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v235 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xDC:
      result = 0;
      v234 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v234 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v234 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v234 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xDD:
      result = 0;
      if ( v9 != 8 )
        return result;
      v270 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v270 == 1 && !v1 )
        return 1;
      if ( v1 == 2 && v270 == 2 )
        return 2;
      if ( v1 == 2 && v270 == 3 )
        return 3;
      if ( v270 == 2 && v1 == 1 )
        return 4;
      if ( v270 == 3 && v1 == 1 )
        return 5;
      if ( v1 == 3 )
      {
        if ( v270 == 2 )
          return 6;
        if ( v270 == 3 )
          return 7;
      }
      if ( v270 != 4 )
        return 0;
      result = 8;
      if ( v1 )
        return 0;
      return result;
    case 0xDE:
      result = 0;
      v166 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v166 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v166 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v166 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xDF:
      result = 0;
      v255 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v255 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v255 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v255 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE0:
      result = 0;
      v167 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v167 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v167 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v167 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE1:
      result = 0;
      v168 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v168 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v168 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v168 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE2:
      result = 0;
      v124 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v124 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v124 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v124 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE3:
      result = 0;
      v249 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v249 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v249 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v249 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE4:
      result = 0;
      v125 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v125 != 1 )
      {
        if ( v125 == 2 )
        {
          return v1 == 2;
        }
        else if ( v125 == 3 )
        {
          return 2 * (unsigned int)(v1 == 2);
        }
        else if ( v125 != 4 || v1 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0xE5:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 1:
          return 0;
        case 2:
          if ( v1 == 1 )
          {
            return 1;
          }
          else if ( v1 != 2 )
          {
            return 0;
          }
          break;
        case 3:
          if ( v1 != 1 )
            return 4 * (unsigned int)(v1 == 2);
          break;
        default:
          return 0;
      }
      return result;
    case 0xE6:
      if ( v9 == 26 )
      {
        v297 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v297 == 1 )
          return 0;
        if ( v297 == 2 && v1 == 2 )
          return 1;
        if ( v297 == 3 && v1 == 2 )
          return 2;
        goto LABEL_1963;
      }
      if ( v9 == 19 )
      {
        v296 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v296 == 1 )
          return 3;
        if ( v296 == 2 && v1 == 2 )
          return 4;
        if ( v296 == 3 && v1 == 2 )
          return 5;
LABEL_1963:
        if ( v9 != j__strlen("no_sanitize_thread") )
          goto LABEL_1192;
        goto LABEL_1964;
      }
      if ( j__strlen("no_sanitize_thread") != v9 )
        goto LABEL_1192;
      if ( !v9 )
      {
        v211 = *(_BYTE *)(a1 + 34);
        v212 = v211 & 0xF;
        if ( !v1 && v212 == 1 )
          return 6;
        if ( v1 == 2 && v212 == 2 )
          return 7;
        goto LABEL_1190;
      }
LABEL_1964:
      if ( memcmp(v10, "no_sanitize_thread", v9) )
      {
        v335 = j__strlen("no_sanitize_memory");
        result = 0;
        if ( v9 != v335 )
          return result;
LABEL_1194:
        if ( memcmp(v10, "no_sanitize_memory", v9) )
          return 0;
        v336 = *(_BYTE *)(a1 + 34);
        if ( (v336 & 0xF) == 1 && !v1 )
          return 9;
        if ( (v336 & 0xF) == 2 && v1 == 1 )
          return 10;
        goto LABEL_2479;
      }
      v211 = *(_BYTE *)(a1 + 34);
      if ( (v211 & 0xF) == 1 && !v1 )
        return 6;
      if ( (v211 & 0xF) == 2 && v1 == 2 )
        return 7;
LABEL_1190:
      if ( (v211 & 0xF) == 3 && v1 == 2 )
        return 8;
LABEL_1192:
      v213 = j__strlen("no_sanitize_memory");
      result = 0;
      if ( v213 != v9 )
        return result;
      if ( v9 )
        goto LABEL_1194;
      v336 = *(_BYTE *)(a1 + 34);
      v337 = v336 & 0xF;
      if ( !v1 && v337 == 1 )
        return 9;
      if ( v1 == 1 && v337 == 2 )
        return 10;
LABEL_2479:
      if ( (v336 & 0xF) != 3 )
        return 0;
      result = 11;
      if ( v1 != 1 )
        return 0;
      return result;
    case 0xE8:
      result = 0;
      v214 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v214 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v214 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v214 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xE9:
      result = 0;
      v215 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v215 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v215 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v215 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xEA:
      if ( v9 == 18 )
      {
        v291 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v291 == 1 && !v1 )
        {
          return 0;
        }
        else if ( v291 == 2 && v1 == 1 )
        {
          return 1;
        }
        else if ( v291 == 3 && v1 == 1 )
        {
          return 2;
        }
        else if ( v291 == 2 && v1 == 2 )
        {
          return 3;
        }
        else if ( v291 == 3 && v1 == 2 )
        {
          return 4;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 11 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 4 )
            return 0;
          result = 5;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0xEB:
      result = 0;
      v219 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v219 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v219 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v219 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xEC:
      result = 0;
      v62 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v62 != 1 )
      {
        if ( v62 == 2 )
        {
          return v1 == 2;
        }
        else if ( v62 == 3 )
        {
          return 2 * (unsigned int)(v1 == 2);
        }
        else if ( v1 || v62 != 4 )
        {
          return 0;
        }
        else
        {
          return 3;
        }
      }
      return result;
    case 0xEE:
      LOBYTE(v12) = v1 == 0;
      return (v1 == 3) & ((v12 | ((*(_BYTE *)(a1 + 34) & 0xF) != 2)) ^ 1u);
    case 0xEF:
      result = 0;
      v251 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v251 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v251 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v251 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF0:
      result = 0;
      v134 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v134 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v134 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v134 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF1:
      result = 0;
      v135 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v135 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v135 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v135 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF2:
      result = 0;
      v92 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v92 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v92 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v92 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF3:
      result = 0;
      v238 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v238 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v238 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v238 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF4:
      result = 0;
      v93 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v93 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v93 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v93 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF6:
      result = 0;
      v174 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v174 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v174 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v174 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF7:
      result = 0;
      v262 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v262 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v262 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v262 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF8:
      result = 0;
      v175 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v175 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v175 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v175 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xF9:
      result = 0;
      v176 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v176 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v176 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v176 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFA:
      result = 0;
      v84 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v84 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v84 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v84 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFB:
      result = 0;
      v231 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v231 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v231 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v231 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFC:
      result = 0;
      v230 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v230 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v230 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v230 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFD:
      result = 0;
      v277 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v277 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v277 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v277 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFE:
      result = 0;
      v158 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v158 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v158 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v158 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0xFF:
      result = 0;
      v260 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v260 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v260 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v260 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x100:
      result = 0;
      v159 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v159 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v159 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v159 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x101:
      result = 0;
      v160 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v160 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v160 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v160 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x102:
      result = 0;
      v118 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v118 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v118 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v118 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x103:
      result = 0;
      v245 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v245 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v245 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v245 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x104:
      result = 0;
      v119 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v119 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v119 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v119 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x105:
      result = 0;
      v120 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v120 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v120 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v120 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x106:
      result = 0;
      v199 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v199 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v199 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v199 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x107:
      result = 0;
      v271 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v271 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v271 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v271 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x108:
      result = 0;
      v200 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v200 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v200 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v200 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10B:
      result = 0;
      v227 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v227 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v227 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v227 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10C:
      result = 0;
      v74 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v74 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v74 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v74 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10D:
      result = 0;
      v75 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v75 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v75 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v75 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10E:
      result = 0;
      v148 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v148 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v148 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v148 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x10F:
      result = 0;
      v149 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v149 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v149 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v149 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x110:
      result = 0;
      v256 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v256 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v256 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v256 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x111:
      result = 0;
      v273 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v273 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v273 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v273 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x112:
      result = 0;
      v107 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v107 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v107 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v107 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x113:
      result = 0;
      v243 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v243 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v243 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v243 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x114:
      result = 0;
      v108 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v108 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v108 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v108 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x115:
      result = 0;
      v109 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v109 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v109 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v109 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x116:
      result = 0;
      v188 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v188 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v188 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v188 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x117:
      result = 0;
      v269 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v269 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v269 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v269 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x119:
      if ( v9 == 11 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 6 && !v1 )
          return 0;
      }
      else
      {
        if ( v9 != 9 )
        {
          if ( j__strlen("__write_only") != v9 )
            goto LABEL_1060;
          if ( !v9 )
          {
LABEL_2319:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) == 6 && !v1 )
              return 2;
LABEL_1060:
            if ( j__strlen("write_only") != v9 )
              goto LABEL_1823;
            if ( !v9 )
              goto LABEL_2302;
            goto LABEL_1062;
          }
LABEL_1821:
          if ( memcmp(v10, "__write_only", v9) )
          {
            if ( v9 != j__strlen("write_only") )
              goto LABEL_1823;
LABEL_1062:
            if ( memcmp(v10, "write_only", v9) )
            {
              if ( v9 != j__strlen("__read_write") )
                goto LABEL_1827;
              goto LABEL_1064;
            }
LABEL_2302:
            if ( (*(_BYTE *)(a1 + 34) & 0xF) == 6 && !v1 )
              return 3;
LABEL_1823:
            if ( j__strlen("__read_write") != v9 )
              goto LABEL_1827;
            if ( !v9 )
            {
LABEL_1825:
              if ( (*(_BYTE *)(a1 + 34) & 0xF) == 6 && !v1 )
                return 4;
LABEL_1827:
              v283 = j__strlen("read_write");
              result = 0;
              if ( v283 != v9 )
                return result;
              if ( !v9 )
              {
LABEL_1067:
                if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
                  return 0;
                result = 5;
                if ( v1 )
                  return 0;
                return result;
              }
LABEL_1066:
              v191 = memcmp(v10, "read_write", v9);
              result = 0;
              if ( v191 )
                return result;
              goto LABEL_1067;
            }
LABEL_1064:
            if ( memcmp(v10, "__read_write", v9) )
            {
              v190 = j__strlen("read_write");
              result = 0;
              if ( v9 != v190 )
                return result;
              goto LABEL_1066;
            }
            goto LABEL_1825;
          }
          goto LABEL_2319;
        }
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 6 && !v1 )
          return 1;
      }
      if ( v9 != j__strlen("__write_only") )
        goto LABEL_1060;
      goto LABEL_1821;
    case 0x11A:
      result = 0;
      if ( v9 != 10 )
      {
        if ( v9 == 8 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 15 )
        {
          v305 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v305 == 1 )
          {
            return 2;
          }
          else
          {
            v306 = v1 - 1;
            if ( v305 == 2 && !v306 )
            {
              return 3;
            }
            else
            {
              if ( v305 != 3 )
                return 0;
              result = 4;
              if ( v306 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x11B:
      result = 0;
      if ( v9 != 9 )
      {
        if ( v9 == 7 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 14 )
        {
          v289 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v289 == 1 )
          {
            return 2;
          }
          else
          {
            v290 = v1 - 1;
            if ( v289 == 2 && !v290 )
            {
              return 3;
            }
            else
            {
              if ( v289 != 3 )
                return 0;
              result = 4;
              if ( v290 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x11C:
      result = 0;
      if ( v9 != 8 )
      {
        if ( v9 == 6 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 13 )
        {
          v320 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v320 == 1 )
          {
            return 2;
          }
          else
          {
            v321 = v1 - 1;
            if ( v320 == 2 && !v321 )
            {
              return 3;
            }
            else
            {
              if ( v320 != 3 )
                return 0;
              result = 4;
              if ( v321 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x11D:
      result = 0;
      v272 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v272 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v272 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v272 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x11E:
      result = 0;
      v169 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v169 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v169 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v169 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x120:
      result = 0;
      if ( v9 != 7 )
      {
        if ( v9 == 5 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 12 )
        {
          v314 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v314 == 1 )
          {
            return 2;
          }
          else
          {
            v315 = v1 - 1;
            if ( v314 == 2 && !v315 )
            {
              return 3;
            }
            else
            {
              if ( v314 != 3 )
                return 0;
              result = 4;
              if ( v315 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x122:
      result = 0;
      if ( v9 != 9 )
      {
        if ( v9 == 7 )
        {
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 6);
        }
        else if ( v9 == 14 )
        {
          v312 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v312 == 1 )
          {
            return 2;
          }
          else
          {
            v313 = v1 - 1;
            if ( v312 == 2 && !v313 )
            {
              return 3;
            }
            else
            {
              if ( v312 != 3 )
                return 0;
              result = 4;
              if ( v313 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x124:
      result = 0;
      v180 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v180 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v180 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v180 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x125:
      result = 0;
      v181 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v181 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v181 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v181 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x127:
      if ( j__strlen("ownership_holds") != v9 )
        goto LABEL_168;
      if ( v9 )
      {
        if ( !memcmp(v10, "ownership_holds", v9) )
        {
          v36 = *(_BYTE *)(a1 + 34);
          if ( (v36 & 0xF) == 1 && !v1 )
            return 0;
          if ( (v36 & 0xF) == 2 && v1 == 1 )
            return 1;
          if ( (v36 & 0xF) == 3 && v1 == 1 )
            return 2;
        }
LABEL_168:
        if ( v9 == 17 )
        {
          v308 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v308 == 1 )
            return 3;
          if ( v308 == 2 && v1 == 1 )
            return 4;
          if ( v308 == 3 && v1 == 1 )
            return 5;
          v309 = j__strlen("ownership_takes");
          result = 0;
          if ( v309 != 17 )
            return result;
        }
        else
        {
          v37 = j__strlen("ownership_takes");
          result = 0;
          if ( v37 != v9 )
            return result;
          if ( !v9 )
          {
            v38 = *(_BYTE *)(a1 + 34);
LABEL_172:
            v39 = v38 & 0xF;
            if ( !v1 && v39 == 1 )
              return 6;
            if ( v1 == 1 && v39 == 2 )
              return 7;
            goto LABEL_176;
          }
        }
        if ( memcmp(v10, "ownership_takes", v9) )
          return 0;
        v38 = *(_BYTE *)(a1 + 34);
        if ( (v38 & 0xF) == 1 && !v1 )
          return 6;
        if ( (v38 & 0xF) == 2 && v1 == 1 )
          return 7;
LABEL_176:
        if ( (v38 & 0xF) != 3 )
          return 0;
        result = 8;
        if ( v1 != 1 )
          return 0;
        return result;
      }
      v333 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( !v1 && v333 == 1 )
        return 0;
      if ( v333 == 2 && v1 == 1 )
        return 1;
      if ( v333 == 3 && v1 == 1 )
        return 2;
      v340 = *(_BYTE *)(a1 + 34);
      v334 = j__strlen("ownership_takes");
      result = 0;
      if ( v334 )
        return result;
      v38 = v340;
      goto LABEL_172;
    case 0x128:
      result = 0;
      v206 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v206 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v206 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v206 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x12A:
      switch ( v9 )
      {
        case 6uLL:
          v302 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v302 == 1 )
          {
            return 0;
          }
          else if ( v302 == 2 && v1 == 1 )
          {
            return 1;
          }
          else
          {
            if ( v302 != 3 )
              return 0;
            result = 2;
            if ( v1 != 1 )
              return 0;
          }
          break;
        case 8uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 7uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x12B:
      if ( v9 == 16 )
      {
        v323 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v323 == 1 )
        {
          return 0;
        }
        else if ( v323 == 2 && v1 == 1 )
        {
          return 1;
        }
        else
        {
          if ( v323 != 3 )
            return 0;
          result = 2;
          if ( v1 != 1 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 24 )
        {
          v246 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v246 == 1 )
          {
            return 3;
          }
          else
          {
            v247 = v1 - 1;
            if ( v246 == 2 && !v247 )
            {
              return 4;
            }
            else
            {
              if ( v246 != 3 )
                return 0;
              result = 5;
              if ( v247 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x12C:
      result = 0;
      v220 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v220 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v220 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v220 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x12D:
      result = 0;
      v201 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v201 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v201 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v201 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x136:
      result = 0;
      v275 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v275 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v275 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v275 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x137:
      result = 0;
      v240 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v240 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v240 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v240 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x138:
      result = 0;
      v17 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v17 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v17 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v17 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x139:
      result = 0;
      v142 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v142 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v142 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v142 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x13E:
      result = 0;
      v278 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v278 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v278 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v278 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x140:
      if ( v9 == 6 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 2 && v7 )
          return 0;
        else
          return (unsigned __int8)v7 & ((*(_BYTE *)(a1 + 34) & 0xF) == 3);
      }
      else
      {
        result = 0;
        if ( v9 == 12 )
        {
          v236 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v236 == 1 )
          {
            return 2;
          }
          else
          {
            v237 = v1 - 1;
            if ( v236 == 2 && !v237 )
            {
              return 3;
            }
            else
            {
              if ( v236 != 3 )
                return 0;
              result = 4;
              if ( v237 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x141:
      if ( v9 == 9 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 2 && v7 )
          return 0;
        else
          return (unsigned __int8)v7 & ((*(_BYTE *)(a1 + 34) & 0xF) == 3);
      }
      else
      {
        result = 0;
        if ( v9 == 15 )
        {
          v279 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v279 == 1 && !v1 )
          {
            return 2;
          }
          else
          {
            v280 = v1 - 1;
            if ( v279 == 2 && !v280 )
            {
              return 3;
            }
            else
            {
              if ( v279 != 3 )
                return 0;
              result = 4;
              if ( v280 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x142:
      result = 0;
      v91 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v91 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v91 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v91 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x143:
      result = 0;
      v133 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v133 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v133 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v133 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x144:
      result = 0;
      v172 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v172 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v172 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v172 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x145:
      if ( v9 == 7 )
      {
        v310 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v310 == 1 && !v1 )
        {
          return 0;
        }
        else if ( v310 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v310 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 9 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0x146:
      result = 0;
      v128 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v128 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v128 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v128 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x148:
      switch ( v9 )
      {
        case 0x12uLL:
          v319 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v319 == 1 && !v1 )
            return 0;
          else
            return (v1 == 1) & (unsigned __int8)(v319 == 2);
        case 0x19uLL:
          v253 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v253 == 1 )
          {
            return 2;
          }
          else
          {
            if ( v253 != 2 )
              return 0;
            result = 3;
            if ( v1 != 1 )
              return 0;
          }
          break;
        case 0x1AuLL:
          v285 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v285 == 1 )
          {
            return 4;
          }
          else if ( v1 == 1 && v285 == 2 )
          {
            return 5;
          }
          else
          {
            return 0;
          }
        case 0xFuLL:
          v325 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v325 == 1 && !v1 )
          {
            return 6;
          }
          else if ( v1 == 1 && v325 == 2 )
          {
            return 7;
          }
          else
          {
            return 0;
          }
        default:
          return 0;
      }
      return result;
    case 0x149:
      result = 0;
      v88 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v88 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v88 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v88 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x14B:
      switch ( v9 )
      {
        case 0x13uLL:
          v311 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v311 == 1 )
            return 0;
          else
            return (v1 == 1) & (unsigned __int8)(v311 == 2);
        case 0x18uLL:
          v89 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v89 == 1 )
          {
            return 2;
          }
          else if ( v1 == 1 && v89 == 2 )
          {
            return 3;
          }
          else
          {
            return 0;
          }
        case 0x1AuLL:
          v284 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v284 == 1 )
          {
            return 4;
          }
          else
          {
            if ( v284 != 2 )
              return 0;
            result = 5;
            if ( v1 != 1 )
              return 0;
          }
          break;
        case 0x15uLL:
          v324 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v324 == 1 && !v1 )
          {
            return 6;
          }
          else
          {
            if ( v324 != 2 )
              return 0;
            result = 7;
            if ( v1 != 1 )
              return 0;
          }
          break;
        default:
          return 0;
      }
      return result;
    case 0x14C:
      result = 0;
      if ( v9 == 6 )
      {
        v90 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v90 == 1 && !v1 )
        {
          return 1;
        }
        else if ( v90 == 2 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          if ( v90 != 3 )
            return 0;
          result = 3;
          if ( v1 != 2 )
            return 0;
        }
      }
      return result;
    case 0x14D:
      result = 0;
      v165 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v165 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v165 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v165 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x14F:
      result = 0;
      v155 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v155 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v155 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v155 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x150:
      result = 0;
      v105 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v105 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v105 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v105 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x153:
      result = 0;
      v170 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v170 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v170 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v170 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x154:
      result = 0;
      v267 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v267 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v267 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v267 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x156:
      if ( v9 == 7 )
      {
        v301 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v301 == 1 && !v1 )
        {
          return 0;
        }
        else if ( v301 == 2 && v1 == 2 )
        {
          return 1;
        }
        else
        {
          if ( v301 != 3 )
            return 0;
          result = 2;
          if ( v1 != 2 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 8 )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 4 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
        }
      }
      return result;
    case 0x157:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      switch ( (_DWORD)result )
      {
        case 4:
          return 0;
        case 1:
          return v1 == 0;
        case 2:
          if ( v1 != 2 )
            return 0;
          break;
        default:
          if ( (_DWORD)result != 3 || v1 != 2 )
            return 0;
          break;
      }
      return result;
    case 0x158:
      result = 0;
      v263 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v263 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v263 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v263 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x15A:
      result = 0;
      v233 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v233 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v233 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v233 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x15B:
      result = 0;
      v281 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v281 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v281 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v281 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x15C:
      result = 0;
      v100 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v100 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v100 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v100 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x15E:
      switch ( v9 )
      {
        case 7uLL:
          v294 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v294 == 1 )
          {
            return 0;
          }
          else if ( v294 == 2 && v1 == 2 )
          {
            return 1;
          }
          else
          {
            if ( v294 != 3 )
              return 0;
            result = 2;
            if ( v1 != 2 )
              return 0;
          }
          break;
        case 9uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 8uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x161:
      result = *(_BYTE *)(a1 + 34) & 0xF;
      if ( (_DWORD)result == 2 )
      {
        if ( v1 == 7 )
        {
          return 0;
        }
        else if ( v1 != 1 )
        {
          return 0;
        }
      }
      else if ( (_DWORD)result == 1 )
      {
        return v1 == 0;
      }
      else if ( v1 != 1 || (_DWORD)result != 3 )
      {
        return 0;
      }
      return result;
    case 0x162:
      result = 0;
      v65 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v65 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v65 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v65 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x163:
      result = 0;
      v85 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v85 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v85 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v85 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x164:
      result = 0;
      v83 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v83 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v83 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v83 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x165:
      result = 0;
      v76 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v76 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v76 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v76 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x16A:
      result = 0;
      v189 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v189 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v189 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v189 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x16B:
      result = 0;
      v73 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v73 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v73 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v73 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x16D:
      result = 0;
      v94 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v94 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v94 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v94 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x16E:
      result = 0;
      v63 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v63 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v63 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v63 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x170:
      if ( j__strlen("swift_newtype") != v9 )
        goto LABEL_1816;
      if ( !v9 || !memcmp(v10, "swift_newtype", v9) )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 1 && !v1 )
          return 0;
LABEL_1816:
        v282 = j__strlen("swift_wrapper");
        result = 0;
        if ( v282 != v9 )
          return result;
        if ( !v9 )
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 1);
      }
      else
      {
        v224 = j__strlen("swift_wrapper");
        result = 0;
        if ( v9 != v224 )
          return result;
      }
      v225 = memcmp(v10, "swift_wrapper", v9);
      result = 0;
      if ( v225 )
        return result;
      return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 1);
    case 0x173:
      result = 0;
      v229 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v229 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v229 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v229 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x174:
      result = 0;
      v139 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v139 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v139 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v139 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x175:
      result = 0;
      v67 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v67 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v67 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v67 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x176:
      result = 0;
      v66 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v66 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v66 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v66 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x177:
      result = 0;
      v98 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v98 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v98 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v98 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x179:
      switch ( v9 )
      {
        case 8uLL:
          v318 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v318 == 1 )
          {
            return 0;
          }
          else if ( v318 == 2 && v1 == 2 )
          {
            return 1;
          }
          else
          {
            if ( v318 != 3 )
              return 0;
            result = 2;
            if ( v1 != 2 )
              return 0;
          }
          break;
        case 0xAuLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 9uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x17B:
      result = 0;
      v164 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v164 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v164 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v164 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x17D:
      switch ( v9 )
      {
        case 0x16uLL:
          v317 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v317 == 1 )
            return 0;
          else
            return (v1 == 1) & (unsigned __int8)(v317 == 2);
        case 0x1DuLL:
          v163 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v163 == 1 )
          {
            return 2;
          }
          else if ( v1 == 1 && v163 == 2 )
          {
            return 3;
          }
          else
          {
            return 0;
          }
        case 0x1AuLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        case 0x17uLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 1 )
            return 0;
          result = 5;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x182:
      result = 0;
      v184 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v184 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v184 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v184 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x183:
      result = 0;
      v183 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v183 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v183 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v183 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x185:
      result = 0;
      v254 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v254 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v254 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v254 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x187:
      return (v1 == 1) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
    case 0x188:
      result = 0;
      v143 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v143 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v143 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v143 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x189:
      if ( v9 == 12 )
      {
        v307 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( v307 == 2 && !v1 )
        {
          return 0;
        }
        else
        {
          if ( v307 != 3 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 6 )
        {
          v71 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( !v1 && v71 == 1 )
          {
            return 1;
          }
          else if ( v71 == 2 && v1 == 2 )
          {
            return 2;
          }
          else
          {
            if ( v71 != 3 )
              return 0;
            result = 3;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0x18A:
      result = 0;
      v228 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v228 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v228 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v228 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x18B:
      result = 0;
      v79 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v79 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v79 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v79 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x18D:
      return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 5);
    case 0x18E:
      result = 0;
      v162 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v162 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v162 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v162 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x191:
      switch ( v9 )
      {
        case 0xAuLL:
          v293 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v293 == 1 && !v1 )
          {
            return 0;
          }
          else if ( v293 == 2 && v1 == 1 )
          {
            return 1;
          }
          else
          {
            if ( v293 != 3 )
              return 0;
            result = 2;
            if ( v1 != 1 )
              return 0;
          }
          break;
        case 0xCuLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 3;
          if ( v1 )
            return 0;
          break;
        case 0xBuLL:
          if ( (*(_BYTE *)(a1 + 34) & 0xF) != 6 )
            return 0;
          result = 4;
          if ( v1 )
            return 0;
          break;
        default:
          return 0;
      }
      return result;
    case 0x192:
      result = 0;
      v68 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v68 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v68 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v68 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x193:
      result = 0;
      v55 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v55 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v55 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v55 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x194:
      result = 0;
      v50 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v50 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v50 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v50 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x195:
      if ( v9 == 9 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0xF) == 2 && !v1 )
          return 0;
        else
          return (v1 == 0) & (unsigned __int8)((*(_BYTE *)(a1 + 34) & 0xF) == 3);
      }
      else
      {
        result = 0;
        if ( v9 == 18 )
        {
          v51 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v1 == 1 && v51 == 2 )
          {
            return 2;
          }
          else if ( v51 == 1 && !v1 )
          {
            return 3;
          }
          else if ( v51 == 2 && v1 == 2 )
          {
            return 4;
          }
          else
          {
            if ( v51 != 3 )
              return 0;
            result = 5;
            if ( v1 != 2 )
              return 0;
          }
        }
      }
      return result;
    case 0x196:
      result = 0;
      v33 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v33 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v33 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v33 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x197:
      result = 0;
      v22 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v22 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v22 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v22 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x198:
      result = 0;
      v21 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v21 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v21 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v21 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x199:
      result = 0;
      v20 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v20 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v20 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v20 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x19B:
      result = 0;
      v127 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v127 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v127 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v127 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x19C:
      result = 0;
      v126 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v126 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v126 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v126 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x19E:
      result = 0;
      v42 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v42 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v42 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v42 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x19F:
      if ( v9 == 22 )
      {
        v299 = *(_BYTE *)(a1 + 34) & 0xF;
        if ( !v1 && v299 == 1 )
        {
          return 0;
        }
        else if ( v299 == 2 && v1 == 1 )
        {
          return 1;
        }
        else
        {
          if ( v299 != 3 )
            return 0;
          result = 2;
          if ( v1 != 1 )
            return 0;
        }
      }
      else
      {
        result = 0;
        if ( v9 == 21 )
        {
          v31 = *(_BYTE *)(a1 + 34) & 0xF;
          if ( v31 == 1 && !v1 )
          {
            return 3;
          }
          else
          {
            v32 = v1 - 1;
            if ( v31 == 2 && !v32 )
            {
              return 4;
            }
            else
            {
              if ( v31 != 3 )
                return 0;
              result = 5;
              if ( v32 )
                return 0;
            }
          }
        }
      }
      return result;
    case 0x1A0:
      result = 0;
      v30 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v30 != 1 )
      {
        LOBYTE(result) = v1 == 1;
        if ( v30 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v30 == 3 && v1 == 1 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    case 0x1A1:
      result = 0;
      v264 = *(_BYTE *)(a1 + 34) & 0xF;
      if ( v264 != 1 )
      {
        LOBYTE(result) = v1 == 2;
        if ( v264 == 2 )
        {
          return (unsigned __int8)result;
        }
        else if ( v264 == 3 && v1 == 2 )
        {
          return 2;
        }
        else
        {
          return 0;
        }
      }
      return result;
    default:
      return 0;
  }
}

