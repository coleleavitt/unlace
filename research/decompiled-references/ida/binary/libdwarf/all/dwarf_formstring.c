__int64 __fastcall dwarf_formstring(__int64 a1, _QWORD *a2, Dwarf_Error *a3)
{
  __int64 v5; // r12
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  int v12; // ecx
  unsigned int string_offset_via_str_offsets; // r12d
  unsigned int string_from_tied; // eax
  __int64 v16; // r13
  int v17; // [rsp+4h] [rbp-54h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  Dwarf_Error v20; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v21[1] = __readfsqword(0x28u);
  v18 = 0;
  v19 = 0;
  if ( (unsigned int)sub_1F170(&v19, &v18, a1, (__int64)a3) )
    return 1;
  v7 = v19;
  if ( *(_DWORD *)(v18 + 648) )
  {
    v8 = *(_QWORD *)(v19 + 360);
    v9 = *(_QWORD *)(v19 + 368);
  }
  else
  {
    v8 = *(_QWORD *)(v19 + 592);
    v9 = *(_QWORD *)(v19 + 600);
  }
  v10 = *(unsigned __int8 *)(v18 + 16);
  v11 = v8 + v9;
  v12 = *(unsigned __int16 *)(a1 + 2);
  if ( v8 + (unsigned __int64)*(unsigned __int8 *)(v18 + 17) + v10 + *(_QWORD *)(v18 + 72) + *(_QWORD *)(v18 + 8) <= v11 )
    v11 = v8 + *(unsigned __int8 *)(v18 + 17) + v10 + *(_QWORD *)(v18 + 72) + *(_QWORD *)(v18 + 8);
  if ( (unsigned __int16)v12 <= 0x28u )
  {
    if ( (unsigned __int16)v12 > 7u )
    {
      switch ( *(_WORD *)(a1 + 2) )
      {
        case 8:
          v16 = *(_QWORD *)(a1 + 16);
          string_offset_via_str_offsets = _dwarf_check_string_valid(v19, v8, v16, v11, 361, a3);
          if ( !string_offset_via_str_offsets )
            *a2 = v16;
          return string_offset_via_str_offsets;
        case 0xE:
        case 0x1F:
          v21[0] = 0;
          if ( __CFADD__(v10, v5) )
          {
            _dwarf_error_string(v19, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
          }
          else
          {
            if ( v11 >= v10 + v5 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v19 + 8296))(v21, v5, v10);
              return _dwarf_extract_local_debug_str_string_given_offset();
            }
            _dwarf_error_string(v19, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
          }
          break;
        case 0x1A:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
          goto LABEL_15;
        case 0x1D:
          goto LABEL_20;
        default:
          goto LABEL_12;
      }
      return 1;
    }
    goto LABEL_12;
  }
  if ( (_WORD)v12 != 7938 )
  {
    if ( (_WORD)v12 == 7969 )
    {
LABEL_20:
      v20 = nullptr;
      v17 = 1;
      v21[0] = 0;
      string_offset_via_str_offsets = dwarf_global_formref_b(a1, v21, &v17, a3);
      if ( string_offset_via_str_offsets )
        return string_offset_via_str_offsets;
      string_from_tied = _dwarf_get_string_from_tied(v7, v21[0], a2, &v20);
      if ( string_from_tied != 1 )
      {
        string_offset_via_str_offsets = string_from_tied;
        if ( string_from_tied == -1 )
        {
          if ( *(_WORD *)(a1 + 2) == 7969 )
            *a2 = "<DW_FORM_GNU_strp_alt-no-tied-file>";
          else
            *a2 = "<DW_FORM_strp_sup-no-tied-file>";
          return (unsigned int)-1;
        }
        return string_offset_via_str_offsets;
      }
      if ( dwarf_errno(v20) == 308 )
      {
        dwarf_dealloc_error(v7, v20);
        if ( *(_WORD *)(a1 + 2) == 7969 )
          *a2 = "<DW_FORM_GNU_strp_alt-no-tied-file>";
        else
          *a2 = "<DW_FORM_strp_sup-no-tied-file>";
        return string_offset_via_str_offsets;
      }
      if ( a3 )
        *a3 = v20;
      else
        dwarf_dealloc_error(v7, v20);
      return 1;
    }
LABEL_12:
    _dwarf_error(v19, a3, 327);
    return 1;
  }
LABEL_15:
  v21[0] = 0;
  string_offset_via_str_offsets = _dwarf_extract_string_offset_via_str_offsets(
                                    v19,
                                    v5,
                                    v11,
                                    v12,
                                    v18,
                                    (int)v21,
                                    (__int64)a3);
  if ( string_offset_via_str_offsets )
    return string_offset_via_str_offsets;
  return _dwarf_extract_local_debug_str_string_given_offset();
}

