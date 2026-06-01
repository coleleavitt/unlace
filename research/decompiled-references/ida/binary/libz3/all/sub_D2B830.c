char *__fastcall sub_D2B830(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  int v6; // esi
  __int64 v7; // rdi
  char *v8; // r13
  int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  char *v13; // r12
  char *v14; // rbp
  void *v15; // rdi
  unsigned int v16; // ebp
  __int64 v17; // r12
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _OWORD *v22; // r12
  __int64 v23; // rdx
  char v24; // al
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r15
  char v28; // al
  int v29; // edx
  _QWORD *v30; // rbp
  __int64 *v31; // rbp
  __int64 v32; // rax
  __int16 v33; // dx
  __int64 *v34; // r13
  unsigned int v35; // ebx
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rsi
  char v39; // al
  int v40; // edx
  _QWORD *v41; // r9
  __int16 v42; // ax
  _QWORD *v43; // r15
  __int64 *v44; // rbx
  _QWORD *v45; // rsi
  __int64 v46; // rdi
  int v47; // r10d
  unsigned int v48; // ecx
  int v49; // eax
  __int64 v50; // r8
  int v51; // eax
  _QWORD *v52; // rax
  char *v53; // rbp
  char *v54; // r15
  __int64 v55; // r10
  __int64 v56; // rax
  int v57; // edi
  unsigned int v58; // edx
  char *v59; // rsi
  __int64 v60; // rdx
  char *v61; // r9
  char *v62; // rax
  __int64 v63; // rdx
  _OWORD *v64; // rbx
  _OWORD *v65; // rbp
  __int64 v66; // rdi
  _BYTE *v67; // rdi
  char *v68; // rcx
  char *result; // rax
  __int64 v70; // rdx
  unsigned int v71; // edx
  unsigned int v72; // eax
  unsigned int v73; // edi
  char v74; // dl
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 *v77; // rdx
  __int64 v78; // rdx
  int v79; // eax
  int v80; // edx
  _QWORD *v81; // rbp
  __int64 v82; // rbx
  unsigned __int64 v83; // rax
  __int64 *v84; // rdi
  __int64 v85; // rcx
  __int64 v86; // rbp
  char *v87; // rax
  char *v88; // rdi
  unsigned __int64 v89; // rax
  __int64 v90; // r10
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rbx
  char *v94; // rax
  char *v95; // rdi
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  _QWORD *v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // edx
  __int64 *v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // r11
  __int64 v105; // rbx
  char *v106; // rax
  char *v107; // rdi
  unsigned __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rdx
  _QWORD *v111; // rdi
  unsigned int v112; // edx
  int v113; // eax
  unsigned int v114; // eax
  _QWORD *v115; // rax
  _QWORD *v116; // rdx
  _QWORD *v117; // rax
  __int64 v118; // rdx
  char *v119; // r9
  __int64 v120; // rax
  _QWORD *v121; // r13
  __int64 v122; // rax
  __int64 v123; // rdx
  _QWORD *v124; // rsi
  _QWORD *v125; // rdx
  const void *v126; // rsi
  __int64 v127; // rax
  void *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rbp
  char *v131; // rax
  __int64 *v132; // r8
  unsigned __int64 v133; // rax
  __int64 v134; // r9
  unsigned __int64 v135; // rax
  __int64 v136; // r8
  unsigned int v137; // edx
  __int64 *v138; // rax
  __int64 v139; // rbx
  unsigned __int64 v140; // rax
  __int64 *v141; // rdi
  __int64 v142; // rcx
  unsigned __int64 v143; // rax
  __int64 v144; // rsi
  unsigned __int64 v145; // rax
  __int64 v146; // r10
  char *v147; // r13
  char *v148; // rbx
  void *v149; // rdi
  unsigned int v150; // esi
  unsigned int v151; // [rsp+4h] [rbp-264h]
  void *v152; // [rsp+8h] [rbp-260h]
  unsigned int v153; // [rsp+8h] [rbp-260h]
  char *v154; // [rsp+8h] [rbp-260h]
  _QWORD *v155; // [rsp+10h] [rbp-258h]
  _QWORD *v156; // [rsp+10h] [rbp-258h]
  unsigned int v157; // [rsp+18h] [rbp-250h]
  __int64 *v158; // [rsp+18h] [rbp-250h]
  __int64 v159; // [rsp+20h] [rbp-248h]
  _QWORD *v161; // [rsp+30h] [rbp-238h]
  _QWORD *v162; // [rsp+30h] [rbp-238h]
  char *v163; // [rsp+30h] [rbp-238h]
  unsigned int *v165; // [rsp+38h] [rbp-230h]
  char *v166; // [rsp+38h] [rbp-230h]
  void *v167; // [rsp+40h] [rbp-228h]
  _QWORD *v168; // [rsp+48h] [rbp-220h]
  _QWORD v169[4]; // [rsp+50h] [rbp-218h] BYREF
  _OWORD *v170; // [rsp+70h] [rbp-1F8h]
  unsigned int v171; // [rsp+78h] [rbp-1F0h]
  __int64 v172; // [rsp+7Ch] [rbp-1ECh]
  void *v173; // [rsp+90h] [rbp-1D8h]
  __int64 v174; // [rsp+98h] [rbp-1D0h]
  _BYTE v175[128]; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v176; // [rsp+120h] [rbp-148h]
  __int64 v177; // [rsp+128h] [rbp-140h]
  __int64 v178; // [rsp+130h] [rbp-138h] BYREF
  int v179; // [rsp+138h] [rbp-130h]

  v6 = *((_DWORD *)a4 + 3);
  v173 = v175;
  v174 = 0x1000000000LL;
  if ( v6 || *((_DWORD *)a4 + 4) )
  {
    v7 = *((unsigned int *)a4 + 2);
    v8 = (char *)*a4;
    v9 = 0;
    v10 = *((_DWORD *)a4 + 2);
    v11 = *a4 + 24 * v7;
    v12 = (_QWORD *)*a4;
    if ( *a4 == v11 )
      goto LABEL_21;
    do
    {
      while ( *v12 )
      {
        *v12 = 0;
        v12 += 3;
        if ( (_QWORD *)v11 == v12 )
          goto LABEL_8;
      }
      v12 += 3;
      ++v9;
    }
    while ( (_QWORD *)v11 != v12 );
LABEL_8:
    if ( v10 <= 0x10 || 3 * v10 >= 4 * v9 )
      goto LABEL_21;
    if ( v8 )
    {
      v13 = v8;
      v14 = &v8[24 * v7];
      do
      {
        while ( 1 )
        {
          v15 = *((void **)v13 + 2);
          if ( !v15 )
            break;
          sub_186B220(v15);
          v13 += 24;
          if ( v14 == v13 )
            goto LABEL_14;
        }
        v13 += 24;
      }
      while ( v13 != v14 );
LABEL_14:
      sub_186B220(v8);
      v16 = *((_DWORD *)a4 + 2);
      *a4 = 0;
      v16 >>= 1;
      v17 = v16;
      *((_DWORD *)a4 + 2) = v16;
      v18 = sub_186B270(24LL * v16);
      if ( !v16 )
        goto LABEL_20;
    }
    else
    {
      v150 = v10 >> 1;
      *a4 = 0;
      v17 = v150;
      *((_DWORD *)a4 + 2) = v150;
      v18 = sub_186B270(24LL * v150);
    }
    v19 = (_QWORD *)(v18 + 24 * v17);
    v20 = (_QWORD *)v18;
    do
    {
      *v20 = 0;
      v20 += 3;
      *(v20 - 2) = 0;
    }
    while ( v19 != v20 );
    v21 = v18;
    if ( ((24 * (_BYTE)v17) & 8) == 0 || (v21 = v18 + 24, *(_QWORD *)(v18 + 16) = 0, (_QWORD *)(v18 + 24) != v19) )
    {
      do
      {
        *(_QWORD *)(v21 + 16) = 0;
        v21 += 48;
        *(_QWORD *)(v21 - 8) = 0;
      }
      while ( (_QWORD *)v21 != v19 );
    }
LABEL_20:
    *a4 = v18;
LABEL_21:
    *(__int64 *)((char *)a4 + 12) = 0;
  }
  v169[2] = a3;
  v169[3] = a4;
  v169[0] = *(_QWORD *)(a1 + 32);
  v169[1] = a1 + 40;
  v172 = 0;
  v22 = (_OWORD *)sub_186B270(0x80u);
  v22[4] = 0;
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v22[3] = 0;
  v22[5] = 0;
  v22[6] = 0;
  v22[7] = 0;
  v23 = a2[9];
  if ( !v23 )
    goto LABEL_240;
  v24 = *(_BYTE *)(v23 + 3) >> 6;
  if ( !v24 )
  {
    do
    {
      v23 = *(_QWORD *)(v23 + 16);
      v24 = *(_BYTE *)(v23 + 3) >> 6;
    }
    while ( !v24 );
    if ( v24 != 1 )
      goto LABEL_25;
LABEL_236:
    v25 = (unsigned int)(*(_DWORD *)(v23 + 4) + 1);
    goto LABEL_27;
  }
  if ( v24 == 1 )
    goto LABEL_236;
LABEL_25:
  if ( v24 == 2 )
    v25 = (unsigned int)(*(_DWORD *)(v23 + 4) - 1);
  else
    v25 = *(unsigned int *)(v23 + 4);
LABEL_27:
  if ( (_DWORD)v25 )
  {
    v167 = (void *)v25;
    v152 = nullptr;
    v151 = 8;
    while ( 1 )
    {
      sub_EE4F40(*(_QWORD *)(a1 + 32));
      v26 = *a2;
      if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
      {
        v27 = *(_QWORD *)(v26 + 864);
        goto LABEL_31;
      }
      v100 = a2[9];
      v101 = 17;
      while ( 1 )
      {
        if ( *(char *)(v100 + 3) < 0 )
        {
          if ( *(_BYTE *)(v100 + 3) >> 6 != 2 )
          {
            v102 = (__int64 *)(*(_QWORD *)(v100 + 16) + 8LL * (_QWORD)v152);
            goto LABEL_161;
          }
          goto LABEL_163;
        }
        if ( *(_DWORD *)(v100 + 4) == (_DWORD)v152 )
          break;
LABEL_163:
        v100 = *(_QWORD *)(v100 + 16);
        if ( !--v101 )
        {
          sub_233F80((__int64 *)(v26 + 616), (_DWORD *)a2 + 18);
          v102 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8LL * (_QWORD)v152);
          goto LABEL_161;
        }
      }
      v102 = (__int64 *)(v100 + 8);
LABEL_161:
      v27 = *v102;
LABEL_31:
      if ( *(_DWORD *)(v27 + 8) <= 1u )
        break;
      v28 = *(_BYTE *)(v27 + 6);
      if ( (v28 & 1) == 0 )
      {
        *(_BYTE *)(v27 + 6) = v28 | 1;
        v29 = v174;
        if ( (unsigned int)v174 >= HIDWORD(v174) )
        {
          v105 = (unsigned int)(2 * HIDWORD(v174));
          v106 = (char *)sub_186B270(8 * v105);
          v29 = v174;
          v107 = (char *)v173;
          v30 = v106;
          if ( (_DWORD)v174 )
          {
            if ( (unsigned int)(v174 - 1) <= 2 || v106 == (char *)v173 + 8 )
            {
              v143 = 0;
              v144 = 8LL * (unsigned int)v174;
              do
              {
                v30[v143 / 8] = *(_QWORD *)&v107[v143];
                v143 += 8LL;
              }
              while ( v143 != v144 );
            }
            else
            {
              v108 = 0;
              v109 = 16LL * ((unsigned int)v174 >> 1);
              do
              {
                *(__m128i *)&v30[v108 / 8] = _mm_loadu_si128((const __m128i *)&v107[v108]);
                v108 += 16LL;
              }
              while ( v109 != v108 );
              if ( (v29 & 1) != 0 )
                v30[v29 & 0xFFFFFFFE] = *(_QWORD *)&v107[8 * (v29 & 0xFFFFFFFE)];
            }
          }
          if ( v107 != v175 && v107 )
          {
            sub_186B220(v107);
            v29 = v174;
          }
          v173 = v30;
          HIDWORD(v174) = v105;
        }
        else
        {
          v30 = v173;
        }
        v30[v29] = v27;
        LODWORD(v174) = v29 + 1;
        break;
      }
LABEL_60:
      v152 = (char *)v152 + 1;
      if ( v167 == v152 )
        goto LABEL_61;
    }
    v31 = &v178;
    v178 = v27;
    v176 = &v178;
    v179 = 0;
    v177 = 0x1000000001LL;
    LODWORD(v32) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = *(_WORD *)(v27 + 4);
        v34 = &v31[2 * (unsigned int)v32];
        if ( v33 == 1 )
          goto LABEL_56;
        if ( v33 == 2 )
          break;
        if ( v33 )
        {
          sub_1872CE0("");
          sub_1873130(114, 100);
        }
        v35 = *(_DWORD *)(v27 + 24);
        v36 = *((_DWORD *)v34 + 2);
        if ( v36 < v35 )
        {
          while ( 1 )
          {
            v37 = v36++;
            v38 = *(_QWORD *)(v27 + 8 * v37 + 32);
            *((_DWORD *)v34 + 2) = v36;
            if ( *(_DWORD *)(v38 + 8) > 1u )
            {
              v39 = *(_BYTE *)(v38 + 6);
              if ( (v39 & 1) != 0 )
                goto LABEL_51;
              *(_BYTE *)(v38 + 6) = v39 | 1;
              v40 = v174;
              if ( (unsigned int)v174 >= HIDWORD(v174) )
              {
                v86 = (unsigned int)(2 * HIDWORD(v174));
                v87 = (char *)sub_186B270(8 * v86);
                v40 = v174;
                v88 = (char *)v173;
                v41 = v87;
                if ( (_DWORD)v174 )
                {
                  if ( (unsigned int)(v174 - 1) <= 2 || v87 == (char *)v173 + 8 )
                  {
                    v103 = 0;
                    v104 = 8LL * (unsigned int)v174;
                    do
                    {
                      v41[v103 / 8] = *(_QWORD *)&v88[v103];
                      v103 += 8LL;
                    }
                    while ( v103 != v104 );
                  }
                  else
                  {
                    v89 = 0;
                    v90 = 16LL * ((unsigned int)v174 >> 1);
                    do
                    {
                      *(__m128i *)&v41[v89 / 8] = _mm_loadu_si128((const __m128i *)&v88[v89]);
                      v89 += 16LL;
                    }
                    while ( v89 != v90 );
                    if ( (v40 & 1) != 0 )
                      v41[v40 & 0xFFFFFFFE] = *(_QWORD *)&v88[8 * (v40 & 0xFFFFFFFE)];
                  }
                }
                if ( v88 != v175 && v88 )
                {
                  v168 = v41;
                  sub_186B220(v88);
                  v40 = v174;
                  v41 = v168;
                }
                v173 = v41;
                HIDWORD(v174) = v86;
              }
              else
              {
                v41 = v173;
              }
              v41[v40] = v38;
              LODWORD(v174) = v40 + 1;
            }
            v42 = *(_WORD *)(v38 + 4);
            if ( v42 == 1 )
            {
              v36 = *((_DWORD *)v34 + 2);
            }
            else
            {
              if ( v42 == 2 )
              {
                v76 = (unsigned int)v177;
                if ( (unsigned int)v177 < HIDWORD(v177) )
                  goto LABEL_111;
                v82 = (unsigned int)(2 * HIDWORD(v177));
                v31 = (__int64 *)sub_186B270(16 * v82);
                v83 = 0;
                v84 = (__int64 *)v176;
                v76 = (unsigned int)v177;
                v85 = 16LL * (unsigned int)v177;
                if ( (_DWORD)v177 )
                {
                  do
                  {
                    *(__m128i *)&v31[v83 / 8] = _mm_loadu_si128((const __m128i *)&v84[v83 / 8]);
                    v83 += 16LL;
                  }
                  while ( v85 != v83 );
                }
                if ( v84 != &v178 && v84 )
                {
LABEL_124:
                  sub_186B220(v84);
                  v76 = (unsigned int)v177;
                }
LABEL_125:
                v176 = v31;
                HIDWORD(v177) = v82;
                goto LABEL_112;
              }
              if ( v42 )
              {
                sub_1872CE0("");
                sub_1873130(114, 73);
              }
              if ( *(_DWORD *)(v38 + 24) )
              {
                v137 = v177;
                if ( (unsigned int)v177 >= HIDWORD(v177) )
                {
                  v139 = (unsigned int)(2 * HIDWORD(v177));
                  v31 = (__int64 *)sub_186B270(16 * v139);
                  v140 = 0;
                  v141 = (__int64 *)v176;
                  v137 = v177;
                  v142 = 16LL * (unsigned int)v177;
                  if ( (_DWORD)v177 )
                  {
                    do
                    {
                      *(__m128i *)&v31[v140 / 8] = _mm_loadu_si128((const __m128i *)&v141[v140 / 8]);
                      v140 += 16LL;
                    }
                    while ( v140 != v142 );
                  }
                  if ( v141 != &v178 && v141 )
                  {
                    sub_186B220(v141);
                    v137 = v177;
                  }
                  v176 = v31;
                  HIDWORD(v177) = v139;
                }
                else
                {
                  v31 = (__int64 *)v176;
                }
                v138 = &v31[2 * v137];
                *((_DWORD *)v138 + 2) = 0;
                v78 = (unsigned int)v177;
                *v138 = v38;
                v79 = v78 + 1;
                goto LABEL_113;
              }
              v170 = v22;
              v171 = v151;
              sub_D2AA90(v169, v38);
              v22 = v170;
              v36 = *((_DWORD *)v34 + 2);
              v151 = v171;
            }
LABEL_51:
            if ( v36 >= v35 )
            {
              LODWORD(v32) = v177 - 1;
              break;
            }
          }
        }
        LODWORD(v177) = v32;
        v170 = v22;
        v171 = v151;
        sub_D2AA90(v169, v27);
        v22 = v170;
        v31 = (__int64 *)v176;
        v151 = v171;
        LODWORD(v32) = v177;
        if ( !(_DWORD)v177 )
          goto LABEL_57;
LABEL_54:
        v32 = (unsigned int)(v32 - 1);
        v27 = v31[2 * v32];
      }
      v71 = *(_DWORD *)(v27 + 72);
      v72 = *((_DWORD *)v34 + 2);
      v73 = v71 + *(_DWORD *)(v27 + 76) + 1;
      if ( v72 >= v73 )
      {
LABEL_55:
        LODWORD(v32) = v177 - 1;
LABEL_56:
        LODWORD(v177) = v32;
        if ( !(_DWORD)v32 )
        {
LABEL_57:
          if ( v31 != &v178 && v31 )
            sub_186B220(v31);
          goto LABEL_60;
        }
        goto LABEL_54;
      }
      if ( v72 )
        goto LABEL_107;
      v38 = *(_QWORD *)(v27 + 24);
      v72 = 1;
      *((_DWORD *)v34 + 2) = 1;
      if ( *(_DWORD *)(v38 + 8) > 1u )
        break;
