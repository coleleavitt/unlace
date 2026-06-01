unsigned __int64 __fastcall sub_875730(__int64 a1, _BYTE *a2, unsigned __int64 a3, int a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE *v11; // rax
  int v12; // edi
  unsigned int *v13; // rdi
  int v14; // r14d
  int v15; // ebp
  int v16; // ebp
  _BYTE *v17; // rdi
  int v18; // r14d
  __int64 v19; // r9
  char v20; // cl
  unsigned int *v21; // rbp
  int v22; // ebx
  int v23; // r12d
  int v24; // edx
  _BYTE *v26; // rdx
  char *v27; // rax
  int v28; // edx
  char v29; // cl
  int v30; // r8d
  int v31; // esi
  __int64 v32; // r12
  int v33; // r12d
  _BYTE *v34; // rdx
  __int64 v35; // rax
  _BYTE *v36; // rdx
  __int64 v37; // rax
  int v38; // ecx
  _BYTE *v39; // rdx
  _BYTE *v40; // rdx
  _BYTE *v41; // rdx
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rax
  int v45; // r8d
  _BYTE *v46; // rcx
  __int64 v47; // rax
  _BYTE *v48; // rax
  int v49; // ecx
  int v50; // r8d
  __int64 v51; // rax
  int v52; // ecx
  _BYTE *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  _BYTE *v56; // rdx
  unsigned __int16 v57; // dx
  __int64 v58; // rax
  int v59; // esi
  _BYTE *v60; // rcx
  __int64 v61; // rax
  _BYTE *v62; // rdx
  _BYTE *v63; // rax
  int v64; // edx
  int *v65; // rbx
  int v66; // r12d
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // eax
  int v70; // ebx
  __int64 *v71; // r14
  _BYTE *v72; // r15
  int v73; // r12d
  __int64 v74; // rdx
  int v75; // r14d
  int v76; // r12d
  __int64 v77; // rdx
  int v78; // ebx
  __int64 *j; // r12
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rax
  unsigned __int8 v84; // cl
  __int64 v85; // rax
  _BYTE *v86; // rdx
  unsigned __int8 v87; // cl
  __int64 *v88; // r15
  int v89; // r14d
  int v90; // r12d
  __int64 i; // rbx
  __int64 v92; // r8
  int v93; // ebx
  __int64 *k; // r12
  __int64 v95; // rcx
  _BYTE *v96; // rax
  int v97; // edx
  _BYTE *v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rcx
  _BYTE *v102; // rax
  int v103; // edx
  _BYTE *v104; // rax
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rcx
  _BYTE *v108; // rax
  int v109; // ecx
  _BYTE *v110; // r12
  int v111; // eax
  _BYTE *v112; // rax
  int v113; // ecx
  __int64 v114; // rax
  __int64 v115; // rcx
  _BYTE *v116; // rax
  int v117; // edx
  __int64 v118; // rcx
  _BYTE *v119; // rax
  int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rcx
  _BYTE *v123; // rax
  int v124; // edx
  _BYTE *v125; // rax
  int v126; // r10d
  _BYTE *v127; // rax
  int v128; // ecx
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // ecx
  _BYTE *v132; // rdx
  _BYTE *v133; // rax
  int v134; // ecx
  _BYTE *v135; // rax
  int v136; // edx
  int v137; // ebp
  int v139; // [rsp+10h] [rbp-108h]
  unsigned int v140; // [rsp+14h] [rbp-104h]
  __int64 v141; // [rsp+18h] [rbp-100h]
  int v143; // [rsp+24h] [rbp-F4h]
  int v144; // [rsp+24h] [rbp-F4h]
  int v145; // [rsp+24h] [rbp-F4h]
  int v146; // [rsp+28h] [rbp-F0h]
  __int64 v147; // [rsp+28h] [rbp-F0h]
  int v148; // [rsp+30h] [rbp-E8h]
  __int64 v149; // [rsp+30h] [rbp-E8h]
  int v150; // [rsp+38h] [rbp-E0h]
  __int64 v151; // [rsp+38h] [rbp-E0h]
  __int64 v152; // [rsp+40h] [rbp-D8h]
  _BYTE *v153; // [rsp+40h] [rbp-D8h]
  unsigned int v154; // [rsp+48h] [rbp-D0h]
  __int64 v156; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v157; // [rsp+58h] [rbp-C0h]
  _QWORD v158[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v159; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v160; // [rsp+78h] [rbp-A0h]
  unsigned int *v161; // [rsp+90h] [rbp-88h] BYREF
  __int64 v162; // [rsp+98h] [rbp-80h]
  int v163; // [rsp+A0h] [rbp-78h]
  _DWORD v164[3]; // [rsp+A4h] [rbp-74h]
  __m128i si128; // [rsp+B0h] [rbp-68h]
  __int64 v166; // [rsp+C0h] [rbp-58h]
  int v167; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v168; // [rsp+D8h] [rbp-40h]

  v168 = __readfsqword(0x28u);
  memset(*(void **)(a1 + 144), 0, *(int *)(a1 + 140));
  v8 = *(_QWORD *)(a1 + 328);
  if ( *(_QWORD *)(v8 + 56) )
  {
    v9 = *(_QWORD *)(v8 + 48);
    do
    {
      v10 = *(_DWORD *)(a1 + 76) + 16 * (unsigned __int16)__ROL2__(*(_WORD *)(v9 + 1), 8);
      v11 = (_BYTE *)(*(_QWORD *)(a1 + 144) + (v10 >> 6));
      v12 = 1 << ((v10 >> 3) & 7);
      if ( ((unsigned __int8)v12 & *v11) == 0 )
        *v11 |= v12;
      v9 += 3;
    }
    while ( *(_BYTE *)v9 == 0x93 );
  }
  v13 = *(unsigned int **)a1;
  v14 = 8 * a5;
  v140 = a4 - 2;
  if ( !a4 )
  {
    v15 = 12;
    v162 = -1;
    v163 = -1;
    v166 = 0x300000004LL;
    v167 = 0;
    v161 = v13;
    v139 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8900);
    goto LABEL_12;
  }
  if ( a4 == 4 )
  {
    v162 = -1;
    v16 = *(_DWORD *)(a1 + 88);
    v161 = v13;
    v166 = 0x300000005LL;
    v163 = -1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A88F0);
    sub_86B8E0(v13, 32, 1, 0, 132, v14);
    v139 = 0;
    LODWORD(v162) = 14;
    v167 = 1;
    v164[0] = v16;
    v15 = 4;
LABEL_12:
    sub_86BC50((__int64)&v161, 14, *(int *)(a1 + 88), v15, v14);
    goto LABEL_13;
  }
  v162 = -1;
  v161 = v13;
  v166 = 0x300000004LL;
  v163 = -1;
  v167 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8900);
  if ( v140 > 1 )
  {
    v137 = *(_DWORD *)(a1 + 88);
    sub_86B8E0(v13, 32, 1, 0, 140, v14);
    v164[0] = v137;
    LODWORD(v162) = 14;
    v167 = 1;
  }
  v15 = 12;
  v139 = 0;
