unsigned __int64 __fastcall sub_86A3E0(__int64 a1)
{
  unsigned int *v2; // rbp
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v9; // edi
  int v10; // r13d
  int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *i; // rdx
  __int64 v25; // rax
  __int64 v26; // r11
  unsigned int *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __m128 *v31; // rax
  __m128 *v32; // rax
  _QWORD *v33; // rax
  unsigned int *v34; // r13
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  unsigned __int8 *v37; // rsi
  unsigned __int64 v38; // r13
  int v39; // r14d
  unsigned int *v40; // r15
  _QWORD *v41; // rax
  unsigned int *v42; // r15
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  _QWORD *v53; // rdi
  _QWORD *v54; // rax
  __int64 *v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _BYTE *v58; // rax
  int v59; // edx
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  _BYTE *v66; // rax
  int v67; // edx
  unsigned __int64 v68; // rdx
  __int64 v69; // rax
  _BYTE *v70; // rax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rcx
  _BYTE *v74; // rax
  int v75; // edx
  __int64 v76; // rax
  int v77; // esi
  __int64 v78; // rcx
  _BYTE *v79; // rdx
  int v80; // ecx
  __int64 v81; // rcx
  _BYTE *v82; // rdx
  int v83; // ecx
  _BYTE *v84; // rax
  int v85; // esi
  __int64 v86; // rax
  unsigned __int16 v87; // dx
  __int64 v88; // rcx
  _BYTE *v89; // rax
  int v90; // ecx
  __int64 v91; // rcx
  _BYTE *v92; // rax
  int v93; // edx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  _BYTE *v97; // rax
  int v98; // ecx
  __int64 v99; // rcx
  _BYTE *v100; // rax
  int v101; // edx
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // r9
  __int64 v106; // r15
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 *j; // rdx
  __int64 v110; // rax
  __int64 v111; // r10
  unsigned int *v112; // r15
  unsigned int *v113; // rdi
  char *v114; // rax
  _QWORD *v115; // r12
  unsigned int *v116; // r13
  _QWORD *v117; // r11
  unsigned int *v118; // rdi
  int v119; // eax
  _QWORD *v120; // r11
  _QWORD *v121; // rax
  __int64 *k; // rcx
  __int64 v123; // rdx
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  __int64 *m; // rcx
  __int64 v127; // rdx
  unsigned int *v128; // r12
  _QWORD *v129; // rax
  unsigned int *v130; // r14
  _QWORD *v131; // r12
  _QWORD *v132; // r11
  _QWORD *v133; // rax
  _QWORD *v134; // r13
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  __int64 *n; // r11
  __int64 v138; // rdx
  unsigned int *v140; // r15
  unsigned int *v141; // rdi
  unsigned __int64 v142; // rdx
  __int64 v143; // rax
  _BYTE *v144; // rax
  int v145; // edx
  _BYTE *v146; // rax
  int v147; // edx
  __int64 v148; // rcx
  _BYTE *v149; // rax
  int v150; // edx
  _BYTE *v151; // rax
  int v152; // edx
  _BYTE *v153; // rax
  int v154; // edx
  _BYTE *v155; // rax
  int v156; // edx
  _QWORD *v157; // rax
  _QWORD *v158; // r11
  unsigned int *v159; // r12
  int v160; // eax
  unsigned int *v161; // r12
  _QWORD *v162; // r11
  unsigned int *v163; // rdi
  int v164; // eax
  unsigned __int8 *v165; // [rsp+0h] [rbp-C8h]
  int v166; // [rsp+8h] [rbp-C0h]
  __int64 v167; // [rsp+10h] [rbp-B8h]
  __int64 v168; // [rsp+10h] [rbp-B8h]
  __int64 v169; // [rsp+10h] [rbp-B8h]
  unsigned int *v170; // [rsp+10h] [rbp-B8h]
  _QWORD *v171; // [rsp+10h] [rbp-B8h]
  _QWORD *v172; // [rsp+10h] [rbp-B8h]
  _QWORD *v173; // [rsp+10h] [rbp-B8h]
  _QWORD *v174; // [rsp+10h] [rbp-B8h]
  _QWORD *v175; // [rsp+10h] [rbp-B8h]
  _QWORD *v176; // [rsp+10h] [rbp-B8h]
  __int64 *v177; // [rsp+10h] [rbp-B8h]
  _QWORD *v178; // [rsp+10h] [rbp-B8h]
  _QWORD *v179; // [rsp+10h] [rbp-B8h]
  _QWORD *v180; // [rsp+10h] [rbp-B8h]
  int v181; // [rsp+18h] [rbp-B0h]
  _QWORD *v182; // [rsp+18h] [rbp-B0h]
  _QWORD *v183; // [rsp+18h] [rbp-B0h]
  __int64 v184; // [rsp+18h] [rbp-B0h]
  int v185; // [rsp+2Ch] [rbp-9Ch]
  _QWORD *v186; // [rsp+30h] [rbp-98h]
  __int64 v187; // [rsp+38h] [rbp-90h]
  _QWORD *v188; // [rsp+40h] [rbp-88h]
  unsigned __int64 v189; // [rsp+48h] [rbp-80h]
  _QWORD *v190; // [rsp+50h] [rbp-78h]
  __int64 v191; // [rsp+58h] [rbp-70h]
  __int128 v192; // [rsp+60h] [rbp-68h] BYREF
  __int128 v193; // [rsp+70h] [rbp-58h]
  unsigned __int8 *v194; // [rsp+80h] [rbp-48h]
  unsigned __int64 v195; // [rsp+88h] [rbp-40h]

  v195 = __readfsqword(0x28u);
  v2 = *(unsigned int **)a1;
  v3 = *(_QWORD *)(a1 + 16) + *(_QWORD *)(*(_QWORD *)(a1 + 328) + 40LL);
  v4 = v3;
  v165 = (unsigned __int8 *)(v3 + 2LL * (*(_BYTE *)v3 != 0x89) + 3);
  do
    v4 += (unsigned __int16)__ROL2__(*(_WORD *)(v4 + 1), 8);
  while ( *(_BYTE *)v4 == 121 );
  memset(*(void **)(a1 + 144), 0, *(int *)(a1 + 140));
  v5 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(v5 + 56) )
  {
    v6 = *(_QWORD *)(v5 + 48);
    do
    {
      v7 = *(_DWORD *)(a1 + 76) + 16 * (unsigned __int16)__ROL2__(*(_WORD *)(v6 + 1), 8);
      v8 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v7 >> 6));
      v9 = 1 << ((v7 >> 3) & 7);
      if ( ((unsigned __int8)v9 & *v8) == 0 )
        *v8 |= v9;
      v6 += 3;
    }
    while ( *(_BYTE *)v6 == 0x93 );
  }
  v10 = 1;
  v11 = 0;
  v166 = 0;
  v12 = 1;
  v13 = 0x1D00E807403ALL;
  v14 = (unsigned __int64)v165;
  if ( (unsigned __int64)v165 >= v4 )
  {
    v181 = 0;
    goto LABEL_20;
  }
  do
  {
    while ( 1 )
    {
      v15 = *(_BYTE *)v14;
      if ( *(_BYTE *)v14 > 0xA7u )
      {
LABEL_72:
        v14 = sub_845640((unsigned __int8 *)v14);
        goto LABEL_73;
      }
      if ( v15 > 0x4Du )
      {
        switch ( v15 )
        {
          case 0x4Eu:
          case 0x4Fu:
            goto LABEL_80;
          case 0x55u:
          case 0x57u:
            v68 = v14 - *(_QWORD *)(a1 + 16);
            v69 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v68);
            if ( (_DWORD)v69 )
            {
              v70 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v69 >> 6));
              v71 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v68) >> 3) & 7);
              if ( ((unsigned __int8)v71 & *v70) == 0 )
              {
                v10 += 2;
                *v70 |= v71;
              }
            }
            goto LABEL_83;
          case 0x56u:
          case 0x58u:
          case 0x59u:
          case 0x5Au:
            v62 = v14 - *(_QWORD *)(a1 + 16);
            v63 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v62);
            if ( (_DWORD)v63 )
            {
              v153 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v63 >> 6));
              v154 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v62) >> 3) & 7);
              if ( ((unsigned __int8)v154 & *v153) == 0 )
              {
                ++v10;
                *v153 |= v154;
              }
            }
            goto LABEL_83;
          case 0x5Bu:
          case 0x5Cu:
            v72 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * (v14 - *(_QWORD *)(a1 + 16)));
            if ( (_DWORD)v72 )
              goto LABEL_97;
            goto LABEL_78;
          case 0x6Eu:
          case 0x6Fu:
            v64 = v14 - *(_QWORD *)(a1 + 16);
            v14 += 33LL;
            v65 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v64);
            if ( (_DWORD)v65 )
            {
              v66 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v65 >> 6));
              v67 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v64) >> 3) & 7);
              if ( ((unsigned __int8)v67 & *v66) == 0 )
              {
                *v66 |= v67;
                v10 += sub_843D00((char *)v14);
              }
            }
            goto LABEL_73;
          case 0x76u:
            if ( *(_DWORD *)(a1 + 180) )
              v11 |= 4u;
            if ( *(_DWORD *)(a1 + 104) )
            {
              v102 = *(int *)(a1 + 116);
              v11 |= 8u;
              if ( !(_DWORD)v102 )
                goto LABEL_129;
            }
            else
            {
              v102 = *(int *)(a1 + 116);
              if ( !(_DWORD)v102 )
                goto LABEL_129;
            }
            v148 = v102;
            v149 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v102 >> 6));
            v150 = 1 << ((v148 >> 3) & 7);
            if ( ((unsigned __int8)v150 & *v149) == 0 )
            {
              ++v10;
              *v149 |= v150;
            }
