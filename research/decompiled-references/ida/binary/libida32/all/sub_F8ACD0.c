__int64 __fastcall sub_F8ACD0(int a1, _WORD *a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  bool v11; // al
  char v12; // dl
  unsigned int v13; // r13d
  unsigned int v15; // ecx
  bool v16; // r15
  char v17; // r11
  char v18; // di
  bool v19; // si
  char v20; // al
  int v21; // edi
  unsigned int v22; // ecx
  bool v23; // al
  bool v24; // r8
  bool v25; // dl
  char v26; // r11
  bool v27; // r14
  bool v28; // al
  char v29; // dl
  unsigned int v30; // eax
  bool v31; // r9
  bool v32; // si
  unsigned __int8 v33; // r10
  char v34; // al
  bool v35; // al
  char v36; // dl
  char v37; // dl
  bool v38; // dl
  bool v39; // cl
  _BOOL4 v40; // eax
  _BOOL4 v41; // eax
  int v42; // eax
  bool v43; // r9
  bool v44; // r10
  char v45; // dl
  char v46; // r8
  char v47; // r8
  char v48; // al
  char v49; // al
  bool v50; // r8
  char v51; // al
  unsigned __int8 v52; // di
  char v53; // r14
  char v54; // r13
  char v55; // r14
  char v56; // r13
  char v57; // r14
  char v58; // r13
  char v59; // r13
  char v60; // r13
  char v61; // r14
  char v62; // r10
  int v63; // r13d
  char v64; // r14
  _BOOL4 v65; // eax
  char v66; // al
  bool v67; // si
  bool v68; // r10
  char v69; // al
  _BOOL4 v70; // r11d
  char v71; // si
  bool v72; // dl
  char v73; // cl
  char v74; // cl
  char v75; // cl
  char v76; // dl
  char v77; // r8
  char v78; // dl
  unsigned int v79; // ecx
  unsigned __int64 v80; // rax
  char v81; // r14
  unsigned int v82; // ebp
  unsigned int v83; // ebx
  bool v84; // cl
  _BOOL4 v85; // r13d
  bool v86; // r15
  _BOOL4 v87; // r8d
  _BOOL4 v88; // eax
  int v89; // r14d
  char v90; // dl
  unsigned __int64 v91; // rax
  char v92; // cl
  int v93; // edx
  unsigned int v94; // esi
  _BOOL4 v95; // eax
  bool v96; // r8
  _BOOL4 v97; // r15d
  char v98; // dl
  char v99; // al
  char v100; // r14
  _BOOL4 v101; // edx
  bool v102; // r15
  bool v103; // r14
  char v104; // di
  bool v105; // dl
  char v106; // cl
  char v107; // di
  char v108; // cl
  unsigned int v109; // edi
  _BOOL4 v110; // ecx
  bool v111; // al
  bool v112; // dl
  bool v113; // cl
  bool v114; // dl
  bool v115; // dl
  bool v116; // al
  bool v117; // r8
  unsigned int v118; // ecx
  unsigned __int64 v119; // rax
  unsigned int v120; // ecx
  unsigned __int64 v121; // rax
  int v122; // edx
  _BOOL4 v123; // eax
  int v124; // ecx
  int v125; // esi
  int v126; // edx
  _BOOL4 v127; // eax
  int v128; // edx
  _BOOL4 v129; // eax
  unsigned int v130; // ecx
  unsigned __int64 v131; // rax
  unsigned int v132; // ecx
  unsigned __int64 v133; // rax
  unsigned int v134; // ecx
  unsigned __int64 v135; // rax
  int v136; // edx
  _BOOL4 v137; // eax
  int v138; // ecx
  int v139; // esi
  int v140; // edx
  _BOOL4 v141; // eax
  int v142; // edx
  _BOOL4 v143; // eax
  unsigned int v144; // ecx
  unsigned __int64 v145; // rax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  char v149; // al
  char v150; // r8
  char v151; // dl
  char v152; // r11
  int v153; // eax
  int v154; // eax
  unsigned __int64 v155; // rdx
  int v156; // eax
  __int64 v157; // rax
  int v158; // eax
  char v159; // [rsp+4h] [rbp-84h]
  bool v160; // [rsp+4h] [rbp-84h]
  _BOOL4 v161; // [rsp+4h] [rbp-84h]
  bool v162; // [rsp+4h] [rbp-84h]
  bool v163; // [rsp+4h] [rbp-84h]
  bool v164; // [rsp+4h] [rbp-84h]
  bool v165; // [rsp+9h] [rbp-7Fh]
  bool v166; // [rsp+9h] [rbp-7Fh]
  bool v167; // [rsp+9h] [rbp-7Fh]
  bool v168; // [rsp+9h] [rbp-7Fh]
  bool v169; // [rsp+Ah] [rbp-7Eh]
  bool v170; // [rsp+Ah] [rbp-7Eh]
  bool v171; // [rsp+Bh] [rbp-7Dh]
  bool v172; // [rsp+Bh] [rbp-7Dh]
  unsigned int v173; // [rsp+Ch] [rbp-7Ch]
  char v174; // [rsp+Ch] [rbp-7Ch]
  _BOOL4 v175; // [rsp+14h] [rbp-74h]
  bool v176; // [rsp+18h] [rbp-70h]
  bool v177; // [rsp+19h] [rbp-6Fh]
  bool v178; // [rsp+1Ah] [rbp-6Eh]
  bool v179; // [rsp+1Bh] [rbp-6Dh]
  _BOOL4 v180; // [rsp+1Ch] [rbp-6Ch]
  int v181; // [rsp+2Ch] [rbp-5Ch] BYREF
  void *s1; // [rsp+30h] [rbp-58h] BYREF
  __int64 v183; // [rsp+38h] [rbp-50h]
  unsigned int v184; // [rsp+40h] [rbp-48h]
  int v185; // [rsp+44h] [rbp-44h]

  switch ( a1 )
  {
    case 1:
      v15 = *(_DWORD *)(a6 + 248);
      s1 = a2;
      v183 = a3;
      v185 = 0;
      v169 = a3 != 19;
      v16 = a3 != 13;
      v179 = v15 - 35 <= 1 || v15 - 1 <= 1;
      v17 = a3 != 25;
      switch ( a3 )
      {
        case 20LL:
          if ( !(*(_QWORD *)a2 ^ 0x6E6F6E5F65736D63LL | *((_QWORD *)a2 + 1) ^ 0x655F657275636573LL)
            && *((_DWORD *)a2 + 4) == 2037544046 )
          {
            LOBYTE(v185) = 1;
            v184 = v179;
            v149 = 1;
LABEL_657:
            v178 = a3 != 22;
            if ( v149 )
            {
LABEL_658:
              v18 = 1;
              v180 = v15 - 8 <= 1;
LABEL_659:
              v171 = a3 != 3;
              v175 = v15 - 16 <= 3;
              v19 = a3 != 7;
              if ( !((unsigned __int8)v18 | (a3 != 3)) )
              {
                if ( *a2 == 24934 && *((_BYTE *)a2 + 2) == 114 )
                {
                  LOBYTE(v185) = 1;
                  v18 = 1;
                  v184 = v15 - 16 <= 3;
                }
                else
                {
                  v18 = 0;
                }
                v171 = 0;
                v19 = 1;
                v43 = 1;
                v44 = 1;
                goto LABEL_663;
              }
              goto LABEL_30;
            }
            goto LABEL_25;
          }
          break;
        case 19LL:
          if ( !(*(_QWORD *)a2 ^ 0x6972625F636A626FLL | *((_QWORD *)a2 + 1) ^ 0x616C65725F656764LL)
            && a2[8] == 25972
            && *((_BYTE *)a2 + 18) == 100 )
          {
            v184 = 1;
            v149 = 1;
            LOBYTE(v185) = 1;
            goto LABEL_657;
          }
          break;
        case 13LL:
          if ( *(_QWORD *)a2 == 0x675F6C636E65706FLL && *((_DWORD *)a2 + 2) == 1633841004 && *((_BYTE *)a2 + 12) == 108 )
          {
LABEL_1694:
            v184 = 1;
            LOBYTE(v185) = 1;
            v178 = 1;
            goto LABEL_658;
          }
          if ( *(_QWORD *)a2 == 0x695F737961776C61LL && *((_DWORD *)a2 + 2) == 1852402798 && *((_BYTE *)a2 + 12) == 101 )
          {
            v184 = 1;
            LOBYTE(v185) = 1;
            v178 = 1;
            goto LABEL_658;
          }
          v178 = 1;
LABEL_25:
          if ( a3 == 13 )
          {
            if ( *(_QWORD *)a2 == 0x616974696E696E75LL
              && *((_DWORD *)a2 + 2) == 1702521196
              && *((_BYTE *)a2 + 12) == 100 )
            {
              LOBYTE(v185) = 1;
              v18 = 1;
              v184 = 1;
              v180 = v15 - 8 <= 1;
            }
            else
            {
              v180 = v15 - 8 <= 1;
              if ( *(_QWORD *)a2 == 0x5F736E7275746572LL
                && *((_DWORD *)a2 + 2) == 1667856244
                && *((_BYTE *)a2 + 12) == 101 )
              {
                v184 = 1;
                v18 = 1;
                LOBYTE(v185) = 1;
              }
              else
              {
                v18 = 0;
              }
            }
            v171 = 1;
            v19 = 1;
            v175 = v15 - 16 <= 3;
LABEL_30:
            v20 = v18 | v169;
LABEL_123:
            v43 = a3 != 18;
            if ( !v20 )
            {
              if ( !(*(_QWORD *)a2 ^ 0x6177615F6F726F63LL | *((_QWORD *)a2 + 1) ^ 0x6164696C655F7469LL)
                && a2[8] == 27746
                && *((_BYTE *)a2 + 18) == 101 )
              {
                LOBYTE(v185) = 1;
                v150 = 1;
                v18 = 1;
                v184 = 1;
              }
              else
              {
                v150 = v18 | v43;
              }
              v44 = a3 != 15;
LABEL_664:
              v45 = a3 != 9;
              v20 = v18 | v44;
              if ( !v150 )
              {
                if ( !(*(_QWORD *)a2 ^ 0x5F657361656C6572LL | *((_QWORD *)a2 + 1) ^ 0x696C696261706163LL)
                  && a2[8] == 31092 )
                {
                  LOBYTE(v185) = 1;
                  v46 = 1;
                  v18 = 1;
                  v184 = 1;
                }
                else
                {
                  v46 = v18 | v45;
                }
                goto LABEL_129;
              }
LABEL_128:
              v46 = v18 | v45;
              if ( !v20 )
              {
                if ( *(_QWORD *)a2 == 0x69687372656E776FLL
                  && *((_DWORD *)a2 + 2) == 1635016560
                  && a2[6] == 25963
                  && *((_BYTE *)a2 + 14) == 115 )
                {
                  LOBYTE(v185) = 1;
                  v20 = 1;
                  v18 = 1;
                  v184 = 1;
                }
                v176 = a3 != 12;
                goto LABEL_130;
              }
LABEL_129:
              v176 = a3 != 12;
              v20 = v44 | v18;
              if ( !v46 )
              {
                if ( *(_QWORD *)a2 == 0x6E617463656C6573LL && *((_BYTE *)a2 + 8) == 121 )
                {
                  LOBYTE(v185) = 1;
                  v47 = 1;
                  v18 = 1;
                  v184 = 1;
                }
                else
                {
                  v47 = v18 | v176;
                }
                v160 = a3 != 14;
                goto LABEL_131;
              }
LABEL_130:
              v160 = a3 != 14;
              v47 = v18 | v176;
              if ( !v20 )
              {
                if ( *(_QWORD *)a2 != 0x66695F676E697375LL
                  || *((_DWORD *)a2 + 2) != 1769497951
                  || a2[6] != 29811
                  || *((_BYTE *)a2 + 14) != 115 )
                {
                  v48 = v18 | v160;
LABEL_132:
                  if ( !v48 )
                  {
                    if ( *(_QWORD *)a2 == 0x6465726975716361LL && *((_DWORD *)a2 + 2) == 1952866655 && a2[6] == 29285 )
                    {
                      v184 = 1;
                      v18 = 1;
                      LOBYTE(v185) = 1;
                    }
                    v165 = a3 != 6;
                    goto LABEL_135;
                  }
                  goto LABEL_133;
                }
                v184 = 1;
                v18 = 1;
                LOBYTE(v185) = 1;
LABEL_133:
                v49 = v18 | (a3 != 16);
                goto LABEL_134;
              }
LABEL_131:
              v48 = v18 | v160;
              if ( v47 )
                goto LABEL_132;
              if ( *(_QWORD *)a2 == 0x6C5F6C636E65706FLL && *((_DWORD *)a2 + 2) == 1818321775 )
              {
                LOBYTE(v185) = 1;
                v49 = 1;
                v18 = 1;
                v184 = 1;
LABEL_134:
                v165 = a3 != 6;
                if ( !v49 )
                {
                  if ( *(_QWORD *)a2 ^ 0x6365765F6E6F656ELL | *((_QWORD *)a2 + 1) ^ 0x657079745F726F74LL )
                  {
                    if ( !v18 )
                    {
                      v18 |= v165;
LABEL_1493:
                      v50 = a3 != 11;
                      v51 = 0;
LABEL_671:
                      if ( !v18 )
                      {
                        if ( *(_DWORD *)a2 == 1735549300 && a2[2] == 29797 )
                        {
                          LOBYTE(v185) = 1;
                          v53 = 1;
                          v51 = 1;
                          v184 = 1;
                        }
                        else
                        {
                          v53 = v50 | v51;
                        }
                        v52 = a3 != 8;
                        goto LABEL_141;
                      }
LABEL_140:
                      v52 = a3 != 8;
                      v53 = v51 | v50;
                      if ( !((a3 != 8) | (unsigned __int8)v51) )
                      {
                        v54 = v160;
                        v51 = 0;
                        if ( *(_QWORD *)a2 == 0x79625F64657A6973LL )
                        {
                          v184 = 1;
                          v54 = 1;
                          v51 = 1;
                          v52 = 0;
                          LOBYTE(v185) = 1;
                        }
                        else
                        {
                          v52 = 0;
                        }
                        goto LABEL_142;
                      }
LABEL_141:
                      v54 = v51 | v160;
                      if ( !v53 )
                      {
                        if ( *(_QWORD *)a2 == 0x756E755F6E726177LL && a2[4] == 25971 && *((_BYTE *)a2 + 10) == 100 )
                        {
                          LOBYTE(v185) = 1;
                          v55 = 1;
                          v51 = 1;
                          v184 = 1;
                        }
                        else
                        {
                          v55 = v44 | v51;
                        }
                        goto LABEL_143;
                      }
LABEL_142:
                      v55 = v44 | v51;
                      if ( !v54 )
                      {
                        if ( *(_QWORD *)a2 == 0x5F65726975716361LL
                          && *((_DWORD *)a2 + 2) == 1684955496
                          && a2[6] == 25964 )
                        {
                          LOBYTE(v185) = 1;
                          v56 = 1;
                          v51 = 1;
                          v184 = 1;
                        }
                        else
                        {
                          v56 = v51 | v169;
                        }
                        v177 = a3 != 24;
                        goto LABEL_144;
                      }
LABEL_143:
                      v177 = a3 != 24;
                      v56 = v51 | v169;
                      if ( !v55 )
                      {
                        if ( *(_QWORD *)a2 == 0x6465726975716361LL
                          && *((_DWORD *)a2 + 2) == 1717920351
                          && a2[6] == 29295
                          && *((_BYTE *)a2 + 14) == 101 )
                        {
                          goto LABEL_1419;
                        }
                        goto LABEL_145;
                      }
LABEL_144:
                      if ( !v56
                        && !(*(_QWORD *)a2 ^ 0x6C61635F6F72657ALL | *((_QWORD *)a2 + 1) ^ 0x725F646573755F6CLL)
                        && a2[8] == 26469
                        && *((_BYTE *)a2 + 18) == 115 )
                      {
LABEL_1419:
                        LOBYTE(v185) = 1;
                        v57 = 1;
                        v51 = 1;
                        v184 = 1;
LABEL_146:
                        v173 = 0;
                        if ( v15 <= 0x26 )
                          v173 = (0x6018A06018uLL >> v15) & 1;
                        if ( v57 )
                        {
                          v174 = v52 | v51;
                          if ( !((unsigned __int8)v51 | v178) )
                          {
                            if ( !(*(_QWORD *)a2 ^ 0x746E656D75677261LL | *((_QWORD *)a2 + 1) ^ 0x79745F687469775FLL)
                              && *((_DWORD *)a2 + 4) == 1952408944
                              && a2[10] == 26465 )
                            {
                              v184 = 1;
                              v51 = v57;
                              LOBYTE(v185) = 1;
LABEL_153:
                              v59 = v19 | v51;
LABEL_154:
                              if ( v59 )
                              {
LABEL_155:
                                if ( (unsigned __int8)v51 | v171 )
                                  goto LABEL_156;
                                if ( *a2 == 25456 && *((_BYTE *)a2 + 2) == 115 )
                                {
                                  v184 = 1;
                                  v51 = 1;
                                  LOBYTE(v185) = 1;
LABEL_158:
                                  v60 = v16 | v51;
                                  goto LABEL_159;
                                }
LABEL_157:
                                if ( !(v52 | (unsigned __int8)v51) )
                                {
                                  if ( *(_QWORD *)a2 == 0x6962615F76737973LL )
                                  {
                                    v184 = 1;
                                    v51 = 1;
                                    LOBYTE(v185) = 1;
                                    goto LABEL_161;
                                  }
                                  goto LABEL_160;
                                }
                                goto LABEL_158;
                              }
                              if ( *(_DWORD *)a2 == 1667527795 && a2[2] == 27745 && *((_BYTE *)a2 + 6) == 108 )
                              {
                                v184 = 1;
                                v51 = 1;
                                LOBYTE(v185) = 1;
                                goto LABEL_157;
                              }
LABEL_156:
                              if ( !((unsigned __int8)v45 | (unsigned __int8)v51) )
                              {
                                if ( *(_QWORD *)a2 == 0x6C61635F676E6F6CLL && *((_BYTE *)a2 + 8) == 108 )
                                {
                                  LOBYTE(v185) = 1;
                                  v184 = v175;
                                  v51 = 1;
                                  goto LABEL_160;
                                }
                                v60 = v51 | v16;
LABEL_159:
                                if ( !v60 )
                                {
                                  if ( *(_QWORD *)a2 != 0x6F635F7466697773LL
                                    || *((_DWORD *)a2 + 2) != 2019914862
                                    || *((_BYTE *)a2 + 12) != 116 )
                                  {
                                    goto LABEL_161;
                                  }
                                  v184 = 1;
                                  v51 = 1;
                                  LOBYTE(v185) = 1;
                                  goto LABEL_162;
                                }
LABEL_160:
                                if ( (unsigned __int8)v51 | (a3 != 29) )
                                {
LABEL_161:
                                  if ( (unsigned __int8)v51 | v176 )
                                    goto LABEL_162;
                                  if ( *(_QWORD *)a2 == 0x64616F6C7265766FLL && *((_DWORD *)a2 + 2) == 1701601889 )
                                  {
                                    v184 = 1;
                                    v51 = 1;
                                    LOBYTE(v185) = 1;
                                    goto LABEL_164;
                                  }
LABEL_163:
                                  if ( !((unsigned __int8)v51 | (a3 != 28)) )
                                  {
                                    if ( *(_QWORD *)a2 ^ 0x6177615F6F726F63LL
                                       | *((_QWORD *)a2 + 1) ^ 0x6164696C655F7469LL
                                      || *((_QWORD *)a2 + 2) != 0x756772615F656C62LL
                                      || *((_DWORD *)a2 + 6) != 1953391981 )
                                    {
                                      v61 = v50 | v51;
                                      v172 = a3 != 10;
LABEL_166:
                                      if ( !v61 )
                                      {
                                        if ( *(_QWORD *)a2 == 0x7269645F636A626FLL
                                          && a2[4] == 25445
                                          && *((_BYTE *)a2 + 10) == 116 )
                                        {
                                          goto LABEL_677;
                                        }
                                        goto LABEL_168;
                                      }
                                      goto LABEL_167;
                                    }
                                    LOBYTE(v185) = 1;
                                    v51 = 1;
                                    v184 = 1;
                                    v172 = a3 != 10;
                                    goto LABEL_167;
                                  }
LABEL_164:
                                  v172 = a3 != 10;
                                  if ( (unsigned __int8)v51 | (a3 != 21) )
                                  {
LABEL_165:
                                    v61 = v50 | v51;
                                    goto LABEL_166;
                                  }
                                  if ( !(*(_QWORD *)a2 ^ 0x6576726573657270LL
                                       | *((_QWORD *)a2 + 1) ^ 0x5F7373656363615FLL)
                                    && *((_DWORD *)a2 + 4) == 1701080681
                                    && *((_BYTE *)a2 + 20) == 120 )
                                  {
                                    LOBYTE(v185) = 1;
                                    v184 = v180;
                                    v51 = 1;
                                    goto LABEL_168;
                                  }
LABEL_167:
                                  if ( !((unsigned __int8)v51 | v172) )
                                  {
                                    if ( *(_QWORD *)a2 != 0x65677265766E6F63LL || a2[4] != 29806 )
                                      goto LABEL_169;
                                    goto LABEL_677;
                                  }
LABEL_168:
                                  if ( v43 | (unsigned __int8)v51 )
                                  {
LABEL_169:
                                    if ( v51 )
                                    {
LABEL_678:
                                      v62 = 1;
LABEL_679:
                                      v17 |= v62;
LABEL_177:
                                      if ( v17 )
                                      {
                                        if ( !((unsigned __int8)v62 | v172) )
                                        {
                                          if ( *(_QWORD *)a2 == 0x74615F7466697773LL && a2[4] == 29300 )
                                          {
                                            v63 = *(_DWORD *)(a6 + 260);
                                            v184 = 1;
                                            LOBYTE(v185) = 1;
                                            if ( v63 == 15 )
                                            {
                                              v62 = v17;
                                              goto LABEL_185;
                                            }
                                          }
                                          else
                                          {
                                            v63 = *(_DWORD *)(a6 + 260);
                                            v17 = 0;
                                            if ( v63 == 15 )
                                            {
                                              v62 = 0;
                                              goto LABEL_184;
                                            }
                                          }
                                          v62 = v17;
                                          v64 = v45 | v17;
LABEL_182:
                                          v65 = 0;
                                          if ( v15 == 38 )
                                            v65 = v63 == 24 && *(_DWORD *)(a6 + 256) == 3
                                               || v63 == 25 && *(_DWORD *)(a6 + 256) == 3;
LABEL_183:
                                          if ( !v64 )
                                          {
                                            if ( *(_QWORD *)a2 != 0x726F706D696C6C64LL || *((_BYTE *)a2 + 8) != 116 )
                                            {
LABEL_185:
                                              if ( (unsigned __int8)v62 | v177 )
                                              {
                                                if ( !((unsigned __int8)v62 | v169) )
                                                {
                                                  if ( !(*(_QWORD *)a2 ^ 0x6E6F6E5F65736D63LL
                                                       | *((_QWORD *)a2 + 1) ^ 0x635F657275636573LL)
                                                    && a2[8] == 27745
                                                    && *((_BYTE *)a2 + 18) == 108 )
                                                  {
                                                    LOBYTE(v185) = 1;
                                                    v62 |= v177;
                                                    v184 = v179;
                                                    goto LABEL_191;
                                                  }
                                                  v66 = v165;
                                                  v62 = 0;
                                                  goto LABEL_190;
                                                }
                                              }
                                              else if ( !(*(_QWORD *)a2 ^ 0x766973756C637865LL
                                                        | *((_QWORD *)a2 + 1) ^ 0x5F736B636F6C5F65LL)
                                                     && *((_QWORD *)a2 + 2) == 0x6465726975716572LL )
                                              {
                                                v184 = 1;
                                                v62 = 1;
                                                LOBYTE(v185) = 1;
LABEL_467:
                                                v66 = v62 | v165;
LABEL_190:
                                                if ( v66 )
                                                  goto LABEL_191;
                                                if ( *(_DWORD *)a2 != 1836216166 || a2[2] != 29793 )
                                                {
                                                  v67 = a3 != 20;
LABEL_192:
                                                  if ( !v62 )
                                                  {
                                                    if ( !v52 )
                                                    {
                                                      if ( *(_QWORD *)a2 == 0x6E6F6D6D6F636F6ELL )
                                                      {
                                                        v184 = 1;
                                                        LOBYTE(v185) = 1;
                                                        v68 = a3 != 26;
                                                      }
                                                      else
                                                      {
                                                        v68 = a3 != 26;
                                                        if ( *(_QWORD *)a2 != 0x7463656A624F534ELL )
                                                        {
LABEL_196:
                                                          if ( !v50 )
                                                          {
                                                            if ( *(_QWORD *)a2 == 0x5F6C616976697274LL
                                                              && a2[4] == 25185
                                                              && *((_BYTE *)a2 + 10) == 105 )
                                                            {
                                                              LOBYTE(v185) = 1;
                                                              v45 = 1;
                                                              v69 = 1;
                                                              v184 = 1;
                                                            }
                                                            else
                                                            {
                                                              v69 = 0;
                                                            }
                                                            goto LABEL_199;
                                                          }
                                                          v69 = 0;
                                                          goto LABEL_1180;
                                                        }
                                                        v184 = 1;
                                                        LOBYTE(v185) = 1;
                                                      }
                                                      v69 = 1;
LABEL_1180:
                                                      v152 = v69 | v68;
LABEL_1172:
                                                      if ( !v152 )
                                                      {
                                                        if ( !(*(_QWORD *)a2 ^ 0x7465725F636A626FLL
                                                             | *((_QWORD *)a2 + 1) ^ 0x6E6E695F736E7275LL)
                                                          && *((_QWORD *)a2 + 2) == 0x746E696F705F7265LL
                                                          && a2[12] == 29285 )
                                                        {
                                                          v184 = 1;
                                                          v69 = 1;
                                                          LOBYTE(v185) = 1;
                                                          if ( v63 == 15 )
                                                          {
                                                            v69 = 1;
                                                            goto LABEL_203;
                                                          }
                                                        }
                                                        else if ( v63 == 15 )
                                                        {
LABEL_202:
                                                          if ( !(v50 | (unsigned __int8)v69) )
                                                          {
                                                            if ( *(_QWORD *)a2 != 0x75736E6F635F736ELL
                                                              || a2[4] != 25965
                                                              || *((_BYTE *)a2 + 10) != 100 )
                                                            {
                                                              v69 = 0;
LABEL_205:
                                                              if ( !v52 )
                                                              {
                                                                v71 = v69 | v67;
                                                                if ( *(_QWORD *)a2 == 0x74656C74756F6269LL )
                                                                {
                                                                  LOBYTE(v185) = 1;
                                                                  v69 = 1;
                                                                  v184 = 1;
                                                                  v72 = a3 != 5;
LABEL_209:
                                                                  v73 = v69 | (a3 != 4);
                                                                  goto LABEL_210;
                                                                }
LABEL_208:
                                                                v72 = a3 != 5;
                                                                if ( !v71 )
                                                                {
                                                                  if ( !(*(_QWORD *)a2 ^ 0x6E6172746E656572LL
                                                                       | *((_QWORD *)a2 + 1) ^ 0x6962617061635F74LL)
                                                                    && *((_DWORD *)a2 + 4) == 2037672300 )
                                                                  {
                                                                    v184 = 1;
                                                                    v69 = 1;
                                                                    LOBYTE(v185) = 1;
                                                                    goto LABEL_213;
                                                                  }
                                                                  v74 = v72 | v69;
                                                                  goto LABEL_212;
                                                                }
                                                                goto LABEL_209;
                                                              }
                                                              goto LABEL_206;
                                                            }
                                                            v184 = 1;
                                                            v69 = 1;
                                                            LOBYTE(v185) = 1;
                                                            goto LABEL_206;
                                                          }
LABEL_203:
                                                          if ( (unsigned __int8)v69 | (a3 != 30) )
                                                          {
LABEL_204:
                                                            v52 |= v69;
                                                            goto LABEL_205;
                                                          }
                                                          if ( !(*(_QWORD *)a2 ^ 0x69666F72705F6F6ELL
                                                               | *((_QWORD *)a2 + 1) ^ 0x7274736E695F656CLL)
                                                            && *((_QWORD *)a2 + 2) == 0x75665F746E656D75LL
                                                            && *((_DWORD *)a2 + 6) == 1769235310
                                                            && a2[14] == 28271 )
                                                          {
                                                            v184 = 1;
                                                            v69 = 1;
                                                            LOBYTE(v185) = 1;
LABEL_207:
                                                            v71 = v69 | v67;
                                                            goto LABEL_208;
                                                          }
LABEL_206:
                                                          if ( !((unsigned __int8)v69 | v165) )
                                                          {
                                                            if ( *(_DWORD *)a2 == 1836020833 && a2[2] == 25449 )
                                                            {
                                                              LOBYTE(v185) = 1;
                                                              v69 = 1;
                                                              v184 = 1;
                                                              v72 = a3 != 5;
LABEL_211:
                                                              v74 = v69 | v72;
LABEL_212:
                                                              if ( v74 )
                                                              {
LABEL_213:
                                                                v75 = v69 | v165;
                                                                goto LABEL_214;
                                                              }
                                                              if ( *(_DWORD *)a2 != 1869771365
                                                                || *((_BYTE *)a2 + 4) != 114 )
                                                              {
                                                                v76 = v69;
                                                                goto LABEL_1360;
                                                              }
LABEL_1378:
                                                              v184 = 1;
                                                              v69 = 1;
                                                              LOBYTE(v185) = 1;
                                                              goto LABEL_216;
                                                            }
                                                            v73 = v69 | (a3 != 4);
                                                            v72 = a3 != 5;
LABEL_210:
                                                            if ( !v73 )
                                                            {
                                                              v75 = v69 | v165;
                                                              if ( *(_DWORD *)a2 != 1684828003 )
                                                              {
LABEL_214:
                                                                if ( !v75 )
                                                                {
                                                                  if ( *(_DWORD *)a2 == 1835888483 && a2[2] == 28271 )
                                                                  {
                                                                    v184 = 1;
                                                                    v69 = 1;
                                                                    LOBYTE(v185) = 1;
                                                                    goto LABEL_217;
                                                                  }
                                                                  goto LABEL_216;
                                                                }
                                                                v76 = v69 | v72;
                                                                if ( v76 )
                                                                {
LABEL_216:
                                                                  if ( v16 | (unsigned __int8)v69 )
                                                                  {
LABEL_217:
                                                                    v77 = v69 | v50;
LABEL_218:
                                                                    if ( v77 )
                                                                      goto LABEL_219;
                                                                    if ( *(_QWORD *)a2 == 0x6E755F656279616DLL
                                                                      && a2[4] == 25956
                                                                      && *((_BYTE *)a2 + 10) == 102 )
                                                                    {
                                                                      v184 = 1;
                                                                      v69 = 1;
                                                                      LOBYTE(v185) = 1;
                                                                      goto LABEL_221;
                                                                    }
LABEL_220:
                                                                    if ( !((unsigned __int8)v69 | v160) )
                                                                    {
                                                                      if ( *(_QWORD *)a2 != 0x615F656D75737361LL
                                                                        || *((_DWORD *)a2 + 2) != 1852270956
                                                                        || a2[6] != 25701 )
                                                                      {
                                                                        v78 = v68 | v69;
                                                                        goto LABEL_223;
                                                                      }
                                                                      v184 = 1;
                                                                      v69 = 1;
                                                                      LOBYTE(v185) = 1;
                                                                      goto LABEL_224;
                                                                    }
LABEL_221:
                                                                    if ( (unsigned __int8)v69 | (a3 != 27) )
                                                                    {
LABEL_222:
                                                                      v78 = v69 | v68;
LABEL_223:
                                                                      if ( v78 )
                                                                        goto LABEL_224;
                                                                      if ( *(_QWORD *)a2 ^ 0x62616D75736E6F63LL
                                                                         | *((_QWORD *)a2 + 1) ^ 0x5F6F7475615F656CLL
                                                                        || *((_QWORD *)a2 + 2) != 0x6174735F74736163LL
                                                                        || a2[12] != 25972 )
                                                                      {
LABEL_227:
                                                                        if ( !(*(_QWORD *)a2 ^ 0x7365726975716572LL
                                                                             | *((_QWORD *)a2 + 1)
                                                                             ^ 0x5F6465726168735FLL)
                                                                          && *((_QWORD *)a2 + 2) == 0x696C696261706163LL
                                                                          && a2[12] == 31092 )
                                                                        {
LABEL_452:
                                                                          v184 = 1;
                                                                          LOBYTE(v185) = 1;
                                                                        }
LABEL_229:
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "acquire_shared_capability",
                                                                          25);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "cf_unknown_transfer",
                                                                          19);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "exclusive_trylock_function",
                                                                          26);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "no_sanitize_memory",
                                                                          18);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "callback", 8);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "__const", 7);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "objc_boxable",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "swift_async_error",
                                                                          17);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "objc_non_runtime_protocol",
                                                                          25);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "enforce_tcb_leaf",
                                                                          16);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "objc_requires_property_definitions",
                                                                          34);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "swift_bridge",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "amdgpu_num_sgpr",
                                                                          15);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "nvptx_kernel",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "aarch64_sve_pcs",
                                                                          15);
                                                                        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "riscv_vls_cc",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "cf_audited_transfer",
                                                                          19);
                                                                        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
                                                                        sub_F8AC60((__int64)&s1, &v181, "near", 4);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "noconvergent",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "use_handle",
                                                                          10);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "require_explicit_initialization",
                                                                          31);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "ms_abi", 6);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "nonnull", 7);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "cf_returns_retained",
                                                                          19);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "swift_async_name",
                                                                          16);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "try_acquire_capability",
                                                                          22);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "no_specializations",
                                                                          18);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "annotate", 8);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "cpu_dispatch",
                                                                          12);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "neon_polyvector_type",
                                                                          20);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "assume", 6);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "swift_async",
                                                                          11);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "device", 6);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "nonallocating",
                                                                          13);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "regparm", 7);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "counted_by_or_null",
                                                                          18);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "lto_visibility_public",
                                                                          21);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "iboutletcollection",
                                                                          18);
                                                                        v79 = *(_DWORD *)(a6 + 248);
                                                                        LODWORD(v80) = 0;
                                                                        if ( v79 <= 0x26 )
                                                                          v80 = (0x7818138086uLL >> v79) & 1;
                                                                        v181 = v80;
                                                                        sub_F8AC60((__int64)&s1, &v181, "interrupt", 9);
                                                                        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 3) <= 2
                                                                            || (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "target_version",
                                                                          14);
                                                                        v181 = 1;
                                                                        sub_F8AC60((__int64)&s1, &v181, "aligned", 7);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "acquire_capability",
                                                                          18);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "objc_ownership",
                                                                          14);
                                                                        v181 = 1;
                                                                        sub_F8AC60(
                                                                          (__int64)&s1,
                                                                          &v181,
                                                                          "always_destroy",
                                                                          14);
                                                                        v81 = v185;
                                                                        if ( (_BYTE)v185 )
                                                                          goto LABEL_232;
                                                                        switch ( v183 )
                                                                        {
                                                                          case 14LL:
                                                                            if ( *(_QWORD *)s1 == 0x6572726566657270LL
                                                                              && *((_DWORD *)s1 + 2) == 2037669732
                                                                              && *((_WORD *)s1 + 6) == 25968 )
                                                                            {
                                                                              goto LABEL_1106;
                                                                            }
                                                                            break;
                                                                          case 15LL:
                                                                            if ( *(_QWORD *)s1 == 0x665F6B636F6C6E75LL
                                                                              && *((_DWORD *)s1 + 2) == 1952673397
                                                                              && *((_WORD *)s1 + 6) == 28521
                                                                              && *((_BYTE *)s1 + 14) == 110 )
                                                                            {
                                                                              goto LABEL_1106;
                                                                            }
                                                                            break;
                                                                          case 11LL:
                                                                            if ( *(_QWORD *)s1 == 0x74696E61735F6F6ELL
                                                                              && *((_WORD *)s1 + 4) == 31337
                                                                              && *((_BYTE *)s1 + 10) == 101 )
                                                                            {
                                                                              goto LABEL_1106;
                                                                            }
                                                                            goto LABEL_522;
                                                                        }
                                                                        if ( v183 == 20 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x755F726564616F6CLL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x6C616974696E696ELL)
                                                                            && *((_DWORD *)s1 + 4) == 1684372073 )
                                                                          {
                                                                            goto LABEL_1106;
                                                                          }
                                                                          goto LABEL_1103;
                                                                        }