LABEL_110:
      v76 = (unsigned int)v177;
      if ( (unsigned int)v177 >= HIDWORD(v177) )
      {
        v82 = (unsigned int)(2 * HIDWORD(v177));
        v31 = (__int64 *)sub_186B270(16 * v82);
        v91 = 0;
        v84 = (__int64 *)v176;
        v76 = (unsigned int)v177;
        v92 = 16LL * (unsigned int)v177;
        if ( (_DWORD)v177 )
        {
          do
          {
            *(__m128i *)&v31[v91 / 8] = _mm_loadu_si128((const __m128i *)&v84[v91 / 8]);
            v91 += 16LL;
          }
          while ( v92 != v91 );
        }
        if ( v84 && v84 != &v178 )
          goto LABEL_124;
        goto LABEL_125;
      }
LABEL_111:
      v31 = (__int64 *)v176;
LABEL_112:
      v77 = &v31[2 * v76];
      *v77 = v38;
      *((_DWORD *)v77 + 2) = 0;
      v78 = (unsigned int)v177;
      v79 = v177 + 1;
LABEL_113:
      LODWORD(v177) = v79;
      LODWORD(v32) = v79 - 1;
      v27 = v31[2 * v78];
    }
    while ( 1 )
    {
      v74 = *(_BYTE *)(v38 + 6);
      if ( (v74 & 1) == 0 )
      {
        *(_BYTE *)(v38 + 6) = v74 | 1;
        v80 = v174;
        if ( (unsigned int)v174 >= HIDWORD(v174) )
        {
          v93 = (unsigned int)(2 * HIDWORD(v174));
          v94 = (char *)sub_186B270(8 * v93);
          v80 = v174;
          v95 = (char *)v173;
          v81 = v94;
          if ( (_DWORD)v174 )
          {
            if ( (unsigned int)(v174 - 1) <= 2 || v94 == (char *)v173 + 8 )
            {
              v135 = 0;
              v136 = 8LL * (unsigned int)v174;
              do
              {
                v81[v135 / 8] = *(_QWORD *)&v95[v135];
                v135 += 8LL;
              }
              while ( v135 != v136 );
            }
            else
            {
              v96 = 0;
              v97 = 16LL * ((unsigned int)v174 >> 1);
              do
              {
                *(__m128i *)&v81[v96 / 8] = _mm_loadu_si128((const __m128i *)&v95[v96]);
                v96 += 16LL;
              }
              while ( v97 != v96 );
              if ( (v80 & 1) != 0 )
                v81[v80 & 0xFFFFFFFE] = *(_QWORD *)&v95[8 * (v80 & 0xFFFFFFFE)];
            }
          }
          if ( v95 != v175 && v95 )
          {
            sub_186B220(v95);
            v80 = v174;
          }
          v173 = v81;
          HIDWORD(v174) = v93;
        }
        else
        {
          v81 = v173;
        }
        v81[v80] = v38;
        LODWORD(v174) = v80 + 1;
        goto LABEL_110;
      }
      if ( v72 >= v73 )
        goto LABEL_55;
      v71 = *(_DWORD *)(v27 + 72);
LABEL_107:
      v75 = v72 - 1;
      if ( v71 < v72 )
        v75 = (unsigned int)v75 - v71;
      ++v72;
      v38 = *(_QWORD *)(16LL * *(unsigned int *)(v27 + 20) + v27 + 8 * v75 + 80);
      *((_DWORD *)v34 + 2) = v72;
      if ( *(_DWORD *)(v38 + 8) <= 1u )
        goto LABEL_110;
    }
  }