LABEL_129:
            if ( *(_BYTE *)(v14 + 3) == 0x93 )
              v11 |= 0x20u;
            v14 += 3LL;
            break;
          case 0x7Au:
            v94 = *(_QWORD *)(a1 + 16);
            v95 = *(_QWORD *)(a1 + 24);
            v96 = *(int *)(v95 + 4 * (v14 - v94));
            if ( (_DWORD)v96 )
            {
              v97 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v96 >> 6));
              v98 = 1 << (((__int64)*(int *)(v95 + 4 * (v14 - v94)) >> 3) & 7);
              if ( ((unsigned __int8)v98 & *v97) == 0 )
              {
                ++v10;
                *v97 |= v98;
                v95 = *(_QWORD *)(a1 + 24);
                v94 = *(_QWORD *)(a1 + 16);
              }
              v14 += *(int *)(v95 + 4 * (v14 + 1 - v94));
            }
            goto LABEL_78;
          case 0x80u:
          case 0x81u:
          case 0x82u:
          case 0x83u:
          case 0x84u:
          case 0x85u:
          case 0x87u:
          case 0x88u:
          case 0x8Au:
          case 0x8Eu:
          case 0x8Fu:
          case 0x92u:
            goto LABEL_76;
          case 0x86u:
            v72 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * (v14 - *(_QWORD *)(a1 + 16)));
