/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51A0C
// Address: 0x00051A0C

//----- (00051A0C) --------------------------------------------------------
int __fastcall sub_51A0C(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // r3
  int v5; // r1
  unsigned __int8 *v6; // r0
  unsigned __int8 **v7; // r5
  unsigned __int8 *v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r0
  int v13; // r0
  char *v14; // r0
  int v15; // r1
  unsigned __int8 *v16; // r1
  unsigned __int8 *v17; // r0
  int v18; // r4
  int v19; // r6
  unsigned __int8 *v20; // r7
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r2
  int v27; // r3
  char *v28; // r1
  _BYTE *v29; // r6
  int v30; // r0
  unsigned __int8 *v31; // r0
  int v32; // r4
  int v33; // r2
  int v34; // r1
  unsigned __int8 *v36; // r0
  int v37; // r0
  unsigned __int8 *v38; // r0
  char v39; // r0
  void *v40; // r0
  _BYTE *v41; // r3
  void **v42; // r2
  unsigned __int8 *v43; // r6
  int v44; // r0
  void *v45; // r0
  int v46; // r7
  void *v47; // r1
  unsigned __int8 v48; // r6
  void *v49; // r0
  char *v50; // r0
  unsigned __int8 *v51; // r0
  char v52; // r0
  char v53; // r4
  int v54; // r0
  int v55; // r6
  void *v56; // r1
  void *v57; // r0
  void *v58; // r0
  int v59; // r7
  void *v60; // r1
  void *v61; // r0
  unsigned __int8 v62; // r0
  _BYTE *v63; // r2
  char *v64; // r1
  unsigned __int8 *v65; // r0
  int v66; // r0
  unsigned __int8 *v67; // r0
  int v68; // r0
  unsigned __int8 *v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r2
  __int64 v74; // r0
  int v75; // r1
  int v76; // r4
  int v77; // r3
  int v78; // r7
  unsigned __int8 v79; // r1
  char *v80; // r0
  __int16 v81; // r0
  __int16 v82; // r0
  unsigned __int8 *v83; // r0
  int v84; // r0
  int v85; // r2
  unsigned __int8 *v86; // r1
  char *v87; // r2
  unsigned __int8 *v88; // r3
  int v89; // r0
  int v90; // r0
  int v91; // r3
  int v92; // r0
  int v93; // r4
  unsigned __int8 *i; // r6
  int v95; // r4
  int v96; // r1
  int v98; // r7
  int v99; // r0
  char v100; // r0
  unsigned __int8 v101; // r1
  unsigned __int8 v102; // r5
  void *v103; // r0
  int v104; // r7
  unsigned __int8 *v105; // r2
  unsigned __int8 *v106; // r6
  int v107; // r0
  bool v108; // zf
  const void *v109; // r6
  int v110; // r0
  unsigned __int8 *v111; // r4
  int v112; // r0
  char v113; // r1
  int v114; // r3
  int v115; // r2
  _BOOL4 v116; // r0
  char v117; // r0
  unsigned __int8 v118; // r2
  size_t v119; // r4
  void **v120; // r7
  void *v121; // r0
  int v122; // r0
  size_t v123; // r2
  _DWORD *v124; // r3
  int v125; // [sp+4h] [bp-44h]
  int v126; // [sp+8h] [bp-40h]
  int v127; // [sp+Ch] [bp-3Ch]
  _BYTE *v128; // [sp+10h] [bp-38h]
  int v129; // [sp+14h] [bp-34h]
  int v130; // [sp+18h] [bp-30h]
  int v131; // [sp+1Ch] [bp-2Ch]
  int v132; // [sp+20h] [bp-28h]
  _BYTE *v133; // [sp+24h] [bp-24h]
  int v134; // [sp+28h] [bp-20h]
  int v135; // [sp+28h] [bp-20h]
  char v137; // [sp+2Ch] [bp-1Ch]
  _DWORD *v138; // [sp+30h] [bp-18h]
  unsigned __int8 v139; // [sp+30h] [bp-18h]
  unsigned __int8 v140; // [sp+30h] [bp-18h]
  _BYTE *v141; // [sp+34h] [bp-14h]
  unsigned __int8 *v142; // [sp+34h] [bp-14h]
  unsigned __int8 *v143; // [sp+34h] [bp-14h]
  int v144; // [sp+34h] [bp-14h]
  int v145; // [sp+34h] [bp-14h]
  int v148; // [sp+40h] [bp-8h]
  int v149; // [sp+40h] [bp-8h]
  char *v150; // [sp+40h] [bp-8h]
  int v151; // [sp+40h] [bp-8h]
  _DWORD *v152; // [sp+44h] [bp-4h]
  _BYTE *v153; // [sp+44h] [bp-4h]

  v4 = (_DWORD *)a1;
  v5 = *(unsigned __int8 *)(a1 + 68);
  v141 = (_BYTE *)(a1 + 492);
  v6 = *(unsigned __int8 **)(a1 + 4);
  v131 = (int)(v4 + 7);
  v138 = v4 + 37;
  v133 = v4 + 17;
  v7 = (unsigned __int8 **)(v4 + 1);
  v132 = 1;
  v152 = v4;
  while ( 1 )
  {
    v4[2] = v6;
    v4[3] = 0;
    if ( v5 << 24 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = v6;
          v9 = *v6;
          if ( v9 != 42 )
            break;
          v6 = v8 + 1;
          *v7 = v8 + 1;
          v10 = v8[1];
          if ( v10 == 41 )
          {
            if ( (*v141 & 2) != 0 )
              goto LABEL_14;
          }
          else if ( v10 == 47 && (unsigned __int8)*v141 << 31 )
          {
LABEL_14:
            *v7 = v8 + 2;
            *v133 = 0;
            goto LABEL_19;
          }
        }
        if ( !v9 )
          break;
        v6 = v8 + 1;
        *v7 = v8 + 1;
      }
LABEL_15:
      v11 = v4[8];
      if ( v11 == a3 )
      {
        v65 = *v7 - 1;
        if ( !*v65 )
          *v7 = v65;
        *(_WORD *)(a2 + 12) = 1;
        return 0;
      }
      v12 = v152[7] + 28 * (v11 - 1);
      *v152 = *(_DWORD *)(v12 + 12);
      v152[1] = *(_DWORD *)(v12 + 16);
      v152[10] = *(_DWORD *)(v12 + 24);
      if ( v11 )
      {
        v152[8] = v11 - 1;
        sub_1B3BC((char **)v12);
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_19:
        v16 = *v7;
        do
        {
          do
          {
            v17 = v16 + 1;
            *v7 = v16 + 1;
            v18 = *v16;
            v19 = (char)v18;
            ++v16;
          }
          while ( (unsigned int)(v18 - 9) < 5 );
          v16 = v17;
        }
        while ( v18 == 32 );
        v4 = v152;
        if ( a4 )
          *a4 = *v138;
        if ( !(_BYTE)v18 )
          goto LABEL_15;
        if ( (char)v18 == 47 )
        {
          v20 = *v7;
          if ( **v7 == 47 && (*v141 & 4) != 0 )
            goto LABEL_15;
          goto LABEL_32;
        }
        if ( (char)v18 == 59 )
        {
          if ( (*v141 & 8) != 0 )
            goto LABEL_15;
          v20 = *v7;
LABEL_32:
          v152[3] = v20 - 1;
          goto LABEL_33;
        }
        if ( (char)v18 > -2 )
          break;
        v25 = v152[8];
        if ( !v25 )
          goto LABEL_200;
        v26 = (unsigned __int8)v18 ^ 0x80;
        v27 = 28 * v152[10];
        v28 = (char *)v152[7];
        if ( *(_DWORD *)&v28[v27 + 4] > v26 )
        {
          v29 = *(_BYTE **)(*(_DWORD *)&v28[v27] + 12 * v26);
          if ( v29 )
          {
            if ( *v29 )
            {
              if ( v152[9] < (unsigned int)(v25 + 1) )
              {
                v28 = (char *)qvector_reserve(v131, v28, v25 + 1, 0x1Cu);
                v152[7] = v28;
                v25 = v152[8];
              }
              v13 = 28 * v25;
              *(_DWORD *)&v28[v13] = 0;
              v14 = &v28[v13];
              *((_DWORD *)v14 + 2) = 0;
              *((_DWORD *)v14 + 1) = 0;
              ++v152[8];
              *((_DWORD *)v14 + 3) = *v152;
              *((_DWORD *)v14 + 4) = v152[1];
              v15 = v152[10];
              *((_DWORD *)v14 + 5) = 0;
              *((_DWORD *)v14 + 6) = v15;
              v152[10] = *(_DWORD *)(v152[7] + 28 * v152[10] + 24);
              *v152 = v29;
              v152[1] = v29;
            }
          }
        }
      }
      v20 = (unsigned __int8 *)v152[1];
      v152[3] = v20 - 1;
      if ( (char)v18 <= -1 )
      {
        v30 = 0;
        goto LABEL_53;
      }
LABEL_33:
      if ( isalpha(v18) )
      {
        v21 = a2;
        v22 = (int)v152;
        if ( (char)v18 == 76 )
        {
          v23 = *v20;
          if ( v23 == 39 )
          {
            *v7 = v20 + 1;
            *(_BYTE *)(a2 + 20) = 1;
            goto LABEL_70;
          }
          if ( v23 == 34 )
          {
            *v7 = v20 + 1;
            v39 = 1;
            goto LABEL_77;
          }
        }
        goto LABEL_41;
      }
      v21 = a2;
      v22 = (int)v152;
      if ( v18 != 36 && v18 != 95 )
        break;
LABEL_41:
      v24 = sub_518F0(v22, 0, v21);
      if ( v24 != 1 )
      {
        if ( v24 != -1 )
          return 0;
        return get_qerrno();
      }
    }
    v30 = 1;
