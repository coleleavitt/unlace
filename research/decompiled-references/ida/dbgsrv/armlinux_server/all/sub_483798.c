/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483798
// Address: 0x0000000000483798

//----- (0000000000483798) ----------------------------------------------------
__int64 __fastcall sub_483798(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x0
  size_t v5; // x21
  _BYTE *v6; // x0
  size_t v7; // x21
  _BYTE *v8; // x0
  size_t v9; // x21
  _BYTE *v10; // x0
  size_t v11; // x21
  _BYTE *v12; // x0
  size_t v13; // x21
  _BYTE *v14; // x0
  size_t v15; // x21
  _BYTE *v16; // x0
  __int64 v17; // x3
  char v18; // w20
  unsigned __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x1
  unsigned __int64 v22; // x2
  char v23; // w20
  _BYTE *v24; // x0
  _BYTE *v25; // x0
  size_t v26; // x21
  char *v27; // x28
  char *v28; // x23
  __int64 v29; // x3
  unsigned __int64 v30; // x0
  __int64 v31; // x2
  __int64 v32; // x1
  unsigned __int64 v33; // x2
  char v34; // w6
  unsigned __int64 v35; // x0
  __int64 v36; // x2
  __int64 v37; // x1
  unsigned __int64 v38; // x2
  char v39; // w6
  unsigned __int64 v40; // x0
  __int64 v41; // x2
  __int64 v42; // x1
  unsigned __int64 v43; // x2
  char v44; // w6
  _BYTE *v45; // x0
  _BYTE *v46; // x0
  size_t v47; // x7
  _BYTE *v48; // x0
  size_t v49; // x7
  _BYTE *v50; // x0
  size_t v51; // x7
  _BYTE *v52; // x0
  size_t v53; // x7
  _BYTE *v54; // x0
  __int64 v55; // x3
  char v56; // w6
  unsigned __int64 v57; // x0
  __int64 v58; // x2
  __int64 v59; // x1
  unsigned __int64 v60; // x2
  char v61; // w6
  _BYTE *v62; // x0
  unsigned __int64 v63; // x0
  __int64 v64; // x2
  __int64 v65; // x1
  unsigned __int64 v66; // x2
  char v67; // w6
  _BYTE *v68; // x0
  unsigned __int64 v69; // x0
  __int64 v70; // x2
  __int64 v71; // x1
  unsigned __int64 v72; // x2
  char v73; // w6
  char v74; // w6
  _BYTE *v75; // x0
  unsigned __int64 v76; // x0
  __int64 v77; // x2
  __int64 v78; // x1
  unsigned __int64 v79; // x2
  _BYTE *v80; // x0
  unsigned __int64 v81; // x0
  __int64 v82; // x2
  _BYTE *v83; // x0
  unsigned __int64 v84; // x0
  __int64 v85; // x2
  _BYTE *v86; // x0
  unsigned __int64 v87; // x0
  __int64 v88; // x2
  _BYTE *v89; // x0
  unsigned __int64 v91; // x6
  unsigned __int64 v92; // x8
  unsigned __int64 v93; // x6
  unsigned __int64 v94; // x8
  unsigned __int64 v95; // x6
  unsigned __int64 v96; // x8
  unsigned __int64 v97; // x6
  unsigned __int64 v98; // x8
  __int64 v99; // x3
  char *v100; // x0
  __int64 v101; // x3
  char *v102; // x0
  __int64 v103; // x3
  char *v104; // x0
  __int64 v105; // x3
  char *v106; // x0
  unsigned __int64 v107; // x20
  unsigned __int64 v108; // x22
  unsigned __int64 v109; // x20
  unsigned __int64 v110; // x22
  unsigned __int64 v111; // x20
  unsigned __int64 v112; // x22
  unsigned __int64 v113; // x20
  unsigned __int64 v114; // x22
  unsigned __int64 v115; // x20
  unsigned __int64 v116; // x22
  unsigned __int64 v117; // x20
  unsigned __int64 v118; // x22
  unsigned __int64 v119; // x20
  unsigned __int64 v120; // x22
  __int64 v121; // x3
  char *v122; // x0
  __int64 v123; // x3
  char *v124; // x0
  __int64 v125; // x3
  char *v126; // x0
  __int64 v127; // x3
  char *v128; // x0
  __int64 v129; // x3
  char *v130; // x0
  __int64 v131; // x3
  char *v132; // x0
  __int64 v133; // x3
  char *v134; // x0
  char v135; // [xsp+68h] [xbp-58h]
  char v136; // [xsp+68h] [xbp-58h]
  char v137; // [xsp+68h] [xbp-58h]
  char v138; // [xsp+68h] [xbp-58h]
  char v139; // [xsp+68h] [xbp-58h]
  char v140; // [xsp+68h] [xbp-58h]
  char v141; // [xsp+68h] [xbp-58h]
  char v142; // [xsp+68h] [xbp-58h]
  char v143; // [xsp+68h] [xbp-58h]
  unsigned __int64 v144; // [xsp+68h] [xbp-58h]
  unsigned __int64 v145; // [xsp+68h] [xbp-58h]
  unsigned __int64 v146; // [xsp+68h] [xbp-58h]
  unsigned __int64 v147; // [xsp+68h] [xbp-58h]
  unsigned __int64 v148; // [xsp+68h] [xbp-58h]
  unsigned __int64 v149; // [xsp+68h] [xbp-58h]
  unsigned __int64 v150; // [xsp+68h] [xbp-58h]
  unsigned __int64 v151; // [xsp+68h] [xbp-58h]
  size_t v152; // [xsp+70h] [xbp-50h]
  size_t v153; // [xsp+70h] [xbp-50h]
  size_t v154; // [xsp+70h] [xbp-50h]
  size_t v155; // [xsp+70h] [xbp-50h]
  size_t v156; // [xsp+70h] [xbp-50h]
  size_t v157; // [xsp+70h] [xbp-50h]
  size_t v158; // [xsp+70h] [xbp-50h]
  size_t v159; // [xsp+70h] [xbp-50h]
  unsigned __int64 v160; // [xsp+78h] [xbp-48h]
  unsigned __int64 v161; // [xsp+78h] [xbp-48h]
  unsigned __int64 v162; // [xsp+78h] [xbp-48h]
  unsigned __int64 v163; // [xsp+78h] [xbp-48h]
  unsigned __int64 v164; // [xsp+78h] [xbp-48h]
  unsigned __int64 v165; // [xsp+78h] [xbp-48h]
  unsigned __int64 v166; // [xsp+78h] [xbp-48h]
  unsigned __int64 v167; // [xsp+78h] [xbp-48h]
  _BYTE v168[3]; // [xsp+80h] [xbp-40h] BYREF
  _BYTE v169[5]; // [xsp+83h] [xbp-3Dh] BYREF
  _BYTE v170[10]; // [xsp+88h] [xbp-38h] BYREF
  _BYTE v171[6]; // [xsp+92h] [xbp-2Eh] BYREF
  _BYTE v172[10]; // [xsp+98h] [xbp-28h] BYREF
  _BYTE v173[6]; // [xsp+A2h] [xbp-1Eh] BYREF
  _BYTE v174[3]; // [xsp+A8h] [xbp-18h] BYREF
  _BYTE v175[2]; // [xsp+ABh] [xbp-15h] BYREF
  _BYTE v176[3]; // [xsp+ADh] [xbp-13h] BYREF
  _BYTE v177[14]; // [xsp+B2h] [xbp-Eh] BYREF

  v4 = sub_48E4D8(v174, (unsigned __int64)v177, *(_QWORD *)a2 + 1LL);
  v5 = v4 - v174;
  if ( v4 != v174 )
  {
    v119 = *(_QWORD *)(a1 + 8);
    v120 = v5 + v119;
    if ( v119 <= v5 + v119 )
    {
      if ( v119 >= v5 + v119 )
      {
LABEL_110:
        memcpy((void *)(*(_QWORD *)a1 + v119), v174, v5);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v119 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v119 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_110;
      }
      v120 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v121 = *(_QWORD *)(a1 + 8);
    v122 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v120 )
    {
      v122 = (char *)sub_491288(a1, *(void **)a1, v120, 1u);
      *(_QWORD *)a1 = v122;
      v121 = *(_QWORD *)(a1 + 8);
    }
    memset(&v122[v121], 0, v120 - v121);
    *(_QWORD *)(a1 + 8) = v120;
    goto LABEL_110;
  }
LABEL_2:
  v6 = sub_48E4D8(v174, (unsigned __int64)v177, *(_QWORD *)(a2 + 8) + 1LL);
  v7 = v6 - v174;
  if ( v6 == v174 )
    goto LABEL_3;
  v117 = *(_QWORD *)(a1 + 8);
  v118 = v7 + v117;
  if ( v117 > v7 + v117 )
  {
    if ( v117 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v117 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_112;
    }
    v118 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_132:
    v125 = *(_QWORD *)(a1 + 8);
    v126 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v118 )
    {
      v126 = (char *)sub_491288(a1, *(void **)a1, v118, 1u);
      *(_QWORD *)a1 = v126;
      v125 = *(_QWORD *)(a1 + 8);
    }
    memset(&v126[v125], 0, v118 - v125);
    *(_QWORD *)(a1 + 8) = v118;
    goto LABEL_112;
  }
  if ( v117 < v7 + v117 )
    goto LABEL_132;