LABEL_522:
                                                                        if ( v183 == 24 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x6F6E61635F696663LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x756A5F6C6163696ELL)
                                                                            && *((_QWORD *)s1 + 2) == 0x656C6261745F706DLL )
                                                                          {
                                                                            goto LABEL_1106;
                                                                          }
                                                                          goto LABEL_525;
                                                                        }
LABEL_1103:
                                                                        if ( v183 == 18 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x5F73656972726163LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x6E65646E65706564LL)
                                                                            && *((_WORD *)s1 + 8) == 31075 )
                                                                          {
                                                                            goto LABEL_1106;
                                                                          }
                                                                          goto LABEL_599;
                                                                        }
LABEL_525:
                                                                        if ( v183 == 19 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x65736F6E67616964LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x6C6975625F73615FLL)
                                                                            && *((_WORD *)s1 + 8) == 26996
                                                                            && *((_BYTE *)s1 + 18) == 110 )
                                                                          {
                                                                            goto LABEL_1106;
                                                                          }
                                                                          goto LABEL_528;
                                                                        }
LABEL_599:
                                                                        if ( v183 == 7 )
                                                                        {
                                                                          if ( *(_DWORD *)s1 == 1701080942
                                                                            && *((_WORD *)s1 + 2) == 25970
                                                                            && *((_BYTE *)s1 + 6) == 102 )
                                                                          {
                                                                            goto LABEL_1106;
                                                                          }
                                                                          goto LABEL_601;
                                                                        }
LABEL_528:
                                                                        if ( v183 == 11 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x6972625F636A626FLL
                                                                            && *((_WORD *)s1 + 4) == 26468
                                                                            && *((_BYTE *)s1 + 10) == 101 )
                                                                          {
LABEL_1106:
                                                                            v184 = 1;
                                                                            LOBYTE(v185) = 1;
LABEL_232:
                                                                            v82 = *(_DWORD *)(a6 + 248);
                                                                            v83 = v82;
                                                                            v84 = v82 - 16 <= 1;
                                                                            v85 = v84;
LABEL_233:
                                                                            v86 = v82 - 37 <= 1;
                                                                            v87 = v86;
                                                                            goto LABEL_234;
                                                                          }
                                                                          v82 = *(_DWORD *)(a6 + 248);
                                                                          v83 = v82;
                                                                          v84 = v82 - 16 <= 1;
                                                                          v85 = v84;
                                                                          goto LABEL_531;
                                                                        }
LABEL_601:
                                                                        v82 = *(_DWORD *)(a6 + 248);
                                                                        v83 = v82;
                                                                        v84 = v82 - 16 <= 1;
                                                                        v85 = v84;
                                                                        if ( v183 == 8 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x36317370696D6F6ELL )
                                                                          {
                                                                            v184 = v84;
                                                                            LOBYTE(v185) = 1;
                                                                            goto LABEL_233;
                                                                          }
                                                                          goto LABEL_603;
                                                                        }
LABEL_531:
                                                                        if ( v183 == 6 )
                                                                        {
                                                                          if ( *(_DWORD *)s1 == 1918986355
                                                                            && *((_WORD *)s1 + 2) == 25701 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_533;
                                                                        }
LABEL_603:
                                                                        if ( v183 == 13 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x64726175675F7470LL
                                                                            && *((_DWORD *)s1 + 2) == 1650418789
                                                                            && *((_BYTE *)s1 + 12) == 121 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_605;
                                                                        }
LABEL_533:
                                                                        if ( v183 == 18 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x66696C5F6F726F63LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x756F62656D697465LL)
                                                                            && *((_WORD *)s1 + 8) == 25710 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_536;
                                                                        }
LABEL_605:
                                                                        if ( v183 == 46 )
                                                                        {
                                                                          v163 = v84;
                                                                          v148 = memcmp(
                                                                                   s1,
                                                                                   "objc_protocol_requires_explicit_implementation",
                                                                                   0x2Eu);
                                                                          v84 = v163;
                                                                          if ( !v148 )
                                                                            goto LABEL_624;
                                                                          goto LABEL_607;
                                                                        }
LABEL_536:
                                                                        if ( v183 == 7 )
                                                                        {
                                                                          if ( *(_DWORD *)s1 == 1701080942
                                                                            && *((_WORD *)s1 + 2) == 30050
                                                                            && *((_BYTE *)s1 + 6) == 103 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_538;
                                                                        }
LABEL_607:
                                                                        if ( v183 == 26 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x65726464615F6F6ELL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x74656661735F7373LL)
                                                                            && *((_QWORD *)s1 + 2) == 0x73796C616E615F79LL
                                                                            && *((_WORD *)s1 + 12) == 29545 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_610;
                                                                        }
LABEL_538:
                                                                        if ( v183 == 15 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x79745F6D61726170LL
                                                                            && *((_DWORD *)s1 + 2) == 1953719664
                                                                            && *((_WORD *)s1 + 6) == 29793
                                                                            && *((_BYTE *)s1 + 14) == 101 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_540;
                                                                        }
LABEL_610:
                                                                        if ( v183 == 9 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x756E655F67616C66LL
                                                                            && *((_BYTE *)s1 + 8) == 109 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_612;
                                                                        }
LABEL_540:
                                                                        if ( v183 == 19 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x6972625F636A626FLL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x6174756D5F656764LL)
                                                                            && *((_WORD *)s1 + 8) == 27746
                                                                            && *((_BYTE *)s1 + 18) == 101 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_543;
                                                                        }
LABEL_612:
                                                                        if ( v183 == 13 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x657079745F746573LL
                                                                            && *((_DWORD *)s1 + 2) == 1952543859
                                                                            && *((_BYTE *)s1 + 12) == 101 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_614;
                                                                        }
LABEL_543:
                                                                        if ( v183 == 4 )
                                                                        {
                                                                          if ( *(_DWORD *)s1 == 1701080941 )
                                                                            goto LABEL_624;
                                                                          goto LABEL_545;
                                                                        }
LABEL_614:
                                                                        if ( v183 == 11 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x735F726F74636576LL
                                                                            && *((_WORD *)s1 + 4) == 31337
                                                                            && *((_BYTE *)s1 + 10) == 101 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_616;
                                                                        }
LABEL_545:
                                                                        if ( v183 == 17 )
                                                                        {
                                                                          if ( !(*(_QWORD *)s1 ^ 0x72657A796C616E61LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x72757465726F6E5FLL)
                                                                            && *((_BYTE *)s1 + 16) == 110 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_548;
                                                                        }
LABEL_616:
                                                                        if ( v183 == 12 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x6172775F6F726F63LL
                                                                            && *((_DWORD *)s1 + 2) == 1919250544 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_618;
                                                                        }
LABEL_548:
                                                                        if ( v183 == 5 )
                                                                        {
                                                                          if ( *(_DWORD *)s1 == 1701536110
                                                                            && *((_BYTE *)s1 + 4) == 100 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_550;
                                                                        }
LABEL_618:
                                                                        if ( v183 == 11 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x75736E6F635F6663LL
                                                                            && *((_WORD *)s1 + 4) == 25965
                                                                            && *((_BYTE *)s1 + 10) == 100 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_620;
                                                                        }
LABEL_550:
                                                                        if ( v183 == 15 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x6E5F757067646D61LL
                                                                            && *((_DWORD *)s1 + 2) == 1985965429
                                                                            && *((_WORD *)s1 + 6) == 28775
                                                                            && *((_BYTE *)s1 + 14) == 114 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
                                                                          goto LABEL_552;
                                                                        }
LABEL_620:
                                                                        if ( v183 == 8 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x676E696B636F6C62LL )
                                                                            goto LABEL_624;
                                                                          goto LABEL_622;
                                                                        }
LABEL_552:
                                                                        if ( v183 == 10 )
                                                                        {
                                                                          if ( *(_QWORD *)s1 == 0x5F64656472617567LL
                                                                            && *((_WORD *)s1 + 4) == 31074 )
                                                                          {
                                                                            goto LABEL_624;
                                                                          }
LABEL_554:
                                                                          if ( v183 == 31 )
                                                                          {
                                                                            v162 = v84;
                                                                            v147 = memcmp(
                                                                                     s1,
                                                                                     "require_constant_initialization",
                                                                                     0x1Fu);
                                                                            v84 = v162;
                                                                            if ( !v147 )
                                                                              goto LABEL_624;
                                                                          }
LABEL_556:
                                                                          if ( v183 == 13 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x6E6F635F64697267LL
                                                                              && *((_DWORD *)s1 + 2) == 1851880563
                                                                              && *((_BYTE *)s1 + 12) == 116 )
                                                                            {
                                                                              goto LABEL_624;
                                                                            }
                                                                            if ( *(_QWORD *)s1 == 0x6B5F757067646D61LL
                                                                              && *((_DWORD *)s1 + 2) == 1701737061
                                                                              && *((_BYTE *)s1 + 12) == 108 )
                                                                            {
                                                                              v184 = 1;
                                                                              LOBYTE(v185) = 1;
                                                                              v86 = v82 - 37 <= 1;
                                                                              v87 = v86;
                                                                              goto LABEL_234;
                                                                            }
                                                                            v86 = v82 - 37 <= 1;
                                                                            v87 = v86;
                                                                            if ( (_BYTE)v185 )
                                                                            {
LABEL_234:
                                                                              v81 = 1;
                                                                              goto LABEL_235;
                                                                            }
                                                                          }
                                                                          else
                                                                          {
                                                                            v86 = v82 - 37 <= 1;
                                                                            v87 = v86;
                                                                            if ( v183 == 15 )
                                                                            {
                                                                              if ( *(_QWORD *)s1 == 0x6E6F6974636E7566LL
                                                                                && *((_DWORD *)s1 + 2) == 1952805471
                                                                                && *((_WORD *)s1 + 6) == 29301
                                                                                && *((_BYTE *)s1 + 14) == 110 )
                                                                              {
                                                                                v184 = v86;
                                                                                LOBYTE(v185) = 1;
                                                                                goto LABEL_234;
                                                                              }
                                                                              goto LABEL_625;
                                                                            }
                                                                          }
                                                                          if ( v183 == 8 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x6C6C616373696874LL )
                                                                              goto LABEL_655;
                                                                            goto LABEL_562;
                                                                          }
LABEL_625:
                                                                          if ( v183 == 27 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x72757465725F736FLL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x69617465725F736ELL)
                                                                              && *((_QWORD *)s1 + 2) == 0x7A5F6E6F5F64656ELL
                                                                              && *((_WORD *)s1 + 12) == 29285
                                                                              && *((_BYTE *)s1 + 26) == 111 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_630;
                                                                          }
