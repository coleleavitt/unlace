__int64 __fastcall sub_22D50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int16 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  char v10; // bl
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  if ( a4 == 255 )
  {
    *a7 = 0;
    *a8 = a3;
    return 0;
  }
  else
  {
    v10 = a4;
    switch ( a4 & 0xF )
    {
      case 0:
        v20[0] = 0;
        v12 = a6;
        if ( __CFADD__(a6, a3) )
        {
          _dwarf_error_string(a1, a9, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
          goto LABEL_12;
        }
        if ( a5 < (unsigned __int64)a6 + a3 )
          goto LABEL_31;
        v16 = a6 + a3;
        goto LABEL_7;
      case 1:
        v19 = 0;
        v20[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(a3, &v19, v20, a5) != 1 )
          goto LABEL_14;
        _dwarf_error_string(a1, a9, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        goto LABEL_12;
      case 2:
        v20[0] = 0;
        if ( a5 < a3 + 2 )
          goto LABEL_31;
        v16 = a3 + 2;
        v12 = 2;
        goto LABEL_7;
      case 3:
        v20[0] = 0;
        if ( a5 < a3 + 4 )
          goto LABEL_31;
        v16 = a3 + 4;
        v12 = 4;
        goto LABEL_7;
      case 4:
      case 0xC:
        v20[0] = 0;
        if ( a5 < a3 + 8 )
          goto LABEL_31;
        v16 = a3 + 8;
        v12 = 8;
LABEL_7:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v20, a3, v12);
        *a7 = v20[0];
        *a8 = v16;
        goto LABEL_8;
      case 9:
        v19 = 0;
        v20[0] = 0;
        if ( (unsigned int)dwarf_decode_signed_leb128(a3, &v19, v20, a5) != 1 )
        {
LABEL_14:
          v13 = a3 + v19;
          *a7 = v20[0];
          *a8 = v13;
          goto LABEL_8;
        }
        _dwarf_error_string(a1, a9, 329, "DW_DLE_LEB_IMPROPER: decode sleb runs past allowed area.e");
        goto LABEL_12;
      case 0xA:
        v19 = 0;
        v20[0] = 0;
        if ( a5 < a3 + 2 )
          goto LABEL_31;
        v17 = a3 + 2;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v20, a3, 2);
        v14 = v20[0];
        v15 = v17;
        v19 = v20[0];
        if ( (v20[0] & 0x8000LL) != 0 )
        {
          *(_DWORD *)((char *)&v19 + 2) = -1;
          HIWORD(v19) = -1;
          v14 = v19;
        }
        goto LABEL_18;
      case 0xB:
        v19 = 0;
        v20[0] = 0;
        if ( a5 >= a3 + 4 )
        {
          v18 = a3 + 4;
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v20, a3, 4);
          v14 = v20[0];
          v15 = v18;
          v19 = v20[0];
          if ( (v20[0] & 0x80000000LL) != 0 )
          {
            HIDWORD(v19) = -1;
            v14 = v19;
          }
LABEL_18:
          *a7 = v14;
          *a8 = v15;
LABEL_8:
          if ( a2 )
          {
            if ( (v10 & 0x70) == 0x10 )
              *a7 += a3 - a2 + *(_QWORD *)(a1 + 4568);
          }
          return 0;
        }
LABEL_31:
        _dwarf_error_string(a1, a9, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
LABEL_12:
        result = 1;
        break;
      default:
        _dwarf_error(a1, a9, 195);
        goto LABEL_12;
    }
  }
  return result;
}

