_BYTE *__fastcall sub_E6F3C0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r15
  __int16 v5; // ax
  _DWORD *v6; // rdi
  __int64 *v7; // rdx
  __int64 v8; // rsi
  int v9; // r14d
  _DWORD *v10; // rax
  __int64 v11; // rsi
  __int16 v12; // ax
  __int64 *v13; // r12
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r15
  _DWORD *v18; // rax
  int v19; // edx
  void *v20; // rbx
  __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rax
  int v26; // edi
  char *v27; // rcx
  unsigned int v28; // edx
  char *v29; // rsi
  __int64 v30; // rdx
  char *v31; // r8
  char *i; // rax
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // edx
  int v36; // ebx
  int v37; // esi
  _DWORD *v38; // r14
  __int64 v39; // rdx
  char *v40; // rax
  char *v41; // r8
  void *v42; // r15
  int v43; // eax
  void *v44; // r15
  __int64 v45; // rbx
  __int64 v46; // rax
  char *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  char *v54; // r12
  char *v55; // r15
  void *v56; // r13
  char *v57; // rbx
  void *v58; // rdi
  char v59; // si
  __int64 v60; // rdx
  char v61; // si
  __int64 v62; // rdx
  void *v63; // r14
  char *v64; // r12
  int v65; // edx
  __int64 v66; // rdx
  char v67; // cl
  __int64 v68; // rax
  void *v69; // rdi
  char *v70; // r12
  char *v71; // r14
  void *v72; // rdi
  void *v73; // r15
  void *v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rax
  int v78; // edi
  char *v79; // rcx
  unsigned int v80; // edx
  char *v81; // rsi
  __int64 v82; // rdx
  char *v83; // r9
  char *j; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rdx
  _BYTE *v90; // rax
  __int64 v91; // rax
  __m128i *v92; // r12
  __m128i *v93; // r9
  int v94; // edi
  __int64 v95; // rax
  __m128i *v96; // r10
  __m128i *v97; // rax
  __m128i *v98; // rsi
  __int64 v99; // rdx
  unsigned int v100; // ecx
  _DWORD *v101; // r12
  __int64 v102; // rax
  int v103; // r14d
  __int64 v104; // rax
  char *v105; // rdi
  unsigned __int64 v106; // rax
  __int64 v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rax
  int *v111; // rax
  __int64 v112; // rdx
  unsigned int v113; // ecx
  _BYTE *v114; // r8
  int v115; // r9d
  _BYTE *result; // rax
  char *v117; // r13
  void *v118; // r12
  __int64 v119; // r14
  __int64 v120; // rcx
  __int64 v121; // rax
  unsigned int v122; // edi
  unsigned int *v123; // rdx
  _DWORD *v124; // rax
  __int64 v125; // rdx
  __m128i *v126; // rax
  __m128i *v127; // rdx
  const __m128i *v128; // rax
  __m128i *v129; // r10
  __int64 v130; // rdx
  __m128i *v131; // rsi
  __m128i *v132; // rdx
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  _QWORD *v135; // rax
  _DWORD *v136; // rax
  char **exception; // r14
  __int64 *v139; // [rsp+18h] [rbp-3F8h]
  __int64 v140; // [rsp+20h] [rbp-3F0h]
  __int64 v141; // [rsp+40h] [rbp-3D0h]
  unsigned __int8 v142; // [rsp+4Bh] [rbp-3C5h]
  int v143; // [rsp+4Ch] [rbp-3C4h]
  __int64 *v144; // [rsp+50h] [rbp-3C0h]
  char *v145; // [rsp+50h] [rbp-3C0h]
  __int64 *v146; // [rsp+58h] [rbp-3B8h]
  char *v147; // [rsp+60h] [rbp-3B0h]
  int v148; // [rsp+68h] [rbp-3A8h]
  __int64 *v149; // [rsp+70h] [rbp-3A0h]
  char v150; // [rsp+78h] [rbp-398h]
  char v151; // [rsp+80h] [rbp-390h]
  unsigned int v152; // [rsp+80h] [rbp-390h]
  void *v153; // [rsp+88h] [rbp-388h]
  unsigned int v154; // [rsp+88h] [rbp-388h]
  __int64 v155; // [rsp+90h] [rbp-380h]
  char *v156; // [rsp+90h] [rbp-380h]
  int v157; // [rsp+90h] [rbp-380h]
  __int64 v158; // [rsp+90h] [rbp-380h]
  void *v159; // [rsp+90h] [rbp-380h]
  void *v160; // [rsp+90h] [rbp-380h]
  void *v161; // [rsp+90h] [rbp-380h]
  size_t v162; // [rsp+90h] [rbp-380h]
  __int64 v163; // [rsp+98h] [rbp-378h] BYREF
  char v164; // [rsp+A7h] [rbp-369h] BYREF
  __int64 v165; // [rsp+A8h] [rbp-368h] BYREF
  _QWORD v166[2]; // [rsp+B0h] [rbp-360h] BYREF
  _QWORD v167[2]; // [rsp+C0h] [rbp-350h] BYREF
  int v168; // [rsp+D0h] [rbp-340h] BYREF
  char v169; // [rsp+D4h] [rbp-33Ch]
  __int64 v170; // [rsp+D8h] [rbp-338h]
  int v171; // [rsp+E0h] [rbp-330h] BYREF
  char v172; // [rsp+E4h] [rbp-32Ch]
  __int64 v173; // [rsp+E8h] [rbp-328h]
  __int64 v174; // [rsp+F0h] [rbp-320h] BYREF
  __int64 v175; // [rsp+F8h] [rbp-318h]
  __int64 v176; // [rsp+100h] [rbp-310h] BYREF
  __int64 v177; // [rsp+108h] [rbp-308h]
  __int64 v178; // [rsp+110h] [rbp-300h] BYREF
  __int64 v179; // [rsp+118h] [rbp-2F8h]
  __int64 v180; // [rsp+120h] [rbp-2F0h] BYREF
  __int64 v181; // [rsp+128h] [rbp-2E8h]
  void *v182; // [rsp+130h] [rbp-2E0h]
  __int64 v183; // [rsp+138h] [rbp-2D8h]
  _BYTE v184[64]; // [rsp+140h] [rbp-2D0h] BYREF
  void *ptr; // [rsp+180h] [rbp-290h]
  __int64 v186; // [rsp+188h] [rbp-288h]
  _BYTE v187[64]; // [rsp+190h] [rbp-280h] BYREF
  void *v188; // [rsp+1D0h] [rbp-240h]
  __int64 v189; // [rsp+1D8h] [rbp-238h]
  _BYTE v190[560]; // [rsp+1E0h] [rbp-230h] BYREF

  v3 = a2;
  v182 = v184;
  v163 = a2;
  v183 = 0x1000000000LL;
  v186 = 0x1000000000LL;
  v189 = 0x1000000000LL;
  v5 = *(_WORD *)(a2 + 4);
  ptr = v187;
  v188 = v190;
  v166[0] = 0;
  v166[1] = 0;
  v167[0] = 1;
  v167[1] = 0;
  if ( v5 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr )
  {
    v7 = &v163;
    v8 = 1;
    goto LABEL_8;
  }
  v7 = &v163;
  v8 = 1;
  if ( *v6 || v6[1] != 6 )
    goto LABEL_8;
  v8 = *(unsigned int *)(v3 + 24);
  if ( (_DWORD)v8 )
  {
    v7 = (__int64 *)(v3 + 32);
    v3 = *(_QWORD *)(v3 + 32);
    v5 = *(_WORD *)(v3 + 4);
LABEL_8:
    v146 = v7;
    v139 = &v7[v8];
    v142 = 0;
    while ( 1 )
    {
      if ( v5 )
        goto LABEL_12;
      v9 = *(_DWORD *)(v3 + 24);
      v10 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( v9 )
      {
        if ( !v10 )
        {
LABEL_12:
          v142 = 0;
          v151 = 0;
          v155 = *(_QWORD *)(v3 + 32);
          goto LABEL_13;
        }
        v120 = *(_QWORD *)(v3 + 32);
        v155 = v120;
        if ( *v10 || v10[1] != 8 || v9 != 1 )
        {
LABEL_128:
          v142 = 0;
          goto LABEL_129;
        }
        if ( !*(_WORD *)(v120 + 4) && !*(_DWORD *)(v120 + 24) )
        {
          v136 = *(_DWORD **)(*(_QWORD *)(v120 + 16) + 24LL);
          if ( !v136 || *v136 == -1 )
          {
            v87 = -(int)sub_E6CC00(a1, v120);
            goto LABEL_157;
          }
        }
        if ( *(_WORD *)(v120 + 4) )
        {
          v3 = *(_QWORD *)(v3 + 32);
          v142 = 1;
          v155 = *(_QWORD *)(v120 + 32);
          v151 = 1;
        }
        else
        {
          v3 = *(_QWORD *)(v3 + 32);
          v142 = 1;
          v155 = *(_QWORD *)(v120 + 32);
          v10 = *(_DWORD **)(*(_QWORD *)(v120 + 16) + 24LL);
          if ( !v10 )
          {
            v151 = 1;
            goto LABEL_13;
          }
LABEL_129:
          v151 = v142;
          if ( *v10 == 5 )
            v151 = v142 ^ (v10[1] == 3);
        }
LABEL_13:
        v11 = *(_QWORD *)(v3 + 40);
        v140 = a1 + 536;
        v165 = v155;
        if ( !(unsigned __int8)sub_1666AE0(a1 + 536, v11, v166, &v164) )
        {
          sub_1872CE0("");
          sub_1873130(114, 1653);
        }
        if ( v151 )
          sub_1831620(qword_1C7F2C0, v166);
        v12 = *(_WORD *)(v155 + 4);
        if ( v12 )
        {
          v13 = &v165;
          v15 = 1;
        }
        else
        {
          v13 = &v165;
          v14 = *(_DWORD **)(*(_QWORD *)(v155 + 16) + 24LL);
          v15 = 1;
          if ( v14 && *v14 == 5 && v14[1] == 6 )
          {
            v15 = *(unsigned int *)(v155 + 24);
            if ( !(_DWORD)v15 )
            {
              v150 = 1;
LABEL_84:
              v63 = qword_1C7F2C0;
              v168 = 0;
              v169 &= 0xFCu;
              v147 = (char *)v188;
              v172 &= 0xFCu;
              v148 = v189;
              v170 = 0;
              v171 = 1;
              v173 = 0;
              if ( (v167[0] & 0x100000000LL) != 0 )
                sub_182C690(qword_1C7F2C0, &v168, v167);
              else
                v168 = v167[0];
              sub_182CBA0(v63, &v171);
              v172 &= ~1u;
              v171 = 1;
              if ( v148 )
              {
                v64 = v147;
                do
                {
                  BYTE4(v178) &= 0xFCu;
                  BYTE4(v180) &= 0xFCu;
                  LODWORD(v178) = 0;
                  v179 = 0;
                  LODWORD(v180) = 1;
                  v181 = 0;
                  v161 = qword_1C7F2C0;
                  if ( (v64[20] & 1) != 0 )
                    sub_182C690(qword_1C7F2C0, &v178, v64 + 16);
                  else
                    LODWORD(v178) = *((_DWORD *)v64 + 4);
                  sub_182CBA0(v161, &v180);
                  BYTE4(v180) &= ~1u;
                  BYTE4(v174) &= 0xFCu;
                  BYTE4(v176) &= 0xFCu;
                  LODWORD(v180) = 1;
                  LODWORD(v174) = 0;
                  v175 = 0;
                  LODWORD(v176) = 1;
                  v177 = 0;
                  v159 = qword_1C7F2C0;
                  sub_1836B00(qword_1C7F2C0, &v168, &v178, &v174);
                  sub_182CBA0(v159, &v176);
                  v65 = v174;
                  v64 += 32;
                  LODWORD(v174) = v168;
                  v168 = v65;
                  v66 = v175;
                  v175 = v170;
                  v170 = v66;
                  v67 = BYTE4(v174) & 1;
                  LOBYTE(v66) = v169 & 0xFC | BYTE4(v174) & 2;
                  BYTE4(v174) = v169 & 1 | BYTE4(v174) & 0xFC | v169 & 2;
                  v169 = v67 | v66;
                  LODWORD(v176) = v171;
                  v68 = v173;
                  v173 = v177;
                  v177 = v68;
                  v171 = 1;
                  v153 = qword_1C7F2C0;
                  LOBYTE(v68) = v172 & 1 | v172 & 2 | BYTE4(v176) & 0xFC;
                  v172 = v172 & 0xFC | BYTE4(v176) & 2;
                  BYTE4(v176) = v68;
                  sub_182CBA0(qword_1C7F2C0, &v174);
                  sub_182CBA0(v153, &v176);
                  v160 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v178);
                  sub_182CBA0(v160, &v180);
                }
                while ( v64 != &v147[32 * v148] );
              }
              if ( (v169 & 1) != 0 || v168 != 1 || (v172 & 1) != 0 || v171 != 1 )
              {
                v69 = qword_1C7F2C0;
                if ( (v167[0] & 0x100000000LL) != 0 || LODWORD(v167[0]) != 1 || (v172 & 1) != 0 || v171 != 1 )
                {
                  sub_1848FF0(qword_1C7F2C0, v166, &v168);
                }
                else
                {
                  sub_1831650(qword_1C7F2C0, v166, &v168);
                  sub_182CBA0(v69, v167);
                  BYTE4(v167[0]) &= ~1u;
                  LODWORD(v167[0]) = 1;
                }
                if ( v148 )
                {
                  v70 = v147;
                  v71 = &v147[32 * v148];
                  do
                  {
                    while ( 1 )
                    {
                      v72 = qword_1C7F2C0;
                      if ( (v70[20] & 1) == 0 && *((_DWORD *)v70 + 4) == 1 && (v172 & 1) == 0 && v171 == 1 )
                        break;
                      sub_1848FF0(qword_1C7F2C0, v70, &v168);
                      v70 += 32;
                      if ( v70 == v71 )
                        goto LABEL_105;
                    }
                    sub_1831650(qword_1C7F2C0, v70, &v168);
                    sub_182CBA0(v72, v70 + 16);
                    v70[20] &= ~1u;
                    v70 += 32;
                    *((_DWORD *)v70 - 4) = 1;
                  }
                  while ( v70 != v71 );
                }
LABEL_105:
                v73 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v168);
                sub_182CBA0(v73, &v171);
              }
              else
              {
                sub_25A130((char *)&v168);
              }
              if ( v150 && v142 )
              {
                LODWORD(v174) = 0;
                BYTE4(v174) &= 0xFCu;
                BYTE4(v176) &= 0xFCu;
                v175 = 0;
                LODWORD(v176) = 1;
                v177 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v174, (int *)v166);
                v74 = qword_1C7F2C0;
                LODWORD(v178) = 1;
                BYTE4(v178) &= 0xFCu;
                LODWORD(v180) = 1;
                v179 = 0;
                BYTE4(v180) &= 0xFCu;
                v181 = 0;
                if ( (v167[0] & 0x100000000LL) == 0 && LODWORD(v167[0]) == 1 )
                {
                  sub_1832A70(qword_1C7F2C0, v166, &v178);
                  sub_182CBA0(v74, v167);
                  BYTE4(v167[0]) &= ~1u;
                  LODWORD(v167[0]) = 1;
                }
                else
                {
                  sub_1852000(qword_1C7F2C0, v166, &v178);
                }
                sub_25A130((char *)&v174);
                v142 = 0;
              }
              goto LABEL_112;
            }
            v13 = (__int64 *)(v155 + 32);
            v12 = *(_WORD *)(*(_QWORD *)(v155 + 32) + 4LL);
          }
        }
        v150 = 1;
        v149 = &v13[v15];
        while ( 1 )
        {
          v16 = *v13;
          v174 = 0;
          v175 = 0;
          v176 = 1;
          v17 = v16;
          v177 = 0;
          if ( !v12
            && (v18 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL)) != nullptr
            && *v18 == 5
            && v18[1] == 9
            && *(_DWORD *)(v16 + 24) == 2 )
          {
            v17 = *(_QWORD *)(v16 + 40);
            if ( !(unsigned __int8)sub_1666AE0(v140, *(_QWORD *)(v16 + 32), &v174, &v168) )
            {
              sub_1872CE0("");
              sub_1873130(114, 1674);
            }
          }
          else
          {
            v178 = 1;
            v179 = 0;
            v180 = 1;
            v181 = 0;
            sub_182CBA0(qword_1C7F2C0, &v180);
            v19 = v178;
            v20 = qword_1C7F2C0;
            LODWORD(v178) = v174;
            LODWORD(v174) = v19;
            v21 = v179;
            v179 = v175;
            v175 = v21;
            LOBYTE(v21) = BYTE4(v178) & 1;
            v22 = BYTE4(v174) & 0xFC | BYTE4(v178) & 2;
            BYTE4(v178) = BYTE4(v174) & 1 | BYTE4(v178) & 0xFC | BYTE4(v174) & 2;
            BYTE4(v174) = v22 | v21;
            LODWORD(v180) = v176;
            v23 = v177;
            v177 = v181;
            v181 = v23;
            LODWORD(v176) = 1;
            LOBYTE(v23) = BYTE4(v176) & 1 | BYTE4(v176) & 2 | BYTE4(v180) & 0xFC;
            BYTE4(v176) = BYTE4(v176) & 0xFC | BYTE4(v180) & 2;
            BYTE4(v180) = v23;
            sub_182CBA0(qword_1C7F2C0, &v178);
            sub_182CBA0(v20, &v180);
          }
          if ( v151 )
            sub_1831620(qword_1C7F2C0, &v174);
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(
                  *(_QWORD *)(a1 + 8),
                  v17) )
          {
            if ( *(_WORD *)(v17 + 4)
              || (v24 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) == nullptr
              || *v24 != 5
              || v24[1] != 18
              || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
                    *(_QWORD *)(a1 + 8),
                    *(_QWORD *)(v17 + 32)) )
            {
              sub_1872CE0("");
              sub_1873130(114, 1682);
            }
            v17 = *(_QWORD *)(v17 + 32);
          }
          v25 = *(unsigned int *)(a1 + 648);
          v26 = *(_DWORD *)(v17 + 12);
          v27 = *(char **)(a1 + 640);
          v28 = v25 - 1;
          v25 *= 16;
          v29 = &v27[v25];
          v30 = 16LL * (v26 & v28);
          v31 = &v27[v30];
          if ( v30 != v25 )
          {
            for ( i = &v27[v30]; v29 != i; i += 16 )
            {
              v33 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(v33 + 12) == v26 && v33 == v17 )
                {
LABEL_49:
                  v35 = v186;
                  v36 = HIDWORD(v186);
                  v37 = *((_DWORD *)i + 2);
                  if ( (unsigned int)v186 >= HIDWORD(v186) )
                    goto LABEL_50;
LABEL_39:
                  v38 = ptr;
                  goto LABEL_40;
                }
              }
              else if ( !v33 )
              {
                goto LABEL_38;
              }
            }
          }
          for ( ; v31 != v27; v27 += 16 )
          {
            v53 = *(_QWORD *)v27;
            if ( *(_QWORD *)v27 > 1u )
            {
              if ( *(_DWORD *)(v53 + 12) == v26 && v53 == v17 )
              {
                i = v27;
                goto LABEL_49;
              }
            }
            else if ( !v53 )
            {
              break;
            }
          }
