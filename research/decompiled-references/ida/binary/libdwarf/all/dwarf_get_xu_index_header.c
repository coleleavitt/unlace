__int64 __fastcall dwarf_get_xu_index_header(
        char *a1,
        unsigned __int8 *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  __int64 result; // rax
  __int64 *v11; // r12
  int v12; // eax
  __int64 *v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  void *v23; // rdx
  __int64 alloc; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // r8
  __int64 v27; // r10
  unsigned __int8 v28; // al
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r12
  __int64 v33; // r13
  unsigned __int64 v34; // r14
  void *v35; // r15
  unsigned __int64 v36; // rsi
  void *v37; // r10
  int v38; // edx
  __int64 v39; // rax
  const char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdx
  const char *v45; // rsi
  __int64 v46; // rax
  const char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  void *v50; // [rsp+8h] [rbp-D0h]
  void *v51; // [rsp+8h] [rbp-D0h]
  void *v52; // [rsp+8h] [rbp-D0h]
  int v53; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v56; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+18h] [rbp-C0h]
  _QWORD *v58; // [rsp+18h] [rbp-C0h]
  _QWORD *v59; // [rsp+20h] [rbp-B8h]
  __int64 v60; // [rsp+28h] [rbp-B0h]
  __int64 v61; // [rsp+28h] [rbp-B0h]
  __int64 *v62; // [rsp+28h] [rbp-B0h]
  __int64 v63; // [rsp+30h] [rbp-A8h]
  __int64 v64; // [rsp+30h] [rbp-A8h]
  _QWORD *v65; // [rsp+38h] [rbp-A0h]
  _QWORD *v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+40h] [rbp-98h]
  _QWORD *v68; // [rsp+40h] [rbp-98h]
  __int64 v69; // [rsp+48h] [rbp-90h]
  unsigned __int64 v70; // [rsp+50h] [rbp-88h]
  __int64 v71; // [rsp+58h] [rbp-80h]
  _QWORD *v72; // [rsp+68h] [rbp-70h]
  _QWORD v73[13]; // [rsp+70h] [rbp-68h] BYREF

  v73[5] = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a9,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_xu_index_header()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 || (v11 = a3) == nullptr )
  {
    _dwarf_error_string(0, a9, 268, "DW_DLE_XU_TYPE_ARG_ERROR: section type or header return pointer is not valid");
    return 1;
  }
  v12 = *a2;
  if ( v12 == 99 && a2[1] == 117 && !a2[2] )
  {
    v14 = (__int64 *)(a1 + 6888);
  }
  else
  {
    if ( v12 != 116 || a2[1] != 117 || a2[2] )
    {
      _dwarf_error_string(a1, a9, 268, "DW_DLE_XU_TYPE_ARG_ERROR, Passed in section type is neither \"tu\" nor \"cu\"");
      return 1;
    }
    v14 = (__int64 *)(a1 + 7120);
  }
  v15 = v14[1];
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v16 = *v14;
  if ( !*v14 )
  {
    v59 = a5;
    v58 = a4;
    result = _dwarf_load_section(a1, v14, a9);
    if ( (_DWORD)result )
      return result;
    v15 = v14[1];
    v16 = *v14;
    a5 = v59;
    a4 = v58;
  }
  v54 = v16 + v15;
  if ( v15 <= 0xF )
  {
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v73, "is just %u bytes, much to small to be  a correct section", v14[1]);
    v39 = dwarfstring_string(v73, "is just %u bytes, much to small to be  a correct section", v38);
    _dwarf_error_string(a1, a9, 345, v39);
    dwarfstring_destructor(v73);
    return 1;
  }
  v73[0] = 0;
  if ( v54 < v16 + 4 )
    goto LABEL_37;
  v66 = a5;
  v65 = a4;
  v63 = v16 + 4;
  v60 = v16;
  (*((void (__fastcall **)(_QWORD *, __int64, __int64))a1 + 1037))(v73, v16, 4);
  v69 = v73[0];
  if ( (unsigned __int64)(v73[0] - 2LL) > 3 )
  {
    dwarfstring_constructor(v73);
    v40 = "DW_DLE_XU_NAME_COL_ERROR: The CU/TU Index Section version is %u ";
    dwarfstring_append_printf_u(v73, "DW_DLE_XU_NAME_COL_ERROR: The CU/TU Index Section version is %u ", v69);
LABEL_46:
    v41 = dwarfstring_string(v73, v40);
    v42 = 270;
    v43 = v41;
LABEL_47:
    _dwarf_error_string(a1, a9, v42, v43);
    dwarfstring_destructor(v73);
    return 1;
  }
  v73[0] = 0;
  if ( v54 < v60 + 8 )
  {
LABEL_37:
    _dwarf_error_string(a1, a9, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  (*((void (__fastcall **)(_QWORD *, __int64, __int64))a1 + 1037))(v73, v63, 4);
  v70 = v73[0];
  if ( v73[0] > 8u )
  {
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    v40 = "shows N, the sections count, as %u but only values  1 through 8 (DW_SECT_RNGLISTS) are valid.";
    dwarfstring_append_printf_u(
      v73,
      "shows N, the sections count, as %u but only values  1 through 8 (DW_SECT_RNGLISTS) are valid.",
      v70);
    goto LABEL_46;
  }
  v73[0] = 0;
  if ( v54 < v60 + 12 )
    goto LABEL_37;
  (*((void (__fastcall **)(_QWORD *, __int64, __int64))a1 + 1037))(v73, v60 + 8, 4);
  v17 = v73[0];
  if ( v73[0] >= (unsigned __int64)v14[1] )
  {
    _dwarf_error_string(
      a1,
      a9,
      270,
      "dbg,error,DW_DLE_XU_NAME_COL_ERROR: The CU/TU Index Section header unit count is too large to be real. Corrupt DWARF\n");
    return 1;
  }
  v73[0] = 0;
  if ( v54 < v60 + 16 )
    goto LABEL_37;
  v55 = v17;
  (*((void (__fastcall **)(_QWORD *, __int64, __int64))a1 + 1037))(v73, v60 + 12, 4);
  v18 = v14[1];
  v19 = v55;
  if ( v18 < v73[0] )
  {
    v50 = (void *)v73[0];
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v73, " is just %u bytes,", v14[1]);
    v44 = v50;
    v45 = "while the number of slots (S) is %u. which is clearly wrong";
LABEL_51:
    dwarfstring_append_printf_u(v73, v45, v44);
    v46 = dwarfstring_string(v73, v45);
    v42 = 345;
    v43 = v46;
    goto LABEL_47;
  }
  v20 = 4LL * v73[0];
  if ( v18 < 4LL * v73[0] )
  {
    v51 = (void *)(4LL * v73[0]);
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v73, " is just %u bytes,", v14[1]);
    v44 = v51;
    v45 = "while the number of slots bytes (S) is at least %u. which is clearly wrong";
    goto LABEL_51;
  }
  v56 = 4 * v70;
  if ( v18 < v70 )
  {
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v73, " is just %u bytes,", v14[1]);
    v47 = "while the number of sections/columns (S) is %u. which is clearly wrong";
    dwarfstring_append_printf_u(v73, "while the number of sections/columns (S) is %u. which is clearly wrong", v70);
    goto LABEL_56;
  }
  if ( v18 < v56 )
  {
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_s();
    dwarfstring_append_printf_u(v73, " is just %u bytes,", v14[1]);
    v47 = "while the number of sections/columns bytes (S) is at least %u. which is clearly wrong";
    dwarfstring_append_printf_u(
      v73,
      "while the number of sections/columns bytes (S) is at least %u. which is clearly wrong",
      v56);
    goto LABEL_56;
  }
  v61 = 8LL * v73[0] + 16;
  v64 = v20 + v61;
  v57 = v20 + v61 + v56;
  v21 = 4 * v19 * v70;
  v22 = v21 + v57;
  v23 = (void *)(v21 + v57 + v21);
  if ( v18 < (unsigned __int64)v23 )
  {
    v52 = v23;
    dwarfstring_constructor(v73);
    dwarfstring_append_printf_u(
      v73,
      "ERROR: DW_DLE_ERRONEOUS_XU_INDEX_SECTION as the end offset 0x%lx is greater than ",
      v52);
    v47 = "the section size 0x%lx.";
    dwarfstring_append_printf_u(v73, "the section size 0x%lx.", v14[1]);
LABEL_56:
    v48 = dwarfstring_string(v73, v47);
    _dwarf_error_string(a1, a9, 345, v48);
    dwarfstring_destructor(v73);
    return 1;
  }
  v72 = v66;
  v71 = v73[0];
  v67 = v19;
  alloc = _dwarf_get_alloc(a1, 56, 1);
  v25 = v65;
  v26 = v72;
  v27 = alloc;
  if ( !alloc )
  {
    _dwarf_error(a1, a9, 62);
    return 1;
  }
  *(_BYTE *)(alloc + 168) = *a2;
  v28 = a2[1];
  *(_BYTE *)(v27 + 170) = 0;
  *(_BYTE *)(v27 + 169) = v28;
  *(_QWORD *)v27 = a1;
  v29 = v14[1];
  *(_QWORD *)(v27 + 16) = v29;
  v30 = *v14;
  *(_QWORD *)(v27 + 8) = *v14;
  v31 = v14[23];
  *(_QWORD *)(v27 + 24) = v69;
  *(_QWORD *)(v27 + 176) = v31;
  *(_QWORD *)(v27 + 64) = v61;
  *(_QWORD *)(v27 + 80) = v57;
  *(_QWORD *)(v27 + 32) = v70;
  *(_QWORD *)(v27 + 88) = v22;
  *(_QWORD *)(v27 + 40) = v67;
  *(_QWORD *)(v27 + 48) = v71;
  *(_QWORD *)(v27 + 56) = 16;
  *(_QWORD *)(v27 + 72) = v64;
  if ( !v70 )
    goto LABEL_53;
  v62 = v11;
  v32 = v30 + v29;
  v68 = a6;
  v33 = 0;
  v34 = v30 + v64;
  v35 = (void *)v27;
  do
  {
    v73[0] = 0;
    v36 = v34;
    v34 += 4LL;
    if ( v32 < v34 )
    {
      _dwarf_error_string(a1, a9, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      v37 = v35;
LABEL_34:
      dwarf_dealloc((Dwarf_Debug)a1, v37, 0x38u);
      return 1;
    }
    (*((void (__fastcall **)(_QWORD *, unsigned __int64, __int64))a1 + 1037))(v73, v36, 4);
    if ( v73[0] > 8u )
    {
      v53 = v73[0];
      dwarfstring_constructor(v73);
      dwarfstring_append_printf_u(v73, "ERROR: DW_DLE_XU_NAME_COL_ERROR  The section number of %u ", v53);
      dwarfstring_append();
      v49 = dwarfstring_string(v73, " is too high. Sections 1-8 are listed in DWARF5 Table 7.1.");
      _dwarf_error_string(a1, a9, 270, v49);
      dwarfstring_destructor(v73);
      v37 = v35;
      goto LABEL_34;
    }
    *((_QWORD *)v35 + v33++ + 12) = v73[0];
  }
  while ( v70 != v33 );
  v11 = v62;
  v25 = v65;
  v27 = (__int64)v35;
  v26 = v72;
  a6 = v68;
LABEL_53:
  *v11 = v27;
  *v25 = *(_QWORD *)(v27 + 24);
  *v26 = *(_QWORD *)(v27 + 32);
  *a6 = *(_QWORD *)(v27 + 40);
  *a7 = *(_QWORD *)(v27 + 48);
  *a8 = *(_QWORD *)(v27 + 176);
  return 0;
}

