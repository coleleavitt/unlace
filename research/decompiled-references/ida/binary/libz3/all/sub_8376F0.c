__int64 __fastcall sub_8376F0(__int64 a1, int **a2)
{
  char **exception; // r12
  __int64 v3; // r13
  __int64 v4; // rdx
  void *v5; // rbx
  char *v6; // r14
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // r12
  void *v10; // r15
  char *v11; // rsi
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // r15d
  _DWORD *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  int v28; // ecx
  _DWORD *v29; // rax
  int v30; // edx
  void *v31; // rdi
  _DWORD *v32; // rsi
  __int64 v33; // rax
  int v34; // eax
  void *v35; // rbp
  int v36; // eax
  _DWORD *v37; // rbp
  _DWORD *v38; // r12
  int v39; // r13d
  _QWORD *v40; // rax
  unsigned int v41; // r13d
  unsigned int *v42; // rax
  unsigned int *v43; // rbx
  __int64 v44; // rax
  unsigned int v46; // r14d
  unsigned int v47; // edx
  unsigned int *v48; // rax
  int v49; // eax
  void *v50; // r15
  int v51; // eax
  __int64 v52; // rdx
  unsigned int v53; // r9d
  unsigned int v54; // r8d
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // edi
  __int64 v58; // rdx
  __int64 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // r11
  int v62; // esi
  int v63; // eax
  __int64 v64; // rax
  char v65; // cl
  char v66; // si
  __int64 v67; // rax
  char v68; // cl
  char v69; // si
  void *v70; // r15
  int v71; // edx
  int v72; // edx
  __int64 v73; // rdx
  char v74; // si
  __int64 v75; // rdx
  char v76; // si
  __int64 v77; // rax
  _DWORD *v78; // rdi
  unsigned int v79; // edx
  _DWORD *v80; // rcx
  __int64 v81; // rdx
  _DWORD *v82; // rsi
  _DWORD *i; // rax
  int v84; // edx
  _DWORD *v85; // rsi
  __int64 v86; // rdi
  unsigned int v87; // edx
  char v88; // dl
  char v89; // dl
  int v90; // edx
  int v91; // edx
  int v92; // eax
  __int64 v93; // rax
  char v94; // dl
  char v95; // cl
  __int64 v96; // rax
  char v97; // dl
  char v98; // cl
  __int64 v99; // r15
  int v100; // r9d
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rdx
  _DWORD *v105; // r15
  __int64 v106; // rdx
  _DWORD *v107; // r10
  __int64 v108; // rdx
  __int64 v109; // rsi
  __int64 v110; // rdx
  int v111; // esi
  int v112; // esi
  __int64 v113; // rdi
  __int64 v114; // rsi
  char v115; // r11
  char v116; // r11
  __int64 v117; // rdi
  __int64 v118; // rsi
  char v119; // r11
  char v120; // r11
  char *v121; // r15
  char *v122; // rbx
  void *v123; // r12
  _DWORD *v124; // rsi
  void *v125; // rdi
  int v126; // eax
  unsigned int v127; // eax
  __int64 v128; // rax
  __int64 v129; // r15
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rdx
  char *v134; // rdi
  __int64 v135; // [rsp+8h] [rbp-F0h]
  __int64 v136; // [rsp+10h] [rbp-E8h]
  __int64 v137; // [rsp+10h] [rbp-E8h]
  _DWORD *v138; // [rsp+10h] [rbp-E8h]
  void *v139; // [rsp+10h] [rbp-E8h]
  void *v140; // [rsp+10h] [rbp-E8h]
  void *v141; // [rsp+18h] [rbp-E0h]
  void *v142; // [rsp+18h] [rbp-E0h]
  unsigned int v143; // [rsp+18h] [rbp-E0h]
  _DWORD *v144; // [rsp+20h] [rbp-D8h]
  size_t v145; // [rsp+20h] [rbp-D8h]
  int *v146; // [rsp+20h] [rbp-D8h]
  __int64 v147; // [rsp+20h] [rbp-D8h]
  int *v149; // [rsp+38h] [rbp-C0h]
  int v151; // [rsp+48h] [rbp-B0h]
  _QWORD *v152; // [rsp+48h] [rbp-B0h]
  unsigned int v153; // [rsp+48h] [rbp-B0h]
  __int64 v154; // [rsp+50h] [rbp-A8h]
  __int64 v155; // [rsp+50h] [rbp-A8h]
  _DWORD *v156; // [rsp+58h] [rbp-A0h]
  int v157; // [rsp+58h] [rbp-A0h]
  unsigned int v158; // [rsp+60h] [rbp-98h]
  __int64 v159; // [rsp+68h] [rbp-90h]
  int v160; // [rsp+74h] [rbp-84h]
  int v161[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v162; // [rsp+98h] [rbp-60h] BYREF
  __int64 v163; // [rsp+A0h] [rbp-58h]
  __int64 v164; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v165; // [rsp+B0h] [rbp-48h]

  if ( a2 != (int **)(a1 + 792) )
  {
    v3 = *(_QWORD *)(a1 + 792);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 - 4);
      if ( (_DWORD)v4 )
      {
        v135 = v3 + 72 * v4;
        do
        {
          v5 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v3 + 40);
          sub_182CBA0(v5, v3 + 56);
          v6 = *(char **)(v3 + 8);
          if ( v6 )
          {
            v7 = *(unsigned int *)(v3 + 16);
            if ( (_DWORD)v7 )
            {
              v8 = *(char **)(v3 + 8);
              v9 = &v6[48 * v7];
              do
              {
                v10 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v8 + 16);
                v11 = v8 + 32;
                v8 += 48;
                sub_182CBA0(v10, v11);
              }
              while ( v8 != v9 );
            }
            sub_186B220(v6);
          }
          v3 += 72;
        }
        while ( v3 != v135 );
        v3 = *(_QWORD *)(a1 + 792);
      }
      sub_186B220((void *)(v3 - 8));
    }
    if ( *a2 )
    {
      v12 = _mm_loadl_epi64((const __m128i *)(*a2 - 2));
      v13 = (_QWORD *)sub_186B270(72LL * (unsigned int)_mm_cvtsi128_si32(v12) + 8);
      v14 = v13 + 1;
      *v13 = v12.m128i_i64[0];
      *(_QWORD *)(a1 + 792) = v13 + 1;
      v15 = *a2;
      if ( *a2 )
      {
        v149 = &v15[18 * *(v15 - 1)];
        if ( v15 != v149 )
        {
          while ( 1 )
          {
            *(_DWORD *)v14 = *v15;
            v16 = sub_186B270(0x180u);
            *(_QWORD *)(v16 + 272) = 1;
            *(_QWORD *)v16 = 0;
            *(_QWORD *)(v16 + 16) = 0;
            *(_QWORD *)(v16 + 24) = 0;
            *(_QWORD *)(v16 + 32) = 1;
            *(_QWORD *)(v16 + 40) = 0;
            *(_QWORD *)(v16 + 48) = 0;
            *(_QWORD *)(v16 + 64) = 0;
            *(_QWORD *)(v16 + 72) = 0;
            *(_QWORD *)(v16 + 80) = 1;
            *(_QWORD *)(v16 + 88) = 0;
            *(_QWORD *)(v16 + 96) = 0;
            *(_QWORD *)(v16 + 112) = 0;
            *(_QWORD *)(v16 + 120) = 0;
            *(_QWORD *)(v16 + 128) = 1;
            *(_QWORD *)(v16 + 136) = 0;
            *(_QWORD *)(v16 + 144) = 0;
            *(_QWORD *)(v16 + 160) = 0;
            *(_QWORD *)(v16 + 168) = 0;
            *(_QWORD *)(v16 + 176) = 1;
            *(_QWORD *)(v16 + 184) = 0;
            *(_QWORD *)(v16 + 192) = 0;
            *(_QWORD *)(v16 + 208) = 0;
            *(_QWORD *)(v16 + 216) = 0;
            *(_QWORD *)(v16 + 224) = 1;
            *(_QWORD *)(v16 + 232) = 0;
            *(_QWORD *)(v16 + 240) = 0;
            *(_QWORD *)(v16 + 256) = 0;
            *(_QWORD *)(v16 + 264) = 0;
            *(_BYTE *)(v16 + 276) = 0;
            *(_QWORD *)(v16 + 280) = 0;
            *(_QWORD *)(v16 + 288) = 0;
            *(_QWORD *)(v16 + 304) = 0;
            *(_QWORD *)(v16 + 320) = 1;
            *(_QWORD *)(v16 + 336) = 0;
            *(_QWORD *)(v16 + 352) = 0;
            *(_QWORD *)(v16 + 368) = 1;
            v14[1] = v16;
            v17 = *((_QWORD *)v15 + 1);
            *(_QWORD *)(v16 + 312) = 0;
            *(_QWORD *)(v16 + 328) = 0;
            *(_QWORD *)(v16 + 360) = 0;
            *(_QWORD *)(v16 + 376) = 0;
            *((_DWORD *)v14 + 6) = 0;
            v14[2] = 8;
            v18 = (unsigned int)v15[4];
            *((_DWORD *)v14 + 8) = -1;
            v19 = v17 + 48 * v18;
            if ( v17 == v19 )
              goto LABEL_40;
            while ( *(_DWORD *)(v17 + 4) != 2 )
            {
              v17 += 48;
              if ( v19 == v17 )
                goto LABEL_40;
            }
            if ( v19 != v17 )
              break;
LABEL_40:
            v34 = v15[8];
            v35 = qword_1C7F2C0;
            *((_DWORD *)v14 + 10) = 0;
            *((_BYTE *)v14 + 44) &= 0xFCu;
            *((_BYTE *)v14 + 60) &= 0xFCu;
            *((_DWORD *)v14 + 8) = v34;
            v14[6] = 0;
            *((_DWORD *)v14 + 14) = 1;
            v14[8] = 0;
            if ( (v15[11] & 1) != 0 )
              sub_182C690(v35, v14 + 5, v15 + 10);
            else
              *((_DWORD *)v14 + 10) = v15[10];
            if ( (v15[15] & 1) != 0 )
            {
              sub_182C690(v35, v14 + 7, v15 + 14);
            }
            else
            {
              v36 = v15[14];
              *((_BYTE *)v14 + 60) &= ~1u;
              *((_DWORD *)v14 + 14) = v36;
            }
            v15 += 18;
            v14 += 9;
            if ( v149 == v15 )
              goto LABEL_45;
          }
LABEL_21:
          if ( !*(_DWORD *)(v17 + 16) )
            goto LABEL_35;
          v20 = *(_DWORD *)(v17 + 8);
          v21 = (_DWORD *)v14[1];
          v162 = 0;
          v136 = v17 + 16;
          v22 = *((unsigned int *)v14 + 4);
          v161[0] = v20;
          v163 = 0;
          v23 = v22 - 1;
          v22 *= 48;
          v164 = 1;
          v24 = (_DWORD *)((char *)v21 + v22);
          v165 = 0;
          v25 = 48LL * (v20 & v23);
          v26 = &v21[(unsigned __int64)v25 / 4];
          if ( v25 == v22 )
          {
LABEL_56:
            if ( v21 != v26 )
            {
              while ( 1 )
              {
                v49 = v21[1];
                if ( v49 == 2 )
                {
                  if ( v20 == *v21 && v20 == v21[2] )
                  {
                    v27 = v21;
                    goto LABEL_29;
                  }
                }
                else if ( !v49 )
                {
                  goto LABEL_64;
                }
                v21 += 12;
                if ( v26 == v21 )
                  goto LABEL_64;
              }
            }
            v125 = qword_1C7F2C0;
LABEL_65:
            sub_182CBA0(v125, &v162);
            sub_182CBA0(v125, &v164);
            v161[0] = v20;
            v50 = qword_1C7F2C0;
            v162 = 0;
            v163 = 0;
            v164 = 1;
            v165 = 0;
            if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v162, v136);
              if ( (*(_BYTE *)(v17 + 36) & 1) != 0 )
                goto LABEL_121;
LABEL_67:
              v51 = *(_DWORD *)(v17 + 32);
              BYTE4(v164) &= ~1u;
              LODWORD(v164) = v51;
            }
            else
            {
              LODWORD(v162) = *(_DWORD *)(v17 + 16);
              if ( (*(_BYTE *)(v17 + 36) & 1) == 0 )
                goto LABEL_67;
LABEL_121:
              sub_182C690(v50, &v164, v17 + 32);
            }
            v52 = *((unsigned int *)v14 + 4);
            v53 = 2 * v52;
            if ( 3 * (int)v52 < (unsigned int)(4 * (*((_DWORD *)v14 + 5) + *((_DWORD *)v14 + 6))) )
            {
              v99 = v53;
              v151 = 2 * v52;
              v145 = 48LL * v53;
              v137 = v145;
              v55 = sub_186B270(v145);
              v100 = v151;
              if ( v151 )
              {
                v101 = v55;
                v102 = v55 + 48 * v99;
                do
                {
                  *(_BYTE *)(v101 + 20) &= 0xFCu;
                  *(_BYTE *)(v101 + 36) &= 0xFCu;
                  v101 += 48;
                  *(_QWORD *)(v101 - 48) = 0;
                  *(_QWORD *)(v101 - 24) = 0;
                  *(_QWORD *)(v101 - 8) = 0;
                }
                while ( v101 != v102 );
                v103 = v55;
                if ( ((48 * (_BYTE)v99) & 0x10) == 0 || (v103 = v55 + 48, *(_DWORD *)(v55 + 16) = 0, v55 + 48 != v102) )
                {
                  do
                  {
                    *(_DWORD *)(v103 + 16) = 0;
                    v103 += 96;
                    *(_DWORD *)(v103 - 32) = 0;
                  }
                  while ( v103 != v102 );
                }
                v104 = v55;
                if ( ((48 * (_BYTE)v99) & 0x10) == 0 || (v104 = v55 + 48, *(_DWORD *)(v55 + 32) = 1, v55 + 48 != v102) )
                {
                  do
                  {
                    *(_DWORD *)(v104 + 32) = 1;
                    v104 += 96;
                    *(_DWORD *)(v104 - 16) = 1;
                  }
                  while ( v104 != v102 );
                }
              }
              v105 = (_DWORD *)v14[1];
              v54 = v151 - 1;
              v106 = *((unsigned int *)v14 + 4);
              v56 = v55 + v145;
              v107 = &v105[12 * v106];
              if ( v105 != v107 )
              {
                do
                {
                  while ( v105[1] != 2 )
                  {
                    v105 += 12;
                    if ( v107 == v105 )
                      goto LABEL_140;
                  }
                  v108 = 48LL * (*v105 & v54);
                  v109 = v55 + v108;
                  if ( v145 == v108 )
                  {
LABEL_154:
                    if ( v55 == v109 )
                    {
LABEL_166:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v110 = v55;
                    while ( *(_DWORD *)(v110 + 4) )
                    {
                      v110 += 48;
                      if ( v109 == v110 )
                        goto LABEL_166;
                    }
                  }
                  else
                  {
                    v110 = v55 + v108;
                    while ( *(_DWORD *)(v110 + 4) )
                    {
                      v110 += 48;
                      if ( v56 == v110 )
                        goto LABEL_154;
                    }
                  }
                  *(_DWORD *)v110 = *v105;
                  v111 = v105[2];
                  v105 += 12;
                  *(_DWORD *)(v110 + 4) = 2;
                  *(_DWORD *)(v110 + 8) = v111;
                  v112 = *(_DWORD *)(v110 + 16);
                  *(_DWORD *)(v110 + 16) = *(v105 - 8);
                  v113 = *((_QWORD *)v105 - 3);
                  *(v105 - 8) = v112;
                  v114 = *(_QWORD *)(v110 + 24);
                  *(_QWORD *)(v110 + 24) = v113;
                  v115 = *((_BYTE *)v105 - 28);
                  *((_QWORD *)v105 - 3) = v114;
                  LOBYTE(v114) = *(_BYTE *)(v110 + 20);
                  *(_BYTE *)(v110 + 20) = v115 & 2 | v114 & 0xFD;
                  LOBYTE(v114) = v114 & 2 | *(_BYTE *)(v105 - 7) & 0xFD;
                  *((_BYTE *)v105 - 28) = v114;
                  v116 = *(_BYTE *)(v110 + 20);
                  *(_BYTE *)(v110 + 20) = v114 & 1 | v116 & 0xFE;
                  LODWORD(v113) = *(v105 - 4);
                  *((_BYTE *)v105 - 28) = v116 & 1 | *(_BYTE *)(v105 - 7) & 0xFE;
                  LODWORD(v114) = *(_DWORD *)(v110 + 32);
                  *(_DWORD *)(v110 + 32) = v113;
                  v117 = *((_QWORD *)v105 - 1);
                  *(v105 - 4) = v114;
                  v118 = *(_QWORD *)(v110 + 40);
                  *(_QWORD *)(v110 + 40) = v117;
                  v119 = *((_BYTE *)v105 - 12);
                  *((_QWORD *)v105 - 1) = v118;
                  LOBYTE(v118) = *(_BYTE *)(v110 + 36);
                  *(_BYTE *)(v110 + 36) = v119 & 2 | v118 & 0xFD;
                  LOBYTE(v118) = v118 & 2 | *(_BYTE *)(v105 - 3) & 0xFD;
                  *((_BYTE *)v105 - 12) = v118;
                  v120 = *(_BYTE *)(v110 + 36) & 1;
                  *(_BYTE *)(v110 + 36) = v118 & 1 | *(_BYTE *)(v110 + 36) & 0xFE;
                  *((_BYTE *)v105 - 12) = v120 | *(_BYTE *)(v105 - 3) & 0xFE;
                }
                while ( v107 != v105 );
LABEL_140:
                v106 = *((unsigned int *)v14 + 4);
                v107 = (_DWORD *)v14[1];
              }
              if ( v107 )
              {
                if ( (_DWORD)v106 )
                {
                  v146 = v15;
                  v154 = v55;
                  v156 = v107;
                  v158 = v151 - 1;
                  v121 = (char *)&v107[12 * v106];
                  v159 = v56;
                  v160 = v151;
                  v152 = v14;
                  v122 = (char *)v107;
                  do
                  {
                    v123 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v122 + 16);
                    v124 = v122 + 32;
                    v122 += 48;
                    sub_182CBA0(v123, v124);
                  }
                  while ( v121 != v122 );
                  v15 = v146;
                  v14 = v152;
                  v55 = v154;
                  v107 = v156;
                  v54 = v158;
                  v56 = v159;
                  v100 = v160;
                }
                v157 = v100;
                v155 = v56;
                v153 = v54;
                v147 = v55;
                sub_186B220(v107);
                v55 = v147;
                v54 = v153;
                v56 = v155;
                v100 = v157;
              }
              v14[1] = v55;
              *((_DWORD *)v14 + 4) = v100;
              *((_DWORD *)v14 + 6) = 0;
            }
            else
            {
              v54 = v52 - 1;
              v55 = v14[1];
              v137 = 48 * v52;
              v56 = v55 + 48 * v52;
            }
            v57 = v161[0];
            v58 = 48LL * (v161[0] & v54);
            v59 = v55 + v58;
            if ( v58 != v137 )
            {
              v60 = v55 + v58;
              v61 = 0;
              while ( 1 )
              {
                v62 = *(_DWORD *)(v60 + 4);
                if ( v62 == 2 )
                {
                  if ( v161[0] == *(_DWORD *)v60 && v161[0] == *(_DWORD *)(v60 + 8) )
                  {
                    *(_DWORD *)(v60 + 8) = v161[0];
                    v63 = *(_DWORD *)(v60 + 16);
                    *(_DWORD *)(v60 + 16) = v162;
                    LODWORD(v162) = v63;
                    v64 = *(_QWORD *)(v60 + 24);
                    *(_QWORD *)(v60 + 24) = v163;
                    v163 = v64;
                    v65 = *(_BYTE *)(v60 + 20);
                    *(_BYTE *)(v60 + 20) = BYTE4(v162) & 2 | v65 & 0xFD;
                    BYTE4(v162) = v65 & 2 | BYTE4(v162) & 0xFD;
                    v66 = *(_BYTE *)(v60 + 20);
                    *(_BYTE *)(v60 + 20) = v66 & 0xFE | BYTE4(v162) & 1;
                    BYTE4(v162) = v66 & 1 | BYTE4(v162) & 0xFE;
                    LODWORD(v64) = *(_DWORD *)(v60 + 32);
                    *(_DWORD *)(v60 + 32) = v164;
                    LODWORD(v164) = v64;
                    v67 = *(_QWORD *)(v60 + 40);
                    *(_QWORD *)(v60 + 40) = v165;
                    v165 = v67;
                    v68 = *(_BYTE *)(v60 + 36);
                    *(_BYTE *)(v60 + 36) = BYTE4(v164) & 2 | v68 & 0xFD;
                    BYTE4(v164) = v68 & 2 | BYTE4(v164) & 0xFD;
                    v69 = *(_BYTE *)(v60 + 36) & 1;
                    *(_BYTE *)(v60 + 36) = *(_BYTE *)(v60 + 36) & 0xFE | BYTE4(v164) & 1;
                    BYTE4(v164) = v69 | BYTE4(v164) & 0xFE;
                    *(_DWORD *)(v60 + 4) = 2;
                    goto LABEL_79;
                  }
                }
                else
                {
                  if ( !v62 )
                  {
                    if ( v61 )
                      goto LABEL_118;
                    v61 = v60;
                    goto LABEL_119;
                  }
                  v61 = v60;
                }
                v60 += 48;
                if ( v60 == v56 )
                  goto LABEL_83;
              }
            }
            v61 = 0;
            while ( 1 )
            {
LABEL_83:
              if ( v59 == v55 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v71 = *(_DWORD *)(v55 + 4);
              if ( v71 == 2 )
              {
                if ( v161[0] == *(_DWORD *)v55 && v161[0] == *(_DWORD *)(v55 + 8) )
                {
                  *(_DWORD *)(v55 + 8) = v161[0];
                  v72 = *(_DWORD *)(v55 + 16);
                  *(_DWORD *)(v55 + 16) = v162;
                  LODWORD(v162) = v72;
                  v73 = *(_QWORD *)(v55 + 24);
                  *(_QWORD *)(v55 + 24) = v163;
                  v163 = v73;
                  LOBYTE(v73) = *(_BYTE *)(v55 + 20);
                  *(_BYTE *)(v55 + 20) = BYTE4(v162) & 2 | v73 & 0xFD;
                  BYTE4(v162) = v73 & 2 | BYTE4(v162) & 0xFD;
                  v74 = *(_BYTE *)(v55 + 20);
                  *(_BYTE *)(v55 + 20) = v74 & 0xFE | BYTE4(v162) & 1;
                  BYTE4(v162) = v74 & 1 | BYTE4(v162) & 0xFE;
                  LODWORD(v73) = *(_DWORD *)(v55 + 32);
                  *(_DWORD *)(v55 + 32) = v164;
                  LODWORD(v164) = v73;
                  v75 = *(_QWORD *)(v55 + 40);
                  *(_QWORD *)(v55 + 40) = v165;
                  v165 = v75;
                  LOBYTE(v75) = *(_BYTE *)(v55 + 36);
                  *(_BYTE *)(v55 + 36) = BYTE4(v164) & 2 | v75 & 0xFD;
                  BYTE4(v164) = v75 & 2 | BYTE4(v164) & 0xFD;
                  v76 = *(_BYTE *)(v55 + 36) & 1;
                  *(_BYTE *)(v55 + 36) = *(_BYTE *)(v55 + 36) & 0xFE | BYTE4(v164) & 1;
                  BYTE4(v164) = v76 | BYTE4(v164) & 0xFE;
                  *(_DWORD *)(v55 + 4) = 2;
                  goto LABEL_79;
                }
              }
              else
              {
                if ( !v71 )
                {
                  if ( v61 )
LABEL_118:
                    --*((_DWORD *)v14 + 6);
                  else
                    v61 = v55;
LABEL_119:
                  *(_DWORD *)(v61 + 8) = v57;
                  v92 = *(_DWORD *)(v61 + 16);
                  *(_DWORD *)(v61 + 16) = v162;
                  LODWORD(v162) = v92;
                  v93 = *(_QWORD *)(v61 + 24);
                  *(_QWORD *)(v61 + 24) = v163;
                  v163 = v93;
                  v94 = *(_BYTE *)(v61 + 20);
                  *(_BYTE *)(v61 + 20) = BYTE4(v162) & 2 | v94 & 0xFD;
                  BYTE4(v162) = v94 & 2 | BYTE4(v162) & 0xFD;
                  v95 = *(_BYTE *)(v61 + 20);
                  *(_BYTE *)(v61 + 20) = BYTE4(v162) & 1 | v95 & 0xFE;
                  BYTE4(v162) = v95 & 1 | BYTE4(v162) & 0xFE;
                  LODWORD(v93) = *(_DWORD *)(v61 + 32);
                  *(_DWORD *)(v61 + 32) = v164;
                  LODWORD(v164) = v93;
                  v96 = *(_QWORD *)(v61 + 40);
                  *(_QWORD *)(v61 + 40) = v165;
                  v165 = v96;
                  v97 = *(_BYTE *)(v61 + 36);
                  *(_BYTE *)(v61 + 36) = BYTE4(v164) & 2 | v97 & 0xFD;
                  BYTE4(v164) = v97 & 2 | BYTE4(v164) & 0xFD;
                  v98 = *(_BYTE *)(v61 + 36) & 1;
                  *(_BYTE *)(v61 + 36) = BYTE4(v164) & 1 | *(_BYTE *)(v61 + 36) & 0xFE;
                  BYTE4(v164) = v98 | BYTE4(v164) & 0xFE;
                  *(_DWORD *)(v61 + 4) = 2;
                  *(_DWORD *)v61 = v57;
                  ++*((_DWORD *)v14 + 5);
                  goto LABEL_79;
                }
                v61 = v55;
              }
              v55 += 48;
            }
          }
          v27 = &v21[(unsigned __int64)v25 / 4];
          while ( 1 )
          {
            v28 = v27[1];
            if ( v28 == 2 )
            {
              if ( v20 == *v27 && v20 == v27[2] )
              {
LABEL_29:
                v144 = v27;
                v141 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v162);
                sub_182CBA0(v141, &v164);
                v29 = v144;
                v30 = *(_DWORD *)(v17 + 16);
                v31 = qword_1C7F2C0;
                v32 = v144 + 4;
                if ( v30 )
                {
                  if ( v144[4] )
                  {
                    if ( (v144[9] & 1) != 0
                      || v144[8] != 1
                      || (*(_BYTE *)(v17 + 36) & 1) != 0
                      || *(_DWORD *)(v17 + 32) != 1 )
                    {
                      sub_1851D20(qword_1C7F2C0, v32, v136, v144 + 4);
                      v29 = v144;
                    }
                    else
                    {
                      v142 = qword_1C7F2C0;
                      sub_1831A80(qword_1C7F2C0, v32, v136, v144 + 4);
                      sub_182CBA0(v142, v144 + 8);
                      v29 = v144;
                      *((_BYTE *)v144 + 36) &= ~1u;
                      v144[8] = 1;
                    }
                    goto LABEL_34;
                  }
                  if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
                  {
                    v140 = qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, v32, v17 + 16);
                    v29 = v144;
                    v31 = v140;
                  }
                  else
                  {
                    *((_BYTE *)v144 + 20) &= ~1u;
                    v144[4] = v30;
                  }
                  if ( (*(_BYTE *)(v17 + 36) & 1) == 0 )
                  {
                    v90 = *(_DWORD *)(v17 + 32);
                    *((_BYTE *)v29 + 36) &= ~1u;
                    v29[8] = v90;
                    goto LABEL_34;
                  }
                  v138 = v29;
                  sub_182C690(v31, v29 + 8, v17 + 32);
LABEL_152:
                  v29 = v138;
                  goto LABEL_34;
                }
                v88 = *((_BYTE *)v144 + 20);
                if ( (v88 & 1) != 0 )
                {
                  v139 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, v32, v144 + 4);
                  v29 = v144;
                  v31 = v139;
                }
                else
                {
                  *((_BYTE *)v144 + 20) = v88 & 0xFE;
                }
                v89 = *((_BYTE *)v29 + 36);
                if ( (v89 & 1) != 0 )
                {
                  v138 = v29;
                  sub_182C690(v31, v29 + 8, v29 + 8);
                  goto LABEL_152;
                }
                *((_BYTE *)v29 + 36) = v89 & 0xFE;
LABEL_34:
                if ( !v29[4] )
                {
                  v77 = *((unsigned int *)v14 + 4);
                  v78 = (_DWORD *)v14[1];
                  v161[0] = v20;
                  v162 = 0;
                  v163 = 0;
                  v79 = v77 - 1;
                  v77 *= 48;
                  v164 = 1;
                  v80 = (_DWORD *)((char *)v78 + v77);
                  v165 = 0;
                  v81 = 48LL * (v20 & v79);
                  v82 = &v78[(unsigned __int64)v81 / 4];
                  if ( v81 != v77 )
                  {
                    for ( i = &v78[(unsigned __int64)v81 / 4]; v80 != i; i += 12 )
                    {
                      v84 = i[1];
                      if ( v84 == 2 )
                      {
                        if ( v20 == *i && v20 == i[2] )
                        {
LABEL_95:
                          v85 = i + 12;
                          if ( v80 == i + 12 )
                            v85 = v78;
                          v86 = *((unsigned int *)v14 + 5);
                          v87 = v86 - 1;
                          if ( v85[1] )
                          {
                            i[1] = 1;
                            v126 = *((_DWORD *)v14 + 6);
                            *((_DWORD *)v14 + 5) = v87;
                            v127 = v126 + 1;
                            if ( v87 < 0x40 )
                              v87 = 64;
                            *((_DWORD *)v14 + 6) = v127;
                            if ( v87 < v127 && !(unsigned __int8)sub_186AF10(v86) )
                            {
                              v143 = *((_DWORD *)v14 + 4);
                              v128 = sub_186B270(48LL * v143);
                              v129 = v128;
                              if ( v143 )
                              {
                                v130 = v128;
                                v131 = v128 + 48LL * v143;
                                do
                                {
                                  *(_BYTE *)(v130 + 20) &= 0xFCu;
                                  *(_BYTE *)(v130 + 36) &= 0xFCu;
                                  v130 += 48;
                                  *(_QWORD *)(v130 - 48) = 0;
                                  *(_QWORD *)(v130 - 24) = 0;
                                  *(_QWORD *)(v130 - 8) = 0;
                                }
                                while ( v130 != v131 );
                                v132 = v129;
                                if ( (((_BYTE)v131 - (_BYTE)v129) & 0x10) == 0
                                  || (v132 = v129 + 48, *(_DWORD *)(v129 + 16) = 0, v129 + 48 != v131) )
                                {
                                  do
                                  {
                                    *(_DWORD *)(v132 + 16) = 0;
                                    v132 += 96;
                                    *(_DWORD *)(v132 - 32) = 0;
                                  }
                                  while ( v132 != v131 );
                                }
                                v133 = v129;
                                if ( (((_BYTE)v131 - (_BYTE)v129) & 0x10) == 0
                                  || (v133 = v129 + 48, *(_DWORD *)(v129 + 32) = 1, v129 + 48 != v131) )
                                {
                                  do
                                  {
                                    *(_DWORD *)(v133 + 32) = 1;
                                    v133 += 96;
                                    *(_DWORD *)(v133 - 16) = 1;
                                  }
                                  while ( v133 != v131 );
                                }
                              }
                              sub_83E370(v14[1], *((unsigned int *)v14 + 4), v129, *((unsigned int *)v14 + 4));
                              v134 = (char *)v14[1];
                              if ( v134 )
                                sub_828DB0(v134, *((_DWORD *)v14 + 4));
                              v14[1] = v129;
                              *((_DWORD *)v14 + 6) = 0;
                            }
                          }
                          else
                          {
                            i[1] = 0;
                            *((_DWORD *)v14 + 5) = v87;
                          }
                          goto LABEL_79;
                        }
                      }
                      else if ( !v84 )
                      {
                        goto LABEL_79;
                      }
                    }
                  }
                  if ( v78 != v82 )
                  {
                    for ( i = v78; v82 != i; i += 12 )
                    {
                      v91 = i[1];
                      if ( v91 == 2 )
                      {
                        if ( v20 == *i && v20 == i[2] )
                          goto LABEL_95;
                      }
                      else if ( !v91 )
                      {
                        break;
                      }
                    }
                  }
LABEL_79:
                  v70 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v162);
                  sub_182CBA0(v70, &v164);
                }
LABEL_35:
                v33 = v17 + 48;
                if ( v19 == v17 + 48 )
                  goto LABEL_40;
                while ( 1 )
                {
                  v17 = v33;
                  if ( *(_DWORD *)(v33 + 4) == 2 )
                    break;
                  v33 += 48;
                  if ( v19 == v33 )
                    goto LABEL_40;
                }
                if ( v19 == v33 )
                  goto LABEL_40;
                goto LABEL_21;
              }
            }
            else if ( !v28 )
            {
LABEL_64:
              v125 = qword_1C7F2C0;
              goto LABEL_65;
            }
            v27 += 12;
            if ( v24 == v27 )
              goto LABEL_56;
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 792) = 0;
    }
  }