LABEL_240:
  v151 = 8;
LABEL_61:
  v43 = (_QWORD *)*a4;
  v44 = &v178;
  v176 = &v178;
  v177 = 0x1000000000LL;
  v45 = &v43[3 * *((unsigned int *)a4 + 2)];
  if ( v43 != v45 )
  {
    while ( *v43 <= 1u )
    {
      v43 += 3;
      if ( v45 == v43 )
        goto LABEL_88;
    }
    if ( v45 != v43 )
    {
      v46 = 0;
      do
      {
        v47 = *((_DWORD *)v43 + 2);
        if ( !v47 )
          goto LABEL_154;
        v48 = 0;
        do
        {
          v49 = 1 << v48;
          v50 = v48++ >> 5;
          v51 = *(_DWORD *)(v43[2] + 4 * v50) & v49;
          if ( v48 == v47 )
            break;
        }
        while ( !v51 );
        if ( !v51 )
        {
LABEL_154:
          if ( (unsigned int)v46 >= HIDWORD(v177) )
          {
            v130 = (unsigned int)(2 * HIDWORD(v177));
            v131 = (char *)sub_186B270(8 * v130);
            LODWORD(v46) = v177;
            v98 = v131;
            v132 = (__int64 *)v176;
            if ( (_DWORD)v177 )
            {
              if ( (unsigned int)(v177 - 1) <= 2 || v131 == (char *)v176 + 8 )
              {
                v145 = 0;
                v146 = 8LL * (unsigned int)v177;
                do
                {
                  v98[v145 / 8] = v132[v145 / 8];
                  v145 += 8LL;
                }
                while ( v146 != v145 );
              }
              else
              {
                v133 = 0;
                v134 = 16LL * ((unsigned int)v177 >> 1);
                do
                {
                  *(__m128i *)&v98[v133 / 8] = _mm_loadu_si128((const __m128i *)&v132[v133 / 8]);
                  v133 += 16LL;
                }
                while ( v133 != v134 );
                if ( (v46 & 1) != 0 )
                  v98[(unsigned int)v46 & 0xFFFFFFFE] = v132[(unsigned int)v46 & 0xFFFFFFFE];
              }
            }
            if ( v132 && v132 != &v178 )
            {
              v156 = v98;
              sub_186B220(v132);
              v98 = v156;
              LODWORD(v46) = v177;
            }
            v176 = v98;
            HIDWORD(v177) = v130;
          }
          else
          {
            v98 = v176;
          }
          v99 = (unsigned int)v46;
          v46 = (unsigned int)(v46 + 1);
          v98[v99] = *v43;
          LODWORD(v177) = v46;
        }
        v52 = v43 + 3;
        if ( v45 == v43 + 3 )
          break;
        while ( 1 )
        {
          v43 = v52;
          if ( *v52 > 1u )
            break;
          v52 += 3;
          if ( v45 == v52 )
            goto LABEL_76;
        }
      }
      while ( v45 != v52 );
LABEL_76:
      v53 = (char *)v176;
      v54 = (char *)v176 + 8 * v46;
      if ( v54 != v176 )
      {
LABEL_77:
        while ( 2 )
        {
          v55 = *(_QWORD *)v53;
          v56 = *((unsigned int *)a4 + 2);
          v57 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
          v58 = v56 - 1;
          v56 *= 24;
          v59 = (char *)(*a4 + v56);
          v60 = 24LL * (v57 & v58);
          v61 = (char *)(*a4 + v60);
          if ( v60 == v56 )
          {
LABEL_181:
            if ( (char *)*a4 == v61 )
            {
LABEL_84:
              v53 += 8;
              if ( v54 == v53 )
                goto LABEL_85;
              continue;
            }
            v62 = (char *)*a4;
            while ( 1 )
            {
              v110 = *(_QWORD *)v62;
              if ( *(_QWORD *)v62 > 1u )
              {
                if ( *(_DWORD *)(v110 + 12) == v57 && v55 == v110 )
                  goto LABEL_190;
              }
              else if ( !v110 )
              {
                v53 += 8;
                if ( v54 == v53 )
                  goto LABEL_85;
                goto LABEL_77;
              }
              v62 += 24;
              if ( v61 == v62 )
                goto LABEL_84;
            }
          }
          break;
        }
        v62 = (char *)(*a4 + v60);
        while ( 1 )
        {
          v63 = *(_QWORD *)v62;
          if ( *(_QWORD *)v62 > 1u )
          {
            if ( *(_DWORD *)(v63 + 12) == v57 && v55 == v63 )
            {
LABEL_190:
              v111 = v62 + 24;
              if ( v59 == v62 + 24 )
                v111 = (_QWORD *)*a4;
              v112 = *((_DWORD *)a4 + 3) - 1;
              if ( *v111 )
              {
                *(_QWORD *)v62 = 1;
                v113 = *((_DWORD *)a4 + 4);
                *((_DWORD *)a4 + 3) = v112;
                v114 = v113 + 1;
                if ( v112 < 0x40 )
                  v112 = 64;
                *((_DWORD *)a4 + 4) = v114;
                if ( v112 < v114 && !(unsigned __int8)sub_186AF10(v111) )
                {
                  v153 = *((_DWORD *)a4 + 2);
                  v115 = (_QWORD *)sub_186B270(24LL * v153);
                  v155 = v115;
                  if ( v153 )
                  {
                    v116 = &v115[3 * v153];
                    do
                    {
                      *v115 = 0;
                      v115 += 3;
                      *(v115 - 2) = 0;
                    }
                    while ( v116 != v115 );
                    v117 = v155;
                    if ( (((_BYTE)v116 - (_BYTE)v155) & 8) == 0 || (v117 = v155 + 3, v155[2] = 0, v155 + 3 != v116) )
                    {
                      do
                      {
                        v117[2] = 0;
                        v117 += 6;
                        *(v117 - 1) = 0;
                      }
                      while ( v117 != v116 );
                    }
                  }
                  v118 = *((unsigned int *)a4 + 2);
                  v119 = (char *)*a4;
                  v120 = v118;
                  v157 = v118 - 1;
                  v159 = 24 * v118;
                  v121 = &v155[3 * v118];
                  v154 = (char *)(*a4 + 24 * v118);
                  if ( (char *)*a4 != v154 )
                  {
                    do
                    {
                      v122 = *(_QWORD *)v119;
                      if ( *(_QWORD *)v119 > 1u )
                      {
                        v123 = 24LL * (*(_DWORD *)(v122 + 12) & v157);
                        v124 = &v155[(unsigned __int64)v123 / 8];
                        if ( v159 == v123 )
                        {
LABEL_256:
                          if ( v155 == v124 )
                          {
LABEL_273:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v125 = v155;
                          while ( *v125 )
                          {
                            v125 += 3;
                            if ( v124 == v125 )
                              goto LABEL_273;
                          }
                        }
                        else
                        {
                          v125 = &v155[(unsigned __int64)v123 / 8];
                          while ( *v125 )
                          {
                            v125 += 3;
                            if ( v121 == v125 )
                              goto LABEL_256;
                          }
                        }
                        *v125 = v122;
                        v126 = *((const void **)v119 + 2);
                        *((_DWORD *)v125 + 2) = *((_DWORD *)v119 + 2);
                        if ( v126 )
                        {
                          v127 = *((unsigned int *)v119 + 3);
                          v128 = (void *)v125[2];
                          if ( *((_DWORD *)v125 + 3) < (unsigned int)v127 )
                          {
                            if ( v128 )
                            {
                              v165 = (unsigned int *)v119;
                              v161 = v125;
                              sub_186B220(v128);
                              v119 = (char *)v165;
                              v125 = v161;
                              v127 = v165[3];
                            }
                            v166 = v119;
                            v162 = v125;
                            v129 = sub_186B270(4 * v127);
                            v119 = v166;
                            v128 = (void *)v129;
                            v162[2] = v129;
                            v127 = *((unsigned int *)v166 + 3);
                            v126 = *((const void **)v166 + 2);
                            *((_DWORD *)v162 + 3) = v127;
                          }
                          v163 = v119;
                          memcpy(v128, v126, 4 * v127);
                          v119 = v163;
                        }
                      }
                      v119 += 24;
                    }
                    while ( v154 != v119 );
                    v120 = *((unsigned int *)a4 + 2);
                    v154 = (char *)*a4;
                  }
                  if ( v154 )
                  {
                    if ( (_DWORD)v120 )
                    {
                      v158 = v44;
                      v147 = &v154[24 * v120];
                      v148 = v154;
                      do
                      {
                        while ( 1 )
                        {
                          v149 = *((void **)v148 + 2);
                          if ( !v149 )
                            break;
                          sub_186B220(v149);
                          v148 += 24;
                          if ( v147 == v148 )
                            goto LABEL_267;
                        }
                        v148 += 24;
                      }
                      while ( v147 != v148 );
LABEL_267:
                      v44 = v158;
                    }
                    sub_186B220(v154);
                  }
                  *((_DWORD *)a4 + 4) = 0;
                  *a4 = (__int64)v155;
                }
                goto LABEL_84;
              }
              v53 += 8;
              *(_QWORD *)v62 = 0;
              *((_DWORD *)a4 + 3) = v112;
              if ( v54 == v53 )
              {
LABEL_85:
                v53 = (char *)v176;
                break;
              }
              goto LABEL_77;
            }
          }
          else if ( !v63 )
          {
            goto LABEL_84;
          }
          v62 += 24;
          if ( v59 == v62 )
            goto LABEL_181;
        }
      }
      if ( v53 != nullptr && v53 != (char *)v44 )
        sub_186B220(v53);
    }
  }
LABEL_88:
  if ( v22 )
  {
    if ( v151 )
    {
      v64 = v22;
      v65 = &v22[v151];
      do
      {
        while ( 1 )
        {
          v66 = *((_QWORD *)v64 + 1);
          if ( !v66 )
            break;
          ++v64;
          sub_186B220((void *)(v66 - 8));
          if ( v65 == v64 )
            goto LABEL_93;
        }
        ++v64;
      }
      while ( v65 != v64 );
    }
LABEL_93:
    sub_186B220(v22);
  }
  v67 = v173;
  v68 = (char *)v173 + 8 * (unsigned int)v174;
  result = (char *)v173;
  if ( v173 != v68 )
  {
    do
    {
      v70 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v70 + 6) &= ~1u;
    }
    while ( result != v68 );
  }
  LODWORD(v174) = 0;
  if ( v67 )
  {
    result = v175;
    if ( v67 != v175 )
      return (char *)sub_186B220(v67);
  }
  return result;
}

