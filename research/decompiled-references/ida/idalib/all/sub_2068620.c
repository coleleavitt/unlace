__int64 __fastcall sub_2068620(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  char v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // rax
  char v15; // r14
  __int64 v16; // rbx
  char v17; // r8
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r14
  char v22; // al
  __int64 v23; // r9
  char v24; // r11
  __int64 v25; // rax
  char v26; // r14
  __int64 v27; // rax
  char v28; // r10
  __int64 v29; // r11
  unsigned __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rax
  _DWORD *v33; // rdi
  unsigned int v34; // esi
  _DWORD *v35; // r11
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int *v39; // rcx
  __int64 v40; // rax
  char v41; // cl
  __int64 v42; // r11
  _DWORD *v43; // r11
  unsigned int v44; // esi
  _DWORD *v45; // rdi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r11
  __int64 v53; // rdi
  __int64 v54; // rax
  char v55; // r11
  __int64 v56; // rax
  _DWORD *v57; // r10
  unsigned int v58; // esi
  _DWORD *v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  bool v67; // r14
  __int64 v68; // r14
  char v69; // al
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  char v75; // dl
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rax
  char v81; // r14
  __int64 v82; // rax
  _QWORD *v83; // rax
  _DWORD *v84; // rsi
  unsigned int v85; // r11d
  __int64 v86; // r14
  __int64 v87; // rax
  _DWORD *v88; // rdx
  __int64 v89; // rcx
  unsigned int *v90; // rdi
  char v91; // r14
  __int64 v92; // rax
  _QWORD *v93; // rax
  _DWORD *v94; // rsi
  unsigned int v95; // ebx
  __int64 v96; // r14
  __int64 v97; // rax
  _DWORD *v98; // rdx
  __int64 v99; // rcx
  unsigned int *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rax
  _DWORD *v105; // rsi
  unsigned int v106; // r10d
  __int64 v107; // rax
  _DWORD *v108; // rdx
  __int64 v109; // rcx
  unsigned int *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  _DWORD *v116; // rsi
  unsigned int v117; // r14d
  __int64 v118; // rax
  _DWORD *v119; // rdx
  __int64 v120; // rcx
  unsigned int *v121; // rdi
  __int64 v122; // [rsp+0h] [rbp-98h]
  __int64 v123; // [rsp+8h] [rbp-90h]
  __int64 v124; // [rsp+8h] [rbp-90h]
  char v125; // [rsp+10h] [rbp-88h]
  char v126; // [rsp+10h] [rbp-88h]
  char v127; // [rsp+10h] [rbp-88h]
  __int64 v128; // [rsp+10h] [rbp-88h]
  char v129; // [rsp+10h] [rbp-88h]
  __int64 v130; // [rsp+10h] [rbp-88h]
  __int64 v131; // [rsp+10h] [rbp-88h]
  __int64 v132; // [rsp+10h] [rbp-88h]
  __int64 v133; // [rsp+10h] [rbp-88h]
  __int64 v134; // [rsp+10h] [rbp-88h]
  char v135; // [rsp+10h] [rbp-88h]
  __int64 v136; // [rsp+10h] [rbp-88h]
  char v137; // [rsp+10h] [rbp-88h]
  char v138; // [rsp+10h] [rbp-88h]
  __int64 v139; // [rsp+10h] [rbp-88h]
  __int64 v140; // [rsp+10h] [rbp-88h]
  __int64 v141; // [rsp+18h] [rbp-80h]
  char v142; // [rsp+18h] [rbp-80h]
  char v143; // [rsp+18h] [rbp-80h]
  __int64 v144; // [rsp+18h] [rbp-80h]
  char v145; // [rsp+18h] [rbp-80h]
  char v146; // [rsp+18h] [rbp-80h]
  __int64 v147; // [rsp+18h] [rbp-80h]
  __int64 v148; // [rsp+18h] [rbp-80h]
  char v149; // [rsp+18h] [rbp-80h]
  char v150; // [rsp+18h] [rbp-80h]
  __int64 v151; // [rsp+18h] [rbp-80h]
  __int64 v152; // [rsp+20h] [rbp-78h]
  __int64 v153; // [rsp+20h] [rbp-78h]
  char v154; // [rsp+20h] [rbp-78h]
  char v155; // [rsp+20h] [rbp-78h]
  char v156; // [rsp+20h] [rbp-78h]
  __int64 v157; // [rsp+20h] [rbp-78h]
  char v158; // [rsp+20h] [rbp-78h]
  __int64 v159; // [rsp+20h] [rbp-78h]
  __int64 v160; // [rsp+20h] [rbp-78h]
  char v161; // [rsp+20h] [rbp-78h]
  char v162; // [rsp+20h] [rbp-78h]
  __int64 v163; // [rsp+20h] [rbp-78h]
  char v164; // [rsp+20h] [rbp-78h]
  char v165; // [rsp+28h] [rbp-70h]
  char v166; // [rsp+28h] [rbp-70h]
  bool v167; // [rsp+28h] [rbp-70h]
  char v168; // [rsp+28h] [rbp-70h]
  char v169; // [rsp+28h] [rbp-70h]
  char v170; // [rsp+28h] [rbp-70h]
  char v171; // [rsp+28h] [rbp-70h]
  __int64 v172; // [rsp+28h] [rbp-70h]
  __int64 v173; // [rsp+28h] [rbp-70h]
  char v174; // [rsp+28h] [rbp-70h]
  char v175; // [rsp+28h] [rbp-70h]
  char v176; // [rsp+28h] [rbp-70h]
  char v177; // [rsp+28h] [rbp-70h]
  char v178; // [rsp+28h] [rbp-70h]
  char v179; // [rsp+30h] [rbp-68h]
  char v180; // [rsp+30h] [rbp-68h]
  char v181; // [rsp+30h] [rbp-68h]
  __int64 v182; // [rsp+30h] [rbp-68h]
  __int64 v183; // [rsp+30h] [rbp-68h]
  char v184; // [rsp+30h] [rbp-68h]
  __int64 v185; // [rsp+30h] [rbp-68h]
  __int64 v186; // [rsp+30h] [rbp-68h]
  char v187; // [rsp+30h] [rbp-68h]
  char v188; // [rsp+30h] [rbp-68h]
  __int64 v189; // [rsp+30h] [rbp-68h]
  __int64 v190; // [rsp+38h] [rbp-60h]
  char v191; // [rsp+38h] [rbp-60h]
  char v192; // [rsp+38h] [rbp-60h]
  char v193; // [rsp+38h] [rbp-60h]
  __int64 v194; // [rsp+38h] [rbp-60h]
  __int64 v195; // [rsp+40h] [rbp-58h]
  char v196; // [rsp+40h] [rbp-58h]
  __int64 v197; // [rsp+40h] [rbp-58h]
  __int64 v198; // [rsp+40h] [rbp-58h]
  __int64 v199; // [rsp+48h] [rbp-50h]

  *(_WORD *)(a1 + 16) &= 0xFE00u;
  v5 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 20) = v5;
  *(_BYTE *)(a1 + 22) = BYTE2(v5);
  *(_BYTE *)(a1 + 23) = HIBYTE(v5) & 0x7F | *(_BYTE *)(a1 + 23) & 0x80;
  v6 = v5 & 0x7FFFFFFF;
  if ( !v6 )
    goto LABEL_44;
  v8 = 0;
  v122 = (unsigned int)(v6 - 1);
  v9 = **(_QWORD **)(a2 + 16);