LABEL_45:
  sub_828E50((int **)(a1 + 800), a2 + 1);
  sub_828E50((int **)(a1 + 720), a2 + 1);
  v37 = *(_DWORD **)(a1 + 792);
  if ( !v37 || (v38 = &v37[18 * *(v37 - 1)], v38 == v37) )
  {
    *(_QWORD *)v161 = 0;
    return sub_82F770(a1, 4u, (__int64 *)v161, 0);
  }
  else
  {
    v39 = sub_831BA0((_QWORD *)a1, *(_DWORD **)(a1 + 792));
    v40 = (_QWORD *)sub_186B270(0x10u);
    v41 = v39 ^ 1;
    *v40 = 2;
    v42 = (unsigned int *)(v40 + 1);
    v43 = v42;
    while ( 1 )
    {
      v37 += 18;
      *v42 = v41;
      ++*(v43 - 1);
      if ( v38 == v37 )
        break;
      while ( 1 )
      {
        v41 = sub_831BA0((_QWORD *)a1, v37) ^ 1;
        v44 = *(v43 - 1);
        if ( (_DWORD)v44 == *(v43 - 2) )
          break;
        v37 += 18;
        v43[v44] = v41;
        ++*(v43 - 1);
        if ( v38 == v37 )
          goto LABEL_51;
      }
      v46 = (unsigned int)(3 * v44 + 1) >> 1;
      v47 = 4 * v46 + 8;
      if ( 4 * (int)v44 + 8 >= v47 || (unsigned int)v44 >= v46 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v161, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v161);
        sub_233E40((__int64)v161);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v43 - 2, v47);
      v43 = v48 + 2;
      *v48 = v46;
      v42 = &v48[v48[1] + 2];
    }
LABEL_51:
    *(_QWORD *)v161 = v43;
    sub_82F770(a1, 4u, (__int64 *)v161, 0);
    return sub_186B220(v43 - 2);
  }
}

