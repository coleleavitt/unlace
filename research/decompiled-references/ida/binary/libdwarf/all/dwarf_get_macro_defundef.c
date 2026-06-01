__int64 __fastcall dwarf_get_macro_defundef(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        Dwarf_Error *a5,
        _WORD *a6,
        const char **a7,
        __int64 a8)
{
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v12; // r11
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  __int64 v17; // rdi
  __int64 v18; // rdx
  int v21; // eax
  __int64 v22; // r10
  const char *v23; // rbx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  struct Dwarf_Error_s *v28; // rsi
  unsigned __int8 v29; // al
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // r12
  int v35; // esi
  int string_offset_via_str_offsets; // eax
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r9
  struct Dwarf_Error_s *v41; // rbx
  int v42; // eax
  const char *v43; // rdx
  Dwarf_Error v44; // rdx
  int local_debug_str_string_given_offset; // eax
  unsigned int v46; // eax
  const char *v47; // rdx
  Dwarf_Error v48; // rsi
  unsigned __int64 v49; // [rsp+10h] [rbp-98h]
  __int64 v50; // [rsp+10h] [rbp-98h]
  __int64 v51; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+18h] [rbp-90h]
  __int64 v53; // [rsp+18h] [rbp-90h]
  __int64 v54; // [rsp+20h] [rbp-88h]
  __int64 v55; // [rsp+20h] [rbp-88h]
  unsigned __int8 v56; // [rsp+3Fh] [rbp-69h]
  const char *v57; // [rsp+48h] [rbp-60h] BYREF
  Dwarf_Error v58; // [rsp+50h] [rbp-58h] BYREF
  __int64 v59; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v60[9]; // [rsp+60h] [rbp-48h] BYREF

  v60[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)a1 != 2778 )
  {
LABEL_3:
    _dwarf_error_string(v9, a8, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 88) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 168), a8, 323);
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 112);
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD *)(a1 + 104) + 24 * a2;
  v16 = *(_BYTE *)v15;
  v17 = *(_QWORD *)(v15 + 16);
  v18 = *(_QWORD *)(v15 + 8);
  v49 = v12 + v14;
  if ( *(_BYTE *)(v18 + 1) != 2 )
    return 0xFFFFFFFFLL;
  if ( v16 > 9u )
  {
    if ( (unsigned __int8)(v16 - 11) > 1u )
      goto LABEL_37;
    v58 = nullptr;
    v29 = *(_BYTE *)(*(_QWORD *)(v18 + 8) + 1LL);
    v59 = 0;
    v56 = v29;
    v60[0] = 0;
    v30 = dwarf_decode_leb128(v17, &v59, v60, v49);
    v22 = a8;
    if ( v30 == 1 )
      goto LABEL_26;
    v31 = v60[0];
    v32 = v59 + v17;
    v60[0] = 0;
    *a3 = v31;
    v59 = 0;
    v33 = dwarf_decode_leb128(v32, &v59, v60, v49);
    v22 = a8;
    if ( v33 == 1 )
      goto LABEL_26;
    v34 = v60[0];
    v35 = v59 + v32;
    *a4 = v60[0];
    *a6 = 2;
    string_offset_via_str_offsets = _dwarf_extract_string_offset_via_str_offsets(
                                      v9,
                                      v35,
                                      v49,
                                      v56,
                                      *(_QWORD *)(a1 + 176),
                                      (int)&v58,
                                      a8);
    if ( string_offset_via_str_offsets == 1 )
      return 1;
    if ( string_offset_via_str_offsets )
    {
      *a4 = v34;
      *a5 = nullptr;
      *a7 = "<.debug_str_offsets not available>";
      return 0;
    }
    v44 = v58;
    *a4 = v34;
    v60[0] = 0;
    *a5 = v44;
    local_debug_str_string_given_offset = _dwarf_extract_local_debug_str_string_given_offset();
    if ( local_debug_str_string_given_offset == 1 )
      return 1;
    v43 = "<:No string available>";
    if ( local_debug_str_string_given_offset != -1 )
      v43 = (const char *)v60[0];
LABEL_36:
    *a7 = v43;
    return 0;
  }
  if ( v16 > 7u )
  {
    v53 = v17;
    v57 = nullptr;
    v58 = nullptr;
    v59 = 0;
    v60[0] = 0;
    v24 = dwarf_decode_leb128(v17, &v59, v60, v49);
    v22 = a8;
    if ( v24 == 1 )
      goto LABEL_26;
    v25 = v59 + v17;
    v26 = *(unsigned __int8 *)(a1 + 64);
    v27 = v60[0];
    v60[0] = 0;
    if ( !__CFADD__(v26, v59 + v53) )
    {
      if ( v49 >= v26 + v59 + v53 )
      {
        v50 = v27;
        (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 8296))(v60, v25);
        v28 = (struct Dwarf_Error_s *)v60[0];
        *a3 = v50;
        *a4 = 0;
        *a5 = v28;
        *a6 = 2;
        result = _dwarf_get_string_from_tied(v9, v28, &v57, &v58);
        if ( !(_DWORD)result )
        {
          *a7 = v57;
          return result;
        }
        if ( (_DWORD)result != 1 )
        {
          *a7 = "<DW_FORM_str_sup-no-entry>";
          return result;
        }
        v46 = dwarf_errno(v58);
        v47 = "<DW_FORM_str_sup-no-tied_file>";
        if ( v46 != 308 )
        {
          _dwarf_error(v9, a8, v46);
          v47 = "<Error: DW_FORM_str_sup-got-error>";
        }
        v48 = v58;
        *a7 = v47;
        dwarf_dealloc_error(v9, v48);
        return 1;
      }
      goto LABEL_39;
    }