LABEL_562:
                                                                          if ( v183 == 6 )
                                                                          {
                                                                            if ( *(_DWORD *)s1 == 1819042157
                                                                              && *((_WORD *)s1 + 2) == 25455 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_564;
                                                                          }
LABEL_630:
                                                                          if ( v183 == 13 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x72775F7466697773LL
                                                                              && *((_DWORD *)s1 + 2) == 1701867617
                                                                              && *((_BYTE *)s1 + 12) == 114 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_632;
                                                                          }
LABEL_564:
                                                                          if ( v183 == 20 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x696C5F7670736C63LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x6975625F636C6362LL)
                                                                              && *((_DWORD *)s1 + 4) == 1852404844 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_567;
                                                                          }
LABEL_632:
                                                                          if ( v183 == 8 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x6C6C616374736166LL )
                                                                              goto LABEL_655;
                                                                            goto LABEL_634;
                                                                          }
LABEL_567:
                                                                          if ( v183 == 7 )
                                                                          {
                                                                            if ( *(_DWORD *)s1 == 1936615789
                                                                              && *((_WORD *)s1 + 2) == 31337
                                                                              && *((_BYTE *)s1 + 6) == 101 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_569;
                                                                          }
LABEL_634:
                                                                          if ( v183 == 11 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x745F78697274616DLL
                                                                              && *((_WORD *)s1 + 4) == 28793
                                                                              && *((_BYTE *)s1 + 10) == 101 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_638;
                                                                          }
LABEL_569:
                                                                          if ( v183 == 21 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x76725F7663736972LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x726F746365765F76LL)
                                                                              && *((_DWORD *)s1 + 4) == 1953063519
                                                                              && *((_BYTE *)s1 + 20) == 115 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_572;
                                                                          }
LABEL_638:
                                                                          if ( v183 == 9 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x7275746572636576LL
                                                                              && *((_BYTE *)s1 + 8) == 110 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_641;
                                                                          }
LABEL_572:
                                                                          if ( v183 == 18 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x756E755F6E726177LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x757365725F646573LL)
                                                                              && *((_WORD *)s1 + 8) == 29804 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_575;
                                                                          }
LABEL_641:
                                                                          if ( v183 == 27 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x665F757067646D61LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x6B726F775F74616CLL)
                                                                              && *((_QWORD *)s1 + 2) == 0x735F70756F72675FLL
                                                                              && *((_WORD *)s1 + 12) == 31337
                                                                              && *((_BYTE *)s1 + 26) == 101 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_646;
                                                                          }
LABEL_575:
                                                                          if ( v183 == 23 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x745F646572616873LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x665F6B636F6C7972LL)
                                                                              && *((_DWORD *)s1 + 4) == 1952673397
                                                                              && *((_WORD *)s1 + 10) == 28521
                                                                              && *((_BYTE *)s1 + 22) == 110 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_578;
                                                                          }
LABEL_646:
                                                                          if ( v183 == 18 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x5F34366863726161LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x705F726F74636576LL)
                                                                              && *((_WORD *)s1 + 8) == 29539 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_649;
                                                                          }
LABEL_578:
                                                                          if ( v183 == 10 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x62616D75736E6F63LL
                                                                              && *((_WORD *)s1 + 4) == 25964 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_580;
                                                                          }
LABEL_649:
                                                                          if ( v183 == 11 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x6F7268746C6C6166LL
                                                                              && *((_WORD *)s1 + 4) == 26485
                                                                              && *((_BYTE *)s1 + 10) == 104 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
                                                                            goto LABEL_651;
                                                                          }
LABEL_580:
                                                                          if ( v183 == 16 )
                                                                          {
                                                                            if ( !(*(_QWORD *)s1 ^ 0x6C616E7265746E69LL
                                                                                 | *((_QWORD *)s1 + 1)
                                                                                 ^ 0x6567616B6E696C5FLL) )
                                                                              goto LABEL_655;
                                                                            goto LABEL_582;
                                                                          }
LABEL_651:
                                                                          if ( v183 == 11 )
                                                                          {
                                                                            if ( *(_QWORD *)s1 == 0x706D695F6B616577LL
                                                                              && *((_WORD *)s1 + 4) == 29295
                                                                              && *((_BYTE *)s1 + 10) == 116 )
                                                                            {
                                                                              goto LABEL_655;
                                                                            }
LABEL_585:
                                                                            if ( v183 != 24 )
                                                                            {
                                                                              if ( v183 == 8 )
                                                                              {
                                                                                if ( *(_QWORD *)s1 == 0x7373657270707573LL )
                                                                                  goto LABEL_714;
                                                                                goto LABEL_711;
                                                                              }
LABEL_591:
                                                                              if ( v183 == 15 )
                                                                              {
                                                                                if ( *(_QWORD *)s1 == 0x6C6961745F746F6ELL
                                                                                  && *((_DWORD *)s1 + 2) == 1818321759
                                                                                  && *((_WORD *)s1 + 6) == 25964
                                                                                  && *((_BYTE *)s1 + 14) == 100 )
                                                                                {
                                                                                  goto LABEL_714;
                                                                                }
LABEL_593:
                                                                                if ( v183 != 15
                                                                                  || *(_QWORD *)s1 != 0x65765F7663736972LL
                                                                                  || *((_DWORD *)s1 + 2) != 1919906915
                                                                                  || *((_WORD *)s1 + 6) != 25439
                                                                                  || *((_BYTE *)s1 + 14) != 99 )
                                                                                {
                                                                                  v88 = 0;
                                                                                  if ( v82 != 3 )
                                                                                    goto LABEL_596;
LABEL_1206:
                                                                                  v83 = 3;
                                                                                  v88 = *(_DWORD *)(a6 + 252) == 36;
LABEL_236:
                                                                                  if ( v81 )
                                                                                  {
                                                                                    v89 = *(_DWORD *)(a6 + 260);
LABEL_238:
                                                                                    v90 = 1;
                                                                                    goto LABEL_239;
                                                                                  }
LABEL_596:
                                                                                  if ( v183 == 16 )
                                                                                  {
                                                                                    if ( !(*(_QWORD *)s1
                                                                                         ^ 0x705F646972627968LL
                                                                                         | *((_QWORD *)s1 + 1)
                                                                                         ^ 0x656C626168637461LL) )
                                                                                    {
                                                                                      v184 = v88;
                                                                                      v89 = *(_DWORD *)(a6 + 260);
                                                                                      LOBYTE(v185) = 1;
                                                                                      goto LABEL_238;
                                                                                    }
                                                                                    v89 = *(_DWORD *)(a6 + 260);
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v89 = *(_DWORD *)(a6 + 260);
                                                                                    if ( v183 == 13 )
                                                                                    {
                                                                                      if ( *(_QWORD *)s1 == 0x6972705F74696E69LL
                                                                                        && *((_DWORD *)s1 + 2) == 1953067631
                                                                                        && *((_BYTE *)s1 + 12) == 121 )
                                                                                      {
                                                                                        LOBYTE(v185) = 1;
                                                                                        v184 = v89 != 16;
                                                                                        goto LABEL_238;
                                                                                      }
                                                                                      goto LABEL_1109;
                                                                                    }
                                                                                  }
                                                                                  if ( v183 == 16 )
                                                                                  {
                                                                                    if ( !(*(_QWORD *)s1
                                                                                         ^ 0x6F6C61646E617473LL
                                                                                         | *((_QWORD *)s1 + 1)
                                                                                         ^ 0x67756265645F656ELL) )
                                                                                    {
LABEL_1126:
                                                                                      v184 = 1;
                                                                                      LOBYTE(v185) = 1;
                                                                                      goto LABEL_238;
                                                                                    }
                                                                                    goto LABEL_1132;
                                                                                  }
LABEL_1109:
                                                                                  if ( v183 == 11 )
                                                                                  {
                                                                                    if ( *(_QWORD *)s1 == 0x72656B5F6C637973LL
                                                                                      && *((_WORD *)s1 + 4) == 25966
                                                                                      && *((_BYTE *)s1 + 10) == 108 )
                                                                                    {
                                                                                      goto LABEL_1126;
                                                                                    }
                                                                                    goto LABEL_1111;
                                                                                  }
LABEL_1132:
                                                                                  if ( v183 == 10 )
                                                                                  {
                                                                                    if ( *(_QWORD *)s1 == 0x61635F74726F6873LL
                                                                                      && *((_WORD *)s1 + 4) == 27756 )
                                                                                    {
                                                                                      LOBYTE(v185) = 1;
                                                                                      v184 = v83 - 18 <= 1 || v84;
                                                                                      goto LABEL_238;
                                                                                    }
                                                                                    goto LABEL_1127;
                                                                                  }
LABEL_1111:
                                                                                  if ( v183 == 12 )
                                                                                  {
                                                                                    if ( *(_QWORD *)s1 == 0x657079745F667462LL
                                                                                      && *((_DWORD *)s1 + 2) == 1734440031 )
                                                                                    {
                                                                                      goto LABEL_1126;
                                                                                    }
                                                                                    goto LABEL_1113;
                                                                                  }
LABEL_1127:
                                                                                  if ( v183 == 21 )
                                                                                  {
                                                                                    if ( !(*(_QWORD *)s1
                                                                                         ^ 0x6572705F636A626FLL
                                                                                         | *((_QWORD *)s1 + 1)
                                                                                         ^ 0x66696C5F65736963LL)
                                                                                      && *((_DWORD *)s1 + 4) == 1835627621
                                                                                      && *((_BYTE *)s1 + 20) == 101 )
                                                                                    {
                                                                                      goto LABEL_1126;
                                                                                    }
LABEL_1115:
                                                                                    switch ( v183 )
                                                                                    {
                                                                                      case 10LL:
                                                                                        if ( *(_QWORD *)s1 == 0x5F6465746E756F63LL
                                                                                          && *((_WORD *)s1 + 4) == 31074
                                                                                          || *(_QWORD *)s1 == 0x696C615F65646F63LL
                                                                                          && *((_WORD *)s1 + 4) == 28263 )
                                                                                        {
                                                                                          goto LABEL_1126;
                                                                                        }
                                                                                        if ( (_BYTE)v185 )
                                                                                          goto LABEL_238;
                                                                                        break;
                                                                                      case 9LL:
                                                                                        if ( *(_QWORD *)s1 == 0x695F656C62616E65LL
                                                                                          && *((_BYTE *)s1 + 8) == 102 )
                                                                                        {
                                                                                          goto LABEL_1126;
                                                                                        }
LABEL_471:
                                                                                        if ( v183 != 10
                                                                                          || *(_QWORD *)s1 != 0x696C696261706163LL
                                                                                          || *((_WORD *)s1 + 4) != 31092 )
                                                                                        {
                                                                                          v90 = 0;
                                                                                          if ( v83 > 0x33 )
                                                                                          {
                                                                                            LODWORD(v91) = 0;
                                                                                            goto LABEL_475;
                                                                                          }
LABEL_240:
                                                                                          v91 = (0xE064006006000uLL >> v83)
                                                                                              & 1;
LABEL_241:
                                                                                          if ( v90 )
                                                                                          {
LABEL_242:
                                                                                            v92 = 1;
                                                                                            goto LABEL_243;
                                                                                          }
LABEL_475:
                                                                                          switch ( v183 )
                                                                                          {
                                                                                            case 5LL:
                                                                                              if ( *(_DWORD *)s1 == 1701080941
                                                                                                && *((_BYTE *)s1 + 4) == 108 )
                                                                                              {
                                                                                                goto LABEL_1889;
                                                                                              }
                                                                                              break;
                                                                                            case 23LL:
                                                                                              if ( !(*(_QWORD *)s1 ^ 0x766973756C637865LL | *((_QWORD *)s1 + 1) ^ 0x665F6B636F6C5F65LL)
                                                                                                && *((_DWORD *)s1 + 4) == 1952673397
                                                                                                && *((_WORD *)s1 + 10) == 28521
                                                                                                && *((_BYTE *)s1 + 22) == 110 )
                                                                                              {
                                                                                                goto LABEL_517;
                                                                                              }
                                                                                              break;
                                                                                            case 14LL:
                                                                                              if ( *(_QWORD *)s1 == 0x625F656369766564LL
                                                                                                && *((_DWORD *)s1 + 2) == 1953261941
                                                                                                && *((_WORD *)s1 + 6) == 28265 )
                                                                                              {
                                                                                                goto LABEL_517;
                                                                                              }
                                                                                              goto LABEL_479;
                                                                                          }
                                                                                          if ( v183 == 26 )
                                                                                          {
                                                                                            if ( !(*(_QWORD *)s1
                                                                                                 ^ 0x7369645F6F726F63LL
                                                                                                 | *((_QWORD *)s1 + 1)
                                                                                                 ^ 0x66696C5F656C6261LL)
                                                                                              && *((_QWORD *)s1 + 2) == 0x756F62656D697465LL
                                                                                              && *((_WORD *)s1 + 12) == 25710 )
                                                                                            {
                                                                                              goto LABEL_517;
                                                                                            }
                                                                                            goto LABEL_1149;
                                                                                          }
LABEL_479:
                                                                                          if ( v183 == 33 )
                                                                                          {
                                                                                            if ( !(*(_QWORD *)s1
                                                                                                 ^ 0x5F656C6261736964LL
                                                                                                 | *((_QWORD *)s1 + 1)
                                                                                                 ^ 0x657A6974696E6173LL)
                                                                                              && !(*((_QWORD *)s1 + 2)
                                                                                                 ^ 0x757274736E695F72LL
                                                                                                 | *((_QWORD *)s1 + 3)
                                                                                                 ^ 0x6F697461746E656DLL)
                                                                                              && *((_BYTE *)s1 + 32) == 110 )
                                                                                            {
                                                                                              goto LABEL_517;
                                                                                            }
                                                                                            goto LABEL_483;
                                                                                          }
LABEL_1149:
                                                                                          if ( v183 == 22 )
                                                                                          {
                                                                                            if ( !(*(_QWORD *)s1
                                                                                                 ^ 0x5F68747561727470LL
                                                                                                 | *((_QWORD *)s1 + 1)
                                                                                                 ^ 0x705F656C62617476LL)
                                                                                              && *((_DWORD *)s1 + 4) == 1953393007
                                                                                              && *((_WORD *)s1 + 10) == 29285 )
                                                                                            {
                                                                                              goto LABEL_517;
                                                                                            }
                                                                                            goto LABEL_1153;
                                                                                          }
LABEL_483:
                                                                                          if ( v183 == 6 )
                                                                                          {
                                                                                            if ( *(_DWORD *)s1 == 1635018098
                                                                                              && *((_WORD *)s1 + 2) == 28265 )
                                                                                            {
                                                                                              goto LABEL_517;
                                                                                            }
LABEL_485:
                                                                                            switch ( v183 )
                                                                                            {
                                                                                              case 35LL:
                                                                                                if ( !(*(_QWORD *)s1 ^ 0x5F676E616C635F5FLL | *((_QWORD *)s1 + 1) ^ 0x5F65766D5F6D7261LL) && !(*((_QWORD *)s1 + 2) ^ 0x705F746369727473LL | *((_QWORD *)s1 + 3) ^ 0x6870726F6D796C6FLL) && *((_WORD *)s1 + 16) == 29545 && *((_BYTE *)s1 + 34) == 109 )
                                                                                                {
                                                                                                  LODWORD(v91) = v83 - 1 <= 1 || v83 - 35 <= 1;
LABEL_1889:
                                                                                                  v184 = v91;
                                                                                                  LOBYTE(v185) = 1;
                                                                                                  goto LABEL_242;
                                                                                                }
                                                                                                break;
                                                                                              case 12LL:
                                                                                                if ( *(_QWORD *)s1 == 0x6576726573657270LL && *((_DWORD *)s1 + 2) == 1819042143 )
                                                                                                  goto LABEL_517;
                                                                                                break;
                                                                                              case 16LL:
                                                                                                if ( !(*(_QWORD *)s1 ^ 0x745F6E7275746572LL | *((_QWORD *)s1 + 1) ^ 0x6574617473657079LL) )
                                                                                                  goto LABEL_517;
                                                                                                goto LABEL_491;
                                                                                            }
                                                                                            if ( v183 == 7 )
                                                                                            {
                                                                                              if ( *(_DWORD *)s1 == 1701670766
                                                                                                && *((_WORD *)s1 + 2) == 26482
                                                                                                && *((_BYTE *)s1 + 6) == 101 )
                                                                                              {
                                                                                                goto LABEL_517;
                                                                                              }
                                                                                              goto LABEL_509;
                                                                                            }
LABEL_491:
                                                                                            if ( v183 == 8 )
                                                                                            {
                                                                                              if ( *(_QWORD *)s1 != 0x746E6174736E6F63LL )
                                                                                                goto LABEL_493;
                                                                                              goto LABEL_517;
                                                                                            }
LABEL_509:
                                                                                            if ( v183 != 31 )
                                                                                            {
LABEL_493:
                                                                                              if ( v183 == 21 )
                                                                                              {
                                                                                                if ( !(*(_QWORD *)s1 ^ 0x6C5F646572616873LL | *((_QWORD *)s1 + 1) ^ 0x7165725F736B636FLL) && *((_DWORD *)s1 + 4) == 1701996917 && *((_BYTE *)s1 + 20) == 100 )
                                                                                                  goto LABEL_517;
                                                                                                goto LABEL_496;
                                                                                              }
LABEL_511:
                                                                                              if ( v183 == 11 )
                                                                                              {
                                                                                                if ( *(_QWORD *)s1 == 0x65736F6E67616964LL && *((_WORD *)s1 + 4) == 26975 && *((_BYTE *)s1 + 10) == 102 )
                                                                                                  goto LABEL_517;
                                                                                                goto LABEL_513;
                                                                                              }
LABEL_496:
                                                                                              if ( v183 == 10 )
                                                                                              {
                                                                                                if ( *(_QWORD *)s1 == 0x616E5F7466697773LL && *((_WORD *)s1 + 4) == 25965 )
                                                                                                  goto LABEL_517;
LABEL_498:
                                                                                                if ( v183 == 20 )
                                                                                                {
                                                                                                  if ( (*(_QWORD *)s1 ^ 0x6F72675F6B726F77LL | *((_QWORD *)s1 + 1) ^ 0x5F657A69735F7075LL || *((_DWORD *)s1 + 4) != 1953393000) && (*(_QWORD *)s1 ^ 0x68636E755F696663LL | *((_QWORD *)s1 + 1) ^ 0x61635F64656B6365LL || *((_DWORD *)s1 + 4) != 1701145708) )
                                                                                                  {
                                                                                                    v92 = v185;
LABEL_243:
                                                                                                    v93 = *(_DWORD *)(a6 + 268);
                                                                                                    v94 = v83 - 3;
                                                                                                    v95 = 1;
                                                                                                    if ( v93 == 5 )
                                                                                                      goto LABEL_247;
                                                                                                    goto LABEL_244;
                                                                                                  }
                                                                                                }
                                                                                                else if ( v183 != 18 || *(_QWORD *)s1 ^ 0x767265735F67696DLL | *((_QWORD *)s1 + 1) ^ 0x6974756F725F7265LL || *((_WORD *)s1 + 8) != 25966 )
                                                                                                {
                                                                                                  v93 = *(_DWORD *)(a6 + 268);
                                                                                                  v94 = v83 - 3;
                                                                                                  v92 = 0;
                                                                                                  if ( v93 == 5 )
                                                                                                  {
                                                                                                    v95 = 1;
                                                                                                    goto LABEL_248;
                                                                                                  }
LABEL_244:
                                                                                                  if ( v89 != 15 || (v95 = 1, v94 > 2) )
                                                                                                  {
                                                                                                    v95 = 1;
                                                                                                    if ( v83 != 7 )
                                                                                                    {
                                                                                                      v95 = 0;
                                                                                                      if ( v93 == 3 )
                                                                                                      {
                                                                                                        v95 = v89 == 3;
                                                                                                        if ( v89 == 7 )
                                                                                                          v95 = *(_DWORD *)(a6 + 264) != 49 && (unsigned int)(*(_DWORD *)(a6 + 264) - 18) > 7;
                                                                                                      }
                                                                                                    }
                                                                                                  }
LABEL_247:
                                                                                                  if ( v92 )
                                                                                                    return v184;
LABEL_248:
                                                                                                  switch ( v183 )
                                                                                                  {
                                                                                                    case 5LL:
                                                                                                      if ( *(_DWORD *)s1 == 1853187689 && *((_BYTE *)s1 + 4) == 99 )
                                                                                                        return v95;
                                                                                                      break;
                                                                                                    case 14LL:
                                                                                                      if ( *(_QWORD *)s1 == 0x6378655F636A626FLL && *((_DWORD *)s1 + 2) == 1769238629 && *((_WORD *)s1 + 6) == 28271 )
                                                                                                        return 1;
                                                                                                      break;
                                                                                                    case 19LL:
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x72757465725F736FLL | *((_QWORD *)s1 + 1) ^ 0x69617465725F736ELL) && *((_WORD *)s1 + 8) == 25966 && *((_BYTE *)s1 + 18) == 100 )
                                                                                                        return 1;
                                                                                                      goto LABEL_253;
                                                                                                  }
                                                                                                  if ( v183 == 11 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x63757274736E6F63LL && *((_WORD *)s1 + 4) == 28532 && *((_BYTE *)s1 + 10) == 114 )
                                                                                                      return 1;
                                                                                                    goto LABEL_719;
                                                                                                  }
LABEL_253:
                                                                                                  if ( v183 == 14 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x78655F736B636F6CLL && *((_DWORD *)s1 + 2) == 1685417059 && *((_WORD *)s1 + 6) == 25701 )
                                                                                                      return 1;
                                                                                                    goto LABEL_255;
                                                                                                  }
LABEL_719:
                                                                                                  if ( v183 == 23 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6C615F6563726F66LL | *((_QWORD *)s1 + 1) ^ 0x5F6772615F6E6769LL) && *((_DWORD *)s1 + 4) == 1852403568 && *((_WORD *)s1 + 10) == 25972 && *((_BYTE *)s1 + 22) == 114 )
                                                                                                      return v87;
                                                                                                    goto LABEL_722;
                                                                                                  }
LABEL_255:
                                                                                                  if ( v183 == 22 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x646E695F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x746E65646E657065LL) && *((_DWORD *)s1 + 4) == 1634493279 && *((_WORD *)s1 + 10) == 29555 )
                                                                                                      return 1;
                                                                                                    goto LABEL_258;
                                                                                                  }
LABEL_722:
                                                                                                  if ( v183 == 11 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x72655F7466697773LL && *((_WORD *)s1 + 4) == 28530 && *((_BYTE *)s1 + 10) == 114 )
                                                                                                      return 1;
                                                                                                    goto LABEL_724;
                                                                                                  }
LABEL_258:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x746C6975625F6F6ELL && *((_WORD *)s1 + 4) == 28265 )
                                                                                                      return 1;
                                                                                                    goto LABEL_260;
                                                                                                  }
LABEL_724:
                                                                                                  if ( v183 == 26 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6D5F757067646D61LL | *((_QWORD *)s1 + 1) ^ 0x775F6D756E5F7861LL) && *((_QWORD *)s1 + 2) == 0x756F72675F6B726FLL && *((_WORD *)s1 + 12) == 29552 )
                                                                                                      return 1;
                                                                                                    goto LABEL_727;
                                                                                                  }
