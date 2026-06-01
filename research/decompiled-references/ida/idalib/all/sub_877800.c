__int64 __fastcall sub_877800(__int64 a1)
{
  _DWORD *v1; // r14
  char *v2; // rax
  int v3; // r15d
  unsigned __int8 *v4; // r12
  int v5; // edi
  unsigned __int8 *v6; // rbp
  char *v7; // r8
  int v8; // eax
  int v9; // esi
  char *v10; // rcx
  unsigned __int8 v11; // cl
  char *v13; // rdx
  __int64 v14; // rsi
  _BYTE *v15; // r13
  int v16; // edx
  int v17; // r10d
  __int64 v18; // rcx
  unsigned __int8 v19; // bl
  unsigned __int8 *v20; // r11
  int v21; // r15d
  unsigned int v22; // r9d
  unsigned __int8 v23; // r10
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned __int8 v28; // cl
  __int64 v29; // rdx
  _BOOL4 v30; // edx
  __int16 v31; // di
  __int16 v32; // di
  __int16 v33; // di
  __int16 v34; // di
  unsigned int v35; // esi
  unsigned __int8 *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char *v39; // r10
  unsigned __int8 v40; // r13
  unsigned __int8 *v41; // rax
  unsigned int v42; // r11d
  int v43; // r15d
  unsigned int v44; // r8d
  unsigned __int8 v45; // si
  unsigned int v46; // edi
  char i; // bl
  unsigned __int8 v48; // r12
  _BYTE *v49; // rcx
  char *v50; // r11
  __int64 v51; // r14
  char *v52; // rdx
  int v53; // r12d
  int v54; // eax
  int v55; // ebx
  char *v56; // rcx
  __int64 v57; // r8
  char v58; // si
  int v59; // edi
  char v60; // r9
  __int64 v61; // rsi
  unsigned int v62; // r10d
  unsigned __int8 *v63; // rdi
  int v64; // ebx
  unsigned __int8 v65; // r12
  __int64 v66; // rdx
  unsigned __int8 v67; // di
  int v68; // ecx
  unsigned int v69; // ecx
  char v70; // r15
  char v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdx
  char v74; // si
  int v75; // eax
  _BOOL4 v76; // edi
  int v77; // r8d
  int v78; // ecx
  signed int v79; // r12d
  int v80; // ebp
  signed int v81; // esi
  __int64 v82; // r13
  unsigned __int8 *v83; // rax
  __int64 v84; // r12
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rcx
  __m128 *v90; // rax
  __m128 *v91; // rax
  _QWORD *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rcx
  __m128 *v96; // rax
  __m128 *v97; // rax
  _QWORD *v98; // rax
  unsigned __int8 v99; // di
  int v100; // edx
  _DWORD *v101; // r13
  __int64 v102; // rax
  int v103; // edx
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  __m128i v106; // xmm0
  __int64 v107; // r8
  unsigned __int8 *v108; // rcx
  unsigned __int64 v109; // rdi
  _BYTE *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  __m128 *v114; // rax
  __m128 *v115; // rax
  char *v116; // rax
  __int64 v117; // r13
  __int64 v118; // r9
  unsigned __int8 v119; // r12
  _QWORD *v120; // r12
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  int v124; // [rsp+0h] [rbp-318h]
  unsigned int v125; // [rsp+0h] [rbp-318h]
  unsigned __int8 *v126; // [rsp+0h] [rbp-318h]
  unsigned __int8 *v127; // [rsp+8h] [rbp-310h]
  char *v128; // [rsp+8h] [rbp-310h]
  char *v129; // [rsp+10h] [rbp-308h]
  int v130; // [rsp+10h] [rbp-308h]
  unsigned __int8 *v131; // [rsp+18h] [rbp-300h]
  int v132; // [rsp+18h] [rbp-300h]
  int v133; // [rsp+20h] [rbp-2F8h]
  __int64 v134; // [rsp+20h] [rbp-2F8h]
  int v135; // [rsp+28h] [rbp-2F0h]
  __int64 v136; // [rsp+28h] [rbp-2F0h]
  _DWORD *v138; // [rsp+38h] [rbp-2E0h]
  int v139; // [rsp+38h] [rbp-2E0h]
  char *v140; // [rsp+48h] [rbp-2D0h]
  char v141; // [rsp+50h] [rbp-2C8h] BYREF
  _BYTE v142[83]; // [rsp+51h] [rbp-2C7h] BYREF
  _BYTE v143[564]; // [rsp+A4h] [rbp-274h] BYREF
  unsigned __int64 v144; // [rsp+2D8h] [rbp-40h]

  v144 = __readfsqword(0x28u);
  v1 = *(_DWORD **)a1;
  v2 = &v141;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 28;
    *(_WORD *)(v2 - 21) = 0;
    *((_WORD *)v2 - 7) = 0;
    *(_WORD *)(v2 - 7) = 0;
  }
  while ( v143 != v2 );
  v138 = v1;
  v3 = 0;
  v4 = v143;
  v5 = 1;
  v6 = (unsigned __int8 *)&v141;
  v140 = &v141;
  v7 = *(char **)(a1 + 16);
  v8 = 9999;
  while ( v6 < v4 )
  {
    while ( 1 )
    {
      v11 = *v7;
      if ( (unsigned __int8)*v7 <= 0x1Cu )
        break;
      switch ( v11 )
      {
        case 0x1Du:
          LOBYTE(v18) = v7[1];
          v15 = v7 + 1;
          v16 = 0;
          v7 += 2;
          v19 = 0;
          v17 = 0;
          goto LABEL_30;
        case 0x1Eu:
          v15 = v7 + 1;
          v16 = 0;
          v7 += 2;
          goto LABEL_27;
        case 0x1Fu:
        case 0x20u:
          ++v7;
          goto LABEL_53;
        case 0x23u:
        case 0x24u:
        case 0x2Bu:
          LOBYTE(v18) = v7[1];
          v15 = v7 + 1;
          v16 = 1;
          v19 = 0;
          v7 += 2;
          v17 = 0;
          goto LABEL_30;
        case 0x25u:
        case 0x26u:
        case 0x2Cu:
          v17 = 0;
          goto LABEL_42;
        case 0x29u:
          v33 = *(_WORD *)(v7 + 1);
          LOBYTE(v18) = v7[3];
          v15 = v7 + 3;
          v16 = 0;
          v7 += 4;
          v19 = 0;
          v17 = 0;
          v5 = (unsigned __int16)__ROL2__(v33, 8);
          goto LABEL_30;
        case 0x30u:
        case 0x31u:
        case 0x38u:
          v15 = v7 + 1;
          v16 = 1;
          v7 += 2;
          goto LABEL_27;
        case 0x32u:
        case 0x33u:
        case 0x39u:
          v17 = 1;
LABEL_42:
          if ( v3 > 31 )
            goto LABEL_50;
          v26 = v3;
          v15 = v7 + 1;
          ++v3;
          *(_QWORD *)&v143[8 * v26 + 12] = v7 + 2;
          *(_QWORD *)&v143[8 * v26 + 268] = v6;
          v143[v26 + 524] = 0;
          v16 = v17;
          if ( v17 )
          {
            v7 += 2;
            v16 = 0;
LABEL_27:
            v17 = 1;
            v18 = (unsigned __int8)*v15;
            v19 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v18);
            if ( (_BYTE)v18 == v19 )
            {
              v19 = 0;
              v17 = 0;
            }
          }
          else
          {
            LOBYTE(v18) = v7[1];
            v19 = 0;
            v7 += 2;
          }
LABEL_30:
          v20 = v6 + 2;
          v124 = v3;
          v21 = v17;
          while ( 2 )
          {
            v22 = *v6;
            v23 = *v6;
            if ( v22 == 255 )
              goto LABEL_38;
            if ( !*v6 )
            {
              v6[2] = v18;
              *(_WORD *)v6 = 257;
              if ( !v21 )
                goto LABEL_38;
LABEL_66:
              v35 = *v6;
              v23 = *v6;
              if ( v35 == 255 )
                goto LABEL_38;
              v24 = v6 + 3;
              if ( !*v6 )
              {
                v6[2] = v19;
                *(_WORD *)v6 = 257;
                goto LABEL_38;
              }
              goto LABEL_71;
            }
            v24 = v6 + 3;
            v25 = v20;
            while ( *v25 != (_BYTE)v18 )
            {
              if ( &v6[v22 + 2] == ++v25 )
              {
                if ( v22 > 4 )
                  goto LABEL_83;
                v6[*v6 + 2] = v18;
                *v6 = v23 + 1;
                ++v6[1];
                if ( !v21 )
                  goto LABEL_38;
                goto LABEL_66;
              }
            }
            if ( !v21 )
              goto LABEL_38;
            v35 = v23;
LABEL_71:
            v36 = v20;
            do
            {
              if ( v19 == *v36 )
                goto LABEL_38;
              ++v36;
            }
            while ( &v24[v35 - 1] != v36 );
            if ( v35 <= 4 )
            {
              v6[v35 + 2] = v19;
              *v6 = v23 + 1;
              ++v6[1];
              goto LABEL_38;
            }
LABEL_83:
            *v6 = -1;
LABEL_38:
            v6 += 7;
            v20 += 7;
            if ( --v5 && v6 < v4 )
            {
              LOBYTE(v18) = *v15;
              continue;
            }
            break;
          }
          v3 = v124;
          if ( !v16 )
            goto LABEL_56;
          v5 = v16;
          goto LABEL_15;
        case 0x36u:
          v34 = *(_WORD *)(v7 + 1);
          v15 = v7 + 3;
          v16 = 0;
          v7 += 4;
          v5 = (unsigned __int16)__ROL2__(v34, 8);
          goto LABEL_27;
        case 0x43u:
        case 0x50u:
          v31 = *(_WORD *)(v7 + 1);
          v7 += 4;
          v5 = (unsigned __int16)__ROL2__(v31, 8);
          goto LABEL_55;
        case 0x5Du:
          v32 = *(_WORD *)(v7 + 1);
          v7 += 3;
          v5 = (unsigned __int16)__ROL2__(v32, 8);
          goto LABEL_16;
        case 0x6Eu:
        case 0x6Fu:
          v27 = (unsigned __int64)(v7 + 33);
          v28 = v7[33] - 98;
          if ( v28 > 0xBu )
            goto LABEL_88;
          v29 = 1LL << v28;
          if ( ((1LL << v28) & 0x103) != 0 )
          {
            v30 = 1;
            if ( v3 <= 31 )
            {
LABEL_87:
              v38 = v3;
              v39 = v7 + 34;
              ++v3;
              *(_QWORD *)&v143[8 * v38 + 12] = v7 + 34;
              *(_QWORD *)&v143[8 * v38 + 268] = v6;
              v143[v38 + 524] = 0;
              goto LABEL_89;
            }
            goto LABEL_50;
          }
          if ( (v29 & 0x8C0) != 0 )
          {
            v5 = (unsigned __int16)__ROL2__(*((_WORD *)v7 + 17), 8);
            if ( !(_WORD)v5 )
            {
              v4 = v6;
              v7 += 33;
              goto LABEL_16;
            }
            v39 = v7 + 38;
            v30 = (unsigned __int16)__ROL2__(*((_WORD *)v7 + 18), 8) != v5;
LABEL_89:
            v133 = v3;
            v135 = v8;
            v131 = (unsigned __int8 *)(v7 + 1);
LABEL_93:
            if ( v7[32] < 0 )
            {
              --v5;
              *v6 = -1;
              v6 += 7;
              if ( v5 > 0 )
                goto LABEL_92;
LABEL_95:
              v3 = v133;
              v8 = v135;
              if ( v30 )
              {
                v5 = v30;
                v4 = v6;
                v7 = v39;
              }
              else
              {
                v7 = v39;
                v5 = 1;
              }
              goto LABEL_16;
            }
            v40 = *v6;
            if ( *v6 == 0xFF )
              goto LABEL_91;
            v127 = v4;
            v41 = v131;
            v42 = 0;
            v43 = v5;
            v129 = v7;
            while ( 1 )
            {
              v44 = *v41++;
              if ( !(_BYTE)v44 )
              {
                v42 += 8;
                goto LABEL_99;
              }
              v45 = v44;
              v46 = v42;
              while ( 1 )
              {
LABEL_102:
                for ( i = v45 & 1; (v45 & 1) == 0; i = v45 & 1 )
                {
                  v45 >>= 1;
                  ++v46;
                }
                v48 = v46;
                v125 = v40;
                if ( v40 == 255 )
                {
LABEL_118:
                  i = -1;
                  goto LABEL_116;
                }
                if ( v40 )
                  goto LABEL_106;
                v6[2] = v46++;
                v45 >>= 1;
                *(_WORD *)v6 = 257;
                if ( !v45 )
                  break;
                v40 = v45 & 1;
                if ( (v45 & 1) != 0 )
                {
                  v125 = 1;
                  v48 = v46;
LABEL_106:
                  v49 = v6 + 2;
                  while ( *v49 != v48 )
                  {
                    if ( &v6[v125 + 2] == ++v49 )
                    {
                      if ( v125 <= 4 )
                      {
                        ++v40;
                        v6[v125 + 2] = v48;
                        ++v6[1];
                        *v6 = v40;
                        goto LABEL_111;
                      }
                      *v6 = -1;
                      if ( v45 >> 1 )
                      {
                        if ( (v45 & 2) == 0 )
                        {
                          v45 >>= 2;
                          v46 += 2;
                          v40 = -1;
                          goto LABEL_102;
                        }
                        v46 += 2;
                        v45 >>= 2;
                        if ( v45 )
                          goto LABEL_118;
                      }
                      v40 = -1;
                      goto LABEL_112;
                    }
                  }
                  goto LABEL_111;
                }
LABEL_116:
                v40 = i;
LABEL_111:
                ++v46;
                v45 >>= 1;
                if ( !v45 )
                  goto LABEL_112;
              }
              v40 = i;
LABEL_112:
              _BitScanReverse(&v44, v44);
              v42 = (v42 + 39 - (v44 ^ 0x1F)) & 0xFFFFFFF8;
              if ( v40 == 0xFF )
              {
LABEL_113:
                v4 = v127;
                v7 = v129;
                v5 = v43;
LABEL_91:
                --v5;
                v6 += 7;
                if ( v5 <= 0 )
                  goto LABEL_95;
LABEL_92:
                if ( v6 >= v4 )
                  goto LABEL_95;
                goto LABEL_93;
              }
LABEL_99:
              if ( (unsigned __int64)v41 >= v27 )
                goto LABEL_113;
            }
          }
          if ( (v29 & 0x430) == 0 )
          {
LABEL_88:
            v39 = v7 + 33;
            v30 = 1;
            goto LABEL_89;
          }
          v30 = 0;
          if ( v3 <= 31 )
            goto LABEL_87;
LABEL_50:
          if ( !--v8 )
            return 0;
          v4 = v6;
LABEL_6:
          v9 = v3 - 1;
          v6 = *(unsigned __int8 **)&v143[8 * v3 + 260];
          v7 = *(char **)&v143[8 * v3 + 4];
          if ( v6 >= v4 )
          {
            --v3;
            goto LABEL_16;
          }
          if ( v143[v9 + 524] )
          {
            v10 = &v7[(unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8)];
            if ( *v10 != 121 )
            {
              v10 = *(char **)&v143[8 * v9 + 12];
              --v3;
            }
            *(_QWORD *)&v143[8 * v9 + 12] = v10;
            v7 += 3;
          }
          else
          {
            --v3;
          }
          break;
        case 0x79u:
          v7 += (unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8);
          goto LABEL_16;
        case 0x7Au:
          goto LABEL_19;
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x86u:
          do
            v7 += (unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8);
          while ( *v7 == 121 );
LABEL_19:
          v7 += 3;
          goto LABEL_16;
        case 0x87u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
        case 0x8Cu:
          v13 = &v7[(unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8)];
          if ( *v13 != 121 )
            goto LABEL_23;
          if ( v3 > 31 )
            goto LABEL_50;
          v14 = v3++;
          *(_QWORD *)&v143[8 * v14 + 12] = v13;
          *(_QWORD *)&v143[8 * v14 + 268] = v6;
          v143[v14 + 524] = 1;
LABEL_23:
          if ( (unsigned __int8)(v11 + 117) < 2u )
            v7 += 2;
          v7 += 3;
          goto LABEL_16;
        case 0xABu:
        case 0xACu:
          goto LABEL_57;
        default:
          goto LABEL_15;
      }
    }
    if ( !v11 )
      goto LABEL_15;
    v37 = 1LL << v11;
    if ( ((1LL << v11) & 0x1F80003E) != 0 )
    {
LABEL_57:
      ++v7;
      goto LABEL_16;
    }
    if ( (v37 & 0x3540) == 0 && (v37 & 0xA80) == 0 )
    {
LABEL_15:
      v4 = v6;
      goto LABEL_16;
    }
