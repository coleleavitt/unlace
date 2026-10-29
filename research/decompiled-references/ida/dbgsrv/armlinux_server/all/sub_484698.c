/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_484698
// Address: 0x0000000000484698

//----- (0000000000484698) ----------------------------------------------------
__int64 __fastcall sub_484698(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x26
  _BYTE *v7; // x27
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x28
  const char **v11; // x25
  bool v12; // zf
  __int64 result; // x0
  _BYTE *v15; // x0
  size_t v16; // x21
  __int64 v17; // x20
  _BYTE *v18; // x0
  size_t v19; // x22
  const char **v20; // x20
  void *v21; // x26
  unsigned __int64 v22; // x24
  unsigned __int64 v23; // x23
  __int64 v24; // x3
  char *v25; // x0
  char *v26; // x0
  __int64 v27; // x22
  __int64 v28; // x20
  char v29; // w1
  unsigned int v30; // w2
  unsigned __int64 v31; // x20
  _BYTE *v32; // x0
  void *v33; // x22
  unsigned __int64 *v34; // x23
  unsigned __int64 v35; // x26
  char v36; // w1
  int v37; // w0
  unsigned int v38; // w2
  __int64 v39; // x21
  size_t v40; // x22
  void *v41; // x0
  size_t v42; // x25
  unsigned __int64 v43; // x24
  unsigned __int64 v44; // x2
  char *v45; // x0
  _BYTE *v46; // x0
  size_t v47; // x23
  unsigned __int64 v48; // x21
  unsigned __int64 v49; // x20
  const char *v50; // x22
  unsigned __int64 v51; // x26
  size_t v52; // x25
  unsigned __int64 v53; // x24
  bool v54; // cc
  size_t v55; // x21
  size_t v56; // x21
  _BYTE *v57; // x0
  size_t v58; // x21
  char *v59; // x0
  unsigned __int64 v60; // x2
  char *v61; // x3
  unsigned int v62; // w2
  _BYTE *v63; // x0
  size_t v64; // x22
  _BYTE *v65; // x0
  size_t v66; // x21
  unsigned __int64 v67; // x2
  char *v68; // x0
  unsigned __int64 v69; // x22
  unsigned __int64 v70; // x24
  unsigned __int64 v71; // x22
  unsigned __int64 v72; // x24
  unsigned __int64 v73; // x22
  unsigned __int64 v74; // x24
  unsigned __int64 v75; // x22
  unsigned __int64 v76; // x24
  _BYTE *v77; // x0
  unsigned __int64 v78; // x24
  unsigned __int64 v79; // x25
  unsigned __int64 v80; // x24
  __int64 v81; // x3
  char *v82; // x0
  char *v83; // x0
  __int64 v84; // x2
  char *v85; // x0
  char *v86; // x0
  __int64 v87; // x3
  char *v88; // x0
  char *v89; // x0
  __int64 v90; // x3
  char *v91; // x0
  char *v92; // x0
  __int64 v93; // x3
  char *v94; // x0
  char *v95; // x0
  unsigned __int64 v96; // x23
  unsigned __int64 v97; // x20
  unsigned __int64 v98; // x22
  unsigned __int64 v99; // x20
  unsigned __int64 v100; // x23
  _BYTE *v101; // x0
  unsigned __int64 v102; // x23
  __int64 v103; // x3
  char *v104; // x0
  __int64 v105; // x3
  char *v106; // x0
  __int64 v107; // x3
  char *v108; // x0
  __int64 v109; // x3
  char *v110; // x0
  size_t v111; // x3
  char *v112; // x0
  __int64 v113; // x3
  char *v114; // x0
  __int64 v115; // [xsp+10h] [xbp-150h]
  __int64 v116; // [xsp+18h] [xbp-148h]
  __int64 v117; // [xsp+20h] [xbp-140h]
  __int64 v118; // [xsp+28h] [xbp-138h]
  __int64 v119; // [xsp+38h] [xbp-128h]
  _BYTE *v120; // [xsp+40h] [xbp-120h]
  void *v121; // [xsp+60h] [xbp-100h]
  char *v122; // [xsp+68h] [xbp-F8h]
  unsigned __int64 *v123; // [xsp+70h] [xbp-F0h]
  void *src; // [xsp+78h] [xbp-E8h]
  const char **v125; // [xsp+80h] [xbp-E0h]
  void *v126; // [xsp+88h] [xbp-D8h]
  unsigned __int64 *v127; // [xsp+90h] [xbp-D0h]
  char *v128; // [xsp+98h] [xbp-C8h]
  char v129; // [xsp+A8h] [xbp-B8h] BYREF
  int v130; // [xsp+B0h] [xbp-B0h] BYREF
  char *v131; // [xsp+B8h] [xbp-A8h]
  int *v132; // [xsp+C0h] [xbp-A0h]
  int *v133; // [xsp+C8h] [xbp-98h]
  __int64 v134; // [xsp+D0h] [xbp-90h]
  __int64 v135; // [xsp+D8h] [xbp-88h] BYREF
  __int64 v136; // [xsp+E0h] [xbp-80h]
  _QWORD *v137; // [xsp+E8h] [xbp-78h]
  _QWORD *v138; // [xsp+F0h] [xbp-70h]
  _QWORD *v139; // [xsp+F8h] [xbp-68h]
  __int64 v140; // [xsp+100h] [xbp-60h]
  _BYTE v141[5]; // [xsp+108h] [xbp-58h] BYREF
  _BYTE v142[3]; // [xsp+10Dh] [xbp-53h] BYREF
  char v143; // [xsp+110h] [xbp-50h] BYREF
  char v144; // [xsp+115h] [xbp-4Bh] BYREF
  _BYTE v145[5]; // [xsp+118h] [xbp-48h] BYREF
  _BYTE v146[3]; // [xsp+11Dh] [xbp-43h] BYREF
  char v147; // [xsp+120h] [xbp-40h] BYREF
  char v148; // [xsp+125h] [xbp-3Bh] BYREF
  char v149; // [xsp+128h] [xbp-38h] BYREF
  char v150; // [xsp+12Dh] [xbp-33h] BYREF
  _BYTE v151[5]; // [xsp+130h] [xbp-30h] BYREF
  _BYTE v152[3]; // [xsp+135h] [xbp-2Bh] BYREF
  _BYTE v153[5]; // [xsp+138h] [xbp-28h] BYREF
  _BYTE v154[3]; // [xsp+13Dh] [xbp-23h] BYREF
  _BYTE v155[5]; // [xsp+140h] [xbp-20h] BYREF
  _BYTE v156[3]; // [xsp+145h] [xbp-1Bh] BYREF
  _BYTE v157[5]; // [xsp+148h] [xbp-18h] BYREF
  _BYTE v158[5]; // [xsp+14Dh] [xbp-13h] BYREF
  _BYTE v159[6]; // [xsp+152h] [xbp-Eh] BYREF
  __int64 v160; // [xsp+158h] [xbp-8h]

  v9 = *a2;
  v10 = a2[1];
  v11 = (const char **)a2[6];
  v125 = (const char **)*a2;
  v127 = a2;
  if ( v10 )
    v12 = v9 == 0;
  else
    v12 = 1;
  if ( v12 || v11 == nullptr )
    goto LABEL_9;
  v119 = v6;
  v7 = v157;
  v115 = v2;
  v116 = v3;
  v117 = v4;
  v118 = v5;
  v15 = sub_48E2D8(v157, (unsigned __int64)v158, 0xFFFFFF01);
  v16 = v15 - v157;
  if ( v15 != v157 )
  {
    v97 = *(_QWORD *)(a1 + 8);
    v98 = v16 + v97;
    if ( v97 <= v16 + v97 )
    {
      if ( v97 >= v16 + v97 )
      {
LABEL_156:
        memcpy((void *)(*(_QWORD *)a1 + v97), v157, v16);
        goto LABEL_12;
      }
    }
    else
    {
      if ( v97 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v97 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_156;
      }
      v98 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v105 = *(_QWORD *)(a1 + 8);
    v106 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v98 )
    {
      v106 = (char *)sub_491288(a1, *(void **)a1, v98, 1u);
      *(_QWORD *)a1 = v106;
      v105 = *(_QWORD *)(a1 + 8);
    }
    memset(&v106[v105], 0, v98 - v105);
    *(_QWORD *)(a1 + 8) = v98;
    goto LABEL_156;
  }
LABEL_12:
  if ( *v11 )
  {
    v17 = 0;
    do
      ++v17;
    while ( v11[v17] );
    v18 = sub_48E2D8(v157, (unsigned __int64)v158, v17);
    v19 = v18 - v157;
    if ( v18 == v157 )
      goto LABEL_16;
  }
  else
  {
    v101 = sub_48E2D8(v157, (unsigned __int64)v158, 0);
    v19 = v101 - v157;
    if ( v101 == v157 )
      goto LABEL_28;
    v17 = 0;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v102 = v16 + v19;
  if ( v16 <= v16 + v19 )
  {
    if ( v16 >= v16 + v19 )
      goto LABEL_171;
  }
  else
  {
    if ( v16 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v16 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_171;
    }
    v102 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v107 = *(_QWORD *)(a1 + 8);
  v108 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v102 )
  {
    v108 = (char *)sub_491288(a1, *(void **)a1, v102, 1u);
    *(_QWORD *)a1 = v108;
    v107 = *(_QWORD *)(a1 + 8);
  }
  memset(&v108[v107], 0, v102 - v107);
  *(_QWORD *)(a1 + 8) = v102;
LABEL_171:
  memcpy((void *)(*(_QWORD *)a1 + v16), v157, v19);
  if ( v17 )
  {
LABEL_16:
    v20 = &v11[v17];
    v121 = &byte_4B31F0;
    do
    {
      while ( 1 )
      {
        v21 = (void *)*v11;
        if ( *v11 )
        {
          v16 = strlen(*v11) + 1;
        }
        else
        {
          v16 = 1;
          v21 = v121;
        }
        v22 = *(_QWORD *)(a1 + 8);
        v23 = v22 + v16;
        if ( v22 <= v22 + v16 )
          break;
        if ( v22 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v23 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_25;
        }
        if ( (v22 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
        ++v11;
        memcpy((void *)(*(_QWORD *)a1 + v22), v21, v16);
        if ( v20 == v11 )
          goto LABEL_28;
      }
      if ( v22 >= v22 + v16 )
        goto LABEL_20;
LABEL_25:
      v24 = *(_QWORD *)(a1 + 8);
      v25 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v23 )
      {
        v25 = (char *)sub_491288(a1, *(void **)a1, v23, 1u);
        *(_QWORD *)a1 = v25;
        v24 = *(_QWORD *)(a1 + 8);
      }
      memset(&v25[v24], 0, v23 - v24);
      v26 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v23;
      ++v11;
      memcpy(&v26[v22], v21, v16);
    }
    while ( v20 != v11 );
  }
LABEL_28:
  v122 = &v129;
  v130 = 0;
  v131 = nullptr;
  v132 = &v130;
  v133 = &v130;
  v134 = 0;
  if ( v10 )
  {
    v27 = 0;
    v28 = 0;
    v16 = (size_t)(v125 + 2);
    v123 = (unsigned __int64 *)&v135;
    do
    {
      if ( *(_QWORD *)v16 )
      {
        v135 = *(_QWORD *)v16;
        v136 = v27;
        sub_4843E8(v122, v123);
        if ( v29 )
          ++v27;
      }
      ++v28;
      v16 += 32LL;
    }
    while ( v10 != v28 );
    v30 = v27;
  }
  else
  {
    v30 = 0;
    v123 = (unsigned __int64 *)&v135;
  }
  v31 = (unsigned __int64)v141;
  LODWORD(v136) = 0;
  v137 = nullptr;
  v138 = v123 + 1;
  v139 = v123 + 1;
  v140 = 0;
  v32 = sub_48E2D8(v141, (unsigned __int64)v142, v30);
  v33 = (void *)(v32 - v141);
  if ( v32 == v141 )
    goto LABEL_36;
  v96 = *(_QWORD *)(a1 + 8);
  v16 = (size_t)v33 + v96;
  if ( v96 > (unsigned __int64)v33 + v96 )
  {
    if ( v96 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v96 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_151;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_192:
    v109 = *(_QWORD *)(a1 + 8);
    v110 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v16 )
    {
      v110 = (char *)sub_491288(a1, *(void **)a1, v16, 1u);
      v109 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v110;
    }
    memset(&v110[v109], 0, v16 - v109);
    *(_QWORD *)(a1 + 8) = v16;
    goto LABEL_151;
  }
  if ( v96 < (unsigned __int64)v33 + v96 )
    goto LABEL_192;
LABEL_151:
  memcpy((void *)(*(_QWORD *)a1 + v96), v141, (size_t)v33);
LABEL_36:
  v126 = &v143;
  v34 = (unsigned __int64 *)(v125 + 2);
  v35 = 0;
  src = &byte_4B31F0;
  v128 = &v144;
  do
  {
    if ( *v34 )
    {
      sub_484560(v123, v34);
      if ( v36 )
      {
        if ( (*(_DWORD *)(v34 - 1) & 0x100) != 0 )
        {
          v38 = 1;
          v39 = 1;
        }
        else
        {
          v37 = *((unsigned __int8 *)v34 - 3);
          if ( v37 == 1 )
          {
            v38 = 16;
            v39 = 16;
          }
          else
          {
            if ( v37 != 2 )
            {
              if ( !under_debugger )
                sub_492270(1783);
              __break(0x3E8u);
              goto LABEL_205;
            }
            v38 = 32;
            v39 = 32;
          }
        }
        v40 = sub_48E2D8(v126, (unsigned __int64)v128, v38) - (_BYTE *)v126;
        v31 = *(_QWORD *)(a1 + 8);
        if ( !v40 )
          goto LABEL_44;
        v80 = v31 + v40;
        if ( v31 <= v31 + v40 )
        {
          if ( v31 >= v31 + v40 )
          {
LABEL_146:
            memcpy((void *)(*(_QWORD *)a1 + v31), v126, v40);
            v31 = *(_QWORD *)(a1 + 8);
LABEL_44:
            v41 = (void *)(8 * v39);
            v16 = 0;
            v121 = v41;
            while ( 1 )
            {
              v33 = *(void **)(*v34 + v16);
              if ( v33 )
              {
                v42 = strlen(*(const char **)(*v34 + v16)) + 1;
              }
              else
              {
                v42 = 1;
                v33 = src;
              }
              v43 = v31 + v42;
              if ( v31 + v42 >= v31 )
                break;
              if ( v31 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v43 = 0x7FFFFFFFFFFFFFFFLL;
                v44 = v31;
                v45 = *(char **)a1;
                if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
                  goto LABEL_88;
                goto LABEL_55;
              }
              if ( (v31 & 0x8000000000000000LL) != 0 )
                *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
              v16 += 8LL;
              memcpy((void *)(*(_QWORD *)a1 + v31), v33, v42);
              if ( v121 == (void *)v16 )
                goto LABEL_57;
              v31 = *(_QWORD *)(a1 + 8);
            }
            if ( v31 + v42 <= v31 )
              goto LABEL_48;
            v44 = v31;
            v45 = *(char **)a1;
            if ( *(_QWORD *)(a1 + 16) < v43 )
            {
LABEL_88:
              v45 = (char *)sub_491288(a1, v45, v43, 1u);
              v44 = *(_QWORD *)(a1 + 8);
              *(_QWORD *)a1 = v45;
            }
LABEL_55:
            memset(&v45[v44], 0, v43 - v44);
            *(_QWORD *)(a1 + 8) = v43;
            goto LABEL_48;
          }
        }
        else
        {
          if ( v31 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v31 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_146;
          }
          v80 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v103 = *(_QWORD *)(a1 + 8);
        v104 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v80 )
        {
          v104 = (char *)sub_491288(a1, *(void **)a1, v80, 1u);
          v103 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v104;
        }
        memset(&v104[v103], 0, v80 - v103);
        *(_QWORD *)(a1 + 8) = v80;
        goto LABEL_146;
      }
    }
LABEL_57:
    ++v35;
    v34 += 4;
  }
  while ( v10 > v35 );
  v46 = sub_48E2D8(v145, (unsigned __int64)v146, v10);
  v47 = v46 - v145;
  v48 = *(_QWORD *)(a1 + 8);
  if ( v46 == v145 )
    goto LABEL_59;
  v99 = v47 + v48;
  if ( v47 + v48 < v48 )
  {
    if ( v48 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v48 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_198;
    }
    v99 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_210:
    v113 = *(_QWORD *)(a1 + 8);
    v114 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v99 )
    {
      v114 = (char *)sub_491288(a1, *(void **)a1, v99, 1u);
      v113 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v114;
    }
    memset(&v114[v113], 0, v99 - v113);
    *(_QWORD *)(a1 + 8) = v99;
    goto LABEL_198;
  }
  if ( v47 + v48 > v48 )
    goto LABEL_210;
LABEL_198:
  memcpy((void *)(*(_QWORD *)a1 + v48), v145, v47);
  v48 = *(_QWORD *)(a1 + 8);
LABEL_59:
  v49 = (unsigned __int64)v125;
  v121 = &v147;
  src = &v149;
  v50 = *v125;
  v125 = (const char **)&v148;
  v126 = &v150;
  v51 = 0;
  if ( !v50 )
    goto LABEL_78;
  while ( 2 )
  {
    v52 = strlen(v50) + 1;
    v53 = v52 + v48;
    v54 = v52 + v48 > v48;
    if ( v52 + v48 < v48 )
    {
LABEL_61:
      if ( v48 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v48 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_64;
      }
      v53 = 0x7FFFFFFFFFFFFFFFLL;
      v67 = v48;
      v68 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
      {
LABEL_143:
        v68 = (char *)sub_491288(a1, v68, v53, 1u);
        v67 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v68;
      }
LABEL_82:
      memset(&v68[v67], 0, v53 - v67);
      *(_QWORD *)(a1 + 8) = v53;
      goto LABEL_64;
    }
LABEL_79:
    if ( v54 )
    {
      v67 = v48;
      v68 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v53 )
        goto LABEL_143;
      goto LABEL_82;
    }
LABEL_64:
    memcpy((void *)(*(_QWORD *)a1 + v48), v50, v52);
    v55 = sub_48E2D8(v121, (unsigned __int64)v125, *(_DWORD *)(v49 + 8)) - (_BYTE *)v121;
    if ( v55 )
    {
      v71 = *(_QWORD *)(a1 + 8);
      v72 = v55 + v71;
      if ( v71 <= v55 + v71 )
      {
        if ( v71 >= v55 + v71 )
        {
LABEL_98:
          memcpy((void *)(*(_QWORD *)a1 + v71), v121, v55);
          goto LABEL_65;
        }
      }
      else
      {
        if ( v71 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v71 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_98;
        }
        v72 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v87 = *(_QWORD *)(a1 + 8);
      v88 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v72 )
      {
        v88 = (char *)sub_491288(a1, *(void **)a1, v72, 1u);
        v87 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v88;
      }
      memset(&v88[v87], 0, v72 - v87);
      v89 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v72;
      memcpy(&v89[v71], v121, v55);
    }
LABEL_65:
    v56 = sub_48E2D8(src, (unsigned __int64)v126, *(unsigned __int8 *)(v49 + 12)) - (_BYTE *)src;
    if ( !v56 )
      goto LABEL_66;
    v69 = *(_QWORD *)(a1 + 8);
    v70 = v56 + v69;
    if ( v69 <= v56 + v69 )
    {
      if ( v69 >= v56 + v69 )
        goto LABEL_93;
      goto LABEL_123;
    }
    if ( v69 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v70 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_123:
      v81 = *(_QWORD *)(a1 + 8);
      v82 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v70 )
      {
        v82 = (char *)sub_491288(a1, *(void **)a1, v70, 1u);
        v81 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v82;
      }
      memset(&v82[v81], 0, v70 - v81);
      v83 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v70;
      memcpy(&v83[v69], src, v56);
      goto LABEL_66;
    }
    if ( (v69 & 0x8000000000000000LL) != 0 )
      *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_93:
    memcpy((void *)(*(_QWORD *)a1 + v69), src, v56);
LABEL_66:
    v57 = sub_48E2D8(v151, (unsigned __int64)v152, *(unsigned __int8 *)(v49 + 13));
    v58 = v57 - v151;
    if ( v57 != v151 )
    {
      v73 = *(_QWORD *)(a1 + 8);
      v74 = v58 + v73;
      if ( v73 <= v58 + v73 )
      {
        if ( v73 >= v58 + v73 )
        {
LABEL_103:
          memcpy((void *)(*(_QWORD *)a1 + v73), v151, v58);
          goto LABEL_67;
        }
      }
      else
      {
        if ( v73 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v73 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_103;
        }
        v74 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v90 = *(_QWORD *)(a1 + 8);
      v91 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v74 )
      {
        v91 = (char *)sub_491288(a1, *(void **)a1, v74, 1u);
        v90 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v91;
      }
      memset(&v91[v90], 0, v74 - v90);
      v92 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v74;
      memcpy(&v92[v73], v151, v58);
    }
LABEL_67:
    v59 = v131;
    if ( !v131 )
      goto LABEL_83;
    v60 = *(_QWORD *)(v49 + 16);
    v61 = v122 + 8;
    do
    {
      while ( *((_QWORD *)v59 + 4) >= v60 )
      {
        v61 = v59;
        v59 = *((char **)v59 + 2);
        if ( !v59 )
          goto LABEL_71;
      }
      v59 = *((char **)v59 + 3);
    }
    while ( v59 );
LABEL_71:
    if ( v61 == v122 + 8 || v60 < *((_QWORD *)v61 + 4) )
LABEL_83:
      v62 = 0;
    else
      v62 = *((_QWORD *)v61 + 5) + 1;
    v63 = sub_48E2D8(v153, (unsigned __int64)v154, v62);
    v64 = v63 - v153;
    if ( v63 != v153 )
    {
      v78 = *(_QWORD *)(a1 + 8);
      v79 = v64 + v78;
      if ( v78 <= v64 + v78 )
      {
        if ( v78 >= v64 + v78 )
        {
LABEL_116:
          memcpy((void *)(*(_QWORD *)a1 + v78), v153, v64);
          goto LABEL_75;
        }
      }
      else
      {
        if ( v78 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (v78 & 0x8000000000000000LL) != 0 )
            *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_116;
        }
        v79 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v84 = *(_QWORD *)(a1 + 8);
      v85 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v79 )
      {
        v85 = (char *)sub_491288(a1, *(void **)a1, v79, 1u);
        v84 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v85;
      }
      memset(&v85[v84], 0, v79 - v84);
      v86 = *(char **)a1;
      *(_QWORD *)(a1 + 8) = v79;
      memcpy(&v86[v78], v153, v64);
    }