LABEL_97:
            v73 = v72;
            v74 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v72 >> 6));
            v75 = 1 << ((v73 >> 3) & 7);
            if ( ((unsigned __int8)v75 & *v74) == 0 )
            {
              v10 += 2;
              *v74 |= v75;
            }
            goto LABEL_78;
          case 0x8Bu:
          case 0x90u:
            v87 = __ROL2__(*(_WORD *)(v14 + 3), 8);
            v88 = *(_DWORD *)(a1 + 76) + 16 * v87;
            v89 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v88 >> 6));
            v90 = 1 << ((v88 >> 3) & 7);
            if ( ((unsigned __int8)v90 & *v89) == 0 )
            {
              v10 += 2;
              *v89 |= v90;
            }
            if ( ((unsigned __int8)(1 << (v87 & 7)) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + ((int)v87 >> 3))) == 0 )
            {
              v91 = *(_DWORD *)(a1 + 72) + 8 * v87;
              v92 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v91 >> 6));
              v93 = 1 << ((v91 >> 3) & 7);
              if ( ((unsigned __int8)v93 & *v92) == 0 )
              {
                ++v10;
                *v92 |= v93;
              }
            }
            goto LABEL_105;
          case 0x8Cu:
          case 0x91u:
            v76 = *(_QWORD *)(a1 + 144);
            v77 = (unsigned __int16)__ROL2__(*(_WORD *)(v14 + 3), 8);
            v78 = *(_DWORD *)(a1 + 76) + 16 * (unsigned __int16)v77;
            v79 = (_BYTE *)(v76 + (v78 >> 6));
            v80 = 1 << ((v78 >> 3) & 7);
            if ( ((unsigned __int8)v80 & *v79) == 0 )
            {
              v10 += 2;
              *v79 |= v80;
              v76 = *(_QWORD *)(a1 + 144);
            }
            v81 = *(_DWORD *)(a1 + 72) + 8 * v77;
            v82 = (_BYTE *)(v76 + (v81 >> 6));
            v83 = 1 << ((v81 >> 3) & 7);
            if ( ((unsigned __int8)v83 & *v82) == 0 )
            {
              ++v10;
              *v82 |= v83;
              v76 = *(_QWORD *)(a1 + 144);
            }
            v84 = (_BYTE *)(((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * (v14 - *(_QWORD *)(a1 + 16))) >> 6) + v76);
            v85 = 1 << ((*(int *)(*(_QWORD *)(a1 + 24) + 4 * (v14 - *(_QWORD *)(a1 + 16))) >> 3) & 7);
            if ( ((unsigned __int8)v85 & *v84) == 0 )
            {
              ++v10;
              *v84 |= v85;
            }