LABEL_53:
    ++v7;
    do
    {
LABEL_55:
      --v5;
      *v6 = -1;
      v6 += 7;
    }
    while ( v5 > 0 && v6 < v4 );
LABEL_56:
    v5 = 1;
LABEL_16:
    if ( !--v8 )
      return 0;
  }
  if ( v3 )
    goto LABEL_6;
  v50 = v140;
  v51 = (__int64)v138;
  v52 = &v141;
  v53 = (_DWORD)v4 - (_DWORD)v140;
  v54 = -1227133513 * v53;
  v55 = -1227133513 * v53;
  if ( -1227133513 * v53 <= 0 )
    return 0;
  v56 = v140;
  v134 = v54;
  v57 = (__int64)&v140[8 * v54 - v54];
  do
  {
    while ( 1 )
    {
      v58 = *v56;
      if ( *v56 == 1 )
      {
        v74 = 5;
        if ( v56[1] == 1 )
          v74 = 7;
        v56[1] = v74;
        v56[3] = v56[2];
        goto LABEL_130;
      }
      if ( v58 == 2 )
        break;
      if ( v58 )
        v56[1] = v58 != -1;
      else
        *(_WORD *)v56 = 255;
LABEL_130:
      v56 += 7;
      if ( v56 == (char *)v57 )
        goto LABEL_135;
    }
    v59 = (unsigned __int8)(v56[3] ^ v56[2]);
    v60 = v56[1];
    if ( (v59 & (v59 - 1)) != 0 )
    {
      if ( v60 == 2 )
        v58 = 3;
      v56[1] = v58;
      goto LABEL_130;
    }
    v56 += 7;
    *(v56 - 6) = 2 * (v60 == 2) + 4;
  }
  while ( v56 != (char *)v57 );