LABEL_75:
    v65 = sub_48E4D8(v157, (unsigned __int64)v159, *(_QWORD *)(v49 + 24) + 1LL);
    v66 = v65 - v157;
    if ( v65 == v157 )
    {
      ++v51;
      v49 += 32LL;
      if ( v10 <= v51 )
        goto LABEL_110;
LABEL_77:
      v50 = *(const char **)v49;
      v48 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)v49 )
        continue;
LABEL_78:
      v52 = 1;
      v53 = v48 + 1;
      v54 = v48 + 1 >= v48;
      v50 = &byte_4B31F0;
      if ( v48 + 1 < v48 )
        goto LABEL_61;
      goto LABEL_79;
    }
    break;
  }
  v75 = *(_QWORD *)(a1 + 8);
  v76 = v66 + v75;
  if ( v75 <= v66 + v75 )
  {
    if ( v75 >= v66 + v75 )
      goto LABEL_108;
    goto LABEL_139;
  }
  if ( v75 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v76 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_139:
    v93 = *(_QWORD *)(a1 + 8);
    v94 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v76 )
    {
      v94 = (char *)sub_491288(a1, *(void **)a1, v76, 1u);
      v93 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v94;
    }
    memset(&v94[v93], 0, v76 - v93);
    v95 = *(char **)a1;
    *(_QWORD *)(a1 + 8) = v76;
    memcpy(&v95[v75], v157, v66);
    goto LABEL_109;
  }
  if ( (v75 & 0x8000000000000000LL) != 0 )
    *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_108:
  memcpy((void *)(*(_QWORD *)a1 + v75), v157, v66);
