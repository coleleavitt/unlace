__int64 __fastcall dwarf_trial_read_dwarf_five_hdr(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        __int64 a11)
{
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  unsigned __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  unsigned __int16 v27; // r12
  int v29; // edx
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rax
  int v33; // [rsp+10h] [rbp-C8h]
  __int16 v34; // [rsp+10h] [rbp-C8h]
  int v35; // [rsp+10h] [rbp-C8h]
  __int16 v39; // [rsp+50h] [rbp-88h]
  unsigned __int64 v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  unsigned __int64 v42; // [rsp+68h] [rbp-70h]
  _QWORD v43[13]; // [rsp+70h] [rbp-68h] BYREF

  v43[5] = __readfsqword(0x28u);
  v12 = *(_QWORD *)(a1 + 6160);
  v43[0] = 0;
  v13 = v12 + a2;
  v14 = a3 + v12;
  v15 = v13 + 4;
  if ( v14 < v13 + 4 )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v43, v13, 4);
  v17 = v43[0];
  if ( v43[0] == 0xFFFFFFFFLL )
  {
    v43[0] = 0;
    if ( v14 < v13 + 12 )
      goto LABEL_19;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v43, v15, 8);
    v17 = v43[0];
    if ( a3 >= v43[0] )
    {
      v15 = v13 + 12;
      v22 = 4;
      v23 = 8;
      goto LABEL_8;
    }
    goto LABEL_28;
  }
  if ( v43[0] )
  {
    v22 = 0;
    v23 = 4;
    if ( a3 >= v43[0] )
      goto LABEL_8;
LABEL_28:
    _dwarf_create_area_len_error(a1, a11, v17, a3);
    return 1;
  }
  if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
    goto LABEL_6;
  v15 = v13 + 8;
  if ( v14 < v13 + 8 )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v43, v13, 8);
  v17 = v43[0];
  v22 = 0;
  v23 = 8;
  if ( a3 < v43[0] )
    goto LABEL_28;
LABEL_8:
  if ( v17 <= 3 )
  {
LABEL_6:
    v33 = v17;
    dwarfstring_constructor(v43);
    dwarfstring_append_printf_u(
      v43,
      "DW_DLE_SECTION_SIZE_ERROR: header length 0x%x is too small to be a real .debug_str_offsets DWARF5 section",
      v33);
    v19 = dwarfstring_string(
            v43,
            "DW_DLE_SECTION_SIZE_ERROR: header length 0x%x is too small to be a real .debug_str_offsets DWARF5 section",
            v18);
    v20 = 435;
    v21 = v19;
LABEL_25:
    _dwarf_error_string(a1, a11, v20, v21);
    dwarfstring_destructor(v43);
    return 1;
  }
  v24 = v17 + v23 + v22;
  v25 = v24 + a2;
  v26 = v23 + v22 + 4;
  if ( v17 >= v26 )
    v26 = v17;
  if ( a3 < v26 )
    goto LABEL_24;
  if ( v24 >= v25 )
    v25 = v17 + v23 + v22;
  if ( a3 < v25 )
  {
LABEL_24:
    v35 = v17 + v23 + v22;
    dwarfstring_constructor(v43);
    dwarfstring_append_printf_u(
      v43,
      "DW_DLE_STR_OFFSETS_ARRAY_SIZE:  total length 0x%x  with table offset larger than ",
      v35);
    dwarfstring_append_printf_u(
      v43,
      ".debug_str_offsets section size of 0x%x. Perhaps the section is a GNU DWARF4 extension with a different format.",
      a3);
    v30 = dwarfstring_string(
            v43,
            ".debug_str_offsets section size of 0x%x. Perhaps the section is a GNU DWARF4 extension with a different format.",
            v29);
    v20 = 405;
    v21 = v30;
    goto LABEL_25;
  }
  LOWORD(v43[0]) = 0;
  if ( v14 >= v15 + 2 )
  {
    v42 = v17 + v23 + v22;
    v41 = v23 + v22 + 4;
    v40 = v17;
    v39 = v22;
    v34 = v23;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v43, v15, 2);
    v27 = v43[0];
    if ( LOWORD(v43[0]) != 5 )
    {
      dwarfstring_constructor(v43);
      dwarfstring_append_printf_u(
        v43,
        "DW_DLE_STR_OFFSETS_VERSION_WRONG: %u. Only version 5 is supported when reading .debug_str_offsets. Perhaps the s"
        "ection is a GNU DWARF4 extension with a different format.",
        v27);
      v32 = dwarfstring_string(
              v43,
              "DW_DLE_STR_OFFSETS_VERSION_WRONG: %u. Only version 5 is supported when reading .debug_str_offsets. Perhaps"
              " the section is a GNU DWARF4 extension with a different format.",
              v31);
      v20 = 406;
      v21 = v32;
      goto LABEL_25;
    }
    LOWORD(v43[0]) = 0;
    if ( v14 >= v15 + 4 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v43, v15 + 2, 2);
      *a4 = v41;
      *a5 = v42;
      *a6 = v40;
      *a7 = v34;
      *a8 = v39;
      *a9 = 5;
      *a10 = v43[0];
      return 0;
    }
  }
LABEL_19:
  _dwarf_error_string(a1, a11, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
  return 1;
}