LABEL_135:
  LODWORD(v61) = v54 - 1;
  if ( v54 != 1 )
  {
    v61 = (int)v61;
    v62 = 0;
    v136 = (__int64)v138;
    v139 = -1227133513 * v53;
    v63 = (unsigned __int8 *)&v50[8 * (int)v61 - (int)v61];
    v130 = 0;
    v132 = 0;
    do
    {
      while ( 1 )
      {
        v64 = v63[1];
        if ( (unsigned __int8)v64 > 2u )
          break;
        --v61;
        v63 -= 7;
        if ( !(_DWORD)v61 )
          goto LABEL_149;
      }
      v65 = v63[2];
      v66 = 0;
      v126 = v63;
      v67 = v63[3];
      do
      {
        v68 = (unsigned __int8)v142[7 * v66];
        if ( (unsigned __int8)v68 > 2u )
        {
          v69 = v64 + v68;
          if ( v69 >= v62 )
          {
            v70 = v142[7 * v66 + 1];
            v71 = v142[7 * v66 + 2];
            if ( v65 != v70 && v65 != v71 && v67 != v70 && v67 != v71 )
            {
              v62 = v69;
              v132 = v66;
              v130 = v61;
            }
          }
        }
        ++v66;
      }
      while ( v61 != v66 );
      --v61;
      v63 = v126 - 7;
    }
    while ( (_DWORD)v61 );
LABEL_149:
    v51 = v136;
    v55 = v139;
    v3 = 0;
    v52 = &v141;
    if ( v62 )
    {
      v72 = (__int64)&v50[8 * v132 - v132];
      v73 = (__int64)&v50[8 * v130 - v130];
      sub_8735E0(a1, v130, *(_BYTE *)(v73 + 2), *(_BYTE *)(v73 + 3), v132, *(_BYTE *)(v72 + 2), *(_BYTE *)(v72 + 3));
      return 1;
    }
  }
  v75 = v54 + 1;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 3;
  v80 = -1;