LABEL_13:
  v17 = a2;
  v18 = v14 + 8;
  v19 = a1;
  v154 = a4 & 0xFFFFFFFD;
  v141 = (-19LL >> a4) & 1;
  while ( (unsigned __int64)v17 < a3 )
  {
    v20 = *v17;
    if ( *v17 > 0x92u )
    {
      v87 = v20 + 109;
      if ( v87 <= 0x11u )
      {
        if ( ((1LL << v87) & 0x28A00) != 0 )
        {
          v31 = 0;
          if ( (a6 & 1) != 0 )
          {
            v115 = *(int *)(v19 + 104);
            v116 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v115 >> 6));
            v117 = 1 << ((v115 >> 3) & 7);
            if ( ((unsigned __int8)v117 & *v116) == 0 )
            {
              v31 = 1;
              *v116 |= v117;
              v158[0] = *(int *)(v19 + 104);
            }
          }
          v32 = *(int *)(v19 + 108);
          if ( !(_DWORD)v32 )
          {
            v17 += (unsigned __int8)v17[1] + 3;
            if ( v140 <= 1 )
            {
LABEL_97:
              v30 = 0;
              goto LABEL_28;
            }
            goto LABEL_138;
          }
          v110 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v32 >> 6));
          v111 = 1 << (((__int64)*(int *)(v19 + 108) >> 3) & 7);
          if ( ((unsigned __int8)v111 & *v110) == 0 )
          {
            *v110 |= v111;
            v156 = *(int *)(v19 + 108);
            v17 += (unsigned __int8)v17[1] + 3;
            if ( v140 <= 1 )
            {
              v30 = 8;
              LODWORD(v32) = 0;
              goto LABEL_28;
            }
LABEL_128:
            LODWORD(v32) = 0;
            v50 = 1;
            goto LABEL_70;
          }
          v17 += (unsigned __int8)v17[1] + 3;
          if ( v140 <= 1 )
          {
LABEL_134:
            v30 = 0;
            LODWORD(v32) = 0;
            goto LABEL_28;
          }