LABEL_112:
  memcpy((void *)(*(_QWORD *)a1 + v117), v174, v7);
LABEL_3:
  v8 = sub_48E4D8(v174, (unsigned __int64)v177, *(_QWORD *)(a2 + 16) + 1LL);
  v9 = v8 - v174;
  if ( v8 == v174 )
    goto LABEL_4;
  v115 = *(_QWORD *)(a1 + 8);
  v116 = v9 + v115;
  if ( v115 > v9 + v115 )
  {
    if ( v115 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v115 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_114;
    }
    v116 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_136:
    v127 = *(_QWORD *)(a1 + 8);
    v128 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v116 )
    {
      v128 = (char *)sub_491288(a1, *(void **)a1, v116, 1u);
      *(_QWORD *)a1 = v128;
      v127 = *(_QWORD *)(a1 + 8);
    }
    memset(&v128[v127], 0, v116 - v127);
    *(_QWORD *)(a1 + 8) = v116;
    goto LABEL_114;
  }
  if ( v115 < v9 + v115 )
    goto LABEL_136;
LABEL_114:
  memcpy((void *)(*(_QWORD *)a1 + v115), v174, v9);
LABEL_4:
  v10 = sub_48E208(v174, (unsigned __int64)v175, *(_WORD *)(a2 + 24));
  v11 = v10 - v174;
  if ( v10 == v174 )
    goto LABEL_5;
  v113 = *(_QWORD *)(a1 + 8);
  v114 = v11 + v113;
  if ( v113 > v11 + v113 )
  {
    if ( v113 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v113 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_116;
    }
    v114 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_144:
    v131 = *(_QWORD *)(a1 + 8);
    v132 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v114 )
    {
      v132 = (char *)sub_491288(a1, *(void **)a1, v114, 1u);
      *(_QWORD *)a1 = v132;
      v131 = *(_QWORD *)(a1 + 8);
    }
    memset(&v132[v131], 0, v114 - v131);
    *(_QWORD *)(a1 + 8) = v114;
    goto LABEL_116;
  }
  if ( v113 < v11 + v113 )
    goto LABEL_144;
