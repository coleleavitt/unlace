__int64 __fastcall sub_4D0C0(Dwarf_Half *a1, __int64 a2, int a3, Dwarf_Error *a4)
{
  Dwarf_Error *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // r13
  unsigned int section; // ebp
  Dwarf_Error *v11; // rdx
  int v12; // eax
  Dwarf_Attribute v13; // rdi
  unsigned __int64 v14; // rax
  unsigned int fission_addition_die; // eax
  int v16; // eax
  char *v17; // rcx
  char *v18; // r10
  unsigned __int64 v19; // r12
  char *v20; // r10
  char *v21; // rcx
  char *v22; // rdx
  __int16 v23; // ax
  unsigned __int16 v24; // cx
  char *v25; // rax
  char *v26; // rsi
  void *v27; // r10
  char *v28; // rdx
  _BYTE *v29; // rax
  char v30; // dl
  int v31; // edx
  char v32; // cl
  char *v33; // rdx
  _BYTE *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  unsigned __int8 v39; // di
  __int64 v40; // rdx
  int v41; // eax
  char *v42; // rsi
  char *v43; // rax
  char *v44; // rax
  const char *v45; // rsi
  __int64 v46; // rax
  char v47; // dl
  char *v48; // rdx
  size_t v49; // rax
  char *v50; // r14
  char *v51; // r12
  size_t v52; // r14
  char *v53; // r12
  void *v54; // rdi
  char *v55; // rdx
  __int64 v56; // r15
  __int64 v57; // r14
  unsigned __int64 v58; // rbx
  unsigned int v59; // ecx
  __int64 v60; // rdi
  _QWORD *v61; // r12
  size_t v62; // rbp
  unsigned int v63; // r15d
  __int64 v64; // rax
  int v65; // eax
  void *v66; // rdi
  _DWORD *v67; // r15
  int v68; // eax
  __int64 v69; // rax
  signed __int64 v70; // rdx
  signed __int64 v71; // rcx
  int v72; // edx
  const char *v73; // rsi
  __int64 v74; // rsi
  int v75; // edx
  __int64 v76; // rsi
  int v77; // edx
  __int64 v78; // rsi
  unsigned __int64 v79; // rbx
  int v80; // edx
  int v81; // edx
  __int64 v82; // rsi
  __int64 v83; // rax
  const char *v84; // rsi
  __int64 v85; // rsi
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // rdi
  __int64 v88; // r12
  unsigned __int64 v89; // r13
  int v90; // edx
  const char *v91; // rdx
  __int64 v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rsi
  unsigned int v95; // eax
  __int64 v96; // r14
  __int64 v97; // r12
  unsigned int *v98; // r13
  const char *v99; // rdx
  __int64 v100; // rsi
  int v101; // edx
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rsi
  __int64 v105; // r14
  __int64 v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rsi
  struct Dwarf_Debug_s *v109; // r12
  int v110; // edx
  __int64 v111; // rsi
  Dwarf_Debug v112; // r12
  unsigned int *v113; // rbx
  const char *v114; // rdx
  __int64 v115; // rsi
  int v116; // edx
  __int64 v117; // rsi
  __int64 v118; // rsi
  __int64 v119; // r15
  const char *v120; // rdx
  __int64 v121; // rsi
  unsigned int v122; // ebp
  size_t v123; // rax
  char *v124; // rdx
  void *v125; // r9
  void *v126; // r12
  _QWORD *v127; // rbx
  char *v128; // rdi
  int v129; // eax
  void *v130; // r9
  _BYTE *v131; // rax
  _BYTE *v132; // rbp
  size_t v133; // r14
  unsigned __int64 *v134; // r12
  unsigned __int64 v135; // rsi
  unsigned __int64 v136; // rdx
  int data16; // eax
  char *v138; // rax
  char *v139; // rax
  char *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rax
  char *v143; // rdx
  unsigned __int64 v144; // rdi
  signed __int64 v145; // rcx
  char *v146; // rsi
  int *v147; // rax
  char *v148; // rdx
  __int64 v149; // rcx
  char *v150; // rsi
  char *v151; // rsi
  char *v152; // rax
  _DWORD *v153; // rax
  __int64 v154; // rcx
  _DWORD *v155; // rdi
  unsigned __int64 v156; // r15
  unsigned __int64 v157; // r12
  char *v158; // rax
  char *v159; // rdx
  size_t v160; // rax
  char *v161; // rdx
  char *v162; // rdi
  char *v163; // rdi
  char *v164; // rax
  char *v165; // rdx
  _QWORD *v166; // rax
  _QWORD *v167; // r12
  char *v168; // rdx
  size_t v169; // rax
  size_t v170; // rcx
  char *v171; // r12
  size_t v172; // rdi
  size_t v173; // r12
  unsigned __int64 v174; // rcx
  size_t v175; // r12
  void *v176; // rdi
  _DWORD *v177; // rdi
  __int64 v178; // r15
  char *i; // r13
  char *v180; // r12
  __int64 v181; // rbp
  size_t j; // r13
  __int64 v183; // rsi
  __int64 v184; // rdx
  int v185; // eax
  const char *v186; // rdx
  int v187; // eax
  __int64 v188; // rdx
  char *v190; // [rsp+8h] [rbp-190h]
  void *v191; // [rsp+8h] [rbp-190h]
  void *v192; // [rsp+8h] [rbp-190h]
  unsigned __int16 address_size; // [rsp+14h] [rbp-184h]
  unsigned __int16 *alloc; // [rsp+18h] [rbp-180h]
  Dwarf_Off v195; // [rsp+28h] [rbp-170h]
  char *v196; // [rsp+28h] [rbp-170h]
  unsigned __int64 v197; // [rsp+28h] [rbp-170h]
  char *v198; // [rsp+28h] [rbp-170h]
  char *v199; // [rsp+28h] [rbp-170h]
  int v200; // [rsp+28h] [rbp-170h]
  signed __int64 v201; // [rsp+28h] [rbp-170h]
  int v202; // [rsp+28h] [rbp-170h]
  int v203; // [rsp+28h] [rbp-170h]
  int v204; // [rsp+28h] [rbp-170h]
  unsigned __int64 v205; // [rsp+30h] [rbp-168h]
  __int64 v206; // [rsp+38h] [rbp-160h]
  char *v207; // [rsp+38h] [rbp-160h]
  Dwarf_Error *v208; // [rsp+38h] [rbp-160h]
  void *v209; // [rsp+38h] [rbp-160h]
  void *v210; // [rsp+38h] [rbp-160h]
  unsigned int v211; // [rsp+38h] [rbp-160h]
  char *v212; // [rsp+40h] [rbp-158h]
  _DWORD *v213; // [rsp+40h] [rbp-158h]
  char *ptr; // [rsp+48h] [rbp-150h]
  int ptra; // [rsp+48h] [rbp-150h]
  void *ptrh; // [rsp+48h] [rbp-150h]
  char *ptri; // [rsp+48h] [rbp-150h]
  char *ptrj; // [rsp+48h] [rbp-150h]
  void *ptrk; // [rsp+48h] [rbp-150h]
  void *ptrb; // [rsp+48h] [rbp-150h]
  void *ptrc; // [rsp+48h] [rbp-150h]
  char *ptrd; // [rsp+48h] [rbp-150h]
  void *ptre; // [rsp+48h] [rbp-150h]
  _DWORD *ptrf; // [rsp+48h] [rbp-150h]
  char *ptrg; // [rsp+48h] [rbp-150h]
  size_t size; // [rsp+50h] [rbp-148h]
  unsigned int sizee; // [rsp+50h] [rbp-148h]
  int sizef; // [rsp+50h] [rbp-148h]
  size_t sizea; // [rsp+50h] [rbp-148h]
  size_t sizeb; // [rsp+50h] [rbp-148h]
  unsigned int sizec; // [rsp+50h] [rbp-148h]
  _QWORD *sized; // [rsp+50h] [rbp-148h]
  int v233; // [rsp+58h] [rbp-140h]
  char *v234; // [rsp+58h] [rbp-140h]
  char *v235; // [rsp+58h] [rbp-140h]
  __int64 v236; // [rsp+60h] [rbp-138h]
  unsigned __int16 v237; // [rsp+60h] [rbp-138h]
  int nd; // [rsp+68h] [rbp-130h]
  __int64 n; // [rsp+68h] [rbp-130h]
  size_t na; // [rsp+68h] [rbp-130h]
  const char *nb; // [rsp+68h] [rbp-130h]
  size_t nc; // [rsp+68h] [rbp-130h]
  unsigned __int16 v243; // [rsp+70h] [rbp-128h]
  unsigned __int64 v244; // [rsp+70h] [rbp-128h]
  char *v245; // [rsp+78h] [rbp-120h]
  char *v246; // [rsp+78h] [rbp-120h]
  size_t v247; // [rsp+78h] [rbp-120h]
  char *v248; // [rsp+78h] [rbp-120h]
  Dwarf_Debug v249; // [rsp+80h] [rbp-118h]
  Dwarf_Debug v250; // [rsp+80h] [rbp-118h]
  char *v251; // [rsp+80h] [rbp-118h]
  Dwarf_Debug v252; // [rsp+80h] [rbp-118h]
  Dwarf_Error *v253; // [rsp+98h] [rbp-100h]
  Dwarf_Half v254; // [rsp+A6h] [rbp-F2h] BYREF
  Dwarf_Attribute v255; // [rsp+A8h] [rbp-F0h] BYREF
  Dwarf_Attribute v256; // [rsp+B0h] [rbp-E8h] BYREF
  Dwarf_Off v257; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v258; // [rsp+C0h] [rbp-D8h] BYREF
  char *s; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v260; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v261; // [rsp+D8h] [rbp-C0h] BYREF
  unsigned __int64 v262; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v263; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v264; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v265; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v266; // [rsp+100h] [rbp-98h] BYREF
  __int64 v267; // [rsp+108h] [rbp-90h] BYREF
  unsigned __int64 v268; // [rsp+110h] [rbp-88h] BYREF
  __int64 v269; // [rsp+118h] [rbp-80h] BYREF
  const char *v270; // [rsp+120h] [rbp-78h] BYREF
  char *v271; // [rsp+128h] [rbp-70h] BYREF
  char *v272[13]; // [rsp+130h] [rbp-68h] BYREF

  v272[5] = (char *)__readfsqword(0x28u);
  v6 = a4;
  v255 = nullptr;
  v256 = nullptr;
  v257 = 0;
  v254 = 0;
  v258 = 0;
  if ( a4 )
    *a4 = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v7 = *((__int64 **)a1 + 2);
  if ( !v7 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v8 = *v7;
  if ( !*v7 || *(_QWORD *)v8 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  section = _dwarf_load_section(*v7, v8 + 1056, a4);
  if ( section )
    return section;
  if ( !*(_QWORD *)(v8 + 1064) )
    return (unsigned int)-1;
  address_size = _dwarf_get_address_size((Dwarf_Debug)v8, a1, v11);
  section = dwarf_attr((Dwarf_Die)a1, 0x10u, &v255, v6);
  if ( section )
    return section;
  v12 = dwarf_whatform(v255, &v254, v6);
  v13 = v255;
  section = v12;
  if ( v12 )
    goto LABEL_65;
  if ( (unsigned __int16)(v254 - 6) > 1u && v254 != 23 )
    goto LABEL_16;
  section = dwarf_global_formref(v255, &v257, v6);
  if ( section )
  {
    v13 = v255;
    goto LABEL_65;
  }
  if ( v257 >= *(_QWORD *)(v8 + 1064) )
  {
    v13 = v255;
LABEL_16:
    dwarf_dealloc_attribute(v13);
    _dwarf_error(v8, v6, 120);
    return 1;
  }
  v14 = *(_QWORD *)(v8 + 1056);
  v272[0] = nullptr;
  v205 = v14;
  fission_addition_die = _dwarf_get_fission_addition_die(a1, 4, &v258, v272, v6);
  v13 = v255;
  section = fission_addition_die;
  if ( fission_addition_die )
  {
LABEL_65:
    dwarf_dealloc_attribute(v13);
    return section;
  }
  v195 = v257;
  v206 = v258;
  dwarf_dealloc_attribute(v255);
  v16 = dwarf_attr((Dwarf_Die)a1, 0x1Bu, &v256, v6);
  if ( v16 == 1 )
    return 1;
  v212 = nullptr;
  if ( !v16 )
  {
    v272[0] = nullptr;
    v41 = dwarf_formstring(v256, v272, v6);
    if ( v41 == 1 )
    {
      dwarf_dealloc_attribute(v256);
      return 1;
    }
    if ( !v41 )
      v212 = v272[0];
  }
  if ( v256 )
  {
    dwarf_dealloc_attribute(v256);
    v256 = nullptr;
  }
  alloc = (unsigned __int16 *)_dwarf_get_alloc(v8, 36, 1);
  if ( !alloc )
  {
    _dwarf_error(v8, v6, 62);
    return 1;
  }
  v260 = 0;
  v17 = *(char **)(v8 + 1064);
  v18 = (char *)(v205 + v206 + v195);
  v19 = (unsigned __int64)&v17[v205];
  s = v18;
  *((_QWORD *)alloc + 11) = v18;
  v272[0] = nullptr;
  if ( &v17[v205] < v18 + 4 )
    goto LABEL_67;
  ptr = v17;
  v196 = (char *)(v205 + v206 + v195);
  (*(void (__fastcall **)(char **, char *, __int64))(v8 + 8296))(v272, v18, 4);
  v20 = v196;
  v207 = v272[0];
  v21 = ptr;
  if ( v272[0] == (char *)0xFFFFFFFFLL )
  {
    v272[0] = nullptr;
    v42 = s + 4;
    v43 = s + 12;
    s += 4;
    if ( v19 < (unsigned __int64)v43 )
      goto LABEL_67;
    ptri = v196;
    v198 = v21;
    (*(void (__fastcall **)(char **, char *, __int64))(v8 + 8296))(v272, v42, 8);
    v44 = v272[0];
    v21 = v198;
    v20 = ptri;
    v207 = v272[0];
    if ( v198 >= v272[0] )
    {
      ptra = 8;
      v22 = s + 8;
      v23 = 12;
      goto LABEL_33;
    }
LABEL_77:
    _dwarf_create_area_len_error(v8, v6, v44, v21);
    goto LABEL_63;
  }
  if ( v272[0] )
  {
    v44 = v272[0];
    if ( ptr < v272[0] )
      goto LABEL_77;
LABEL_71:
    ptra = 4;
    v22 = s + 4;
    v23 = 4;
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(v8 + 8360) )
    goto LABEL_71;
  if ( *(_BYTE *)(v8 + 232) != 8 )
  {
    ptra = 4;
    v22 = s + 4;
    v23 = 4;
    goto LABEL_33;
  }
  if ( v19 < (unsigned __int64)(s + 8) )
    goto LABEL_67;
  ptrj = v196;
  v199 = v21;
  (*(void (__fastcall **)(char **, char *, __int64))(v8 + 8296))(v272, s, 8);
  v44 = v272[0];
  v21 = v199;
  v20 = ptrj;
  v207 = v272[0];
  if ( v199 < v272[0] )
    goto LABEL_77;
  ptra = 8;
  v22 = s + 8;
  v23 = 8;
LABEL_33:
  s = v22;
  alloc[20] = v23;
  *((_QWORD *)alloc + 12) = &v207[(_QWORD)v22];
  v197 = (unsigned __int64)&v207[(_QWORD)v22];
  *((_QWORD *)alloc + 2) = &v20[-*(_QWORD *)(v8 + 1056)];
  if ( (char *)v19 < &v207[(_QWORD)v22] )
  {
    dwarfstring_constructor(v272);
    v45 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the total length of this line table is too large at %llu bytes";
    dwarfstring_append_printf_u(
      v272,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the total length of this line table is too large at %llu bytes",
      v207);
LABEL_79:
    v46 = dwarfstring_string(v272, v45);
    _dwarf_error_string(v8, v6, 54, v46);
    dwarfstring_destructor(v272);
    goto LABEL_63;
  }
  size = (size_t)v20;
  *((_QWORD *)alloc + 4) = v207;
  if ( (unsigned int)_dwarf_read_unaligned_ck_wrapper(v8, &v260, v22, 2, v197, v6) == 1 )
    goto LABEL_63;
  v24 = v260;
  alloc[12] = v260;
  v25 = s;
  v243 = v24;
  v26 = s + 2;
  s += 2;
  if ( (unsigned __int16)(v24 - 2) > 3u && v24 != 0xF006 )
  {
    _dwarf_error(v8, v6, 48);
    goto LABEL_63;
  }
  if ( v24 == 5 )
  {
    if ( (unsigned __int64)v26 >= v197 )
      goto LABEL_85;
    *((_BYTE *)alloc + 42) = v25[2];
    s = v25 + 3;
    if ( (unsigned __int64)(v25 + 3) >= v197 )
      goto LABEL_85;
    v47 = v25[3];
    v26 = v25 + 4;
    s = v25 + 4;
    *((_BYTE *)alloc + 43) = v47;
  }
  else
  {
    *((_BYTE *)alloc + 42) = *((_BYTE *)v7 + 32);
    *((_BYTE *)alloc + 43) = *((_BYTE *)v7 + 33);
  }
  v272[0] = nullptr;
  v236 = ptra;
  if ( __CFADD__(v26, ptra) )
    goto LABEL_93;
  if ( v197 < (unsigned __int64)&v26[ptra] )
  {
LABEL_67:
    _dwarf_error_string(v8, v6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    goto LABEL_63;
  }
  (*(void (__fastcall **)(char **, char *, _QWORD))(v8 + 8296))(v272, v26, ptra);
  v27 = (void *)size;
  if ( v207 < v272[0] )
  {
    v190 = v272[0];
    dwarfstring_constructor(v272);
    v45 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the prologue length of  this line table is too large at %llu bytes";
    dwarfstring_append_printf_u(
      v272,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the prologue length of  this line table is too large at %llu bytes",
      v190);
    goto LABEL_79;
  }
  *((char **)alloc + 7) = v272[0];
  v28 = &s[ptra];
  *((_QWORD *)alloc + 14) = v28;
  s = v28;
  if ( (unsigned __int64)v28 >= v197 )
    goto LABEL_85;
  *((_BYTE *)alloc + 80) = *v28;
  v29 = v28 + 1;
  s = v28 + 1;
  if ( (unsigned __int16)(v243 - 4) <= 1u || v243 == 0xF006 )
  {
    if ( (unsigned __int64)v29 < v197 )
    {
      *((_BYTE *)alloc + 81) = v28[1];
      v29 = v28 + 2;
      s = v28 + 2;
      goto LABEL_45;
    }
LABEL_85:
    _dwarf_error(v8, v6, 54);
    goto LABEL_63;
  }
LABEL_45:
  if ( (unsigned __int64)v29 >= v197 )
    goto LABEL_85;
  *((_BYTE *)alloc + 120) = *v29;
  s = v29 + 1;
  if ( (unsigned __int64)(v29 + 1) >= v197 )
    goto LABEL_85;
  *((_BYTE *)alloc + 121) = v29[1];
  s = v29 + 2;
  if ( (unsigned __int64)(v29 + 2) >= v197 )
    goto LABEL_96;
  v30 = v29[2];
  *((_BYTE *)alloc + 122) = v30;
  if ( !v30 )
  {
    _dwarf_error(v8, v6, 330);
    goto LABEL_63;
  }
  s = v29 + 3;
  if ( (unsigned __int64)(v29 + 3) >= v197 )
    goto LABEL_96;
  v31 = (unsigned __int8)v29[3];
  v34 = v29 + 4;
  v32 = v31;
  *((_BYTE *)alloc + 123) = v31;
  *((_QWORD *)alloc + 16) = v34;
  v33 = &v34[v31 - 1];
  LOBYTE(v34) = v32 - 1;
  s = v33;
  *((_BYTE *)alloc + 136) = v32 - 1;
  if ( (unsigned __int64)v33 >= v197 )
    goto LABEL_96;
  if ( (unsigned __int8)v34 > 0xFu )
  {
    _dwarf_print_header_issue(
      v8,
      (int)"Too many standard operands in linetable header: ",
      size,
      (unsigned __int8)v34,
      0,
      0,
      0,
      a2);
    LODWORD(v34) = 15;
    v27 = (void *)size;
  }
  else
  {
    LODWORD(v34) = (char)v34;
  }
  v35 = 0;
  v36 = *((_QWORD *)alloc + 16);
  if ( v36 + (unsigned __int64)(unsigned int)v34 >= v19 )
  {
    _dwarf_error_string(
      v8,
      v6,
      56,
      "DW_DLE_LINE_NUM_OPERANDS_BAD: The .debug_line section is too short to be real as a standard opcode table does not fit");
    goto LABEL_63;
  }
  while ( 1 )
  {
    v37 = (unsigned int)v35;
    if ( (unsigned int)v35 >= (unsigned int)v34 )
      break;
    v38 = *((unsigned __int8 *)qword_B8C40 + v35++);
    v39 = *(_BYTE *)(v36 + v35 - 1);
    if ( (_BYTE)v38 != v39 )
    {
      if ( a2 )
      {
        nd = (int)v34;
        v233 = v38;
        ptrh = v27;
        sizee = v37;
        _dwarf_print_header_issue(
          v8,
          (int)"standard-operands did not match, checked",
          (int)v27,
          (int)v34,
          v37,
          v38,
          v39,
          a2);
        v38 = v233;
        v37 = sizee;
        v27 = ptrh;
        v36 = *((_QWORD *)alloc + 16);
        LODWORD(v34) = nd;
      }
      if ( (unsigned int)v34 > 0xC )
        LODWORD(v34) = 12;
      v40 = 0;
      do
      {
        if ( *((_BYTE *)qword_B8C30 + v40) != *(_BYTE *)(v36 + v40) )
        {
          _dwarf_error_string(
            v8,
            v6,
            56,
            "DW_DLE_LINE_NUM_OPERANDS_BAD we cannot determine the size of the standard opcode table in the line table header");
          goto LABEL_63;
        }
        ++v40;
      }
      while ( (unsigned int)v40 < (unsigned int)v34 );
      if ( a2 )
      {
        sizef = (int)v34;
        ptrk = v27;
        _dwarf_print_header_issue(v8, (int)"arm (incorrect) operands in use: ", (int)v27, (int)v34, v37, v38, v39, a2);
        v27 = ptrk;
        LODWORD(v34) = sizef;
      }
      break;
    }
  }
  if ( v243 == 2 )
  {
    if ( *((_BYTE *)alloc + 136) == 12 )
    {
      v210 = v27;
      _dwarf_print_header_issue(
        v8,
        (int)"standard DWARF3 operands matched, but is DWARF2 linetable: count",
        (int)v27,
        (int)v34,
        0,
        0,
        0,
        a2);
      v27 = v210;
    }
    if ( (unsigned __int64)s < v197 )
    {
LABEL_284:
      v209 = v27;
      v153 = malloc(0x28u);
      *((_QWORD *)alloc + 18) = v153;
      if ( !v153 )
        goto LABEL_131;
      v154 = 10;
      v155 = v153;
      while ( v154 )
      {
        *v155++ = 0;
        --v154;
      }
      ptrf = (_DWORD *)a2;
      v156 = 5;
      v157 = 0;
      while ( 1 )
      {
        v159 = s;
        if ( !*s )
          break;
        if ( v157 >= v156 )
        {
          v158 = (char *)realloc(*((void **)alloc + 18), 16 * v156);
          if ( !v158 )
          {
            _dwarf_error_string(
              v8,
              v6,
              62,
              "DW_DLE_ALLOC_FAIL reallocating an array of include directories in a line table");
            goto LABEL_63;
          }
          v235 = v158;
          memset(&v158[8 * v156], 0, 8 * v156);
          v156 *= 2LL;
          v159 = s;
          *((_QWORD *)alloc + 18) = v235;
        }
        *(_QWORD *)(*((_QWORD *)alloc + 18) + 8 * v157) = v159;
        v68 = _dwarf_check_string_valid(v8, v209, v159, v197, 364, v6);
        if ( v68 )
        {
          v67 = ptrf;
          goto LABEL_134;
        }
        ++v157;
        v160 = strlen(s);
        s += v160 + 1;
        if ( (unsigned __int64)s >= v197 )
          goto LABEL_204;
      }
      v161 = ++s;
      v67 = ptrf;
      *((_QWORD *)alloc + 19) = v157;
      if ( v197 >= (unsigned __int64)v161 )
      {
        if ( (char *)v197 == v161 )
          goto LABEL_204;
        while ( *v161 )
        {
          v166 = calloc(0x60u, 1u);
          v167 = v166;
          if ( !v166 )
            goto LABEL_131;
          _dwarf_add_to_files_list(alloc, v166);
          v168 = s;
          v167[1] = s;
          v68 = _dwarf_check_string_valid(v8, v209, v168, v197, 364, v6);
          if ( v68 )
            goto LABEL_134;
          v169 = strlen(s);
          s += v169 + 1;
          ptrg = s;
          v261 = 0;
          v262 = 0;
          if ( (unsigned int)dwarf_decode_leb128(s, &v261, &v262, v197) == 1 )
            goto LABEL_306;
          v162 = &ptrg[v261];
          s = &ptrg[v261];
          if ( *((_QWORD *)alloc + 19) < v262 )
          {
            _dwarf_error(v8, v6, 127);
            goto LABEL_63;
          }
          v167[3] = v262;
          *((_BYTE *)v167 + 88) = 1;
          v263 = 0;
          v264 = 0;
          if ( (unsigned int)dwarf_decode_leb128(v162, &v263, &v264, v197) == 1
            || (*((_BYTE *)v167 + 89) = 1,
                v163 = &v162[v263],
                s = v163,
                v167[4] = v264,
                v271 = nullptr,
                v272[0] = nullptr,
                (unsigned int)dwarf_decode_leb128(v163, &v271, v272, v197) == 1) )
          {
LABEL_306:
            _dwarf_error_string(v8, v6, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
            goto LABEL_63;
          }
          v164 = v272[0];
          v165 = v271;
          *((_BYTE *)v167 + 90) = 1;
          v161 = &v165[(_QWORD)s];
          v167[5] = v164;
          s = v161;
          if ( (unsigned __int64)v161 >= v197 )
            goto LABEL_204;
        }
        s = v161 + 1;
        if ( v197 >= (unsigned __int64)(v161 + 1) )
          goto LABEL_258;
      }
LABEL_96:
      _dwarf_error(v8, v6, 120);
      goto LABEL_63;
    }
LABEL_315:
    _dwarf_error_string(
      v8,
      v6,
      120,
      "DW_DLE_LINE_OFFSET_BAD we run off the end of the .debug_line section reading a line table header");
    goto LABEL_63;
  }
  v48 = s;
  if ( (unsigned __int64)s >= v197 )
    goto LABEL_315;
  if ( v243 <= 4u )
    goto LABEL_284;
  if ( v243 != 0xF006 )
    goto LABEL_105;
  ++s;
  if ( v197 < (unsigned __int64)(v48 + 1) )
    goto LABEL_96;
  if ( (char *)v197 == v48 + 1 || v48[1] )
    goto LABEL_204;
  v146 = v48 + 2;
  s = v48 + 2;
  if ( v197 < (unsigned __int64)(v48 + 2) )
    goto LABEL_96;
  v147 = &dword_A63DC;
  v148 = v48 + 7;
  do
  {
    if ( (unsigned __int64)v146 >= v197 )
      goto LABEL_204;
    v149 = *(unsigned __int8 *)v147;
    if ( *v146 != (_BYTE)v149 )
      goto LABEL_204;
    ++v146;
    v147 = (int *)((char *)v147 + 1);
    s = v146;
  }
  while ( v146 != v148 );
  v272[0] = nullptr;
  if ( __CFADD__(v146, v236) )
  {
LABEL_93:
    _dwarf_error_string(v8, v6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    goto LABEL_63;
  }
  if ( v197 < (unsigned __int64)&v146[v236] )
    goto LABEL_67;
  (*(void (__fastcall **)(char **, char *, __int64, __int64, __int64))(v8 + 8296))(v272, v146, v236, v149, v37);
  v150 = s;
  *((char **)alloc + 9) = v272[0];
  v151 = &v150[v236];
  v272[0] = nullptr;
  s = v151;
  if ( __CFADD__(v151, v236) )
    goto LABEL_93;
  if ( v197 < (unsigned __int64)&v151[v236] )
    goto LABEL_67;
  (*(void (__fastcall **)(char **, char *, __int64))(v8 + 8296))(v272, v151, v236);
  v152 = v272[0];
  v48 = &s[v236];
  *((char **)alloc + 8) = v272[0];
  s = v48;
  if ( v197 < (unsigned __int64)v48 )
  {
    _dwarf_error_string(v8, v6, 120, "DW_DLE_LINE_OFFSET_BAD The line table pointer points past end of line table.");
    goto LABEL_63;
  }
  if ( *(_QWORD *)(v8 + 240) < (unsigned __int64)v152 )
  {
    _dwarf_error_string(
      v8,
      v6,
      120,
      "DW_DLE_LINE_OFFSET_BAD The line table actuals offset is larger than  the size of the object file. Corrupt DWARF");
    goto LABEL_63;
  }
  if ( (char *)v197 < &v152[(_QWORD)v48] )
  {
    _dwarf_error_string(v8, v6, 120, "DW_DLE_LINE_OFFSET_BAD The line table actuals offset is too large to be real.");
    goto LABEL_63;
  }
LABEL_105:
  v271 = nullptr;
  if ( (unsigned __int64)v48 >= v197 )
    goto LABEL_204;
  v49 = (unsigned __int8)*v48;
  v50 = v48 + 1;
  s = v48 + 1;
  sizea = v49;
  *((_QWORD *)alloc + 20) = v49;
  if ( v49 )
  {
    ptrb = malloc(16 * v49);
    if ( !ptrb )
    {
LABEL_131:
      _dwarf_error(v8, v6, 62);
      goto LABEL_63;
    }
    v51 = v50;
    v52 = 0;
    do
    {
      v265 = 0;
      v266 = 0;
      if ( (unsigned int)dwarf_decode_leb128(v51, &v265, &v266, v197) == 1
        || (v53 = &v51[v265],
            *((_QWORD *)ptrb + 2 * v52) = v266,
            v249 = (Dwarf_Debug)(16 * v52),
            v267 = 0,
            v268 = 0,
            s = v53,
            (unsigned int)dwarf_decode_leb128(v53, &v267, &v268, v197) == 1) )
      {
        _dwarf_error_string(v8, v6, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        free(ptrb);
        goto LABEL_63;
      }
      ++v52;
      v51 = &v53[v267];
      *(_QWORD *)((char *)v249 + (_QWORD)ptrb + 8) = v268;
      s = v51;
    }
    while ( v52 < sizea );
  }
  else
  {
    ptrb = nullptr;
  }
  if ( (unsigned int)sub_4B320((__int64 *)&s, &v271, v8, (__int64)v6, v197) )
    goto LABEL_313;
  if ( v207 < v271 )
  {
    free(ptrb);
    dwarfstring_constructor(v272);
    v45 = "DW_DLE_DEBUG_LINE_LENGTH_BAD  the directories count of  this line table is too large at %llu";
    dwarfstring_append_printf_u(
      v272,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the directories count of  this line table is too large at %llu",
      v271);
    goto LABEL_79;
  }
  v245 = v271;
  n = 8LL * (_QWORD)v271;
  v54 = malloc(8LL * (_QWORD)v271);
  *((_QWORD *)alloc + 18) = v54;
  if ( !v54 )
  {
    v66 = ptrb;
LABEL_130:
    free(v66);
    goto LABEL_131;
  }
  if ( !sizea && v245 )
  {
    free(ptrb);
    _dwarf_error_string(
      v8,
      v6,
      346,
      "DW_DLE_DIRECTORY_FORMAT_COUNT_VS_DIRECTORIES_MISMATCH: format count is zero yet directories count > 0");
    goto LABEL_63;
  }
  memset(v54, 0, n);
  na = a2;
  v55 = s;
  v56 = v8;
  v57 = (__int64)v6;
  v58 = 0;
  v59 = section;
  while ( v58 < (unsigned __int64)v271 )
  {
    v60 = v56;
    v61 = ptrb;
    v62 = 0;
    v63 = v59;
    while ( v62 < sizea )
    {
      v64 = v61[1];
      if ( (unsigned __int64)v55 >= v197 )
      {
        free(ptrb);
        _dwarf_error_string(v60, v57, 235, " Running off end of line table reading directory path");
        goto LABEL_63;
      }
      if ( *v61 != 1 )
      {
        v8 = v60;
        goto LABEL_203;
      }
      v61 += 2;
      v272[0] = nullptr;
      v65 = _dwarf_decode_line_string_form(v60, 1, v64, v236, (int)&s, v197, (__int64)v272, v57);
      if ( v65 )
      {
        v8 = v60;
        v200 = v65;
        section = v63;
        v67 = (_DWORD *)na;
        v6 = (Dwarf_Error *)v57;
        free(ptrb);
        v68 = v200;
        goto LABEL_134;
      }
      ++v62;
      *(char **)(*((_QWORD *)alloc + 18) + 8 * v58) = v272[0];
      v55 = s;
    }
    v59 = v63;
    v56 = v60;
    if ( v197 < (unsigned __int64)v55 )
    {
      v8 = v60;
LABEL_203:
      v6 = (Dwarf_Error *)v57;
      free(ptrb);
      goto LABEL_204;
    }
    ++v58;
  }
  v122 = v59;
  v8 = v56;
  v6 = (Dwarf_Error *)v57;
  v67 = (_DWORD *)na;
  *((_QWORD *)alloc + 19) = v271;
  *((_QWORD *)alloc + 22) = ptrb;
  v268 = 0;
  if ( (unsigned __int64)v55 >= v197 )
    goto LABEL_204;
  v123 = (unsigned __int8)*v55;
  v124 = v55 + 1;
  s = v124;
  *((_QWORD *)alloc + 23) = v123;
  v247 = v123;
  ptrd = v124;
  v125 = malloc(16 * v123);
  if ( !v125 )
    goto LABEL_131;
  if ( (unsigned __int64)ptrd >= v197 )
  {
    free(v125);
    _dwarf_error_string(v8, v57, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR: reading filename format entries");
    goto LABEL_63;
  }
  v126 = v125;
  sizeb = 0;
  v127 = v125;
  while ( sizeb < v247 )
  {
    v269 = 0;
    v251 = s;
    v270 = nullptr;
    if ( (unsigned int)dwarf_decode_leb128(s, &v269, &v270, v197) == 1
      || (v128 = &v251[v269],
          v127 += 2,
          s = &v251[v269],
          *(v127 - 2) = v270,
          v271 = nullptr,
          v272[0] = nullptr,
          (unsigned int)dwarf_decode_leb128(v128, &v271, v272, v197) == 1) )
    {
      _dwarf_error_string(v8, v57, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      free(v126);
      goto LABEL_63;
    }
    ++sizeb;
    s = &v128[(_QWORD)v271];
    *(v127 - 1) = v272[0];
  }
  v6 = (Dwarf_Error *)v57;
  v129 = sub_4B320((__int64 *)&s, &v268, v8, v57, v197);
  v130 = v126;
  if ( v129 )
    goto LABEL_250;
  v252 = nullptr;
  if ( (unsigned __int64)v207 < v268 )
  {
    dwarfstring_constructor(v272);
    dwarfstring_append_printf_u(
      v272,
      "DW_DLE_DEBUG_LINE_LENGTH_BAD  the files count of  this line table is too large at %llu files",
      v268);
    v142 = dwarfstring_string(
             v272,
             "DW_DLE_DEBUG_LINE_LENGTH_BAD  the files count of  this line table is too large at %llu files",
             v141);
    _dwarf_error_string(v8, v57, 54, v142);
    dwarfstring_destructor(v272);
    free(v126);
    goto LABEL_63;
  }
  ptre = v126;
  sizec = v122;
  while ( 1 )
  {
    if ( (unsigned __int64)v252 >= v268 )
    {
      section = sizec;
      *((_QWORD *)alloc + 26) = ptre;
      if ( v243 != 0xF006 )
      {
LABEL_258:
        v69 = *((_QWORD *)alloc + 14);
        v143 = (char *)(v69 + *((_QWORD *)alloc + 7));
LABEL_259:
        v234 = s;
        if ( v197 >= (unsigned __int64)s )
        {
          if ( s == v143 )
          {
            v201 = 0;
            v246 = nullptr;
          }
          else
          {
            if ( v143 < s )
            {
              _dwarf_error(v8, v6, 55);
              goto LABEL_63;
            }
            v246 = s;
            v201 = v143 - s;
          }
          v144 = *((_QWORD *)alloc + 12);
          *((_QWORD *)alloc + 11) = s;
          v145 = *((_QWORD *)alloc + 8);
          v244 = v144;
          if ( v145 )
          {
            *((_BYTE *)alloc + 296) = 2;
            v70 = v201;
            v201 = v145;
LABEL_138:
            v71 = v201;
            v201 = v70;
            nb = (const char *)(v69 + v71);
          }
          else
          {
            *((_BYTE *)alloc + 296) = (unsigned __int64)v234 < v144;
            nb = nullptr;
          }
          goto LABEL_139;
        }
        goto LABEL_96;
      }
      v272[0] = nullptr;
      if ( (unsigned __int64)s < v197 )
      {
        v170 = (unsigned __int8)*s;
        v171 = ++s;
        nc = v170;
        v172 = 8 * v170;
        ptrb = malloc(8 * v170);
        if ( !ptrb )
        {
          _dwarf_error_string(v8, v6, 62, "DW_DLE_ALLOC_FAIL allocating subprog_entry_types");
          goto LABEL_63;
        }
        if ( (unsigned __int64)v207 >= nc )
        {
          if ( (unsigned __int64)v171 >= v197 )
          {
            free(ptrb);
            _dwarf_error_string(
              v8,
              v6,
              235,
              "DW_DLE_LINE_NUMBER_HEADER_ERROR: Line table forms odd, experimental libdwarf");
            goto LABEL_63;
          }
          sized = malloc(v172);
          v173 = 0;
          if ( !sized )
          {
            free(ptrb);
            _dwarf_error(v8, v6, 62);
            _dwarf_error_string(v8, v6, 62, "DW_DLE_ALLOC_FAIL allocating subprog_entry_forms");
            goto LABEL_63;
          }
          while ( v173 < nc )
          {
            if ( (unsigned int)sub_4B320((__int64 *)&s, (_QWORD *)ptrb + v173, v8, (__int64)v6, v197) )
              goto LABEL_350;
            v174 = *((_QWORD *)ptrb + v173);
            if ( (unsigned __int64)v207 < v174 )
            {
              v186 = "Subprog entry_types[i] count Count too large to be real";
              goto LABEL_349;
            }
            if ( (unsigned int)sub_4B320((__int64 *)&s, &sized[v173], v8, (__int64)v6, v197) )
              goto LABEL_350;
            v174 = sized[v173];
            if ( (unsigned __int64)v207 < v174 )
            {
              v186 = "Subprog entry_forms[i] count Count too large to be real";
              goto LABEL_349;
            }
            ++v173;
          }
          if ( !(unsigned int)sub_4B320((__int64 *)&s, v272, v8, (__int64)v6, v197) )
          {
            LODWORD(v174) = v272[0];
            if ( v207 >= v272[0] )
            {
              v175 = 24 * (__int64)v272[0];
              v176 = malloc(24 * (__int64)v272[0]);
              *((_QWORD *)alloc + 32) = v176;
              if ( v176 )
              {
                memset(v176, 0, v175);
                v211 = section;
                v177 = v67;
                v178 = v8;
                for ( i = nullptr; ; i = v248 + 1 )
                {
                  v180 = v272[0];
                  if ( i >= v272[0] )
                  {
                    v8 = v178;
                    v67 = v177;
                    section = v211;
                    free(ptrb);
                    free(sized);
                    v69 = *((_QWORD *)alloc + 14);
                    v188 = *((_QWORD *)alloc + 9);
                    *((_QWORD *)alloc + 33) = v180;
                    v143 = (char *)(v69 + v188);
                    goto LABEL_259;
                  }
                  v181 = *((_QWORD *)alloc + 32) + 24LL * (_QWORD)i;
                  if ( (unsigned __int64)s >= v197 )
                  {
                    free(ptrb);
                    free(sized);
                    _dwarf_error_string(
                      v178,
                      v6,
                      235,
                      "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading suprogram entry subprogs in experimental line table we ru"
                      "n off the end of the table");
                    goto LABEL_63;
                  }
                  v248 = i;
                  for ( j = 0; j < nc; ++j )
                  {
                    v183 = *((_QWORD *)ptrb + j);
                    v184 = sized[j];
                    switch ( v183 )
                    {
                      case 7LL:
                        v187 = _dwarf_decode_line_udata_form(v178, 7, v184, (int)&s, (int)v181 + 8, v197, (__int64)v6);
                        break;
                      case 8LL:
                        v187 = _dwarf_decode_line_udata_form(v178, 8, v184, (int)&s, (int)v181 + 16, v197, (__int64)v6);
                        break;
                      case 6LL:
                        v185 = _dwarf_decode_line_string_form(v178, 6, v184, v236, (int)&s, v197, v181, (__int64)v6);
                        if ( v185 )
                        {
                          section = v211;
                          v203 = v185;
                          v8 = v178;
                          v67 = v177;
                          free(ptrb);
                          free(sized);
                          v68 = v203;
                          goto LABEL_134;
                        }
                        goto LABEL_345;
                      default:
                        v192 = *((void **)ptrb + j);
                        free(sized);
                        free(ptrb);
                        _dwarf_report_bad_lnct(v178, v192, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR", v6);
                        goto LABEL_63;
                    }
                    if ( v187 )
                    {
                      section = v211;
                      v204 = v187;
                      v8 = v178;
                      v67 = v177;
                      free(sized);
                      free(ptrb);
                      v68 = v204;
LABEL_134:
                      if ( v68 == 1 )
                        goto LABEL_63;
                      if ( v68 != -1 )
                      {
                        v234 = nullptr;
                        v244 = *((_QWORD *)alloc + 12);
                        v201 = *((_QWORD *)alloc + 8);
                        if ( v201 )
                        {
                          v246 = nullptr;
                          v69 = *((_QWORD *)alloc + 14);
                          v70 = 0;
                          goto LABEL_138;
                        }
                        v246 = nullptr;
                        nb = nullptr;
LABEL_139:
                        v237 = alloc[12];
                        *((_QWORD *)alloc + 35) = v212;
                        if ( a3 )
                        {
                          dwarf_srclines_dealloc_b(alloc);
                          return section;
                        }
                        dwarfstring_constructor(v272);
                        dwarfstring_append_printf_i(v272, "total line info length %ld bytes,", *((_QWORD *)alloc + 4));
                        dwarfstring_append_printf_u(v272, " line offset 0x%08llx", *((_QWORD *)alloc + 2));
                        dwarfstring_append_printf_u(v272, " %llu\n", *((_QWORD *)alloc + 2));
                        v72 = alloc[12];
                        if ( v237 > 5u )
                        {
                          v73 = "  line table version 0x%x\n";
                          dwarfstring_append_printf_u(v272, "  line table version 0x%x\n", v72);
                        }
                        else
                        {
                          v73 = "  line table version     %d\n";
                          dwarfstring_append_printf_i(v272, "  line table version     %d\n", v72);
                          if ( v237 == 5 )
                          {
                            dwarfstring_append_printf_i(
                              v272,
                              "  address size          %d\n",
                              *((unsigned __int8 *)alloc + 42));
                            v73 = "  segment selector size %d\n";
                            dwarfstring_append_printf_i(
                              v272,
                              "  segment selector size %d\n",
                              *((unsigned __int8 *)alloc + 43));
                          }
                        }
                        v74 = dwarfstring_string(v272, v73);
                        _dwarf_printf(v8, v74);
                        dwarfstring_reset(v272, v74);
                        dwarfstring_append_printf_i(v272, "  line table length field length %d\n", alloc[20]);
                        dwarfstring_append_printf_i(v272, "  prologue length       %d\n", *((_QWORD *)alloc + 7));
                        dwarfstring_append_printf_s();
                        dwarfstring_append_printf_i(
                          v272,
                          "  min instruction length %d\n",
                          *((unsigned __int8 *)alloc + 80));
                        v76 = dwarfstring_string(v272, "  min instruction length %d\n", v75);
                        _dwarf_printf(v8, v76);
                        dwarfstring_reset(v272, v76);
                        if ( (unsigned int)v237 - 4 <= 1 || v237 == 61446 )
                        {
                          dwarfstring_append_printf_u(
                            v272,
                            "  maximum ops per instruction %u\n",
                            *((unsigned __int8 *)alloc + 81));
                          v102 = dwarfstring_string(v272, "  maximum ops per instruction %u\n", v101);
                          _dwarf_printf(v8, v102);
                          dwarfstring_reset(v272, v102);
                          if ( v237 == 61446 )
                          {
                            dwarfstring_append_printf_u(
                              v272,
                              "  actuals table offset 0x%08llx\n",
                              *((_QWORD *)alloc + 8));
                            dwarfstring_append_printf_u(
                              v272,
                              "  logicals table offset 0x%08llx\n",
                              *((_QWORD *)alloc + 9));
                            v104 = dwarfstring_string(v272, "  logicals table offset 0x%08llx\n", v103);
                            _dwarf_printf(v8, v104);
                            dwarfstring_reset(v272, v104);
                          }
                        }
                        dwarfstring_append_printf_i(
                          v272,
                          "  default is stmt        %d\n",
                          *((unsigned __int8 *)alloc + 120));
                        dwarfstring_append_printf_i(v272, "  line base              %d\n", *((char *)alloc + 121));
                        dwarfstring_append_printf_i(
                          v272,
                          "  line_range             %d\n",
                          *((unsigned __int8 *)alloc + 122));
                        dwarfstring_append_printf_i(
                          v272,
                          "  opcode base            %d\n",
                          *((unsigned __int8 *)alloc + 123));
                        dwarfstring_append_printf_i(
                          v272,
                          "  standard opcode count  %d\n",
                          *((unsigned __int8 *)alloc + 136));
                        v78 = dwarfstring_string(v272, "  standard opcode count  %d\n", v77);
                        _dwarf_printf(v8, v78);
                        dwarfstring_reset(v272, v78);
                        if ( *((_BYTE *)alloc + 123) > 1u )
                        {
                          v208 = v6;
                          v79 = 1;
                          do
                          {
                            dwarfstring_append_printf_i(v272, "  opcode[%2d] length", v79);
                            v80 = *(unsigned __int8 *)(*((_QWORD *)alloc + 16) + v79++ - 1);
                            dwarfstring_append_printf_i(v272, "  %d\n", v80);
                            v82 = dwarfstring_string(v272, "  %d\n", v81);
                            _dwarf_printf(v8, v82);
                            dwarfstring_reset(v272, v82);
                          }
                          while ( v79 < *((unsigned __int8 *)alloc + 123) );
                          v6 = v208;
                        }
                        dwarfstring_destructor(v272);
                        dwarfstring_constructor_static(v272, qword_B9260, 200);
                        if ( v237 == 5 )
                        {
                          v109 = *((struct Dwarf_Debug_s **)alloc + 20);
                          v250 = v109;
                          dwarfstring_constructor(v272);
                          dwarfstring_append_printf_u(v272, "  directory entry format count %u\n", (_DWORD)v109);
                          v111 = dwarfstring_string(v272, "  directory entry format count %u\n", v110);
                          _dwarf_printf(v8, v111);
                          dwarfstring_reset(v272, v111);
                          if ( v109 )
                          {
                            v253 = v6;
                            v112 = nullptr;
                            do
                            {
                              v270 = nullptr;
                              v271 = nullptr;
                              v113 = (unsigned int *)(16LL * (_QWORD)v112 + *((_QWORD *)alloc + 22));
                              dwarfstring_append_printf_u(v272, "  format [%2u] ", v112);
                              if ( (unsigned int)dwarf_get_LNCT_name(*v113, &v270) )
                                v270 = "<unknown type>";
                              dwarfstring_append_printf_u(v272, " type 0x%08llx", *(_QWORD *)v113);
                              dwarfstring_append_printf_s();
                              if ( dwarf_get_FORM_name(v113[2], (const char **)&v271) )
                                v271 = "<unknown form>";
                              v112 = (Dwarf_Debug)((char *)v112 + 1);
                              dwarfstring_append_printf_u(v272, "               code 0x%08llx", *((_QWORD *)v113 + 1));
                              dwarfstring_append_printf_s();
                              v115 = dwarfstring_string(v272, " %-20s\n", v114);
                              _dwarf_printf(v8, v115);
                              dwarfstring_reset(v272, v115);
                            }
                            while ( v250 != v112 );
                            v6 = v253;
                          }
                          dwarfstring_append_printf_i(v272, "  include directories count %d\n", *((_DWORD *)alloc + 38));
                          v117 = dwarfstring_string(v272, "  include directories count %d\n", v116);
                          _dwarf_printf(v8, v117);
                          dwarfstring_reset(v272, v117);
                          v87 = *((_QWORD *)alloc + 19);
                          v86 = 0;
                        }
                        else
                        {
                          v83 = *((_QWORD *)alloc + 19);
                          if ( v83 )
                          {
                            v84 = "  include directories count %d (index starts at 1)\n";
                            dwarfstring_append_printf_i(
                              v272,
                              "  include directories count %d (index starts at 1)\n",
                              v83);
                          }
                          else
                          {
                            v84 = "  include directories count %d\n";
                            dwarfstring_append_printf_i(v272, "  include directories count %d\n", 0);
                          }
                          v85 = dwarfstring_string(v272, v84);
                          _dwarf_printf(v8, v85);
                          dwarfstring_reset(v272, v85);
                          v86 = 1;
                          v87 = *((_QWORD *)alloc + 19) + 1LL;
                        }
                        v88 = 0;
                        if ( v86 < v87 )
                        {
                          v191 = (void *)v8;
                          v89 = v86;
                          do
                          {
                            v90 = v89++;
                            dwarfstring_append_printf_u(v272, "  include dir[%u] ", v90);
                            v88 += 8;
                            dwarfstring_append_printf_s();
                            v92 = dwarfstring_string(v272, "%s\n", v91);
                            _dwarf_printf(v191, v92);
                            dwarfstring_reset(v272, v92);
                          }
                          while ( v89 != v87 );
                          v8 = (__int64)v191;
                        }
                        dwarfstring_destructor(v272);
                        dwarfstring_constructor_static(v272, qword_B9260, 200);
                        if ( v237 == 5 )
                        {
                          v96 = *((_QWORD *)alloc + 23);
                          dwarfstring_append_printf_u(v272, "  file entry format count      %u\n", v96);
                          if ( v96 )
                          {
                            ptrc = (void *)v8;
                            v97 = 0;
                            do
                            {
                              v270 = nullptr;
                              v271 = nullptr;
                              v98 = (unsigned int *)(*((_QWORD *)alloc + 26) + 16 * v97);
                              dwarfstring_append_printf_u(v272, "  format [%2u] ", v97);
                              if ( (unsigned int)dwarf_get_LNCT_name(*v98, &v270) )
                                v270 = "<unknown type>";
                              dwarfstring_append_printf_u(v272, " type 0x%08llx", *(_QWORD *)v98);
                              dwarfstring_append_printf_s();
                              if ( dwarf_get_FORM_name(v98[2], (const char **)&v271) )
                                v271 = "<unknown form>";
                              ++v97;
                              dwarfstring_append_printf_u(v272, "               code 0x%08llx", *((_QWORD *)v98 + 1));
                              dwarfstring_append_printf_s();
                              v100 = dwarfstring_string(v272, " %-20s\n", v99);
                              _dwarf_printf(ptrc, v100);
                              dwarfstring_reset(v272, v100);
                            }
                            while ( v96 != v97 );
                            v8 = (__int64)ptrc;
                          }
                          dwarfstring_destructor(v272);
                          sub_4AFC0(v8, (__int64)alloc);
                        }
                        else
                        {
                          sub_4AFC0(v8, (__int64)alloc);
                          dwarfstring_destructor(v272);
                          if ( v237 == 0xF006 )
                          {
                            v105 = *((_QWORD *)alloc + 33);
                            v106 = *((_QWORD *)alloc + 32);
                            dwarfstring_constructor_static(v272, qword_B9260, 200);
                            dwarfstring_append_printf_u(v272, "  subprograms count %llu\n", v105);
                            if ( v105 )
                            {
                              dwarfstring_append();
                              v118 = dwarfstring_string(v272, "    indx  file   line   name\n");
                              _dwarf_printf(v8, v118);
                              dwarfstring_reset(v272, v118);
                              v213 = v67;
                              v119 = 0;
                              do
                              {
                                ++v119;
                                v106 += 24;
                                dwarfstring_append_printf_u(v272, "    [%2llu", v119);
                                dwarfstring_append_printf_u(v272, "] %4llu", *(_QWORD *)(v106 - 16));
                                dwarfstring_append_printf_u(v272, "    %4llu", *(_QWORD *)(v106 - 8));
                                dwarfstring_append_printf_s();
                                v121 = dwarfstring_string(v272, " %s\n", v120);
                                _dwarf_printf(v8, v121);
                                dwarfstring_reset(v272, v121);
                              }
                              while ( v105 != v119 );
                              v67 = v213;
                            }
                            else
                            {
                              v108 = dwarfstring_string(v272, "  subprograms count %llu\n", v107);
                              _dwarf_printf(v8, v108);
                              dwarfstring_reset(v272, v108);
                            }
                            dwarfstring_destructor(v272);
                          }
                        }
                        dwarfstring_constructor(v272);
                        if ( v201 )
                        {
                          dwarfstring_append_printf_u(
                            v272,
                            "*** DWARF CHECK: the line table prologue  header_length  is %llu too high, we pretend it is smaller.",
                            v201);
                          dwarfstring_append_printf_u(v272, "Section offset: 0x%08llx", &v246[-v205]);
                          dwarfstring_append_printf_u(v272, " (%llu) ***\n", &v246[-v205]);
                          ++*v67;
                        }
                        dwarfstring_append_printf_u(v272, "  statement prog offset in section: 0x%08llx", &v234[-v205]);
                        dwarfstring_append_printf_u(v272, " (%llu)\n", &v234[-v205]);
                        v94 = dwarfstring_string(v272, " (%llu)\n", v93);
                        _dwarf_printf(v8, v94);
                        dwarfstring_reset(v272, v94);
                        if ( nb )
                        {
                          if ( alloc[12] != 0xF006 )
                          {
                            dwarf_srclines_dealloc_b(alloc);
                            dwarfstring_destructor(v272);
                            _dwarf_error(v8, v6, 48);
                            return 1;
                          }
                          _dwarf_printf(v8, "\nLogicals Table\n");
                          _dwarf_printf(
                            v8,
                            "                                                                              s pe\n"
                            "                                                                              tirp\n"
                            "                                                                              msoi\n"
                            " section          op                                                          tall\n"
                            " offset      row  code                address/indx fil lne col disc cntx subp ????\n");
                          v95 = sub_4B3E0(
                                  (Dwarf_Debug)v8,
                                  v234,
                                  (unsigned __int64)nb,
                                  v205,
                                  (__int64)alloc,
                                  address_size,
                                  0,
                                  0,
                                  (__int64)v6,
                                  v67);
                          if ( !v95 )
                          {
                            if ( !*((_QWORD *)alloc + 8) )
                            {
LABEL_169:
                              dwarfstring_destructor(v272);
                              dwarf_srclines_dealloc_b(alloc);
                              return section;
                            }
                            _dwarf_printf(v8, "\nActuals Table\n");
                            _dwarf_printf(
                              v8,
                              "                                                         be\n"
                              "                                                         ls\n"
                              "                                                         ce\n"
                              " section    op                                           kq\n"
                              " offset     code                address/index    row isa ??\n");
                            v95 = sub_4B3E0(
                                    (Dwarf_Debug)v8,
                                    nb,
                                    v244,
                                    v205,
                                    (__int64)alloc,
                                    address_size,
                                    0,
                                    1,
                                    (__int64)v6,
                                    v67);
LABEL_195:
                            if ( !v95 )
                              goto LABEL_169;
                          }
                          section = v95;
                          dwarfstring_destructor(v272);
                          dwarf_srclines_dealloc_b(alloc);
                          return section;
                        }
                        _dwarf_printf(
                          v8,
                          "                                                         s b e p e i d\n"
                          "                                                         t l s r p s i\n"
                          "                                                         m c e o i a s\n"
                          " section    op                                       col t k q l l   c\n"
                          " offset     code               address     file line umn ? ? ? ? ?\n");
                        v95 = sub_4B3E0(
                                (Dwarf_Debug)v8,
                                v234,
                                v244,
                                v205,
                                (__int64)alloc,
                                address_size,
                                1,
                                0,
                                (__int64)v6,
                                v67);
                        goto LABEL_195;
                      }
                      dwarf_srclines_dealloc_b(alloc);
                      return (unsigned int)-1;
                    }
LABEL_345:
                    if ( (unsigned __int64)s >= v197 )
                    {
                      free(ptrb);
                      free(sized);
                      _dwarf_error_string(
                        v178,
                        v6,
                        235,
                        "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading suprogram entry DW_LNCT* types  we run off the end of the table");
                      goto LABEL_63;
                    }
                  }
                }
              }
              free(ptrb);
              v66 = sized;
              goto LABEL_130;
            }
            v186 = "Subprogs Count too large to be real";
LABEL_349:
            sub_4AB30(v8, (__int64)v6, (__int64)v186, v174);
          }
LABEL_350:
          free(ptrb);
          free(sized);
          goto LABEL_63;
        }
        sub_4AB30(v8, (__int64)v6, (__int64)"Subprog format count Count too large to be real", nc);
LABEL_313:
        free(ptrb);
        goto LABEL_63;
      }
LABEL_204:
      _dwarf_error(v8, v6, 235);
      goto LABEL_63;
    }
    v131 = calloc(0x60u, 1u);
    v132 = v131;
    if ( !v131 )
    {
      free(ptre);
      _dwarf_error_string(v8, v6, 62, "DW_DLE_ALLOC_FAIL: Unable to malloc Dwarf_File_Entry_s");
      goto LABEL_63;
    }
    v133 = 0;
    _dwarf_add_to_files_list(alloc, v131);
    v134 = (unsigned __int64 *)ptre;
LABEL_222:
    if ( v133 < v247 )
      break;
    v252 = (Dwarf_Debug)((char *)v252 + 1);
  }
  v272[0] = nullptr;
  v135 = *v134;
  v136 = v134[1];
  if ( (unsigned __int64)s >= v197 )
  {
    free(ptre);
    _dwarf_error_string(
      v8,
      v6,
      235,
      "DW_DLE_LINE_NUMBER_HEADER_ERROR: file name format count too large to be correct. Corrupt DWARF/");
    goto LABEL_63;
  }
  if ( v135 <= 8 )
  {
    if ( !v135 )
      goto LABEL_249;
    switch ( v135 )
    {
      case 2uLL:
        data16 = _dwarf_decode_line_udata_form(v8, 2, v136, (int)&s, (int)v272, v197, (__int64)v6);
        if ( data16 )
          goto LABEL_247;
        v138 = v272[0];
        v132[88] = 1;
        *((_QWORD *)v132 + 3) = v138;
        break;
      case 3uLL:
        data16 = _dwarf_decode_line_udata_form(v8, 3, v136, (int)&s, (int)v132 + 32, v197, (__int64)v6);
        if ( data16 )
          goto LABEL_247;
        v132[89] = 1;
        break;
      case 4uLL:
        data16 = _dwarf_decode_line_udata_form(v8, 4, v136, (int)&s, (int)v132 + 40, v197, (__int64)v6);
        if ( data16 )
          goto LABEL_247;
        v132[90] = 1;
        break;
      case 5uLL:
        if ( v136 != 30 )
        {
          free(ptre);
          _dwarf_error(v8, v6, 400);
          goto LABEL_63;
        }
        data16 = _dwarf_extract_data16(v8, s, s, v197, v132 + 72, v6);
        if ( data16 )
          goto LABEL_247;
        s += 16;
        v132[91] = 1;
        break;
      case 6uLL:
        data16 = _dwarf_decode_line_string_form(v8, 6, v136, v236, (int)&s, v197, (__int64)(v132 + 48), (__int64)v6);
        goto LABEL_229;
      case 7uLL:
        data16 = _dwarf_decode_line_udata_form(v8, 7, v136, (int)&s, (int)v272, v197, (__int64)v6);
        if ( data16 )
          goto LABEL_247;
        v139 = v272[0];
        v132[92] = 1;
        *((_QWORD *)v132 + 7) = v139;
        break;
      case 8uLL:
        data16 = _dwarf_decode_line_udata_form(v8, 8, v136, (int)&s, (int)v272, v197, (__int64)v6);
        if ( data16 )
          goto LABEL_247;
        v140 = v272[0];
        v132[93] = 1;
        *((_QWORD *)v132 + 8) = v140;
        break;
      default:
        data16 = _dwarf_decode_line_string_form(v8, 1, v136, v236, (int)&s, v197, (__int64)(v132 + 8), (__int64)v6);
        goto LABEL_229;
    }
LABEL_230:
    v134 += 2;
    if ( v197 < (unsigned __int64)s )
    {
      free(ptre);
      _dwarf_error_string(
        v8,
        v6,
        235,
        "DW_DLE_LINE_NUMBER_HEADER_ERROR: Reading line table header filenames runs off end of section. Corrupt Dwarf");
      goto LABEL_63;
    }
    ++v133;
    goto LABEL_222;
  }
  if ( v135 == 8193 )
  {
    data16 = _dwarf_decode_line_string_form(v8, 8193, v136, v236, (int)&s, v197, (__int64)(v132 + 16), (__int64)v6);
LABEL_229:
    if ( data16 )
    {
LABEL_247:
      section = sizec;
      v202 = data16;
      free(ptre);
      v68 = v202;
      goto LABEL_134;
    }
    goto LABEL_230;
  }
LABEL_249:
  _dwarf_report_bad_lnct(v8, v135, 235, "DW_DLE_LINE_NUMBER_HEADER_ERROR", v6);
  v130 = ptre;
LABEL_250:
  free(v130);
LABEL_63:
  dwarf_srclines_dealloc_b(alloc);
  return 1;
}