LABEL_38:
    _dwarf_error_string(v9, v22, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    return 1;
  }
  if ( v16 > 2u )
  {
    if ( (unsigned __int8)(v16 - 5) > 1u )
      goto LABEL_37;
    v55 = v17;
    v58 = nullptr;
    v59 = 0;
    v60[0] = 0;
    v37 = dwarf_decode_leb128(v17, &v59, v60, v49);
    v22 = a8;
    if ( v37 == 1 )
      goto LABEL_26;
    v38 = v59 + v17;
    v39 = *(unsigned __int8 *)(a1 + 64);
    v40 = v60[0];
    v60[0] = 0;
    if ( !__CFADD__(v39, v59 + v55) )
    {
      if ( v49 >= v39 + v59 + v55 )
      {
        v51 = v40;
        (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 8296))(v60, v38);
        v41 = (struct Dwarf_Error_s *)v60[0];
        v42 = _dwarf_extract_local_debug_str_string_given_offset();
        *a4 = 0;
        *a3 = v51;
        *a5 = v41;
        *a6 = 2;
        if ( v42 == 1 )
        {
          *a7 = "<Error: getting local .debug_str>";
          return 1;
        }
        v43 = "<Error: NO_ENTRY on .debug_string (strp)>";
        if ( v42 != -1 )
          v43 = (const char *)v58;
        goto LABEL_36;
      }
LABEL_39:
      _dwarf_error_string(v9, v22, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    goto LABEL_38;
  }
  if ( !v16 )
  {
LABEL_37:
    _dwarf_error(v9, a8, 324);
    return 1;
  }
  v54 = v12;
  v59 = 0;
  v60[0] = 0;
  v21 = dwarf_decode_leb128(v17, &v59, v60, v49);
  v22 = a8;
  if ( v21 == 1 )
  {
LABEL_26:
    _dwarf_error_string(v9, v22, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
  v23 = (const char *)(v17 + v59);
  v52 = v60[0];
  result = _dwarf_check_string_valid(v9, v54, v17 + v59, v49, 366, a8);
  if ( !(_DWORD)result )
  {
    *a3 = v52;
    *a4 = 0;
    *a5 = nullptr;
    *a6 = 2;
    *a7 = v23;
  }
  return result;
}