LABEL_53:
    v130 = v30;
    if ( !memchr("?(),.[\\]`{};~@", v18, 0xFu) )
      break;
    *(_WORD *)(a2 + 12) = (unsigned __int8)v18;
    v4 = v152;
    if ( v18 != 40 )
    {
      if ( v18 != 46 )
        return 0;
      v127 = v152[46];
      v128 = v152 + 46;
      v20 = (unsigned __int8 *)v152[1];
      v72 = *v20;
      v73 = (char)v72;
      if ( !(v127 << 31) )
      {
LABEL_120:
        v32 = 0;
        if ( v73 != 46 || v20[1] != 46 )
          return v32;
        *v7 = v20 + 2;
        *(_WORD *)(a2 + 12) = 11868;
        return 0;
      }
      if ( (char)v72 <= -1 )
        return 0;
      if ( (unsigned int)(v72 - 48) > 9 )
        goto LABEL_120;
      v144 = (char)v72;
      v126 = (int)(v20 - 1);
      if ( (unsigned int)(v20 - 1) > *v152 )
      {
        v149 = *(v20 - 2);
        if ( (char)*(v20 - 2) > -1 )
        {
          v84 = isalnum(v149);
          v73 = v144;
          if ( v84 )
            goto LABEL_120;
        }
        if ( v149 == 95 || v149 == 36 )
          goto LABEL_120;
      }
LABEL_168:
      v85 = 0;
      v86 = (unsigned __int8 *)v126;
      while ( 1 )
      {
        while ( 1 )
        {
          v145 = v85;
          v87 = (char *)(v86 + 1);
          do
          {
            v88 = (unsigned __int8 *)v87;
            v89 = (unsigned __int8)*(v87 - 1);
            v150 = v87;
            if ( (char)v89 <= -1 )
              goto LABEL_176;
            ++v87;
          }
          while ( (unsigned int)(v89 - 48) < 0xA );
          if ( (char)v89 != 46 )
            break;
          v85 = (v145 == 0) | v145;
          v86 = v88;
          if ( v145 )
            goto LABEL_191;
        }
LABEL_176:
        v90 = (unsigned __int8)toupper(v89);
        if ( v90 != 69 )
          break;
        v86 = (unsigned __int8 *)v150;
        if ( (v145 & 2) != 0 )
          goto LABEL_191;
        v85 = v145 | 2;
        v92 = (unsigned __int8)*v150;
        if ( v92 == 43 || v92 == 45 )
          v86 = (unsigned __int8 *)(v150 + 1);
      }
      if ( v145 )
      {
        if ( (v90 == 76 || v90 == 70)
          && ((v93 = (unsigned __int8)*v150, *v150 > -1) && isalnum(v93) || v93 == 36 || v93 == 95 || v93 == 46) )
        {
LABEL_191:
          for ( i = (unsigned __int8 *)v126; ; ++i )
          {
            *v7 = i;
            v95 = *i;
            if ( ((char)*i <= -1 || !isalnum(*i)) && v95 != 36 && v95 != 95 && v95 != 46 )
              break;
          }
          v66 = 21;
        }
        else
        {
          v109 = (const void *)v126;
          *v7 = (unsigned __int8 *)v126;
          asctoreal(v7, (_WORD *)(a2 + 24), 255, v91, v125, v126, v127, (int)v128, v129);
          if ( v110 == 1 )
          {
            *(_WORD *)(a2 + 12) = 7;
            v111 = *v7;
            v140 = **v7;
            v112 = (unsigned __int8)toupper(v140);
            if ( v112 == 76 || v112 == 70 )
            {
              *v7 = v111 + 1;
              v140 = v111[1];
              v124 = v152;
            }
            else
            {
              v124 = v152;
            }
            goto LABEL_256;
          }
          v66 = 22;
        }
        return set_qerrno(v66);
      }
LABEL_127:
      v75 = *v20;
      v76 = v18 - 48;
      v148 = 10;
      if ( v19 == 48 )
      {
        v148 = 8;
        if ( *v20 <= 0x61u )
        {
          if ( v75 != 66 )
          {
            if ( v75 != 88 )
              goto LABEL_131;
LABEL_207:
            v142 = v20 + 1;
            *v7 = v20 + 1;
            v98 = v20[1];
            if ( (char)v98 <= -1 || (v99 = isxdigit(v98), LOBYTE(v75) = v98, v148 = 16, !v99) )
            {
              set_error_data(0, v98);
              ++*v7;
              v66 = 20;
              return set_qerrno(v66);
            }
LABEL_133:
            v77 = v76 >> 31;
            v143 = v142 + 1;
            while ( 1 )
            {
              v139 = v75;
              v134 = v77;
              v78 = (unsigned __int8)v75;
              if ( !isxdigit((unsigned __int8)v75) )
              {
                v142 = v143 - 1;
                LOBYTE(v75) = v139;
                v77 = v134;
                goto LABEL_216;
              }
              *v7 = v143;
              if ( v148 == 10 && v139 > 0x39u || v148 == 8 && v139 > 0x37u || v148 == 2 && v139 > 0x31u )
                break;
              if ( v139 >= 0x3Au )
              {
                v79 = v139 - 32;
                if ( v139 <= 0x60u )
                  v79 = v139;
                v78 = (unsigned __int8)(v79 - 7);
              }
              v77 = (__PAIR64__(v134, v76) * (unsigned int)v148 + v78 - 48) >> 32;
              v76 = v76 * v148 + v78 - 48;
              v80 = (char *)(v143 + 1);
              v75 = (char)*v143++;
              if ( v75 <= -1 )
              {
                v142 = (unsigned __int8 *)(v80 - 1);
LABEL_216:
                v151 = v148 != 10;
                v104 = 0;
                v137 = 1;
LABEL_218:
                v105 = v142;
                while ( 1 )
                {
                  v106 = v105;
                  if ( (unsigned __int8)v75 > 0x6Bu )
                  {
                    if ( (unsigned __int8)v75 != 108 )
                    {
                      if ( (unsigned __int8)v75 != 117 )
                        goto LABEL_229;
LABEL_217:
                      v142 = v105 + 1;
                      *v7 = v105 + 1;
                      LOBYTE(v75) = v105[1];
                      v137 = 0;
                      v151 = 1;
                      goto LABEL_218;
                    }
                  }
                  else if ( (unsigned __int8)v75 != 76 )
                  {
                    if ( (unsigned __int8)v75 == 85 )
                      goto LABEL_217;
LABEL_229:
                    v135 = v77;
                    v140 = v75;
                    if ( tolower((unsigned __int8)v75) != 105 )
                      goto LABEL_240;
                    v107 = v106[1];
                    if ( v107 == 54 )
                    {
                      v108 = v106[2] == 52;
LABEL_246:
                      v113 = v127;
                      v114 = v135;
                      if ( !v108 )
                        goto LABEL_241;
                      *v7 = v106 + 3;
                      v140 = v106[3];
                      v104 = v132;
                      if ( (v127 & 8) != 0 )
                        goto LABEL_249;
LABEL_242:
                      v115 = a2;
                      *(_BYTE *)(a2 + 20) = 0;
                      v116 = v114 == 0;
                      v124 = v152;
                      v109 = (const void *)v126;
                      if ( (v116 & (v104 ^ 1)) == 0 )
                        goto LABEL_255;
LABEL_253:
                      *(_WORD *)(v115 + 12) = 3;
                      *(_DWORD *)(v115 + 16) = v76;
                    }
                    else
                    {
                      if ( v107 == 51 )
                      {
                        v132 = 0;
                        v108 = v106[2] == 50;
                        goto LABEL_246;
                      }
LABEL_240:
                      v113 = v127;
                      v114 = v135;
LABEL_241:
                      if ( (v113 & 8) == 0 )
                        goto LABEL_242;
LABEL_249:
                      if ( !(v104 << 31) )
                      {
                        v117 = 0;
                        if ( (((((unsigned int)v114 >> 31) | (((unsigned int)v76 >> 31) + 2 * v114)) == 0)
                            & (unsigned __int8)v137) != 0
                          || (v117 = 1, v114 = v135, !((~v151 | 1) << 31)) )
                        {
                          v115 = a2;
                          *(_BYTE *)(a2 + 20) = v117;
                          v124 = v152;
                          v109 = (const void *)v126;
                          goto LABEL_253;
                        }
                      }
                      *(_BYTE *)(a2 + 20) = (v137 & 1) == 0 || v114 < 0;
                      v115 = a2;
                      v124 = v152;
                      v109 = (const void *)v126;
LABEL_255:
                      *(_WORD *)(v115 + 12) = 8;
                      *(_DWORD *)(v115 + 24) = v76;
                      *(_DWORD *)(v115 + 28) = v135;
                    }
LABEL_256:
                    v118 = v140;
                    if ( (*v128 & 2) != 0 )
                    {
                      if ( (char)v140 > -1 && (v122 = isalnum(v140), v118 = v140, v124 = v152, v122)
                        || (unsigned int)v118 - 34 <= 0xC && ((1 << (v118 - 34)) & 0x1025) != 0
                        || v118 == 95 )
                      {
LABEL_263:
                        v66 = 23;
                        return set_qerrno(v66);
                      }
                    }
                    v124[5] = 0;
                    v119 = v124[1] - (_DWORD)v109;
                    v120 = (void **)(v124 + 4);
                    if ( v124[6] >= v119 + 1 )
                    {
                      v121 = *v120;
                    }
                    else
                    {
                      v121 = qvector_reserve((int)v120, *v120, v119 + 1, 1u);
                      v124 = v152;
                      *v120 = v121;
                    }
                    v124[5] = v119 + 1;
                    *((_BYTE *)v121 + v119) = 0;
                    v123 = v119;
                    v32 = 0;
                    memmove((void *)v124[4], v109, v123);
                    return v32;
                  }
                  if ( v104 << 31 )
                    goto LABEL_263;
                  ++v105;
                  *v7 = v106 + 1;
                  v75 = v106[1];
                  v104 = 0;
                  if ( (v75 | 0x20) == 0x6C )
                  {
                    v105 = v106 + 2;
                    *v7 = v106 + 2;
                    LOBYTE(v75) = v106[2];
                    v104 = 1;
                  }
                }
              }
            }
            v75 = v78;
LABEL_234:
            set_error_data(0, v75);
            v66 = 20;
            return set_qerrno(v66);
          }
LABEL_214:
          v142 = v20 + 1;
          *v7 = v20 + 1;
          v75 = v20[1];
          v148 = 2;
          if ( (v75 & 0xFE) != 0x30 )
            goto LABEL_234;
LABEL_132:
          v77 = v76 >> 31;
          if ( (char)v75 <= -1 )
            goto LABEL_216;
          goto LABEL_133;
        }
        if ( v75 == 98 )
          goto LABEL_214;
        if ( v75 == 120 )
          goto LABEL_207;
      }
LABEL_131:
      v142 = v20;
      goto LABEL_132;
    }
    v31 = *v7;
    if ( **v7 != 42 )
      return 0;
    v32 = 0;
    if ( (*v141 & 2) == 0 )
      return v32;
