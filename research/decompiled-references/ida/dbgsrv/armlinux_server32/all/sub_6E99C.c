/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E99C
// Address: 0x0006E99C

//----- (0006E99C) --------------------------------------------------------
_BYTE *__fastcall sub_6E99C(int a1, _DWORD *a2)
{
  _DWORD *v3; // r5
  __int64 v4; // r0
  __int64 v5; // r2
  _BYTE *v6; // r0
  size_t v7; // r7
  unsigned int v8; // r0
  __int64 v9; // r2
  _BYTE *v10; // r0
  size_t v11; // r7
  unsigned int v12; // r0
  __int64 v13; // r2
  _BYTE *v14; // r0
  size_t v15; // r7
  _BYTE *v16; // r0
  size_t v17; // r8
  _BYTE *v18; // r0
  size_t v19; // r8
  _BYTE *v20; // r0
  size_t v21; // r8
  int v22; // r3
  char v23; // r8
  void *v24; // r1
  void *v25; // r0
  __int64 v26; // kr08_8
  int v27; // r3
  char v28; // r8
  _BYTE *v29; // r0
  _BYTE *v30; // r0
  size_t v31; // r7
  int v32; // r3
  _BYTE *v33; // r0
  __int64 v34; // kr10_8
  int v35; // r3
  char v36; // r9
  _BYTE *v37; // r0
  __int64 v38; // kr18_8
  int v39; // r3
  char v40; // r9
  _BYTE *v41; // r0
  __int64 v42; // kr20_8
  int v43; // r3
  char v44; // r9
  _BYTE *v45; // r0
  _BYTE *v46; // r0
  size_t v47; // r9
  unsigned int v48; // r0
  __int64 v49; // r2
  _BYTE *v50; // r0
  size_t v51; // r9
  unsigned int v52; // r0
  __int64 v53; // r2
  size_t v54; // r9
  unsigned int v55; // r0
  __int64 v56; // r2
  _BYTE *v57; // r0
  size_t v58; // r9
  int v59; // r3
  char v60; // r9
  void *v61; // r1
  void *v62; // r0
  __int64 v63; // kr30_8
  int v64; // r3
  char v65; // r9
  _BYTE *v66; // r0
  __int64 v67; // kr38_8
  int v68; // r3
  char v69; // r9
  _BYTE *v70; // r0
  __int64 v71; // kr40_8
  int v72; // r3
  char v73; // r9
  _BYTE *result; // r0
  char v75; // r9
  void *v76; // r1
  void *v77; // r0
  __int64 v78; // kr48_8
  int v79; // r3
  char v80; // r9
  int v81; // r10
  unsigned int v82; // r11
  int v83; // r10
  unsigned int v84; // r11
  int v85; // r10
  unsigned int v86; // r11
  int v87; // r10
  unsigned int v88; // r11
  char *v89; // r0
  int v90; // r2
  char *v91; // r0
  int v92; // r2
  char *v93; // r0
  int v94; // r2
  char *v95; // r0
  int v96; // r2
  int v97; // r8
  unsigned int v98; // r9
  int v99; // r9
  unsigned int v100; // r10
  int v101; // r9
  unsigned int v102; // r10
  int v103; // r9
  unsigned int v104; // r10
  int v105; // r8
  unsigned int v106; // r9
  int v107; // r8
  unsigned int v108; // r9
  int v109; // r8
  unsigned int v110; // r9
  char *v111; // r0
  int v112; // r2
  char *v113; // r0
  int v114; // r2
  char *v115; // r0
  int v116; // r2
  char *v117; // r0
  int v118; // r2
  char *v119; // r0
  int v120; // r2
  char *v121; // r0
  int v122; // r2
  char *v123; // r0
  int v124; // r2
  _DWORD *v125; // [sp+8h] [bp-4Ch]
  _BYTE v126[3]; // [sp+24h] [bp-30h] BYREF
  char v127; // [sp+27h] [bp-2Dh] BYREF
  _BYTE v128[10]; // [sp+28h] [bp-2Ch] BYREF
  char v129[2]; // [sp+32h] [bp-22h] BYREF
  _BYTE v130[10]; // [sp+34h] [bp-20h] BYREF
  char v131[2]; // [sp+3Eh] [bp-16h] BYREF
  _BYTE v132[3]; // [sp+40h] [bp-14h] BYREF
  _BYTE v133[2]; // [sp+43h] [bp-11h] BYREF
  char v134[5]; // [sp+45h] [bp-Fh] BYREF
  _BYTE v135[2]; // [sp+4Ah] [bp-Ah] BYREF

  LODWORD(v4) = *a2;
  v3 = a2;
  HIDWORD(v4) = 0;
  if ( (_DWORD)v4 == -1 )
    v5 = 0;
  else
    v5 = v4 + 1;
  v6 = sub_76264(v132, (unsigned int)v135, v5, HIDWORD(v5));
  v7 = v6 - v132;
  if ( v6 == v132 )
    goto LABEL_4;
  v109 = *(_DWORD *)(a1 + 4);
  v110 = v7 + v109;
  if ( __CFADD__(v7, v109) )
  {
    if ( (unsigned int)v109 > 0x7FFFFFFE )
    {
      if ( v109 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_154;
    }
    v110 = 0x7FFFFFFF;
    goto LABEL_168;
  }
  if ( v109 < v110 )
  {
LABEL_168:
    v111 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v110 )
    {
      v111 = (char *)sub_78018(a1, *(void **)a1, v110, 1u);
      v112 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v111;
    }
    else
    {
      v112 = *(_DWORD *)(a1 + 4);
    }
    memset(&v111[v112], 0, v110 - v112);
    *(_DWORD *)(a1 + 4) = v110;
  }
LABEL_154:
  memcpy((void *)(*(_DWORD *)a1 + v109), v132, v7);
LABEL_4:
  v8 = v3[1];
  if ( v8 == -1 )
    v9 = 0;
  else
    v9 = v8 + 1LL;
  v10 = sub_76264(v132, (unsigned int)v135, v9, HIDWORD(v9));
  v11 = v10 - v132;
  if ( v10 != v132 )
  {
    v107 = *(_DWORD *)(a1 + 4);
    v108 = v11 + v107;
    if ( __CFADD__(v11, v107) )
    {
      if ( (unsigned int)v107 > 0x7FFFFFFE )
      {
        if ( v107 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_156;
      }
      v108 = 0x7FFFFFFF;
    }
    else if ( v107 >= v108 )
    {
LABEL_156:
      memcpy((void *)(*(_DWORD *)a1 + v107), v132, v11);
      goto LABEL_7;
    }
    v115 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v108 )
    {
      v115 = (char *)sub_78018(a1, *(void **)a1, v108, 1u);
      v116 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v115;
    }
    else
    {
      v116 = *(_DWORD *)(a1 + 4);
    }
    memset(&v115[v116], 0, v108 - v116);
    *(_DWORD *)(a1 + 4) = v108;
    goto LABEL_156;
  }
LABEL_7:
  v12 = v3[2];
  if ( v12 == -1 )
    v13 = 0;
  else
    v13 = v12 + 1LL;
  v14 = sub_76264(v132, (unsigned int)v135, v13, HIDWORD(v13));
  v15 = v14 - v132;
  if ( v14 != v132 )
  {
    v105 = *(_DWORD *)(a1 + 4);
    v106 = v15 + v105;
    if ( __CFADD__(v15, v105) )
    {
      if ( (unsigned int)v105 > 0x7FFFFFFE )
      {
        if ( v105 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_158;
      }
      v106 = 0x7FFFFFFF;
    }
    else if ( v105 >= v106 )
    {
LABEL_158:
      memcpy((void *)(*(_DWORD *)a1 + v105), v132, v15);
      goto LABEL_10;
    }
    v117 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v106 )
    {
      v117 = (char *)sub_78018(a1, *(void **)a1, v106, 1u);
      v118 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v117;
    }
    else
    {
      v118 = *(_DWORD *)(a1 + 4);
    }
    memset(&v117[v118], 0, v106 - v118);
    *(_DWORD *)(a1 + 4) = v106;
    goto LABEL_158;
  }
LABEL_10:
  v16 = sub_76098(v132, (unsigned int)v133, *((unsigned __int16 *)v3 + 6));
  v17 = v16 - v132;
  if ( v16 == v132 )
    goto LABEL_11;
  v103 = *(_DWORD *)(a1 + 4);
  v104 = v17 + v103;
  if ( __CFADD__(v17, v103) )
  {
    if ( (unsigned int)v103 > 0x7FFFFFFE )
    {
      if ( v103 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_160;
    }
    v104 = 0x7FFFFFFF;
    goto LABEL_193;
  }
  if ( v103 < v104 )
  {
LABEL_193:
    v121 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v104 )
    {
      v121 = (char *)sub_78018(a1, *(void **)a1, v104, 1u);
      v122 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v121;
    }
    else
    {
      v122 = *(_DWORD *)(a1 + 4);
    }
    memset(&v121[v122], 0, v104 - v122);
    *(_DWORD *)(a1 + 4) = v104;
  }
LABEL_160:
  memcpy((void *)(*(_DWORD *)a1 + v103), v132, v17);
LABEL_11:
  v18 = sub_76098(v132, (unsigned int)v133, *((unsigned __int16 *)v3 + 7));
  v19 = v18 - v132;
  if ( v18 == v132 )
    goto LABEL_12;
  v101 = *(_DWORD *)(a1 + 4);
  v102 = v19 + v101;
  if ( __CFADD__(v19, v101) )
  {
    if ( (unsigned int)v101 > 0x7FFFFFFE )
    {
      if ( v101 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_162;
    }
    v102 = 0x7FFFFFFF;
    goto LABEL_188;
  }
  if ( v101 < v102 )
  {
LABEL_188:
    v119 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v102 )
    {
      v119 = (char *)sub_78018(a1, *(void **)a1, v102, 1u);
      v120 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v119;
    }
    else
    {
      v120 = *(_DWORD *)(a1 + 4);
    }
    memset(&v119[v120], 0, v102 - v120);
    *(_DWORD *)(a1 + 4) = v102;
  }
LABEL_162:
  memcpy((void *)(*(_DWORD *)a1 + v101), v132, v19);
LABEL_12:
  v20 = sub_76118(v132, (unsigned int)v134, v3[4]);
  v21 = v20 - v132;
  if ( v20 == v132 )
    goto LABEL_13;
  v99 = *(_DWORD *)(a1 + 4);
  v100 = v21 + v99;
  if ( __CFADD__(v21, v99) )
  {
    if ( (unsigned int)v99 > 0x7FFFFFFE )
    {
      if ( v99 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_166;
    }
    v100 = 0x7FFFFFFF;
    goto LABEL_173;
  }
  if ( v99 < v100 )
  {
LABEL_173:
    v113 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v100 )
    {
      v113 = (char *)sub_78018(a1, *(void **)a1, v100, 1u);
      v114 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v113;
    }
    else
    {
      v114 = *(_DWORD *)(a1 + 4);
    }
    memset(&v113[v114], 0, v100 - v114);
    *(_DWORD *)(a1 + 4) = v100;
  }
LABEL_166:
  memcpy((void *)(*(_DWORD *)a1 + v99), v132, v21);
LABEL_13:
  v22 = *(_DWORD *)(a1 + 4);
  v23 = *((_BYTE *)v3 + 20);
  v24 = *(void **)a1;
  if ( (unsigned int)(v22 + 1) > *(_DWORD *)(a1 + 8) )
  {
    v25 = sub_78018(a1, v24, v22 + 1, 1u);
    v22 = *(_DWORD *)(a1 + 4);
    v24 = v25;
    *(_DWORD *)a1 = v25;
  }
  *((_BYTE *)v24 + v22) = v23;
  v26 = *(_QWORD *)(a1 + 4);
  v27 = v26 + 1;
  *(_DWORD *)(a1 + 4) = v26 + 1;
  v28 = *((_BYTE *)v3 + 21);
  if ( (unsigned int)(v26 + 2) > HIDWORD(v26) )
  {
    v29 = sub_78018(a1, *(void **)a1, v26 + 2, 1u);
    v27 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = v29;
  }
  else
  {
    v29 = *(_BYTE **)a1;
  }
  v29[v27] = v28;
  ++*(_DWORD *)(a1 + 4);
  v30 = sub_76098(v132, (unsigned int)v133, *((unsigned __int16 *)v3 + 11));
  v31 = v30 - v132;
  if ( v30 == v132 )
    goto LABEL_18;
  v97 = *(_DWORD *)(a1 + 4);
  v98 = v31 + v97;
  if ( __CFADD__(v31, v97) )
  {
    if ( (unsigned int)v97 > 0x7FFFFFFE )
    {
      if ( v97 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_164;
    }
    v98 = 0x7FFFFFFF;
    goto LABEL_198;
  }
  if ( v97 < v98 )
  {
LABEL_198:
    v123 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v98 )
    {
      v123 = (char *)sub_78018(a1, *(void **)a1, v98, 1u);
      v124 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v123;
    }
    else
    {
      v124 = *(_DWORD *)(a1 + 4);
    }
    memset(&v123[v124], 0, v98 - v124);
    *(_DWORD *)(a1 + 4) = v98;
  }
LABEL_164:
  memcpy((void *)(*(_DWORD *)a1 + v97), v132, v31);
LABEL_18:
  v32 = *(_DWORD *)(a1 + 4);
  v125 = v3 + 48;
  do
  {
    v75 = *((_BYTE *)v3 + 25);
    v76 = *(void **)a1;
    if ( (unsigned int)(v32 + 1) > *(_DWORD *)(a1 + 8) )
    {
      v77 = sub_78018(a1, v76, v32 + 1, 1u);
      v32 = *(_DWORD *)(a1 + 4);
      v76 = v77;
      *(_DWORD *)a1 = v77;
    }
    *((_BYTE *)v76 + v32) = v75;
    v78 = *(_QWORD *)(a1 + 4);
    v79 = v78 + 1;
    *(_DWORD *)(a1 + 4) = v78 + 1;
    v80 = *((_BYTE *)v3 + 26);
    if ( (unsigned int)(v78 + 2) <= HIDWORD(v78) )
    {
      v33 = *(_BYTE **)a1;
    }
    else
    {
      v33 = sub_78018(a1, *(void **)a1, v78 + 2, 1u);
      v79 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v33;
    }
    v33[v79] = v80;
    v34 = *(_QWORD *)(a1 + 4);
    v35 = v34 + 1;
    *(_DWORD *)(a1 + 4) = v34 + 1;
    v36 = *((_BYTE *)v3 + 27);
    if ( (unsigned int)(v34 + 2) > HIDWORD(v34) )
    {
      v37 = sub_78018(a1, *(void **)a1, v34 + 2, 1u);
      v35 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v37;
    }
    else
    {
      v37 = *(_BYTE **)a1;
    }
    v37[v35] = v36;
    v38 = *(_QWORD *)(a1 + 4);
    v39 = v38 + 1;
    *(_DWORD *)(a1 + 4) = v38 + 1;
    v40 = *((_BYTE *)v3 + 28);
    if ( (unsigned int)(v38 + 2) > HIDWORD(v38) )
    {
      v41 = sub_78018(a1, *(void **)a1, v38 + 2, 1u);
      v39 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v41;
    }
    else
    {
      v41 = *(_BYTE **)a1;
    }
    v41[v39] = v40;
    v42 = *(_QWORD *)(a1 + 4);
    v43 = v42 + 1;
    *(_DWORD *)(a1 + 4) = v42 + 1;
    v44 = *((_BYTE *)v3 + 29);
    if ( (unsigned int)(v42 + 2) > HIDWORD(v42) )
    {
      v45 = sub_78018(a1, *(void **)a1, v42 + 2, 1u);
      v43 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v45;
    }
    else
    {
      v45 = *(_BYTE **)a1;
    }
    v45[v43] = v44;
    ++*(_DWORD *)(a1 + 4);
    v46 = sub_76098(v126, (unsigned int)&v127, *((unsigned __int16 *)v3 + 15));
    v47 = v46 - v126;
    if ( v46 != v126 )
    {
      v87 = *(_DWORD *)(a1 + 4);
      v88 = v47 + v87;
      if ( __CFADD__(v47, v87) )
      {
        if ( (unsigned int)v87 > 0x7FFFFFFE )
        {
          if ( v87 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_78;
        }
        v88 = 0x7FFFFFFF;
      }
      else if ( v87 >= v88 )
      {
LABEL_78:
        memcpy((void *)(*(_DWORD *)a1 + v87), v126, v47);
        goto LABEL_27;
      }
      v91 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v88 )
      {
        v91 = (char *)sub_78018(a1, *(void **)a1, v88, 1u);
        v92 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v91;
      }
      else
      {
        v92 = *(_DWORD *)(a1 + 4);
      }
      memset(&v91[v92], 0, v88 - v92);
      *(_DWORD *)(a1 + 4) = v88;
      goto LABEL_78;
    }
LABEL_27:
    v48 = v3[8];
    if ( v48 == -1 )
      v49 = 0;
    else
      v49 = v48 + 1LL;
    v50 = sub_76264(v128, (unsigned int)v129, v49, HIDWORD(v49));
    v51 = v50 - v128;
    if ( v50 != v128 )
    {
      v85 = *(_DWORD *)(a1 + 4);
      v86 = v51 + v85;
      if ( __CFADD__(v51, v85) )
      {
        if ( (unsigned int)v85 > 0x7FFFFFFE )
        {
          if ( v85 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_69;
        }
        v86 = 0x7FFFFFFF;
      }
      else if ( v85 >= v86 )
      {
LABEL_69:
        memcpy((void *)(*(_DWORD *)a1 + v85), v128, v51);
        goto LABEL_30;
      }
      v95 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v86 )
      {
        v95 = (char *)sub_78018(a1, *(void **)a1, v86, 1u);
        v96 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v95;
      }
      else
      {
        v96 = *(_DWORD *)(a1 + 4);
      }
      memset(&v95[v96], 0, v86 - v96);
      *(_DWORD *)(a1 + 4) = v86;
      goto LABEL_69;
    }
LABEL_30:
    v52 = v3[9];
    if ( v52 == -1 )
      v53 = 0;
    else
      v53 = v52 + 1LL;
    v54 = sub_76264(v130, (unsigned int)v131, v53, HIDWORD(v53)) - v130;
    if ( v54 )
    {
      v83 = *(_DWORD *)(a1 + 4);
      v84 = v54 + v83;
      if ( __CFADD__(v54, v83) )
      {
        if ( (unsigned int)v83 > 0x7FFFFFFE )
        {
          if ( v83 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_63;
        }
        v84 = 0x7FFFFFFF;
      }
      else if ( v83 >= v84 )
      {
LABEL_63:
        memcpy((void *)(*(_DWORD *)a1 + v83), v130, v54);
        goto LABEL_33;
      }
      v93 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v84 )
      {
        v93 = (char *)sub_78018(a1, *(void **)a1, v84, 1u);
        v94 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v93;
      }
      else
      {
        v94 = *(_DWORD *)(a1 + 4);
      }
      memset(&v93[v94], 0, v84 - v94);
      *(_DWORD *)(a1 + 4) = v84;
      goto LABEL_63;
    }
LABEL_33:
    v55 = v3[10];
    if ( v55 == -1 )
      v56 = 0;
    else
      v56 = v55 + 1LL;
    v57 = sub_76264(v132, (unsigned int)v135, v56, HIDWORD(v56));
    v58 = v57 - v132;
    if ( v57 != v132 )
    {
      v81 = *(_DWORD *)(a1 + 4);
      v82 = v58 + v81;
      if ( __CFADD__(v58, v81) )
      {
        if ( (unsigned int)v81 > 0x7FFFFFFE )
        {
          if ( v81 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_57;
        }
        v82 = 0x7FFFFFFF;
      }
      else if ( v81 >= v82 )
      {
LABEL_57:
        memcpy((void *)(*(_DWORD *)a1 + v81), v132, v58);
        goto LABEL_36;
      }
      v89 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v82 )
      {
        v89 = (char *)sub_78018(a1, *(void **)a1, v82, 1u);
        v90 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v89;
      }
      else
      {
        v90 = *(_DWORD *)(a1 + 4);
      }
      memset(&v89[v90], 0, v82 - v90);
      *(_DWORD *)(a1 + 4) = v82;
      goto LABEL_57;
    }
LABEL_36:
    v59 = *(_DWORD *)(a1 + 4);
    v60 = *((_BYTE *)v3 + 44);
    v61 = *(void **)a1;
    if ( (unsigned int)(v59 + 1) > *(_DWORD *)(a1 + 8) )
    {
      v62 = sub_78018(a1, v61, v59 + 1, 1u);
      v59 = *(_DWORD *)(a1 + 4);
      v61 = v62;
      *(_DWORD *)a1 = v62;
    }
    *((_BYTE *)v61 + v59) = v60;
    v63 = *(_QWORD *)(a1 + 4);
    v64 = v63 + 1;
    *(_DWORD *)(a1 + 4) = v63 + 1;
    v65 = *((_BYTE *)v3 + 45);
    if ( (unsigned int)(v63 + 2) > HIDWORD(v63) )
    {
      v66 = sub_78018(a1, *(void **)a1, v63 + 2, 1u);
      v64 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v66;
    }
    else
    {
      v66 = *(_BYTE **)a1;
    }
    v66[v64] = v65;
    v67 = *(_QWORD *)(a1 + 4);
    v68 = v67 + 1;
    *(_DWORD *)(a1 + 4) = v67 + 1;
    v69 = *((_BYTE *)v3 + 46);
    if ( (unsigned int)(v67 + 2) > HIDWORD(v67) )
    {
      v70 = sub_78018(a1, *(void **)a1, v67 + 2, 1u);
      v68 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v70;
    }
    else
    {
      v70 = *(_BYTE **)a1;
    }
    v70[v68] = v69;
    v71 = *(_QWORD *)(a1 + 4);
    v72 = v71 + 1;
    *(_DWORD *)(a1 + 4) = v71 + 1;
    v73 = *((_BYTE *)v3 + 47);
    if ( (unsigned int)(v71 + 2) > HIDWORD(v71) )
    {
      result = sub_78018(a1, *(void **)a1, v71 + 2, 1u);
      v72 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = result;
    }
    else
    {
      result = *(_BYTE **)a1;
    }
    v3 += 6;
    result[v72] = v73;
    v32 = *(_DWORD *)(a1 + 4) + 1;
    *(_DWORD *)(a1 + 4) = v32;
  }
  while ( v3 != v125 );
  return result;
}