LABEL_17:
  if ( (unsigned __int8)sub_20C5EB0(v9) )
  {
    *(_QWORD *)a1 = 0;
    v10 = 0;
    *(_BYTE *)(a1 + 8) = 1;
    if ( (*(_BYTE *)(a2 + 9) & 2) != 0 )
      goto LABEL_4;
LABEL_19:
    v10 = sub_2067E70(a3, v9, 1);
    if ( *(_BYTE *)(a1 + 8) )
      goto LABEL_5;
LABEL_20:
    if ( (sub_2254830(a1) & ~(-1LL << v10)) != 0 )
    {
      *(_BYTE *)(a1 + 17) |= 1u;
      v32 = sub_2254830(a1);
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = (v32 + (1LL << v10) - 1) & -(1LL << v10);
    }
    goto LABEL_5;
  }
  while ( 1 )
  {
    v10 = 0;
    if ( (*(_BYTE *)(a2 + 9) & 2) == 0 )
      goto LABEL_19;
LABEL_4:
    if ( !*(_BYTE *)(a1 + 8) )
      goto LABEL_20;
LABEL_5:
    if ( v10 >= *(_BYTE *)(a1 + 16) )
      *(_BYTE *)(a1 + 16) = v10;
    v11 = 16 * v8;
    *(_QWORD *)(a1 + v11 + 24) = *(_QWORD *)a1;
    *(_BYTE *)(a1 + v11 + 32) = *(_BYTE *)(a1 + 8);
    v12 = sub_2067E70(a3, v9, 1);
    v14 = v9;
    v15 = v12;
    v16 = 1LL << v12;
    while ( 2 )
    {
      switch ( *(_BYTE *)(v14 + 8) )
      {
        case 0:
        case 1:
          v23 = v16;
          v17 = v15;
          v29 = 2;
          v28 = 0;
          goto LABEL_14;
        case 2:
          v23 = v16;
          v17 = v15;
          v29 = 4;
          v28 = 0;
          goto LABEL_14;
        case 3:
          v23 = v16;
          v17 = v15;
          v29 = 8;
          v28 = 0;
          goto LABEL_14;
        case 4:
          v23 = v16;
          v17 = v15;
          v29 = 10;
          v28 = 0;
          goto LABEL_14;
        case 5:
        case 6:
          v23 = v16;
          v17 = v15;
          v29 = 16;
          v28 = 0;
          goto LABEL_14;
        case 7:
        case 9:
        case 0xB:
        case 0xD:
        case 0x13:
        case 0x14:
          v14 = sub_20C5D00(v14);
          continue;
        case 8:
          v23 = v16;
          v17 = v15;
          v28 = 0;
          v29 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL) + 7) >> 3;
          goto LABEL_14;
        case 0xA:
          v23 = v16;
          v17 = v15;
          v29 = 1024;
          v28 = 0;
          goto LABEL_14;
        case 0xC:
          v23 = v16;
          v17 = v15;
          v28 = 0;
          v29 = ((unsigned __int64)(*(_DWORD *)(v14 + 8) >> 8) + 7) >> 3;
          goto LABEL_14;
        case 0xE:
          v23 = v16;
          v17 = v15;
          v33 = *(_DWORD **)(a3 + 272);
          v34 = *(_DWORD *)(v14 + 8) >> 8;
          if ( !v34 )
            goto LABEL_29;
          v35 = *(_DWORD **)(a3 + 272);
          v36 = 5LL * *(unsigned int *)(a3 + 280);
          v37 = *(unsigned int *)(a3 + 280);
          if ( !(v36 * 4) )
            goto LABEL_26;
          do
          {
            while ( 1 )
            {
              v38 = v37 >> 1;
              v39 = &v35[5 * (v37 >> 1)];
              if ( v34 <= *v39 )
                break;
              v35 = v39 + 5;
              v37 = v37 - v38 - 1;
              if ( v37 <= 0 )
                goto LABEL_26;
            }
            v37 >>= 1;
          }
          while ( v38 );
LABEL_26:
          if ( v35 != &v33[v36] && v34 == *v35 )
            v33 = v35;
LABEL_29:
          v28 = 0;
          v29 = ((unsigned __int64)(unsigned int)v33[1] + 7) >> 3;
          goto LABEL_14;
        case 0xF:
          v27 = sub_2069970(a3, v14);
          v17 = v15;
          v23 = v16;
          v28 = *(_BYTE *)(v27 + 8);
          v29 = *(_QWORD *)v27 & 0x1FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        case 0x10:
          v125 = v15;
          v21 = *(_QWORD *)(v14 + 24);
          v141 = v16;
          v20 = v14;
          v22 = sub_2067E70(a3, v21, 1);
          v23 = v141;
          v17 = v125;
          v24 = v22;
          v124 = 1LL << v22;
          v25 = v21;
          v26 = v24;
          while ( 2 )
          {
            switch ( *(_BYTE *)(v25 + 8) )
            {
              case 0:
              case 1:
                v55 = v26;
                v56 = 2;
                v28 = 0;
                goto LABEL_71;
              case 2:
                v55 = v26;
                v56 = 4;
                v28 = 0;
                goto LABEL_71;
              case 3:
                v55 = v26;
                v56 = 8;
                v28 = 0;
                goto LABEL_71;
              case 4:
                v55 = v26;
                v56 = 10;
                v28 = 0;
                goto LABEL_71;
              case 5:
              case 6:
                v55 = v26;
                v56 = 16;
                v28 = 0;
                goto LABEL_71;
              case 7:
              case 9:
              case 0xB:
              case 0xD:
              case 0x13:
              case 0x14:
                v143 = v17;
                v128 = v23;
                v25 = sub_20C5D00(v25);
                v23 = v128;
                v17 = v143;
                continue;
              case 8:
                v55 = v26;
                v28 = 0;
                v56 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL) + 7) >> 3;
                goto LABEL_71;
              case 0xA:
                v55 = v26;
                v56 = 1024;
                v28 = 0;
                goto LABEL_71;
              case 0xC:
                v55 = v26;
                v28 = 0;
                v56 = ((unsigned __int64)(*(_DWORD *)(v25 + 8) >> 8) + 7) >> 3;
                goto LABEL_71;
              case 0xE:
                v55 = v26;
                v57 = *(_DWORD **)(a3 + 272);
                v58 = *(_DWORD *)(v25 + 8) >> 8;
                if ( !v58 )
                  goto LABEL_86;
                v59 = *(_DWORD **)(a3 + 272);
                v60 = 5LL * *(unsigned int *)(a3 + 280);
                v61 = *(unsigned int *)(a3 + 280);
                if ( !(v60 * 4) )
                  goto LABEL_83;
                do
                {
                  while ( 1 )
                  {
                    v62 = v61 >> 1;
                    v63 = &v59[5 * (v61 >> 1)];
                    if ( v58 <= *v63 )
                      break;
                    v59 = v63 + 5;
                    v61 = v61 - v62 - 1;
                    if ( v61 <= 0 )
                      goto LABEL_83;
                  }
                  v61 >>= 1;
                }
                while ( v62 );
LABEL_83:
                if ( v59 != &v57[v60] && v58 == *v59 )
                  v57 = v59;
LABEL_86:
                v64 = (unsigned int)v57[1];
                v28 = 0;
                v56 = (unsigned __int64)(v64 + 7) >> 3;
                goto LABEL_71;
              case 0xF:
                v153 = v23;
                v129 = v17;
                v65 = sub_2069970(a3, v25);
                v17 = v129;
                v55 = v26;
                v28 = *(_BYTE *)(v65 + 8);
                v23 = v153;
                v56 = *(_QWORD *)v65 & 0x1FFFFFFFFFFFFFFFLL;
                goto LABEL_71;
              case 0x10:
                v180 = v26;
                v68 = v25;
                v190 = v23;
                v166 = v17;
                v131 = *(_QWORD *)(v25 + 24);
                v69 = sub_2067E70(a3, v131, 1);
                v23 = v190;
                v55 = v180;
                v154 = v69;
                v17 = v166;
                v70 = 1LL << v69;
                v71 = v131;
                v144 = v70;
                while ( 2 )
                {
                  switch ( *(_BYTE *)(v71 + 8) )
                  {
                    case 0:
                    case 1:
                      v73 = 2;
                      v28 = 0;
                      goto LABEL_93;
                    case 2:
                      v73 = 4;
                      v28 = 0;
                      goto LABEL_93;
                    case 3:
                      v73 = 8;
                      v28 = 0;
                      goto LABEL_93;
                    case 4:
                      v73 = 10;
                      v28 = 0;
                      goto LABEL_93;
                    case 5:
                    case 6:
                      v73 = 16;
                      v28 = 0;
                      goto LABEL_93;
                    case 7:
                    case 9:
                    case 0xB:
                    case 0xD:
                    case 0x13:
                    case 0x14:
                      v187 = v17;
                      v175 = v55;
                      v140 = v23;
                      v71 = sub_20C5D00(v71);
                      v23 = v140;
                      v55 = v175;
                      v17 = v187;
                      continue;
                    case 8:
                      v28 = 0;
                      v73 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL) + 7) >> 3;
                      goto LABEL_93;
                    case 0xA:
                      v73 = 1024;
                      v28 = 0;
                      goto LABEL_93;
                    case 0xC:
                      v28 = 0;
                      v73 = ((unsigned __int64)(*(_DWORD *)(v71 + 8) >> 8) + 7) >> 3;
                      goto LABEL_93;
                    case 0xE:
                      v105 = *(_DWORD **)(a3 + 272);
                      v106 = *(_DWORD *)(v71 + 8) >> 8;
                      if ( !v106 )
                        goto LABEL_145;
                      v139 = 5LL * *(unsigned int *)(a3 + 280);
                      v107 = *(unsigned int *)(a3 + 280);
                      v108 = *(_DWORD **)(a3 + 272);
                      if ( !(v139 * 4) )
                        goto LABEL_142;
                      break;
                    case 0xF:
                      v186 = v23;
                      v174 = v55;
                      v138 = v17;
                      v104 = sub_2069970(a3, v71);
                      v17 = v138;
                      v55 = v174;
                      v28 = *(_BYTE *)(v104 + 8);
                      v23 = v186;
                      v73 = *(_QWORD *)v104 & 0x1FFFFFFFFFFFFFFFLL;
                      goto LABEL_93;
                    case 0x10:
                      v199 = v23;
                      v196 = v55;
                      v192 = v17;
                      v182 = *(_QWORD *)(v71 + 24);
                      v133 = v71;
                      v168 = sub_2067E70(a3, v182, 1);
                      v74 = sub_200E290(a3, v182);
                      v17 = v192;
                      v23 = v199;
                      v28 = v75;
                      v55 = v196;
                      v73 = (8
                           * *(_QWORD *)(v133 + 32)
                           * (((1LL << v168) + ((unsigned __int64)(v74 + 7) >> 3) - 1) >> v168 << v168)
                           + 7) >> 3;
                      goto LABEL_93;
                    case 0x11:
                    case 0x12:
                      v195 = v23;
                      v191 = v55;
                      v132 = *(unsigned int *)(v71 + 32);
                      v181 = v17;
                      v167 = *(_BYTE *)(v71 + 8) == 18;
                      v72 = sub_200E290(a3, *(_QWORD *)(v71 + 24));
                      v28 = v167;
                      v17 = v181;
                      v55 = v191;
                      v23 = v195;
                      v73 = (unsigned __int64)(v72 * v132 + 7) >> 3;
                      goto LABEL_93;
                  }
                  break;
                }
                do
                {
                  while ( 1 )
                  {
                    v109 = v107 >> 1;
                    v110 = &v108[5 * (v107 >> 1)];
                    if ( v106 <= *v110 )
                      break;
                    v108 = v110 + 5;
                    v107 = v107 - v109 - 1;
                    if ( v107 <= 0 )
                      goto LABEL_142;
                  }
                  v107 >>= 1;
                }
                while ( v109 );