LABEL_105:
            v86 = *(int *)(a1 + 116);
            if ( (_DWORD)v86 )
            {
              v146 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v86 >> 6));
              v147 = 1 << (((__int64)*(int *)(a1 + 116) >> 3) & 7);
              if ( ((unsigned __int8)v147 & *v146) == 0 )
              {
                ++v10;
                *v146 |= v147;
              }
            }
            v14 += 5LL;
            goto LABEL_73;
          case 0x8Du:
            if ( (unsigned __int8)(*(_BYTE *)(v14 + (unsigned __int16)__ROL2__(*(_WORD *)(v14 + 1), 8)) - 123) <= 1u )
            {
LABEL_76:
              v57 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * (v14 - *(_QWORD *)(a1 + 16)));
              v58 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v57 >> 6));
              v59 = 1 << ((v57 >> 3) & 7);
              if ( ((unsigned __int8)v59 & *v58) == 0 )
              {
                ++v10;
                *v58 |= v59;
              }
            }
            goto LABEL_78;
          case 0x93u:
            if ( (v11 & 0x20) != 0 )
            {
              v99 = *(_DWORD *)(a1 + 76) + 16 * (unsigned __int16)__ROL2__(*(_WORD *)(v14 + 1), 8);
              v100 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v99 >> 6));
              v101 = 1 << ((v99 >> 3) & 7);
              if ( ((unsigned __int8)v101 & *v100) == 0 )
              {
                v10 += 2;
                *v100 |= v101;
              }
              if ( *(_BYTE *)(v14 + 3) != 0x93 )
                v11 &= ~0x20u;
            }
LABEL_78:
            v14 += 3LL;
            goto LABEL_73;
          case 0x9Cu:
          case 0x9Eu:
          case 0xA2u:
          case 0xA4u:
            if ( *(_DWORD *)(a1 + 108) )
              v11 |= 0x18u;
            else
              v11 |= 8u;
            if ( v15 != 0x9C )
              v11 |= 1u;
            v14 += *(unsigned __int8 *)(v14 + 1) + 3LL;
            goto LABEL_73;
          case 0x9Du:
          case 0x9Fu:
          case 0xA3u:
            v11 |= 1u;
            ++v14;
            goto LABEL_73;
          case 0xA0u:
            v11 |= 1u;
            v14 += *(unsigned __int8 *)(v14 + 1) + 3LL;
            goto LABEL_73;
          case 0xA1u:
            v11 |= 0x11u;
            ++v14;
            goto LABEL_73;
          case 0xA6u:
          case 0xA7u:
            v11 |= 2u;
LABEL_83:
            ++v14;
            goto LABEL_73;
          default:
            goto LABEL_72;
        }
        goto LABEL_73;
      }
      if ( v15 == 3 )
      {
        v11 |= 4u;
        ++v14;
        goto LABEL_73;
      }
      v16 = v15 - 33;
      if ( v16 > 0x2Cu )
        goto LABEL_72;
      v17 = v12 << v16;
      if ( (v13 & (v12 << v16)) != 0 )
      {
        v142 = v14 - *(_QWORD *)(a1 + 16);
        v143 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v142);
        if ( (_DWORD)v143 )
        {
          v144 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v143 >> 6));
          v145 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v142) >> 3) & 7);
          if ( ((unsigned __int8)v145 & *v144) == 0 )
          {
            ++v10;
            *v144 |= v145;
          }
        }
        goto LABEL_17;
      }
      if ( (v17 & 0x2801400A005LL) == 0 )
        break;
      v18 = v14 - *(_QWORD *)(a1 + 16);
      v19 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v18);
      if ( (_DWORD)v19 )
      {
        v151 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v19 >> 6));
        v152 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v18) >> 3) & 7);
        if ( ((unsigned __int8)v152 & *v151) == 0 )
        {
          v10 += 2;
          *v151 |= v152;
        }
      }