LABEL_260:
                                                                                                  if ( v183 == 22 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6C616E7265747865LL | *((_QWORD *)s1 + 1) ^ 0x5F656372756F735FLL) && *((_DWORD *)s1 + 4) == 1651341683 && *((_WORD *)s1 + 10) == 27759 )
                                                                                                      return 20230206;
                                                                                                    goto LABEL_263;
                                                                                                  }
LABEL_727:
                                                                                                  if ( v183 == 17 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x635F747265737361LL | *((_QWORD *)s1 + 1) ^ 0x74696C6962617061LL) && *((_BYTE *)s1 + 16) == 121 )
                                                                                                      return 1;
                                                                                                    goto LABEL_730;
                                                                                                  }
LABEL_263:
                                                                                                  if ( v183 == 12 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6962616C69617661LL && *((_DWORD *)s1 + 2) == 2037672300 )
                                                                                                      return 1;
                                                                                                    goto LABEL_265;
                                                                                                  }
LABEL_730:
                                                                                                  if ( v183 == 9 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6E697274736E6F6ELL && *((_BYTE *)s1 + 8) == 103 )
                                                                                                      return 1;
                                                                                                    goto LABEL_732;
                                                                                                  }
LABEL_265:
                                                                                                  if ( v183 == 19 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x7365726975716572LL | *((_QWORD *)s1 + 1) ^ 0x6C6962617061635FLL) && *((_WORD *)s1 + 8) == 29801 && *((_BYTE *)s1 + 18) == 121 )
                                                                                                      return 1;
                                                                                                    goto LABEL_268;
                                                                                                  }
LABEL_732:
                                                                                                  if ( v183 == 13 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x656E5F7466697773LL && *((_DWORD *)s1 + 2) == 1887007863 && *((_BYTE *)s1 + 12) == 101 )
                                                                                                      return 1;
                                                                                                    goto LABEL_734;
                                                                                                  }
LABEL_268:
                                                                                                  if ( v183 == 23 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x72757465725F736ELL | *((_QWORD *)s1 + 1) ^ 0x726F7475615F736ELL) && *((_DWORD *)s1 + 4) == 1634036837 && *((_WORD *)s1 + 10) == 25971 && *((_BYTE *)s1 + 22) == 100 )
                                                                                                      return 1;
                                                                                                    goto LABEL_271;
                                                                                                  }
LABEL_734:
                                                                                                  if ( v183 == 15 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6C5F6465706F6373LL && *((_DWORD *)s1 + 2) == 1634427759 && *((_WORD *)s1 + 6) == 27746 && *((_BYTE *)s1 + 14) == 101 )
                                                                                                      return 1;
                                                                                                    goto LABEL_736;
                                                                                                  }
LABEL_271:
                                                                                                  if ( v183 == 4 )
                                                                                                  {
                                                                                                    if ( *(_DWORD *)s1 == 1801545079 )
                                                                                                      return 1;
                                                                                                    goto LABEL_273;
                                                                                                  }
LABEL_736:
                                                                                                  if ( v183 == 8 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6C656E69746E6573LL )
                                                                                                      return 1;
                                                                                                    goto LABEL_738;
                                                                                                  }
LABEL_273:
                                                                                                  if ( v183 == 9 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x65646F6D5F736C74LL && *((_BYTE *)s1 + 8) == 108 )
                                                                                                      return 1;
                                                                                                    goto LABEL_275;
                                                                                                  }
LABEL_738:
                                                                                                  if ( v183 == 4 )
                                                                                                  {
                                                                                                    if ( *(_DWORD *)s1 == 1717658988 )
                                                                                                      return 1;
                                                                                                    goto LABEL_740;
                                                                                                  }
LABEL_275:
                                                                                                  if ( v183 == 21 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6E695F7466697773LL | *((_QWORD *)s1 + 1) ^ 0x725F746365726964LL) && *((_DWORD *)s1 + 4) == 1819636581 && *((_BYTE *)s1 + 20) == 116 )
                                                                                                      return 1;
                                                                                                    goto LABEL_278;
                                                                                                  }
LABEL_740:
                                                                                                  if ( v183 == 20 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6E75725F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x7369765F656D6974LL) && *((_DWORD *)s1 + 4) == 1701601897 )
                                                                                                      return 1;
                                                                                                    goto LABEL_281;
                                                                                                  }
LABEL_278:
                                                                                                  if ( v183 == 19 && !(*(_QWORD *)s1 ^ 0x5F6576735F6D7261LL | *((_QWORD *)s1 + 1) ^ 0x625F726F74636576LL) && *((_WORD *)s1 + 8) == 29801 && *((_BYTE *)s1 + 18) == 115 )
                                                                                                    return 1;
LABEL_281:
                                                                                                  switch ( v183 )
                                                                                                  {
                                                                                                    case 14LL:
                                                                                                      if ( *(_QWORD *)s1 == 0x6D5F74616D726F66LL && *((_DWORD *)s1 + 2) == 1751348321 && *((_WORD *)s1 + 6) == 29541 )
                                                                                                        return 1;
                                                                                                      if ( *(_QWORD *)s1 == 0x74696C70735F6F6ELL && *((_DWORD *)s1 + 2) == 1635021663 && *((_WORD *)s1 + 6) == 27491 )
                                                                                                        return 1;
                                                                                                      if ( (_BYTE)v185 )
                                                                                                        return v184;
                                                                                                      break;
                                                                                                    case 15LL:
                                                                                                      if ( *(_QWORD *)s1 == 0x616C635F636A626FLL && *((_DWORD *)s1 + 2) == 1935635315 && *((_WORD *)s1 + 6) == 30068 && *((_BYTE *)s1 + 14) == 98 )
                                                                                                        return 1;
                                                                                                      break;
                                                                                                    case 13LL:
                                                                                                      if ( *(_QWORD *)s1 == 0x676F6C5F79617278LL && *((_DWORD *)s1 + 2) == 1735549279 && *((_BYTE *)s1 + 12) == 115 )
                                                                                                        return 1;
                                                                                                      goto LABEL_287;
                                                                                                  }
                                                                                                  if ( v183 == 21 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x76656E5F79617278LL | *((_QWORD *)s1 + 1) ^ 0x7274736E695F7265LL) && *((_DWORD *)s1 + 4) == 1852140917 && *((_BYTE *)s1 + 20) == 116 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1181;
                                                                                                  }
LABEL_287:
                                                                                                  if ( v183 == 7 )
                                                                                                  {
                                                                                                    if ( *(_DWORD *)s1 == 1600741985 && *((_WORD *)s1 + 2) == 24948 && *((_BYTE *)s1 + 6) == 103 )
                                                                                                      return 1;
                                                                                                    goto LABEL_289;
                                                                                                  }
LABEL_1181:
                                                                                                  if ( v183 == 12 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x636570735F757063LL && *((_DWORD *)s1 + 2) == 1667851881 )
                                                                                                      return 1;
                                                                                                    goto LABEL_744;
                                                                                                  }
LABEL_289:
                                                                                                  if ( v183 == 18 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x72655F7466697773LL | *((_QWORD *)s1 + 1) ^ 0x757365725F726F72LL) && *((_WORD *)s1 + 8) == 29804 )
                                                                                                      return 1;
                                                                                                    goto LABEL_292;
                                                                                                  }
LABEL_744:
                                                                                                  if ( v183 == 29 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x75636570735F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x6C5F65766974616CLL) && *((_QWORD *)s1 + 2) == 0x647261685F64616FLL && *((_DWORD *)s1 + 6) == 1852403301 && *((_BYTE *)s1 + 28) == 103 )
                                                                                                      return 1;
                                                                                                    goto LABEL_747;
                                                                                                  }
LABEL_292:
                                                                                                  if ( v183 == 25 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x61657268745F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x7974656661735F64LL) && *((_QWORD *)s1 + 2) == 0x6973796C616E615FLL && *((_BYTE *)s1 + 24) == 115 )
                                                                                                      return 1;
                                                                                                    goto LABEL_295;
                                                                                                  }
LABEL_747:
                                                                                                  if ( v183 == 18 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6E6F6E5F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x616C635F797A616CLL) && *((_WORD *)s1 + 8) == 29555 )
                                                                                                      return 1;
                                                                                                    goto LABEL_750;
                                                                                                  }
LABEL_295:
                                                                                                  if ( v183 == 7 )
                                                                                                  {
                                                                                                    if ( *(_DWORD *)s1 == 1667720562 && *((_WORD *)s1 + 2) == 27745 && *((_BYTE *)s1 + 6) == 108 )
                                                                                                      return 1;
                                                                                                    goto LABEL_297;
                                                                                                  }
LABEL_750:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6568635F66636F6ELL && *((_WORD *)s1 + 4) == 27491 )
                                                                                                      return v87;
                                                                                                    goto LABEL_752;
                                                                                                  }
LABEL_297:
                                                                                                  if ( v183 == 5 )
                                                                                                  {
                                                                                                    if ( *(_DWORD *)s1 == 1987276654 && *((_BYTE *)s1 + 4) == 109 )
                                                                                                      return 1;
                                                                                                    goto LABEL_299;
                                                                                                  }
LABEL_752:
                                                                                                  if ( v183 == 20 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6C5F646572616873LL | *((_QWORD *)s1 + 1) ^ 0x636E75665F6B636FLL) && *((_DWORD *)s1 + 4) == 1852795252 )
                                                                                                      return 1;
                                                                                                    goto LABEL_755;
                                                                                                  }
LABEL_299:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6163726F74636576LL && *((_WORD *)s1 + 4) == 27756 )
                                                                                                      return 1;
                                                                                                    goto LABEL_301;
                                                                                                  }
LABEL_755:
                                                                                                  if ( v183 == 18 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x735F747265737361LL | *((_QWORD *)s1 + 1) ^ 0x6F6C5F6465726168LL) && *((_WORD *)s1 + 8) == 27491 )
                                                                                                      return 1;
                                                                                                    goto LABEL_758;
                                                                                                  }
LABEL_301:
                                                                                                  if ( v183 == 16 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x746365765F6E696DLL | *((_QWORD *)s1 + 1) ^ 0x68746469775F726FLL) )
                                                                                                      return 1;
                                                                                                    goto LABEL_1090;
                                                                                                  }
LABEL_758:
                                                                                                  if ( v183 == 9 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x70696D6F7263696DLL && *((_BYTE *)s1 + 8) == 115 )
                                                                                                      return v85;
                                                                                                    goto LABEL_760;
                                                                                                  }
LABEL_1090:
                                                                                                  if ( v183 == 13 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x7465725F6B636F6CLL && *((_DWORD *)s1 + 2) == 1701737077 && *((_BYTE *)s1 + 12) == 100 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1084;
                                                                                                  }
LABEL_760:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x697461636F6C6C61LL && *((_WORD *)s1 + 4) == 26478 )
                                                                                                      return 1;
                                                                                                    goto LABEL_762;
                                                                                                  }
LABEL_1084:
                                                                                                  if ( v183 == 3 )
                                                                                                  {
                                                                                                    if ( *(_WORD *)s1 == 28520 && *((_BYTE *)s1 + 2) == 116 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1086;
                                                                                                  }
LABEL_762:
                                                                                                  if ( v183 == 28 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x62616D75736E6F63LL | *((_QWORD *)s1 + 1) ^ 0x735F7465735F656CLL) && *((_QWORD *)s1 + 2) == 0x5F6E6F5F65746174LL && *((_DWORD *)s1 + 6) == 1684104562 )
                                                                                                      return 1;
                                                                                                    goto LABEL_765;
                                                                                                  }
LABEL_1086:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x696C6E695F756E67LL && *((_WORD *)s1 + 4) == 25966 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1079;
                                                                                                  }
LABEL_765:
                                                                                                  if ( v183 == 11 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x63696C7075646F6ELL && *((_WORD *)s1 + 4) == 29793 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                      return 1;
                                                                                                    goto LABEL_767;
                                                                                                  }
LABEL_1079:
                                                                                                  if ( v183 == 13 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x635F746567726174LL && *((_DWORD *)s1 + 2) == 1701736300 && *((_BYTE *)s1 + 12) == 115 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1075;
                                                                                                  }
LABEL_767:
                                                                                                  if ( v183 == 11 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6C615F636F6C6C61LL && *((_WORD *)s1 + 4) == 26473 && *((_BYTE *)s1 + 10) == 110 )
                                                                                                      return 1;
                                                                                                    goto LABEL_769;
                                                                                                  }
LABEL_1075:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x7463757274736564LL && *((_WORD *)s1 + 4) == 29295 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1071;
                                                                                                  }
LABEL_769:
                                                                                                  if ( v183 == 19 )
                                                                                                  {
                                                                                                    if ( !(*(_QWORD *)s1 ^ 0x6F646E61725F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x79616C5F657A696DLL) && *((_WORD *)s1 + 8) == 30063 && *((_BYTE *)s1 + 18) == 116 )
                                                                                                      return 1;
                                                                                                    goto LABEL_772;
                                                                                                  }
LABEL_1071:
                                                                                                  if ( v183 == 10 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x615F74616D726F66LL && *((_WORD *)s1 + 4) == 26482 )
                                                                                                      return 1;
                                                                                                    goto LABEL_1066;
                                                                                                  }
LABEL_772:
                                                                                                  if ( v183 == 8 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x6E6F697463616269LL )
                                                                                                      return 1;
                                                                                                    goto LABEL_774;
                                                                                                  }
LABEL_1066:
                                                                                                  if ( v183 == 14 )
                                                                                                  {
                                                                                                    if ( *(_QWORD *)s1 == 0x675F6C636E65706FLL && *((_DWORD *)s1 + 2) == 1919250021 && *((_WORD *)s1 + 6) == 25449 )
                                                                                                      return 1;
LABEL_777:
                                                                                                    switch ( v183 )
                                                                                                    {
                                                                                                      case 13LL:
                                                                                                        if ( *(_QWORD *)s1 == 0x6576726573657270LL && *((_DWORD *)s1 + 2) == 1852796511 && *((_BYTE *)s1 + 12) == 101 )
                                                                                                          return v86 | (unsigned __int8)(v94 <= 2);
                                                                                                        break;
                                                                                                      case 8LL:
                                                                                                        if ( *(_QWORD *)s1 == 0x6E72757465726F6ELL )
                                                                                                          return 1;
                                                                                                        break;
                                                                                                      case 11LL:
                                                                                                        if ( *(_QWORD *)s1 == 0x5F64656472617567LL && *((_WORD *)s1 + 4) == 24950 && *((_BYTE *)s1 + 10) == 114 )
                                                                                                          return 1;
                                                                                                        goto LABEL_781;
                                                                                                    }
                                                                                                    if ( v183 == 6 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1936746861 && *((_WORD *)s1 + 2) == 13873 )
                                                                                                        return v85;
                                                                                                      goto LABEL_1042;
                                                                                                    }
LABEL_781:
                                                                                                    if ( v183 == 12 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x747361665F667062LL && *((_DWORD *)s1 + 2) == 1819042147 )
                                                                                                        return v83 - 8 <= 1;
                                                                                                      goto LABEL_783;
                                                                                                    }
LABEL_1042:
                                                                                                    if ( v183 == 15 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x726F7272655F736ELL && *((_DWORD *)s1 + 2) == 1836016735 && *((_WORD *)s1 + 6) == 26977 && *((_BYTE *)s1 + 14) == 110 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1044;
                                                                                                    }
LABEL_783:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x61765F6E67696C61LL && *((_WORD *)s1 + 4) == 30060 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_785;
                                                                                                    }
LABEL_1044:
                                                                                                    if ( v183 == 13 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x656D69746566696CLL && *((_DWORD *)s1 + 2) == 1853189986 && *((_BYTE *)s1 + 12) == 100 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1046;
                                                                                                    }
LABEL_785:
                                                                                                    if ( v183 == 27 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x625F656369766564LL | *((_QWORD *)s1 + 1) ^ 0x745F6E69746C6975LL) && *((_QWORD *)s1 + 2) == 0x745F657275747865LL && *((_WORD *)s1 + 12) == 28793 && *((_BYTE *)s1 + 26) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_788;
                                                                                                    }
LABEL_1046:
                                                                                                    if ( v183 == 35 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x5F6564756C637865LL | *((_QWORD *)s1 + 1) ^ 0x7078655F6D6F7266LL) && !(*((_QWORD *)s1 + 2) ^ 0x6E695F746963696CLL | *((_QWORD *)s1 + 3) ^ 0x746169746E617473LL) && *((_WORD *)s1 + 16) == 28521 && *((_BYTE *)s1 + 34) == 110 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1050;
                                                                                                    }
LABEL_788:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6E5F74726F707865LL && *((_WORD *)s1 + 4) == 28001 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                        return v83 - 55 <= 1;
                                                                                                      goto LABEL_790;
                                                                                                    }
LABEL_1050:
                                                                                                    if ( v183 == 7 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1952671091 && *((_WORD *)s1 + 2) == 28521 && *((_BYTE *)s1 + 6) == 110 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1052;
                                                                                                    }
LABEL_790:
                                                                                                    if ( v183 == 9 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6C62617477756F6ELL && *((_BYTE *)s1 + 8) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_792;
                                                                                                    }
LABEL_1052:
                                                                                                    if ( v183 == 13 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6B5F656369766564LL && *((_DWORD *)s1 + 2) == 1701737061 && *((_BYTE *)s1 + 12) == 108 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1054;
                                                                                                    }
LABEL_792:
                                                                                                    if ( v183 == 15 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x746365765F747865LL && *((_DWORD *)s1 + 2) == 1952412271 && *((_WORD *)s1 + 6) == 28793 && *((_BYTE *)s1 + 14) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_794;
                                                                                                    }
LABEL_1054:
                                                                                                    if ( v183 == 7 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1752461166 && *((_WORD *)s1 + 2) == 28530 && *((_BYTE *)s1 + 6) == 119 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1056;
                                                                                                    }
LABEL_794:
                                                                                                    if ( v183 == 27 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x6275735F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x676E697373616C63LL) && *((_QWORD *)s1 + 2) == 0x636972747365725FLL && *((_WORD *)s1 + 12) == 25972 && *((_BYTE *)s1 + 26) == 100 )
                                                                                                        return 1;
                                                                                                      goto LABEL_797;
                                                                                                    }
LABEL_1056:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x75736E6F635F736FLL && *((_WORD *)s1 + 4) == 25965 && *((_BYTE *)s1 + 10) == 100 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1058;
                                                                                                    }
LABEL_797:
                                                                                                    if ( v183 == 19 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x625F656661736E75LL | *((_QWORD *)s1 + 1) ^ 0x73755F7265666675LL) && *((_WORD *)s1 + 8) == 26465 && *((_BYTE *)s1 + 18) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_800;
                                                                                                    }
LABEL_1058:
                                                                                                    if ( v183 == 14 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x64726175675F7470LL && *((_DWORD *)s1 + 2) == 1985963109 && *((_WORD *)s1 + 6) == 29281 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1036;
                                                                                                    }
LABEL_800:
                                                                                                    if ( v183 == 10 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6963696669747261LL && *((_WORD *)s1 + 4) == 27745 )
                                                                                                        return 1;
                                                                                                      goto LABEL_802;
                                                                                                    }
LABEL_1036:
                                                                                                    if ( v183 == 24 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x6E79645F73736170LL | *((_QWORD *)s1 + 1) ^ 0x6A626F5F63696D61LL) && *((_QWORD *)s1 + 2) == 0x657A69735F746365LL )
                                                                                                        return 1;
                                                                                                      goto LABEL_1017;
                                                                                                    }
LABEL_802:
                                                                                                    if ( v183 == 8 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6C6961747473756DLL )
                                                                                                        return 1;
                                                                                                      goto LABEL_804;
                                                                                                    }
LABEL_1017:
                                                                                                    if ( v183 == 14 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6572726566657270LL && *((_DWORD *)s1 + 2) == 1634623332 && *((_WORD *)s1 + 6) == 25965 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1019;
                                                                                                    }
LABEL_804:
                                                                                                    if ( v183 == 23 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x72757465725F6663LL | *((_QWORD *)s1 + 1) ^ 0x725F746F6E5F736ELL) && *((_DWORD *)s1 + 4) == 1767994469 && *((_WORD *)s1 + 10) == 25966 && *((_BYTE *)s1 + 22) == 100 )
                                                                                                        return 1;
                                                                                                      goto LABEL_807;
                                                                                                    }
LABEL_1019:
                                                                                                    if ( v183 == 26 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x74616C7563657073LL | *((_QWORD *)s1 + 1) ^ 0x64616F6C5F657669LL) && *((_QWORD *)s1 + 2) == 0x696E65647261685FLL && *((_WORD *)s1 + 12) == 26478 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1022;
                                                                                                    }
LABEL_807:
                                                                                                    if ( v183 == 21 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x6761745F65707974LL | *((_QWORD *)s1 + 1) ^ 0x7461645F726F665FLL) && *((_DWORD *)s1 + 4) == 1887007841 && *((_BYTE *)s1 + 20) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_810;
                                                                                                    }
LABEL_1022:
                                                                                                    if ( v183 == 14 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x7079745F74736574LL && *((_DWORD *)s1 + 2) == 1635021669 && *((_WORD *)s1 + 6) == 25972 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1024;
                                                                                                    }
LABEL_810:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x616C696176616E75LL && *((_WORD *)s1 + 4) == 27746 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_812;
                                                                                                    }
LABEL_1024:
                                                                                                    if ( v183 == 9 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6C61637466697773LL && *((_BYTE *)s1 + 8) == 108 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1026;
                                                                                                    }
LABEL_812:
                                                                                                    if ( v183 == 19 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x73615F7466697773LL | *((_QWORD *)s1 + 1) ^ 0x746E6F635F636E79LL) && *((_WORD *)s1 + 8) == 30821 && *((_BYTE *)s1 + 18) == 116 )
                                                                                                        return 1;
                                                                                                      goto LABEL_815;
                                                                                                    }
LABEL_1026:
                                                                                                    if ( v183 == 27 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x625F656369766564LL | *((_QWORD *)s1 + 1) ^ 0x735F6E69746C6975LL) && *((_QWORD *)s1 + 2) == 0x745F656361667275LL && *((_WORD *)s1 + 12) == 28793 && *((_BYTE *)s1 + 26) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1029;
                                                                                                    }
LABEL_815:
                                                                                                    if ( v183 == 15 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x7369765F65707974LL && *((_DWORD *)s1 + 2) == 1818845801 && *((_WORD *)s1 + 6) == 29801 && *((_BYTE *)s1 + 14) == 121 )
                                                                                                        return 1;
                                                                                                      goto LABEL_817;
                                                                                                    }
LABEL_1029:
                                                                                                    if ( v183 == 4 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1953722216 )
                                                                                                        return 1;
                                                                                                      goto LABEL_1031;
                                                                                                    }
LABEL_817:
                                                                                                    if ( v183 == 21 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x72625F7466697773LL | *((_QWORD *)s1 + 1) ^ 0x79745F6465676469LL) && *((_DWORD *)s1 + 4) == 1701078384 && *((_BYTE *)s1 + 20) == 102 )
                                                                                                        return 1;
                                                                                                      goto LABEL_820;
                                                                                                    }
LABEL_1031:
                                                                                                    if ( v183 == 22 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x776C615F79617278LL | *((_QWORD *)s1 + 1) ^ 0x74736E695F737961LL) && *((_DWORD *)s1 + 4) == 1701672306 && *((_WORD *)s1 + 10) == 29806 )
                                                                                                        return 1;
                                                                                                      goto LABEL_823;
                                                                                                    }
LABEL_820:
                                                                                                    if ( v183 == 20 && !(*(_QWORD *)s1 ^ 0x726F775F64716572LL | *((_QWORD *)s1 + 1) ^ 0x5F70756F72675F6BLL) && *((_DWORD *)s1 + 4) == 1702521203 )
                                                                                                      return 1;