LABEL_116:
  memcpy((void *)(*(_QWORD *)a1 + v113), v174, v11);
LABEL_5:
  v12 = sub_48E208(v174, (unsigned __int64)v175, *(_WORD *)(a2 + 26));
  v13 = v12 - v174;
  if ( v12 == v174 )
    goto LABEL_6;
  v111 = *(_QWORD *)(a1 + 8);
  v112 = v13 + v111;
  if ( v111 > v13 + v111 )
  {
    if ( v111 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v111 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_118;
    }
    v112 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_140:
    v129 = *(_QWORD *)(a1 + 8);
    v130 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v112 )
    {
      v130 = (char *)sub_491288(a1, *(void **)a1, v112, 1u);
      *(_QWORD *)a1 = v130;
      v129 = *(_QWORD *)(a1 + 8);
    }
    memset(&v130[v129], 0, v112 - v129);
    *(_QWORD *)(a1 + 8) = v112;
    goto LABEL_118;
  }
  if ( v111 < v13 + v111 )
    goto LABEL_140;
LABEL_118:
  memcpy((void *)(*(_QWORD *)a1 + v111), v174, v13);
LABEL_6:
  v14 = sub_48E2D8(v174, (unsigned __int64)v176, *(_DWORD *)(a2 + 28));
  v15 = v14 - v174;
  if ( v14 == v174 )
    goto LABEL_7;
  v109 = *(_QWORD *)(a1 + 8);
  v110 = v15 + v109;
  if ( v109 > v15 + v109 )
  {
    if ( v109 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v109 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_122;
    }
    v110 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_128:
    v123 = *(_QWORD *)(a1 + 8);
    v124 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v110 )
    {
      v124 = (char *)sub_491288(a1, *(void **)a1, v110, 1u);
      *(_QWORD *)a1 = v124;
      v123 = *(_QWORD *)(a1 + 8);
    }
    memset(&v124[v123], 0, v110 - v123);
    *(_QWORD *)(a1 + 8) = v110;
    goto LABEL_122;
  }
  if ( v109 < v15 + v109 )
    goto LABEL_128;