LABEL_142:
                if ( v108 != &v105[v139] && v106 == *v108 )
                  v105 = v108;
LABEL_145:
                v28 = 0;
                v73 = ((unsigned __int64)(unsigned int)v105[1] + 7) >> 3;
LABEL_93:
                v56 = (8 * *(_QWORD *)(v68 + 32) * ((unsigned __int64)(v144 + v73 - 1) >> v154 << v154) + 7) >> 3;
                goto LABEL_71;
              case 0x11:
              case 0x12:
                v55 = v26;
                v130 = *(unsigned int *)(v25 + 32);
                v66 = *(_QWORD *)(v25 + 24);
                v67 = *(_BYTE *)(v25 + 8) == 18;
                while ( 2 )
                {
                  switch ( *(_BYTE *)(v66 + 8) )
                  {
                    case 0:
                    case 1:
                      v28 = v67;
                      v113 = 16;
                      goto LABEL_157;
                    case 2:
                      v28 = v67;
                      v113 = 32;
                      goto LABEL_157;
                    case 3:
                      v28 = v67;
                      v113 = 64;
                      goto LABEL_157;
                    case 4:
                      v28 = v67;
                      v113 = 80;
                      goto LABEL_157;
                    case 5:
                    case 6:
                      v28 = v67;
                      v113 = 128;
                      goto LABEL_157;
                    case 8:
                      v28 = v67;
                      v113 = *(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL);
                      goto LABEL_157;
                    case 0xA:
                      v28 = v67;
                      v113 = 0x2000;
                      goto LABEL_157;
                    case 0xC:
                      v28 = v67;
                      v113 = *(_DWORD *)(v66 + 8) >> 8;
                      goto LABEL_157;
                    case 0xE:
                      v28 = v67;
                      v116 = *(_DWORD **)(a3 + 272);
                      v117 = *(_DWORD *)(v66 + 8) >> 8;
                      if ( !v117 )
                        goto LABEL_167;
                      v151 = 5LL * *(unsigned int *)(a3 + 280);
                      v118 = *(unsigned int *)(a3 + 280);
                      v119 = *(_DWORD **)(a3 + 272);
                      if ( !(v151 * 4) )
                        goto LABEL_164;
                      break;
                    case 0xF:
                      v189 = v23;
                      v164 = v55;
                      v150 = v17;
                      v115 = (_QWORD *)sub_2069970(a3, v66);
                      v17 = v150;
                      v55 = v164;
                      v28 = v67;
                      v23 = v189;
                      v113 = 8LL * *v115;
                      goto LABEL_157;
                    case 0x10:
                      v198 = v23;
                      v188 = v55;
                      v178 = v17;
                      v163 = *(_QWORD *)(v66 + 24);
                      v149 = sub_2067E70(a3, v163, 1);
                      v114 = sub_200E290(a3, v163);
                      v23 = v198;
                      v17 = v178;
                      v55 = v188;
                      v28 = v67;
                      v113 = 8
                           * *(_QWORD *)(v66 + 32)
                           * (((1LL << v149) + ((unsigned __int64)(v114 + 7) >> 3) - 1) >> v149 << v149);
                      goto LABEL_157;
                    case 0x11:
                    case 0x12:
                      v194 = v23;
                      v177 = v55;
                      v162 = v17;
                      v148 = *(unsigned int *)(v66 + 32);
                      v112 = sub_200E290(a3, *(_QWORD *)(v66 + 24));
                      v17 = v162;
                      v55 = v177;
                      v28 = v67;
                      v23 = v194;
                      v113 = v112 * v148;
                      goto LABEL_157;
                    case 0x14:
                      v176 = v17;
                      v161 = v55;
                      v147 = v23;
                      v111 = sub_20C5D00(v66);
                      v23 = v147;
                      v55 = v161;
                      v66 = v111;
                      v17 = v176;
                      continue;
                    default:
                      goto LABEL_176;
                  }
                  break;
                }
                break;
            }
            break;
          }
          do
          {
            while ( 1 )
            {
              v120 = v118 >> 1;
              v121 = &v119[5 * (v118 >> 1)];
              if ( v117 <= *v121 )
                break;
              v119 = v121 + 5;
              v118 = v118 - v120 - 1;
              if ( v118 <= 0 )
                goto LABEL_164;
            }
            v118 >>= 1;
          }
          while ( v120 );