LABEL_38:
          v34 = sub_E6C140(a1, v17);
          v35 = v186;
          v36 = HIDWORD(v186);
          v37 = v34;
          if ( (unsigned int)v186 < HIDWORD(v186) )
            goto LABEL_39;
LABEL_50:
          v45 = (unsigned int)(2 * v36);
          v46 = sub_186B270(4 * v45);
          v35 = v186;
          v47 = (char *)ptr;
          v38 = (_DWORD *)v46;
          if ( (_DWORD)v186 )
          {
            if ( (unsigned int)(v186 - 1) <= 2 || (unsigned __int64)(v46 - ((_QWORD)ptr + 4)) <= 8 )
            {
              v75 = 0;
              v76 = 4LL * (unsigned int)v186;
              do
              {
                v38[v75 / 4] = *(_DWORD *)&v47[v75];
                v75 += 4LL;
              }
              while ( v75 != v76 );
            }
            else
            {
              v48 = 0;
              v49 = 16LL * ((unsigned int)v186 >> 2);
              do
              {
                *(__m128i *)&v38[v48 / 4] = _mm_loadu_si128((const __m128i *)&v47[v48]);
                v48 += 16LL;
              }
              while ( v49 != v48 );
              v50 = v35 & 0xFFFFFFFC;
              if ( (v35 & 3) != 0 )
              {
                v38[v50] = *(_DWORD *)&v47[4 * v50];
                v51 = v50 + 1;
                if ( (unsigned int)v51 < v35 )
                {
                  v52 = v50 + 2;
                  v38[v51] = *(_DWORD *)&v47[4 * v51];
                  if ( (unsigned int)v52 < v35 )
                    v38[v52] = *(_DWORD *)&v47[4 * v52];
                }
              }
            }
          }
          if ( v47 != v187 && v47 )
          {
            sub_186B220(v47);
            v35 = v186;
          }
          ptr = v38;
          HIDWORD(v186) = v45;