LABEL_823:
                                                                                                    if ( v183 == 19 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x7269645F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x626D656D5F746365LL) && *((_WORD *)s1 + 8) == 29285 && *((_BYTE *)s1 + 18) == 115 )
                                                                                                        return 1;
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x72757465725F736ELL | *((_QWORD *)s1 + 1) ^ 0x69617465725F736ELL) && *((_WORD *)s1 + 8) == 25966 && *((_BYTE *)s1 + 18) == 100 )
                                                                                                        return 1;
                                                                                                      if ( (_BYTE)v185 )
                                                                                                        return v184;
                                                                                                    }
                                                                                                    else if ( v183 == 16 && !(*(_QWORD *)s1 ^ 0x75736E6F635F736ELL | *((_QWORD *)s1 + 1) ^ 0x666C65735F73656DLL) )
                                                                                                    {
                                                                                                      return 1;
                                                                                                    }
                                                                                                    switch ( v183 )
                                                                                                    {
                                                                                                      case 11LL:
                                                                                                        if ( *(_QWORD *)s1 == 0x5F6563726F666E65LL && *((_WORD *)s1 + 4) == 25460 && *((_BYTE *)s1 + 10) == 98 )
                                                                                                          return 1;
                                                                                                        if ( *(_QWORD *)s1 == 0x6D6F7263696D6F6ELL && *((_WORD *)s1 + 4) == 28777 && *((_BYTE *)s1 + 10) == 115 )
                                                                                                          return v85;
                                                                                                        if ( (_BYTE)v185 )
                                                                                                          return v184;
                                                                                                        break;
                                                                                                      case 6LL:
                                                                                                        if ( *(_DWORD *)s1 == 1668246626 && *((_WORD *)s1 + 2) == 29547 )
                                                                                                          return 1;
                                                                                                        if ( *(_DWORD *)s1 == 1651469415 && *((_WORD *)s1 + 2) == 27745 )
                                                                                                          return 1;
                                                                                                        if ( (_BYTE)v185 )
                                                                                                          return v184;
                                                                                                        break;
                                                                                                      case 17LL:
                                                                                                        if ( !(*(_QWORD *)s1 ^ 0x635F646572616873LL | *((_QWORD *)s1 + 1) ^ 0x74696C6962617061LL) && *((_BYTE *)s1 + 16) == 121 )
                                                                                                          return 1;
                                                                                                        break;
                                                                                                      case 8LL:
                                                                                                        if ( *(_QWORD *)s1 == 0x656C62616B636F6CLL )
                                                                                                          return 1;
                                                                                                        goto LABEL_839;
                                                                                                      default:
                                                                                                        if ( v183 == 13 && *(_QWORD *)s1 == 0x5F73736572646461LL && *((_DWORD *)s1 + 2) == 1667330163 && *((_BYTE *)s1 + 12) == 101 )
                                                                                                          return 1;
                                                                                                        break;
                                                                                                    }
                                                                                                    if ( v183 == 17 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x6E75725F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x6D616E5F656D6974LL) && *((_BYTE *)s1 + 16) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_853;
                                                                                                    }
LABEL_839:
                                                                                                    if ( v183 == 19 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x75625F676E616C63LL | *((_QWORD *)s1 + 1) ^ 0x6C615F6E69746C69LL) && *((_WORD *)s1 + 8) == 24937 && *((_BYTE *)s1 + 18) == 115 )
                                                                                                        return 1;
                                                                                                      goto LABEL_842;
                                                                                                    }
LABEL_853:
                                                                                                    if ( v183 == 6 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1801675120 && *((_WORD *)s1 + 2) == 25701 )
                                                                                                        return 1;
                                                                                                      goto LABEL_855;
                                                                                                    }
LABEL_842:
                                                                                                    if ( v183 == 4 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1701999984 )
                                                                                                        return 1;
                                                                                                      goto LABEL_844;
                                                                                                    }
LABEL_855:
                                                                                                    if ( v183 == 14 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x705F6C636E65706FLL && *((_DWORD *)s1 + 2) == 1635150194 && *((_WORD *)s1 + 6) == 25972 )
                                                                                                        return 1;
                                                                                                      goto LABEL_857;
                                                                                                    }
LABEL_844:
                                                                                                    if ( v183 == 13 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6576726573657270LL && *((_DWORD *)s1 + 2) == 1936682335 && *((_BYTE *)s1 + 12) == 116 )
                                                                                                        return 1;
                                                                                                      goto LABEL_846;
                                                                                                    }
LABEL_857:
                                                                                                    if ( v183 == 10 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x696C696269736976LL && *((_WORD *)s1 + 4) == 31092 )
                                                                                                        return 1;
                                                                                                      goto LABEL_859;
                                                                                                    }
LABEL_846:
                                                                                                    if ( v183 == 6 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1852270963 && *((_WORD *)s1 + 2) == 27745 )
                                                                                                        return v83 == 7;
                                                                                                      goto LABEL_848;
                                                                                                    }
LABEL_859:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6F5F64656C6C6163LL && *((_WORD *)s1 + 4) == 25454 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_861;
                                                                                                    }
LABEL_848:
                                                                                                    if ( v183 == 15 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6F6F725F636A626FLL && *((_DWORD *)s1 + 2) == 1818451828 && *((_WORD *)s1 + 6) == 29537 && *((_BYTE *)s1 + 14) == 115 )
                                                                                                        return 1;
                                                                                                      goto LABEL_850;
                                                                                                    }
LABEL_861:
                                                                                                    if ( v183 == 22 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x7274736E695F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x75665F746E656D75LL) && *((_DWORD *)s1 + 4) == 1769235310 && *((_WORD *)s1 + 10) == 28271 )
                                                                                                        return 1;
                                                                                                      goto LABEL_864;
                                                                                                    }
LABEL_850:
                                                                                                    if ( v183 == 16 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x7A696D6F646E6172LL | *((_QWORD *)s1 + 1) ^ 0x74756F79616C5F65LL) )
                                                                                                        return 1;
                                                                                                      goto LABEL_1002;
                                                                                                    }
LABEL_864:
                                                                                                    if ( v183 == 5 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1918989671 && *((_BYTE *)s1 + 4) == 100 )
                                                                                                        return v89 == 15;
                                                                                                      goto LABEL_866;
                                                                                                    }
LABEL_1002:
                                                                                                    if ( v183 == 16 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x75736E6F635F736FLL | *((_QWORD *)s1 + 1) ^ 0x736968745F73656DLL) )
                                                                                                        return 1;
                                                                                                      goto LABEL_994;
                                                                                                    }
LABEL_866:
                                                                                                    if ( v183 == 19 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x74696E61735F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x726464615F657A69LL) && *((_WORD *)s1 + 8) == 29541 && *((_BYTE *)s1 + 18) == 115 )
                                                                                                        return 1;
                                                                                                      goto LABEL_869;
                                                                                                    }
LABEL_994:
                                                                                                    if ( v183 == 17 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x726170736E617274LL | *((_QWORD *)s1 + 1) ^ 0x6F696E755F746E65LL) && *((_BYTE *)s1 + 16) == 110 )
                                                                                                        return 1;
                                                                                                      goto LABEL_990;
                                                                                                    }
LABEL_869:
                                                                                                    if ( v183 == 35 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x6372615F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x65725F6B6165775FLL) && !(*((_QWORD *)s1 + 2) ^ 0x5F65636E65726566LL | *((_QWORD *)s1 + 3) ^ 0x616C696176616E75LL) && *((_WORD *)s1 + 16) == 27746 && *((_BYTE *)s1 + 34) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_873;
                                                                                                    }
LABEL_990:
                                                                                                    if ( v183 == 5 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1936617315 && *((_BYTE *)s1 + 4) == 116 )
                                                                                                        return 1;
                                                                                                      goto LABEL_974;
                                                                                                    }
LABEL_873:
                                                                                                    if ( v183 == 6 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1668505968 && *((_WORD *)s1 + 2) == 27745 )
                                                                                                        return 1;
                                                                                                      goto LABEL_875;
                                                                                                    }
LABEL_974:
                                                                                                    if ( v183 == 21 )
                                                                                                    {
                                                                                                      if ( !(*(_QWORD *)s1 ^ 0x655F747265737361LL | *((_QWORD *)s1 + 1) ^ 0x65766973756C6378LL) && *((_DWORD *)s1 + 4) == 1668246623 && *((_BYTE *)s1 + 20) == 107 )
                                                                                                        return 1;
                                                                                                      goto LABEL_971;
                                                                                                    }
LABEL_875:
                                                                                                    if ( v183 == 14 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x5F657361656C6572LL && *((_DWORD *)s1 + 2) == 1684955496 && *((_WORD *)s1 + 6) == 25964 )
                                                                                                        return 1;
                                                                                                      goto LABEL_877;
                                                                                                    }
LABEL_971:
                                                                                                    if ( v183 == 4 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1684370293 )
                                                                                                        return 1;
                                                                                                      goto LABEL_966;
                                                                                                    }
LABEL_877:
                                                                                                    if ( v183 == 13 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x72705F7466697773LL && *((_DWORD *)s1 + 2) == 1952544361 && *((_BYTE *)s1 + 12) == 101 )
                                                                                                        return 1;
                                                                                                      goto LABEL_879;
                                                                                                    }
LABEL_966:
                                                                                                    if ( v183 == 7 )
                                                                                                    {
                                                                                                      if ( *(_DWORD *)s1 == 1667916399 && *((_WORD *)s1 + 2) == 26463 && *((_BYTE *)s1 + 6) == 99 )
                                                                                                        return 1;
                                                                                                      goto LABEL_963;
                                                                                                    }
LABEL_879:
                                                                                                    if ( v183 == 11 )
                                                                                                    {
                                                                                                      if ( *(_QWORD *)s1 == 0x6E5F74726F706D69LL && *((_WORD *)s1 + 4) == 28001 && *((_BYTE *)s1 + 10) == 101 )
                                                                                                        return v82 - 55 <= 1;
LABEL_881:
                                                                                                      switch ( v183 )
                                                                                                      {
                                                                                                        case 18LL:
                                                                                                          if ( !(*(_QWORD *)s1 ^ 0x7478655F6D756E65LL | *((_QWORD *)s1 + 1) ^ 0x696C696269736E65LL) && *((_WORD *)s1 + 8) == 31092 )
                                                                                                            return 1;
                                                                                                          if ( !(*(_QWORD *)s1 ^ 0x626F5F7466697773LL | *((_QWORD *)s1 + 1) ^ 0x65626D656D5F636ALL) && *((_WORD *)s1 + 8) == 29554 )
                                                                                                            return 1;
                                                                                                          if ( (_BYTE)v185 )
                                                                                                            return v184;
                                                                                                          break;
                                                                                                        case 26LL:
                                                                                                          if ( !(*(_QWORD *)s1 ^ 0x5F657361656C6572LL | *((_QWORD *)s1 + 1) ^ 0x5F636972656E6567LL) && *((_QWORD *)s1 + 2) == 0x696C696261706163LL && *((_WORD *)s1 + 12) == 31092 )
                                                                                                            return 1;
                                                                                                          break;
                                                                                                        case 7LL:
                                                                                                          if ( *(_DWORD *)s1 == 1853189986 && *((_WORD *)s1 + 2) == 25956 && *((_BYTE *)s1 + 6) == 100 )
                                                                                                            return 1;
                                                                                                          goto LABEL_889;
                                                                                                      }
                                                                                                      if ( v183 == 27 )
                                                                                                      {
                                                                                                        if ( !(*(_QWORD *)s1 ^ 0x5F6563726F666E65LL | *((_QWORD *)s1 + 1) ^ 0x6C6E6F5F64616572LL) && *((_QWORD *)s1 + 2) == 0x6D6563616C705F79LL && *((_WORD *)s1 + 12) == 28261 && *((_BYTE *)s1 + 26) == 116 )
                                                                                                          return 1;
                                                                                                        goto LABEL_985;
                                                                                                      }
LABEL_889:
                                                                                                      if ( v183 == 25 )
                                                                                                      {
                                                                                                        if ( !(*(_QWORD *)s1 ^ 0x656C6C61635F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x5F64657661735F72LL) && *((_QWORD *)s1 + 2) == 0x7265747369676572LL && *((_BYTE *)s1 + 24) == 115 )
                                                                                                          return v82 - 37 <= 1;
LABEL_892:
                                                                                                        switch ( v183 )
                                                                                                        {
                                                                                                          case 17LL:
                                                                                                            if ( !(*(_QWORD *)s1 ^ 0x7075727265746E69LL | *((_QWORD *)s1 + 1) ^ 0x665F657661735F74LL) && *((_BYTE *)s1 + 16) == 112 )
                                                                                                              return (v82 - 35 <= 1) | (unsigned __int8)(v82 - 1 <= 1);
                                                                                                            break;
                                                                                                          case 18LL:
                                                                                                            if ( !(*(_QWORD *)s1 ^ 0x755F6C636E65706FLL | *((_QWORD *)s1 + 1) ^ 0x69685F6C6C6F726ELL) && *((_WORD *)s1 + 8) == 29806 )
                                                                                                              return 1;
                                                                                                            if ( !(*(_QWORD *)s1 ^ 0x74696E61735F6F6ELL | *((_QWORD *)s1 + 1) ^ 0x657268745F657A69LL) && *((_WORD *)s1 + 8) == 25697 )
                                                                                                              return 1;
                                                                                                            if ( (_BYTE)v185 )
                                                                                                              return v184;
                                                                                                            break;
                                                                                                          case 8LL:
                                                                                                            if ( *(_QWORD *)s1 == 0x6570616373656F6ELL )
                                                                                                              return 1;
LABEL_904:
                                                                                                            switch ( v183 )
                                                                                                            {
                                                                                                              case 7LL:
                                                                                                                if ( *(_DWORD *)s1 == 1634623853 && *((_WORD *)s1 + 2) == 25959 && *((_BYTE *)s1 + 6) == 100 )
                                                                                                                  return 1;
                                                                                                                if ( *(_DWORD *)s1 == 1801545079 && *((_WORD *)s1 + 2) == 25970 && *((_BYTE *)s1 + 6) == 102 )
                                                                                                                  return 1;
                                                                                                                if ( (_BYTE)v185 )
                                                                                                                  return v184;
                                                                                                                break;
                                                                                                              case 10LL:
                                                                                                                if ( *(_QWORD *)s1 == 0x72747365645F6F6ELL && *((_WORD *)s1 + 4) == 31087 )
                                                                                                                  return 1;
                                                                                                                break;
                                                                                                              case 11LL:
                                                                                                                if ( *(_QWORD *)s1 == 0x6B636F6C626E6F6ELL && *((_WORD *)s1 + 4) == 28265 && *((_BYTE *)s1 + 10) == 103 )
                                                                                                                  return 1;
                                                                                                                goto LABEL_910;
                                                                                                            }
                                                                                                            if ( v183 == 21 )
                                                                                                            {
                                                                                                              if ( !(*(_QWORD *)s1 ^ 0x5F7265746E696F70LL | *((_QWORD *)s1 + 1) ^ 0x7079745F68746977LL) && *((_DWORD *)s1 + 4) == 1635016549 && *((_BYTE *)s1 + 20) == 103 )
                                                                                                                return 1;
                                                                                                              goto LABEL_946;
                                                                                                            }
LABEL_910:
                                                                                                            if ( v183 == 19 )
                                                                                                            {
                                                                                                              if ( !(*(_QWORD *)s1 ^ 0x7165725F636A626FLL | *((_QWORD *)s1 + 1) ^ 0x75735F7365726975LL) && *((_WORD *)s1 + 8) == 25968 && *((_BYTE *)s1 + 18) == 114 )
                                                                                                                return 1;
                                                                                                              goto LABEL_913;
                                                                                                            }
LABEL_946:
                                                                                                            if ( v183 == 5 )
                                                                                                            {
                                                                                                              if ( *(_DWORD *)s1 == 1667589219 && *((_BYTE *)s1 + 4) == 108 )
                                                                                                                return 1;
                                                                                                              goto LABEL_938;
                                                                                                            }
LABEL_913:
                                                                                                            if ( v183 == 15 )
                                                                                                            {
                                                                                                              if ( *(_QWORD *)s1 == 0x635F6C636E65706FLL && *((_DWORD *)s1 + 2) == 1953721967 && *((_WORD *)s1 + 6) == 28257 && *((_BYTE *)s1 + 14) == 116 )
                                                                                                                return 1;
LABEL_915:
                                                                                                              switch ( v183 )
                                                                                                              {
                                                                                                                case 14LL:
                                                                                                                  if ( *(_QWORD *)s1 == 0x625F747261647563LL && *((_DWORD *)s1 + 2) == 1953261941 && *((_WORD *)s1 + 6) == 28265 )
                                                                                                                    return 1;
                                                                                                                  if ( *(_QWORD *)s1 == 0x7973617466697773LL && *((_DWORD *)s1 + 2) == 1633903470 && *((_WORD *)s1 + 6) == 27756 )
                                                                                                                    return 1;
                                                                                                                  if ( (_BYTE)v185 )
                                                                                                                    return v184;
                                                                                                                  break;
                                                                                                                case 13LL:
                                                                                                                  if ( *(_QWORD *)s1 == 0x656C62616C6C6163LL && *((_DWORD *)s1 + 2) == 1701345119 && *((_BYTE *)s1 + 12) == 110 )
                                                                                                                    return 1;
                                                                                                                  break;
                                                                                                                case 18LL:
                                                                                                                  if ( !(*(_QWORD *)s1 ^ 0x5F656C6261736964LL | *((_QWORD *)s1 + 1) ^ 0x6C61635F6C696174LL) && *((_WORD *)s1 + 8) == 29548 )
                                                                                                                    return 1;
                                                                                                                  goto LABEL_922;
                                                                                                              }
                                                                                                              if ( v183 == 9 )
                                                                                                              {
                                                                                                                if ( *(_QWORD *)s1 == 0x63757274735F736DLL && *((_BYTE *)s1 + 8) == 116 )
                                                                                                                  return 1;
                                                                                                                return v183 == 10 && *(_QWORD *)s1 == 0x69735F636F6C6C61LL && *((_WORD *)s1 + 4) == 25978;
                                                                                                              }
LABEL_922:
                                                                                                              if ( v183 == 19 )
                                                                                                                return !(*(_QWORD *)s1 ^ 0x775F757067646D61LL | *((_QWORD *)s1 + 1) ^ 0x7265705F73657661LL) && *((_WORD *)s1 + 8) == 25951 && *((_BYTE *)s1 + 18) == 117;
                                                                                                              return v183 == 10 && *(_QWORD *)s1 == 0x69735F636F6C6C61LL && *((_WORD *)s1 + 4) == 25978;
                                                                                                            }
LABEL_938:
                                                                                                            if ( v183 == 19 && !(*(_QWORD *)s1 ^ 0x656D69746566696CLL | *((_QWORD *)s1 + 1) ^ 0x657275747061635FLL) && *((_WORD *)s1 + 8) == 25183 && *((_BYTE *)s1 + 18) == 121 )
                                                                                                              return 1;
                                                                                                            goto LABEL_915;
                                                                                                          default:
                                                                                                            if ( v183 == 23 && !(*(_QWORD *)s1 ^ 0x72757465725F736ELL | *((_QWORD *)s1 + 1) ^ 0x725F746F6E5F736ELL) && *((_DWORD *)s1 + 4) == 1767994469 && *((_WORD *)s1 + 10) == 25966 && *((_BYTE *)s1 + 22) == 100 )
                                                                                                              return 1;
                                                                                                            break;
                                                                                                        }
                                                                                                        if ( v183 == 16 && !(*(_QWORD *)s1 ^ 0x79625F64657A6973LL | *((_QWORD *)s1 + 1) ^ 0x6C6C756E5F726F5FLL) )
                                                                                                          return 1;
                                                                                                        goto LABEL_904;
                                                                                                      }
LABEL_985:
                                                                                                      if ( v183 == 14 && *(_QWORD *)s1 == 0x636F5F6C65746E69LL && *((_DWORD *)s1 + 2) == 1768054636 && *((_WORD *)s1 + 6) == 25443 )
                                                                                                        return 1;
                                                                                                      goto LABEL_892;
                                                                                                    }
LABEL_963:
                                                                                                    if ( v183 == 31 && !memcmp(s1, "os_returns_retained_on_non_zero", 0x1Fu) )
                                                                                                      return 1;
                                                                                                    goto LABEL_881;
                                                                                                  }
LABEL_774:
                                                                                                  if ( v183 == 16 && !(*(_QWORD *)s1 ^ 0x7465725F6F726F63LL | *((_QWORD *)s1 + 1) ^ 0x657079745F6E7275LL) )
                                                                                                    return 1;
                                                                                                  goto LABEL_777;
                                                                                                }
                                                                                                goto LABEL_517;
                                                                                              }
LABEL_513:
                                                                                              if ( v183 == 13
                                                                                                && *(_QWORD *)s1 == 0x657079745F636576LL
                                                                                                && *((_DWORD *)s1 + 2) == 1852401759
                                                                                                && *((_BYTE *)s1 + 12) == 116 )
                                                                                              {
                                                                                                goto LABEL_517;
                                                                                              }
                                                                                              goto LABEL_498;
                                                                                            }
                                                                                            v161 = v87;
                                                                                            v146 = memcmp(
                                                                                                     s1,
                                                                                                     "coro_only_destroy_when_complete",
                                                                                                     0x1Fu);
                                                                                            v87 = v161;
                                                                                            if ( v146 )
                                                                                              goto LABEL_511;
LABEL_517:
                                                                                            v184 = 1;
                                                                                            LOBYTE(v185) = 1;
                                                                                            goto LABEL_242;
                                                                                          }
LABEL_1153:
                                                                                          if ( v183 == 10
                                                                                            && *(_QWORD *)s1 == 0x7461636572706564LL
                                                                                            && *((_WORD *)s1 + 4) == 25701 )
                                                                                          {
                                                                                            goto LABEL_517;
                                                                                          }
                                                                                          goto LABEL_485;
                                                                                        }
                                                                                        goto LABEL_1126;
                                                                                      case 17LL:
                                                                                        if ( *(_QWORD *)s1
                                                                                           ^ 0x69687372656E776FLL
                                                                                           | *((_QWORD *)s1 + 1)
                                                                                           ^ 0x6E72757465725F70LL
                                                                                          || *((_BYTE *)s1 + 16) != 115 )
                                                                                        {
                                                                                          v90 = 0;
LABEL_239:
                                                                                          LODWORD(v91) = 0;
                                                                                          if ( v83 > 0x33 )
                                                                                            goto LABEL_241;
                                                                                          goto LABEL_240;
                                                                                        }
                                                                                        goto LABEL_1126;
                                                                                    }
                                                                                    goto LABEL_471;
                                                                                  }
LABEL_1113:
                                                                                  if ( v183 == 6
                                                                                    && *(_DWORD *)s1 == 1937075829
                                                                                    && *((_WORD *)s1 + 2) == 25701 )
                                                                                  {
                                                                                    goto LABEL_1126;
                                                                                  }
                                                                                  goto LABEL_1115;
                                                                                }
                                                                                LOBYTE(v185) = 1;
                                                                                v184 = v82 - 27 <= 1;
                                                                                goto LABEL_234;
                                                                              }
LABEL_711:
                                                                              if ( v183 != 12 )
                                                                                goto LABEL_593;
                                                                              if ( *(_QWORD *)s1 != 0x6C6365645F667462LL
                                                                                || *((_DWORD *)s1 + 2) != 1734440031 )
                                                                              {
LABEL_235:
                                                                                v88 = 0;
                                                                                if ( v82 != 3 )
                                                                                  goto LABEL_236;
                                                                                goto LABEL_1206;
                                                                              }
