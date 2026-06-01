__int64 __fastcall dwarf_formblock_internal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v10; // r12
  __int64 started; // rbp
  __int64 v13; // rdi
  unsigned __int8 *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v19 = 0;
  v10 = _dwarf_calculate_info_section_end_ptr(a3);
  started = _dwarf_calculate_info_section_start_ptr(a3, &v19);
  switch ( *(_WORD *)(a2 + 2) )
  {
    case 3:
      v21[0] = 0;
      v18 = *(_QWORD *)(a2 + 16);
      if ( v10 < v18 + 2 )
        goto LABEL_18;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v21, v18, 2);
      v14 = *(unsigned __int8 **)(a2 + 16);
      v15 = v21[0];
      v16 = v14 + 2;
      goto LABEL_6;
    case 4:
      v21[0] = 0;
      v17 = *(_QWORD *)(a2 + 16);
      if ( v10 >= v17 + 4 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v21, v17, 4);
        v14 = *(unsigned __int8 **)(a2 + 16);
        v15 = v21[0];
        v16 = v14 + 4;
        goto LABEL_6;
      }
LABEL_18:
      _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    case 9:
    case 0x18:
      v13 = *(_QWORD *)(a2 + 16);
      v20 = 0;
      v21[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v13, &v20, v21, v10) == 1 )
      {
        _dwarf_error_string(a1, a5, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        return 1;
      }
      v14 = *(unsigned __int8 **)(a2 + 16);
      v15 = v21[0];
      v16 = &v14[v20];
LABEL_6:
      if ( v15 < v19 )
        goto LABEL_7;
      goto LABEL_13;
    case 0xA:
      v14 = *(unsigned __int8 **)(a2 + 16);
      v16 = v14 + 1;
      if ( (unsigned __int64)(v14 + 1) >= v10 )
      {
        sub_1F300(a1, a5, 0xAu);
        return 1;
      }
      v15 = *v14;
      if ( v15 >= v19 )
      {
LABEL_13:
        _dwarf_error_string(
          a1,
          a5,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: The length of the block is greater than the section length! Corrupt Dwarf.");
        return 1;
      }
LABEL_7:
      if ( v10 < (unsigned __int64)&v14[v15] )
      {
        _dwarf_error_string(
          a1,
          a5,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: The block length means the block runs off the end of the section length! Corrupt Dwarf.");
        return 1;
      }
      if ( v10 < (unsigned __int64)v16 )
      {
        _dwarf_error_string(
          a1,
          a5,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: The block content is past the end of the section! Corrupt Dwarf.");
        _dwarf_error(a1, a5, 337);
        return 1;
      }
      if ( v10 < (unsigned __int64)&v16[v15] )
      {
        _dwarf_error_string(
          a1,
          a5,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: The end of the block content is past the end of the section! Corrupt Dwarf.");
        return 1;
      }
      *(_QWORD *)(a4 + 8) = v16;
      *(_QWORD *)a4 = v15;
      *(_BYTE *)(a4 + 16) = 0;
      *(_QWORD *)(a4 + 24) = &v16[-started];
      return 0;
    default:
      sub_1F300(a1, a5, *(unsigned __int16 *)(a2 + 2));
      return 1;
  }
}