LABEL_122:
  memcpy((void *)(*(_QWORD *)a1 + v109), v174, v15);
LABEL_7:
  v16 = *(_BYTE **)a1;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_BYTE *)(a2 + 32);
  if ( (unsigned __int64)(v17 + 1) > *(_QWORD *)(a1 + 16) )
  {
    v16 = sub_491288(a1, *(void **)a1, v17 + 1, 1u);
    v17 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v16;
  }
  v16[v17] = v18;
  v20 = *(_QWORD *)(a1 + 8);
  v19 = *(_QWORD *)(a1 + 16);
  v21 = v20 + 1;
  *(_QWORD *)(a1 + 8) = v20 + 1;
  v22 = v20 + 2;
  v23 = *(_BYTE *)(a2 + 33);
  if ( v22 > v19 )
  {
    v24 = sub_491288(a1, *(void **)a1, v22, 1u);
    *(_QWORD *)a1 = v24;
    v21 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v24 = *(_BYTE **)a1;
  }
  v24[v21] = v23;
  ++*(_QWORD *)(a1 + 8);
  v25 = sub_48E208(v174, (unsigned __int64)v175, *(_WORD *)(a2 + 34));
  v26 = v25 - v174;
  if ( v25 == v174 )
    goto LABEL_12;
  v107 = *(_QWORD *)(a1 + 8);
  v108 = v26 + v107;
  if ( v107 > v26 + v107 )
  {
    if ( v107 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v107 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_120;
    }
    v108 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_148:
    v133 = *(_QWORD *)(a1 + 8);
    v134 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v108 )
    {
      v134 = (char *)sub_491288(a1, *(void **)a1, v108, 1u);
      *(_QWORD *)a1 = v134;
      v133 = *(_QWORD *)(a1 + 8);
    }
    memset(&v134[v133], 0, v108 - v133);
    *(_QWORD *)(a1 + 8) = v108;
    goto LABEL_120;
  }
  if ( v107 < v26 + v107 )
    goto LABEL_148;
LABEL_120:
  memcpy((void *)(*(_QWORD *)a1 + v107), v174, v26);
