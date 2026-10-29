/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18BD0
// Address: 0x00018BD0

//----- (00018BD0) --------------------------------------------------------
void __fastcall sub_18BD0(int a1, unsigned int *a2)
{
  const char *v4; // r0
  int *v5; // r10
  const char *v6; // r6
  const char *v7; // r4
  const char *v8; // r7
  size_t v9; // r9
  size_t v10; // r0
  unsigned int v11; // r6
  size_t v12; // r4
  const char *i; // r7
  unsigned int v14; // r0
  int v15; // r3
  unsigned int v16; // r2
  __int64 v17; // kr00_8
  void *v18; // r9
  char *v19; // r2
  size_t v20; // r9
  char *v21; // r0
  _WORD *v22; // r4
  unsigned int v23; // r3
  int v24; // r6
  char *v25; // r9
  size_t v26; // r7
  void *v27; // r0
  int v28; // r7
  unsigned int v29; // r3
  int v30; // r9
  unsigned int v31; // r6
  void *v32; // r1
  char *v33; // r6
  char *v34; // r7
  unsigned __int8 *v35; // r2
  const char *v36; // r1
  int *v37; // r0
  char *v38; // r2
  int *v39; // r3
  void **v40; // r6
  int v41; // r4
  int *v42; // r3
  void **v43; // r6
  int v44; // r4
  char *v45; // r4
  unsigned __int8 *v46; // r2
  int *v47; // r1
  void **v48; // r7
  int v49; // r6
  char *v50; // r9
  const char *v51; // r0
  size_t v52; // r4
  unsigned int v53; // r10
  _BYTE *v54; // r0
  size_t v55; // r7
  size_t v56; // r7
  int v57; // r4
  int v58; // r9
  __int64 v59; // kr08_8
  int v60; // r6
  unsigned int v61; // r2
  int v62; // r7
  char *v63; // r10
  int v64; // r6
  char *v65; // r4
  int v66; // t1
  int v67; // r3
  int v68; // r6
  int v69; // r9
  __int64 v70; // kr10_8
  int v71; // r4
  unsigned int v72; // r2
  int v73; // r7
  char *v74; // r10
  int v75; // r4
  char *v76; // r6
  int v77; // t1
  unsigned int v78; // r4
  char *v79; // r3
  int v80; // r8
  int v81; // r4
  int v82; // r6
  void *v83; // r0
  char *v84; // r3
  char *v85; // r1
  size_t v86; // r6
  char *v87; // r0
  int v88; // r2
  char *v89; // r0
  int v90; // r2
  unsigned int v91; // [sp+18h] [bp-14D4h]
  int (**v92)(); // [sp+2Ch] [bp-14C0h]
  const char *v93; // [sp+30h] [bp-14BCh]
  _BYTE *v94; // [sp+40h] [bp-14ACh] BYREF
  size_t v95; // [sp+44h] [bp-14A8h]
  int v96; // [sp+48h] [bp-14A4h]
  char *v97; // [sp+4Ch] [bp-14A0h] BYREF
  size_t v98; // [sp+50h] [bp-149Ch]
  int v99; // [sp+54h] [bp-1498h]
  __int64 v100; // [sp+58h] [bp-1494h] BYREF
  void *v101; // [sp+60h] [bp-148Ch]
  size_t v102; // [sp+64h] [bp-1488h]
  size_t v103; // [sp+68h] [bp-1484h]
  void *v104; // [sp+6Ch] [bp-1480h]
  size_t v105; // [sp+70h] [bp-147Ch]
  size_t v106; // [sp+74h] [bp-1478h]
  int v107; // [sp+78h] [bp-1474h] BYREF
  int v108; // [sp+7Ch] [bp-1470h] BYREF
  _DWORD *v109; // [sp+80h] [bp-146Ch]
  int *v110; // [sp+84h] [bp-1468h]
  int *v111; // [sp+88h] [bp-1464h]
  int v112; // [sp+8Ch] [bp-1460h]
  void *v113; // [sp+90h] [bp-145Ch]
  int v114; // [sp+94h] [bp-1458h]
  int v115; // [sp+98h] [bp-1454h]
  void *v116; // [sp+9Ch] [bp-1450h]
  int v117; // [sp+A0h] [bp-144Ch]
  int v118; // [sp+A4h] [bp-1448h]
  int v119; // [sp+A8h] [bp-1444h]
  _UNKNOWN **v120; // [sp+ACh] [bp-1440h] BYREF
  char v121[24]; // [sp+B0h] [bp-143Ch] BYREF
  char *v122; // [sp+4B0h] [bp-103Ch] BYREF
  int v123; // [sp+4B4h] [bp-1038h]
  unsigned int v124; // [sp+4B8h] [bp-1034h]
  int *v125; // [sp+4BCh] [bp-1030h] BYREF
  size_t v126; // [sp+4C0h] [bp-102Ch]
  int v127; // [sp+4C4h] [bp-1028h]
  void *v128; // [sp+4C8h] [bp-1024h] BYREF
  unsigned int v129; // [sp+4CCh] [bp-1020h]
  int v130; // [sp+4D0h] [bp-101Ch]
  char *v131; // [sp+4D4h] [bp-1018h] BYREF
  unsigned int v132; // [sp+4D8h] [bp-1014h]
  int v133; // [sp+4DCh] [bp-1010h]
  unsigned int v134; // [sp+4E0h] [bp-100Ch]
  unsigned __int8 v135[4092]; // [sp+4E4h] [bp-1008h] BYREF

  if ( a2[6] )
    v4 = (const char *)a2[5];
  else
    v4 = (const char *)&dword_8DA5C;
  v93 = sub_7EB20(v4, (unsigned __int8 *)"libpthread");
  if ( v93 )
  {
    v92 = (int (**)())(a1 + 928);
    *(_DWORD *)(a1 + 1140) = *a2;
    sub_1784C((int (**)())a1, (int (**)())(a1 + 928), (int)a2);
  }
  else
  {
    v92 = (int (**)())(a1 + 904);
    sub_1784C((int (**)())a1, (int (**)())(a1 + 904), (int)a2);
  }
  v5 = sub_56FF0();
  if ( a2[3] )
    v6 = (const char *)a2[2];
  else
    v6 = (const char *)&dword_8DA5C;
  if ( a2[18] )
    v7 = (const char *)a2[17];
  else
    v7 = (const char *)&dword_8DA5C;
  v91 = a2[20];
  if ( a2[15] )
    v8 = (const char *)a2[14];
  else
    v8 = (const char *)&dword_8DA5C;
  v122 = nullptr;
  v123 = 0;
  v124 = 0;
  v120 = &off_CF49C;
  v125 = nullptr;
  v126 = 0;
  v127 = 0;
  if ( v6 )
  {
    v9 = strlen(v6);
    v125 = (int *)sub_77EB0((int)&v125, nullptr, v9 + 1, 1u);
    v126 = v9 + 1;
    memmove(v125, v6, v9);
    *((_BYTE *)v125 + v9) = 0;
  }
  v128 = nullptr;
  v129 = 0;
  v130 = 0;
  if ( !v7 )
  {
    v131 = nullptr;
    v132 = 0;
    v133 = 0;
    if ( !v8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v86 = strlen(v7);
  v128 = sub_77EB0((int)&v128, nullptr, v86 + 1, 1u);
  v129 = v86 + 1;
  memmove(v128, v7, v86);
  *((_BYTE *)v128 + v86) = 0;
  v131 = nullptr;
  v132 = 0;
  v133 = 0;
  if ( v8 )
  {
LABEL_15:
    v10 = strlen(v8);
    v11 = v10 + 1;
    v12 = v10;
    v131 = (char *)sub_77EB0((int)&v131, nullptr, v10 + 1, 1u);
    v132 = v11;
    memmove(v131, v8, v12);
    v131[v12] = 0;
  }
LABEL_16:
  v134 = v91;
  v121[0] = 0;
  sub_79524(v135, (unsigned __int8 *)v5, 4096);
  for ( i = sub_793DC((char *)v135, ":", (const char **)&v97); i; i = sub_793DC(nullptr, ":", (const char **)&v97) )
  {
    v100 = 0;
    v101 = nullptr;
    v20 = strlen(i);
    LODWORD(v100) = sub_77EB0((int)&v100, nullptr, v20 + 1, 1u);
    HIDWORD(v100) = v20 + 1;
    memmove((void *)v100, i, v20);
    *(_BYTE *)(v100 + v20) = 0;
    v85 = v122;
    if ( v122 <= (char *)&v100 )
    {
      v14 = v124;
      v15 = v123;
      v16 = v123 + 1;
      if ( &v100 < (__int64 *)&v122[12 * v124] )
      {
        v17 = v100;
        v18 = v101;
        v100 = 0;
        v101 = nullptr;
        if ( v124 < v16 )
        {
          v85 = (char *)sub_77EB0((int)&v122, v122, v16, 0xCu);
          v15 = v123;
          v122 = v85;
        }
        v19 = &v85[12 * v15];
        *(_QWORD *)v19 = v17;
        *((_DWORD *)v19 + 2) = v18;
        ++v123;
        if ( (_DWORD)v100 )
        {
          HIDWORD(v100) = 0;
          sub_77E08((void *)v100);
        }
        continue;
      }
    }
    else
    {
      v15 = v123;
      v14 = v124;
      v16 = v123 + 1;
    }
    if ( v16 > v14 )
    {
      v85 = (char *)sub_77EB0((int)&v122, v122, v16, 0xCu);
      v15 = v123;
      v122 = v85;
    }
    v21 = &v85[12 * v15];
    *(_QWORD *)v21 = v100;
    *((_DWORD *)v21 + 2) = v101;
    ++v123;
  }
  if ( !v123 || v132 <= 3 )
    goto LABEL_59;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  v22 = v131;
  v97 = (char *)sub_77EB0((int)&v97, nullptr, 3u, 1u);
  v98 = 3;
  *(_WORD *)v97 = *v22;
  v97[2] = 0;
  if ( v132 )
  {
    v23 = v132 - 1;
    v24 = v132 - 1;
    if ( v132 - 1 >= 2 )
      v24 = 2;
    v25 = v131;
    v26 = v23 - v24;
    v100 = 0;
    v101 = nullptr;
    if ( v23 != v24 )
    {
      if ( v26 == -1 )
      {
        v27 = nullptr;
      }
      else
      {
        v27 = sub_77EB0((int)&v100, nullptr, v26 + 1, 1u);
        LODWORD(v100) = v27;
      }
      HIDWORD(v100) = v26 + 1;
      memmove(v27, &v25[v24], v26);
      *(_BYTE *)(v100 + v26) = 0;
      if ( HIDWORD(v100) )
      {
        v28 = HIDWORD(v100) - 1;
        v29 = (unsigned int)v101;
        v30 = HIDWORD(v100) + 5;
        v31 = HIDWORD(v100) + 6;
      }
      else
      {
        v28 = 0;
        v29 = (unsigned int)v101;
        v31 = 7;
        v30 = 6;
      }
      v32 = (void *)v100;
      if ( v29 >= v31 )
        goto LABEL_41;
      goto LABEL_148;
    }
  }
  else
  {
    v100 = 0;
    v101 = nullptr;
  }
  v32 = nullptr;
  v31 = 7;
  v28 = 0;
  v30 = 6;
LABEL_148:
  v32 = sub_77EB0((int)&v100, v32, v31, 1u);
  LODWORD(v100) = v32;
LABEL_41:
  HIDWORD(v100) = v31;
  *((_BYTE *)v32 + v30) = 0;
  qmemcpy((void *)(v100 + v28), ".debug", 6);
  if ( 12 * v123 )
  {
    v33 = v122 + 12;
    while ( 1 )
    {
      v34 = v33;
      v35 = *((_DWORD *)v33 - 2) ? *((unsigned __int8 **)v33 - 3) : (unsigned __int8 *)&dword_8DA5C;
      v36 = v98 ? v97 : (const char *)&dword_8DA5C;
      v37 = HIDWORD(v100) ? (int *)v100 : &dword_8DA5C;
      sub_76A30(v121, 1024, v35, ".build-id", v36, v37, 0);
      if ( sub_77404((int)v121) )
        break;
      sub_177F8(
        (int)&v120,
        "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "BUILDID",
        v121,
        0);
      v33 += 12;
      if ( v34 == &v122[12 * v123] )
        goto LABEL_55;
    }
    sub_177F8(
      (int)&v120,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      v121,
      1);
    if ( (_DWORD)v100 )
    {
      HIDWORD(v100) = 0;
      sub_77E08((void *)v100);
    }
    if ( v97 )
    {
      v98 = 0;
      sub_77E08(v97);
    }
    goto LABEL_82;
  }
LABEL_55:
  if ( (_DWORD)v100 )
  {
    HIDWORD(v100) = 0;
    sub_77E08((void *)v100);
  }
  if ( v97 )
  {
    v98 = 0;
    sub_77E08(v97);
  }
LABEL_59:
  if ( v129 <= 1 )
    goto LABEL_101;
  v38 = (char *)(v126 ? v125 : &dword_8DA5C);
  if ( !sub_76A6C((char *)v135, 0x1000u, v38) )
    goto LABEL_101;
  if ( v129 )
    v39 = (int *)v128;
  else
    v39 = &dword_8DA5C;
  sub_76A30(v121, 1024, v135, v39, 0);
  if ( sub_77404((int)v121) )
  {
    v40 = (void **)sub_74920((int)v121, 0);
    v41 = sub_6C418((int)v40);
    sub_749E8(v40);
    if ( v41 == v134 )
      goto LABEL_81;
    sub_177F8(
      (int)&v120,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "DEBUGLINK",
      v121,
      0);
    if ( v129 )
      goto LABEL_68;
LABEL_154:
    v42 = &dword_8DA5C;
    goto LABEL_69;
  }
  sub_177F8(
    (int)&v120,
    "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    "DEBUGLINK",
    v121,
    0);
  if ( !v129 )
    goto LABEL_154;
LABEL_68:
  v42 = (int *)v128;
LABEL_69:
  sub_76A30(v121, 1024, v135, ".debug", v42, 0);
  if ( !sub_77404((int)v121)
    || (v43 = (void **)sub_74920((int)v121, 0), v44 = sub_6C418((int)v43), sub_749E8(v43), v44 != v134) )
  {
    sub_177F8(
      (int)&v120,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "DEBUGLINK",
      v121,
      0);
    if ( !(12 * v123) )
      goto LABEL_101;
    v45 = v122 + 12;
    while ( 1 )
    {
      v50 = v45;
      if ( *((_DWORD *)v45 - 2) )
      {
        v46 = *((unsigned __int8 **)v45 - 3);
        if ( !v129 )
          goto LABEL_80;
      }
      else
      {
        v46 = (unsigned __int8 *)&dword_8DA5C;
        if ( !v129 )
        {
LABEL_80:
          v47 = &dword_8DA5C;
          goto LABEL_75;
        }
      }
      v47 = (int *)v128;
LABEL_75:
      sub_76A30(v121, 1024, v46, v135, v47, 0);
      if ( sub_77404((int)v121) )
      {
        v48 = (void **)sub_74920((int)v121, 0);
        v49 = sub_6C418((int)v48);
        sub_749E8(v48);
        if ( v49 == v134 )
          break;
      }
      sub_177F8(
        (int)&v120,
        "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        v121,
        0);
      v45 += 12;
      if ( v50 == &v122[12 * v123] )
        goto LABEL_101;
    }
  }
LABEL_81:
  sub_177F8(
    (int)&v120,
    "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    "DEBUGLINK",
    v121,
    1);
LABEL_82:
  if ( a2[3] )
    v51 = (const char *)a2[2];
  else
    v51 = (const char *)&dword_8DA5C;
  if ( strcmp(v51, v121) )
  {
    sub_53D50(a1, "load separate debug info '%s'\n", v121);
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    v52 = strlen(v121);
    v53 = *a2;
    v54 = sub_77EB0((int)&v94, nullptr, v52 + 1, 1u);
    v95 = v52 + 1;
    v94 = v54;
    memmove(v54, v121, v52);
    v94[v52] = 0;
    v97 = nullptr;
    v98 = 0;
    v99 = 0;
    v97 = (char *)sub_77EB0((int)&v97, nullptr, 1u, 1u);
    v98 = 1;
    *v97 = 0;
    v55 = v95;
    v100 = v53;
    v101 = nullptr;
    v102 = 0;
    v103 = 0;
    if ( v95 )
    {
      v101 = sub_77E84(v95);
      v103 = v55;
      memcpy(v101, v94, v55);
      v102 = v55;
    }
    v56 = v98;
    v104 = nullptr;
    v105 = 0;
    v106 = 0;
    if ( v98 )
    {
      v104 = sub_77E84(v98);
      v106 = v56;
      memcpy(v104, v97, v56);
      v105 = v56;
    }
    v108 = 0;
    v109 = nullptr;
    v112 = 0;
    v113 = nullptr;
    v114 = 0;
    v115 = 0;
    v116 = nullptr;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    v110 = &v108;
    v111 = &v108;
    if ( v97 )
    {
      v98 = 0;
      sub_77E08(v97);
    }
    if ( v94 )
    {
      v95 = 0;
      sub_77E08(v94);
    }
    sub_1784C((int (**)())a1, v92, (int)&v100);
    if ( v116 )
    {
      v117 = 0;
      sub_77E08(v116);
    }
    if ( v113 )
    {
      v114 = 0;
      sub_77E08(v113);
    }
    sub_18B5C((int)&v107, v109);
    if ( v104 )
    {
      v105 = 0;
      sub_77E08(v104);
    }
    if ( v101 )
    {
      v102 = 0;
      sub_77E08(v101);
    }
  }
LABEL_101:
  if ( v93 )
  {
    v57 = 4 * *(_DWORD *)(a1 + 932);
    v58 = v57 >> 2;
    if ( v57 )
    {
      v59 = *(_QWORD *)(a1 + 904);
      v60 = *(_DWORD *)(a1 + 928);
      v61 = HIDWORD(v59) + v58;
      v62 = 4 * HIDWORD(v59);
      if ( (unsigned int)(HIDWORD(v59) + v58) <= *(_DWORD *)(a1 + 912) )
        v61 = 0;
      v63 = (char *)(v59 + v62);
      if ( (unsigned int)(HIDWORD(v59) + v58) > *(_DWORD *)(a1 + 912) )
      {
        v87 = (char *)sub_77EB0(a1 + 904, (void *)v59, v61, 4u);
        v88 = *(_DWORD *)(a1 + 908);
        v63 = &v87[v62];
        *(_DWORD *)(a1 + 904) = v87;
        v61 = 4 * v88 - v62;
      }
      memmove(&v63[v57], v63, v61);
      if ( v60 != v60 + v57 )
      {
        v64 = v60 - 4;
        v65 = &v63[v57];
        do
        {
          v66 = *(_DWORD *)(v64 + 4);
          v64 += 4;
          *(_DWORD *)v63 = v66;
          v63 += 4;
        }
        while ( v63 != v65 );
      }
      *(_DWORD *)(a1 + 908) += v58;
    }
    v67 = *(_DWORD *)(a1 + 944);
    v68 = 4 * v67;
    v69 = (4 * v67) >> 2;
    if ( 4 * v67 )
    {
      v70 = *(_QWORD *)(a1 + 916);
      v71 = *(_DWORD *)(a1 + 940);
      v72 = HIDWORD(v70) + v69;
      v73 = 4 * HIDWORD(v70);
      if ( (unsigned int)(HIDWORD(v70) + v69) <= *(_DWORD *)(a1 + 924) )
        v72 = 0;
      v74 = (char *)(v70 + v73);
      if ( (unsigned int)(HIDWORD(v70) + v69) > *(_DWORD *)(a1 + 924) )
      {
        v89 = (char *)sub_77EB0(a1 + 916, (void *)v70, v72, 4u);
        v90 = *(_DWORD *)(a1 + 920);
        v74 = &v89[v73];
        *(_DWORD *)(a1 + 916) = v89;
        v72 = 4 * v90 - v73;
      }
      memmove(&v74[v68], v74, v72);
      if ( v71 != v71 + v68 )
      {
        v75 = v71 - 4;
        v76 = &v74[v68];
        do
        {
          v77 = *(_DWORD *)(v75 + 4);
          v75 += 4;
          *(_DWORD *)v74 = v77;
          v74 += 4;
        }
        while ( v74 != v76 );
      }
      v67 = *(_DWORD *)(a1 + 944);
      *(_DWORD *)(a1 + 920) += v69;
    }
    if ( v67 )
    {
      v78 = 0;
      do
      {
        *(_DWORD *)(*(_DWORD *)(a1 + 940) + 4 * v78) = sub_77E44(*(char **)(*(_DWORD *)(a1 + 940) + 4 * v78));
        ++v78;
      }
      while ( v78 < *(_DWORD *)(a1 + 944) );
    }
  }
  v120 = &off_CF49C;
  if ( v131 )
  {
    v132 = 0;
    sub_77E08(v131);
  }
  if ( v128 )
  {
    v129 = 0;
    sub_77E08(v128);
  }
  if ( v125 )
  {
    v126 = 0;
    sub_77E08(v125);
  }
  v79 = v122;
  if ( v122 )
  {
    v80 = v123;
    if ( v123 )
    {
      v81 = 0;
      v82 = 0;
      do
      {
        v83 = *(void **)&v79[v81];
        v84 = &v79[v81];
        if ( v83 )
        {
          *((_DWORD *)v84 + 1) = 0;
          sub_77E08(v83);
        }
        ++v82;
        v81 += 12;
        v79 = v122;
      }
      while ( v80 != v82 );
    }
    v123 = 0;
    sub_77E08(v79);
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// CF49C: using guessed type _UNKNOWN *off_CF49C;
