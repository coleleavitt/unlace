__int64 __fastcall sub_CC7260(char *a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  char *v5; // rbp
  __int64 *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // r9
  char *v13; // r10
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  void *v16; // r12
  void *v17; // rbx
  __int64 v18; // r9
  char *v19; // rax
  char *v20; // r15
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // r8
  int v24; // r9d
  char *v25; // r10
  __int64 *v26; // rdi
  __int64 v27; // rcx
  _DWORD *v28; // r15
  __int64 *v29; // rsi
  int v30; // eax
  _DWORD *v31; // r14
  __int64 v32; // r9
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // r12
  char *v36; // r15
  char **v37; // r8
  int v38; // r9d
  char *v39; // rax
  _DWORD *v40; // rdx
  __int64 v41; // r14
  char v42; // al
  char v43; // al
  void *v44; // r14
  __int64 v45; // rbx
  _BYTE *v46; // rax
  char *v47; // rdx
  bool v48; // al
  void *v49; // rbx
  unsigned int v50; // r12d
  __int64 *v51; // rbx
  __int64 *v52; // r14
  void *v53; // rbp
  char *v54; // rsi
  char v56; // al
  __int64 v57; // r9
  _BYTE *v58; // rbx
  int v59; // r15d
  unsigned int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // rcx
  unsigned int v63; // r12d
  _BYTE *v64; // rdi
  unsigned int v65; // esi
  __int64 v66; // rcx
  unsigned int v67; // ecx
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 *v74; // rsi
  _DWORD *v75; // r15
  __int64 v76; // r12
  __int64 v77; // r14
  __int64 v78; // rdx
  void *v80; // r12
  char *v81; // rbx
  int v82; // eax
  int v83; // eax
  void *v84; // rbx
  __int64 v85; // rbx
  unsigned int v86; // r15d
  int v87; // r12d
  unsigned int v88; // r8d
  void *v89; // rdi
  char **v90; // rdx
  int v91; // ecx
  void *v92; // r12
  char *v93; // r15
  int v94; // eax
  void *v95; // r15
  __int64 v96; // r15
  _DWORD *v97; // rdx
  bool v98; // al
  __int64 v99; // r12
  __int64 v100; // rbx
  int v101; // r14d
  char *v102; // rcx
  __int64 v103; // rsi
  _DWORD *v104; // rax
  int v105; // ecx
  int v106; // r8d
  int v107; // r9d
  __int64 v108; // rdi
  int v109; // esi
  __int64 v110; // rax
  __int64 v111; // rsi
  int v112; // edx
  char *v113; // rax
  _QWORD *v114; // rdi
  unsigned __int64 v115; // rax
  __int64 v116; // r8
  int v117; // edx
  __int64 v118; // rsi
  int i; // ecx
  char *v120; // rax
  __int64 v121; // rsi
  char *v122; // rbx
  void *v123; // rdi
  int v124; // eax
  __int64 v125; // rbp
  char *v126; // rbx
  __int64 v127; // rsi
  void *v128; // r12
  char *v129; // rsi
  char v130; // di
  __int64 v131; // rdx
  char v132; // di
  __int64 v133; // rdx
  int v134; // eax
  void *v135; // r15
  char *v136; // rbx
  void *v137; // rbx
  char *v138; // rcx
  _BYTE *v139; // rsi
  char *v140; // r8
  char v141; // r9
  int v142; // r8d
  __int64 v143; // r12
  __int64 v144; // r14
  __int64 v145; // rax
  int v146; // ecx
  int v147; // r8d
  int v148; // r9d
  bool v149; // zf
  char *v150; // rbx
  char *v151; // rbp
  __int64 v152; // rsi
  __int64 v153; // rdi
  unsigned __int64 v154; // rax
  __int64 v155; // r8
  char *v156; // [rsp+0h] [rbp-398h]
  char *v157; // [rsp+8h] [rbp-390h]
  int v158; // [rsp+8h] [rbp-390h]
  _BYTE *v159; // [rsp+10h] [rbp-388h]
  __int64 v160; // [rsp+10h] [rbp-388h]
  __int64 *v161; // [rsp+18h] [rbp-380h]
  __int64 v162; // [rsp+18h] [rbp-380h]
  char *v163; // [rsp+18h] [rbp-380h]
  int v164; // [rsp+18h] [rbp-380h]
  int v165; // [rsp+18h] [rbp-380h]
  int v166; // [rsp+18h] [rbp-380h]
  __int64 *v167; // [rsp+20h] [rbp-378h]
  __int64 v168; // [rsp+28h] [rbp-370h]
  char **v169; // [rsp+30h] [rbp-368h]
  unsigned int v170; // [rsp+30h] [rbp-368h]
  char *v171; // [rsp+38h] [rbp-360h]
  __int64 *v172; // [rsp+40h] [rbp-358h]
  char *v173; // [rsp+48h] [rbp-350h]
  unsigned int v175; // [rsp+58h] [rbp-340h]
  unsigned int v176; // [rsp+5Ch] [rbp-33Ch]
  char v177; // [rsp+7Eh] [rbp-31Ah] BYREF
  char v178; // [rsp+7Fh] [rbp-319h] BYREF
  __int64 v179; // [rsp+80h] [rbp-318h] BYREF
  __int64 v180; // [rsp+88h] [rbp-310h]
  void *ptr; // [rsp+90h] [rbp-308h]
  __int64 v182; // [rsp+98h] [rbp-300h]
  _BYTE v183[16]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v184; // [rsp+B0h] [rbp-2E8h] BYREF
  void *v185; // [rsp+B8h] [rbp-2E0h]
  __int64 v186; // [rsp+C0h] [rbp-2D8h] BYREF
  _QWORD v187[17]; // [rsp+C8h] [rbp-2D0h] BYREF
  void *v188; // [rsp+150h] [rbp-248h] BYREF
  __int64 v189; // [rsp+158h] [rbp-240h]
  __int64 v190; // [rsp+160h] [rbp-238h] BYREF
  __int64 v191; // [rsp+168h] [rbp-230h]

  v3 = *a3;
  v169 = (char **)a3;
  if ( !*a3 )
    return 0;
  v4 = *((unsigned int *)v3 - 1);
  v5 = a1;
  v176 = *(_DWORD *)(v3[(unsigned int)(v4 - 1)] + 24);
  LODWORD(v167) = v176 - 1;
  v175 = 1 << (v176 - 1);
  if ( (unsigned int)v4 < v175 )
    return 0;
  v6 = &v3[v4];
  if ( v3 == v6 )
    return 0;
  while ( 1 )
  {
    v7 = *v3 + 32;
    v168 = *v3;
    v8 = 8LL * *(unsigned int *)(*v3 + 24);
    v9 = v7 + v8;
    if ( v8 )
      break;
LABEL_76:
    if ( v6 == ++v3 )
      return 0;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)v7;
    if ( *(_WORD *)(*(_QWORD *)v7 + 4LL) )
      goto LABEL_6;
    v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
    if ( !v11 || *v11 || v11[1] != 2 || *(_DWORD *)(v10 + 24) != 2 )
      goto LABEL_6;
    v12 = *(_QWORD *)(v10 + 32);
    v13 = *(char **)(v10 + 40);
    if ( !*(_WORD *)(v12 + 4) && !*(_DWORD *)(v12 + 24) )
    {
      v14 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( !v14 || *v14 == -1 )
        break;
    }
LABEL_16:
    if ( !*((_WORD *)v13 + 2) && !*((_DWORD *)v13 + 6) )
    {
      v15 = *(_DWORD **)(*((_QWORD *)v13 + 2) + 24LL);
      if ( !v15 || *v15 == -1 )
      {
        v188 = nullptr;
        v189 = 0;
        v190 = 1;
        v191 = 0;
        v159 = a1 + 32;
        if ( (unsigned __int8)sub_1666AE0(a1 + 32, v12, &v188, &v184) && !(_DWORD)v188 )
          goto LABEL_22;
        v157 = (char *)qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v188);
        sub_182CBA0(v157, &v190);
      }
    }
