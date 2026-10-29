__int64 __fastcall dwarf_read_str_index_val_itself(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( a2 <= 0x28 )
  {
    if ( a2 > 0x19 )
    {
      switch ( a2 )
      {
        case 0x1Au:
          goto LABEL_18;
        case 0x25u:
          v13[0] = 0;
          if ( a4 < a3 + 1 )
            goto LABEL_20;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v13, a3, 1);
          v10 = v13[0];
          v11 = 1;
          goto LABEL_9;
        case 0x26u:
          v13[0] = 0;
          if ( a4 < a3 + 2 )
            goto LABEL_20;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v13, a3, 2);
          v10 = v13[0];
          v11 = 2;
          goto LABEL_9;
        case 0x27u:
          v13[0] = 0;
          if ( a4 < a3 + 3 )
            goto LABEL_20;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v13, a3, 3);
          v10 = v13[0];
          v11 = 3;
          goto LABEL_9;
        case 0x28u:
          v13[0] = 0;
          if ( a4 >= a3 + 4 )
          {
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v13, a3, 4);
            v10 = v13[0];
            v11 = 4;
            goto LABEL_9;
          }
LABEL_20:
          _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
          break;
        default:
          goto LABEL_5;
      }
      return 1;
    }
    goto LABEL_5;
  }
  if ( a2 != 7938 )
  {
LABEL_5:
    _dwarf_error(a1, a7, 259);
    return 1;
  }
LABEL_18:
  v12 = 0;
  v13[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(a3, &v12, v13, a4) == 1 )
  {
    _dwarf_error_string(a1, a7, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
    return 1;
  }
  v10 = v13[0];
  v11 = v12;
LABEL_9:
  if ( a6 )
    *a6 = v11;
  *a5 = v10;
  return 0;
}