LABEL_138:
          v33 = 0;
          if ( (a4 & 0xFFFFFFFD) != 1 )
            goto LABEL_32;
LABEL_31:
          v18 += v33;
          goto LABEL_32;
        }
        if ( v87 == 14 )
        {
          ++v17;
          v95 = *(int *)(v19 + 108);
          v96 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v95 >> 6));
          v97 = 1 << ((v95 >> 3) & 7);
          if ( ((unsigned __int8)v97 & *v96) == 0 )
          {
            *v96 |= v97;
            v156 = *(int *)(v19 + 108);
            if ( v140 > 1 )
            {
LABEL_127:
              v31 = 0;
              goto LABEL_128;
            }
LABEL_27:
            v30 = 8;
            v31 = 0;
            LODWORD(v32) = 0;
            goto LABEL_28;
          }
LABEL_35:
          if ( v140 > 1 )
            goto LABEL_43;
          goto LABEL_36;
        }
        if ( ((1LL << v87) & 1) != 0 )
        {
          v30 = a6 & 0x20;
          if ( (a6 & 0x20) != 0 )
          {
            LODWORD(v32) = 0;
            v130 = *(_DWORD *)(v19 + 76) + 16 * (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8);
            v159 = v130;
            v131 = 1 << ((v130 >> 3) & 7);
            v132 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v130 >> 6));
            if ( ((unsigned __int8)v131 & *v132) == 0 )
            {
              LODWORD(v32) = 2;
              *v132 |= v131;
              v160 = v130 + 8;
            }
            if ( v17[3] != 0x93 )
              a6 &= ~0x20u;
            v17 += 3;
            v30 = 0;
            v31 = 0;
            if ( v140 <= 1 )
              goto LABEL_28;
            if ( (a4 & 0xFFFFFFFD) == 1 )
            {
LABEL_114:
              v18 += 8 * v32;
              v31 = 0;
              goto LABEL_33;
            }
            if ( !(_DWORD)v32 )
              goto LABEL_186;
            LODWORD(v32) = 2;
            goto LABEL_75;
          }
          v17 += 3;
          v31 = 0;
          LODWORD(v32) = 0;
          if ( v140 > 1 )
          {
            if ( (a4 & 0xFFFFFFFD) == 1 )
              goto LABEL_114;
LABEL_186:
            if ( v141 )
              continue;
            v31 = 0;
LABEL_33:
            v18 += 8 * v31;
            continue;
          }
LABEL_28:
          v18 += v30;