LABEL_40:
          v38[v35] = v37;
          v39 = (unsigned int)v189;
          LODWORD(v186) = v186 + 1;
          if ( (unsigned int)v189 >= HIDWORD(v189) )
          {
            v157 = 2 * HIDWORD(v189);
            v40 = (char *)sub_186B270(32LL * (unsigned int)(2 * HIDWORD(v189)));
            v39 = (unsigned int)v189;
            if ( (_DWORD)v189 )
            {
              v141 = a1;
              v144 = v13;
              v54 = v40;
              v143 = v157;
              v158 = 0;
              v55 = v40;
              do
              {
                v56 = qword_1C7F2C0;
                v54 += 32;
                v57 = (char *)v188 + 32 * v158;
                v58 = qword_1C7F2C0;
                v59 = v57[4];
                *((_DWORD *)v54 - 8) = *(_DWORD *)v57;
                *(v54 - 28) = v59 & 3 | *(v54 - 28) & 0xFC;
                v60 = *((_QWORD *)v57 + 1);
                *((_QWORD *)v57 + 1) = 0;
                *((_QWORD *)v54 - 3) = v60;
                v61 = v57[20];
                *((_DWORD *)v54 - 4) = *((_DWORD *)v57 + 4);
                *(v54 - 12) = v61 & 3 | *(v54 - 12) & 0xFC;
                v62 = *((_QWORD *)v57 + 3);
                *((_QWORD *)v57 + 3) = 0;
                *((_QWORD *)v54 - 1) = v62;
                sub_182CBA0(v58, v57);
                sub_182CBA0(v56, v57 + 16);
                ++v158;
                v39 = (unsigned int)v189;
              }
              while ( (unsigned int)v158 < (unsigned int)v189 );
              v13 = v144;
              a1 = v141;
              v157 = v143;
              v40 = v55;
            }
            if ( v188 != v190 && v188 )
            {
              v145 = v40;
              sub_186B220(v188);
              v39 = (unsigned int)v189;
              v40 = v145;
            }
            v188 = v40;
            HIDWORD(v189) = v157;
          }
          else
          {
            v40 = (char *)v188;
          }
          v41 = &v40[32 * v39];
          *(_QWORD *)v41 = 0;
          v42 = qword_1C7F2C0;
          *((_QWORD *)v41 + 1) = 0;
          *((_QWORD *)v41 + 2) = 1;
          *((_QWORD *)v41 + 3) = 0;
          if ( (v174 & 0x100000000LL) != 0 )
          {
            v156 = &v40[32 * v39];
            sub_182C690(v42, v41, &v174);
            v41 = v156;
          }
          else
          {
            *(_DWORD *)v41 = v174;
          }
          if ( (v176 & 0x100000000LL) != 0 )
          {
            sub_182C690(v42, v41 + 16, &v176);
          }
          else
          {
            v43 = v176;
            v41[20] &= ~1u;
            *((_DWORD *)v41 + 4) = v43;
          }
          LODWORD(v189) = v189 + 1;
          v44 = qword_1C7F2C0;
          v150 &= *(_BYTE *)(*(_QWORD *)(a1 + 608) + *((unsigned int *)ptr + (unsigned int)(v186 - 1))) != 0;
          ++v13;
          sub_182CBA0(qword_1C7F2C0, &v174);
          sub_182CBA0(v44, &v176);
          if ( v13 == v149 )
            goto LABEL_84;
          v12 = *(_WORD *)(*v13 + 4);
        }
      }
      if ( v10 && *v10 != -1 )
      {
        v155 = *(_QWORD *)(v3 + 32);
        goto LABEL_128;
      }
      v77 = *(unsigned int *)(a1 + 592);
      v78 = *(_DWORD *)(v3 + 12);
      v79 = *(char **)(a1 + 584);
      v80 = v77 - 1;
      v77 *= 16;
      v81 = &v79[v77];
      v82 = 16LL * (v78 & v80);
      v83 = &v79[v82];
      if ( v82 != v77 )
      {
        for ( j = &v79[v82]; v81 != j; j += 16 )
        {
          v85 = *(_QWORD *)j;
          if ( *(_QWORD *)j > 1u )
          {
            if ( *(_DWORD *)(v85 + 12) == v78 && v85 == v3 )
              goto LABEL_156;
          }
          else if ( !v85 )
          {
            goto LABEL_138;
          }
        }
      }
      for ( ; v83 != v79; v79 += 16 )
      {
        v102 = *(_QWORD *)v79;
        if ( *(_QWORD *)v79 > 1u )
        {
          if ( *(_DWORD *)(v102 + 12) == v78 && v102 == v3 )
          {
            j = v79;
LABEL_156:
            v87 = *((_DWORD *)j + 2);
            goto LABEL_157;
          }
        }
        else if ( !v102 )
        {
          break;
        }
      }