LABEL_164:
          if ( v119 != &v116[v151] && v117 == *v119 )
            v116 = v119;
LABEL_167:
          v113 = (unsigned int)v116[1];
LABEL_157:
          v56 = (unsigned __int64)(v130 * v113 + 7) >> 3;
LABEL_71:
          v29 = (8 * *(_QWORD *)(v20 + 32) * ((unsigned __int64)(v124 + v56 - 1) >> v55 << v55) + 7) >> 3;
          goto LABEL_14;
        case 0x11:
        case 0x12:
          LOBYTE(v13) = *(_BYTE *)(v14 + 8) == 18;
          v17 = v15;
          v18 = v16;
          v123 = *(unsigned int *)(v14 + 32);
          v19 = *(_QWORD *)(v14 + 24);
          v20 = v13;
          break;
      }
      break;
    }
    while ( 2 )
    {
      switch ( *(_BYTE *)(v19 + 8) )
      {
        case 0:
        case 1:
          v23 = v18;
          v28 = v20;
          v42 = 16;
          goto LABEL_47;
        case 2:
          v23 = v18;
          v28 = v20;
          v42 = 32;
          goto LABEL_47;
        case 3:
          v23 = v18;
          v28 = v20;
          v42 = 64;
          goto LABEL_47;
        case 4:
          v23 = v18;
          v28 = v20;
          v42 = 80;
          goto LABEL_47;
        case 5:
        case 6:
          v23 = v18;
          v28 = v20;
          v42 = 128;
          goto LABEL_47;
        case 8:
          v23 = v18;
          v28 = v20;
          v42 = *(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL);
          goto LABEL_47;
        case 0xA:
          v23 = v18;
          v28 = v20;
          v42 = 0x2000;
          goto LABEL_47;
        case 0xC:
          v23 = v18;
          v28 = v20;
          v42 = *(_DWORD *)(v19 + 8) >> 8;
          goto LABEL_47;
        case 0xE:
          v23 = v18;
          v28 = v20;
          v43 = *(_DWORD **)(a3 + 272);
          v44 = *(_DWORD *)(v19 + 8) >> 8;
          if ( !v44 )
            goto LABEL_62;
          v45 = *(_DWORD **)(a3 + 272);
          v46 = 5LL * *(unsigned int *)(a3 + 280);
          v47 = *(unsigned int *)(a3 + 280);
          if ( !(v46 * 4) )
            goto LABEL_59;
          do
          {
            while ( 1 )
            {
              v48 = v47 >> 1;
              v49 = &v45[5 * (v47 >> 1)];
              if ( v44 <= *v49 )
                break;
              v45 = v49 + 5;
              v47 = v47 - v48 - 1;
              if ( v47 <= 0 )
                goto LABEL_59;
            }
            v47 >>= 1;
          }
          while ( v48 );
LABEL_59:
          if ( v45 != &v43[v46] && v44 == *v45 )
            v43 = v45;
LABEL_62:
          v42 = (unsigned int)v43[1];
          goto LABEL_47;
        case 0xF:
          v126 = v17;
          v50 = (_QWORD *)sub_2069970(a3, v19);
          v17 = v126;
          v28 = v20;
          v23 = v18;
          v42 = 8LL * *v50;
          goto LABEL_47;
        case 0x10:
          v179 = v20;
          v20 = v19;
          v165 = v17;
          v152 = *(_QWORD *)(v19 + 24);
          v142 = sub_2067E70(a3, v152, 1);
          v28 = v179;
          v17 = v165;
          v51 = v152;
          while ( 2 )
          {
            switch ( *(_BYTE *)(v51 + 8) )
            {
              case 0:
              case 1:
                v23 = v18;
                v76 = 2;
                goto LABEL_96;
              case 2:
                v23 = v18;
                v76 = 4;
                goto LABEL_96;
              case 3:
                v23 = v18;
                v76 = 8;
                goto LABEL_96;
              case 4:
                v23 = v18;
                v76 = 10;
                goto LABEL_96;
              case 5:
              case 6:
                v23 = v18;
                v76 = 16;
                goto LABEL_96;
              case 8:
                v23 = v18;
                v76 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL) + 7) >> 3;
                goto LABEL_96;
              case 0xA:
                v23 = v18;
                v76 = 1024;
                goto LABEL_96;
              case 0xC:
                v23 = v18;
                v76 = ((unsigned __int64)(*(_DWORD *)(v51 + 8) >> 8) + 7) >> 3;
                goto LABEL_96;
              case 0xE:
                v23 = v18;
                v84 = *(_DWORD **)(a3 + 272);
                v85 = *(_DWORD *)(v51 + 8) >> 8;
                if ( !v85 )
                  goto LABEL_119;
                v86 = 5LL * *(unsigned int *)(a3 + 280);
                v87 = *(unsigned int *)(a3 + 280);
                v88 = *(_DWORD **)(a3 + 272);
                if ( !(v86 * 4) )
                  goto LABEL_116;
                break;
              case 0xF:
                v171 = v28;
                v158 = v17;
                v83 = (_QWORD *)sub_2069970(a3, v51);
                v17 = v158;
                v28 = v171;
                v23 = v18;
                v76 = *v83 & 0x1FFFFFFFFFFFFFFFLL;
                goto LABEL_96;
              case 0x10:
                v193 = v28;
                v184 = v17;
                v197 = v18;
                v157 = *(_QWORD *)(v51 + 24);
                v81 = sub_2067E70(a3, v157, 1);
                v82 = sub_200E290(a3, v157);
                v17 = v184;
                v28 = v193;
                v23 = v197;
                v76 = (8
                     * *(_QWORD *)(v51 + 32)
                     * (((1LL << v81) + ((unsigned __int64)(v82 + 7) >> 3) - 1) >> v81 << v81)
                     + 7) >> 3;
                goto LABEL_96;
              case 0x11:
              case 0x12:
                v183 = v18;
                v79 = *(unsigned int *)(v51 + 32);
                v170 = v28;
                v156 = v17;
                v80 = sub_200E290(a3, *(_QWORD *)(v51 + 24));
                v17 = v156;
                v28 = v170;
                v23 = v183;
                v76 = (unsigned __int64)(v80 * v79 + 7) >> 3;
                goto LABEL_96;
              case 0x14:
                v169 = v17;
                v155 = v28;
                v78 = sub_20C5D00(v51);
                v28 = v155;
                v17 = v169;
                v51 = v78;
                continue;
              default:
                goto LABEL_176;
            }
            break;
          }
          do
          {
            while ( 1 )
            {
              v89 = v87 >> 1;
              v90 = &v88[5 * (v87 >> 1)];
              if ( v85 <= *v90 )
                break;
              v88 = v90 + 5;
              v87 = v87 - v89 - 1;
              if ( v87 <= 0 )
                goto LABEL_116;
            }
            v87 >>= 1;
          }
          while ( v89 );