LABEL_29:
          if ( v154 == 1 )
          {
LABEL_30:
            v33 = 8 * v32;
            goto LABEL_31;
          }
LABEL_74:
          if ( (_DWORD)v32 )
          {
LABEL_75:
            v69 = v18 + 8 * v32;
            v70 = v18;
            v151 = v19;
            v144 = v18;
            v71 = &v159;
            v72 = v17;
            v148 = v32;
            v73 = v69;
            do
            {
              v74 = *v71;
              if ( !v139 )
              {
                v153 = v72;
                v88 = v71;
                v89 = v73;
                v90 = v70;
                for ( i = v74; ; i = *v88 )
                {
                  sub_86BC50((__int64)&v161, v15, v90, 14, i);
                  if ( a4 == 4 )
                    break;
                  v90 += 8;
                  if ( v90 == v89 )
                  {
                    v75 = v144;
                    v76 = v148;
                    v19 = v151;
                    v17 = v153;
                    goto LABEL_79;
                  }
                  ++v88;
                }
                v74 = i;
                v70 = v90;
                v73 = v89;
                v71 = v88;
                v72 = v153;
              }
              sub_86BC50((__int64)&v161, 14, v74, v15, v70);
              v70 += 8;
              ++v71;
            }
            while ( v70 != v73 );
            v75 = v144;
            v17 = v72;
            v76 = v148;
            v19 = v151;
LABEL_79:
            v18 = v75 + 8 * v76;
            if ( !v141 )
              goto LABEL_33;
            goto LABEL_80;
          }
LABEL_32:
          if ( !v141 )
            goto LABEL_33;