LABEL_165:
  while ( 2 )
  {
    if ( !v76 )
      goto LABEL_197;
    while ( 1 )
    {
      v81 = v78 - v77;
      if ( v78 - v77 > v79 && *(v52 - 7) != -1 )
        break;
      if ( v55 > v78 )
      {
        v76 = *v52 != -1;
        ++v78;
        v52 += 7;
        if ( v78 == v75 )
          goto LABEL_169;
        goto LABEL_165;
      }
      do
      {
        ++v78;
        v52 += 7;
        if ( v78 == v75 )
        {
LABEL_169:
          v82 = 0;
          if ( v80 >= 0 )
            goto LABEL_214;
          goto LABEL_170;
        }
LABEL_197:
        ;
      }
      while ( v55 <= v78 || *v52 == -1 );
      v52 += 7;
      if ( v78 + 1 == v75 )
        goto LABEL_169;
      v77 = v78++;
    }
    v80 = v78 - 1;
    if ( v55 > v78 )
    {
      v79 = v78 - v77;
      v76 = *v52 != -1;
      ++v78;
      v52 += 7;
      if ( v78 == v75 )
        goto LABEL_169;
      continue;
    }
    break;
  }
  ++v78;
  v52 += 7;
  v79 = v81;
  if ( v75 != v78 )
    goto LABEL_197;
