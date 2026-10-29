__int64 __fastcall sub_17C1D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 **v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 **v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // r12
  __int64 *v19; // r14
  bool v20; // al
  unsigned int v21; // edx
  __int64 *v22; // rsi
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r15
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 *v43; // rax
  __int64 **v44; // rax
  __int64 *v45; // rdx
  unsigned __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r15
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  bool v65; // dl
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 **v95; // rax
  __int64 *v96; // rdx
  unsigned __int64 v97; // rax
  __int64 *v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rbx
  __int64 v148; // rax
  bool v149; // dl
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // r14
  __int64 v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // r8
  __int64 v213; // r9
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rax
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  __int64 v221; // rdx
  bool v222; // [rsp+1Fh] [rbp-D9h] BYREF
  __int64 v223; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v224; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v225[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v226; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v227[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v228; // [rsp+A8h] [rbp-50h]
  unsigned int v229; // [rsp+B0h] [rbp-48h]
  char v230; // [rsp+B4h] [rbp-44h]

  v7 = *(unsigned __int16 *)(a3 + 36);
  switch ( (_WORD)v7 )
  {
    case 0x81:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v8 = (__int64 **)sub_B8C3D0(a2, a2, v7, a4, a5, a6);
        v9 = *v8;
        v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
        if ( (unsigned __int64)v9 < v10 )
        {
          v23 = v9;
          while ( *(_WORD *)(*v23 + 36) != 272 )
          {
            if ( (__int64 *)v10 == ++v23 )
              return 1;
          }
          if ( (__int64 *)v10 == v23 )
            return 1;
LABEL_19:
          while ( 1 )
          {
            v18 = *v9;
            if ( *(_WORD *)(*v9 + 36) == 272 )
              break;
            ++v9;
          }
LABEL_20:
          v19 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v18 + 24), 0xCADu, 0);
          if ( v228 )
          {
            sub_AE9DF0(v227, v18, 0xEu);
          }
          else
          {
            if ( !v230 )
            {
LABEL_22:
              v20 = 1;
              if ( (*(_BYTE *)(v18 + 35) & 2) == 0 )
                v20 = (*(_BYTE *)(a3 + 35) & 2) != 0;
              LOBYTE(v224) = v20;
              sub_1588420((__int64)v225, (unsigned __int8 *)&v224);
              sub_15F7200(v225);
              v21 = *(_DWORD *)(a3 + 24);
              goto LABEL_25;
            }
            v33 = sub_168B9E0(v225);
            v34 = v226;
            if ( v226 )
              v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v226 + 32LL))(v226);
            v224 = v34;
            v35 = sub_1587BC0(v33, &v224, v29, v30, v31, v32);
            sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v229 + 8), v18, 0xEu);
          }
          if ( v228 )
          {
LABEL_44:
            sub_AE9DF0(v227, a3, 0xEu);
            goto LABEL_22;
          }
          if ( !v230 )
            goto LABEL_22;
          v40 = sub_168B9E0(v225);
          v41 = v226;
          if ( v226 )
            v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v226 + 32LL))(v226);
LABEL_51:
          v224 = v41;
          v42 = sub_1587BC0(v40, &v224, v36, v37, v38, v39);
          sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v229 + 8), a3, 0xEu);
          goto LABEL_22;
        }
        if ( v9 != (__int64 *)v10 )
        {
          if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 272 )
          {
            v11 = (__int64 *)(v10 + 8);
            while ( v9 != v11 )
            {
              v12 = *v11++;
              if ( *(_WORD *)(v12 + 36) == 272 )
                goto LABEL_19;
            }
            return 1;
          }
          goto LABEL_19;
        }
      }
      return 1;
    case 0x35:
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      {
        v14 = (__int64 **)sub_B8C3D0(a2, a2, v7, a4, a5, a6);
        v15 = *v14;
        v16 = (unsigned __int64)&(*v14)[*((unsigned int *)v14 + 2)];
        if ( (unsigned __int64)v15 >= v16 )
        {
          if ( v15 == (__int64 *)v16 )
            return 1;
          if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 291 )
          {
            v48 = (__int64 *)(v16 + 8);
            while ( v48 != v15 )
            {
              v49 = *v48++;
              if ( *(_WORD *)(v49 + 36) == 291 )
                goto LABEL_53;
            }
            return 1;
          }
        }
        else
        {
          v17 = v15;
          while ( *(_WORD *)(*v17 + 36) != 291 )
          {
            if ( (__int64 *)v16 == ++v17 )
              return 1;
          }
          if ( (__int64 *)v16 == v17 )
            return 1;
        }