LABEL_80:
          if ( !v31 )
            continue;
          v77 = v158[0];
          v145 = v18 + 8 * v31;
          if ( v139 )
          {
            v147 = v19;
            v78 = v18;
            for ( j = v158; ; v77 = *j )
            {
              sub_86BC50((__int64)&v161, 14, v77, v15, v78);
              v78 += 8;
              if ( v145 == v78 )
                break;
              ++j;
            }
            v19 = v147;
          }
          else
          {
            LODWORD(v92) = v158[0];
            v93 = v18;
            v149 = v19;
            for ( k = v158; ; v92 = *k )
            {
              sub_86BC50((__int64)&v161, v15, v93, 14, v92);
              v93 += 8;
              if ( v145 == v93 )
                break;
              ++k;
            }
            v19 = v149;
          }
          goto LABEL_33;
        }
      }
    }
    else
    {
      if ( (unsigned __int8)v20 > 0x4Du )
      {
        switch ( v20 )
        {
          case 78:
          case 79:
            goto LABEL_41;
          case 85:
          case 87:
            v36 = &v17[-*(_QWORD *)(v19 + 16)];
            ++v17;
            v37 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v36);
            v156 = v37;
            if ( v37 )
              goto LABEL_38;
            goto LABEL_35;
          case 86:
          case 88:
          case 89:
          case 90:
            v34 = &v17[-*(_QWORD *)(v19 + 16)];
            ++v17;
            v35 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v34);
            v156 = v35;
            if ( !v35 )
              goto LABEL_35;
            goto LABEL_130;
          case 91:
          case 92:
            v41 = &v17[-*(_QWORD *)(v19 + 16)];
            v17 += 3;
            v37 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v41);
            v156 = v37;
            if ( v37 )
              goto LABEL_38;
            goto LABEL_35;
          case 110:
          case 111:
            v55 = *(_QWORD *)(v19 + 24);
            v56 = &v17[-*(_QWORD *)(v19 + 16)];
            v17 += 33;
            v50 = *(_DWORD *)(v55 + 4LL * (_QWORD)v56);
            if ( !v50 )
            {
              if ( v140 <= 1 )
                goto LABEL_58;
              v31 = 0;
              LODWORD(v32) = 0;
              if ( (a4 & 0xFFFFFFFD) == 1 )
                goto LABEL_30;
              goto LABEL_44;
            }
            v156 = *(int *)(v55 + 4LL * (_QWORD)v56);
            if ( (unsigned int)sub_867680(v17) != 2
              || (v135 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v100 >> 6)),
                  v136 = 1 << ((v100 >> 3) & 7),
                  ((unsigned __int8)v136 & *v135) != 0) )
            {
              if ( v140 > 1 )
                goto LABEL_127;
              LODWORD(v32) = 0;
              v31 = 0;
              v30 = 8;
              goto LABEL_28;
            }
            *v135 |= v136;
            v157 = v100 + 8;
            v50 = 2;
            if ( v140 <= 1 )
              goto LABEL_58;
            goto LABEL_160;
          case 118:
            v31 = 0;
            if ( (a6 & 1) != 0 )
            {
              v31 = *(_DWORD *)(v19 + 180);
              if ( v31 )
              {
                v31 = 0;
                v101 = *(int *)(v19 + 76);
                v102 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v101 >> 6));
                v103 = 1 << ((v101 >> 3) & 7);
                if ( ((unsigned __int8)v103 & *v102) == 0 )
                {
                  v31 = 1;
                  *v102 |= v103;
                  v158[0] = *(int *)(v19 + 76);
                }
              }
              v80 = *(int *)(v19 + 104);
              if ( (_DWORD)v80 )
              {
                v104 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v80 >> 6));
                v105 = 1 << (((__int64)*(int *)(v19 + 104) >> 3) & 7);
                if ( ((unsigned __int8)v105 & *v104) == 0 )
                {
                  *v104 |= v105;
                  v106 = v31++;
                  v158[v106] = *(int *)(v19 + 104);
                }
              }
            }
            LODWORD(v32) = *(_DWORD *)(v19 + 116);
            if ( (_DWORD)v32 )
            {
              v121 = (int)v32;
              LODWORD(v32) = 0;
              v122 = v121;
              v123 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v121 >> 6));
              v124 = 1 << ((v122 >> 3) & 7);
              if ( ((unsigned __int8)v124 & *v123) == 0 )
              {
                LODWORD(v32) = 1;
                *v123 |= v124;
                v159 = *(int *)(v19 + 116);
              }
            }
            if ( v17[3] != 0x93 )
            {
              v17 += 3;
              if ( v140 > 1 )
                goto LABEL_29;
              goto LABEL_97;
            }
            a6 |= 0x20u;
            v17 += 3;
            if ( v140 <= 1 )
              goto LABEL_97;
            goto LABEL_29;
          case 122:
            v81 = *(_QWORD *)(v19 + 16);
            v82 = *(_QWORD *)(v19 + 24);
            v83 = *(int *)(v82 + 4LL * (_QWORD)&v17[-v81]);
            v156 = v83;
            if ( !v83 )
            {
              v17 += 3;
              if ( v140 <= 1 )
                goto LABEL_36;
              goto LABEL_43;
            }
            v107 = v83;
            v108 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v83 >> 6));
            v109 = 1 << ((v107 >> 3) & 7);
            v50 = 0;
            if ( ((unsigned __int8)v109 & *v108) == 0 )
            {
              v50 = 1;
              *v108 |= v109;
              v82 = *(_QWORD *)(v19 + 24);
              v81 = *(_QWORD *)(v19 + 16);
            }
            v17 += *(int *)(v82 + 4LL * (_QWORD)&v17[-v81 + 1]) + 3;
            if ( v140 <= 1 )
            {
LABEL_58:
              LODWORD(v32) = 0;
              v30 = 8 * v50;
              v31 = 0;
              goto LABEL_28;
            }
            if ( v50 == 1 )
            {
LABEL_160:
              v31 = 0;
              LODWORD(v32) = 0;
              goto LABEL_70;
            }
            if ( (a4 & 0xFFFFFFFD) == 1 )
              goto LABEL_200;
            goto LABEL_186;
          case -128:
          case -127:
          case -126:
          case -125:
          case -124:
          case -123:
          case -121:
          case -120:
          case -118:
          case -114:
          case -113:
          case -110:
            v26 = &v17[-*(_QWORD *)(v19 + 16)];
            v17 += 3;
            v156 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v26);
            v27 = (char *)(*(_QWORD *)(v19 + 144) + (v156 >> 6));
            v28 = 1 << ((v156 >> 3) & 7);
            v29 = *v27;
            if ( ((unsigned __int8)v28 & (unsigned __int8)*v27) == 0 )
              goto LABEL_26;
            goto LABEL_35;
          case -122:
            v62 = &v17[-*(_QWORD *)(v19 + 16)];
            v17 += 3;
            v156 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v62);
            v157 = v156 + 8;
            v63 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v156 >> 6));
            v64 = 1 << ((v156 >> 3) & 7);
            if ( ((unsigned __int8)v64 & *v63) != 0 )
              goto LABEL_35;
            *v63 |= v64;
            if ( v140 > 1 )
              goto LABEL_69;
            goto LABEL_40;
          case -117:
          case -112:
            LODWORD(v32) = 0;
            v57 = __ROL2__(*(_WORD *)(v17 + 3), 8);
            v58 = *(_DWORD *)(v19 + 76) + 16 * v57;
            v159 = v58;
            v59 = 1 << ((v58 >> 3) & 7);
            v60 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v58 >> 6));
            if ( ((unsigned __int8)v59 & *v60) == 0 )
            {
              LODWORD(v32) = 2;
              *v60 |= v59;
              v160 = v58 + 8;
            }
            v61 = *(int *)(v19 + 116);
            if ( (_DWORD)v61 )
            {
              v127 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v61 >> 6));
              v128 = 1 << (((__int64)*(int *)(v19 + 116) >> 3) & 7);
              if ( ((unsigned __int8)v128 & *v127) == 0 )
              {
                *v127 |= v128;
                v129 = (int)v32;
                LODWORD(v32) = v32 + 1;
                *(&v159 + v129) = *(int *)(v19 + 116);
              }
            }
            v17 += 5;
            if ( ((unsigned __int8)(1 << (v57 & 7)) & *(_BYTE *)(*(_QWORD *)(v19 + 40) + ((int)v57 >> 3))) != 0 )
            {
              v30 = 0;
              v31 = 0;
              if ( v140 <= 1 )
                goto LABEL_28;
            }
            else
            {
              v156 = *(_DWORD *)(v19 + 72) + 8 * v57;
              v125 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v156 >> 6));
              v126 = 1 << ((v156 >> 3) & 7);
              if ( ((unsigned __int8)v126 & *v125) == 0 )
              {
                *v125 |= v126;
                if ( v140 <= 1 )
                {
                  v30 = 8;
                  v31 = 0;
                  goto LABEL_28;
                }
                v31 = 0;
                v50 = 1;
                goto LABEL_70;
              }
              if ( v140 <= 1 )
              {
                v30 = 0;
                v31 = 0;
                goto LABEL_28;
              }
            }
            if ( (a4 & 0xFFFFFFFD) == 1 )
              goto LABEL_114;
            v31 = 0;
            if ( (_DWORD)v32 )
              goto LABEL_75;
            goto LABEL_44;
          case -116:
          case -111:
            v42 = *(_QWORD *)(v19 + 144);
            LODWORD(v32) = 0;
            v43 = (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 3), 8);
            v44 = *(_DWORD *)(v19 + 76) + 16 * (unsigned __int16)v43;
            v159 = v44;
            v45 = 1 << ((v44 >> 3) & 7);
            v46 = (_BYTE *)(v42 + (v44 >> 6));
            if ( ((unsigned __int8)v45 & *v46) == 0 )
            {
              LODWORD(v32) = 2;
              *v46 |= v45;
              v42 = *(_QWORD *)(v19 + 144);
              v160 = v44 + 8;
            }
            v47 = *(int *)(v19 + 116);
            if ( (_DWORD)v47 )
            {
              v112 = (_BYTE *)(v42 + (v47 >> 6));
              v113 = 1 << (((__int64)*(int *)(v19 + 116) >> 3) & 7);
              if ( ((unsigned __int8)v113 & *v112) == 0 )
              {
                *v112 |= v113;
                v114 = (int)v32;
                LODWORD(v32) = v32 + 1;
                v42 = *(_QWORD *)(v19 + 144);
                *(&v159 + v114) = *(int *)(v19 + 116);
              }
            }
            v156 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)&v17[-*(_QWORD *)(v19 + 16)]);
            v48 = (_BYTE *)(v42 + (v156 >> 6));
            v49 = 1 << ((v156 >> 3) & 7);
            v50 = 0;
            if ( ((unsigned __int8)v49 & *v48) == 0 )
            {
              v50 = 1;
              *v48 |= v49;
              v42 = *(_QWORD *)(v19 + 144);
            }
            v17 += 5;
            v51 = *(_DWORD *)(v19 + 72) + 8 * v43;
            v52 = 1 << (((__int64)(int)v51 >> 3) & 7);
            v53 = (_BYTE *)(v42 + ((__int64)(int)v51 >> 6));
            if ( ((unsigned __int8)v52 & *v53) != 0 )
            {
              if ( v140 <= 1 )
              {
LABEL_55:
                v30 = 8 * v50;
                v31 = 0;
                goto LABEL_28;
              }
              if ( v50 != 1 )
              {
                if ( (a4 & 0xFFFFFFFD) == 1 )
                {
                  v50 = v32;
LABEL_200:
                  v18 += 8 * v50;
                  v31 = 0;
                  goto LABEL_33;
                }
                v31 = v50;
                if ( !(_DWORD)v32 )
                  goto LABEL_186;
                goto LABEL_75;
              }
            }
            else
            {
              *v53 |= v52;
              v54 = v50++;
              *(&v156 + v54) = v51;
              if ( v140 <= 1 )
                goto LABEL_55;
            }
            v31 = 0;
            break;
          case -115:
            if ( (unsigned __int8)(v17[(unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8)] - 123) <= 1u )
            {
              v156 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)&v17[-*(_QWORD *)(v19 + 16)]);
              v133 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v156 >> 6));
              v134 = 1 << ((v156 >> 3) & 7);
              if ( ((unsigned __int8)v134 & *v133) == 0 )
              {
                v17 += 3;
                *v133 |= v134;
                if ( v140 <= 1 )
                  goto LABEL_27;
                goto LABEL_127;
              }
            }
            if ( v140 <= 1 )
            {
              v17 += 3;
              v30 = 0;
              v31 = 0;
              LODWORD(v32) = 0;
              goto LABEL_28;
            }
            v17 += 3;
            v33 = 0;
            v31 = 0;
            if ( (a4 & 0xFFFFFFFD) == 1 )
              goto LABEL_31;
            goto LABEL_186;
          default:
            goto LABEL_18;
        }
        goto LABEL_70;
      }
      if ( v20 == 3 )
      {
        v31 = 0;
        if ( (a6 & 1) != 0 )
        {
          v118 = *(int *)(v19 + 76);
          v119 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v118 >> 6));
          v120 = 1 << ((v118 >> 3) & 7);
          if ( ((unsigned __int8)v120 & *v119) == 0 )
          {
            v31 = 1;
            *v119 |= v120;
            v158[0] = *(int *)(v19 + 76);
          }
        }
        ++v17;
        if ( v140 <= 1 )
          goto LABEL_134;
        goto LABEL_138;
      }
      v84 = v20 - 33;
      if ( v84 <= 0x2Cu )
      {
        v85 = 1LL << v84;
        if ( ((1LL << v84) & 0x1D00E807403ALL) != 0 )
        {
          v98 = &v17[-*(_QWORD *)(v19 + 16)];
          v17 += 2;
          v35 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v98);
          v156 = v35;
          if ( v35 )
          {
LABEL_130:
            v99 = v35;
            v27 = (char *)(*(_QWORD *)(v19 + 144) + (v35 >> 6));
            v28 = 1 << ((v99 >> 3) & 7);
            v29 = *v27;
            if ( ((unsigned __int8)v28 & (unsigned __int8)*v27) == 0 )
            {
LABEL_26:
              *v27 = v28 | v29;
              if ( v140 > 1 )
                goto LABEL_127;
              goto LABEL_27;
            }
          }
          goto LABEL_35;
        }
        if ( (v85 & 0x2801400A005LL) != 0 )
        {
          v86 = &v17[-*(_QWORD *)(v19 + 16)];
          v17 += 2;
          v37 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v86);
          v156 = v37;
          if ( !v37 )
            goto LABEL_35;