LABEL_214:
  v101 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 )
    return 1;
  v128 = v50;
  v102 = (**((__int64 (__fastcall ***)(__int64, _QWORD))v101 + 7))(264, *(_QWORD *)(*((_QWORD *)v101 + 7) + 16LL));
  v103 = 0;
  if ( !v102 )
  {
    if ( !*v101 )
      *v101 = 2;
    return 1;
  }
  v104 = _mm_cvtsi32_si128(v79);
  v82 = v102 + 8;
  v105 = _mm_unpacklo_epi8(v104, v104);
  v106 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v105, v105), 0);
  *(_QWORD *)v102 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v102;
  *(__m128i *)(v102 + 8) = v106;
  *(__m128i *)(v102 + 24) = v106;
  *(__m128i *)(v102 + 40) = v106;
  *(__m128i *)(v102 + 56) = v106;
  *(__m128i *)(v102 + 72) = v106;
  *(__m128i *)(v102 + 88) = v106;
  *(__m128i *)(v102 + 104) = v106;
  *(__m128i *)(v102 + 120) = v106;
  *(__m128i *)(v102 + 136) = v106;
  *(__m128i *)(v102 + 152) = v106;
  *(__m128i *)(v102 + 168) = v106;
  *(__m128i *)(v102 + 184) = v106;
  *(__m128i *)(v102 + 200) = v106;
  *(__m128i *)(v102 + 216) = v106;
  *(__m128i *)(v102 + 232) = v106;
  *(__m128i *)(v102 + 248) = v106;
  if ( v79 > 0 )
  {
    v107 = (__int64)&v128[7 * v80 + 2];
    do
    {
      v108 = (unsigned __int8 *)v107;
      v109 = v107 + (unsigned __int8)v142[7 * (v80 - v103) - 1];
      do
      {
        v110 = (_BYTE *)(v82 + *v108);
        if ( (unsigned __int8)*v110 > v103 )
          *v110 = v103;
        ++v108;
      }
      while ( (unsigned __int64)v108 < v109 );
      ++v103;
      v107 -= 7;
    }
    while ( v103 != v79 );
  }
