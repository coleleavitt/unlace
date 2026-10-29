__int64 __fastcall dwarf_get_addr_index_itself(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  int v16; // edx
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v10 = _dwarf_calculate_info_section_end_ptr(a4);
  v11 = v10;
  if ( a1 <= 44 )
  {
    if ( a1 > 26 )
    {
      switch ( a1 )
      {
        case 27:
          goto LABEL_12;
        case 41:
          v19[0] = 0;
          if ( v10 < a2 + 1 )
            goto LABEL_22;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 8296))(v19, a2, 1);
          v14 = v19[0];
          break;
        case 42:
          v19[0] = 0;
          if ( v10 < a2 + 2 )
            goto LABEL_22;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 8296))(v19, a2, 2);
          v14 = v19[0];
          break;
        case 43:
          v19[0] = 0;
          if ( v10 < a2 + 3 )
            goto LABEL_22;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 8296))(v19, a2, 3);
          v14 = v19[0];
          break;
        case 44:
          v19[0] = 0;
          if ( v10 < a2 + 4 )
            goto LABEL_22;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 8296))(v19, a2, 4);
          v14 = v19[0];
          break;
        default:
          goto LABEL_10;
      }
      goto LABEL_9;
    }
    goto LABEL_10;
  }
  if ( a1 == 7937 )
  {
LABEL_12:
    v18 = 0;
    v19[0] = 0;
    v16 = dwarf_decode_leb128(a2, &v18, v19, v10);
    v14 = v19[0];
    if ( v16 != 1 )
      goto LABEL_9;
    goto LABEL_13;
  }
  if ( a1 == 8193 )
  {
    v18 = 0;
    v19[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(a2, &v18, v19, v10) != 1 )
    {
      v12 = v19[0];
      v19[0] = 0;
      v13 = a2 + v18;
      if ( v11 < a2 + v18 + 4 )
      {
LABEL_22:
        _dwarf_error_string(a3, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      v17 = v12;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a3 + 8296))(v19, v13, 4);
      v14 = v19[0] | (v17 << 32);
LABEL_9:
      *a5 = v14;
      return 0;
    }
LABEL_13:
    _dwarf_error_string(a3, a6, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
LABEL_10:
  _dwarf_error(a3, a6, 258);
  return 1;
}