LABEL_2:
    v5 = 1;
    *v133 = 1;
    v6 = v31 + 1;
    *v7 = v6;
  }
  if ( !memchr("!%&*+-/<=>^|:", v18, 0xEu) )
  {
    v74 = 0x100000001LL;
    if ( (unsigned int)(v18 - 48) <= 9 )
      HIDWORD(v74) = 0;
    v22 = (int)v152;
    if ( v74 == v130 )
    {
      v126 = (int)(v20 - 1);
      v127 = v152[46];
      v128 = v152 + 46;
      if ( v127 << 31 )
        goto LABEL_168;
      goto LABEL_127;
    }
    v39 = 0;
    v21 = a2;
    if ( v18 == 39 )
    {
LABEL_70:
      *(_DWORD *)(v21 + 16) = 0;
      *(_WORD *)(v21 + 12) = 5;
      v36 = *v7;
      if ( **v7 != 39 && **v7 )
      {
        *v7 = v36 + 1;
        v37 = *v36;
        if ( v37 == 92 )
        {
          v37 = back_char(v7);
          v21 = a2;
        }
        *(_DWORD *)(v21 + 16) = (*(_DWORD *)(v21 + 16) << 8) + v37;
        v38 = *v7;
        if ( **v7 )
        {
          if ( **v7 == 39 )
          {
            *v7 = v38 + 1;
            *(_DWORD *)(v21 + 16) = *(unsigned __int8 *)(v21 + 16);
            return 0;
          }
          *v7 = v38 + 1;
          v68 = *v38;
          if ( v68 == 92 )
          {
            v68 = back_char(v7);
            v21 = a2;
          }
          *(_DWORD *)(v21 + 16) = (*(_DWORD *)(v21 + 16) << 8) + v68;
          v69 = *v7;
          if ( **v7 )
          {
            if ( **v7 == 39 )
              goto LABEL_147;
            *v7 = v69 + 1;
            v70 = *v69;
            if ( v70 == 92 )
            {
              v70 = back_char(v7);
              v21 = a2;
            }
            *(_DWORD *)(v21 + 16) = (*(_DWORD *)(v21 + 16) << 8) + v70;
            v69 = *v7;
            if ( **v7 )
            {
              if ( **v7 == 39 )
                goto LABEL_147;
              *v7 = v69 + 1;
              v71 = *v69;
              if ( v71 == 92 )
              {
                v71 = back_char(v7);
                v21 = a2;
              }
              *(_DWORD *)(v21 + 16) = (*(_DWORD *)(v21 + 16) << 8) + v71;
              v69 = *v7;
              if ( **v7 == 39 )
                goto LABEL_147;
            }
          }
        }
      }
      v66 = 26;
      return set_qerrno(v66);
    }
    if ( v18 == 35 )
    {
      v96 = *v20;
      if ( (char)*v20 <= -2 )
      {
        if ( v152[8] )
        {
          *v7 = v20 + 1;
          v100 = *v20;
          *(_BYTE *)(a2 + 20) = 0;
          *(_WORD *)(a2 + 12) = 4;
          *(_DWORD *)(a2 + 4) = 0;
          v101 = v100 ^ 0x80;
          if ( !(*(_DWORD *)(a2 + 8) >> 10) )
          {
            v102 = v100 ^ 0x80;
            v103 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
            v101 = v102;
            v22 = (int)v152;
            *(_DWORD *)a2 = v103;
          }
          sub_51844((char *)v22, (void **)a2, v101, *(_DWORD *)(v22 + 40));
          return 0;
        }
LABEL_201:
        set_error_data(0, v96);
        v66 = 27;
        return set_qerrno(v66);
      }
LABEL_200:
      v96 = v18;
      goto LABEL_201;
    }
    if ( v18 != 34 )
      goto LABEL_200;
LABEL_77:
    *(_WORD *)(v21 + 12) = 4;
    *(_BYTE *)(v21 + 20) = v39;
    *(_DWORD *)(v21 + 4) = 0;
    if ( !(*(_DWORD *)(v21 + 8) >> 10) )
    {
      v40 = qvector_reserve(a2, *(void **)a2, 0x400u, 1u);
      v22 = (int)v152;
      *(_DWORD *)a2 = v40;
    }
    v41 = (_BYTE *)(v22 + 184);
    v42 = (void **)a2;
    v153 = v41;
    while ( 1 )
    {
      while ( 1 )
      {
        v43 = *v7;
        v44 = **v7;
        if ( v44 == 92 )
          break;
        if ( v44 == 34 )
        {
          v67 = v43 + 1;
          goto LABEL_148;
        }
        if ( !**v7 )
          goto LABEL_104;
        *v7 = v43 + 1;
        v45 = v42[1];
        v46 = (int)v45 - 1;
        if ( !v45 )
          v46 = 0;
        v47 = *v42;
        v48 = *v43;
        if ( (unsigned int)v42[2] < v46 + 2 )
        {
          v49 = qvector_reserve((int)v42, v47, v46 + 2, 1u);
          v41 = v153;
          v42 = (void **)a2;
          v47 = v49;
          *(_DWORD *)a2 = v49;
        }
        v42[1] = (void *)(v46 + 2);
        *((_BYTE *)v47 + v46) = v48;
        v50 = (char *)*v42 + v46;
LABEL_80:
        v50[1] = 0;
      }
      v51 = v43 + 1;
      if ( (*v41 & 0x10) == 0 )
      {
        *v7 = v51;
        v52 = back_char(v7);
        v42 = (void **)a2;
        v53 = v52;
        v54 = *(_DWORD *)(a2 + 4);
        v55 = v54 - 1;
        if ( !v54 )
          v55 = 0;
        v56 = *(void **)a2;
        if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v55 + 2) )
        {
          v57 = qvector_reserve(a2, v56, v55 + 2, 1u);
          v42 = (void **)a2;
          v56 = v57;
          *(_DWORD *)a2 = v57;
        }
        v41 = v153;
        v42[1] = (void *)(v55 + 2);
        *((_BYTE *)v56 + v55) = v53;
        v50 = (char *)*v42 + v55;
        goto LABEL_80;
      }
      if ( !*v51 )
      {
LABEL_104:
        v66 = 24;
        return set_qerrno(v66);
      }
      v58 = v42[1];
      v59 = (int)v58 - 1;
      if ( !v58 )
        v59 = 0;
      v60 = *v42;
      if ( (unsigned int)v42[2] < v59 + 3 )
      {
        v61 = qvector_reserve((int)v42, v60, v59 + 3, 1u);
        v41 = v153;
        v42 = (void **)a2;
        v60 = v61;
        *(_DWORD *)a2 = v61;
      }
      v42[1] = (void *)(v59 + 3);
      *((_BYTE *)v60 + v59 + 2) = 0;
      v62 = v43[1];
      v63 = *(_BYTE **)a2;
      v63[v59] = *v43;
      v64 = &v63[v59];
      v42 = (void **)a2;
      v64[1] = v62;
      *v7 += 2;
    }
  }
  v33 = a2;
  *(_WORD *)(a2 + 12) = (unsigned __int8)v18;
  v31 = *v7;
  v34 = **v7;
  if ( v34 == 61 )
  {
    v81 = (unsigned __int8)v18 << 8;
    goto LABEL_145;
  }
  if ( (unsigned int)(v18 - 38) > 0x18 || (v33 = a2, ((1 << (v18 - 38)) & 0x15000A1) == 0) )
  {
    if ( v18 != 124 )
    {
      v32 = 0;
      if ( v19 != 47 )
        return v32;
      if ( v34 != 42 )
        return v32;
      v4 = v152;
      if ( !((unsigned __int8)*v141 << 31) )
        return v32;
      goto LABEL_2;
    }
  }
  if ( v34 != (unsigned __int8)v18 )
  {
    v32 = 0;
    if ( v19 != 45 || v34 != 62 )
      return v32;
    v82 = 11582;
    goto LABEL_146;
  }
  *(_WORD *)(v33 + 12) = 257 * (unsigned __int8)v18;
  v83 = *v7 + 1;
  *v7 = v83;
  if ( (v18 | 2) != 0x3E )
    return 0;
  v32 = 0;
  if ( *v83 == 61 )
  {
    v81 = *(_WORD *)(v33 + 12);
LABEL_145:
    v82 = v81 + 61;
LABEL_146:
    *(_WORD *)(v33 + 12) = v82;
    v69 = *v7;
LABEL_147:
    v67 = v69 + 1;
LABEL_148:
    *v7 = v67;
    return 0;
  }
  return v32;
}
// 5233E: variable 'v91' is possibly undefined
// 5233E: variable 'v125' is possibly undefined
// 5233E: variable 'v129' is possibly undefined
// 52344: variable 'v110' is possibly undefined
// 52432: variable 'v128' is possibly undefined