LABEL_170:
  v83 = v142;
  v84 = -1;
  while ( v80 == v3 )
  {
LABEL_175:
    ++v3;
    v83 += 7;
    if ( v3 == v55 )
      goto LABEL_176;
  }
  v85 = (int)v84;
  if ( (_DWORD)v84 == -1 )
  {
    while ( 1 )
    {
      if ( *v83 > 1u )
      {
        v84 = v3;
        goto LABEL_175;
      }
      ++v3;
      v83 += 7;
      if ( v55 == v3 )
        break;
      if ( v3 == v80 )
        goto LABEL_175;
    }
    if ( v80 >= 0 )
      goto LABEL_177;
    return 0;
  }
  while ( 2 )
  {
    v99 = *v83;
    v83 += 7;
    v100 = v3 + 1;
    if ( v142[7 * v85] >= v99 )
    {
      if ( v55 == v100 )
        goto LABEL_176;
      if ( v100 == v80 )
      {
        v3 = v80;
        goto LABEL_175;
      }
LABEL_205:
      ++v3;
      continue;
    }
    break;
  }
  if ( v100 != v55 )
  {
    if ( v100 == v80 )
    {
      v84 = v3;
      v3 = v80;
      goto LABEL_175;
    }
    v85 = v3;
    v84 = v3;
    goto LABEL_205;
  }
  v84 = v3;