LABEL_714:
                                                                              v184 = 1;
                                                                              v81 = 1;
                                                                              LOBYTE(v185) = 1;
                                                                              goto LABEL_235;
                                                                            }
                                                                            if ( *(_QWORD *)s1 ^ 0x735F747265737361LL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x61635F6465726168LL
                                                                              || *((_QWORD *)s1 + 2) != 0x7974696C69626170LL )
                                                                            {
                                                                              if ( !(*(_QWORD *)s1
                                                                                   ^ 0x7478655F636A626FLL
                                                                                   | *((_QWORD *)s1 + 1)
                                                                                   ^ 0x5F796C6C616E7265LL)
                                                                                && *((_QWORD *)s1 + 2) == 0x64656E6961746572LL )
                                                                              {
                                                                                goto LABEL_714;
                                                                              }
                                                                              if ( (_BYTE)v185 )
                                                                                goto LABEL_234;
                                                                              goto LABEL_591;
                                                                            }
LABEL_655:
                                                                            v184 = 1;
                                                                            LOBYTE(v185) = 1;
                                                                            goto LABEL_234;
                                                                          }
LABEL_582:
                                                                          if ( v183 == 23
                                                                            && !(*(_QWORD *)s1 ^ 0x72757465725F736FLL
                                                                               | *((_QWORD *)s1 + 1)
                                                                               ^ 0x725F746F6E5F736ELL)
                                                                            && *((_DWORD *)s1 + 4) == 1767994469
                                                                            && *((_WORD *)s1 + 10) == 25966
                                                                            && *((_BYTE *)s1 + 22) == 100 )
                                                                          {
                                                                            goto LABEL_655;
                                                                          }
                                                                          goto LABEL_585;
                                                                        }
LABEL_622:
                                                                        if ( v183 != 16 )
                                                                          goto LABEL_554;
                                                                        if ( *(_QWORD *)s1 ^ 0x6A626F5F73736170LL
                                                                           | *((_QWORD *)s1 + 1) ^ 0x657A69735F746365LL )
                                                                        {
                                                                          goto LABEL_556;
                                                                        }
LABEL_624:
                                                                        v184 = 1;
                                                                        LOBYTE(v185) = 1;
                                                                        goto LABEL_233;
                                                                      }
LABEL_447:
                                                                      v184 = 1;
                                                                      v69 = 1;
                                                                      LOBYTE(v185) = 1;
                                                                      goto LABEL_448;
                                                                    }
                                                                    if ( !(*(_QWORD *)a2 ^ 0x7365645F636A626FLL
                                                                         | *((_QWORD *)a2 + 1) ^ 0x5F646574616E6769LL)
                                                                      && *((_QWORD *)a2 + 2) == 0x696C616974696E69LL
                                                                      && a2[12] == 25978
                                                                      && *((_BYTE *)a2 + 26) == 114 )
                                                                    {
                                                                      goto LABEL_447;
                                                                    }
LABEL_224:
                                                                    if ( (unsigned __int8)v69 | (a3 != 23) )
                                                                    {
                                                                      if ( !v69 && !v68 )
                                                                        goto LABEL_227;
                                                                    }
                                                                    else if ( !(*(_QWORD *)a2 ^ 0x72656B5F6C637973LL
                                                                              | *((_QWORD *)a2 + 1)
                                                                              ^ 0x72746E655F6C656ELL)
                                                                           && *((_DWORD *)a2 + 4) == 1869635449
                                                                           && a2[10] == 28265
                                                                           && *((_BYTE *)a2 + 22) == 116 )
                                                                    {
                                                                      goto LABEL_452;
                                                                    }
LABEL_448:
                                                                    if ( !(v16 | (unsigned __int8)v69)
                                                                      && *(_QWORD *)a2 == 0x616974696E696572LL
                                                                      && *((_DWORD *)a2 + 2) == 1702521196
                                                                      && *((_BYTE *)a2 + 12) == 115 )
                                                                    {
                                                                      goto LABEL_452;
                                                                    }
                                                                    goto LABEL_229;
                                                                  }
                                                                  if ( *(_QWORD *)a2 == 0x625F68636E75616CLL
                                                                    && *((_DWORD *)a2 + 2) == 1684960623
                                                                    && *((_BYTE *)a2 + 12) == 115 )
                                                                  {
                                                                    v184 = 1;
                                                                    v69 = 1;
                                                                    LOBYTE(v185) = 1;
                                                                    goto LABEL_220;
                                                                  }
LABEL_219:
                                                                  if ( !((unsigned __int8)v69 | v43) )
                                                                  {
                                                                    if ( !(*(_QWORD *)a2 ^ 0x675F6C636E65706FLL
                                                                         | *((_QWORD *)a2 + 1) ^ 0x6F685F6C61626F6CLL)
                                                                      && a2[8] == 29811 )
                                                                    {
                                                                      v184 = 1;
                                                                      v69 = 1;
                                                                      LOBYTE(v185) = 1;
                                                                      goto LABEL_222;
                                                                    }
                                                                    goto LABEL_221;
                                                                  }
                                                                  goto LABEL_220;
                                                                }
LABEL_1360:
                                                                if ( *(_DWORD *)a2 != 1634298977
                                                                  || *((_BYTE *)a2 + 4) != 115 )
                                                                {
                                                                  v77 = v76 | v50;
                                                                  v69 = v76;
                                                                  goto LABEL_218;
                                                                }
                                                                v184 = 1;
                                                                v69 = 1;
                                                                LOBYTE(v185) = 1;
                                                                goto LABEL_219;
                                                              }
                                                              goto LABEL_1378;
                                                            }
                                                            goto LABEL_211;
                                                          }
                                                          goto LABEL_207;
                                                        }
                                                        v45 |= v69;
LABEL_200:
                                                        v70 = 0;
                                                        if ( v15 == 38 )
                                                          v70 = v63 == 24 && *(_DWORD *)(a6 + 256) == 3
                                                             || *(_DWORD *)(a6 + 256) == 3 && v63 == 25;
LABEL_201:
                                                        if ( !v45 )
                                                        {
                                                          if ( *(_QWORD *)a2 == 0x726F7078656C6C64LL
                                                            && *((_BYTE *)a2 + 8) == 116 )
                                                          {
                                                            v184 = v70;
                                                            v69 = 1;
                                                            LOBYTE(v185) = 1;
                                                            goto LABEL_204;
                                                          }
                                                          goto LABEL_203;
                                                        }
                                                        goto LABEL_202;
                                                      }
                                                      v45 |= v69;
LABEL_199:
                                                      v70 = 1;
                                                      if ( v63 == 15 )
                                                        goto LABEL_201;
                                                      goto LABEL_200;
                                                    }
                                                    v69 = v67;
                                                    goto LABEL_1315;
                                                  }
                                                  goto LABEL_1166;
                                                }
                                                goto LABEL_1165;
                                              }
LABEL_466:
                                              if ( !((unsigned __int8)v62 | v19) )
                                              {
                                                if ( *(_DWORD *)a2 != 1852989815
                                                  || a2[2] != 28265
                                                  || *((_BYTE *)a2 + 6) != 103 )
                                                {
LABEL_191:
                                                  v67 = a3 != 20;
                                                  if ( !((unsigned __int8)v62 | (a3 != 37)) )
                                                  {
                                                    if ( *(_QWORD *)a2 ^ 0x6C62616C69617661LL
                                                       | *((_QWORD *)a2 + 1) ^ 0x695F796C6E6F5F65LL
                                                      || *((_QWORD *)a2 + 2) ^ 0x6C75616665645F6ELL
                                                       | *((_QWORD *)a2 + 3) ^ 0x6D5F6C6176655F74LL
                                                      || *((_DWORD *)a2 + 8) != 1869116517
                                                      || *((_BYTE *)a2 + 36) != 100 )
                                                    {
                                                      v69 = v62 | v67;
                                                      if ( !v62 )
                                                      {
LABEL_1315:
                                                        v68 = a3 != 26;
                                                        if ( v69 )
                                                          goto LABEL_196;
                                                        goto LABEL_1169;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v184 = 1;
                                                      v69 = 1;
                                                      LOBYTE(v185) = 1;
                                                    }
LABEL_1167:
                                                    v68 = a3 != 26;
                                                    if ( v69 )
                                                      goto LABEL_1180;
                                                    v69 = 1;
LABEL_1169:
                                                    if ( !(*(_QWORD *)a2 ^ 0x675F6C636E65706FLL
                                                         | *((_QWORD *)a2 + 1) ^ 0x65645F6C61626F6CLL)
                                                      && *((_DWORD *)a2 + 4) == 1701013878 )
                                                    {
                                                      v69 = 1;
                                                      v184 = 1;
                                                      LOBYTE(v185) = 1;
                                                      v45 |= 1u;
                                                      goto LABEL_199;
                                                    }
                                                    v152 = v68 | v69;
                                                    goto LABEL_1172;
                                                  }
                                                  goto LABEL_192;
                                                }
LABEL_1165:
                                                v184 = 1;
                                                LOBYTE(v185) = 1;
                                                v67 = a3 != 20;
LABEL_1166:
                                                v69 = 1;
                                                goto LABEL_1167;
                                              }
                                              goto LABEL_467;
                                            }
LABEL_465:
                                            v184 = v65;
                                            v62 = 1;
                                            LOBYTE(v185) = 1;
                                            goto LABEL_466;
                                          }
LABEL_184:
                                          if ( (unsigned __int8)v62 | v16 )
                                            goto LABEL_185;
                                          if ( *(_QWORD *)a2 != 0x6D5F74726F706D69LL
                                            || *((_DWORD *)a2 + 2) != 1819632751
                                            || *((_BYTE *)a2 + 12) != 101 )
                                          {
                                            v62 = 0;
                                            goto LABEL_466;
                                          }
                                          v65 = v15 - 55 <= 1;
                                          goto LABEL_465;
                                        }
                                      }
                                      else if ( !(*(_QWORD *)a2 ^ 0x5F676E616C635F5FLL
                                                | *((_QWORD *)a2 + 1) ^ 0x6C6975625F6D7261LL)
                                             && *((_QWORD *)a2 + 2) == 0x61696C615F6E6974LL
                                             && *((_BYTE *)a2 + 24) == 115 )
                                      {
                                        LOBYTE(v185) = 1;
                                        v64 = 1;
                                        v62 = 1;
                                        v184 = v179 || v15 - 3 <= 2;
LABEL_461:
                                        v63 = *(_DWORD *)(a6 + 260);
                                        v65 = 1;
                                        if ( v63 == 15 )
                                          goto LABEL_183;
                                        goto LABEL_182;
                                      }
LABEL_460:
                                      v64 = v45 | v62;
                                      goto LABEL_461;
                                    }
                                    if ( !v44 )
                                    {
                                      if ( *(_QWORD *)a2 == 0x69687372656E776FLL
                                        && *((_DWORD *)a2 + 2) == 1869111152
                                        && a2[6] == 25708
                                        && *((_BYTE *)a2 + 14) == 115
                                        || *(_QWORD *)a2 == 0x5F736E7275746572LL
                                        && *((_DWORD *)a2 + 2) == 1852731246
                                        && a2[6] == 27765
                                        && *((_BYTE *)a2 + 14) == 108 )
                                      {
                                        goto LABEL_677;
                                      }
                                      goto LABEL_173;
                                    }
                                    v62 = v45;
                                    goto LABEL_456;
                                  }
                                  if ( *(_QWORD *)a2 ^ 0x6B636174735F6F6ELL | *((_QWORD *)a2 + 1) ^ 0x746365746F72705FLL
                                    || a2[8] != 29295 )
                                  {
                                    v62 = v45 | v51;
                                    if ( v51 )
                                    {
                                      if ( v62 )
                                        goto LABEL_678;
                                      v62 = v51;
                                      goto LABEL_457;
                                    }
LABEL_456:
                                    if ( v62 )
                                    {
LABEL_173:
                                      if ( v43 )
                                      {
                                        v62 = 0;
                                        goto LABEL_679;
                                      }
                                      if ( *(_QWORD *)a2 ^ 0x6570735F6C637973LL
                                         | *((_QWORD *)a2 + 1) ^ 0x616C635F6C616963LL
                                        || a2[8] != 29555 )
                                      {
                                        v62 = 0;
                                        goto LABEL_177;
                                      }
LABEL_459:
                                      v184 = 1;
                                      v62 = 1;
                                      LOBYTE(v185) = 1;
                                      goto LABEL_460;
                                    }
LABEL_457:
                                    if ( *(_QWORD *)a2 != 0x61696C615F79616DLL || *((_BYTE *)a2 + 8) != 115 )
                                      goto LABEL_679;
                                    goto LABEL_459;
                                  }
LABEL_677:
                                  v184 = 1;
                                  LOBYTE(v185) = 1;
                                  goto LABEL_678;
                                }
                                if ( !(*(_QWORD *)a2 ^ 0x757163615F797274LL | *((_QWORD *)a2 + 1) ^ 0x726168735F657269LL)
                                  && *((_QWORD *)a2 + 2) == 0x62617061635F6465LL
                                  && *((_DWORD *)a2 + 6) == 1953066089
                                  && *((_BYTE *)a2 + 28) == 121 )
                                {
                                  v184 = 1;
                                  v51 = 1;
                                  LOBYTE(v185) = 1;
                                  goto LABEL_163;
                                }
LABEL_162:
                                if ( !(v19 | (unsigned __int8)v51) )
                                {
                                  if ( *(_DWORD *)a2 == 1853124719 && a2[2] == 28271 && *((_BYTE *)a2 + 6) == 101 )
                                  {
                                    LOBYTE(v185) = 1;
                                    v51 = 1;
                                    v184 = 1;
                                    v172 = a3 != 10;
                                    goto LABEL_165;
                                  }
                                  goto LABEL_164;
                                }
                                goto LABEL_163;
                              }
                              goto LABEL_157;
                            }
                            v58 = v43;
                            v51 = 0;
LABEL_152:
                            if ( !v58 )
                            {
                              if ( *(_QWORD *)a2 ^ 0x74656D5F636A626FLL | *((_QWORD *)a2 + 1) ^ 0x696D61665F646F68LL
                                || a2[8] != 31084 )
                              {
                                goto LABEL_155;
                              }
                              v184 = 1;
                              v51 = 1;
                              LOBYTE(v185) = 1;
                              goto LABEL_156;
                            }
                            goto LABEL_153;
                          }
                        }
                        else
                        {
                          if ( !(*(_QWORD *)a2 ^ 0x6C62616863746170LL | *((_QWORD *)a2 + 1) ^ 0x6974636E75665F65LL)
                            && *((_QWORD *)a2 + 2) == 0x7972746E655F6E6FLL )
                          {
                            LOBYTE(v185) = 1;
                            v184 = v173;
                            v51 = 1;
LABEL_151:
                            v58 = v43 | v51;
                            goto LABEL_152;
                          }
                          v174 = v52 | v51;
                        }
                        if ( !v174 )
                        {
                          v59 = v19 | v51;
                          if ( *(_QWORD *)a2 == 0x6474725F6B38366DLL )
                          {
                            v184 = 1;
                            v51 = 1;
                            LOBYTE(v185) = 1;
                            goto LABEL_155;
                          }
                          goto LABEL_154;
                        }
                        goto LABEL_151;
                      }
LABEL_145:
                      v57 = v51 | v177;
                      goto LABEL_146;
                    }
                    v18 |= v165;
                  }
                  else
                  {
                    v184 = 1;
                    v18 = 1;
                    LOBYTE(v185) = 1;
                  }
LABEL_670:
                  v51 = 1;
                  v50 = a3 != 11;
                  goto LABEL_671;
                }
LABEL_135:
                if ( !v18 )
                {
                  if ( !v19 )
                  {
                    if ( *(_DWORD *)a2 == 1634036835 && a2[2] == 30062 && *((_BYTE *)a2 + 6) == 112 )
                    {
                      LOBYTE(v185) = 1;
                      v51 = 1;
                      v184 = 1;
                      v50 = a3 != 11;
                    }
                    else
                    {
                      v50 = a3 != 11;
                      if ( *(_DWORD *)a2 == 1952541798 && a2[2] == 25972 && *((_BYTE *)a2 + 6) == 110 )
                      {
                        v184 = 1;
                        v51 = 1;
                        LOBYTE(v185) = 1;
                      }
                      else
                      {
                        v51 = 0;
                      }
                    }
                    goto LABEL_140;
                  }
                  v18 = v165;
                  goto LABEL_1493;
                }
                goto LABEL_670;
              }
              goto LABEL_133;
            }
            v44 = a3 != 15;
            if ( !(v19 | (unsigned __int8)v18) )
            {
              if ( *(_DWORD *)a2 == 2002744942 && a2[2] == 24933 && *((_BYTE *)a2 + 6) == 107 )
              {
                v184 = 1;
                v18 = v20;
                LOBYTE(v185) = 1;
              }
              else
              {
                v20 = a3 != 15;
                v18 = 0;
              }
              v45 = a3 != 9;
              v19 = 0;
              goto LABEL_128;
            }
LABEL_663:
            v150 = v43 | v18;
            goto LABEL_664;
          }
          goto LABEL_118;
        case 25LL:
          if ( !(*(_QWORD *)a2 ^ 0x5F657361656C6572LL | *((_QWORD *)a2 + 1) ^ 0x635F646572616873LL)
            && *((_QWORD *)a2 + 2) == 0x74696C6962617061LL
            && *((_BYTE *)a2 + 24) == 121 )
          {
            goto LABEL_1694;
          }
          v178 = 1;
          if ( !(*(_QWORD *)a2 ^ 0x65725F6C65746E69LL | *((_QWORD *)a2 + 1) ^ 0x675F6275735F6471LL)
            && *((_QWORD *)a2 + 2) == 0x7A69735F70756F72LL
            && *((_BYTE *)a2 + 24) == 101 )
          {
            v184 = 1;
            LOBYTE(v185) = 1;
            goto LABEL_658;
          }
