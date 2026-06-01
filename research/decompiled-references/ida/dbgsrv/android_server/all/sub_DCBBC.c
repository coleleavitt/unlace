/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DCBBC
// Address: 0x00000000000DCBBC

//----- (00000000000DCBBC) ----------------------------------------------------
char *__fastcall sub_DCBBC(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v4; // x8
  unsigned __int8 *v5; // x10
  unsigned __int64 v6; // x9
  int v7; // w11
  unsigned __int8 *v8; // x9
  int v9; // w10
  char *v10; // x0
  unsigned __int8 *v11; // x8
  unsigned __int8 *v12; // x9
  _BYTE *v13; // x10
  char *v14; // x21
  unsigned __int8 *v15; // x10
  int v16; // w11
  int v17; // w11
  __int64 v18; // x0
  __int64 v19; // x21
  char *v20; // x0
  char *v21; // x23
  unsigned __int8 *v22; // x20
  _QWORD *v23; // x8
  __int64 v24; // x9
  __int64 v25; // x0
  char *v26; // x22
  __int64 v27; // x8
  char *v28; // x0
  unsigned __int8 *v29; // x22
  char *v30; // x21
  _QWORD *v31; // x8
  __int64 v32; // x9
  __int64 v33; // x0
  unsigned __int8 *v34; // x22
  unsigned __int8 *v35; // x8
  unsigned __int8 *v36; // x21
  size_t v37; // x24
  __int64 v38; // x27
  __int64 v39; // x26
  unsigned __int8 *v40; // x23
  unsigned __int8 *v41; // x21
  _QWORD *v42; // x8
  __int64 v43; // x9
  __int64 v44; // x0
  __int64 v45; // x10
  __int64 v46; // x9
  __int128 v47; // q0
  unsigned __int8 *v48; // x8
  unsigned __int8 *v49; // x9
  unsigned __int64 v50; // x9
  char *v51; // x0
  __int64 v52; // x22
  char *v53; // x21
  unsigned __int8 *v54; // x23
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x0
  __int64 v58; // x24
  unsigned __int8 *v59; // x8
  unsigned __int8 *v60; // x21
  signed __int64 v61; // x23
  unsigned __int8 *v62; // x22
  char *v63; // x0
  __int64 v64; // x23
  unsigned __int8 *v65; // x22
  char *v66; // x21
  __int64 v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x22
  __int64 v72; // x21
  unsigned __int8 *v73; // x23
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x0
  unsigned __int8 *v77; // x8
  __int64 v78; // x8
  unsigned __int8 *v79; // x8
  unsigned __int8 *v80; // x22
  signed __int64 v81; // x24
  unsigned __int8 *v82; // x23
  __int64 v83; // x0
  __int64 v84; // x22
  __int64 v85; // x21
  unsigned __int8 *v86; // x23
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x0
  unsigned __int8 *v90; // x21
  signed __int64 v91; // x23
  char *v92; // x0
  __int64 v93; // x22
  char *v94; // x21
  unsigned __int8 *v95; // x23
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x0
  __int64 v99; // x8
  char *v100; // x0
  unsigned __int8 *v101; // x22
  signed __int64 v102; // x24
  unsigned __int8 *v103; // x0
  unsigned __int8 *v104; // x9
  unsigned __int8 *v105; // x0
  unsigned __int8 *v106; // x9
  unsigned __int8 *v107; // x0
  unsigned __int8 *v108; // x0
  unsigned __int8 *v109; // x8
  unsigned __int8 *v110; // x0
  char *v111; // x0
  char *v112; // x21
  unsigned __int8 *v113; // x20
  _QWORD *v114; // x8
  __int64 v115; // x9
  __int64 v116; // x0
  __int64 v117; // x10
  unsigned __int8 *v118; // x9
  unsigned __int8 *v119; // x10
  unsigned __int8 *v120; // x11
  char *v121; // x0
  unsigned __int8 *v122; // x8
  unsigned __int8 *v123; // x9
  char *v124; // x20
  int v125; // w10
  int v126; // w10
  unsigned __int8 *v127; // x10
  int v128; // t1
  unsigned __int8 *v129; // x9
  int v130; // t1
  unsigned __int8 *v131; // x9
  char *v132; // x0
  unsigned __int8 *v134; // x10
  int v135; // w11
  unsigned __int8 *v136; // x9
  int v137; // w11
  unsigned __int8 *v138; // x20
  _QWORD *v139; // x8
  __int64 v140; // x9
  __int64 v141; // x0
  unsigned __int8 *v142; // x20
  __int128 v143; // q0
  unsigned __int8 *v144; // x22
  _QWORD *v145; // x8
  __int64 v146; // x9
  __int64 v147; // x0
  unsigned __int8 *v148; // x22
  unsigned __int8 **v149; // [xsp+8h] [xbp-68h]
  __int64 v150[2]; // [xsp+10h] [xbp-60h] BYREF

  v150[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a1;
  v4 = a1[1];
  if ( *a1 != v4 && *v5 == 76 )
    *a1 = ++v5;
  v6 = v4 - v5;
  if ( v4 == v5 )
    goto LABEL_50;
  v7 = *v5;
  if ( v7 == 90 )
  {
    if ( v5 == v4 )
      return nullptr;
    *a1 = v5 + 1;
    v10 = sub_DA368(a1);
    if ( !v10 )
      return nullptr;
    v12 = *a1;
    v11 = a1[1];
    if ( *a1 == v11 || *v12 != 69 )
      return nullptr;
    v13 = v12 + 1;
    v14 = v10;
    *a1 = v12 + 1;
    if ( v12 + 1 == v11 )
      goto LABEL_186;
    if ( *v13 == 115 )
    {
      v15 = v12 + 2;
      *a1 = v12 + 2;
      if ( v12 + 2 != v11 )
      {
        v16 = *v15;
        if ( v16 == 95 )
        {
          if ( v12 + 3 != v11 )
          {
            v17 = v12[3];
            if ( (unsigned int)(v17 - 48) <= 9 )
            {
              v11 = v12 + 4;
              goto LABEL_224;
            }
            if ( v17 == 95 )
            {
              v136 = v12 + 4;
              if ( v136 != v11 )
              {
                while ( 1 )
                {
                  v137 = *v136;
                  if ( (unsigned int)(v137 - 48) > 9 )
                    break;
                  if ( v11 == ++v136 )
                    goto LABEL_223;
                }
                if ( v137 == 95 )
                  v11 = v136 + 1;
                else
                  v11 = v15;
                goto LABEL_224;
              }
            }
          }
        }
        else if ( (unsigned int)(v16 - 48) <= 9 )
        {
          v129 = v12 + 3;
          while ( v11 != v129 )
          {
            v130 = *v129++;
            if ( (unsigned int)(v130 - 48) >= 0xA )
              goto LABEL_223;
          }
          goto LABEL_224;
        }
LABEL_223:
        v11 = v15;
      }
LABEL_224:
      v138 = a1[604];
      *a1 = v11;
      v139 = v138 + 8;
      v140 = *((_QWORD *)v138 + 1);
      if ( (unsigned __int64)(v140 + 32) >= 0xFF0 )
      {
        v141 = operator new[](0x1000u);
        v140 = 0;
        *(_QWORD *)v141 = v138;
        *(_QWORD *)(v141 + 8) = 0;
        v139 = (_QWORD *)(v141 + 8);
        v138 = (unsigned __int8 *)v141;
        a1[604] = (unsigned __int8 *)v141;
      }
      v142 = &v138[v140];
      *v139 = v140 + 32;
      *((_QWORD *)v142 + 2) = off_161838;
      v124 = (char *)(v142 + 16);
      *(_QWORD *)&v143 = "string literal";
      *((_QWORD *)&v143 + 1) = "";
      *((_DWORD *)v124 + 2) = 16843015;
      *((_OWORD *)v124 + 1) = v143;
LABEL_227:
      v144 = a1[604];
      goto LABEL_230;
    }
    if ( *v13 != 100 )
    {
LABEL_186:
      v121 = sub_DCBBC(a1, a2);
      if ( !v121 )
        return nullptr;
      v122 = *a1;
      v123 = a1[1];
      v124 = v121;
      if ( *a1 != v123 )
      {
        v125 = *v122;
        if ( v125 == 95 )
        {
          if ( v122 + 1 != v123 )
          {
            v126 = v122[1];
            if ( (unsigned int)(v126 - 48) > 9 )
            {
              if ( v126 == 95 )
              {
                v134 = v122 + 2;
                if ( v122 + 2 != v123 )
                {
                  while ( 1 )
                  {
                    v135 = *v134;
                    if ( (unsigned int)(v135 - 48) > 9 )
                      break;
                    if ( v123 == ++v134 )
                      goto LABEL_229;
                  }
                  if ( v135 == 95 )
                    v122 = v134 + 1;
                }
              }
            }
            else
            {
              v122 += 2;
            }
          }
        }
        else if ( (unsigned int)(v125 - 48) <= 9 )
        {
          v127 = v122 + 1;
          while ( v123 != v127 )
          {
            v128 = *v127++;
            if ( (unsigned int)(v128 - 48) >= 0xA )
              goto LABEL_229;
          }
          v122 = a1[1];
        }
      }
LABEL_229:
      v144 = a1[604];
      *a1 = v122;
LABEL_230:
      v145 = v144 + 8;
      v146 = *((_QWORD *)v144 + 1);
      if ( (unsigned __int64)(v146 + 32) >= 0xFF0 )
      {
        v147 = operator new[](0x1000u);
        v146 = 0;
        *(_QWORD *)v147 = v144;
        *(_QWORD *)(v147 + 8) = 0;
        v145 = (_QWORD *)(v147 + 8);
        v144 = (unsigned __int8 *)v147;
        a1[604] = (unsigned __int8 *)v147;
      }
      v148 = &v144[v146];
      *v145 = v146 + 32;
      *((_QWORD *)v148 + 2) = off_162A48;
      v26 = (char *)(v148 + 16);
      *((_DWORD *)v26 + 2) = 16843033;
      *((_QWORD *)v26 + 2) = v14;
      *((_QWORD *)v26 + 3) = v124;
      return v26;
    }
    v119 = v12 + 2;
    *a1 = v12 + 2;
    if ( v12 + 2 == v11 )
    {
      v120 = v12 + 2;
      v119 = v11;
    }
    else
    {
      v120 = v12 + 2;
      if ( *v119 == 110 )
      {
        v119 = v12 + 3;
        *a1 = v12 + 3;
        if ( v12 + 3 == v11 )
        {
LABEL_208:
          if ( v119 == v11 )
            return nullptr;
          if ( *v119 != 95 )
            return nullptr;
          *a1 = v119 + 1;
          v132 = sub_DCBBC(a1, a2);
          if ( !v132 )
            return nullptr;
          v124 = v132;
          goto LABEL_227;
        }
LABEL_204:
        if ( (unsigned int)*v119 - 48 <= 9 )
        {
          v131 = v119 + 1;
          do
          {
            v119 = v131;
            *a1 = v131;
            if ( v11 == v131 )
              break;
            ++v131;
          }
          while ( (unsigned int)*v119 - 48 < 0xA );
        }
        goto LABEL_208;
      }
    }
    if ( v120 == v11 )
      goto LABEL_208;
    goto LABEL_204;
  }
  if ( v7 == 83 )
  {
    if ( v6 < 2 || v5[1] != 116 )
    {
      v18 = sub_DE214((__int64)a1);
      if ( !v18 )
        return nullptr;
      if ( a1[1] == *a1 )
        return nullptr;
      if ( **a1 != 73 )
        return nullptr;
      v19 = v18;
      v20 = sub_DE644((__int64)a1, a2 != 0);
      if ( !v20 )
        return nullptr;
      v21 = v20;
      if ( a2 )
        *(_BYTE *)(a2 + 1) = 1;
      v22 = a1[604];
      v23 = v22 + 8;
      v24 = *((_QWORD *)v22 + 1);
      if ( (unsigned __int64)(v24 + 32) >= 0xFF0 )
      {
        v25 = operator new[](0x1000u);
        v24 = 0;
        *(_QWORD *)v25 = v22;
        *(_QWORD *)(v25 + 8) = 0;
        v23 = (_QWORD *)(v25 + 8);
        v22 = (unsigned __int8 *)v25;
        a1[604] = (unsigned __int8 *)v25;
      }
      *v23 = v24 + 32;
      *(_QWORD *)&v22[v24 + 16] = off_162C08;
      v26 = (char *)&v22[v24 + 16];
      *((_DWORD *)v26 + 2) = 16843040;
      *((_QWORD *)v26 + 2) = v19;
      *((_QWORD *)v26 + 3) = v21;
      return v26;
    }
    goto LABEL_15;
  }
  if ( v7 != 78 )
  {
LABEL_15:
    if ( v6 >= 3 )
    {
      if ( *v5 != 83 )
        goto LABEL_50;
      if ( v5[1] == 116 && v5[2] == 76 )
      {
        v27 = 3;
        goto LABEL_45;
      }
    }
    else if ( v6 != 2 )
    {
      goto LABEL_50;
    }
    if ( *v5 == 83 && v5[1] == 116 )
    {
      v27 = 2;
LABEL_45:
      *a1 = &v5[v27];
      v28 = sub_DF48C(a1, (_BYTE *)a2);
      if ( !v28 )
        return nullptr;
      v29 = a1[604];
      v30 = v28;
      v31 = v29 + 8;
      v32 = *((_QWORD *)v29 + 1);
      if ( (unsigned __int64)(v32 + 32) >= 0xFF0 )
      {
        v33 = operator new[](0x1000u);
        v32 = 0;
        *(_QWORD *)v33 = v29;
        *(_QWORD *)(v33 + 8) = 0;
        v31 = (_QWORD *)(v33 + 8);
        v29 = (unsigned __int8 *)v33;
        a1[604] = (unsigned __int8 *)v33;
      }
      v34 = &v29[v32];
      *v31 = v32 + 32;
      *((_QWORD *)v34 + 2) = off_162C78;
      v26 = (char *)(v34 + 16);
      *((_DWORD *)v26 + 2) = 16843042;
      *((_QWORD *)v26 + 2) = v30;
      if ( !v26 )
        return v26;
LABEL_51:
      if ( a1[1] != *a1 && **a1 == 73 )
      {
        v35 = a1[38];
        if ( v35 == a1[39] )
        {
          v36 = a1[37];
          v37 = v35 - v36;
          v38 = (v35 - v36) >> 3;
          v39 = (v35 - v36) >> 2;
          if ( a1 + 40 == (unsigned __int8 **)v36 )
          {
            v110 = (unsigned __int8 *)malloc(2 * v37);
            v40 = v110;
            if ( v37 )
              memmove(v110, v36, v37);
            a1[37] = v40;
          }
          else
          {
            v40 = (unsigned __int8 *)realloc(a1[37], 2 * v37);
            a1[37] = v40;
          }
          v35 = &v40[8 * v38];
          a1[38] = v35;
          a1[39] = &v40[8 * v39];
        }
        a1[38] = v35 + 8;
        *(_QWORD *)v35 = v26;
        v111 = sub_DE644((__int64)a1, a2 != 0);
        if ( !v111 )
          return nullptr;
        v112 = v111;
        if ( a2 )
          *(_BYTE *)(a2 + 1) = 1;
        v113 = a1[604];
        v114 = v113 + 8;
        v115 = *((_QWORD *)v113 + 1);
        if ( (unsigned __int64)(v115 + 32) >= 0xFF0 )
        {
          v116 = operator new[](0x1000u);
          v115 = 0;
          *(_QWORD *)v116 = v113;
          *(_QWORD *)(v116 + 8) = 0;
          v114 = (_QWORD *)(v116 + 8);
          v113 = (unsigned __int8 *)v116;
          a1[604] = (unsigned __int8 *)v116;
        }
        v117 = v115 + 32;
        v118 = &v113[v115];
        *v114 = v117;
        *((_QWORD *)v118 + 2) = off_162C08;
        v118 += 16;
        *((_QWORD *)v118 + 2) = v26;
        *((_QWORD *)v118 + 3) = v112;
        v26 = (char *)v118;
        *((_DWORD *)v118 + 2) = 16843040;
      }
      return v26;
    }
LABEL_50:
    v26 = sub_DF48C(a1, (_BYTE *)a2);
    if ( !v26 )
      return v26;
    goto LABEL_51;
  }
  if ( v5 == v4 )
    return nullptr;
  v8 = v5 + 1;
  *a1 = v5 + 1;
  if ( v5 + 1 != v4 )
  {
    if ( *v8 == 114 )
    {
      v8 = v5 + 2;
      v9 = 4;
      *a1 = v8;
      if ( v8 == v4 )
        goto LABEL_64;
    }
    else
    {
      v9 = 0;
      if ( v8 == v4 )
        goto LABEL_64;
    }
    if ( *v8 == 86 )
    {
      ++v8;
      v9 |= 2u;
      *a1 = v8;
    }
    if ( v8 != v4 && *v8 == 75 )
    {
      ++v8;
      v9 |= 1u;
      *a1 = v8;
    }
LABEL_64:
    if ( !a2 )
      goto LABEL_66;
    goto LABEL_65;
  }
  v9 = 0;
  v8 = v4;
  if ( a2 )
LABEL_65:
    *(_DWORD *)(a2 + 4) = v9;
LABEL_66:
  if ( v8 == v4 )
    goto LABEL_73;
  if ( *v8 != 79 )
  {
    if ( *v8 == 82 )
    {
      *a1 = ++v8;
      if ( a2 )
        *(_BYTE *)(a2 + 8) = 1;
      goto LABEL_75;
    }
LABEL_73:
    if ( a2 )
      *(_BYTE *)(a2 + 8) = 0;
    goto LABEL_75;
  }
  *a1 = ++v8;
  if ( a2 )
    *(_BYTE *)(a2 + 8) = 2;
LABEL_75:
  v150[0] = 0;
  if ( (unsigned __int64)(v4 - v8) >= 2 && *v8 == 83 && v8[1] == 116 )
  {
    v41 = a1[604];
    *a1 = v8 + 2;
    v42 = v41 + 8;
    v43 = *((_QWORD *)v41 + 1);
    if ( (unsigned __int64)(v43 + 32) > 0xFEF )
    {
      v44 = operator new[](0x1000u);
      v43 = 0;
      *(_QWORD *)v44 = v41;
      *(_QWORD *)(v44 + 8) = 0;
      v42 = (_QWORD *)(v44 + 8);
      v41 = (unsigned __int8 *)v44;
      a1[604] = (unsigned __int8 *)v44;
    }
    v45 = v43 + 32;
    v46 = (__int64)&v41[v43];
    *v42 = v45;
    *(_QWORD *)&v47 = "std";
    *(_QWORD *)(v46 + 16) = off_161838;
    v46 += 16;
    *((_QWORD *)&v47 + 1) = "";
    *(_DWORD *)(v46 + 8) = 16843015;
    *(_OWORD *)(v46 + 16) = v47;
    v150[0] = v46;
  }
  v149 = a1 + 40;
  while ( 1 )
  {
    v48 = *a1;
    v49 = a1[1];
    if ( *a1 != v49 )
      break;
LABEL_87:
    if ( v48 == v49 || *v48 != 77 )
    {
      v50 = v49 - v48;
      if ( v50 )
      {
        switch ( *v48 )
        {
          case 'C':
            goto LABEL_138;
          case 'D':
            if ( v50 < 2 )
              goto LABEL_138;
            if ( (v48[1] | 0x20) != 0x74 )
            {
              if ( v48[1] == 67 )
                goto LABEL_127;
LABEL_138:
              if ( !v150[0] )
                return nullptr;
              v92 = sub_DF074(a1, v150, (_BYTE *)a2);
              if ( !v92 )
                return nullptr;
              v93 = v150[0];
              v94 = v92;
              if ( v150[0] )
              {
                v95 = a1[604];
                v97 = v95 + 8;
                v96 = *((_QWORD *)v95 + 1);
                if ( (unsigned __int64)(v96 + 32) >= 0xFF0 )
                {
                  v98 = operator new[](0x1000u);
                  v96 = 0;
                  *(_QWORD *)v98 = v95;
                  *(_QWORD *)(v98 + 8) = 0;
                  v97 = (_QWORD *)(v98 + 8);
                  v95 = (unsigned __int8 *)v98;
                  a1[604] = (unsigned __int8 *)v98;
                }
                *v97 = v96 + 32;
                v99 = (__int64)&v95[v96];
                *(_QWORD *)(v99 + 16) = off_161918;
                v99 += 16;
                *(_DWORD *)(v99 + 8) = 16843032;
                *(_QWORD *)(v99 + 16) = v93;
                *(_QWORD *)(v99 + 24) = v94;
                v150[0] = v99;
                v94 = (char *)v99;
                if ( a2 )
LABEL_144:
                  *(_BYTE *)(a2 + 1) = 0;
              }
              else
              {
                v150[0] = (__int64)v92;
                if ( a2 )
                  goto LABEL_144;
              }
              v100 = sub_DF304((__int64)a1, v94);
              v150[0] = (__int64)v100;
              if ( !v100 )
                return nullptr;
              v79 = a1[38];
              v72 = (__int64)v100;
              if ( v79 == a1[39] )
              {
                v101 = a1[37];
                v102 = v79 - v101;
                if ( v149 == (unsigned __int8 **)v101 )
                {
                  v105 = (unsigned __int8 *)malloc(2 * v102);
                  v82 = v105;
                  if ( v102 )
                    memmove(v105, v101, v102);
                }
                else
                {
                  v82 = (unsigned __int8 *)realloc(a1[37], 2 * v102);
                }
                v79 = &v82[8 * (v102 >> 3)];
                v106 = &v82[8 * (v102 >> 2)];
LABEL_163:
                a1[37] = v82;
                a1[38] = v79;
                a1[39] = v106;
              }
LABEL_164:
              a1[38] = v79 + 8;
              *(_QWORD *)v79 = v72;
              continue;
            }
            v51 = sub_DEF40((__int64)a1);
            if ( !v51 )
              return nullptr;
            v52 = v150[0];
            v53 = v51;
            if ( v150[0] )
            {
              v54 = a1[604];
              v56 = v54 + 8;
              v55 = *((_QWORD *)v54 + 1);
              if ( (unsigned __int64)(v55 + 32) >= 0xFF0 )
              {
                v57 = operator new[](0x1000u);
                v55 = 0;
                *(_QWORD *)v57 = v54;
                *(_QWORD *)(v57 + 8) = 0;
                v56 = (_QWORD *)(v57 + 8);
                v54 = (unsigned __int8 *)v57;
                a1[604] = (unsigned __int8 *)v57;
              }
              *v56 = v55 + 32;
              *(_QWORD *)&v54[v55 + 16] = off_161918;
              v58 = (__int64)&v54[v55 + 16];
              *(_DWORD *)(v58 + 8) = 16843032;
              *(_QWORD *)(v58 + 16) = v52;
              *(_QWORD *)(v58 + 24) = v53;
              v150[0] = v58;
              if ( a2 )
LABEL_100:
                *(_BYTE *)(a2 + 1) = 0;
            }
            else
            {
              v58 = (__int64)v51;
              v150[0] = (__int64)v51;
              if ( a2 )
                goto LABEL_100;
            }
            v59 = a1[38];
            if ( v59 != a1[39] )
              goto LABEL_82;
            v60 = a1[37];
            v61 = v59 - v60;
            if ( v149 == (unsigned __int8 **)v60 )
            {
              v108 = (unsigned __int8 *)malloc(2 * v61);
              v62 = v108;
              if ( v61 )
                memmove(v108, v60, v61);
            }
            else
            {
              v62 = (unsigned __int8 *)realloc(a1[37], 2 * v61);
            }
            v59 = &v62[8 * (v61 >> 3)];
            v104 = &v62[8 * (v61 >> 2)];
            break;
          case 'I':
            v63 = sub_DE644((__int64)a1, a2 != 0);
            v26 = nullptr;
            if ( !v63 )
              return v26;
            v64 = v150[0];
            if ( !v150[0] )
              return v26;
            v65 = a1[604];
            v66 = v63;
            v68 = v65 + 8;
            v67 = *((_QWORD *)v65 + 1);
            if ( (unsigned __int64)(v67 + 32) >= 0xFF0 )
            {
              v69 = operator new[](0x1000u);
              v67 = 0;
              *(_QWORD *)v69 = v65;
              *(_QWORD *)(v69 + 8) = 0;
              v68 = (_QWORD *)(v69 + 8);
              v65 = (unsigned __int8 *)v69;
              a1[604] = (unsigned __int8 *)v69;
            }
            *v68 = v67 + 32;
            *(_QWORD *)&v65[v67 + 16] = off_162C08;
            v58 = (__int64)&v65[v67 + 16];
            *(_DWORD *)(v58 + 8) = 16843040;
            *(_QWORD *)(v58 + 16) = v64;
            *(_QWORD *)(v58 + 24) = v66;
            v150[0] = v58;
            if ( a2 )
              *(_BYTE *)(a2 + 1) = 1;
            goto LABEL_133;
          case 'S':
            if ( v50 >= 2 && v48[1] == 116 )
              goto LABEL_127;
            v70 = sub_DE214((__int64)a1);
            if ( !v70 )
              return nullptr;
            v71 = v150[0];
            v72 = v70;
            if ( v150[0] )
            {
              v73 = a1[604];
              v75 = v73 + 8;
              v74 = *((_QWORD *)v73 + 1);
              if ( (unsigned __int64)(v74 + 32) >= 0xFF0 )
              {
                v76 = operator new[](0x1000u);
                v74 = 0;
                *(_QWORD *)v76 = v73;
                *(_QWORD *)(v76 + 8) = 0;
                v75 = (_QWORD *)(v76 + 8);
                v73 = (unsigned __int8 *)v76;
                a1[604] = (unsigned __int8 *)v76;
              }
              *v75 = v74 + 32;
              v77 = &v73[v74];
              *((_QWORD *)v77 + 2) = off_161918;
              v78 = (__int64)(v77 + 16);
              *(_DWORD *)(v78 + 8) = 16843032;
              *(_QWORD *)(v78 + 16) = v71;
              *(_QWORD *)(v78 + 24) = v72;
              v150[0] = v78;
              if ( a2 )
LABEL_117:
                *(_BYTE *)(a2 + 1) = 0;
            }
            else
            {
              v78 = v70;
              v150[0] = v70;
              if ( a2 )
                goto LABEL_117;
            }
            if ( v78 == v72 )
              continue;
            v79 = a1[38];
            if ( v79 != a1[39] )
              goto LABEL_164;
            v80 = a1[37];
            v81 = v79 - v80;
            if ( v149 == (unsigned __int8 **)v80 )
            {
              v107 = (unsigned __int8 *)malloc(2 * v81);
              v82 = v107;
              if ( v81 )
                memmove(v107, v80, v81);
            }
            else
            {
              v82 = (unsigned __int8 *)realloc(a1[37], 2 * v81);
            }
            v79 = &v82[8 * (v81 >> 3)];
            v106 = &v82[8 * (v81 >> 2)];
            goto LABEL_163;
          case 'T':
            v83 = sub_DECA4((__int64)a1);
            if ( !v83 )
              return nullptr;
            goto LABEL_128;
          default:
            goto LABEL_127;
        }
        goto LABEL_152;
      }
LABEL_127:
      v83 = (__int64)sub_DF48C(a1, (_BYTE *)a2);
      if ( !v83 )
        return nullptr;
LABEL_128:
      v84 = v150[0];
      v85 = v83;
      if ( v150[0] )
      {
        v86 = a1[604];
        v88 = v86 + 8;
        v87 = *((_QWORD *)v86 + 1);
        if ( (unsigned __int64)(v87 + 32) >= 0xFF0 )
        {
          v89 = operator new[](0x1000u);
          v87 = 0;
          *(_QWORD *)v89 = v86;
          *(_QWORD *)(v89 + 8) = 0;
          v88 = (_QWORD *)(v89 + 8);
          v86 = (unsigned __int8 *)v89;
          a1[604] = (unsigned __int8 *)v89;
        }
        *v88 = v87 + 32;
        *(_QWORD *)&v86[v87 + 16] = off_161918;
        v58 = (__int64)&v86[v87 + 16];
        *(_DWORD *)(v58 + 8) = 16843032;
        *(_QWORD *)(v58 + 16) = v84;
        *(_QWORD *)(v58 + 24) = v85;
        v150[0] = v58;
        if ( !a2 )
          goto LABEL_133;
      }
      else
      {
        v58 = v83;
        v150[0] = v83;
        if ( !a2 )
          goto LABEL_133;
      }
      *(_BYTE *)(a2 + 1) = 0;
LABEL_133:
      v59 = a1[38];
      if ( v59 != a1[39] )
        goto LABEL_82;
      v90 = a1[37];
      v91 = v59 - v90;
      if ( v149 == (unsigned __int8 **)v90 )
      {
        v103 = (unsigned __int8 *)malloc(2 * v91);
        v62 = v103;
        if ( v91 )
          memmove(v103, v90, v91);
      }
      else
      {
        v62 = (unsigned __int8 *)realloc(a1[37], 2 * v91);
      }
      v59 = &v62[8 * (v91 >> 3)];
      v104 = &v62[8 * (v91 >> 2)];
LABEL_152:
      a1[37] = v62;
      a1[38] = v59;
      a1[39] = v104;
LABEL_82:
      a1[38] = v59 + 8;
      *(_QWORD *)v59 = v58;
    }
    else
    {
      *a1 = v48 + 1;
      if ( !v150[0] )
        return nullptr;
    }
  }
  if ( *v48 != 69 )
  {
    if ( *v48 == 76 )
      *a1 = ++v48;
    goto LABEL_87;
  }
  *a1 = v48 + 1;
  v26 = (char *)v150[0];
  if ( v150[0] )
  {
    v109 = a1[38];
    if ( a1[37] != v109 )
    {
      a1[38] = v109 - 8;
      return v26;
    }
    return nullptr;
  }
  return v26;
}
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 161918: using guessed type __int64 (__fastcall *off_161918[7])();
// 162A48: using guessed type __int64 (__fastcall *off_162A48[7])();
// 162C08: using guessed type __int64 (__fastcall *off_162C08[7])();
// 162C78: using guessed type __int64 (__fastcall *off_162C78[7])();