LABEL_176:
  if ( v80 >= 0 )
  {
LABEL_177:
    v86 = *(int *)(a1 + 100);
    if ( !(_DWORD)v86 )
    {
      if ( !*(_DWORD *)v51 )
      {
        *(_DWORD *)(v51 + 144) = 0;
        sub_86CA20((unsigned int *)v51, 0x2D2B2928u, 13, 0, 13, 0, 127, v134);
      }
      sub_868C70(v51, 2);
      if ( !*(_DWORD *)v51 )
      {
        v87 = *(_QWORD *)(v51 + 80);
        v88 = *(_QWORD *)(v87 + 8);
        v89 = v88 + 16;
        if ( (unsigned __int64)(v88 + 16) <= 0xFF0 )
        {
          v91 = (__m128 *)(v87 + v88 + 16);
          *(_QWORD *)(v87 + 8) = v89;
          if ( v91 )
          {
LABEL_184:
            *v91 = _mm_loadh_ps((const double *)(a1 + 368));
            *(_QWORD *)(a1 + 368) = v91;
          }
        }
        else
        {
          v90 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v51 + 56))(
                            4096,
                            *(_QWORD *)(*(_QWORD *)(v51 + 56) + 16LL));
          if ( v90 )
          {
            v90->m128_u64[0] = *(_QWORD *)(v51 + 80);
            *(_QWORD *)(v51 + 80) = v90;
            v91 = v90 + 1;
            v91[-1].m128_u64[1] = 16;
            goto LABEL_184;
          }
          *(_DWORD *)v51 = 2;
        }
      }