LABEL_118:
          v18 = v178;
          v180 = v15 - 8 <= 1;
          if ( !v178 )
          {
            if ( !(*(_QWORD *)a2 ^ 0x6576726573657270LL | *((_QWORD *)a2 + 1) ^ 0x5F6369746174735FLL)
              && *((_DWORD *)a2 + 4) == 1936090735
              && a2[10] == 29797 )
            {
              LOBYTE(v185) = 1;
              v18 = 1;
              v184 = v15 - 8 <= 1;
              v20 = 1;
            }
            else
            {
              v20 = a3 != 19;
            }
            v171 = a3 != 3;
            v175 = v15 - 16 <= 3;
            v19 = a3 != 7;
            goto LABEL_123;
          }
          v18 = 0;
          goto LABEL_659;
        default:
          break;
      }
      v149 = 0;
      goto LABEL_657;
    case 2:
      if ( !a5 )
      {
        v183 = a3;
        s1 = a2;
        v185 = 0;
        v181 = 200809;
        sub_F8AC60((__int64)&s1, &v181, "carries_dependency", 18);
        v181 = 201803;
        sub_F8AC60((__int64)&s1, &v181, "likely", 6);
        v181 = 201803;
        sub_F8AC60((__int64)&s1, &v181, "unlikely", 8);
        v181 = 201907;
        sub_F8AC60((__int64)&s1, &v181, "nodiscard", 9);
        v181 = 202207;
        sub_F8AC60((__int64)&s1, &v181, "assume", 6);
        v181 = 200809;
        sub_F8AC60((__int64)&s1, &v181, "noreturn", 8);
        v181 = 201603;
        sub_F8AC60((__int64)&s1, &v181, "maybe_unused", 12);
        v181 = 201603;
        sub_F8AC60((__int64)&s1, &v181, "fallthrough", 11);
        v181 = 201309;
        sub_F8AC60((__int64)&s1, &v181, "deprecated", 10);
        v13 = 0;
        v181 = *(_DWORD *)(a6 + 340) < 0xAu ? 0x3144B : 0;
        sub_F8AC60((__int64)&s1, &v181, "no_unique_address", 17);
        if ( !(_BYTE)v185 )
          return v13;
        return v184;
      }
      if ( j__strlen("clang") != a5 || (v13 = memcmp(a4, "clang", a5)) != 0 )
      {
        if ( a5 != j__strlen("gnu") || (v13 = memcmp(a4, "gnu", a5)) != 0 )
        {
          if ( j__strlen("gsl") != a5 || (v13 = memcmp(a4, "gsl", a5)) != 0 )
          {
            if ( a5 != j__strlen("hlsl") || (v13 = memcmp(a4, "hlsl", a5)) != 0 )
            {
              if ( a5 != j__strlen("msvc") || (v13 = memcmp(a4, "msvc", a5)) != 0 )
              {
                if ( j__strlen("omp") != a5 || (v13 = memcmp(a4, "omp", a5)) != 0 )
                {
                  if ( a5 != j__strlen("riscv") || (v13 = memcmp(a4, "riscv", a5)) != 0 )
                  {
                    v13 = 0;
                    if ( a5 != j__strlen("vk") )
                      return v13;
                    v13 = memcmp(a4, "vk", a5);
                    if ( v13 )
                      return 0;
                    s1 = a2;
                    v183 = a3;
                    v185 = 0;
                    v181 = 1;
                    sub_F8AC60((__int64)&s1, &v181, "constant_id", 11);
                    v181 = 1;
                    sub_F8AC60((__int64)&s1, &v181, "ext_builtin_input", 17);
                    if ( !(_BYTE)v185 )
                      return v13;
                  }
                  else
                  {
                    v158 = *(_DWORD *)(a6 + 248);
                    s1 = a2;
                    v183 = a3;
                    v185 = 0;
                    v181 = (unsigned int)(v158 - 27) <= 1;
                    sub_F8AC60((__int64)&s1, &v181, "vls_cc", 6);
                    v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
                    sub_F8AC60((__int64)&s1, &v181, "vector_cc", 9);
                    if ( !(_BYTE)v185 )
                      return v13;
                  }
                }
                else
                {
                  s1 = a2;
                  v183 = a3;
                  v185 = 0;
                  v181 = 1;
                  sub_F8AC60((__int64)&s1, &v181, "assume", 6);
                  if ( !(_BYTE)v185 )
                    return v13;
                }
              }
              else
              {
                s1 = a2;
                v183 = a3;
                v185 = 0;
                v181 = 1;
                sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
                v181 = 1;
                sub_F8AC60((__int64)&s1, &v181, "constexpr", 9);
                v155 = *(unsigned int *)(a6 + 248);
                v156 = 0;
                if ( (unsigned int)v155 <= 0x33 )
                {
                  v157 = 0xE06680400000ALL;
                  if ( _bittest64(&v157, v155) )
                    v156 = *(_BYTE *)(a6 + 472) != 0 ? 0x3144B : 0;
                  else
                    v156 = 0;
                }
                v181 = v156;
                sub_F8AC60((__int64)&s1, &v181, "no_unique_address", 17);
                if ( !(_BYTE)v185 )
                  return v13;
              }
            }
            else
            {
              s1 = a2;
              v183 = a3;
              v185 = 0;
              v181 = 1;
              sub_F8AC60((__int64)&s1, &v181, "contained_type", 14);
              v181 = 1;
              sub_F8AC60((__int64)&s1, &v181, "raw_buffer", 10);
              v181 = 1;
              sub_F8AC60((__int64)&s1, &v181, "is_rov", 6);
              v181 = 1;
              sub_F8AC60((__int64)&s1, &v181, "resource_class", 14);
              if ( !(_BYTE)v185 )
                return v13;
            }
          }
          else
          {
            s1 = a2;
            v183 = a3;
            v185 = 0;
            v181 = 1;
            sub_F8AC60((__int64)&s1, &v181, "suppress", 8);
            v181 = 1;
            sub_F8AC60((__int64)&s1, &v181, "Pointer", 7);
            v181 = 1;
            sub_F8AC60((__int64)&s1, &v181, "Owner", 5);
            if ( !(_BYTE)v185 )
              return v13;
          }
        }
        else
        {
          s1 = a2;
          v183 = a3;
          v185 = 0;
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alloc_size", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "always_inline", 13);
          v181 = *(_DWORD *)(a6 + 260) != 16;
          sub_F8AC60((__int64)&s1, &v181, "init_priority", 13);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "short_call", 10);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "far", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "unused", 6);
          v118 = *(_DWORD *)(a6 + 248);
          LODWORD(v119) = 0;
          if ( v118 <= 0x33 )
            v119 = (0xE064006006000uLL >> v118) & 1;
          v181 = v119;
          sub_F8AC60((__int64)&s1, &v181, "model", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "target", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "retain", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cleanup", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "flatten", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "deprecated", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warn_unused", 11);
          v120 = *(_DWORD *)(a6 + 248);
          LODWORD(v121) = 0;
          if ( v120 <= 0x26 )
            v121 = (0x6018A06018uLL >> v120) & 1;
          v181 = v121;
          sub_F8AC60((__int64)&s1, &v181, "patchable_function_entry", 24);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "zero_call_used_regs", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pcs", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "stdcall", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "long_call", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sysv_abi", 8);
          v122 = *(_DWORD *)(a6 + 268);
          v123 = 1;
          if ( v122 != 5 )
          {
            v124 = *(_DWORD *)(a6 + 260);
            v125 = *(_DWORD *)(a6 + 248);
            if ( v124 != 15 || (unsigned int)(v125 - 3) > 2 )
            {
              v123 = 1;
              if ( v125 != 7 )
              {
                v123 = 0;
                if ( v122 == 3 )
                {
                  v123 = v124 == 3;
                  if ( v124 == 7 )
                    v123 = *(_DWORD *)(a6 + 264) != 49 && (unsigned int)(*(_DWORD *)(a6 + 264) - 18) > 7;
                }
              }
            }
          }
          v181 = v123;
          sub_F8AC60((__int64)&s1, &v181, "ifunc", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "constructor", 11);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "force_align_arg_pointer", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_stack_protector", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "returns_nonnull", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "may_alias", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonstring", 9);
          v126 = *(_DWORD *)(a6 + 260);
          v127 = 1;
          if ( v126 != 15 )
          {
            v127 = 0;
            if ( *(_DWORD *)(a6 + 248) == 38 )
              v127 = v126 == 24 && *(_DWORD *)(a6 + 256) == 3 || *(_DWORD *)(a6 + 256) == 3 && v126 == 25;
          }
          v181 = v127;
          sub_F8AC60((__int64)&s1, &v181, "dllimport", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sentinel", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warning", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "tls_model", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "leaf", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nocommon", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format_matches", 14);
          v128 = *(_DWORD *)(a6 + 260);
          v129 = 1;
          if ( v128 != 15 )
          {
            v129 = 0;
            if ( *(_DWORD *)(a6 + 248) == 38 )
              v129 = v128 == 24 && *(_DWORD *)(a6 + 256) == 3 || *(_DWORD *)(a6 + 256) == 3 && v128 == 25;
          }
          v181 = v129;
          sub_F8AC60((__int64)&s1, &v181, "dllexport", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_split_stack", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "abi_tag", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_profile_instrument_function", 30);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cold", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "error", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "common", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alias", 5);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nocf_check", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "regcall", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "assume_aligned", 14);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "micromips", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "hot", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "gnu_inline", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "target_clones", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "__const", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alloc_align", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "destructor", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_randomize_layout", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format_arg", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noreturn", 8);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "mips16", 6);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "near", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "section", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ms_abi", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonnull", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nothrow", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "artificial", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "regparm", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 3) <= 2;
          sub_F8AC60((__int64)&s1, &v181, "target_version", 14);
          v130 = *(_DWORD *)(a6 + 248);
          LODWORD(v131) = 0;
          if ( v130 <= 0x26 )
            v131 = (0x7818130086uLL >> v130) & 1;
          v181 = v131;
          sub_F8AC60((__int64)&s1, &v181, "interrupt", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "aligned", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nomicromips", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "used", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "randomize_layout", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "packed", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "visibility", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pure", 4);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nomips16", 8);
          v181 = *(_DWORD *)(a6 + 248) == 7;
          sub_F8AC60((__int64)&s1, &v181, "signal", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_instrument_function", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nodebug", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_address_safety_analysis", 26);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize_address", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "transparent_union", 17);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "const", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "weakref", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "mode", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "vector_size", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "naked", 5);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "no_caller_saved_registers", 25);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize_thread", 18);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "function_return", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "thiscall", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "malloc", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "weak", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "fastcall", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warn_unused_result", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cdecl", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "fallthrough", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ms_struct", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "returns_twice", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "selectany", 9);
          if ( !(_BYTE)v185 )
            return v13;
        }
      }
      else
      {
        s1 = a2;
        v183 = a3;
        v185 = 0;
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_bridge_related", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "always_inline", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "uninitialized", 13);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "preserve_static_offset", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_await_elidable", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "release_capability", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ownership_takes", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_local", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "neon_vector_type", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "sized_by", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "acquire_handle", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "argument_with_type_tag", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "m68k_rtd", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_method_family", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "try_acquire_shared_capability", 29);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_context", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "overloadable", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "optnone", 7);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_await_elidable_argument", 28);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "preserve_access_index", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_direct", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "convergent", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_stack_protector", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ownership_holds", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "sycl_special_class", 18);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 35) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 1) <= 4;
        sub_F8AC60((__int64)&s1, &v181, "__clang_arm_builtin_alias", 25);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "import_module", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "exclusive_locks_required", 24);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "annotate_type", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "trivial_abi", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "available_only_in_default_eval_method", 37);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "NSObject", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_global_device", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_returns_inner_pointer", 26);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ns_consumed", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "iboutlet", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "atomic", 6);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "reentrant_capability", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "maybe_undef", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_global_host", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_designated_initializer", 27);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "consumable_auto_cast_state", 26);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "sycl_kernel_entry_point", 23);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "requires_shared_capability", 26);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "reinitializes", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cf_unknown_transfer", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "acquire_shared_capability", 25);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_sanitize_memory", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "callback", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_boxable", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_async_error", 17);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_non_runtime_protocol", 25);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "enforce_tcb_leaf", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_requires_property_definitions", 34);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "try_acquire_capability", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_num_sgpr", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "nvptx_kernel", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "aarch64_sve_pcs", 15);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "riscv_vls_cc", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cf_audited_transfer", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "noconvergent", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "use_handle", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "require_explicit_initialization", 31);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_specializations", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cf_returns_retained", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "annotate", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cpu_dispatch", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "neon_polyvector_type", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "assume", 6);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_async", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "nonallocating", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "counted_by_or_null", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "lto_visibility_public", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "iboutletcollection", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_ownership", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "acquire_capability", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "always_destroy", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "preferred_type", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "unlock_function", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_sanitize", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "loader_uninitialized", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cfi_canonical_jump_table", 24);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "diagnose_as_builtin", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "noderef", 7);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_bridge", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "set_typestate", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_lifetimebound", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_protocol_requires_explicit_implementation", 46);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "param_typestate", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "flag_enum", 9);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_bridge_mutable", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_wrapper", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cf_consumed", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_num_vgpr", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "blocking", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "pass_object_size", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "require_constant_initialization", 31);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_kernel", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_returns_retained_on_zero", 27);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "clspv_libclc_builtin", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "matrix_type", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "minsize", 7);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "vecreturn", 9);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "warn_unused_result", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_flat_work_group_size", 27);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "aarch64_vector_pcs", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "consumable", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_returns_not_retained", 23);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "internal_linkage", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "weak_import", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "fallthrough", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "assert_shared_capability", 24);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_externally_retained", 24);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "suppress", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "not_tail_called", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "btf_decl_tag", 12);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "riscv_vector_cc", 15);
        v40 = 0;
        if ( *(_DWORD *)(a6 + 248) == 3 )
          v40 = *(_DWORD *)(a6 + 252) == 36;
        v181 = v40;
        sub_F8AC60((__int64)&s1, &v181, "hybrid_patchable", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "standalone_debug", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "sycl_kernel", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_precise_lifetime", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "btf_type_tag", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "counted_by", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "code_align", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ownership_returns", 17);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "capability", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_disable_lifetimebound", 26);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "disable_sanitizer_instrumentation", 33);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ptrauth_vtable_pointer", 22);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 35) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 1) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "__clang_arm_mve_strict_polymorphism", 35);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "preserve_all", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "return_typestate", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "nomerge", 7);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_only_destroy_when_complete", 31);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "shared_locks_required", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cfi_unchecked_callee", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "mig_server_routine", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_exception", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_returns_retained", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_independent_class", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_builtin", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_max_num_work_groups", 26);
        v181 = 20230206;
        sub_F8AC60((__int64)&s1, &v181, "external_source_symbol", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "assert_capability", 17);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "availability", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "requires_capability", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ns_returns_autoreleased", 23);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "scoped_lockable", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_indirect_result", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "xray_never_instrument", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "builtin_alias", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_runtime_visible", 20);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_class_stub", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "xray_log_args", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cpu_specific", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_error_result", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_speculative_load_hardening", 29);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_thread_safety_analysis", 25);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_nonlazy_class", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "vectorcall", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "min_vector_width", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "allocating", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "consumable_set_state_on_read", 28);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "noduplicate", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "lifetimebound", 13);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 3) <= 2;
        sub_F8AC60((__int64)&s1, &v181, "preserve_none", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ibaction", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_generic", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "coro_return_type", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "guarded_var", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_consumed", 11);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "bpf_fastcall", 12);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "nouwtable", 9);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "speculative_load_hardening", 26);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "export_name", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "exclude_from_explicit_instantiation", 35);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "xray_always_instrument", 22);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "device_kernel", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ext_vector_type", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "unsafe_buffer_usage", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_subclassing_restricted", 27);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "pt_guarded_var", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "pass_dynamic_object_size", 24);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "musttail", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "preferred_name", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "cf_returns_not_retained", 23);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "type_tag_for_datatype", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "test_typestate", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "unavailable", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swiftcall", 9);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swift_async_context", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "type_visibility", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_direct_members", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ns_returns_retained", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ns_consumes_self", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "enforce_tcb", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_private", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "address_space", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "blocks", 6);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_runtime_name", 17);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "shared_capability", 17);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "preserve_most", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "called_once", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_root_class", 15);
        v181 = *(_DWORD *)(a6 + 260) == 15;
        sub_F8AC60((__int64)&s1, &v181, "guard", 5);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_consumes_this", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_gc", 7);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "import_name", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_arc_weak_reference_unavailable", 35);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "pascal", 6);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "release_handle", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "release_generic_capability", 26);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "os_returns_retained_on_non_zero", 31);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "enum_extensibility", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "using_if_exists", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "enforce_read_only_placement", 27);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "intel_ocl_bicc", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "ns_returns_not_retained", 23);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "sized_by_or_null", 16);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "noescape", 8);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "no_destroy", 10);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "nonblocking", 11);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "pointer_with_type_tag", 21);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "objc_requires_super", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_constant", 15);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "release_shared_capability", 25);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "lifetime_capture_by", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "swiftasynccall", 14);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "callable_when", 13);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "disable_tail_calls", 18);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "amdgpu_waves_per_eu", 19);
        v181 = 1;
        sub_F8AC60((__int64)&s1, &v181, "opencl_global", 13);
        if ( !(_BYTE)v185 )
          return v13;
      }
      return v184;
    case 3:
      if ( !a5 )
      {
        v183 = a3;
        v13 = 0;
        s1 = a2;
        v185 = 0;
        v181 = 202003;
        sub_F8AC60((__int64)&s1, &v181, "nodiscard", 9);
        v181 = 202202;
        sub_F8AC60((__int64)&s1, &v181, "_Noreturn", 9);
        v181 = 202202;
        sub_F8AC60((__int64)&s1, &v181, "noreturn", 8);
        v181 = 202106;
        sub_F8AC60((__int64)&s1, &v181, "maybe_unused", 12);
        v181 = 201910;
        sub_F8AC60((__int64)&s1, &v181, "fallthrough", 11);
        v181 = (int)&stru_314B0;
        sub_F8AC60((__int64)&s1, &v181, "deprecated", 10);
        if ( (_BYTE)v185 )
          return v184;
        return v13;
      }
      if ( j__strlen("clang") == a5 )
      {
        v13 = memcmp(a4, "clang", a5);
        if ( !v13 )
        {
          s1 = a2;
          v183 = a3;
          v185 = 0;
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_bridge_related", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_externally_retained", 24);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "suppress", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "not_tail_called", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "always_inline", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "btf_decl_tag", 12);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "riscv_vector_cc", 15);
          v41 = 0;
          if ( *(_DWORD *)(a6 + 248) == 3 )
            v41 = *(_DWORD *)(a6 + 252) == 36;
          v181 = v41;
          sub_F8AC60((__int64)&s1, &v181, "hybrid_patchable", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sycl_kernel", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_precise_lifetime", 21);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "preserve_static_offset", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "btf_type_tag", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_await_elidable", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "counted_by", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "code_align", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ownership_takes", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ownership_returns", 17);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_local", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_disable_lifetimebound", 26);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "neon_vector_type", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "disable_sanitizer_instrumentation", 33);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ptrauth_vtable_pointer", 22);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "export_name", 11);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 35) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 1) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "__clang_arm_mve_strict_polymorphism", 35);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sized_by", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "acquire_handle", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "preserve_all", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nomerge", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_only_destroy_when_complete", 31);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "argument_with_type_tag", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "m68k_rtd", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_method_family", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "unlikely", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cfi_unchecked_callee", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "mig_server_routine", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_exception", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "likely", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_returns_retained", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "overloadable", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "optnone", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_await_elidable_argument", 28);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "preserve_access_index", 21);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_direct", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "convergent", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_stack_protector", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ownership_holds", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_independent_class", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_builtin", 10);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 35) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 1) <= 4;
          sub_F8AC60((__int64)&s1, &v181, "__clang_arm_builtin_alias", 25);
          v181 = 20230206;
          sub_F8AC60((__int64)&s1, &v181, "external_source_symbol", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "availability", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sycl_special_class", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_context", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "annotate_type", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ns_returns_autoreleased", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "available_only_in_default_eval_method", 37);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "xray_never_instrument", 21);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "import_module", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "NSObject", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "builtin_alias", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_runtime_visible", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_global_device", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_indirect_result", 21);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_returns_inner_pointer", 26);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_class_stub", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "xray_log_args", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ns_consumed", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cpu_specific", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_error_result", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "iboutlet", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "atomic", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "reentrant_capability", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_speculative_load_hardening", 29);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_thread_safety_analysis", 25);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_nonlazy_class", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "maybe_undef", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "vectorcall", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_global_host", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_designated_initializer", 27);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "min_vector_width", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sycl_kernel_entry_point", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cf_unknown_transfer", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "allocating", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize_memory", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noduplicate", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "callback", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_boxable", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_async_error", 17);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 3) <= 2;
          sub_F8AC60((__int64)&s1, &v181, "preserve_none", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ibaction", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "enforce_tcb_leaf", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_generic", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_return_type", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nvptx_kernel", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_non_runtime_protocol", 25);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "aarch64_sve_pcs", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_consumed", 11);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 8) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "bpf_fastcall", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cf_audited_transfer", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noconvergent", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nouwtable", 9);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "riscv_vls_cc", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "exclude_from_explicit_instantiation", 35);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "require_explicit_initialization", 31);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "xray_always_instrument", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cf_returns_retained", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "device_kernel", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ext_vector_type", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "annotate", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cpu_dispatch", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_subclassing_restricted", 27);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "unsafe_buffer_usage", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "neon_polyvector_type", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "speculative_load_hardening", 26);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "assume", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "musttail", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_async", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cf_returns_not_retained", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "use_handle", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "type_tag_for_datatype", 21);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pass_dynamic_object_size", 24);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonallocating", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_requires_property_definitions", 34);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "counted_by_or_null", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swift_async_context", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "lto_visibility_public", 21);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "iboutletcollection", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_ownership", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swiftcall", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "type_visibility", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_direct_members", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ns_returns_retained", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ns_consumes_self", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "preferred_type", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "enforce_tcb", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_private", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "blocks", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "address_space", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "loader_uninitialized", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cfi_canonical_jump_table", 24);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_runtime_name", 17);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "preserve_most", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "diagnose_as_builtin", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noderef", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_bridge", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "called_once", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_lifetimebound", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_protocol_requires_explicit_implementation", 46);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_root_class", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "unavailable", 11);
          v181 = *(_DWORD *)(a6 + 260) == 15;
          sub_F8AC60((__int64)&s1, &v181, "guard", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_consumes_this", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_gc", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 55) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "import_name", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_arc_weak_reference_unavailable", 35);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "flag_enum", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pascal", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_bridge_mutable", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "release_handle", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_returns_retained_on_non_zero", 31);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "enum_extensibility", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "coro_wrapper", 12);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cf_consumed", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "enforce_read_only_placement", 27);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pass_object_size", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "blocking", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ns_returns_not_retained", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sized_by_or_null", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "amdgpu_kernel", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noescape", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_returns_retained_on_zero", 27);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "clspv_libclc_builtin", 20);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "matrix_type", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "minsize", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonblocking", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pointer_with_type_tag", 21);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "objc_requires_super", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_constant", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "swiftasynccall", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "aarch64_vector_pcs", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "disable_tail_calls", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "os_returns_not_retained", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "internal_linkage", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "weak_import", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "opencl_global", 13);
          if ( (_BYTE)v185 )
            return v184;
          return v13;
        }
      }
      if ( a5 == j__strlen("gnu") )
      {
        v13 = memcmp(a4, "gnu", a5);
        if ( !v13 )
        {
          s1 = a2;
          v183 = a3;
          v185 = 0;
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alloc_size", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "always_inline", 13);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "short_call", 10);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "far", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "unused", 6);
          v132 = *(_DWORD *)(a6 + 248);
          LODWORD(v133) = 0;
          if ( v132 <= 0x33 )
            v133 = (0xE064006006000uLL >> v132) & 1;
          v181 = v133;
          sub_F8AC60((__int64)&s1, &v181, "model", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "target", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "retain", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cleanup", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "flatten", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "deprecated", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warn_unused", 11);
          v134 = *(_DWORD *)(a6 + 248);
          LODWORD(v135) = 0;
          if ( v134 <= 0x26 )
            v135 = (0x6018A06018uLL >> v134) & 1;
          v181 = v135;
          sub_F8AC60((__int64)&s1, &v181, "patchable_function_entry", 24);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "zero_call_used_regs", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pcs", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "stdcall", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "long_call", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sysv_abi", 8);
          v136 = *(_DWORD *)(a6 + 268);
          v137 = 1;
          if ( v136 != 5 )
          {
            v138 = *(_DWORD *)(a6 + 260);
            v139 = *(_DWORD *)(a6 + 248);
            if ( v138 != 15 || (unsigned int)(v139 - 3) > 2 )
            {
              v137 = 1;
              if ( v139 != 7 )
              {
                v137 = 0;
                if ( v136 == 3 )
                {
                  v137 = v138 == 3;
                  if ( v138 == 7 )
                    v137 = *(_DWORD *)(a6 + 264) != 49 && (unsigned int)(*(_DWORD *)(a6 + 264) - 18) > 7;
                }
              }
            }
          }
          v181 = v137;
          sub_F8AC60((__int64)&s1, &v181, "ifunc", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "constructor", 11);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "force_align_arg_pointer", 23);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_stack_protector", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "returns_nonnull", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "may_alias", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonstring", 9);
          v140 = *(_DWORD *)(a6 + 260);
          v141 = 1;
          if ( v140 != 15 )
          {
            v141 = 0;
            if ( *(_DWORD *)(a6 + 248) == 38 )
              v141 = v140 == 24 && *(_DWORD *)(a6 + 256) == 3 || *(_DWORD *)(a6 + 256) == 3 && v140 == 25;
          }
          v181 = v141;
          sub_F8AC60((__int64)&s1, &v181, "dllimport", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "sentinel", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warning", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "tls_model", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "leaf", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nocommon", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format_matches", 14);
          v142 = *(_DWORD *)(a6 + 260);
          v143 = 1;
          if ( v142 != 15 )
          {
            v143 = 0;
            if ( *(_DWORD *)(a6 + 248) == 38 )
              v143 = v142 == 24 && *(_DWORD *)(a6 + 256) == 3 || *(_DWORD *)(a6 + 256) == 3 && v142 == 25;
          }
          v181 = v143;
          sub_F8AC60((__int64)&s1, &v181, "dllexport", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_split_stack", 14);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_profile_instrument_function", 30);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cold", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "error", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "common", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alias", 5);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nocf_check", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "regcall", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "assume_aligned", 14);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "micromips", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "hot", 3);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "gnu_inline", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "target_clones", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "__const", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "alloc_align", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "destructor", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_randomize_layout", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "format_arg", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noreturn", 8);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "mips16", 6);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 3;
          sub_F8AC60((__int64)&s1, &v181, "near", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "section", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ms_abi", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nonnull", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nothrow", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "artificial", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "regparm", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1 || (unsigned int)(*(_DWORD *)(a6 + 248) - 3) <= 2;
          sub_F8AC60((__int64)&s1, &v181, "target_version", 14);
          v144 = *(_DWORD *)(a6 + 248);
          LODWORD(v145) = 0;
          if ( v144 <= 0x26 )
            v145 = (0x7818130086uLL >> v144) & 1;
          v181 = v145;
          sub_F8AC60((__int64)&s1, &v181, "interrupt", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "aligned", 7);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nomicromips", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "used", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "randomize_layout", 16);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "packed", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "visibility", 10);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "pure", 4);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 16) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "nomips16", 8);
          v181 = *(_DWORD *)(a6 + 248) == 7;
          sub_F8AC60((__int64)&s1, &v181, "signal", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_instrument_function", 22);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "nodebug", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_address_safety_analysis", 26);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize_address", 19);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "transparent_union", 17);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "const", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "weakref", 7);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "mode", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "vector_size", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "naked", 5);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "no_caller_saved_registers", 25);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "no_sanitize_thread", 18);
          v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 37) <= 1;
          sub_F8AC60((__int64)&s1, &v181, "function_return", 15);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "thiscall", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "malloc", 6);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "weak", 4);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "fastcall", 8);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "warn_unused_result", 18);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "cdecl", 5);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "fallthrough", 11);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "ms_struct", 9);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "returns_twice", 13);
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "selectany", 9);
          if ( (_BYTE)v185 )
            return v184;
          return v13;
        }
      }
      if ( a5 == j__strlen("msvc") )
      {
        v13 = memcmp(a4, "msvc", a5);
        if ( !v13 )
        {
          s1 = a2;
          v183 = a3;
          v185 = 0;
          v181 = 1;
          sub_F8AC60((__int64)&s1, &v181, "noinline", 8);
          if ( (_BYTE)v185 )
            return v184;
          return v13;
        }
      }
      v13 = 0;
      if ( a5 != j__strlen("riscv") )
        return v13;
      v13 = memcmp(a4, "riscv", a5);
      if ( !v13 )
      {
        v42 = *(_DWORD *)(a6 + 248);
        s1 = a2;
        v183 = a3;
        v185 = 0;
        v181 = (unsigned int)(v42 - 27) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "vls_cc", 6);
        v181 = (unsigned int)(*(_DWORD *)(a6 + 248) - 27) <= 1;
        sub_F8AC60((__int64)&s1, &v181, "vector_cc", 9);
        if ( (_BYTE)v185 )
          return v184;
        return v13;
      }
      return 0;
    case 4:
      v21 = *(_DWORD *)(a6 + 260);
      v22 = *(_DWORD *)(a6 + 248);
      if ( v21 == 15 )
      {
        v13 = 1;
      }
      else
      {
        v13 = 0;
        if ( v22 == 38 )
        {
          v13 = v21 == 24 && *(_DWORD *)(a6 + 256) == 3 || *(_DWORD *)(a6 + 256) == 3 && v21 == 25;
          v24 = a3 != 14;
          if ( a3 == 9 && *(_QWORD *)a2 == 0x726F706D696C6C64LL && *((_BYTE *)a2 + 8) == 116 )
          {
            v24 = 1;
            v29 = 1;
            v26 = 1;
            v27 = 0;
          }
          else
          {
            v29 = 0;
            v26 = 1;
            v27 = 0;
          }
LABEL_45:
          v30 = *(unsigned __int8 *)(a6 + 472);
          v159 = 1;
          goto LABEL_46;
        }
      }
      v23 = 1;
      v24 = a3 != 14;
      if ( v22 <= 0x26 )
        v23 = ((0x680000000AuLL >> v22) & 1) == 0;
      v25 = 1;
      v26 = !v23;
      v27 = v22 == 3;
      if ( v22 <= 0x33 )
        v25 = ((0xE060004000000uLL >> v22) & 1) == 0;
      v28 = v25 && v23;
      v29 = 0;
      if ( a3 == 9 )
      {
        if ( *(_QWORD *)a2 == 0x726F706D696C6C64LL && *((_BYTE *)a2 + 8) == 116 )
        {
          v24 = 1;
          v29 = 1;
        }
        else
        {
          v29 = 0;
        }
      }
      if ( !v28 )
        goto LABEL_45;
      v159 = 0;
      v30 = 0;
