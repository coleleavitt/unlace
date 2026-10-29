__int64 __fastcall dwarf_get_size_of_val(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        const char *a5,
        int a6,
        _QWORD *a7,
        unsigned __int64 a8,
        __int64 a9)
{
  unsigned int size_of_val; // r12d
  int v14; // eax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // r9d
  __int64 v28; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+10h] [rbp-78h] BYREF
  __int64 v30; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v31[13]; // [rsp+20h] [rbp-68h] BYREF

  v31[5] = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0uLL:
      return 0;
    case 1uLL:
      if ( a4 )
        goto LABEL_34;
      *a7 = *(unsigned __int8 *)(a1 + 280);
      return 0;
    case 2uLL:
      goto LABEL_16;
    case 3uLL:
      v31[0] = 0;
      if ( a8 < (unsigned __int64)(a5 + 2) )
        goto LABEL_50;
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(a1 + 8296))(v31, a5, 2);
      v24 = a8 - (_QWORD)a5;
      if ( a8 < (unsigned __int64)a5 )
        v24 = 0;
      if ( v24 >= v31[0] )
      {
        *a7 = v31[0] + 2LL;
        return 0;
      }
      _dwarf_error_string(
        a1,
        a9,
        337,
        "DW_DLE_FORM_BLOCK_LENGTH_ERROR: DW_FORM_block2 runs off the end of the section. Corrupt Dwarf.");
      return 1;
    case 4uLL:
      v31[0] = 0;
      if ( a8 < (unsigned __int64)(a5 + 4) )
      {
LABEL_50:
        _dwarf_error_string(a1, a9, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, const char *, __int64))(a1 + 8296))(v31, a5, 4);
      v21 = v31[0];
      v23 = a8 - (_QWORD)a5;
      if ( a8 < (unsigned __int64)a5 )
        v23 = 0;
      if ( v23 < v31[0] )
      {
        _dwarf_error_string(
          a1,
          a9,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: DW_FORM_block4 runs off the end of the section. Corrupt Dwarf.");
        return 1;
      }
      goto LABEL_24;
    case 5uLL:
    case 0x12uLL:
    case 0x26uLL:
    case 0x2AuLL:
      *a7 = 2;
      return 0;
    case 6uLL:
    case 0x13uLL:
    case 0x1CuLL:
    case 0x28uLL:
    case 0x2CuLL:
      *a7 = 4;
      return 0;
    case 7uLL:
    case 0x14uLL:
    case 0x20uLL:
    case 0x24uLL:
      *a7 = 8;
      return 0;
    case 8uLL:
      size_of_val = _dwarf_check_string_valid(a1, a5, a5, a8, 361, a9);
      if ( !size_of_val )
        *a7 = strlen(a5) + 1;
      return size_of_val;
    case 9uLL:
    case 0x18uLL:
      v30 = 0;
      v31[0] = 0;
      v18 = dwarf_decode_leb128(a5, &v30, v31, a8);
      v19 = a9;
      if ( v18 == 1 )
        goto LABEL_51;
      *a7 = v31[0] + v30;
      return 0;
    case 0xAuLL:
      if ( (unsigned __int64)a5 >= a8 )
      {
        _dwarf_error_string(
          a1,
          a9,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: DW_FORM_block1 itself is off the end of the section. Corrupt Dwarf.");
      }
      else
      {
        v22 = *(unsigned __int8 *)a5;
        if ( a8 - (unsigned __int64)a5 >= v22 )
        {
          *a7 = v22 + 1;
          return 0;
        }
        _dwarf_error_string(
          a1,
          a9,
          337,
          "DW_DLE_FORM_BLOCK_LENGTH_ERROR: DW_FORM_block1 runs off the end of the section. Corrupt Dwarf.");
      }
      return 1;
    case 0xBuLL:
    case 0xCuLL:
    case 0x11uLL:
    case 0x25uLL:
    case 0x29uLL:
      *a7 = 1;
      return 0;
    case 0xDuLL:
    case 0xFuLL:
    case 0x15uLL:
    case 0x1AuLL:
    case 0x1BuLL:
    case 0x22uLL:
    case 0x23uLL:
      goto LABEL_6;
    case 0xEuLL:
    case 0x17uLL:
    case 0x1DuLL:
    case 0x1FuLL:
      goto LABEL_11;
    case 0x10uLL:
      if ( a3 != 2 )
        goto LABEL_11;
LABEL_34:
      *a7 = a4;
      return 0;
    case 0x16uLL:
      v29 = 0;
      v30 = 0;
      v31[0] = 0;
      v25 = dwarf_decode_leb128(a5, &v30, v31, a8);
      v26 = a6;
      v19 = a9;
      if ( v25 == 1 )
      {
LABEL_51:
        _dwarf_error_string(a1, v19, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        return 1;
      }
      if ( v31[0] == 22 )
      {
        _dwarf_error(a1, a9, 255);
        return 1;
      }
      v28 = v30;
      size_of_val = dwarf_get_size_of_val(a1, v31[0], a3, a4, (int)a5 + 2 * (int)v30, v26, (__int64)&v29, a8, a9);
      if ( !size_of_val )
        *a7 = v29 + v28;
      return size_of_val;
    case 0x19uLL:
    case 0x21uLL:
      *a7 = 0;
      return 0;
    case 0x1EuLL:
      *a7 = 16;
      return 0;
    case 0x27uLL:
    case 0x2BuLL:
      *a7 = 3;
      return 0;
    default:
      if ( a2 == 8193 )
      {
        v31[0] = 0;
        v20 = _dwarf_skip_leb128(a5, v31, a8);
        v15 = a9;
        if ( v20 != 1 )
        {
          v21 = v31[0];
LABEL_24:
          *a7 = v21 + 4;
          return 0;
        }
        goto LABEL_49;
      }
      if ( a2 <= 0x2001 )
      {
        if ( a2 > 0x1F02 )
        {
          if ( a2 - 7968 > 1 )
            goto LABEL_16;
LABEL_11:
          *a7 = a6;
          return 0;
        }
        if ( a2 > 0x1F00 )
        {
LABEL_6:
          v31[0] = 0;
          v14 = _dwarf_skip_leb128(a5, v31, a8);
          v15 = a9;
          if ( v14 != 1 )
          {
            *a7 = v31[0];
            return 0;
          }
LABEL_49:
          _dwarf_error_string(a1, v15, 329, "DW_DLE_LEB_IMPROPER: skipping leb128 w/len runs past allowed area.b");
          return 1;
        }
      }
LABEL_16:
      dwarfstring_constructor(v31);
      dwarfstring_append_printf_u(v31, "DW_DLE_DEBUG_FORM_HANDLING_INCOMPLETE: DW_FORM 0x%x is not being handled!", a2);
      v17 = dwarfstring_string(v31, "DW_DLE_DEBUG_FORM_HANDLING_INCOMPLETE: DW_FORM 0x%x is not being handled!", v16);
      _dwarf_error_string(a1, a9, 251, v17);
      dwarfstring_destructor(v31);
      return 1;
  }
}