LABEL_185:
      sub_86B8E0((unsigned int *)v51, 32, 5, 0, 127, v82);
      v92 = sub_868BC0(v51);
      sub_86E080((unsigned int *)v51, 4, 2, 0, 13, 0);
      if ( !*(_DWORD *)v51 )
      {
        v93 = *(_QWORD *)(v51 + 80);
        v94 = *(_QWORD *)(v93 + 8);
        v95 = v94 + 16;
        if ( (unsigned __int64)(v94 + 16) <= 0xFF0 )
        {
          v97 = (__m128 *)(v93 + v94 + 16);
          *(_QWORD *)(v93 + 8) = v95;
          if ( v97 )
          {
LABEL_189:
            *v97 = _mm_loadh_ps((const double *)(a1 + 368));
            *(_QWORD *)(a1 + 368) = v97;
          }
        }
        else
        {
          v96 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v51 + 56))(
                            4096,
                            *(_QWORD *)(*(_QWORD *)(v51 + 56) + 16LL));
          if ( v96 )
          {
            v96->m128_u64[0] = *(_QWORD *)(v51 + 80);
            *(_QWORD *)(v51 + 80) = v96;
            v97 = v96 + 1;
            v97[-1].m128_u64[1] = 16;
            goto LABEL_189;
          }
          *(_DWORD *)v51 = 2;
        }
      }
      sub_86B8E0((unsigned int *)v51, 33, 1, 0, 130, v80);
      sub_86B8E0((unsigned int *)v51, 33, 1, 0, 389, 0);
      sub_86D900((unsigned int *)v51, 0x40u, 2, 0, 2, 0, 1u, 0);
      v98 = sub_86E080((unsigned int *)v51, 1, 1, 0, 127, 0);
      if ( v98 && v92 )
      {
        v98[2] &= ~1uLL;
        v98[3] = v92;
      }
      if ( (int)v84 < 0 )
      {
LABEL_194:
        if ( *(_DWORD *)(a1 + 100) )
          sub_86B8E0((unsigned int *)v51, 32, 13, 0, 3, 0);
        else
          sub_86D900((unsigned int *)v51, 0x40u, 13, 0, 13, 0, 0x7Fu, v134);
        return 1;
      }
      sub_86B8E0((unsigned int *)v51, 33, 1, 0, 130, v84);
      v117 = 7 * v84;
      sub_86D900((unsigned int *)v51, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
      v118 = (unsigned __int8)v142[7 * v84 + 1];
      if ( v142[7 * v84 - 1] != 1 )
      {
        v119 = v118 ^ v142[7 * v84 + 2];
        if ( ((unsigned __int8)(v118 ^ v142[v117 + 2]) & ((unsigned __int8)(v118 ^ v142[v117 + 2]) - 1)) != 0 )
        {
          v120 = sub_86E080((unsigned int *)v51, 0, 1, 0, 127, v118);
          v121 = sub_86E080((unsigned int *)v51, 1, 1, 0, 127, (unsigned __int8)v142[v117 + 2]);
          if ( v121 && v92 )
          {
            v121[2] &= ~1uLL;
            v121[3] = v92;
          }
          v122 = sub_868BC0(v51);
          if ( v120 && v122 )
          {
            v120[2] &= ~1uLL;
            v120[3] = v122;
          }
LABEL_256:
          sub_86D900((unsigned int *)v51, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
          goto LABEL_194;
        }
        if ( !*(_DWORD *)v51 )
        {
          *(_DWORD *)(v51 + 144) = 0;
          sub_86D220((unsigned int *)v51, 0xD0B0908u, 1, 0, 1, 0, 127, v119);
          LOBYTE(v118) = v142[v117 + 1];
        }
        v118 = (unsigned __int8)(v119 | v118);
      }
      v123 = sub_86E080((unsigned int *)v51, 1, 1, 0, 127, v118);
      if ( v123 && v92 )
      {
        v123[2] &= ~1uLL;
        v123[3] = v92;
      }
      goto LABEL_256;
    }
    sub_86B8E0((unsigned int *)v51, 32, 1, 0, 142, v86);
    sub_86B8E0((unsigned int *)v51, 32, 3, 0, 13, 0);
    if ( !*(_DWORD *)v51 )
    {
      *(_DWORD *)(v51 + 144) = 0;
      sub_86CA20((unsigned int *)v51, 0x2D2B2928u, 13, 0, 13, 0, 127, v134);
    }
    sub_868C70(v51, 2);
    if ( !*(_DWORD *)v51 )
    {
      v111 = *(_QWORD *)(v51 + 80);
      v112 = *(_QWORD *)(v111 + 8);
      v113 = v112 + 16;
      if ( (unsigned __int64)(v112 + 16) <= 0xFF0 )
      {
        v115 = (__m128 *)(v111 + v112 + 16);
        *(_QWORD *)(v111 + 8) = v113;
        if ( v115 )
        {
LABEL_230:
          *v115 = _mm_loadh_ps((const double *)(a1 + 368));
          *(_QWORD *)(a1 + 368) = v115;
        }
        if ( !*(_DWORD *)v51 )
        {
          *(_DWORD *)(v51 + 144) = 0;
          v116 = sub_867CC0(v51, 1u, 13, 0, 1, 0);
          if ( v116 )
            *v116 = 59;
        }
      }
      else
      {
        v114 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v51 + 56))(
                           4096,
                           *(_QWORD *)(*(_QWORD *)(v51 + 56) + 16LL));
        if ( v114 )
        {
          v114->m128_u64[0] = *(_QWORD *)(v51 + 80);
          *(_QWORD *)(v51 + 80) = v114;
          v115 = v114 + 1;
          v115[-1].m128_u64[1] = 16;
          goto LABEL_230;
        }
        *(_DWORD *)v51 = 2;
      }
    }
    sub_86B2A0((unsigned int *)v51, 4, 13, 1, 0, 13);
    goto LABEL_185;
  }
  if ( (int)v84 >= 0 )
  {
    sub_871FF0(a1, v142[7 * (int)v84 + 1], v142[7 * (int)v84 + 2], v84);
    return 1;
  }
  return 0;
}