LABEL_109:
  ++v51;
  v49 += 32LL;
  if ( v10 > v51 )
    goto LABEL_77;
LABEL_110:
  v31 = (unsigned __int64)v155;
  v77 = sub_48E2D8(v155, (unsigned __int64)v156, *((_DWORD *)v127 + 24));
  v33 = (void *)(v77 - v155);
  if ( v77 == v155 )
    goto LABEL_111;
  v16 = *(_QWORD *)(a1 + 8);
  v100 = (unsigned __int64)v33 + v16;
  if ( v16 > (unsigned __int64)v33 + v16 )
  {
    if ( v16 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v16 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_196;
    }
LABEL_205:
    v100 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_206:
    v111 = v16;
    v112 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v100 )
    {
      v112 = (char *)sub_491288(a1, *(void **)a1, v100, 1u);
      v111 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v112;
    }
    memset(&v112[v111], 0, v100 - v111);
    *(_QWORD *)(a1 + 8) = v100;
    goto LABEL_196;
  }
  if ( v16 < (unsigned __int64)v33 + v16 )
    goto LABEL_206;
LABEL_196:
  memcpy((void *)(*(_QWORD *)a1 + v16), (const void *)v31, (size_t)v33);
LABEL_111:
  sub_484518((__int64)v123, v137);
  sub_4843A0((__int64)v122, v131);
  v2 = v115;
  v3 = v116;
  v4 = v117;
  v5 = v118;
  v6 = v119;
LABEL_9:
  result = v160 ^ _stack_chk_guard;
  if ( v160 != _stack_chk_guard )
  {
    v115 = v2;
    v116 = v3;
    v117 = v4;
    v118 = v5;
    v119 = v6;
    v120 = v7;
  }
  return result;
}
// 484698: could not find valid save-restore pair for x21
// 484698: could not find valid save-restore pair for x22
// 484698: could not find valid save-restore pair for x23
// 484698: could not find valid save-restore pair for x24
// 484698: could not find valid save-restore pair for x26
// 484704: variable 'v6' is possibly undefined
// 48470C: variable 'v2' is possibly undefined
// 48470C: variable 'v3' is possibly undefined
// 484714: variable 'v4' is possibly undefined
// 484714: variable 'v5' is possibly undefined
// 48488C: variable 'v29' is possibly undefined
// 484910: variable 'v36' is possibly undefined
// 48544C: variable 'v7' is possibly undefined
// 4B31F0: using guessed type char byte_4B31F0;
// 52451C: using guessed type char under_debugger;