LABEL_6:
    v7 += 8;
    if ( v9 == v7 )
      goto LABEL_76;
  }
  v162 = v12;
  v188 = nullptr;
  v189 = 0;
  v190 = 1;
  v191 = 0;
  v159 = a1 + 32;
  v157 = v13;
  v56 = sub_1666AE0(a1 + 32, v13, &v188, &v184);
  v57 = v162;
  if ( !v56 || (_DWORD)v188 )
  {
    v163 = v157;
    v160 = v57;
    v157 = (char *)qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v188);
    sub_182CBA0(v157, &v190);
    v12 = v160;
    v13 = v163;
    goto LABEL_16;
  }
LABEL_22:
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v188);
  v172 = &v190;
  sub_182CBA0(v16, &v190);
  ptr = v183;
  v182 = 0x1000000000LL;
  v188 = &v190;
  v189 = 0x1000000000LL;
  if ( v175 )
  {
    v58 = v183;
    v59 = 0;
    v60 = 16;
    v61 = 0;
    while ( 1 )
    {
      v62 = v61++;
      v63 = v59 + 1;
      v58[v62] = 0;
      LODWORD(v182) = v61;
      if ( v175 == v59 + 1 )
      {
        v118 = (unsigned int)v189;
        v184 = 0;
        v185 = nullptr;
        v186 = 1;
        v187[0] = 0;
        if ( (unsigned int)v189 >= v175 )
        {
          if ( v175 < (unsigned int)v189 )
          {
            v134 = v189;
            do
            {
              v135 = qword_1C7F2C0;
              ++v63;
              v136 = (char *)v188 + 32 * (unsigned int)(v134 - 1);
              sub_182CBA0(qword_1C7F2C0, v136);
              sub_182CBA0(v135, v136 + 16);
              v134 = v189 - 1;
              LODWORD(v189) = v189 - 1;
            }
            while ( v63 < (unsigned int)v118 );
          }
        }
        else
        {
          for ( i = v189; ; ++i )
          {
            if ( (unsigned int)v118 < HIDWORD(v189) )
            {
              v120 = (char *)v188;
            }
            else
            {
              v164 = i;
              LODWORD(v157) = 2 * HIDWORD(v189);
              v120 = (char *)sub_186B270(32LL * (unsigned int)(2 * HIDWORD(v189)));
              v118 = (unsigned int)v189;
              i = v164;
              if ( (_DWORD)v189 )
              {
                v171 = v120;
                v173 = v5;
                v125 = 0;
                v126 = v120;
                do
                {
                  v127 = v125;
                  v128 = qword_1C7F2C0;
                  ++v125;
                  v126 += 32;
                  v129 = (char *)v188 + 32 * v127;
                  v130 = v129[4];
                  *((_DWORD *)v126 - 8) = *(_DWORD *)v129;
                  *(v126 - 28) = v130 & 3 | *(v126 - 28) & 0xFC;
                  v131 = *((_QWORD *)v129 + 1);
                  *((_QWORD *)v129 + 1) = 0;
                  *((_QWORD *)v126 - 3) = v131;
                  v132 = v129[20];
                  *((_DWORD *)v126 - 4) = *((_DWORD *)v129 + 4);
                  *(v126 - 12) = v132 & 3 | *(v126 - 12) & 0xFC;
                  v133 = *((_QWORD *)v129 + 3);
                  *((_QWORD *)v129 + 3) = 0;
                  *((_QWORD *)v126 - 1) = v133;
                  sub_182CBA0(v128, v129);
                  sub_182CBA0(v128, v129 + 16);
                  v118 = (unsigned int)v189;
                }
                while ( (unsigned int)v125 < (unsigned int)v189 );
                i = v164;
                v120 = v171;
                v5 = v173;
              }
              if ( v188 != &v190 && v188 )
              {
                v171 = v120;
                v165 = i;
                sub_186B220(v188);
                v118 = (unsigned int)v189;
                v120 = v171;
                i = v165;
              }
              v188 = v120;
              HIDWORD(v189) = (_DWORD)v157;
            }
            v121 = 32 * v118;
            v122 = &v120[v121];
            *(_QWORD *)v122 = 0;
            v123 = qword_1C7F2C0;
            *((_QWORD *)v122 + 1) = 0;
            *((_QWORD *)v122 + 2) = 1;
            *((_QWORD *)v122 + 3) = 0;
            if ( (v184 & 0x100000000LL) != 0 )
            {
              v166 = i;
              LODWORD(v157) = (_DWORD)v123;
              sub_182C690(v123, &v120[v121], &v184);
              i = v166;
            }
            else
            {
              *(_DWORD *)v122 = v184;
            }
            if ( (v186 & 0x100000000LL) != 0 )
            {
              LODWORD(v157) = i;
              sub_182C690(v123, v122 + 16, &v186);
              i = (int)v157;
            }
            else
            {
              v124 = v186;
              v122[20] &= ~1u;
              *((_DWORD *)v122 + 4) = v124;
            }
            v118 = (unsigned int)(v189 + 1);
            LODWORD(v189) = v189 + 1;
            if ( i == v59 )
              break;
          }
        }
        v137 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v184);
        v161 = &v186;
        sub_182CBA0(v137, &v186);
        v19 = *v169;
        if ( !*v169 )
          goto LABEL_159;
        v171 = &v19[8 * *((unsigned int *)v19 - 1)];
        if ( v171 == v19 )
          goto LABEL_159;
        goto LABEL_25;
      }
      if ( v61 >= v60 )
        break;
LABEL_84:
      ++v59;
    }
    LODWORD(v157) = 2 * v60;
    v58 = (_BYTE *)sub_186B270(2 * v60);
    v61 = v182;
    v64 = ptr;
    v60 = (unsigned int)v157;
    if ( (_DWORD)v182 )
    {
      if ( (unsigned int)(v182 - 1) <= 6 || (unsigned __int64)(v58 - ((_BYTE *)ptr + 1)) <= 0xE )
      {
        v138 = (char *)ptr;
        v139 = v58;
        v140 = (char *)ptr + (unsigned int)v182;
        do
        {
          v141 = *v138++;
          *v139++ = v141;
        }
        while ( v140 != v138 );
        goto LABEL_103;
      }
      v65 = v182;
      if ( (unsigned int)(v182 - 1) <= 0xE )
      {
        v67 = 0;
      }
      else
      {
        v66 = 0;
        do
        {
          *(__m128i *)&v58[v66] = _mm_loadu_si128((const __m128i *)&v64[v66]);
          v66 += 16;
        }
        while ( 16LL * (v61 >> 4) != v66 );
        v67 = v61 & 0xFFFFFFF0;
        if ( (v61 & 0xF) == 0 )
          goto LABEL_103;
        v65 = v61 - v67;
        if ( v61 - v67 - 1 <= 6 )
        {
LABEL_96:
          v58[v67] = v64[v67];
          v68 = v67 + 1;
          if ( (unsigned int)v68 < v61 )
          {
            v58[v68] = v64[v68];
            v69 = v67 + 2;
            if ( (unsigned int)v69 < v61 )
            {
              v58[v69] = v64[v69];
              v70 = v67 + 3;
              if ( (unsigned int)v70 < v61 )
              {
                v58[v70] = v64[v70];
                v71 = v67 + 4;
                if ( (unsigned int)v71 < v61 )
                {
                  v58[v71] = v64[v71];
                  v72 = v67 + 5;
                  if ( (unsigned int)v72 < v61 )
                  {
                    v73 = v67 + 6;
                    v58[v72] = v64[v72];
                    if ( (unsigned int)v73 < v61 )
                      v58[v73] = v64[v73];
                  }
                }
              }
            }
          }
          goto LABEL_103;
        }
      }
      *(_QWORD *)&v58[v67] = *(_QWORD *)&v64[v67];
      v67 += v65 & 0xFFFFFFF8;
      if ( (v65 & 7) != 0 )
        goto LABEL_96;
    }