LABEL_53:
        v18 = *v15;
        if ( *(_WORD *)(*v15 + 36) != 291 )
        {
          v43 = v15 + 1;
          do
            v18 = *v43++;
          while ( *(_WORD *)(v18 + 36) != 291 );
        }
        goto LABEL_20;
      }
      return 1;
    case 0x97:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v24 = (__int64 **)sub_B8C3D0(a2, a2, v7, a4, a5, a6);
      v25 = *v24;
      v26 = (unsigned __int64)&(*v24)[*((unsigned int *)v24 + 2)];
      if ( (unsigned __int64)v25 < v26 )
      {
        v57 = v25;
        while ( *(_WORD *)(*v57 + 36) != 156 )
        {
          if ( (__int64 *)v26 == ++v57 )
            return 1;
        }
        if ( (__int64 *)v26 == v57 )
          return 1;
      }
      else
      {
        if ( v25 == (__int64 *)v26 )
          return 1;
        if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 156 )
        {
          v27 = (__int64 *)(v26 + 8);
          while ( v25 != v27 )
          {
            v28 = *v27++;
            if ( *(_WORD *)(v28 + 36) == 156 )
              goto LABEL_71;
          }
          return 1;
        }
      }
LABEL_71:
      while ( 1 )
      {
        v18 = *v25;
        if ( *(_WORD *)(*v25 + 36) == 156 )
          break;
        ++v25;
      }
LABEL_72:
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v18 + 24), 0xCADu, 0);
      if ( v228 )
      {
        sub_AE9DF0(v227, v18, 0xEu);
      }
      else
      {
        if ( !v230 )
          goto LABEL_22;
        v54 = sub_168B9E0(v225);
        v55 = v226;
        if ( v226 )
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v226 + 32LL))(v226);
        v224 = v55;
        v56 = sub_1587BC0(v54, &v224, v50, v51, v52, v53);
        sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * v229 + 8), v18, 0xEu);
      }
      if ( v228 )
        goto LABEL_44;
      if ( !v230 )
        goto LABEL_22;
      v40 = sub_168B9E0(v225);
      v41 = v226;
      if ( v226 )
        v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v226 + 32LL))(v226);
      goto LABEL_51;
    case 0x9C:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v44 = (__int64 **)sub_B8C3D0(a2, a2, v7, a4, a5, a6);
      v45 = *v44;
      v46 = (unsigned __int64)&(*v44)[*((unsigned int *)v44 + 2)];
      if ( (unsigned __int64)v45 >= v46 )
      {
        if ( v45 == (__int64 *)v46 )
          return 1;
        while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 151 )
        {
          v46 += 8LL;
          if ( v45 == (__int64 *)v46 )
            return 1;
        }
      }
      else
      {
        v47 = v45;
        while ( *(_WORD *)(*v47 + 36) != 151 )
        {
          if ( (__int64 *)v46 == ++v47 )
            return 1;
        }
        if ( (__int64 *)v46 == v47 )
          return 1;
      }
      v18 = *v45;
      if ( *(_WORD *)(*v45 + 36) != 151 )
      {
        v72 = v45 + 1;
        do
          v18 = *v72++;
        while ( *(_WORD *)(v18 + 36) != 151 );
      }
      goto LABEL_72;
    case 0x9D:
      v223 = a3;
      v58 = sub_17A74E0(a2, a2, v7, a4, a5, a6);
      v224 = v58;
      if ( v58 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v58 + 24), 0xCADu, 0);
        v63 = sub_17B1880((__int64)v225, &v224);
        goto LABEL_91;
      }
      v73 = sub_17A75A0(a2, a2, v59, v60, v61, v62);
      v224 = v73;
      if ( v73 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v73 + 24), 0xCADu, 0);
        v63 = sub_17B1B40((__int64)v225, &v224);
        goto LABEL_91;
      }
      v81 = sub_A6A7F0(a2);
      v224 = v81;
      if ( v81 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v81 + 24), 0xCADu, 0);
        v63 = sub_17B1930((__int64)v225, &v224);
        goto LABEL_91;
      }
      v94 = sub_17A7660(a2, a2, v82, v83, v84, v85);
      v224 = v94;
      result = 1;
      if ( v94 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v94 + 24), 0xCADu, 0);
        v63 = sub_17B1A90((__int64)v225, &v224);
