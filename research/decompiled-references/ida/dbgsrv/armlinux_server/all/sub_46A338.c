/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A338
// Address: 0x000000000046A338

//----- (000000000046A338) ----------------------------------------------------
__int64 __fastcall sub_46A338(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x27
  __int64 v12; // x28
  __int64 v13; // x30
  __int64 v14; // x28
  char *v15; // x27
  unsigned int v18; // w1
  char *v19; // x24
  unsigned __int64 v20; // x3
  unsigned int v21; // w0
  __int64 v22; // x1
  unsigned int v23; // w4
  unsigned int v24; // w4
  unsigned __int8 *v25; // x19
  unsigned __int8 *v26; // x20
  unsigned __int8 *v27; // x19
  char *v28; // x20
  const char *i; // x19
  unsigned __int64 v30; // x1
  __int64 v31; // x3
  unsigned __int64 v32; // x2
  void *v33; // x19
  unsigned __int64 v34; // x20
  unsigned __int64 v35; // x21
  char *v36; // x1
  size_t v37; // x0
  size_t v38; // x21
  size_t v39; // x20
  void **v40; // x1
  unsigned __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x7
  void *v44; // x0
  unsigned __int64 v45; // x21
  __int64 v46; // x24
  unsigned __int64 v47; // x20
  unsigned __int8 **v48; // x20
  unsigned __int8 *v49; // x2
  __int64 *v50; // x4
  __int64 *v51; // x5
  int v52; // w22
  __int64 v53; // x24
  unsigned int v54; // w22
  char *v55; // x2
  __int64 *v56; // x3
  int v57; // w21
  unsigned int v58; // w20
  __int64 *v59; // x4
  int v60; // w22
  unsigned __int8 **v61; // x21
  unsigned __int8 *v62; // x2
  __int64 *v63; // x4
  int v64; // w22
  unsigned int v65; // w22
  unsigned int v66; // w22
  char *v67; // x1
  __int64 v68; // x21
  __int64 v69; // x19
  __int64 v70; // x20
  void *v71; // x0
  char *v72; // x1
  char *v74; // x0
  unsigned int v75; // w1
  __int64 v76; // [xsp+0h] [xbp-6590h]
  __int64 v77; // [xsp+8h] [xbp-6588h]
  __int64 v78; // [xsp+10h] [xbp-6580h]
  __int64 v79; // [xsp+18h] [xbp-6578h]
  __int64 v80; // [xsp+20h] [xbp-6570h]
  __int64 v81; // [xsp+28h] [xbp-6568h]
  __int64 v82; // [xsp+30h] [xbp-6560h]
  __int64 v83; // [xsp+38h] [xbp-6558h]
  __int64 v84; // [xsp+40h] [xbp-6550h]
  __int64 v85; // [xsp+48h] [xbp-6548h]
  __int64 v86; // [xsp+50h] [xbp-6540h]
  int s; // [xsp+70h] [xbp-6520h]
  void *v89; // [xsp+80h] [xbp-6510h] BYREF
  __int64 v90; // [xsp+88h] [xbp-6508h]
  __int64 v91; // [xsp+90h] [xbp-6500h]
  void *v92; // [xsp+98h] [xbp-64F8h] BYREF
  __int64 v93; // [xsp+A0h] [xbp-64F0h]
  __int64 v94; // [xsp+A8h] [xbp-64E8h]
  void *ptr; // [xsp+B0h] [xbp-64E0h] BYREF
  unsigned __int64 v96; // [xsp+B8h] [xbp-64D8h]
  unsigned __int64 v97; // [xsp+C0h] [xbp-64D0h]
  __int64 (__fastcall **v98)(); // [xsp+C8h] [xbp-64C8h] BYREF
  char v99[1024]; // [xsp+D0h] [xbp-64C0h] BYREF
  void *v100; // [xsp+4D0h] [xbp-60C0h] BYREF
  __int64 v101; // [xsp+4D8h] [xbp-60B8h]
  unsigned __int64 v102; // [xsp+4E0h] [xbp-60B0h]
  void *v103; // [xsp+4E8h] [xbp-60A8h] BYREF
  __int64 v104; // [xsp+4F0h] [xbp-60A0h]
  void *v105; // [xsp+500h] [xbp-6090h] BYREF
  unsigned __int64 v106; // [xsp+508h] [xbp-6088h]
  void *src; // [xsp+518h] [xbp-6078h] BYREF
  unsigned __int64 v108; // [xsp+520h] [xbp-6070h]
  int v109; // [xsp+530h] [xbp-6060h]
  __int64 v110; // [xsp+538h] [xbp-6058h]
  int v111; // [xsp+540h] [xbp-6050h]
  _BYTE v112[4]; // [xsp+548h] [xbp-6048h] BYREF
  char v113[4]; // [xsp+54Ch] [xbp-6044h] BYREF
  unsigned __int16 v114; // [xsp+550h] [xbp-6040h]
  _BYTE v115[6]; // [xsp+552h] [xbp-603Eh] BYREF
  _BYTE v116[4]; // [xsp+1958h] [xbp-4C38h] BYREF
  int v117; // [xsp+195Ch] [xbp-4C34h] BYREF
  _BYTE v118[4]; // [xsp+2D68h] [xbp-3828h] BYREF
  int v119; // [xsp+2D6Ch] [xbp-3824h] BYREF
  _BYTE v120[4]; // [xsp+4178h] [xbp-2418h] BYREF
  int v121; // [xsp+417Ch] [xbp-2414h] BYREF
  unsigned __int8 v122[4096]; // [xsp+5588h] [xbp-1008h] BYREF

  v82 = v9;
  v83 = v10;
  v84 = v11;
  v85 = v12;
  v14 = a2 + 28;
  v76 = v3;
  v77 = v4;
  v15 = (char *)(a2 + 1062);
  v78 = v5;
  v79 = v6;
  v80 = v7;
  v81 = v8;
  v86 = v13;
  v18 = *(unsigned __int16 *)(a2 + 36);
  v89 = nullptr;
  v90 = 0;
  v91 = 0;
  v19 = *(char **)a2;
  if ( !v18 )
    goto LABEL_123;
  v20 = (unsigned __int16)v18;
  if ( v18 <= 0xB )
    return (unsigned int)-1;
  v21 = *(_DWORD *)(a2 + 42);
  LODWORD(v22) = *(_DWORD *)(a2 + 38);
  v23 = bswap32(v21);
  if ( *(_BYTE *)(a2 + 28) )
    v21 = v23;
  v24 = bswap32(v22);
  v22 = *(_BYTE *)(a2 + 28) ? v24 : (unsigned int)v22;
  if ( v20 < v22 + (unsigned __int64)v21 + 12 )
    return (unsigned int)-1;
  v25 = (unsigned __int8 *)(a2 + 38 + v22 + 12);
  if ( v21 )
  {
    v26 = &v25[v21];
    do
      sub_42D148((__int64)&v89, "%02x", *v25++);
    while ( v25 != v26 );
    if ( *(_QWORD *)(a3 + 8) )
      v27 = *(unsigned __int8 **)a3;
    else
      v27 = (unsigned __int8 *)&qword_4B2D48;
    v28 = (char *)&qword_4B2D48;
    if ( v90 )
      v28 = (char *)v89;
  }
  else
  {
LABEL_123:
    if ( *(_QWORD *)(a3 + 8) )
      v27 = *(unsigned __int8 **)a3;
    else
      v27 = (unsigned __int8 *)&qword_4B2D48;
    v28 = (char *)&qword_4B2D48;
  }
  s = *(_DWORD *)(a2 + 24);
  v98 = off_519938;
  v100 = nullptr;
  v101 = 0;
  v102 = 0;
  sub_4672E0(&v103, v19);
  sub_4672E0(&v105, v15);
  sub_4672E0(&src, v28);
  v99[0] = 0;
  v109 = 0;
  sub_493350((unsigned __int64)v122, v27, 4096);
  for ( i = sub_4930F8((char *)v122, ";", (const char **)&v92); i; i = sub_4930F8(nullptr, ";", (const char **)&v92) )
  {
    ptr = nullptr;
    v96 = 0;
    v97 = 0;
    v37 = strlen(i);
    v38 = v37 + 1;
    v39 = v37;
    ptr = sub_491288((__int64)&ptr, nullptr, v37 + 1, 1u);
    v96 = v38;
    memmove(ptr, i, v39);
    *((_BYTE *)ptr + v39) = 0;
    v74 = (char *)v100;
    if ( v100 <= &ptr )
    {
      v30 = v102;
      v31 = v101;
      v32 = v101 + 1;
      if ( &ptr < (void **)((char *)v100 + 24 * v102) )
      {
        v33 = ptr;
        v34 = v96;
        ptr = nullptr;
        v96 = 0;
        v35 = v97;
        v97 = 0;
        if ( v102 < v32 )
        {
          v74 = (char *)sub_491288((__int64)&v100, v100, v32, 0x18u);
          v31 = v101;
          v100 = v74;
        }
        v36 = &v74[24 * v31];
        *(_QWORD *)v36 = v33;
        *((_QWORD *)v36 + 1) = v34;
        *((_QWORD *)v36 + 2) = v35;
        ++v101;
        if ( ptr )
        {
          v96 = 0;
          j__free(ptr);
        }
        continue;
      }
    }
    else
    {
      v31 = v101;
      v30 = v102;
      v32 = v101 + 1;
    }
    if ( v30 < v32 )
    {
      v74 = (char *)sub_491288((__int64)&v100, v100, v32, 0x18u);
      v31 = v101;
      v100 = v74;
    }
    v40 = (void **)&v74[24 * v31];
    *v40 = ptr;
    v40[1] = (void *)v96;
    v40[2] = (void *)v97;
    ++v101;
  }
  v98 = off_51AEC8;
  v110 = v14;
  v111 = s;
  if ( !v101 || v108 <= 3 )
    goto LABEL_54;
  v92 = nullptr;
  v93 = 0;
  v94 = 0;
  sub_469950((__int64)&v92, src, 2u);
  if ( v108 )
  {
    v41 = v108 - 1;
    ptr = nullptr;
    v96 = 0;
    v97 = 0;
    v42 = 2;
    if ( v108 - 1 <= 2 )
      v42 = v108 - 1;
    if ( v41 != v42 )
    {
      sub_469950((__int64)&ptr, (char *)src + v42, v41 - v42);
      v44 = ptr;
      if ( v96 )
      {
        v45 = v96 - 1;
        v46 = v96 + 5;
        v47 = v96 + 6;
      }
      else
      {
        v47 = 7;
        v46 = 6;
        v45 = 0;
      }
      if ( v97 >= v47 )
        goto LABEL_39;
      goto LABEL_107;
    }
  }
  else
  {
    ptr = nullptr;
    v96 = 0;
    v97 = 0;
  }
  v44 = nullptr;
  v46 = 6;
  v47 = 7;
  v45 = 0;
LABEL_107:
  v44 = sub_491288((__int64)&ptr, v44, v47, 1u);
  ptr = v44;
LABEL_39:
  v96 = v47;
  *((_BYTE *)v44 + v46) = 0;
  qmemcpy((char *)ptr + v45, ".debug", 6);
  v48 = (unsigned __int8 **)v100;
  if ( 24 * v101 )
  {
    while ( 1 )
    {
      v49 = (unsigned __int8 *)&qword_4B2D48;
      if ( v48[1] )
        v49 = *v48;
      v50 = (__int64 *)v92;
      v51 = (__int64 *)ptr;
      if ( !v93 )
        v50 = &qword_4B2D48;
      if ( !v96 )
        v51 = &qword_4B2D48;
      sub_48F278(v99, 1024, v49, ".build-id", v50, v51, 0, v43, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);
      v112[0] = 0;
      v112[1] = 0;
      memset(v113, 0, 0x1408u);
      v52 = v111;
      v53 = v110;
      sub_40A690((int)"Looking for GNU DWARF file at \"%s\"... ", v99);
      if ( (unsigned __int8)sub_490268(v99)
        && (v54 = (unsigned __int8)sub_4697A0((__int64)v112, v99, v52)) != 0
        && (!v53 || v114 == *(unsigned __int16 *)(v53 + 8) && !memcmp(v115, (const void *)(v53 + 10), v114)) )
      {
        sub_40A690((int)"found!\n");
      }
      else
      {
        v54 = 0;
        sub_40A690((int)"no.\n");
      }
      sub_40B410(
        (__int64)&v98,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "BUILDID",
        v99,
        v54);
      if ( v54 )
        break;
      v48 += 3;
      if ( v48 == (unsigned __int8 **)((char *)v100 + 24 * v101) )
        goto LABEL_50;
    }
    if ( ptr )
    {
      v96 = 0;
      j__free(ptr);
    }
    if ( v92 )
    {
      v93 = 0;
      j__free(v92);
    }
    goto LABEL_82;
  }
LABEL_50:
  if ( ptr )
  {
    v96 = 0;
    j__free(ptr);
  }
  if ( v92 )
  {
    v93 = 0;
    j__free(v92);
  }
LABEL_54:
  if ( v106 > 1 )
  {
    v55 = (char *)v103;
    if ( !v104 )
      v55 = (char *)&qword_4B2D48;
    if ( sub_48F310((char *)v122, 0x1000u, v55) )
    {
      v56 = (__int64 *)v105;
      if ( !v106 )
        v56 = &qword_4B2D48;
      sub_48F278(v99, 1024, v122, v56, 0);
      v116[0] = 0;
      v116[1] = 0;
      memset(&v117, 0, 0x1408u);
      v57 = v111;
      sub_40A690((int)"Looking for GNU DWARF file at \"%s\"... ", v99);
      if ( (unsigned __int8)sub_490268(v99) && (v58 = (unsigned __int8)sub_4697A0((__int64)v116, v99, v57)) != 0 )
      {
        sub_40A690((int)"found!\n");
      }
      else
      {
        v58 = 0;
        sub_40A690((int)"no.\n");
      }
      sub_40B410(
        (__int64)&v98,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        v99,
        v58);
      if ( v58 )
        goto LABEL_82;
      v59 = (__int64 *)v105;
      if ( !v106 )
        v59 = &qword_4B2D48;
      sub_48F278(v99, 1024, v122, ".debug", v59, 0);
      v118[0] = 0;
      v118[1] = 0;
      memset(&v119, 0, 0x1408u);
      v60 = v111;
      sub_40A690((int)"Looking for GNU DWARF file at \"%s\"... ", v99);
      if ( (unsigned __int8)sub_490268(v99) && (v75 = (unsigned __int8)sub_4697A0((__int64)v118, v99, v60)) != 0 )
      {
        v58 = v75;
        sub_40A690((int)"found!\n");
      }
      else
      {
        sub_40A690((int)"no.\n");
      }
      sub_40B410(
        (__int64)&v98,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        v99,
        v58);
      if ( v58 )
      {
LABEL_82:
        if ( a1 )
          sub_466FE8(a1, v99);
        v66 = 0;
        goto LABEL_85;
      }
      v61 = (unsigned __int8 **)v100;
      if ( 24 * v101 )
      {
        do
        {
          v62 = (unsigned __int8 *)&qword_4B2D48;
          if ( v61[1] )
            v62 = *v61;
          v63 = (__int64 *)v105;
          if ( !v106 )
            v63 = &qword_4B2D48;
          sub_48F278(v99, 1024, v62, v122, v63, 0);
          v120[0] = 0;
          v120[1] = 0;
          memset(&v121, 0, 0x1408u);
          v64 = v111;
          sub_40A690((int)"Looking for GNU DWARF file at \"%s\"... ", v99);
          if ( (unsigned __int8)sub_490268(v99) && (v65 = (unsigned __int8)sub_4697A0((__int64)v120, v99, v64)) != 0 )
          {
            sub_40A690((int)"found!\n");
          }
          else
          {
            v65 = 0;
            sub_40A690((int)"no.\n");
          }
          sub_40B410(
            (__int64)&v98,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            v99,
            v65);
          if ( v65 )
            goto LABEL_82;
          v61 += 3;
        }
        while ( v61 != (unsigned __int8 **)((char *)v100 + 24 * v101) );
      }
    }
  }
  v66 = -1;
LABEL_85:
  v98 = off_519938;
  if ( src )
  {
    v108 = 0;
    j__free(src);
  }
  if ( v105 )
  {
    v106 = 0;
    j__free(v105);
  }
  if ( v103 )
  {
    v104 = 0;
    j__free(v103);
  }
  v67 = (char *)v100;
  if ( v100 )
  {
    v68 = v101;
    if ( v101 )
    {
      v69 = 0;
      v70 = 0;
      do
      {
        v71 = *(void **)&v67[v69];
        v72 = &v67[v69];
        if ( v71 )
        {
          *((_QWORD *)v72 + 1) = 0;
          j__free(v71);
        }
        ++v70;
        v69 += 24;
        v67 = (char *)v100;
      }
      while ( v68 != v70 );
    }
    v101 = 0;
    j__free(v67);
  }
  if ( v89 )
  {
    v90 = 0;
    j__free(v89);
  }
  return v66;
}
// 46A338: could not find valid save-restore pair for x19
// 46A338: could not find valid save-restore pair for x20
// 46A338: could not find valid save-restore pair for x21
// 46A338: could not find valid save-restore pair for x22
// 46A338: could not find valid save-restore pair for x23
// 46A338: could not find valid save-restore pair for x24
// 46A338: could not find valid save-restore pair for x25
// 46A338: could not find valid save-restore pair for x26
// 46A338: could not find valid save-restore pair for x27
// 46A338: could not find valid save-restore pair for x28
// 46A340: variable 'v9' is possibly undefined
// 46A340: variable 'v10' is possibly undefined
// 46A348: variable 'v11' is possibly undefined
// 46A348: variable 'v12' is possibly undefined
// 46A350: variable 'v3' is possibly undefined
// 46A350: variable 'v4' is possibly undefined
// 46A358: variable 'v5' is possibly undefined
// 46A358: variable 'v6' is possibly undefined
// 46A360: variable 'v7' is possibly undefined
// 46A360: variable 'v8' is possibly undefined
// 46A368: variable 'v13' is possibly undefined
// 46A740: variable 'v43' is possibly undefined
// 46A740: variable 'v76' is possibly undefined
// 46A740: variable 'v77' is possibly undefined
// 46A740: variable 'v78' is possibly undefined
// 46A740: variable 'v79' is possibly undefined
// 46A740: variable 'v80' is possibly undefined
// 46A740: variable 'v81' is possibly undefined
// 46A740: variable 'v82' is possibly undefined
// 46A740: variable 'v83' is possibly undefined
// 46A740: variable 'v84' is possibly undefined
// 46A740: variable 'v85' is possibly undefined
// 46A740: variable 'v86' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519938: using guessed type __int64 (__fastcall *off_519938[3])();
// 51AEC8: using guessed type __int64 (__fastcall *[3])();