LABEL_103:
    if ( v64 != v183 && v64 )
    {
      sub_186B220(v64);
      v61 = v182;
      v60 = (unsigned int)v157;
    }
    ptr = v58;
    HIDWORD(v182) = v60;
    goto LABEL_84;
  }
  v17 = qword_1C7F2C0;
  v184 = 0;
  v185 = nullptr;
  v186 = 1;
  v187[0] = 0;
  sub_182CBA0(qword_1C7F2C0, &v184);
  v161 = &v186;
  sub_182CBA0(v17, &v186);
  v19 = *v169;
  if ( !*v169 )
    goto LABEL_190;
  v171 = &v19[8 * *((unsigned int *)v19 - 1)];
  if ( v171 == v19 )
    goto LABEL_190;
LABEL_25:
  v20 = v19;
  v173 = &v178;
  while ( 2 )
  {
    v21 = *(_QWORD *)v20;
    v184 = 0;
    v186 = 1;
    v185 = nullptr;
    v22 = *(_DWORD *)(v168 + 24);
    v187[0] = 0;
    if ( v22 != *(_DWORD *)(v21 + 24) || !v22 )
      goto LABEL_65;
    v23 = v168;
    v24 = 1;
    v170 = 0;
    v25 = v20;
    v26 = (__int64 *)(v21 + 32);
LABEL_29:
    v27 = *(_QWORD *)(v23 + 32);
    if ( *(_WORD *)(v27 + 4) )
    {
      v74 = v26;
      v30 = 0;
      while ( 1 )
      {
        v78 = *v74;
        if ( *(_WORD *)(*v74 + 4) )
        {
          if ( v27 == v78 )
            goto LABEL_47;
          v76 = *(_QWORD *)v5;
          v77 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
          if ( v77 == v78 )
          {
            if ( *(_QWORD *)(v76 + 864) == v27 )
              goto LABEL_46;
            goto LABEL_121;
          }
          goto LABEL_120;
        }
        v75 = *(_DWORD **)(*(_QWORD *)(v78 + 16) + 24LL);
        if ( v75 )
        {
          if ( *v75 )
          {
            if ( v27 == v78 )
              goto LABEL_47;
            v76 = *(_QWORD *)v5;
            v77 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
            if ( v77 != v78 )
              goto LABEL_120;
          }
          else
          {
            if ( v75[1] == 2 )
              goto LABEL_121;
            if ( v27 == v78 )
              goto LABEL_47;
            v76 = *(_QWORD *)v5;
            v77 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
            if ( v77 != v78 )
            {
LABEL_136:
              if ( v75[1] == 8 && v27 == *(_QWORD *)(v78 + 32) )
              {
LABEL_46:
                v170 += v24;
                goto LABEL_47;
              }
              goto LABEL_120;
            }
          }
          if ( v27 == *(_QWORD *)(v76 + 864) )
            goto LABEL_46;
          if ( !*v75 )
            goto LABEL_136;
        }
        else
        {
          if ( v27 == v78 )
            goto LABEL_47;
          v76 = *(_QWORD *)v5;
          v77 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
          if ( v77 == v78 )
          {
            if ( v27 == *(_QWORD *)(v76 + 864) )
              goto LABEL_46;
            goto LABEL_121;
          }
        }
LABEL_120:
        if ( v27 == v77 && *(_QWORD *)(v76 + 864) == v78 )
          goto LABEL_46;
LABEL_121:
        ++v30;
        ++v74;
        if ( v22 == v30 )
          goto LABEL_65;
      }
    }
    v28 = *(_DWORD **)(*(_QWORD *)(v27 + 16) + 24LL);
    if ( v28 && !*v28 && v28[1] == 2 )
    {
LABEL_49:
      v23 += 8;
      if ( v168 + 8LL * v22 == v23 )
      {
        v35 = v170;
        v36 = v25;
        v37 = (char **)v26;
        v38 = 0;
        while ( 1 )
        {
          v39 = *v37;
          if ( !*((_WORD *)*v37 + 2) )
          {
            v40 = *(_DWORD **)(*((_QWORD *)v39 + 2) + 24LL);
            if ( v40 )
            {
              if ( !*v40 && v40[1] == 2 && *((_DWORD *)v39 + 6) == 2 )
              {
                LODWORD(v157) = v38;
                v169 = v37;
                v41 = *((_QWORD *)v39 + 5);
                v42 = sub_1666AE0(v159, *((_QWORD *)v39 + 4), &v184, &v178);
                v38 = (int)v157;
                if ( v42 )
                  break;
                v43 = sub_1666AE0(v159, v41, &v184, &v177);
                v38 = (int)v157;
                v37 = v169;
                if ( v43 )
                  break;
              }
            }
          }
          ++v38;
          ++v37;
          if ( v22 == v38 )
            goto LABEL_65;
        }
        v44 = qword_1C7F2C0;
        if ( v22 == v38 )
          goto LABEL_65;
        v45 = 32 * v35;
        v46 = (char *)ptr + v35;
        if ( *((_BYTE *)ptr + v35) )
        {
          v47 = (char *)v188 + v45;
          if ( (v184 & 0x100000000LL) != 0 || (v47[4] & 1) != 0 )
          {
            v157 = (char *)v188 + v45;
            v94 = sub_182C7B0(qword_1C7F2C0, &v184, v47);
            v47 = v157;
            v48 = v94 == 0;
          }
          else
          {
            v48 = (_DWORD)v184 == *(_DWORD *)v47;
          }
          if ( !v48 )
            goto LABEL_65;
          if ( !((v186 & 0x100000000LL) != 0 || (v47[20] & 1) != 0
               ? (unsigned int)sub_182C7B0(v44, &v186, v47 + 16) == 0
               : (_DWORD)v186 == *((_DWORD *)v47 + 4)) )
            goto LABEL_65;
          v46 = (char *)ptr + v35;
        }
        v80 = qword_1C7F2C0;
        v81 = (char *)v188 + v45;
        *v46 = 1;
        if ( (v184 & 0x100000000LL) != 0 )
        {
          sub_182C690(v80, v81, &v184);
        }
        else
        {
          v82 = v184;
          v81[4] &= ~1u;
          *(_DWORD *)v81 = v82;
        }
        if ( (v186 & 0x100000000LL) != 0 )
        {
          sub_182C690(v80, v81 + 16, &v186);
        }
        else
        {
          v83 = v186;
          v81[20] &= ~1u;
          *((_DWORD *)v81 + 4) = v83;
        }
        v84 = qword_1C7F2C0;
        v20 = v36 + 8;
        sub_182CBA0(qword_1C7F2C0, &v184);
        sub_182CBA0(v84, &v186);
        if ( v171 == v20 )
        {
          if ( v175 )
          {
LABEL_159:
            v85 = 0;
            while ( 1 )
            {
              v86 = v85;
              if ( !*((_BYTE *)ptr + v85) )
                goto LABEL_66;
              v87 = 0;
              v184 = 0;
              v88 = 1;
              v185 = nullptr;
              v186 = 1;
              v187[0] = 0;
              if ( v176 != 1 )
                break;
LABEL_174:
              v92 = qword_1C7F2C0;
              v93 = (char *)v188 + 32 * v85;
              if ( (v93[4] & 1) != 0 || (v184 & 0x100000000LL) != 0 )
              {
                if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, (char *)v188 + 32 * v85, &v184) )
                  goto LABEL_65;
              }
              else if ( *(_DWORD *)v93 != (_DWORD)v184 )
              {
                goto LABEL_65;
              }
              if ( (v93[20] & 1) != 0 || (v186 & 0x100000000LL) != 0 )
              {
                if ( (unsigned int)sub_182C7B0(v92, v93 + 16, &v186) )
                  goto LABEL_65;
              }
              else if ( *((_DWORD *)v93 + 4) != (_DWORD)v186 )
              {
                goto LABEL_65;
              }
              v95 = qword_1C7F2C0;
              ++v85;
              sub_182CBA0(qword_1C7F2C0, &v184);
              sub_182CBA0(v95, &v186);
              if ( v175 == v85 )
                goto LABEL_190;
            }
            while ( 2 )
            {
              if ( (v86 & 1) != 0 )
              {
                v89 = qword_1C7F2C0;
                v90 = (char **)((char *)v188 + 32 * v88);
                v91 = *(_DWORD *)v90;
                if ( *(_DWORD *)v90 )
                {
                  if ( (_DWORD)v184 )
                  {
                    if ( (v186 & 0x100000000LL) == 0
                      && (_DWORD)v186 == 1
                      && (*((_BYTE *)v90 + 20) & 1) == 0
                      && *((_DWORD *)v90 + 4) == 1 )
                    {
                      LODWORD(v169) = v88;
                      LODWORD(v157) = (_DWORD)qword_1C7F2C0;
                      sub_1831A80(qword_1C7F2C0, &v184, v90, &v184);
                      sub_182CBA0(v89, &v186);
                      BYTE4(v186) &= ~1u;
                      v88 = (unsigned int)v169;
                      LODWORD(v186) = 1;
                      goto LABEL_163;
                    }
                    LODWORD(v157) = v88;
                    sub_1851D20(qword_1C7F2C0, &v184, v90, &v184);
                  }
                  else
                  {
                    if ( (*((_BYTE *)v90 + 4) & 1) != 0 )
                    {
                      LODWORD(v171) = v88;
                      v169 = (char **)((char *)v188 + 32 * v88);
                      LODWORD(v157) = (_DWORD)qword_1C7F2C0;
                      sub_182C690(qword_1C7F2C0, &v184, v90);
                      v88 = (unsigned int)v171;
                      v90 = v169;
                    }
                    else
                    {
                      BYTE4(v184) &= ~1u;
                      LODWORD(v184) = v91;
                    }
                    if ( (*((_BYTE *)v90 + 20) & 1) == 0 )
                    {
                      v117 = *((_DWORD *)v90 + 4);
                      BYTE4(v186) &= ~1u;
                      LODWORD(v186) = v117;
                      goto LABEL_163;
                    }
                    LODWORD(v157) = v88;
                    sub_182C690(v89, &v186, v90 + 2);
                  }
                }
                else
                {
                  if ( (v184 & 0x100000000LL) != 0 )
                  {
                    LODWORD(v169) = v88;
                    LODWORD(v157) = (_DWORD)qword_1C7F2C0;
                    sub_182C690(qword_1C7F2C0, &v184, &v184);
                    v88 = (unsigned int)v169;
                  }
                  else
                  {
                    BYTE4(v184) &= ~1u;
                  }
                  if ( (v186 & 0x100000000LL) == 0 )
                  {
                    BYTE4(v186) &= ~1u;
                    goto LABEL_163;
                  }
                  LODWORD(v157) = v88;
                  sub_182C690(v89, &v186, &v186);
                }
                v88 = (unsigned int)v157;
              }
LABEL_163:
              v86 >>= 1;
              v88 *= 2;
              if ( (_DWORD)v167 == ++v87 )
                goto LABEL_174;
              continue;
            }
          }
LABEL_190:
          v96 = *(_QWORD *)v5;
          v185 = v187;
          v184 = v96;
          v186 = 0x1000000000LL;
          v97 = *(_DWORD **)(*(_QWORD *)(a2 + 40) + 24LL);
          v98 = 0;
          if ( v97 && *v97 == 5 )
            v98 = v97[1] == 0;
          if ( v176 )
          {
            v99 = v168;
            v100 = 0;
            v101 = 1;
            v157 = (char *)(v168 + 8LL * v176);
            LODWORD(v161) = v98;
            v167 = &v179;
            LODWORD(v168) = !v98;
            do
            {
              v103 = *(_QWORD *)(v99 + 32);
              if ( *(_WORD *)(v103 + 4)
                || (v104 = *(_DWORD **)(*(_QWORD *)(v103 + 16) + 24LL)) == nullptr
                || *v104
                || v104[1] != 2 )
              {
                v179 = v100;
                v180 = v96;
                sub_CC6700(v5, v103, &v179, (unsigned int)v161);
                v108 = *((_QWORD *)v5 + 5);
                v100 = v179;
                v96 = v180;
                v109 = (_DWORD)v188 + 32 * v101;
                if ( !v108 )
                {
                  LODWORD(v169) = (_DWORD)v188 + 32 * v101;
                  sub_16669E0(v159);
                  v108 = *((_QWORD *)v5 + 5);
                  v109 = (int)v169;
                }
                sub_166A700(v108, v109, v168, v105, v106, v107);
                v110 = sub_15E1B70(*((_QWORD *)v5 + 4));
                v111 = v110;
                if ( v110 )
                  ++*(_DWORD *)(v110 + 8);
                v112 = v186;
                if ( (unsigned int)v186 < HIDWORD(v186) )
                {
                  v102 = (char *)v185;
                }
                else
                {
                  LODWORD(v171) = v110;
                  LODWORD(v169) = 2 * HIDWORD(v186);
                  v113 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v186)));
                  v112 = v186;
                  v114 = v185;
                  v102 = v113;
                  if ( (_DWORD)v186 )
                  {
                    if ( (unsigned int)(v186 - 1) <= 2 || v113 == (char *)v185 + 8 )
                    {
                      v154 = 0;
                      v155 = 8LL * (unsigned int)v186;
                      do
                      {
                        v18 = v114[v154 / 8];
                        *(_QWORD *)&v102[v154] = v18;
                        v154 += 8LL;
                      }
                      while ( v155 != v154 );
                    }
                    else
                    {
                      v115 = 0;
                      v116 = 16LL * ((unsigned int)v186 >> 1);
                      do
                      {
                        *(__m128i *)&v102[v115] = _mm_loadu_si128((const __m128i *)&v114[v115 / 8]);
                        v115 += 16LL;
                      }
                      while ( v116 != v115 );
                      if ( (v112 & 1) != 0 )
                        *(_QWORD *)&v102[8 * (v112 & 0xFFFFFFFE)] = v114[v112 & 0xFFFFFFFE];
                    }
                  }
                  if ( v114 != v187 && v114 )
                  {
                    v173 = v102;
                    LODWORD(v171) = v111;
                    sub_186B220(v114);
                    v112 = v186;
                    v102 = v173;
                  }
                  v185 = v102;
                  HIDWORD(v186) = (_DWORD)v169;
                }
                v101 *= 2;
                *(_QWORD *)&v102[8 * v112] = v111;
                LODWORD(v186) = v112 + 1;
              }
              v99 += 8;
            }
            while ( v157 != (char *)v99 );
            v142 = (int)v185;
            if ( (_DWORD)v186 == 1 )
            {
              v143 = *(_QWORD *)v185;
LABEL_262:
              v144 = *((_QWORD *)v5 + 10);
              v145 = sub_15DC610(
                       *(_QWORD *)v5,
                       a2,
                       0,
                       0,
                       v142,
                       v18,
                       (int)v187,
                       (int)v157,
                       (int)v159,
                       (int)v161,
                       (int)v167,
                       v168,
                       (int)v169,
                       (int)v171,
                       (int)&v190,
                       v173);
              sub_1692DB0(v144, v145, v143, 0, 0);
              if ( v5[64] )
                sub_13333D0(*((_QWORD *)v5 + 9), a2, v143, v146, v147, v148);
              if ( v100 )
              {
                v149 = (*(_DWORD *)(v100 + 8))-- == 1;
                if ( v149 )
                  sub_15D7BC0(v96, v100);
              }
              v150 = (char *)v185;
              v151 = (char *)v185 + 8 * (unsigned int)v186;
              if ( v185 < v151 )
              {
                do
                {
                  v152 = *(_QWORD *)v150;
                  if ( *(_QWORD *)v150 )
                  {
                    v153 = v184;
                    v149 = (*(_DWORD *)(v152 + 8))-- == 1;
                    if ( v149 )
                      sub_15D7BC0(v153, v152);
                  }
                  v150 += 8;
                }
                while ( v150 < v151 );
                v150 = (char *)v185;
              }
              if ( v150 && v150 != v156 )
                sub_186B220(v150);
              v50 = 1;
              goto LABEL_67;
            }
          }
          else
          {
            v100 = 0;
          }
          v143 = sub_15E1AF0(*((_QWORD *)v5 + 4));
          goto LABEL_262;
        }
        continue;
      }
      goto LABEL_29;
    }
    break;
  }
  v158 = v24;
  v29 = v26;
  v30 = 0;
  while ( 2 )
  {
    v34 = *v29;
    if ( *(_WORD *)(*v29 + 4) || (v31 = *(_DWORD **)(*(_QWORD *)(v34 + 16) + 24LL)) == nullptr )
    {
      if ( v27 == v34 )
        goto LABEL_171;
      v32 = *(_QWORD *)v5;
      v33 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
      if ( v34 != v33 )
        goto LABEL_37;
      if ( v27 == *(_QWORD *)(v32 + 864) )
        goto LABEL_45;
      goto LABEL_38;
    }
    if ( *v31 )
    {
      if ( v27 == v34 )
        goto LABEL_171;
      v32 = *(_QWORD *)v5;
      v33 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
      if ( v34 != v33 )
        goto LABEL_37;
LABEL_142:
      if ( v27 == *(_QWORD *)(v32 + 864) )
        goto LABEL_45;
      if ( *v31 )
        goto LABEL_37;
LABEL_112:
      if ( v31[1] == 8 && v27 == *(_QWORD *)(v34 + 32) )
      {
LABEL_45:
        v24 = v158;
        goto LABEL_46;
      }
LABEL_37:
      if ( v27 == v33 && v34 == *(_QWORD *)(v32 + 864) )
        goto LABEL_45;
LABEL_38:
      if ( v28 && !*v28 && v28[1] == 8 && v34 == *(_QWORD *)(v27 + 32) )
        goto LABEL_45;
LABEL_40:
      ++v30;
      ++v29;
      if ( v22 == v30 )
        goto LABEL_65;
      continue;
    }
    break;
  }
  if ( v31[1] == 2 )
    goto LABEL_40;
  if ( v27 != v34 )
  {
    v32 = *(_QWORD *)v5;
    v33 = *(_QWORD *)(*(_QWORD *)v5 + 856LL);
    if ( v34 == v33 )
      goto LABEL_142;
    goto LABEL_112;
  }
LABEL_171:
  v24 = v158;
LABEL_47:
  if ( v22 != v30 )
  {
    v24 *= 2;
    goto LABEL_49;
  }
LABEL_65:
  v49 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v184);
  sub_182CBA0(v49, &v186);
LABEL_66:
  v50 = 0;
LABEL_67:
  v51 = (__int64 *)v188;
  v52 = (__int64 *)((char *)v188 + 32 * (unsigned int)v189);
  if ( v188 != v52 )
  {
    do
    {
      v53 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v51);
      v54 = (char *)(v51 + 2);
      v51 += 4;
      sub_182CBA0(v53, v54);
    }
    while ( v52 != v51 );
    v52 = (__int64 *)v188;
  }
  if ( v52 != v172 && v52 )
    sub_186B220(v52);
  if ( ptr != v183 && ptr )
    sub_186B220(ptr);
  return v50;
}

