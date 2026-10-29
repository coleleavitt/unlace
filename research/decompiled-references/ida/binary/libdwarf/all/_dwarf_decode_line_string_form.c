__int64 __fastcall dwarf_decode_line_string_form(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        const char **a5,
        unsigned __int64 a6,
        const char **a7,
        __int64 a8)
{
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned int str_index_val_itself; // r13d
  const char *v16; // r12
  const char *v17; // rdx
  const char *v18; // rbp
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+30h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  if ( (unsigned int)_dwarf_load_section(a1, a1 + 1288, a8) == 1 )
    return 1;
  v12 = *(_QWORD *)(a1 + 1288);
  v13 = v12 + *(_QWORD *)(a1 + 1296);
  if ( a3 == 31 )
  {
    v25[0] = 0;
    if ( __CFADD__(a4, *a5) )
    {
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      return 1;
    }
    if ( a6 < (unsigned __int64)&(*a5)[a4] )
    {
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    v22 = v13;
    v20 = v12;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(a1 + 8296))(v25, *a5, a4);
    *a5 += a4;
    v18 = (const char *)(v20 + v25[0]);
    str_index_val_itself = _dwarf_check_string_valid(a1, v20, v20 + v25[0], v22, 326, a8);
    if ( !str_index_val_itself )
      *a7 = v18;
  }
  else
  {
    if ( a3 > 0x1F )
    {
      if ( a3 - 37 > 3 )
        goto LABEL_6;
LABEL_12:
      v21 = v12 + *(_QWORD *)(a1 + 1296);
      v17 = *a5;
      v19 = *(_QWORD *)(a1 + 1288);
      v23 = 0;
      v24 = 0;
      v25[0] = 0;
      str_index_val_itself = _dwarf_read_str_index_val_itself(a1, a3, (int)v17, a6, (int)&v23, (int)&v24, a8);
      if ( !str_index_val_itself )
      {
        str_index_val_itself = _dwarf_extract_local_debug_str_string_given_offset();
        if ( !str_index_val_itself )
        {
          str_index_val_itself = _dwarf_check_string_valid(a1, v19, v25[0], v21, 364, a8);
          if ( !str_index_val_itself )
          {
            *a5 += v24;
            *a7 = (const char *)v25[0];
          }
        }
      }
      return str_index_val_itself;
    }
    if ( a3 != 8 )
    {
      if ( a3 != 26 )
      {
LABEL_6:
        sub_32250(a1, a2, a3, nullptr, a8);
        return 1;
      }
      goto LABEL_12;
    }
    v16 = *a5;
    str_index_val_itself = _dwarf_check_string_valid(a1, *a5, *a5, a6, 364, a8);
    if ( !str_index_val_itself )
    {
      *a7 = v16;
      *a5 += strlen(v16) + 1;
    }
  }
  return str_index_val_itself;
}

