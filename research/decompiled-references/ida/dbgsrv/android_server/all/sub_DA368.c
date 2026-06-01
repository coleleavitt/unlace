/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA368
// Address: 0x00000000000DA368

//----- (00000000000DA368) ----------------------------------------------------
char *__fastcall sub_DA368(unsigned __int8 **a1)
{
  unsigned __int8 *v2; // x8
  unsigned __int8 *v3; // x9
  unsigned __int64 v4; // x10
  int v5; // w11
  bool v6; // cf
  unsigned __int8 *v7; // x10
  __int64 v8; // x0
  unsigned __int8 *v9; // x8
  unsigned __int8 *v10; // x9
  __int64 v11; // x21
  unsigned __int8 *v12; // x10
  char *v13; // x20
  unsigned __int8 *v14; // x10
  unsigned __int64 v15; // x11
  unsigned __int64 v16; // x8
  unsigned __int8 *v17; // x9
  unsigned __int64 v18; // x13
  unsigned __int64 v19; // x12
  __int64 v20; // x14
  unsigned __int64 v21; // x15
  unsigned __int8 *v22; // x8
  unsigned __int8 *v23; // x9
  int v24; // w11
  __int64 v25; // x22
  unsigned __int8 *v26; // x10
  unsigned __int8 *v27; // x11
  unsigned __int8 *v28; // x9
  char *v29; // x0
  unsigned __int8 *v30; // x8
  char *v31; // x21
  unsigned __int8 **v32; // x22
  size_t v33; // x24
  __int64 v34; // x25
  __int64 v35; // x28
  unsigned __int8 *v36; // x23
  unsigned __int8 *v37; // x0
  int v38; // w9
  char *v39; // x0
  unsigned __int8 *v40; // x20
  __int64 v41; // x21
  _QWORD *v42; // x8
  __int64 v43; // x9
  unsigned __int8 **v44; // x0
  unsigned __int8 *v45; // x20
  char *v46; // x12
  char *v47; // x8
  _BOOL4 v48; // w22
  __int64 v49; // x0
  unsigned __int8 *v50; // x20
  _QWORD *v51; // x8
  __int64 v52; // x9
  unsigned __int8 **v53; // x0
  unsigned __int8 *v54; // x20
  char *v55; // x0
  unsigned __int8 *v56; // x8
  unsigned __int8 *v57; // x9
  unsigned int v58; // w10
  int v59; // w10
  unsigned __int8 **v60; // x0
  unsigned __int8 *v61; // x20
  __int64 v62; // x23
  unsigned __int8 *v63; // x8
  unsigned __int8 *v64; // x21
  _QWORD *v65; // x8
  __int64 v66; // x9
  unsigned __int8 **v67; // x0
  unsigned __int8 *v68; // x9
  int v69; // w8
  char v70; // w10
  char *v71; // x9
  __int64 v72; // x0
  unsigned __int8 *v73; // x8
  __int64 v74; // x22
  unsigned __int8 **v75; // x23
  size_t v76; // x25
  __int64 v77; // x21
  __int64 v78; // x28
  unsigned __int8 *v79; // x24
  unsigned __int8 *v80; // x0
  unsigned int v81; // w8
  unsigned __int8 *v82; // x25
  unsigned __int8 *v83; // x24
  __int64 v84; // x8
  _QWORD *v85; // x9
  signed __int64 v86; // x22
  unsigned __int64 v87; // x21
  __int64 v88; // x27
  _QWORD *v89; // x0
  unsigned __int8 *v90; // x23
  char *v91; // x0
  unsigned __int8 *v92; // x20
  _QWORD *v93; // x8
  __int64 v94; // x9
  unsigned __int8 **v95; // x0
  unsigned __int8 *v96; // x20
  __int64 v97; // x0
  unsigned __int8 *v98; // x20
  _QWORD *v99; // x8
  __int64 v100; // x9
  unsigned __int8 **v101; // x0
  unsigned __int8 *v102; // x20
  __int64 v103; // x0
  unsigned __int8 *v104; // x20
  _QWORD *v105; // x8
  __int64 v106; // x9
  unsigned __int8 **v107; // x0
  unsigned __int8 *v108; // x20
  __int64 v109; // x0
  unsigned __int8 *v110; // x20
  _QWORD *v111; // x8
  __int64 v112; // x9
  unsigned __int8 **v113; // x0
  unsigned __int8 *v114; // x20
  __int64 v115; // x0
  unsigned __int8 *v116; // x20
  _QWORD *v117; // x8
  __int64 v118; // x9
  unsigned __int8 **v119; // x0
  unsigned __int8 *v120; // x20
  char *v121; // x0
  unsigned __int8 *v122; // x20
  _QWORD *v123; // x8
  __int64 v124; // x9
  unsigned __int8 **v125; // x0
  unsigned __int8 *v126; // x20
  __int64 v127; // x0
  unsigned __int8 *v128; // x20
  _QWORD *v129; // x8
  __int64 v130; // x9
  unsigned __int8 **v131; // x0
  unsigned __int8 *v132; // x20
  unsigned __int8 **v133; // x0
  _QWORD *v134; // x8
  __int64 v135; // x9
  unsigned __int8 **v136; // x0
  unsigned __int8 *v137; // x9
  unsigned __int8 *v138; // x10
  int v139; // t1
  unsigned __int8 *v140; // x11
  __int64 v141; // x0
  unsigned __int8 *v142; // x20
  __int64 v143; // x22
  _QWORD *v144; // x8
  __int64 v145; // x9
  unsigned __int8 **v146; // x0
  unsigned __int8 *v147; // x20
  unsigned __int8 *v148; // x11
  unsigned __int8 *v149; // x20
  _QWORD *v150; // x8
  __int64 v151; // x9
  unsigned __int8 **v152; // x0
  unsigned __int8 *v153; // x20
  __int128 v154; // q0
  unsigned __int8 *v156; // x24
  unsigned __int8 *v157; // x8
  unsigned __int8 *v158; // x10
  unsigned __int8 *v159; // x22
  __int64 v160; // x8
  _QWORD *v161; // x9
  signed __int64 v162; // x21
  unsigned __int64 v163; // x23
  _QWORD *v164; // x0
  unsigned __int8 *v165; // x23
  unsigned __int8 **v166; // x0
  __int64 v167; // x10
  _QWORD *v168; // x8
  __int64 v169; // x9
  __int64 v170; // x21
  unsigned __int8 **v171; // x0
  __int64 v172; // [xsp+8h] [xbp-88h]
  __int64 v173; // [xsp+10h] [xbp-80h]
  __int64 v174; // [xsp+18h] [xbp-78h]
  __int64 v175; // [xsp+18h] [xbp-78h]
  __int16 v176; // [xsp+20h] [xbp-70h] BYREF
  int v177; // [xsp+24h] [xbp-6Ch]
  char v178; // [xsp+28h] [xbp-68h]
  unsigned __int64 v179; // [xsp+30h] [xbp-60h]
  __int64 v180; // [xsp+38h] [xbp-58h]

  v180 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *a1;
  v3 = a1[1];
  v4 = v3 - *a1;
  if ( v3 == *a1 )
    goto LABEL_12;
  v5 = *v2;
  if ( v5 == 71 )
  {
    if ( v4 < 2 )
      return nullptr;
    v38 = v2[1];
    if ( v38 != 82 )
    {
      if ( v38 == 86 )
      {
        *a1 = v2 + 2;
        v39 = sub_DCBBC(a1, 0);
        if ( v39 )
        {
          v40 = a1[604];
          v41 = (__int64)v39;
          v42 = v40 + 8;
          v43 = *((_QWORD *)v40 + 1);
          if ( (unsigned __int64)(v43 + 48) >= 0xFF0 )
          {
            v44 = (unsigned __int8 **)operator new[](0x1000u);
            v43 = 0;
            *v44 = v40;
            v44[1] = nullptr;
            v42 = v44 + 1;
            v40 = (unsigned __int8 *)v44;
            a1[604] = (unsigned __int8 *)v44;
          }
          v45 = &v40[v43];
          v46 = "guard variable for ";
          *v42 = v43 + 48;
          *((_QWORD *)v45 + 2) = off_161748;
          v13 = (char *)(v45 + 16);
          v47 = "";
          goto LABEL_161;
        }
      }
      return nullptr;
    }
    *a1 = v2 + 2;
    v55 = sub_DCBBC(a1, 0);
    if ( !v55 )
      return nullptr;
    v56 = *a1;
    v57 = a1[1];
    v41 = (__int64)v55;
    if ( v57 == *a1 || (v58 = *v56, v58 < 0x30) || v58 >= 0x3A && (unsigned __int8)(v58 - 65) > 0x19u )
    {
      v59 = 1;
      if ( v56 != v57 )
      {
LABEL_67:
        if ( *v56 == 95 )
        {
          *a1 = v56 + 1;
          goto LABEL_158;
        }
      }
    }
    else
    {
      v148 = v56 + 1;
      while ( 1 )
      {
        v56 = v148;
        if ( (unsigned __int8)v58 >= 0x3Au && (unsigned __int8)(v58 - 65) > 0x19u )
          break;
        *a1 = v148;
        if ( v57 != v148 )
        {
          ++v148;
          v58 = *v56;
          if ( v58 > 0x2F )
            continue;
        }
        v59 = 0;
        if ( v56 != v57 )
          goto LABEL_67;
        goto LABEL_157;
      }
      v59 = 0;
      v56 = v148 - 1;
      if ( v148 - 1 != v57 )
        goto LABEL_67;
    }
LABEL_157:
    if ( !v59 )
      return nullptr;
LABEL_158:
    v149 = a1[604];
    v150 = v149 + 8;
    v151 = *((_QWORD *)v149 + 1);
    if ( (unsigned __int64)(v151 + 48) >= 0xFF0 )
    {
      v152 = (unsigned __int8 **)operator new[](0x1000u);
      v151 = 0;
      *v152 = v149;
      v152[1] = nullptr;
      v150 = v152 + 1;
      v149 = (unsigned __int8 *)v152;
      a1[604] = (unsigned __int8 *)v152;
    }
    v153 = &v149[v151];
    v46 = "reference temporary for ";
    *v150 = v151 + 48;
    *((_QWORD *)v153 + 2) = off_161748;
    v13 = (char *)(v153 + 16);
    v47 = "";
    goto LABEL_161;
  }
  if ( v5 != 84 )
  {
LABEL_12:
    v176 = 0;
    v177 = 0;
    v178 = 0;
    v179 = (a1[84] - a1[83]) >> 3;
    v13 = sub_DCBBC(a1, (__int64)&v176);
    if ( !v13 )
      return v13;
    v14 = a1[83];
    v15 = v179;
    v16 = (a1[84] - v14) >> 3;
    if ( v179 < v16 )
    {
      v17 = a1[72];
      v18 = v179;
      v19 = (a1[73] - v17) >> 3;
      do
      {
        v20 = *(_QWORD *)&v14[8 * v18];
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 >= v19 )
          return nullptr;
        ++v18;
        *(_QWORD *)(v20 + 24) = *(_QWORD *)&v17[8 * v21];
      }
      while ( v18 < v16 );
    }
    v23 = *a1;
    v22 = a1[1];
    a1[84] = &v14[8 * v15];
    if ( v22 == v23 )
      return v13;
    v24 = *v23;
    if ( (unsigned int)(v24 - 46) <= 0x31 && ((1LL << ((unsigned __int8)v24 - 46)) & 0x2000000800001LL) != 0 )
      return v13;
    v25 = 0;
    if ( (unsigned __int64)(v22 - v23) < 0xD || v24 != 85 )
    {
LABEL_73:
      v62 = 0;
      if ( !(_BYTE)v176 )
      {
        if ( HIBYTE(v176) )
        {
          v62 = sub_DB210((__int64)a1);
          if ( !v62 )
            return nullptr;
        }
      }
      v63 = *a1;
      if ( *a1 != a1[1] && *v63 == 118 )
      {
        v64 = a1[604];
        *a1 = v63 + 1;
        v65 = v64 + 8;
        v66 = *((_QWORD *)v64 + 1);
        if ( (unsigned __int64)(v66 + 64) >= 0xFF0 )
        {
          v67 = (unsigned __int8 **)operator new[](0x1000u);
          v66 = 0;
          *v67 = v64;
          v67[1] = nullptr;
          v65 = v67 + 1;
          v64 = (unsigned __int8 *)v67;
          a1[604] = (unsigned __int8 *)v67;
        }
        *v65 = v66 + 64;
        v68 = &v64[v66];
        v69 = v177;
        v70 = v178;
        *((_QWORD *)v68 + 2) = off_162DC8;
        v71 = (char *)(v68 + 16);
        *((_DWORD *)v71 + 2) = 65555;
        *((_QWORD *)v71 + 2) = v62;
        *((_QWORD *)v71 + 3) = v13;
        *((_QWORD *)v71 + 4) = 0;
        *((_QWORD *)v71 + 5) = 0;
        *((_QWORD *)v71 + 6) = v25;
LABEL_133:
        v13 = v71;
        *((_DWORD *)v71 + 14) = v69;
        v71[60] = v70;
        return v13;
      }
      v172 = v62;
      v173 = v25;
      v175 = (a1[3] - a1[2]) >> 3;
      do
      {
        v72 = sub_DB210((__int64)a1);
        if ( !v72 )
          return nullptr;
        v73 = a1[3];
        v74 = v72;
        if ( v73 == a1[4] )
        {
          v75 = (unsigned __int8 **)a1[2];
          v76 = v73 - (unsigned __int8 *)v75;
          v77 = (v73 - (unsigned __int8 *)v75) >> 3;
          v78 = (v73 - (unsigned __int8 *)v75) >> 2;
          if ( a1 + 5 == v75 )
          {
            v80 = (unsigned __int8 *)malloc(2 * (v73 - (unsigned __int8 *)v75));
            v79 = v80;
            if ( v76 )
              memmove(v80, v75, v76);
          }
          else
          {
            v79 = (unsigned __int8 *)realloc(a1[2], 2 * (v73 - (unsigned __int8 *)v75));
          }
          v73 = &v79[8 * v77];
          a1[2] = v79;
          a1[3] = v73;
          a1[4] = &v79[8 * v78];
        }
        a1[3] = v73 + 8;
        *(_QWORD *)v73 = v74;
        if ( a1[1] == *a1 )
          break;
        v81 = **a1 - 46;
      }
      while ( v81 > 0x31 || ((1LL << v81) & 0x2000000800001LL) == 0 );
      v82 = a1[604];
      v83 = &a1[2][8 * v175];
      v85 = v82 + 8;
      v84 = *((_QWORD *)v82 + 1);
      v86 = a1[3] - v83;
      v87 = ((_DWORD)v86 + 15) & 0xFFFFFFF0;
      if ( v87 + v84 < 0xFF0 )
      {
        v88 = v172;
      }
      else
      {
        v88 = v172;
        if ( v87 >= 0xFF1 )
        {
          v89 = (_QWORD *)operator new[](v87 + 16);
          v90 = (unsigned __int8 *)(v89 + 2);
          *v89 = *(_QWORD *)v82;
          v89[1] = 0;
          *(_QWORD *)v82 = v89;
          if ( !v86 )
            goto LABEL_130;
          goto LABEL_129;
        }
        v133 = (unsigned __int8 **)operator new[](0x1000u);
        v84 = 0;
        *v133 = v82;
        v133[1] = nullptr;
        v85 = v133 + 1;
        v82 = (unsigned __int8 *)v133;
        a1[604] = (unsigned __int8 *)v133;
      }
      v90 = &v82[v84 + 16];
      *v85 = v84 + v87;
      if ( !v86 )
      {
LABEL_130:
        a1[3] = v83;
        v134 = v82 + 8;
        v135 = *((_QWORD *)v82 + 1);
        if ( (unsigned __int64)(v135 + 64) >= 0xFF0 )
        {
          v136 = (unsigned __int8 **)operator new[](0x1000u);
          v135 = 0;
          *v136 = v82;
          v136[1] = nullptr;
          v134 = v136 + 1;
          v82 = (unsigned __int8 *)v136;
          a1[604] = (unsigned __int8 *)v136;
        }
        *v134 = v135 + 64;
        v69 = v177;
        v70 = v178;
        v137 = &v82[v135];
        *((_QWORD *)v137 + 2) = off_162DC8;
        v71 = (char *)(v137 + 16);
        *((_DWORD *)v71 + 2) = 65555;
        *((_QWORD *)v71 + 2) = v88;
        *((_QWORD *)v71 + 3) = v13;
        *((_QWORD *)v71 + 4) = v90;
        *((_QWORD *)v71 + 5) = v86 >> 3;
        *((_QWORD *)v71 + 6) = v173;
        goto LABEL_133;
      }
LABEL_129:
      memmove(v90, v83, v86);
      v82 = a1[604];
      v83 = &a1[2][8 * v175];
      goto LABEL_130;
    }
    if ( v23[1] != 97
      || v23[2] != 57
      || v23[3] != 101
      || v23[4] != 110
      || v23[5] != 97
      || v23[6] != 98
      || v23[7] != 108
      || v23[8] != 101
      || v23[9] != 95
      || v23[10] != 105
      || v23[11] != 102
      || v23[12] != 73 )
    {
      v25 = 0;
      goto LABEL_73;
    }
    v26 = a1[2];
    v27 = a1[3];
    v28 = v23 + 13;
    *a1 = v28;
    v174 = (v27 - v26) >> 3;
    if ( v28 == v22 )
      goto LABEL_38;
LABEL_35:
    if ( *v28 != 69 )
    {
LABEL_38:
      while ( 1 )
      {
        v29 = sub_DDA28((__int64)a1);
        if ( !v29 )
          return nullptr;
        v30 = a1[3];
        v31 = v29;
        if ( v30 == a1[4] )
        {
          v32 = (unsigned __int8 **)a1[2];
          v33 = v30 - (unsigned __int8 *)v32;
          v34 = (v30 - (unsigned __int8 *)v32) >> 3;
          v35 = (v30 - (unsigned __int8 *)v32) >> 2;
          if ( a1 + 5 == v32 )
          {
            v37 = (unsigned __int8 *)malloc(2 * (v30 - (unsigned __int8 *)v32));
            v36 = v37;
            if ( v33 )
              memmove(v37, v32, v33);
          }
          else
          {
            v36 = (unsigned __int8 *)realloc(a1[2], 2 * (v30 - (unsigned __int8 *)v32));
          }
          v30 = &v36[8 * v34];
          a1[2] = v36;
          a1[3] = v30;
          a1[4] = &v36[8 * v35];
        }
        a1[3] = v30 + 8;
        *(_QWORD *)v30 = v31;
        v28 = *a1;
        if ( *a1 != a1[1] )
          goto LABEL_35;
      }
    }
    v156 = a1[604];
    v157 = a1[2];
    v158 = a1[3];
    *a1 = v28 + 1;
    v159 = &v157[8 * v174];
    v161 = v156 + 8;
    v160 = *((_QWORD *)v156 + 1);
    v162 = v158 - v159;
    v163 = ((_DWORD)v158 - (_DWORD)v159 + 15) & 0xFFFFFFF0;
    if ( v163 + v160 >= 0xFF0 )
    {
      if ( v163 >= 0xFF1 )
      {
        v164 = (_QWORD *)operator new[](v163 + 16);
        v165 = (unsigned __int8 *)(v164 + 2);
        *v164 = *(_QWORD *)v156;
        v164[1] = 0;
        *(_QWORD *)v156 = v164;
        if ( !v162 )
          goto LABEL_172;
        goto LABEL_171;
      }
      v166 = (unsigned __int8 **)operator new[](0x1000u);
      v160 = 0;
      *v166 = v156;
      v166[1] = nullptr;
      v161 = v166 + 1;
      v156 = (unsigned __int8 *)v166;
      a1[604] = (unsigned __int8 *)v166;
    }
    v167 = v160 + v163;
    v165 = &v156[v160 + 16];
    *v161 = v167;
    if ( !v162 )
    {
LABEL_172:
      a1[3] = v159;
      v168 = v156 + 8;
      v169 = *((_QWORD *)v156 + 1);
      v170 = v162 >> 3;
      if ( (unsigned __int64)(v169 + 32) >= 0xFF0 )
      {
        v171 = (unsigned __int8 **)operator new[](0x1000u);
        v169 = 0;
        *v171 = v156;
        v171[1] = nullptr;
        v168 = v171 + 1;
        v156 = (unsigned __int8 *)v171;
        a1[604] = (unsigned __int8 *)v171;
      }
      *v168 = v169 + 32;
      *(_QWORD *)&v156[v169 + 16] = off_162D58;
      v25 = (__int64)&v156[v169 + 16];
      *(_DWORD *)(v25 + 8) = 16843017;
      *(_QWORD *)(v25 + 16) = v165;
      *(_QWORD *)(v25 + 24) = v170;
      goto LABEL_73;
    }
LABEL_171:
    memmove(v165, v159, v162);
    v156 = a1[604];
    v159 = &a1[2][8 * v174];
    goto LABEL_172;
  }
  v6 = v4 >= 2;
  v7 = v2 + 1;
  if ( !v6 )
  {
LABEL_52:
    *a1 = v7;
    v48 = v3 != v7 && *v7 == 118;
    if ( (sub_DDD0C(a1) & 1) == 0 )
    {
      v49 = sub_DA368(a1);
      if ( v49 )
      {
        v50 = a1[604];
        v41 = v49;
        v51 = v50 + 8;
        v52 = *((_QWORD *)v50 + 1);
        if ( v48 )
        {
          if ( (unsigned __int64)(v52 + 48) >= 0xFF0 )
          {
            v53 = (unsigned __int8 **)operator new[](0x1000u);
            v52 = 0;
            *v53 = v50;
            v53[1] = nullptr;
            v51 = v53 + 1;
            v50 = (unsigned __int8 *)v53;
            a1[604] = (unsigned __int8 *)v53;
          }
          v54 = &v50[v52];
          v46 = "virtual thunk to ";
          *v51 = v52 + 48;
          *((_QWORD *)v54 + 2) = off_161748;
          v13 = (char *)(v54 + 16);
          v47 = "";
        }
        else
        {
          if ( (unsigned __int64)(v52 + 48) >= 0xFF0 )
          {
            v60 = (unsigned __int8 **)operator new[](0x1000u);
            v52 = 0;
            *v60 = v50;
            v60[1] = nullptr;
            v51 = v60 + 1;
            v50 = (unsigned __int8 *)v60;
            a1[604] = (unsigned __int8 *)v60;
          }
          v61 = &v50[v52];
          v46 = "non-virtual thunk to ";
          *v51 = v52 + 48;
          *((_QWORD *)v61 + 2) = off_161748;
          v13 = (char *)(v61 + 16);
          v47 = "";
        }
LABEL_161:
        *(_QWORD *)&v154 = v46;
        *((_QWORD *)&v154 + 1) = v47;
        *((_DWORD *)v13 + 2) = 16843029;
        *((_OWORD *)v13 + 1) = v154;
        *((_QWORD *)v13 + 4) = v41;
        return v13;
      }
    }
    return nullptr;
  }
  switch ( *v7 )
  {
    case 'C':
      *a1 = v2 + 2;
      v8 = sub_DB210((__int64)a1);
      if ( !v8 )
        return nullptr;
      v10 = *a1;
      v9 = a1[1];
      v11 = v8;
      if ( *a1 == v9 )
      {
        v12 = *a1;
      }
      else
      {
        v12 = *a1;
        if ( *v10 == 110 )
        {
          v12 = v10 + 1;
          *a1 = v10 + 1;
          if ( v10 + 1 == v9 )
            goto LABEL_141;
          goto LABEL_136;
        }
      }
      if ( v12 == v9 )
      {
LABEL_141:
        v140 = nullptr;
        v10 = nullptr;
        goto LABEL_142;
      }
LABEL_136:
      if ( (unsigned int)*v12 - 48 > 9 )
        goto LABEL_141;
      v138 = v12 + 1;
      while ( 1 )
      {
        *a1 = v138;
        if ( v9 == v138 )
          break;
        v139 = *v138++;
        if ( (unsigned int)(v139 - 48) >= 0xA )
        {
          v12 = v138 - 1;
          v140 = v12;
          goto LABEL_142;
        }
      }
      v12 = v9;
      v140 = v9;
LABEL_142:
      v13 = nullptr;
      if ( v10 != v140 && v12 != v9 )
      {
        if ( *v12 != 95 )
          return nullptr;
        *a1 = v12 + 1;
        v141 = sub_DB210((__int64)a1);
        if ( !v141 )
          return nullptr;
        v142 = a1[604];
        v143 = v141;
        v144 = v142 + 8;
        v145 = *((_QWORD *)v142 + 1);
        if ( (unsigned __int64)(v145 + 32) >= 0xFF0 )
        {
          v146 = (unsigned __int8 **)operator new[](0x1000u);
          v145 = 0;
          *v146 = v142;
          v146[1] = nullptr;
          v144 = v146 + 1;
          v142 = (unsigned __int8 *)v146;
          a1[604] = (unsigned __int8 *)v146;
        }
        v147 = &v142[v145];
        *v144 = v145 + 32;
        *((_QWORD *)v147 + 2) = off_1617C8;
        v13 = (char *)(v147 + 16);
        *((_DWORD *)v13 + 2) = 16843030;
        *((_QWORD *)v13 + 2) = v143;
        *((_QWORD *)v13 + 3) = v11;
      }
      return v13;
    case 'H':
      *a1 = v2 + 2;
      v91 = sub_DCBBC(a1, 0);
      if ( !v91 )
        return nullptr;
      v92 = a1[604];
      v41 = (__int64)v91;
      v93 = v92 + 8;
      v94 = *((_QWORD *)v92 + 1);
      if ( (unsigned __int64)(v94 + 48) >= 0xFF0 )
      {
        v95 = (unsigned __int8 **)operator new[](0x1000u);
        v94 = 0;
        *v95 = v92;
        v95[1] = nullptr;
        v93 = v95 + 1;
        v92 = (unsigned __int8 *)v95;
        a1[604] = (unsigned __int8 *)v95;
      }
      v96 = &v92[v94];
      v46 = "thread-local initialization routine for ";
      *v93 = v94 + 48;
      *((_QWORD *)v96 + 2) = off_161748;
      v13 = (char *)(v96 + 16);
      v47 = "";
      goto LABEL_161;
    case 'I':
      *a1 = v2 + 2;
      v97 = sub_DB210((__int64)a1);
      if ( !v97 )
        return nullptr;
      v98 = a1[604];
      v41 = v97;
      v99 = v98 + 8;
      v100 = *((_QWORD *)v98 + 1);
      if ( (unsigned __int64)(v100 + 48) >= 0xFF0 )
      {
        v101 = (unsigned __int8 **)operator new[](0x1000u);
        v100 = 0;
        *v101 = v98;
        v101[1] = nullptr;
        v99 = v101 + 1;
        v98 = (unsigned __int8 *)v101;
        a1[604] = (unsigned __int8 *)v101;
      }
      v102 = &v98[v100];
      v46 = "typeinfo for ";
      *v99 = v100 + 48;
      *((_QWORD *)v102 + 2) = off_161748;
      v13 = (char *)(v102 + 16);
      v47 = "";
      goto LABEL_161;
    case 'S':
      *a1 = v2 + 2;
      v103 = sub_DB210((__int64)a1);
      if ( !v103 )
        return nullptr;
      v104 = a1[604];
      v41 = v103;
      v105 = v104 + 8;
      v106 = *((_QWORD *)v104 + 1);
      if ( (unsigned __int64)(v106 + 48) >= 0xFF0 )
      {
        v107 = (unsigned __int8 **)operator new[](0x1000u);
        v106 = 0;
        *v107 = v104;
        v107[1] = nullptr;
        v105 = v107 + 1;
        v104 = (unsigned __int8 *)v107;
        a1[604] = (unsigned __int8 *)v107;
      }
      v108 = &v104[v106];
      v46 = "typeinfo name for ";
      *v105 = v106 + 48;
      *((_QWORD *)v108 + 2) = off_161748;
      v13 = (char *)(v108 + 16);
      v47 = "";
      goto LABEL_161;
    case 'T':
      *a1 = v2 + 2;
      v109 = sub_DB210((__int64)a1);
      if ( !v109 )
        return nullptr;
      v110 = a1[604];
      v41 = v109;
      v111 = v110 + 8;
      v112 = *((_QWORD *)v110 + 1);
      if ( (unsigned __int64)(v112 + 48) >= 0xFF0 )
      {
        v113 = (unsigned __int8 **)operator new[](0x1000u);
        v112 = 0;
        *v113 = v110;
        v113[1] = nullptr;
        v111 = v113 + 1;
        v110 = (unsigned __int8 *)v113;
        a1[604] = (unsigned __int8 *)v113;
      }
      v114 = &v110[v112];
      v46 = "VTT for ";
      *v111 = v112 + 48;
      *((_QWORD *)v114 + 2) = off_161748;
      v13 = (char *)(v114 + 16);
      v47 = "";
      goto LABEL_161;
    case 'V':
      *a1 = v2 + 2;
      v115 = sub_DB210((__int64)a1);
      if ( !v115 )
        return nullptr;
      v116 = a1[604];
      v41 = v115;
      v117 = v116 + 8;
      v118 = *((_QWORD *)v116 + 1);
      if ( (unsigned __int64)(v118 + 48) >= 0xFF0 )
      {
        v119 = (unsigned __int8 **)operator new[](0x1000u);
        v118 = 0;
        *v119 = v116;
        v119[1] = nullptr;
        v117 = v119 + 1;
        v116 = (unsigned __int8 *)v119;
        a1[604] = (unsigned __int8 *)v119;
      }
      v120 = &v116[v118];
      v46 = "vtable for ";
      *v117 = v118 + 48;
      *((_QWORD *)v120 + 2) = off_161748;
      v13 = (char *)(v120 + 16);
      v47 = "";
      goto LABEL_161;
    case 'W':
      *a1 = v2 + 2;
      v121 = sub_DCBBC(a1, 0);
      if ( !v121 )
        return nullptr;
      v122 = a1[604];
      v41 = (__int64)v121;
      v123 = v122 + 8;
      v124 = *((_QWORD *)v122 + 1);
      if ( (unsigned __int64)(v124 + 48) >= 0xFF0 )
      {
        v125 = (unsigned __int8 **)operator new[](0x1000u);
        v124 = 0;
        *v125 = v122;
        v125[1] = nullptr;
        v123 = v125 + 1;
        v122 = (unsigned __int8 *)v125;
        a1[604] = (unsigned __int8 *)v125;
      }
      v126 = &v122[v124];
      v46 = "thread-local wrapper routine for ";
      *v123 = v124 + 48;
      *((_QWORD *)v126 + 2) = off_161748;
      v13 = (char *)(v126 + 16);
      v47 = "";
      goto LABEL_161;
    case 'c':
      *a1 = v2 + 2;
      if ( (sub_DDD0C(a1) & 1) != 0 )
        return nullptr;
      if ( (sub_DDD0C(a1) & 1) != 0 )
        return nullptr;
      v127 = sub_DA368(a1);
      if ( !v127 )
        return nullptr;
      v128 = a1[604];
      v41 = v127;
      v129 = v128 + 8;
      v130 = *((_QWORD *)v128 + 1);
      if ( (unsigned __int64)(v130 + 48) >= 0xFF0 )
      {
        v131 = (unsigned __int8 **)operator new[](0x1000u);
        v130 = 0;
        *v131 = v128;
        v131[1] = nullptr;
        v129 = v131 + 1;
        v128 = (unsigned __int8 *)v131;
        a1[604] = (unsigned __int8 *)v131;
      }
      v132 = &v128[v130];
      v46 = "covariant return thunk to ";
      *v129 = v130 + 48;
      *((_QWORD *)v132 + 2) = off_161748;
      v13 = (char *)(v132 + 16);
      v47 = "";
      goto LABEL_161;
    default:
      goto LABEL_52;
  }
}
// 161748: using guessed type __int64 (__fastcall *off_161748[7])();
// 1617C8: using guessed type __int64 (__fastcall *off_1617C8[7])();
// 162D58: using guessed type __int64 (__fastcall *off_162D58[7])();
// 162DC8: using guessed type __int64 (__fastcall *off_162DC8[7])();