LABEL_17:
      v14 += 2LL;
      if ( v14 >= v4 )
        goto LABEL_18;
    }
    if ( (v17 & 0x3001800C0LL) == 0 )
      goto LABEL_72;
LABEL_80:
    v60 = v14 - *(_QWORD *)(a1 + 16);
    v61 = *(int *)(*(_QWORD *)(a1 + 24) + 4 * v60);
    if ( (_DWORD)v61 )
    {
      v155 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v61 >> 6));
      v156 = 1 << (((__int64)*(int *)(*(_QWORD *)(a1 + 24) + 4 * v60) >> 3) & 7);
      if ( ((unsigned __int8)v156 & *v155) == 0 )
      {
        v10 += 2;
        *v155 |= v156;
      }
    }
    v14 += 4LL;
LABEL_73:
    ;
  }
  while ( v14 < v4 );
LABEL_18:
  v166 = v11;
  v181 = v11 & 0x10;
  v10 -= (v181 == 0) - 1;
  if ( (v11 & 1) != 0 )
    v10 = v10 - (((v11 & 4) == 0) - 1) - (((v11 & 8) == 0) - 1);
LABEL_20:
  *(_QWORD *)(a1 + 64) = 0;
  v20 = v3;
  v21 = 0;
  do
  {
    ++v21;
    v20 += (unsigned __int16)__ROL2__(*(_WORD *)(v20 + 1), 8);
  }
  while ( *(_BYTE *)v20 == 121 );
  v167 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(v167 + 8) = sub_845240((__int64)v2);
  v22 = *(_QWORD *)(a1 + 328);
  v23 = *(_QWORD *)(v22 + 8);
  for ( i = *(__int64 **)(v22 + 24); i; i = (__int64 *)i[1] )
  {
    v25 = *i;
    if ( *i && v23 )
    {
      *(_QWORD *)(v25 + 16) &= ~1uLL;
      *(_QWORD *)(v25 + 24) = v23;
    }
  }
  sub_847570(v2, 4, 0);
  v26 = *(_QWORD *)a1;
  if ( !**(_DWORD **)a1 )
  {
    v27 = *(unsigned int **)a1;
    *(_DWORD *)(v26 + 144) = 0;
    v168 = v26;
    sub_8490A0(v27, 0x2D2B2928u, 10, 0, 10, 0, 127, 1);
    v26 = v168;
  }
  v169 = v26;
  sub_8452F0(v26, 0);
  if ( !*(_DWORD *)v169 )
  {
    v28 = *(_QWORD *)(v169 + 80);
    v29 = *(_QWORD *)(v28 + 8);
    v30 = v29 + 16;
    if ( (unsigned __int64)(v29 + 16) <= 0xFF0 )
    {
      v32 = (__m128 *)(v28 + v29 + 16);
      *(_QWORD *)(v28 + 8) = v30;
      if ( v32 )
      {
LABEL_33:
        *v32 = _mm_loadh_ps((const double *)(a1 + 384));
        *(_QWORD *)(a1 + 384) = v32;
      }
    }
    else
    {
      v31 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v169 + 56))(
                        4096,
                        *(_QWORD *)(*(_QWORD *)(v169 + 56) + 16LL));
      if ( v31 )
      {
        v31->m128_u64[0] = *(_QWORD *)(v169 + 80);
        *(_QWORD *)(v169 + 80) = v31;
        v32 = v31 + 1;
        v32[-1].m128_u64[1] = 16;
        goto LABEL_33;
      }
      *(_DWORD *)v169 = 2;
    }
  }
  if ( v21 <= 1 )
  {
    v187 = 0;
    v185 = 1;
  }
  else
  {
    v187 = 8;
    v185 = 2;
  }
  v191 = 8 * (v185 + v10);
  v170 = *(unsigned int **)a1;
  sub_849F80(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, v191);
  v33 = sub_84A700(v170, 2, 12, 0, 11, 0);
  v34 = *(unsigned int **)a1;
  v171 = v33;
  if ( !**(_DWORD **)a1 )
  {
    v35 = sub_8451D0((__int64)v34, 24);
    if ( v35 )
    {
      v36 = v171;
      v172 = v35;
      *v35 = v36;
      v35[1] = sub_845240((__int64)v34);
      v172[2] = *(_QWORD *)(a1 + 312);
      *(_QWORD *)(a1 + 312) = v172;
    }
  }
  sub_847F60(v2, 32, 140, v187, 4, 0);
  sub_851DB0(a1, v165, v4, 0, v185, v166);
  sub_847F60(v2, 32, 142, *(int *)(a1 + 88), 12, 0);
  if ( v181 )
    sub_847F60(v2, 32, 142, *(int *)(a1 + 108), 127, 0);
  if ( v21 > 1 )
    sub_847F60(v2, 32, 140, 0, 2, 0);
  v37 = v165;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  v194 = v165;
  v192 = 0;
  v193 = 0;
  v186 = nullptr;
  v190 = nullptr;
  v188 = nullptr;
  v38 = v3 + (unsigned __int16)__ROL2__(*(_WORD *)(v3 + 1), 8);
  v39 = 0;
  v189 = v4;
  v173 = nullptr;
  while ( 2 )
  {
    v193 = 0;
    if ( v165 != v37 )
    {
      sub_847F60(v2, 32, 2, 0, 140, 0);
      v37 = v194;
    }
    sub_85C540(a1, v37, (unsigned __int8 *)v38, (__int64)&v192);
    if ( !*v2 )
    {
      v40 = *(unsigned int **)a1;
      if ( v21 > 1 || (v166 & 2) != 0 )
      {
        sub_849F80(v40, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
        v41 = sub_84A700(v40, 2, 12, 0, 11, 0);
        v42 = *(unsigned int **)a1;
        v182 = v41;
        if ( !**(_DWORD **)a1 )
          goto LABEL_49;
      }
      else
      {
        sub_849F80(v40, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
        v103 = sub_84A700(v40, 2, 12, 0, 11, 0);
        v42 = *(unsigned int **)a1;
        v182 = v103;
        if ( **(_DWORD **)a1 )
        {
          sub_847F60(v2, 32, 4, 0, 142, *(int *)(a1 + 88));
          goto LABEL_54;
        }
LABEL_49:
        v43 = sub_8451D0((__int64)v42, 24);
        if ( v43 )
        {
          v44 = v182;
          v183 = v43;
          *v43 = v44;
          v43[1] = sub_845240((__int64)v42);
          v183[2] = *(_QWORD *)(a1 + 312);
          *(_QWORD *)(a1 + 312) = v183;
        }
      }
      sub_847F60(v2, 32, 4, 0, 142, *(int *)(a1 + 88));
      if ( v21 <= 1 )
      {
        if ( (v166 & 2) != 0 )
          goto LABEL_136;
      }
      else
      {
        if ( v21 > 3 )
        {
          v186 = sub_847D30((__int64)v2, 8);
          goto LABEL_54;
        }
LABEL_136:
        sub_847F60(v2, 32, 140, 8, 127, v39);
      }
LABEL_54:
      v45 = sub_8452F0((__int64)v2, 36);
      if ( !*v2 )
      {
        v46 = *((_QWORD *)v2 + 10);
        v47 = *(_QWORD *)(v46 + 8);
        v48 = v47 + 16;
        if ( (unsigned __int64)(v47 + 16) <= 0xFF0 )
        {
          v50 = (_QWORD *)(v46 + v47 + 16);
          *(_QWORD *)(v46 + 8) = v48;
          if ( v50 )
          {
LABEL_58:
            v51 = v173;
            *v50 = v45;
            v173 = v50;
            v50[1] = v51;
          }
        }
        else
        {
          v49 = (_QWORD *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                            4096,
                            *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
          if ( v49 )
          {
            *v49 = *((_QWORD *)v2 + 10);
            *((_QWORD *)v2 + 10) = v49;
            v50 = v49 + 2;
            *(v50 - 1) = 16;
            goto LABEL_58;
          }
          *v2 = 2;
        }
      }
      if ( ++v39 != 1 )
      {
        if ( v21 > 3 )
        {
          v52 = sub_845240((__int64)v2);
          v53 = v186;
          if ( v186 && v52 )
            goto LABEL_63;
          goto LABEL_64;
        }
        v104 = sub_845240((__int64)v2);
        if ( v188 && v104 )
        {
          v188[2] &= ~1uLL;
          v188[3] = v104;
        }
        if ( v21 <= v39 )
          goto LABEL_64;
        v105 = 1;
        goto LABEL_142;
      }
      v106 = *(_QWORD *)(a1 + 328);
      *(_QWORD *)(v106 + 16) = sub_845240((__int64)v2);
      v107 = *(_QWORD *)(a1 + 328);
      v108 = *(_QWORD *)(v107 + 16);
      for ( j = *(__int64 **)(v107 + 32); j; j = (__int64 *)j[1] )
      {
        v110 = *j;
        if ( *j && v108 )
        {
          *(_QWORD *)(v110 + 16) &= ~1uLL;
          *(_QWORD *)(v110 + 24) = v108;
        }
      }
      sub_847570(v2, 1, 0);
      if ( (v166 & 2) != 0 )
      {
        v190 = sub_84A700(v2, 0, 140, 8, 127, -1);
        sub_847F60(v2, 32, 4, 0, 140, 0);
        sub_847F60(v2, 32, 132, v187, 1, 0);
        sub_851DB0(a1, v165, v189, 4, v185, v166);
        v111 = 16;
        if ( v21 > 1 )
        {
LABEL_150:
          sub_847F60(v2, 32, 1, 0, 140, 8);
          v112 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v113 = *(unsigned int **)a1;
            v112[36] = 0;
            if ( (unsigned int)sub_848C40(v113, 12, 0, 12, 0, 127, 16) == 4 )
              sub_8498A0(v112, 0x5030100u, 12, 0, 12, 0, 127, 16);
          }
          if ( v21 > 3 )
          {
            if ( !*v2 )
            {
              v2[36] = 1;
              v114 = sub_844340((__int64)v2, 1u, 0, 0, 1, 0);
              if ( v114 )
              {
                v114[1] |= 0x20u;
                *v114 = -1;
              }
            }
            v52 = sub_845240((__int64)v2);
            if ( v52 )
            {
              v53 = v186;
              if ( v186 )
              {
LABEL_63:
                v53[2] &= ~1uLL;
                v53[3] = v52;
              }
            }
LABEL_64:
            sub_865160(a1, v193);
            if ( *v2 )
              return v195 - __readfsqword(0x28u);
            v54 = sub_845240((__int64)v2);
            v55 = *((__int64 **)&v193 + 1);
            if ( *((_QWORD *)&v193 + 1) )
            {
              do
              {
                v56 = *v55;
                if ( *v55 && v54 )
                {
                  *(_QWORD *)(v56 + 16) &= ~1uLL;
                  *(_QWORD *)(v56 + 24) = v54;
                }
                v55 = (__int64 *)v55[1];
              }
              while ( v55 );
            }
            if ( *(_BYTE *)v38 != 121 )
            {
              v115 = sub_845240((__int64)v2);
              sub_851DB0(a1, v165, v189, 1, v185, v166);
              sub_847F60(v2, 32, 4, 0, 140, v187);
              v116 = *(unsigned int **)a1;
              v117 = v173;
              if ( !**(_DWORD **)a1 )
              {
                v118 = *(unsigned int **)a1;
                v116[36] = 0;
                v119 = sub_848C40(v118, 12, 0, 12, 0, 127, v191);
                v117 = v173;
                if ( v119 == 4 )
                {
                  sub_8498A0(v116, 0x5030100u, 12, 0, 12, 0, 127, v191);
                  v117 = v173;
                }
              }
              v174 = v117;
              sub_847F60(v2, 32, 1, 0, 127, 0);
              sub_8455A0(v2, 4);
              v120 = v174;
              if ( *(_QWORD *)(a1 + 344) )
              {
                v121 = sub_845240((__int64)v2);
                for ( k = *(__int64 **)(a1 + 344); k; k = (__int64 *)k[1] )
                {
                  v123 = *k;
                  if ( *k && v121 )
                  {
                    *(_QWORD *)(v123 + 16) &= ~1uLL;
                    *(_QWORD *)(v123 + 24) = v121;
                  }
                }
                sub_847F60(v2, 32, 12, 0, 142, *(int *)(a1 + 88));
                sub_851DB0(a1, v165, v189, 2, v185, v166);
                v124 = sub_8452F0((__int64)v2, 36);
                v120 = v174;
                if ( v124 && v115 )
                {
                  v124[2] &= ~1uLL;
                  v124[3] = v115;
                }
              }
              if ( (v166 & 2) != 0 )
              {
                v178 = v120;
                v157 = sub_845240((__int64)v2);
                v158 = v178;
                if ( v190 && v157 )
                {
                  v190[2] &= ~1uLL;
                  v190[3] = v157;
                }
                v159 = *(unsigned int **)a1;
                if ( !**(_DWORD **)a1 )
                {
                  v159[36] = 0;
                  v160 = sub_848C40(v159, 12, 0, 12, 0, 127, 16);
                  v158 = v178;
                  if ( v160 == 4 )
                  {
                    sub_8498A0(v159, 0x5030100u, 12, 0, 12, 0, 127, 16);
                    v158 = v178;
                  }
                }
                v179 = v158;
                sub_847F60(v2, 32, 140, v187, 1, 0);
                sub_851DB0(a1, v165, v189, 3, v185, v166);
                sub_847F60(v2, 32, 4, 0, 140, v187);
                v161 = *(unsigned int **)a1;
                v162 = v179;
                if ( !**(_DWORD **)a1 )
                {
                  v163 = *(unsigned int **)a1;
                  v161[36] = 0;
                  v164 = sub_848C40(v163, 12, 0, 12, 0, 127, v191);
                  v162 = v179;
                  if ( v164 == 4 )
                  {
                    sub_8498A0(v161, 0x5030100u, 12, 0, 12, 0, 127, v191);
                    v162 = v179;
                  }
                }
                v180 = v162;
                sub_847F60(v2, 32, 1, 0, 127, 0);
                sub_8455A0(v2, 4);
                v120 = v180;
              }
              if ( *(_QWORD *)(a1 + 376) )
              {
                v175 = v120;
                v125 = sub_845240((__int64)v2);
                for ( m = *(__int64 **)(a1 + 376); m; m = (__int64 *)m[1] )
                {
                  v127 = *m;
                  if ( *m && v125 )
                  {
                    *(_QWORD *)(v127 + 16) &= ~1uLL;
                    *(_QWORD *)(v127 + 24) = v125;
                  }
                }
                sub_847F60(v2, 32, 12, 0, 142, *(int *)(a1 + 88));
                sub_847F60(v2, 32, 4, 0, 12, 0);
                v128 = *(unsigned int **)a1;
                sub_849F80(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
                v129 = sub_84A700(v128, 2, 12, 0, 11, 0);
                v130 = *(unsigned int **)a1;
                v131 = v129;
                v132 = v175;
                if ( !**(_DWORD **)a1 )
                {
                  v133 = sub_8451D0(*(_QWORD *)a1, 24);
                  v132 = v175;
                  v134 = v133;
                  if ( v133 )
                  {
                    *v133 = v131;
                    v135 = sub_845240((__int64)v130);
                    v132 = v175;
                    v134[1] = v135;
                    v134[2] = *(_QWORD *)(a1 + 312);
                    *(_QWORD *)(a1 + 312) = v134;
                  }
                }
                v176 = v132;
                sub_847F60(v2, 32, 140, 8, 127, -1);
                v120 = v176;
              }
              v177 = v120;
              v136 = sub_845240((__int64)v2);
              for ( n = v177; n; n = (__int64 *)n[1] )
              {
                v138 = *n;
                if ( *n && v136 )
                {
                  *(_QWORD *)(v138 + 16) &= ~1uLL;
                  *(_QWORD *)(v138 + 24) = v136;
                }
              }
              sub_847F60(v2, 32, 140, 0, 4, 0);
              sub_851DB0(a1, v165, v189, 4, v185, v166);
              sub_847F60(v2, 32, 4, 0, 132, v187);
              sub_847F60(v2, 32, 1, 0, 127, 1);
              sub_8455A0(v2, 4);
              return v195 - __readfsqword(0x28u);
            }
            v37 = (unsigned __int8 *)(v38 + 3);
            v194 = (unsigned __int8 *)(v38 + 3);
            v38 += (unsigned __int16)__ROL2__(*(_WORD *)(v38 + 1), 8);
            continue;
          }
          v105 = 0;
LABEL_142:
          v188 = sub_84A700(v2, 1, 1, 0, 127, v105);
          goto LABEL_64;
        }
      }
      else
      {
        sub_847F60(v2, 32, 4, 0, 140, 0);
        sub_847F60(v2, 32, 132, v187, 1, 0);
        sub_851DB0(a1, v165, v189, 4, v185, v166);
        v111 = 8;
        if ( v21 > 1 )
          goto LABEL_150;
      }
      v140 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v141 = *(unsigned int **)a1;
        v140[36] = 0;
        v184 = v111;
        if ( (unsigned int)sub_848C40(v141, 12, 0, 12, 0, 127, v111) == 4 )
          sub_8498A0(v140, 0x5030100u, 12, 0, 12, 0, 127, v184);
      }
      goto LABEL_64;
    }
    return v195 - __readfsqword(0x28u);
  }
}