LABEL_38:
          v38 = 1 << ((v37 >> 3) & 7);
          v39 = (_BYTE *)(*(_QWORD *)(v19 + 144) + (v37 >> 6));
          if ( ((unsigned __int8)v38 & *v39) != 0 )
            goto LABEL_35;
          *v39 |= v38;
          v157 = v37 + 8;
          if ( v140 <= 1 )
          {
LABEL_40:
            v30 = 16;
            v31 = 0;
            LODWORD(v32) = 0;
            goto LABEL_28;
          }
LABEL_69:
          v31 = 0;
          LODWORD(v32) = 0;
          v50 = 2;
LABEL_70:
          v65 = (int *)&v156;
          v143 = v18 + 8 * v50;
          v146 = v50;
          v152 = v19;
          v150 = v32;
          v66 = v18;
          do
          {
            if ( !v139 )
            {
              while ( 1 )
              {
                sub_86BC50((__int64)&v161, v15, v66, 14, *v65);
                if ( a4 == 4 )
                  break;
                v66 += 8;
                v65 += 2;
                if ( v66 == v143 )
                  goto LABEL_73;
              }
            }
            v67 = *(_QWORD *)v65;
            v68 = v66;
            v66 += 8;
            v65 += 2;
            sub_86BC50((__int64)&v161, 14, v67, v15, v68);
          }
          while ( v66 != v143 );