LABEL_138:
      v86 = *(_QWORD *)(a1 + 568);
      if ( v86 )
        v9 = *(_DWORD *)(v86 - 4);
      v174 = v3;
      v87 = v9;
      ++*(_DWORD *)(v3 + 8);
      sub_E67160((unsigned int **)(a1 + 568), &v174);
      v88 = *(_QWORD *)(a1 + 576);
      if ( v88 )
      {
        v89 = *(unsigned int *)(v88 - 4);
        if ( (_DWORD)v89 == *(_DWORD *)(v88 - 8) )
        {
          v122 = (unsigned int)(3 * v89 + 1) >> 1;
          if ( (int)v89 + 8 >= v122 + 8 || (unsigned int)v89 >= v122 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0(&v178, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v178);
            sub_233E40((__int64)&v178);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v123 = (unsigned int *)sub_186B300((void *)(v88 - 8), v122 + 8);
          v124 = v123 + 2;
          *v123 = v122;
          v125 = v123[1];
          *(_QWORD *)(a1 + 576) = v124;
          v90 = (char *)v124 + v125;
        }
        else
        {
          v90 = (_BYTE *)(v89 + v88);
        }
      }
      else
      {
        v135 = (_QWORD *)sub_186B270(0xAu);
        *v135 = 2;
        v90 = v135 + 1;
        *(_QWORD *)(a1 + 576) = v90;
      }
      *v90 = 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 576) - 4LL);
      v91 = *(unsigned int *)(a1 + 592);
      v154 = 2 * v91;
      if ( 3 * (int)v91 < (unsigned int)(4 * (*(_DWORD *)(a1 + 596) + *(_DWORD *)(a1 + 600))) )
        break;
      v92 = *(__m128i **)(a1 + 584);
      v152 = v91 - 1;
      v162 = 16 * v91;
      v93 = &v92[v91];