LABEL_91:
        v64 = sub_17B19E0(v63, &v223);
        v65 = 1;
        if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
LABEL_92:
          v65 = (*(_BYTE *)(v223 + 35) & 2) != 0;
LABEL_93:
        v222 = v65;
        sub_1588420(v64, (unsigned __int8 *)&v222);
        sub_15F7200(v225);
        v21 = *(_DWORD *)(v223 + 24);
LABEL_25:
        v22 = v19;
LABEL_26:
        sub_168B9F0((__int64)v225, v22, v21, 0x16CFu, 0);
        sub_15F7200(v225);
        return 0;
      }
      break;
    case 0x9E:
      v223 = a3;
      v66 = sub_17A74E0(a2, a2, v7, a4, a5, a6);
      v224 = v66;
      if ( v66 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v66 + 24), 0xCADu, 0);
        v71 = sub_17B1880((__int64)v225, &v224);
      }
      else
      {
        v80 = sub_17A75A0(a2, a2, v67, v68, v69, v70);
        v224 = v80;
        if ( v80 )
        {
          v19 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v80 + 24), 0xCADu, 0);
          v71 = sub_17B1B40((__int64)v225, &v224);
        }
        else
        {
          v89 = sub_A6A7F0(a2);
          v224 = v89;
          if ( v89 )
          {
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v89 + 24), 0xCADu, 0);
            v71 = sub_17B1930((__int64)v225, &v224);
          }
          else
          {
            v99 = sub_17A7720(a2, a2, v90, v91, v92, v93);
            v224 = v99;
            result = 1;
            if ( !v99 )
              return result;
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v99 + 24), 0xCADu, 0);
            v71 = sub_17B19E0((__int64)v225, &v224);
          }
        }
      }
      v64 = sub_17B1A90(v71, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0x9F:
      v223 = a3;
      v74 = sub_17A77E0(a2, a2, v7, a4, a5, a6);
      v224 = v74;
      if ( v74 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v74 + 24), 0xCADu, 0);
        v79 = sub_17B0AC0((__int64)v225, &v224);
      }
      else
      {
        v88 = sub_17A78A0(a2, a2, v75, v76, v77, v78);
        v224 = v88;
        result = 1;
        if ( !v88 )
          return result;
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v88 + 24), 0xCADu, 0);
        v79 = sub_17B0B70((__int64)v225, &v224);
      }
      v64 = sub_17B0A10(v79, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0xA0:
      v223 = a3;
      v86 = sub_17A7960(a2, a2, v7, a4, a5, a6);
      v224 = v86;
      if ( !v86 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v86 + 24), 0xCADu, 0);
      v87 = sub_17B08B0((__int64)v225, &v224);
      v64 = sub_17B0800(v87, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xA1:
      v223 = a3;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        return 1;
      v95 = (__int64 **)sub_B8C3D0(a2, a2, v7, a4, a5, a6);
      v96 = *v95;
      v97 = (unsigned __int64)&(*v95)[*((unsigned int *)v95 + 2)];
      if ( (unsigned __int64)v96 >= v97 )
      {
        if ( v96 == (__int64 *)v97 )
          return 1;
        while ( *(_WORD *)(*(_QWORD *)v97 + 36LL) != 162 )
        {
          v97 += 8LL;
          if ( v96 == (__int64 *)v97 )
            return 1;
        }
      }
      else
      {
        v98 = v96;
        while ( *(_WORD *)(*v98 + 36) != 162 )
        {
          if ( (__int64 *)v97 == ++v98 )
            return 1;
        }
        if ( (__int64 *)v97 == v98 )
          return 1;
      }
      while ( 1 )
      {
        v108 = *v96;
        if ( *(_WORD *)(*v96 + 36) == 162 )
          break;
        ++v96;
      }
      v109 = *(_DWORD *)(v108 + 24);
      v19 = (__int64 *)(a1 + 8);
      v224 = v108;
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), v109, 0xCADu, 0);
      v110 = sub_17B0750((__int64)v225, &v224);
      v64 = sub_17B06A0(v110, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xA2:
      v223 = a3;
      v100 = sub_17A7A20(a2, a2, v7, a4, a5, a6);
      v224 = v100;
      if ( !v100 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v100 + 24), 0xCADu, 0);
      v101 = sub_17B06A0((__int64)v225, &v224);
      v64 = sub_17B0750(v101, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xA3:
      v223 = a3;
      v102 = sub_17A7AE0(a2, a2, v7, a4, a5, a6);
      v224 = v102;
      if ( v102 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v102 + 24), 0xCADu, 0);
        v107 = sub_17B0800((__int64)v225, &v224);
      }
      else
      {
        v113 = sub_17A7BA0(a2, a2, v103, v104, v105, v106);
        v224 = v113;
        result = 1;
        if ( !v113 )
          return result;
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v113 + 24), 0xCADu, 0);
        v107 = sub_17B0960((__int64)v225, &v224);
      }
      v64 = sub_17B08B0(v107, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0xA5:
      v223 = a3;
      v111 = sub_17A7960(a2, a2, v7, a4, a5, a6);
      v224 = v111;
      if ( !v111 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v111 + 24), 0xCADu, 0);
      v112 = sub_17B08B0((__int64)v225, &v224);
      v64 = sub_17B0960(v112, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xA8:
      v223 = a3;
      v114 = sub_17A7C60(a2, a2, v7, a4, a5, a6);
      v224 = v114;
      if ( v114 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v114 + 24), 0xCADu, 0);
        v119 = sub_17B0A10((__int64)v225, &v224);
      }
      else
      {
        v122 = sub_17A78A0(a2, a2, v115, v116, v117, v118);
        v224 = v122;
        result = 1;
        if ( !v122 )
          return result;
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v122 + 24), 0xCADu, 0);
        v119 = sub_17B0B70((__int64)v225, &v224);
      }
      v64 = sub_17B0AC0(v119, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0xB3:
      v223 = a3;
      v120 = sub_17A7D20(a2, a2, v7, a4, a5, a6);
      v224 = v120;
      if ( !v120 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v120 + 24), 0xCADu, 0);
      v121 = sub_17B0CD0((__int64)v225, &v224);
      v64 = sub_17B0C20(v121, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xB4:
      v223 = a3;
      v123 = sub_17A7DE0(a2, a2, v7, a4, a5, a6);
      v224 = v123;
      if ( !v123 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v123 + 24), 0xCADu, 0);
      v124 = sub_17B0E30((__int64)v225, &v224);
      v64 = sub_17B0D80(v124, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xBB:
      v223 = a3;
      v125 = sub_17A7EA0(a2, a2, v7, a4, a5, a6);
      v224 = v125;
      if ( !v125 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v125 + 24), 0xCADu, 0);
      v126 = sub_17B13B0((__int64)v225, &v224);
      v64 = sub_17B1300(v126, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xCC:
      v223 = a3;
      v127 = sub_17A7F60(a2, a2, v7, a4, a5, a6);
      v224 = v127;
      if ( !v127 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v127 + 24), 0xCADu, 0);
      v128 = sub_17B1250((__int64)v225, &v224);
      v64 = sub_17B11A0(v128, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xE0:
      v223 = a3;
      v129 = sub_17A7C60(a2, a2, v7, a4, a5, a6);
      v224 = v129;
      if ( v129 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v129 + 24), 0xCADu, 0);
        v134 = sub_17B0A10((__int64)v225, &v224);
      }
      else
      {
        v137 = sub_17A77E0(a2, a2, v130, v131, v132, v133);
        v224 = v137;
        result = 1;
        if ( !v137 )
          return result;
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v137 + 24), 0xCADu, 0);
        v134 = sub_17B0AC0((__int64)v225, &v224);
      }
      v64 = sub_17B0B70(v134, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0xE7:
      v223 = a3;
      v135 = sub_17A8020(a2, a2, v7, a4, a5, a6);
      v224 = v135;
      if ( !v135 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v135 + 24), 0xCADu, 0);
      v136 = sub_17B0C20((__int64)v225, &v224);
      v64 = sub_17B0CD0(v136, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0xEE:
      v223 = a3;
      v138 = sub_17A80E0(a2, a2, v7, a4, a5, a6);
      v224 = v138;
      if ( !v138 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v138 + 24), 0xCADu, 0);
      v139 = sub_17B0D80((__int64)v225, &v224);
      v64 = sub_17B0E30(v139, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x100:
      v223 = a3;
      v140 = sub_17A81A0(a2, a2, v7, a4, a5, a6);
      v224 = v140;
      if ( !v140 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v140 + 24), 0xCADu, 0);
      v141 = sub_17B0F90((__int64)v225, &v224);
      v64 = sub_17B0EE0(v141, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x103:
      v223 = a3;
      v142 = sub_17A8260(a2, a2, v7, a4, a5, a6);
      v147 = v142;
      if ( v142 )
      {
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v142 + 24), 0xCADu, 0);
        if ( v228 )
        {
          sub_AE9DF0(v227, v147, 0xEu);
        }
        else if ( v230 )
        {
          v154 = sub_168B9E0(v225);
          v155 = v226;
          if ( v226 )
            v155 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v226 + 32LL))(v226);
          v224 = v155;
          v156 = sub_1587BC0(v154, &v224, v150, v151, v152, v153);
          sub_AE9DF0((unsigned __int8 **)(*v156 + 32LL * v229 + 8), v147, 0xEu);
        }
        v148 = sub_17B0F90((__int64)v225, &v223);
        v149 = 1;
        if ( (*(_BYTE *)(v147 + 35) & 2) == 0 )
          v149 = (*(_BYTE *)(v223 + 35) & 2) != 0;
        LOBYTE(v224) = v149;
        sub_1588420(v148, (unsigned __int8 *)&v224);
        sub_15F7200(v225);
        v22 = (__int64 *)(a1 + 8);
        v21 = *(_DWORD *)(v223 + 24);
        goto LABEL_26;
      }
      v157 = sub_17A8320(a2, a2, v143, v144, v145, v146);
      v224 = v157;
      result = 1;
      if ( v157 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v157 + 24), 0xCADu, 0);
        v158 = sub_17B0EE0((__int64)v225, &v224);
        v64 = sub_17B0F90(v158, &v223);
        v65 = 1;
        if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
          goto LABEL_93;
        goto LABEL_92;
      }
      break;
    case 0x105:
      v223 = a3;
      v159 = sub_17A83E0(a2, a2, v7, a4, a5, a6);
      v224 = v159;
      if ( !v159 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v159 + 24), 0xCADu, 0);
      v160 = sub_17B10F0((__int64)v225, &v224);
      v64 = sub_17B1040(v160, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x106:
      v223 = a3;
      v161 = sub_17A84A0(a2, a2, v7, a4, a5, a6);
      v224 = v161;
      if ( !v161 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v161 + 24), 0xCADu, 0);
      v162 = sub_17B1040((__int64)v225, &v224);
      v64 = sub_17B10F0(v162, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x10B:
      v223 = a3;
      v163 = sub_17A8560(a2, a2, v7, a4, a5, a6);
      v224 = v163;
      if ( !v163 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v163 + 24), 0xCADu, 0);
      v164 = sub_17B11A0((__int64)v225, &v224);
      v64 = sub_17B1250(v164, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x10E:
      v223 = a3;
      v165 = sub_17A8620(a2, a2, v7, a4, a5, a6);
      v224 = v165;
      if ( !v165 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v165 + 24), 0xCADu, 0);
      v166 = sub_17B1300((__int64)v225, &v224);
      v64 = sub_17B13B0(v166, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x110:
      v18 = sub_17A86E0(a2, a2, v7, a4, a5, a6);
      if ( !v18 )
        return 1;
      goto LABEL_72;
    case 0x116:
      v223 = a3;
      v169 = sub_17A87A0(a2, a2, v7, a4, a5, a6);
      v224 = v169;
      result = 1;
      if ( v169 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v169 + 24), 0xCADu, 0);
        v170 = sub_17B1670((__int64)v225, &v224);
        v64 = sub_17B15C0(v170, &v223);
        v65 = 1;
        if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
          goto LABEL_93;
        goto LABEL_92;
      }
      break;
    case 0x11A:
      v223 = a3;
      v167 = sub_17A8860(a2, a2, v7, a4, a5, a6);
      v224 = v167;
      if ( !v167 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v167 + 24), 0xCADu, 0);
      v168 = sub_17B17D0((__int64)v225, &v224);
      v64 = sub_17B1720(v168, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x123:
      v18 = sub_17A8920(a2, a2, v7, a4, a5, a6);
      if ( !v18 )
        return 1;
      goto LABEL_72;
    case 0x143:
      v223 = a3;
      v171 = sub_17A89D0(a2, a2, v7, a4, a5, a6);
      v224 = v171;
      result = 1;
      if ( v171 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v171 + 24), 0xCADu, 0);
        v172 = sub_17B1510((__int64)v225, &v224);
        v64 = sub_17B1460(v172, &v223);
        v65 = 1;
        if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
          goto LABEL_93;
        goto LABEL_92;
      }
      break;
    case 0x148:
      v223 = a3;
      v173 = sub_17A8A90(a2, a2, v7, a4, a5, a6);
      v224 = v173;
      if ( !v173 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v173 + 24), 0xCADu, 0);
      v174 = sub_17B1460((__int64)v225, &v224);
      v64 = sub_17B1510(v174, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x154:
      v223 = a3;
      v175 = sub_17A8B50(a2, a2, v7, a4, a5, a6);
      v224 = v175;
      if ( !v175 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v175 + 24), 0xCADu, 0);
      v176 = sub_17B15C0((__int64)v225, &v224);
      v64 = sub_17B1670(v176, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x168:
      v223 = a3;
      v177 = sub_17A8C10(a2, a2, v7, a4, a5, a6);
      v224 = v177;
      if ( !v177 )
        return 1;
      v19 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v177 + 24), 0xCADu, 0);
      v178 = sub_17B1720((__int64)v225, &v224);
      v64 = sub_17B17D0(v178, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) == 0 )
        goto LABEL_92;
      goto LABEL_93;
    case 0x178:
      v223 = a3;
      v179 = sub_17A74E0(a2, a2, v7, a4, a5, a6);
      v224 = v179;
      if ( v179 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v179 + 24), 0xCADu, 0);
        v184 = sub_17B1880((__int64)v225, &v224);
      }
      else
      {
        v187 = sub_17A75A0(a2, a2, v180, v181, v182, v183);
        v224 = v187;
        if ( v187 )
        {
          v19 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v187 + 24), 0xCADu, 0);
          v184 = sub_17B1B40((__int64)v225, &v224);
        }
        else
        {
          v199 = sub_17A7720(a2, a2, v188, v189, v190, v191);
          v224 = v199;
          if ( v199 )
          {
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v199 + 24), 0xCADu, 0);
            v184 = sub_17B19E0((__int64)v225, &v224);
          }
          else
          {
            v214 = sub_17A7660(a2, a2, v200, v201, v202, v203);
            v224 = v214;
            result = 1;
            if ( !v214 )
              return result;
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v214 + 24), 0xCADu, 0);
            v184 = sub_17B1A90((__int64)v225, &v224);
          }
        }
      }
      v64 = sub_17B1930(v184, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    case 0x179:
      v223 = a3;
      v185 = sub_17A75A0(a2, a2, v7, a4, a5, a6);
      v224 = v185;
      if ( v185 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v185 + 24), 0xCADu, 0);
        v186 = sub_17B1B40((__int64)v225, &v224);
      }
      else
      {
        v192 = sub_A6A7F0(a2);
        v224 = v192;
        if ( v192 )
        {
          v19 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v192 + 24), 0xCADu, 0);
          v186 = sub_17B1930((__int64)v225, &v224);
        }
        else
        {
          v204 = sub_17A7720(a2, a2, v193, v194, v195, v196);
          v224 = v204;
          if ( v204 )
          {
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v204 + 24), 0xCADu, 0);
            v186 = sub_17B19E0((__int64)v225, &v224);
          }
          else
          {
            v215 = sub_17A7660(a2, a2, v205, v206, v207, v208);
            v224 = v215;
            result = 1;
            if ( !v215 )
              return result;
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v215 + 24), 0xCADu, 0);
            v186 = sub_17B1A90((__int64)v225, &v224);
          }
        }
      }
      v64 = sub_17B1880(v186, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
    default:
      result = 1;
      if ( (_WORD)v7 != 378 )
        return result;
      v223 = a3;
      v197 = sub_17A74E0(a2, a2, v7, a4, a5, a6);
      v224 = v197;
      if ( v197 )
      {
        v19 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v197 + 24), 0xCADu, 0);
        v198 = sub_17B1880((__int64)v225, &v224);
      }
      else
      {
        v209 = sub_A6A7F0(a2);
        v224 = v209;
        if ( v209 )
        {
          v19 = (__int64 *)(a1 + 8);
          sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v209 + 24), 0xCADu, 0);
          v198 = sub_17B1930((__int64)v225, &v224);
        }
        else
        {
          v216 = sub_17A7720(a2, a2, v210, v211, v212, v213);
          v224 = v216;
          if ( v216 )
          {
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v216 + 24), 0xCADu, 0);
            v198 = sub_17B19E0((__int64)v225, &v224);
          }
          else
          {
            v221 = sub_17A7660(a2, a2, v217, v218, v219, v220);
            v224 = v221;
            result = 1;
            if ( !v221 )
              return result;
            v19 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)v225, (__int64 *)(a1 + 8), *(_DWORD *)(v221 + 24), 0xCADu, 0);
            v198 = sub_17B1A90((__int64)v225, &v224);
          }
        }
      }
      v64 = sub_17B1B40(v198, &v223);
      v65 = 1;
      if ( (*(_BYTE *)(v224 + 35) & 2) != 0 )
        goto LABEL_93;
      goto LABEL_92;
  }
  return result;
}