LABEL_73:
          LODWORD(v32) = v150;
          v19 = v152;
          v18 += 8 * v146;
          if ( v154 == 1 )
            goto LABEL_30;
          goto LABEL_74;
        }
        if ( (v85 & 0x3001800C0LL) != 0 )
        {
LABEL_41:
          v40 = &v17[-*(_QWORD *)(v19 + 16)];
          v17 += 4;
          v37 = *(int *)(*(_QWORD *)(v19 + 24) + 4LL * (_QWORD)v40);
          v156 = v37;
          if ( v37 )
            goto LABEL_38;
          if ( v140 > 1 )
          {
LABEL_43:
            v33 = 0;
            v31 = 0;
            if ( (a4 & 0xFFFFFFFD) != 1 )
            {
LABEL_44:
              if ( v141 )
                continue;
              goto LABEL_33;
            }
            goto LABEL_31;
          }
LABEL_36:
          v30 = 0;
          v31 = 0;
          LODWORD(v32) = 0;
          goto LABEL_28;
        }
      }
    }
LABEL_18:
    v17 = (_BYTE *)sub_868FC0(v17);
  }
  v21 = v161;
  v22 = v167;
  v23 = 3;
  do
  {
    v24 = *((_DWORD *)&v162 + v22);
    if ( v24 != -1 )
    {
      LOBYTE(v24) = v24 | 0x80;
      sub_86B8E0(v21, 32, v24, (int)v164[v22], si128.m128i_i32[v22], 0);
    }
    v22 = (v22 + 1) % 3;
    --v23;
  }
  while ( v23 );
  return v168 - __readfsqword(0x28u);
}