LABEL_145:
      v94 = *(_DWORD *)(v3 + 12);
      v95 = 16LL * (v94 & v152);
      v96 = &v92[(unsigned __int64)v95 / 0x10];
      if ( v95 != v162 )
      {
        v97 = &v92[(unsigned __int64)v95 / 0x10];
        v98 = nullptr;
        while ( 1 )
        {
          v99 = v97->m128i_i64[0];
          if ( v97->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v99 + 12) == v94 && v99 == v3 )
            {
              v97->m128i_i64[0] = v3;
              v97->m128i_i32[2] = v9;
              goto LABEL_157;
            }
          }
          else
          {
            if ( !v99 )
            {
              if ( v98 )
                --*(_DWORD *)(a1 + 600);
              else
                v98 = v97;
              v98->m128i_i64[0] = v3;
              v98->m128i_i32[2] = v9;
              ++*(_DWORD *)(a1 + 596);
              goto LABEL_157;
            }
            v98 = v97;
          }
          if ( ++v97 == v93 )
            goto LABEL_213;
        }
      }
      v98 = nullptr;
      while ( 1 )
      {
LABEL_213:
        if ( v96 == v92 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v121 = v92->m128i_i64[0];
        if ( v92->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v121 + 12) == v94 && v121 == v3 )
        {
          v92->m128i_i64[0] = v3;
          v92->m128i_i32[2] = v9;
          goto LABEL_157;
        }
LABEL_212:
        ++v92;
      }
      if ( v121 )
      {
        v98 = v92;
        goto LABEL_212;
      }
      if ( v98 )
      {
        --*(_DWORD *)(a1 + 600);
        v92 = v98;
      }
      v92->m128i_i64[0] = v3;
      v92->m128i_i32[2] = v9;
      ++*(_DWORD *)(a1 + 596);
