/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CCA4
// Address: 0x0005CCA4

//----- (0005CCA4) --------------------------------------------------------
int __fastcall sub_5CCA4(int a1, int a2, int a3)
{
  unsigned int v5; // r1
  char *v6; // r11
  unsigned int v7; // r3
  unsigned int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r2
  int v11; // r3
  unsigned int v12; // r6
  int v13; // r5
  int v14; // t1
  unsigned __int8 *v15; // r6
  char *v16; // r8
  const char *i; // r7
  unsigned int v18; // r0
  int v19; // r3
  unsigned int v20; // r2
  __int64 v21; // kr00_8
  unsigned int v22; // r8
  char *v23; // r2
  size_t v24; // r8
  char *v25; // r0
  unsigned int v26; // r3
  int v27; // r1
  void *v28; // r1
  int v29; // r7
  int v30; // r8
  unsigned int v31; // r6
  char *v32; // r6
  unsigned __int8 *v33; // r2
  int *v34; // r1
  int *v35; // r0
  int v36; // r7
  void **v37; // r7
  char *v38; // r8
  char *v39; // r2
  int *v40; // r3
  int v41; // r7
  void **v42; // r6
  int *v43; // r2
  int v44; // r8
  char *v45; // r6
  unsigned __int8 *v46; // r2
  int *v47; // r1
  int v48; // r7
  void **v49; // r7
  char *v50; // r10
  int v51; // r6
  char *v52; // r3
  int v53; // r10
  int v54; // r8
  int v55; // r9
  void *v56; // r0
  char *v57; // r3
  char *v59; // r1
  void **v60; // r0
  char *accept; // [sp+14h] [bp-64C0h]
  char *v63; // [sp+2Ch] [bp-64A8h]
  int v64; // [sp+30h] [bp-64A4h]
  char *v65; // [sp+38h] [bp-649Ch] BYREF
  int v66; // [sp+3Ch] [bp-6498h]
  int v67; // [sp+40h] [bp-6494h]
  char *v68; // [sp+44h] [bp-6490h] BYREF
  int v69; // [sp+48h] [bp-648Ch]
  int v70; // [sp+4Ch] [bp-6488h]
  __int64 v71; // [sp+50h] [bp-6484h] BYREF
  unsigned int v72; // [sp+58h] [bp-647Ch]
  _UNKNOWN **v73; // [sp+5Ch] [bp-6478h] BYREF
  char v74[112]; // [sp+60h] [bp-6474h] BYREF
  char *v75; // [sp+460h] [bp-6074h] BYREF
  int v76; // [sp+464h] [bp-6070h]
  unsigned int v77; // [sp+468h] [bp-606Ch]
  int *v78; // [sp+46Ch] [bp-6068h] BYREF
  int v79; // [sp+470h] [bp-6064h]
  int *v80; // [sp+478h] [bp-605Ch] BYREF
  unsigned int v81; // [sp+47Ch] [bp-6058h]
  char *v82; // [sp+484h] [bp-6050h] BYREF
  unsigned int v83; // [sp+488h] [bp-604Ch]
  int v84; // [sp+490h] [bp-6044h]
  char *v85; // [sp+494h] [bp-6040h]
  int v86; // [sp+498h] [bp-603Ch]
  _WORD v87[2566]; // [sp+49Ch] [bp-6038h] BYREF
  _BYTE v88[5132]; // [sp+18A8h] [bp-4C2Ch] BYREF
  _BYTE v89[5132]; // [sp+2CB4h] [bp-3820h] BYREF
  _BYTE v90[5132]; // [sp+40C0h] [bp-2414h] BYREF
  unsigned __int8 v91[4020]; // [sp+54CCh] [bp-1008h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 24);
  v63 = (char *)(a2 + 16);
  v66 = 0;
  v67 = 0;
  v65 = nullptr;
  v6 = *(char **)a2;
  if ( !v5 )
    goto LABEL_129;
  if ( v5 <= 0xB )
    return -1;
  v7 = *(_DWORD *)(a2 + 26);
  v8 = *(_DWORD *)(a2 + 30);
  v9 = bswap32(v7);
  v10 = bswap32(v8);
  if ( *(_BYTE *)(a2 + 16) )
  {
    v7 = v9;
    v8 = v10;
  }
  if ( v5 < v7 + v8 + 12 )
    return -1;
  v11 = v7 + 12 + a2 + 26;
  if ( v8 )
  {
    v12 = v8 - 1 + v11;
    v13 = v11 - 1;
    do
    {
      v14 = *(unsigned __int8 *)++v13;
      sub_340C8((int)&v65, "%02x", v14);
    }
    while ( v13 != v12 );
    if ( *(_DWORD *)(a3 + 4) )
      v15 = *(unsigned __int8 **)a3;
    else
      v15 = (unsigned __int8 *)&dword_8DA5C;
    if ( v66 )
      v16 = v65;
    else
      v16 = (char *)&dword_8DA5C;
  }
  else
  {
LABEL_129:
    if ( *(_DWORD *)(a3 + 4) )
      v15 = *(unsigned __int8 **)a3;
    else
      v15 = (unsigned __int8 *)&dword_8DA5C;
    v16 = (char *)&dword_8DA5C;
  }
  v64 = *(_DWORD *)(a2 + 12);
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  v73 = &off_CF49C;
  sub_5AB40(&v78, v6);
  sub_5AB40(&v80, (char *)(a2 + 1050));
  sub_5AB40(&v82, v16);
  v84 = 0;
  v74[0] = 0;
  sub_79524(v91, v15, 4096);
  for ( i = sub_793DC((char *)v91, ";", (const char **)&v68); i; i = sub_793DC(nullptr, ";", (const char **)&v68) )
  {
    v71 = 0;
    v72 = 0;
    v24 = strlen(i);
    LODWORD(v71) = sub_77EB0((int)&v71, nullptr, v24 + 1, 1u);
    HIDWORD(v71) = v24 + 1;
    memmove((void *)v71, i, v24);
    *(_BYTE *)(v71 + v24) = 0;
    v59 = v75;
    if ( v75 <= (char *)&v71 )
    {
      v18 = v77;
      v19 = v76;
      v20 = v76 + 1;
      if ( &v71 < (__int64 *)&v75[12 * v77] )
      {
        v21 = v71;
        v22 = v72;
        v71 = 0;
        v72 = 0;
        if ( v77 < v20 )
        {
          v59 = (char *)sub_77EB0((int)&v75, v75, v20, 0xCu);
          v19 = v76;
          v75 = v59;
        }
        v23 = &v59[12 * v19];
        *(_QWORD *)v23 = v21;
        *((_DWORD *)v23 + 2) = v22;
        ++v76;
        if ( (_DWORD)v71 )
        {
          HIDWORD(v71) = 0;
          sub_77E08((void *)v71);
        }
        continue;
      }
    }
    else
    {
      v19 = v76;
      v18 = v77;
      v20 = v76 + 1;
    }
    if ( v20 > v18 )
    {
      v59 = (char *)sub_77EB0((int)&v75, v75, v20, 0xCu);
      v19 = v76;
      v75 = v59;
    }
    v25 = &v59[12 * v19];
    *(_QWORD *)v25 = v71;
    *((_DWORD *)v25 + 2) = v72;
    ++v76;
  }
  v85 = v63;
  v73 = &off_CFF64;
  v86 = v64;
  if ( !v76 || v83 <= 3 )
    goto LABEL_53;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  sub_5C63C((int)&v68, v82, 2u);
  if ( !v83 )
  {
    v71 = 0;
    v72 = 0;
LABEL_102:
    v29 = 0;
    v30 = 6;
    v28 = nullptr;
    v31 = 7;
LABEL_103:
    v28 = sub_77EB0((int)&v71, v28, v31, 1u);
    LODWORD(v71) = v28;
    goto LABEL_36;
  }
  v26 = v83 - 1;
  v27 = v83 - 1;
  if ( v83 - 1 >= 2 )
    v27 = 2;
  v71 = 0;
  v72 = 0;
  if ( v26 == v27 )
    goto LABEL_102;
  sub_5C63C((int)&v71, &v82[v27], v26 - v27);
  v28 = (void *)v71;
  if ( HIDWORD(v71) )
  {
    v29 = HIDWORD(v71) - 1;
    v30 = HIDWORD(v71) + 5;
    v31 = HIDWORD(v71) + 6;
  }
  else
  {
    v29 = 0;
    v30 = 6;
    v31 = 7;
  }
  if ( v72 < v31 )
    goto LABEL_103;
LABEL_36:
  HIDWORD(v71) = v31;
  *((_BYTE *)v28 + v30) = 0;
  qmemcpy((void *)(v71 + v29), ".debug", 6);
  if ( !(12 * v76) )
  {
LABEL_49:
    if ( (_DWORD)v71 )
    {
      HIDWORD(v71) = 0;
      sub_77E08((void *)v71);
    }
    if ( v68 )
    {
      v69 = 0;
      sub_77E08(v68);
    }
LABEL_53:
    if ( v81 <= 1 )
      goto LABEL_78;
    v39 = (char *)(v79 ? v78 : &dword_8DA5C);
    if ( !sub_76A6C((char *)v91, 0x1000u, v39) )
      goto LABEL_78;
    if ( v81 )
      v40 = v80;
    else
      v40 = &dword_8DA5C;
    sub_76A30(v74, 1024, v91, v40, 0);
    v88[1] = 0;
    v88[0] = 0;
    memset(&v88[4], 0, 0x1408u);
    v41 = v86;
    sub_1700C((int)"Looking for GNU DWARF file at \"%s\"... ", v74);
    if ( sub_77404((int)v74) && (v42 = sub_5C51C((int)v88, (int)v74, v41)) != nullptr )
    {
      sub_1700C((int)"found!\n");
    }
    else
    {
      v42 = nullptr;
      sub_1700C((int)"no.\n");
    }
    sub_177F8(
      (int)&v73,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "DEBUGLINK",
      v74,
      v42);
    if ( v42 )
      goto LABEL_108;
    v43 = v81 ? v80 : &dword_8DA5C;
    sub_76A30(v74, 1024, v91, ".debug", v43, 0);
    v89[1] = 0;
    v89[0] = 0;
    memset(&v89[4], 0, 0x1408u);
    v44 = v86;
    sub_1700C((int)"Looking for GNU DWARF file at \"%s\"... ", v74);
    if ( sub_77404((int)v74) && (v60 = sub_5C51C((int)v89, (int)v74, v44)) != nullptr )
    {
      v42 = v60;
      sub_1700C((int)"found!\n");
    }
    else
    {
      sub_1700C((int)"no.\n");
    }
    sub_177F8(
      (int)&v73,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "DEBUGLINK",
      v74,
      v42);
    if ( v42 )
      goto LABEL_108;
    if ( !(12 * v76) )
    {
LABEL_78:
      v51 = -1;
      goto LABEL_79;
    }
    v45 = v75 + 12;
    while ( 1 )
    {
      v50 = v45;
      if ( *((_DWORD *)v45 - 2) )
      {
        v46 = *((unsigned __int8 **)v45 - 3);
        if ( !v81 )
          goto LABEL_77;
      }
      else
      {
        v46 = (unsigned __int8 *)&dword_8DA5C;
        if ( !v81 )
        {
LABEL_77:
          v47 = &dword_8DA5C;
          goto LABEL_71;
        }
      }
      v47 = v80;
LABEL_71:
      sub_76A30(v74, 1024, v46, v91, v47, 0);
      v90[0] = 0;
      v90[1] = 0;
      memset(&v90[4], 0, 0x1408u);
      v48 = v86;
      sub_1700C((int)"Looking for GNU DWARF file at \"%s\"... ", v74);
      if ( sub_77404((int)v74) && (v49 = sub_5C51C((int)v90, (int)v74, v48)) != nullptr )
      {
        sub_1700C((int)"found!\n");
      }
      else
      {
        v49 = nullptr;
        sub_1700C((int)"no.\n");
      }
      sub_177F8(
        (int)&v73,
        "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        v74,
        v49);
      if ( v49 )
        goto LABEL_108;
      v45 += 12;
      if ( v50 == &v75[12 * v76] )
        goto LABEL_78;
    }
  }
  v32 = v75 + 12;
  while ( 1 )
  {
    v38 = v32;
    if ( *((_DWORD *)v32 - 2) )
    {
      v33 = *((unsigned __int8 **)v32 - 3);
      if ( v69 )
        goto LABEL_39;
    }
    else
    {
      v33 = (unsigned __int8 *)&dword_8DA5C;
      if ( v69 )
      {
LABEL_39:
        v34 = (int *)v68;
        if ( !HIDWORD(v71) )
          goto LABEL_48;
        goto LABEL_40;
      }
    }
    v34 = &dword_8DA5C;
    if ( !HIDWORD(v71) )
    {
LABEL_48:
      v35 = &dword_8DA5C;
      goto LABEL_41;
    }
LABEL_40:
    v35 = (int *)v71;
LABEL_41:
    sub_76A30(v74, 1024, v33, ".build-id", v34, v35, 0);
    v87[0] = 0;
    memset(&v87[2], 0, 0x1408u);
    v36 = v86;
    accept = v85;
    sub_1700C((int)"Looking for GNU DWARF file at \"%s\"... ", v74);
    if ( sub_77404((int)v74)
      && (v37 = sub_5C51C((int)v87, (int)v74, v36)) != nullptr
      && (!accept || v87[4] == *((unsigned __int16 *)accept + 4) && !memcmp(&v87[5], accept + 10, v87[4])) )
    {
      sub_1700C((int)"found!\n");
    }
    else
    {
      v37 = nullptr;
      sub_1700C((int)"no.\n");
    }
    sub_177F8(
      (int)&v73,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      v74,
      v37);
    if ( v37 )
      break;
    v32 += 12;
    if ( v38 == &v75[12 * v76] )
      goto LABEL_49;
  }
  if ( (_DWORD)v71 )
  {
    HIDWORD(v71) = 0;
    sub_77E08((void *)v71);
  }
  if ( v68 )
  {
    v69 = 0;
    sub_77E08(v68);
  }
LABEL_108:
  if ( a1 )
    sub_5A968(a1, v74);
  v51 = 0;
LABEL_79:
  v73 = &off_CF49C;
  if ( v82 )
  {
    v83 = 0;
    sub_77E08(v82);
  }
  if ( v80 )
  {
    v81 = 0;
    sub_77E08(v80);
  }
  if ( v78 )
  {
    v79 = 0;
    sub_77E08(v78);
  }
  v52 = v75;
  if ( v75 )
  {
    v53 = v76;
    if ( v76 )
    {
      v54 = 0;
      v55 = 0;
      do
      {
        v56 = *(void **)&v52[v54];
        v57 = &v52[v54];
        if ( v56 )
        {
          *((_DWORD *)v57 + 1) = 0;
          sub_77E08(v56);
        }
        ++v55;
        v54 += 12;
        v52 = v75;
      }
      while ( v53 != v55 );
    }
    v76 = 0;
    sub_77E08(v52);
  }
  if ( v65 )
  {
    v66 = 0;
    sub_77E08(v65);
  }
  return v51;
}
// 8DA5C: using guessed type int dword_8DA5C;
// CF49C: using guessed type _UNKNOWN *off_CF49C;
// CFF64: using guessed type _UNKNOWN *off_CFF64;