LABEL_116:
          if ( v88 != &v84[v86] && v85 == *v88 )
            v84 = v88;
LABEL_119:
          v76 = ((unsigned __int64)(unsigned int)v84[1] + 7) >> 3;
LABEL_96:
          v42 = 8 * ((unsigned __int64)((1LL << v142) + v76 - 1) >> v142 << v142) * *(_QWORD *)(v20 + 32);
          goto LABEL_47;
        case 0x11:
        case 0x12:
          v52 = *(unsigned int *)(v19 + 32);
          v53 = *(_QWORD *)(v19 + 24);
          v20 = (unsigned int)v20;
          while ( 2 )
          {
            switch ( *(_BYTE *)(v53 + 8) )
            {
              case 0:
              case 1:
                v23 = v18;
                v28 = v20;
                v77 = 16;
                goto LABEL_101;
              case 2:
                v23 = v18;
                v28 = v20;
                v77 = 32;
                goto LABEL_101;
              case 3:
                v23 = v18;
                v28 = v20;
                v77 = 64;
                goto LABEL_101;
              case 4:
                v23 = v18;
                v28 = v20;
                v77 = 80;
                goto LABEL_101;
              case 5:
              case 6:
                v23 = v18;
                v28 = v20;
                v77 = 128;
                goto LABEL_101;
              case 8:
                v23 = v18;
                v28 = v20;
                v77 = *(unsigned int *)(*(_QWORD *)(a3 + 272) + 4LL);
                goto LABEL_101;
              case 0xA:
                v23 = v18;
                v28 = v20;
                v77 = 0x2000;
                goto LABEL_101;
              case 0xC:
                v23 = v18;
                v28 = v20;
                v77 = *(_DWORD *)(v53 + 8) >> 8;
                goto LABEL_101;
              case 0xE:
                v28 = v20;
                v23 = v18;
                v94 = *(_DWORD **)(a3 + 272);
                v95 = *(_DWORD *)(v53 + 8) >> 8;
                if ( !v95 )
                  goto LABEL_133;
                v96 = 5LL * *(unsigned int *)(a3 + 280);
                v97 = *(unsigned int *)(a3 + 280);
                v98 = *(_DWORD **)(a3 + 272);
                if ( !(v96 * 4) )
                  goto LABEL_130;
                break;
              case 0xF:
                v159 = v52;
                v135 = v17;
                v93 = (_QWORD *)sub_2069970(a3, v53);
                v17 = v135;
                v28 = v20;
                v52 = v159;
                v23 = v18;
                v77 = 8LL * *v93;
                goto LABEL_101;
              case 0x10:
                v172 = v52;
                v145 = v17;
                v185 = v18;
                v134 = *(_QWORD *)(v53 + 24);
                v91 = sub_2067E70(a3, v134, 1);
                v92 = sub_200E290(a3, v134);
                v17 = v145;
                v28 = v20;
                v52 = v172;
                v23 = v185;
                v77 = 8
                    * *(_QWORD *)(v53 + 32)
                    * (((1LL << v91) + ((unsigned __int64)(v92 + 7) >> 3) - 1) >> v91 << v91);
                goto LABEL_101;
              case 0x11:
              case 0x12:
                v173 = v18;
                v102 = *(unsigned int *)(v53 + 32);
                v160 = v52;
                v137 = v17;
                v103 = sub_200E290(a3, *(_QWORD *)(v53 + 24));
                v17 = v137;
                v28 = v20;
                v52 = v160;
                v77 = v103 * v102;
                v23 = v173;
                goto LABEL_101;
              case 0x14:
                v146 = v17;
                v136 = v52;
                v101 = sub_20C5D00(v53);
                v52 = v136;
                v17 = v146;
                v53 = v101;
                continue;
              default:
                goto LABEL_176;
            }
            break;
          }
          break;
        case 0x14:
          v127 = v17;
          v54 = sub_20C5D00(v19);
          v17 = v127;
          v19 = v54;
          continue;
        default:
LABEL_176:
          ++*(_DWORD *)(v20 + 8);
          BUG();
      }
      break;
    }
    do
    {
      while ( 1 )
      {
        v99 = v97 >> 1;
        v100 = &v98[5 * (v97 >> 1)];
        if ( v95 <= *v100 )
          break;
        v98 = v100 + 5;
        v97 = v97 - v99 - 1;
        if ( v97 <= 0 )
          goto LABEL_130;
      }
      v97 >>= 1;
    }
    while ( v99 );
LABEL_130:
    if ( v98 != &v94[v96] && v95 == *v98 )
      v94 = v98;
LABEL_133:
    v77 = (unsigned int)v94[1];
LABEL_101:
    v42 = v77 * v52;
LABEL_47:
    v29 = (unsigned __int64)(v123 * v42 + 7) >> 3;
LABEL_14:
    v30 = (unsigned __int64)(v23 + v29 - 1) >> v17 << v17;
    *(_QWORD *)a1 += v30;
    if ( v30 )
      break;
    result = v8 + 1;
    if ( v122 == v8 )
      goto LABEL_40;
LABEL_16:
    v8 = result;
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8 * result);
    if ( !result )
      goto LABEL_17;
  }
  *(_BYTE *)(a1 + 8) = v28;
  result = v8 + 1;
  if ( v122 != v8 )
    goto LABEL_16;
LABEL_40:
  if ( !*(_BYTE *)(a1 + 8) )
  {
LABEL_44:
    result = sub_2254830(a1);
    if ( (result & ~(-1LL << *(_BYTE *)(a1 + 16))) != 0 )
    {
      *(_BYTE *)(a1 + 17) |= 1u;
      v40 = sub_2254830(a1);
      v41 = *(_BYTE *)(a1 + 16);
      *(_BYTE *)(a1 + 8) = 0;
      result = v40 + (1LL << v41) - 1;
      *(_QWORD *)a1 = result & -(1LL << v41);
    }
  }
  return result;
}