LABEL_157:
      v100 = v183;
      if ( (unsigned int)v183 >= HIDWORD(v183) )
      {
        v103 = 2 * HIDWORD(v183);
        v104 = sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v183)));
        v100 = v183;
        v105 = (char *)v182;
        v101 = (_DWORD *)v104;
        if ( (_DWORD)v183 )
        {
          if ( (unsigned int)(v183 - 1) <= 2 || (unsigned __int64)(v104 - ((_QWORD)v182 + 4)) <= 8 )
          {
            v133 = 0;
            v134 = 4LL * (unsigned int)v183;
            do
            {
              v101[v133 / 4] = *(_DWORD *)&v105[v133];
              v133 += 4LL;
            }
            while ( v133 != v134 );
          }
          else
          {
            v106 = 0;
            v107 = 16LL * ((unsigned int)v183 >> 2);
            do
            {
              *(__m128i *)&v101[v106 / 4] = _mm_loadu_si128((const __m128i *)&v105[v106]);
              v106 += 16LL;
            }
            while ( v106 != v107 );
            v108 = v100 & 0xFFFFFFFC;
            if ( (v100 & 3) != 0 )
            {
              v101[v108] = *(_DWORD *)&v105[4 * v108];
              v109 = v108 + 1;
              if ( (unsigned int)v109 < v100 )
              {
                v110 = v108 + 2;
                v101[v109] = *(_DWORD *)&v105[4 * v109];
                if ( (unsigned int)v110 < v100 )
                  v101[v110] = *(_DWORD *)&v105[4 * v110];
              }
            }
          }
        }
        if ( v105 != v184 && v105 )
        {
          sub_186B220(v105);
          v100 = v183;
        }
        v182 = v101;
        HIDWORD(v183) = v103;
      }
      else
      {
        v101 = v182;
      }
      v101[v100] = v87;
      LODWORD(v183) = v183 + 1;