LABEL_46:
      v31 = a3 != 9;
      v32 = a3 != 10;
      v33 = a3 != 17;
      if ( v24 )
      {
        v34 = v32 | v29;
        if ( !(v31 | (unsigned __int8)v29) )
        {
          if ( *(_QWORD *)a2 == 0x6F7461636F6C6C61LL && *((_BYTE *)a2 + 8) == 114 )
          {
            v29 = v24;
            v13 = 1;
          }
          else
          {
            v29 = 0;
          }
          goto LABEL_308;
        }
      }
      else
      {
        if ( *(_QWORD *)a2 == 0x765F74756F79616CLL && *((_DWORD *)a2 + 2) == 1769173605 && a2[6] == 28271 )
        {
          v13 = v30;
          v29 = 1;
          goto LABEL_307;
        }
        v34 = v32 | v29;
      }
      if ( !v34 )
      {
        if ( *(_QWORD *)a2 == 0x6563697665645F5FLL && a2[4] == 24415 )
        {
          v29 = 1;
          v13 = 1;
          goto LABEL_308;
        }
LABEL_1201:
        if ( *(_QWORD *)a2 == 0x6465726168735F5FLL && a2[4] == 24415 )
        {
          v13 = 1;
          v170 = a3 != 5;
          v96 = a3 != 11;
          v166 = v21 == 15;
          if ( !v27 )
            goto LABEL_1196;
          v29 = v27;
          v13 = 1;
        }
        else
        {
          v170 = a3 != 5;
          v96 = a3 != 11;
          v166 = v21 == 15;
          if ( !v27 )
            goto LABEL_311;
        }
        v34 = v29 | (a3 != 16);
        goto LABEL_1204;
      }
      if ( v33 | (unsigned __int8)v29 )
      {
LABEL_307:
        if ( v32 | (unsigned __int8)v29 )
        {
LABEL_308:
          v34 = v29 | (a3 != 16);
          goto LABEL_309;
        }
        v29 = 0;
        goto LABEL_1201;
      }
      if ( !(*(_QWORD *)a2 ^ 0x635F646972675F5FLL | *((_QWORD *)a2 + 1) ^ 0x5F746E6174736E6FLL)
        && *((_BYTE *)a2 + 16) == 95 )
      {
        v29 = v34;
        v13 = 1;
      }
      else
      {
        v29 = 0;
      }
LABEL_309:
      v170 = a3 != 5;
      v96 = a3 != 11;
      v166 = v21 == 15;
      v97 = 0;
      if ( !v27 )
        goto LABEL_310;
LABEL_1204:
      v97 = *(_DWORD *)(a6 + 252) == 36;
LABEL_310:
      if ( !v34 )
      {
        if ( *(_QWORD *)a2 ^ 0x705F646972627968LL | *((_QWORD *)a2 + 1) ^ 0x656C626168637461LL )
          goto LABEL_1212;
        v13 = v97;
        v99 = 1;
LABEL_1197:
        v98 = v96 | v99;
        goto LABEL_316;
      }
LABEL_311:
      if ( v29 )
      {
LABEL_1196:
        v99 = 1;
        goto LABEL_1197;
      }
      if ( a3 != 8 )
      {
LABEL_1212:
        v99 = v29 | v170;
        if ( !((unsigned __int8)v29 | v170) )
        {
          if ( *(_DWORD *)a2 == 1918989671 && *((_BYTE *)a2 + 4) == 100 )
          {
            v13 = v166;
            v170 = 0;
            v99 = 1;
LABEL_692:
            v100 = v31 | v99;
            goto LABEL_319;
          }
          v151 = a3 != 10;
          v170 = 0;
LABEL_691:
          if ( !v151 )
          {
            v102 = a3 != 8;
            if ( *(_QWORD *)a2 == 0x6C61626F6C675F5FLL && a2[4] == 24415 )
            {
              v13 = 1;
              v99 = 1;
              if ( v166 )
              {
                v99 = v166;
                v13 = 1;
                v103 = a3 != 12;
LABEL_323:
                v104 = v102 | v99;
                goto LABEL_324;
              }
            }
            else if ( v166 )
            {
LABEL_322:
              v103 = a3 != 12;
              if ( !((unsigned __int8)v99 | (a3 != 12)) )
              {
                if ( *(_QWORD *)a2 == 0x7265766E6F636F6ELL && *((_DWORD *)a2 + 2) == 1953391975 )
                {
                  v106 = 1;
                  v13 = 1;
                }
                else
                {
                  v106 = 0;
                }
                v99 = v106;
                v103 = 0;
                v105 = 1;
                goto LABEL_325;
              }
              goto LABEL_323;
            }
            v100 = v99 | v31;
            goto LABEL_320;
          }
          goto LABEL_692;
        }
        v99 = v29;
        goto LABEL_1197;
      }
      if ( *(_QWORD *)a2 == 0x6E72757465726F6ELL || *(_QWORD *)a2 == 0x657461636F6C6C61LL )
      {
        v99 = 1;
        v13 = 1;
        goto LABEL_690;
      }
      v98 = v96;
      v99 = 0;
LABEL_316:
      if ( v98 )
      {
LABEL_690:
        v151 = v32 | v99;
        goto LABEL_691;
      }
      if ( *(_QWORD *)a2 == 0x6567616E616D5F5FLL && a2[4] == 24420 && *((_BYTE *)a2 + 10) == 95 )
      {
        v100 = 1;
        v99 = 1;
        v13 = 1;
      }
      else
      {
        v100 = v99 | v31;
      }
LABEL_319:
      v101 = 1;
      v102 = a3 != 8;
      if ( v166 )
        goto LABEL_321;
LABEL_320:
      v101 = 0;
      if ( v22 == 38 )
        v101 = v21 == 24 && *(_DWORD *)(a6 + 256) == 3 || v21 == 25 && *(_DWORD *)(a6 + 256) == 3;
LABEL_321:
      if ( v100 )
        goto LABEL_322;
      if ( *(_QWORD *)a2 == 0x726F7078656C6C64LL && *((_BYTE *)a2 + 8) == 116 )
      {
        v13 = v101;
        v104 = 1;
        v99 = 1;
      }
      else
      {
        v104 = v102 | v99;
      }
      v103 = a3 != 12;
LABEL_324:
      v105 = a3 != 7;
      v106 = v103 | v99;
      if ( !v104 )
      {
        v107 = v99 | v105;
        if ( *(_QWORD *)a2 != 0x7463697274736572LL )
          goto LABEL_326;
        v99 = 1;
        v13 = 1;
        goto LABEL_327;
      }
LABEL_325:
      v107 = v105 | v99;
      if ( v106 )
      {
LABEL_326:
        if ( !v107 && *(_DWORD *)a2 == 1752461166 && a2[2] == 28530 && *((_BYTE *)a2 + 6) == 119 )
        {
          if ( !v159 )
          {
            v13 = 1;
            v99 = 1;
            goto LABEL_332;
          }
          v99 = v159;
          v13 = 1;
          v108 = v159;
          goto LABEL_329;
        }
        goto LABEL_327;
      }
      if ( *(_QWORD *)a2 != 0x636570735F757063LL || *((_DWORD *)a2 + 2) != 1667851881 )
      {
LABEL_327:
        v108 = v96 | v99;
        goto LABEL_328;
      }
      v108 = 1;
      v99 = 1;
      v13 = 1;
LABEL_328:
      if ( v159 )
      {
LABEL_329:
        v109 = *(unsigned __int8 *)(a6 + 472);
        goto LABEL_330;
      }
      v109 = 0;
LABEL_330:
      if ( v108 )
      {
        if ( !(v102 | (unsigned __int8)v99) )
        {
          v102 = 0;
          if ( *(_QWORD *)a2 == 0x5F5F74736F685F5FLL )
          {
            v13 = 1;
            goto LABEL_334;
          }
          goto LABEL_699;
        }
      }
      else if ( *(_QWORD *)a2 == 0x61625F7974706D65LL && a2[4] == 25971 && *((_BYTE *)a2 + 10) == 115 )
      {
        v13 = v109;
        goto LABEL_334;
      }
LABEL_332:
      if ( !((unsigned __int8)v99 | v32) )
      {
        if ( *(_QWORD *)a2 == 0x7461636572706564LL && a2[4] == 25701 )
        {
          v103 = 1;
          v13 = 1;
          goto LABEL_335;
        }
LABEL_681:
        if ( !v170 && !v99 )
        {
          if ( *(_DWORD *)a2 == 1734962273 && *((_BYTE *)a2 + 4) == 110 )
            goto LABEL_685;
          goto LABEL_1219;
        }
        v103 = v99;
        goto LABEL_335;
      }
      if ( v99 )
      {
LABEL_334:
        v103 = 1;
LABEL_335:
        v33 |= v103;
        goto LABEL_336;
      }
LABEL_699:
      if ( v103 )
      {
        v99 = 0;
        goto LABEL_681;
      }
      if ( *(_QWORD *)a2 == 0x6174736E6F635F5FLL && *((_DWORD *)a2 + 2) == 1600091246
        || *(_QWORD *)a2 == 0x707369645F757063LL && *((_DWORD *)a2 + 2) == 1751348321 )
      {
        v103 = 1;
        v13 = 1;
        goto LABEL_340;
      }
LABEL_336:
      if ( v33 )
      {
        if ( v170 || v103 )
          goto LABEL_340;
LABEL_1219:
        if ( *(_DWORD *)a2 != 1701536110 || *((_BYTE *)a2 + 4) != 100 )
        {
          v103 = 0;
          goto LABEL_340;
        }
LABEL_685:
        v103 = v26;
        v13 = 1;
        if ( !v26 )
        {
          v111 = a3 != 18;
          goto LABEL_687;
        }
        goto LABEL_341;
      }
      if ( !(*(_QWORD *)a2 ^ 0x68636E75616C5F5FLL | *((_QWORD *)a2 + 1) ^ 0x5F73646E756F625FLL)
        && *((_BYTE *)a2 + 16) == 95 )
      {
        v103 = 1;
        v13 = 1;
      }
LABEL_340:
      if ( v26 )
      {
LABEL_341:
        v110 = *(_DWORD *)(a6 + 340) == 10;
        goto LABEL_342;
      }
      v110 = 0;
LABEL_342:
      v111 = a3 != 18;
      if ( v103 )
      {
LABEL_687:
        v103 = 1;
LABEL_688:
        v112 = v103 || v96;
        goto LABEL_351;
      }
      if ( v102 )
        goto LABEL_347;
      if ( *(_QWORD *)a2 == 0x656C626174766F6ELL )
      {
        v13 = v110;
        v103 = 1;
        goto LABEL_688;
      }
      if ( *(_QWORD *)a2 == 0x6765735F65646F63LL || *(_QWORD *)a2 == 0x656E696C6E696F6ELL )
      {
        v103 = 1;
        v13 = 1;
        goto LABEL_688;
      }
LABEL_347:
      if ( a3 == 18 )
      {
        v111 = 0;
        if ( !(*(_QWORD *)a2 ^ 0x7472616475635F5FLL | *((_QWORD *)a2 + 1) ^ 0x6E69746C6975625FLL) && a2[8] == 24415 )
        {
          v103 = 1;
          v113 = 1;
          v13 = 1;
LABEL_352:
          v114 = v103 || a3 != 4;
          goto LABEL_353;
        }
        v112 = v96;
LABEL_351:
        v113 = a3 != 31;
        if ( !v112 )
        {
          if ( *(_QWORD *)a2 == 0x6666756265666173LL && a2[4] == 29285 && *((_BYTE *)a2 + 10) == 115 )
          {
            v103 = 1;
            v13 = 1;
            goto LABEL_356;
          }
          v115 = v103 || v113;
          goto LABEL_355;
        }
        goto LABEL_352;
      }
      if ( v105 )
      {
        v111 = v105;
        goto LABEL_688;
      }
      if ( *(_DWORD *)a2 == 1818324846 && a2[2] == 24937 && *((_BYTE *)a2 + 6) == 115 )
      {
        v111 = 1;
        v103 = 1;
        v13 = 1;
        v113 = a3 != 31;
        goto LABEL_354;
      }
      v111 = 1;
      v114 = a3 != 4;
      v113 = a3 != 31;
      v103 = 0;
LABEL_353:
      if ( v114 )
      {
LABEL_354:
        v115 = v113 || v103;
LABEL_355:
        if ( v115 )
        {
LABEL_356:
          v116 = v103 || v111;
          goto LABEL_357;
        }
        v167 = v96;
        v153 = memcmp(a2, "__device_builtin_surface_type__", 0x1Fu);
        v31 = a3 != 9;
        v96 = v167;
        if ( v153 )
          goto LABEL_1346;
LABEL_1349:
        v103 = 1;
        v13 = 1;
        goto LABEL_359;
      }
      v116 = v103 || v111;
      if ( *(_DWORD *)a2 == 1684632949 )
        goto LABEL_1349;
LABEL_357:
      if ( !v116 )
      {
        if ( *(_QWORD *)a2 ^ 0x6563697665645F5FLL | *((_QWORD *)a2 + 1) ^ 0x6E69746C6975625FLL || a2[8] != 24415 )
          goto LABEL_359;
        v103 = 1;
        v13 = 1;
LABEL_360:
        if ( !v103 && a3 == 15 )
        {
          if ( *(_QWORD *)a2 == 0x675F746369727473LL
            && *((_DWORD *)a2 + 2) == 1751342963
            && a2[6] == 25445
            && *((_BYTE *)a2 + 14) == 107 )
          {
            v103 = 1;
            v13 = 1;
            goto LABEL_364;
          }
          goto LABEL_363;
        }
        goto LABEL_361;
      }
      if ( !v103 && !v113 )
      {
        v103 = 0;
LABEL_1346:
        v168 = v96;
        v164 = v31;
        v154 = memcmp(a2, "__device_builtin_texture_type__", 0x1Fu);
        v31 = v164;
        v96 = v168;
        if ( !v154 )
        {
          v103 = 1;
          v13 = 1;
LABEL_361:
          v117 = v103 || v96;
          goto LABEL_362;
        }
        goto LABEL_360;
      }
LABEL_359:
      if ( v103 || v102 )
        goto LABEL_360;
      v117 = v103 || v96;
      if ( *(_QWORD *)a2 == 0x79747265706F7270LL )
      {
        v103 = 1;
        v13 = 1;
        goto LABEL_363;
      }
LABEL_362:
      if ( !v117 )
      {
        if ( *(_QWORD *)a2 == 0x5F74696E695F6F6ELL && a2[4] == 27745 && *((_BYTE *)a2 + 10) == 108 )
          return 1;
        goto LABEL_364;
      }
LABEL_363:
      if ( !v103 && a3 == 6 )
      {
        if ( *(_DWORD *)a2 == 1701996660 && a2[2] == 25697 )
          return 1;
        goto LABEL_365;
      }
LABEL_364:
      if ( v103 || v31 )
      {
LABEL_365:
        if ( !v103 )
          return 0;
        return v13;
      }
      return *(_QWORD *)a2 == 0x6E617463656C6573LL && *((_BYTE *)a2 + 8) == 121;
    case 5:
      switch ( a3 )
      {
        case 4LL:
          v35 = *(_DWORD *)a2 == 1886351212;
          break;
        case 6LL:
          if ( (*(_DWORD *)a2 != 1851880034 || a2[2] != 26723) && (*(_DWORD *)a2 != 1869770357 || a2[2] != 27756) )
          {
            if ( *(_DWORD *)a2 == 1684105331 )
            {
              v35 = 1;
              if ( a2[2] == 29285 )
                goto LABEL_59;
            }
            v37 = 1;
            v35 = 0;
            goto LABEL_58;
          }
          v35 = 1;
          break;
        case 10LL:
          if ( *(_QWORD *)a2 == 0x61657268746D756ELL )
          {
            v35 = 1;
            if ( a2[4] == 29540 )
            {
LABEL_57:
              v37 = v35 || a3 != 7;
LABEL_58:
              if ( !v37 )
              {
                if ( *(_DWORD *)a2 == 1952541798 && a2[2] == 25972 && *((_BYTE *)a2 + 6) == 110 )
                  return 1;
                goto LABEL_60;
              }
LABEL_59:
              if ( !v35 && a3 == 8 )
              {
                if ( *(_QWORD *)a2 == 0x657A695365766157LL )
                  return 1;
                goto LABEL_61;
              }
LABEL_60:
              if ( !v35 && a3 == 4 )
              {
                v13 = 0;
                if ( *(_DWORD *)a2 != 1684632949 )
                  return v13;
                return 1;
              }
LABEL_61:
              v13 = 0;
              if ( !v35 )
                return v13;
              return 1;
            }
          }
          v36 = 1;
          v35 = 0;
LABEL_56:
          if ( !v36 )
          {
            if ( *(_QWORD *)a2 == 0x6E676953746F6F52LL
              && *((_DWORD *)a2 + 2) == 1920300129
              && *((_BYTE *)a2 + 12) == 101 )
            {
              return 1;
            }
            goto LABEL_59;
          }
          goto LABEL_57;
        default:
          v35 = 0;
          break;
      }
      v36 = v35 || a3 != 13;
      goto LABEL_56;
    case 7:
      if ( a3 == 4 )
      {
        if ( *(_DWORD *)a2 != 1886351212 )
        {
LABEL_65:
          v38 = 1;
LABEL_66:
          v11 = a3 != 16;
LABEL_370:
          if ( !v11 )
          {
            if ( !(*(_QWORD *)a2 ^ 0x6C6C6F726E756F6ELL | *((_QWORD *)a2 + 1) ^ 0x6D616A5F646E615FLL) )
            {
              v11 = 1;
LABEL_373:
              if ( a3 == 15 && !v11 )
                return *(_QWORD *)a2 == 0x206572616C636564LL
                    && *((_DWORD *)a2 + 2) == 1769103734
                    && a2[6] == 28257
                    && *((_BYTE *)a2 + 14) == 116;
LABEL_696:
              if ( v38 )
                return v11;
              if ( v11 )
                return 1;
LABEL_76:
              v13 = 0;
              if ( *(_QWORD *)a2 != 0x6C6C6F726E756F6ELL )
                return v13;
              return 1;
            }
            v39 = v38;
LABEL_74:
            if ( !v39 )
            {
              if ( *(_QWORD *)a2 == 0x6765735F74696E69LL )
                return 1;
              goto LABEL_76;
            }
            goto LABEL_373;
          }
          if ( a3 == 12 )
          {
            if ( *(_QWORD *)a2 == 0x206572616C636564LL )
            {
              if ( *((_DWORD *)a2 + 2) == 1684892019 )
                return 1;
              v11 = 0;
            }
            else
            {
              v11 = 0;
            }
            goto LABEL_696;
          }
          goto LABEL_72;
        }
      }
      else
      {
        if ( a3 != 7 )
        {
          v38 = a3 != 8;
          if ( a3 == 6 )
          {
            if ( *(_DWORD *)a2 != 1869770357 || a2[2] != 27756 )
            {
              v11 = 1;
              goto LABEL_370;
            }
          }
          else
          {
            if ( a3 != 14 )
              goto LABEL_66;
            if ( (*(_QWORD *)a2 != 0x206572616C636564LL || *((_DWORD *)a2 + 2) != 1735549300 || a2[6] != 29797)
              && (*(_QWORD *)a2 != 0x615F6C6C6F726E75LL || *((_DWORD *)a2 + 2) != 1784636526 || a2[6] != 28001) )
            {
LABEL_72:
              v11 = 0;
LABEL_73:
              v39 = v11 || v38;
              goto LABEL_74;
            }
          }
LABEL_425:
          v11 = 1;
          goto LABEL_73;
        }
        if ( *(_DWORD *)a2 != 1953853298 || a2[2] != 28265 || *((_BYTE *)a2 + 6) != 101 )
          goto LABEL_65;
      }
      v38 = 1;
      goto LABEL_425;
    case 9:
      switch ( a3 )
      {
        case 10LL:
          if ( *(_QWORD *)a2 == 0x70756F72675F7673LL )
          {
            v11 = 1;
            if ( a2[4] == 25705 )
            {
LABEL_15:
              if ( a3 == 10 && !v11 )
              {
                if ( *(_QWORD *)a2 == 0x7366666F6B636170LL && a2[4] == 29797 )
                  return 1;
                v12 = 1;
LABEL_8:
                if ( v12 )
                  return v11;
                return *(_QWORD *)a2 == 0x70756F72675F7673LL
                    && *((_DWORD *)a2 + 2) == 1701080681
                    && *((_BYTE *)a2 + 12) == 120;
              }
              goto LABEL_107;
            }
          }
          break;
        case 16LL:
          v11 = (*(_QWORD *)a2 ^ 0x70756F72675F7673LL | *((_QWORD *)a2 + 1) ^ 0x6469646165726874LL) == 0;
          goto LABEL_15;
        case 8LL:
          v11 = *(_QWORD *)a2 == 0x7265747369676572LL;
LABEL_107:
          if ( a3 == 19 && !v11 )
            return !(*(_QWORD *)a2 ^ 0x61707369645F7673LL | *((_QWORD *)a2 + 1) ^ 0x6165726874686374LL)
                && a2[8] == 26980
                && *((_BYTE *)a2 + 18) == 100;
          goto LABEL_7;
        case 11LL:
          if ( *(_QWORD *)a2 == 0x7469736F705F7673LL && a2[4] == 28521 && *((_BYTE *)a2 + 10) == 110 )
            return 1;
          v11 = 0;
LABEL_7:
          v12 = v11 || a3 != 13;
          goto LABEL_8;
      }
      v11 = 0;
      goto LABEL_15;
    default:
      return 0;
  }
}