LABEL_12:
  v27 = (char *)(a2 + 41);
  v28 = (char *)(a2 + 361);
  v29 = *(_QWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      v74 = *v27;
      v75 = *(_BYTE **)a1;
      if ( (unsigned __int64)(v29 + 1) > *(_QWORD *)(a1 + 16) )
      {
        v136 = *v27;
        v75 = sub_491288(a1, *(void **)a1, v29 + 1, 1u);
        *(_QWORD *)a1 = v75;
        v74 = v136;
        v29 = *(_QWORD *)(a1 + 8);
      }
      v75[v29] = v74;
      v77 = *(_QWORD *)(a1 + 8);
      v76 = *(_QWORD *)(a1 + 16);
      v78 = v77 + 1;
      *(_QWORD *)(a1 + 8) = v77 + 1;
      v79 = v77 + 2;
      if ( v79 <= v76 )
      {
        *(_BYTE *)(*(_QWORD *)a1 + v78) = v27[1];
        v31 = *(_QWORD *)(a1 + 8);
        v30 = *(_QWORD *)(a1 + 16);
        v32 = v31 + 1;
        *(_QWORD *)(a1 + 8) = v31 + 1;
        v33 = v31 + 2;
        v34 = v27[2];
        if ( v33 <= v30 )
          goto LABEL_14;
      }
      else
      {
        v137 = v27[1];
        v80 = sub_491288(a1, *(void **)a1, v79, 1u);
        *(_QWORD *)a1 = v80;
        v80[*(_QWORD *)(a1 + 8)] = v137;
        v82 = *(_QWORD *)(a1 + 8);
        v81 = *(_QWORD *)(a1 + 16);
        v32 = v82 + 1;
        *(_QWORD *)(a1 + 8) = v82 + 1;
        v33 = v82 + 2;
        v34 = v27[2];
        if ( v33 <= v81 )
        {
LABEL_14:
          *(_BYTE *)(*(_QWORD *)a1 + v32) = v34;
          v36 = *(_QWORD *)(a1 + 8);
          v35 = *(_QWORD *)(a1 + 16);
          v37 = v36 + 1;
          *(_QWORD *)(a1 + 8) = v36 + 1;
          v38 = v36 + 2;
          v39 = v27[3];
          if ( v38 <= v35 )
            goto LABEL_15;
          goto LABEL_34;
        }
      }
      v138 = v34;
      v83 = sub_491288(a1, *(void **)a1, v33, 1u);
      *(_QWORD *)a1 = v83;
      v83[*(_QWORD *)(a1 + 8)] = v138;
      v85 = *(_QWORD *)(a1 + 8);
      v84 = *(_QWORD *)(a1 + 16);
      v37 = v85 + 1;
      *(_QWORD *)(a1 + 8) = v85 + 1;
      v38 = v85 + 2;
      v39 = v27[3];
      if ( v38 <= v84 )
      {
LABEL_15:
        *(_BYTE *)(*(_QWORD *)a1 + v37) = v39;
        v41 = *(_QWORD *)(a1 + 8);
        v40 = *(_QWORD *)(a1 + 16);
        v42 = v41 + 1;
        *(_QWORD *)(a1 + 8) = v41 + 1;
        v43 = v41 + 2;
        v44 = v27[4];
        if ( v43 <= v40 )
          goto LABEL_16;
        goto LABEL_35;
      }
LABEL_34:
      v139 = v39;
      v86 = sub_491288(a1, *(void **)a1, v38, 1u);
      *(_QWORD *)a1 = v86;
      v86[*(_QWORD *)(a1 + 8)] = v139;
      v88 = *(_QWORD *)(a1 + 8);
      v87 = *(_QWORD *)(a1 + 16);
      v42 = v88 + 1;
      *(_QWORD *)(a1 + 8) = v88 + 1;
      v43 = v88 + 2;
      v44 = v27[4];
      if ( v43 <= v87 )
      {
LABEL_16:
        v45 = *(_BYTE **)a1;
        goto LABEL_17;
      }
LABEL_35:
      v140 = v44;
      v45 = sub_491288(a1, *(void **)a1, v43, 1u);
      *(_QWORD *)a1 = v45;
      v44 = v140;
      v42 = *(_QWORD *)(a1 + 8);
LABEL_17:
      v45[v42] = v44;
      ++*(_QWORD *)(a1 + 8);
      v46 = sub_48E208(v168, (unsigned __int64)v169, *(_WORD *)(v27 + 5));
      v47 = v46 - v168;
      if ( v46 == v168 )
        goto LABEL_18;
      v97 = *(_QWORD *)(a1 + 8);
      v98 = v47 + v97;
      if ( v97 <= v47 + v97 )
      {
        if ( v97 < v47 + v97 )
          goto LABEL_61;
      }
      else
      {
        if ( v97 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v98 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_61:
          v99 = *(_QWORD *)(a1 + 8);
          v100 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v98 )
          {
            v144 = v98;
            v152 = v47;
            v160 = *(_QWORD *)(a1 + 8);
            v100 = (char *)sub_491288(a1, *(void **)a1, v98, 1u);
            *(_QWORD *)a1 = v100;
            v99 = *(_QWORD *)(a1 + 8);
            v98 = v144;
            v47 = v152;
            v97 = v160;
          }
          v145 = v98;
          v153 = v47;
          v161 = v97;
          memset(&v100[v99], 0, v98 - v99);
          v47 = v153;
          *(_QWORD *)(a1 + 8) = v145;
          v97 = v161;
          goto LABEL_59;
        }
        if ( (v97 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_59:
      memcpy((void *)(*(_QWORD *)a1 + v97), v168, v47);
LABEL_18:
      v48 = sub_48E4D8(v174, (unsigned __int64)v177, *(_QWORD *)(v27 + 7) + 1LL);
      v49 = v48 - v174;
      if ( v48 == v174 )
        goto LABEL_19;
      v95 = *(_QWORD *)(a1 + 8);
      v96 = v49 + v95;
      if ( v95 <= v49 + v95 )
      {
        if ( v95 < v49 + v95 )
          goto LABEL_65;
      }
      else
      {
        if ( v95 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v96 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_65:
          v101 = *(_QWORD *)(a1 + 8);
          v102 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v96 )
          {
            v146 = v96;
            v154 = v49;
            v162 = *(_QWORD *)(a1 + 8);
            v102 = (char *)sub_491288(a1, *(void **)a1, v96, 1u);
            *(_QWORD *)a1 = v102;
            v101 = *(_QWORD *)(a1 + 8);
            v96 = v146;
            v49 = v154;
            v95 = v162;
          }
          v147 = v96;
          v155 = v49;
          v163 = v95;
          memset(&v102[v101], 0, v96 - v101);
          v49 = v155;
          *(_QWORD *)(a1 + 8) = v147;
          v95 = v163;
          goto LABEL_54;
        }
        if ( (v95 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_54:
      memcpy((void *)(*(_QWORD *)a1 + v95), v174, v49);
LABEL_19:
      v50 = sub_48E4D8(v172, (unsigned __int64)v173, *(_QWORD *)(v27 + 15) + 1LL);
      v51 = v50 - v172;
      if ( v50 == v172 )
        goto LABEL_20;
      v93 = *(_QWORD *)(a1 + 8);
      v94 = v51 + v93;
      if ( v93 <= v51 + v93 )
      {
        if ( v93 < v51 + v93 )
          goto LABEL_69;
      }
      else
      {
        if ( v93 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v94 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_69:
          v103 = *(_QWORD *)(a1 + 8);
          v104 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v94 )
          {
            v148 = v94;
            v156 = v51;
            v164 = *(_QWORD *)(a1 + 8);
            v104 = (char *)sub_491288(a1, *(void **)a1, v94, 1u);
            *(_QWORD *)a1 = v104;
            v103 = *(_QWORD *)(a1 + 8);
            v94 = v148;
            v51 = v156;
            v93 = v164;
          }
          v149 = v94;
          v157 = v51;
          v165 = v93;
          memset(&v104[v103], 0, v94 - v103);
          v51 = v157;
          *(_QWORD *)(a1 + 8) = v149;
          v93 = v165;
          goto LABEL_49;
        }
        if ( (v93 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_49:
      memcpy((void *)(*(_QWORD *)a1 + v93), v172, v51);
LABEL_20:
      v52 = sub_48E4D8(v170, (unsigned __int64)v171, *(_QWORD *)(v27 + 23) + 1LL);
      v53 = v52 - v170;
      if ( v52 == v170 )
        goto LABEL_21;
      v91 = *(_QWORD *)(a1 + 8);
      v92 = v53 + v91;
      if ( v91 <= v53 + v91 )
      {
        if ( v91 < v53 + v91 )
          goto LABEL_73;
      }
      else
      {
        if ( v91 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v92 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_73:
          v105 = *(_QWORD *)(a1 + 8);
          v106 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v92 )
          {
            v150 = v92;
            v158 = v53;
            v166 = *(_QWORD *)(a1 + 8);
            v106 = (char *)sub_491288(a1, *(void **)a1, v92, 1u);
            *(_QWORD *)a1 = v106;
            v105 = *(_QWORD *)(a1 + 8);
            v92 = v150;
            v53 = v158;
            v91 = v166;
          }
          v151 = v92;
          v159 = v53;
          v167 = v91;
          memset(&v106[v105], 0, v92 - v105);
          v53 = v159;
          *(_QWORD *)(a1 + 8) = v151;
          v91 = v167;
          goto LABEL_44;
        }
        if ( (v91 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      }
LABEL_44:
      memcpy((void *)(*(_QWORD *)a1 + v91), v170, v53);
LABEL_21:
      v54 = *(_BYTE **)a1;
      v55 = *(_QWORD *)(a1 + 8);
      v56 = v27[31];
      if ( (unsigned __int64)(v55 + 1) > *(_QWORD *)(a1 + 16) )
      {
        v135 = v27[31];
        v54 = sub_491288(a1, *(void **)a1, v55 + 1, 1u);
        *(_QWORD *)a1 = v54;
        v56 = v135;
        v55 = *(_QWORD *)(a1 + 8);
      }
      v54[v55] = v56;
      v58 = *(_QWORD *)(a1 + 8);
      v57 = *(_QWORD *)(a1 + 16);
      v59 = v58 + 1;
      *(_QWORD *)(a1 + 8) = v58 + 1;
      v60 = v58 + 2;
      v61 = v27[32];
      if ( v60 > v57 )
      {
        v143 = v27[32];
        v62 = sub_491288(a1, *(void **)a1, v60, 1u);
        *(_QWORD *)a1 = v62;
        v61 = v143;
        v59 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v62 = *(_BYTE **)a1;
      }
      v62[v59] = v61;
      v64 = *(_QWORD *)(a1 + 8);
      v63 = *(_QWORD *)(a1 + 16);
      v65 = v64 + 1;
      *(_QWORD *)(a1 + 8) = v64 + 1;
      v66 = v64 + 2;
      v67 = v27[33];
      if ( v66 > v63 )
      {
        v142 = v27[33];
        v68 = sub_491288(a1, *(void **)a1, v66, 1u);
        *(_QWORD *)a1 = v68;
        v67 = v142;
        v65 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v68 = *(_BYTE **)a1;
      }
      v68[v65] = v67;
      v70 = *(_QWORD *)(a1 + 8);
      v69 = *(_QWORD *)(a1 + 16);
      v71 = v70 + 1;
      *(_QWORD *)(a1 + 8) = v70 + 1;
      v72 = v70 + 2;
      v73 = v27[34];
      if ( v72 > v69 )
        break;
      v27 += 40;
      *(_BYTE *)(*(_QWORD *)a1 + v71) = v73;
      v29 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v29;
      if ( v28 == v27 )
        return *(_QWORD *)&v177[6] ^ _stack_chk_guard;
    }
    v141 = v27[34];
    v27 += 40;
    v89 = sub_491288(a1, *(void **)a1, v72, 1u);
    *(_QWORD *)a1 = v89;
    v89[*(_QWORD *)(a1 + 8)] = v141;
    v29 = *(_QWORD *)(a1 + 8) + 1LL;
    *(_QWORD *)(a1 + 8) = v29;
  }
  while ( v28 != v27 );
  return *(_QWORD *)&v177[6] ^ _stack_chk_guard;
}
