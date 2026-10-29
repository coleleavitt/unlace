__int64 __fastcall dwarf_formsdata(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-58h]
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v19[1] = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  if ( !(unsigned int)sub_1F170(&v16, &v17, a1, a3) )
  {
    v5 = 0;
    v7 = _dwarf_calculate_info_section_end_ptr(v17);
    switch ( *(_WORD *)(a1 + 2) )
    {
      case 5:
        v14 = *(_QWORD *)(a1 + 16);
        v12 = v16;
        v19[0] = 0;
        if ( v7 < v14 + 2 )
          goto LABEL_19;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v16 + 8296))(v19, v14, 2);
        *a2 = SLOWORD(v19[0]);
        return v5;
      case 6:
        v13 = *(_QWORD *)(a1 + 16);
        v12 = v16;
        v19[0] = 0;
        if ( v7 < v13 + 4 )
          goto LABEL_19;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v16 + 8296))(v19, v13, 4);
        v8 = v19[0];
        LODWORD(v15) = v19[0];
        if ( (v19[0] & 0x80000000LL) != 0 )
        {
          HIDWORD(v15) = -1;
          v8 = v15;
        }
        goto LABEL_7;
      case 7:
        v11 = *(_QWORD *)(a1 + 16);
        v12 = v16;
        v19[0] = 0;
        if ( v7 >= v11 + 8 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v16 + 8296))(v19, v11, 8);
          *a2 = v19[0];
          return v5;
        }
LABEL_19:
        _dwarf_error_string(v12, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      case 0xB:
        v10 = *(char **)(a1 + 16);
        if ( (unsigned __int64)v10 < v7 )
        {
          *a2 = *v10;
          return v5;
        }
        _dwarf_error(v16, a3, 112);
        return 1;
      case 0xD:
        v9 = *(_QWORD *)(a1 + 16);
        v18 = 0;
        v19[0] = 0;
        if ( (unsigned int)dwarf_decode_signed_leb128(v9, &v18, v19, v7) != 1 )
        {
          *a2 = v19[0];
          return v5;
        }
        _dwarf_error_string(v16, a3, 329, "DW_DLE_LEB_IMPROPER: decode sleb runs past allowed area.e");
        break;
      case 0x21:
        v8 = *(_QWORD *)(a1 + 24);
LABEL_7:
        *a2 = v8;
        return v5;
      default:
        sub_1F300(v16, a3, *(unsigned __int16 *)(a1 + 2));
        return 1;
    }
  }
  return 1;
}