LABEL_112:
      if ( v139 == ++v146 )
      {
        v111 = (int *)sub_E68740(a1, v183, (__int64)v182, v186, (__int64)ptr, (__int64)v188, (__int64)v166, v142, a3);
        goto LABEL_188;
      }
      v3 = *v146;
      v5 = *(_WORD *)(*v146 + 4);
    }
    v162 = 16LL * v154;
    v126 = (__m128i *)sub_186B270(v162);
    v92 = v126;
    v127 = &v126[v162 / 0x10];
    if ( v154 )
    {
      do
      {
        v126->m128i_i64[0] = 0;
        ++v126;
        v126[-1].m128i_i32[2] = 0;
      }
      while ( v126 != v127 );
      v162 = 16LL * v154;
    }
    v128 = *(const __m128i **)(a1 + 584);
    v152 = v154 - 1;
    v129 = (__m128i *)&v128[*(unsigned int *)(a1 + 592)];
    v93 = &v92[v162 / 0x10];
    if ( v128 == v129 )
    {
      if ( !v129 )
      {
LABEL_226:
        *(_QWORD *)(a1 + 584) = v92;
        *(_DWORD *)(a1 + 600) = 0;
        *(_DWORD *)(a1 + 592) = v154;
        goto LABEL_145;
      }
    }
    else
    {
      do
      {
        while ( v128->m128i_i64[0] <= 1uLL )
        {
          if ( v129 == ++v128 )
            goto LABEL_234;
        }
        v130 = 16LL * (*(_DWORD *)(v128->m128i_i64[0] + 12) & v152);
        v131 = &v92[(unsigned __int64)v130 / 0x10];
        if ( v162 == v130 )
        {
LABEL_236:
          if ( v92 == v131 )
          {
LABEL_251:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v132 = v92;
          while ( v132->m128i_i64[0] )
          {
            if ( v131 == ++v132 )
              goto LABEL_251;
          }
        }
        else
        {
          v132 = &v92[(unsigned __int64)v130 / 0x10];
          while ( v132->m128i_i64[0] )
          {
            if ( v93 == ++v132 )
              goto LABEL_236;
          }
        }
        *v132 = _mm_loadu_si128(v128++);
      }
      while ( v129 != v128 );
LABEL_234:
      v129 = *(__m128i **)(a1 + 584);
      if ( !v129 )
        goto LABEL_226;
    }
    sub_186B220(v129);
    v93 = &v92[v162 / 0x10];
    goto LABEL_226;
  }
  v111 = (int *)sub_E68740(a1, 0, (__int64)v184, 0, (__int64)v187, (__int64)v190, (__int64)v166, 0, a3);
LABEL_188:
  if ( !(unsigned __int8)sub_E6EA70(a1, v111, v112, v113, v114, v115) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1708);
  }
  sub_25A130((char *)v166);
  result = v188;
  v117 = (char *)v188 + 32 * (unsigned int)v189;
  if ( v188 != v117 )
  {
    do
    {
      v118 = qword_1C7F2C0;
      v119 = (__int64)result;
      sub_182CBA0(qword_1C7F2C0, result);
      sub_182CBA0(v118, v119 + 16);
      result = (_BYTE *)(v119 + 32);
    }
    while ( v117 != (char *)(v119 + 32) );
    v117 = (char *)v188;
  }
  if ( v117 )
  {
    result = v190;
    if ( v117 != v190 )
      result = (_BYTE *)sub_186B220(v117);
  }
  if ( ptr )
  {
    result = v187;
    if ( ptr != v187 )
      result = (_BYTE *)sub_186B220(ptr);
  }
  if ( v182 )
  {
    result = v184;
    if ( v182 != v184 )
      return (_BYTE *)sub_186B220(v182);
  }
  return result;
}

