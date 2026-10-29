__int64 __fastcall dwarf_decode_line_udata_form(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  unsigned __int8 *v10; // r14
  __int64 v11; // r8
  char *v12; // r12
  unsigned __int8 *v14; // rdi
  unsigned __int8 *v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // r14
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a3;
  v9 = a2;
  v10 = *(unsigned __int8 **)a4;
  v24[1] = __readfsqword(0x28u);
  v11 = a7;
  v12 = (char *)a4;
  switch ( a3 )
  {
    case 5LL:
      if ( ((a2 - 2) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        a4 = nullptr;
        if ( (unsigned __int64)(a2 - 7) > 1 )
          goto LABEL_3;
      }
      v15 = v10 + 2;
      v16 = 2;
      v24[0] = 0;
      if ( a6 >= (unsigned __int64)(v10 + 2) )
        goto LABEL_15;
      goto LABEL_12;
    case 6LL:
      if ( ((a2 - 3) & 0xFFFFFFFFFFFFFFFALL) != 0 )
        goto LABEL_2;
      v15 = v10 + 4;
      v16 = 4;
      v24[0] = 0;
      if ( a6 < (unsigned __int64)(v10 + 4) )
        goto LABEL_12;
LABEL_15:
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, const char *, __int64))(a1 + 8296))(
        v24,
        v10,
        v16,
        a4,
        a7);
      *a5 = v24[0];
      *(_QWORD *)v12 = v15;
      return 0;
    case 7LL:
      a4 = nullptr;
      if ( (unsigned __int64)(a2 - 3) > 1 )
        goto LABEL_3;
      v24[0] = 0;
      if ( a6 < (unsigned __int64)(v10 + 8) )
      {
LABEL_12:
        _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, _QWORD, __int64))(a1 + 8296))(v24, v10, 8, 0, a7);
      *a5 = v24[0];
      *(_QWORD *)v12 = v10 + 8;
      return 0;
    case 9LL:
      a4 = nullptr;
      if ( a2 != 3 )
        goto LABEL_3;
      v23 = 0;
      v24[0] = 0;
      v17 = dwarf_decode_leb128(v10, &v23, v24, a6);
      v11 = a7;
      if ( v17 == 1 )
      {
        _dwarf_error_string(a1, a7, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        return 1;
      }
      v19 = v24[0];
      if ( v24[0] > 8u )
      {
        a4 = "FORM_block length bigger than Dwarf_Unsigned";
LABEL_3:
        sub_32250(a1, v9, v8, a4, v11);
        return 1;
      }
      v20 = &v10[2 * v23];
      if ( (unsigned __int64)v20 >= a6 )
      {
        a4 = "FORM_block data starts past end of data";
        goto LABEL_3;
      }
      v21 = &v20[v24[0]];
      if ( a6 < (unsigned __int64)&v20[v24[0]] )
      {
        a4 = "FORM_block data runs past end of data";
        goto LABEL_3;
      }
      v24[0] = 0;
      if ( v21 < v20 )
      {
        _dwarf_error_string(a1, a7, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, __int64, __int64, unsigned __int64))(a1 + 8296))(
        v24,
        v20,
        v19,
        v18,
        a7,
        a6);
      *a5 = v24[0];
      *(_QWORD *)v12 = v21;
      return 0;
    case 11LL:
      if ( ((a2 - 2) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        a4 = nullptr;
        if ( (unsigned __int64)(a2 - 7) > 1 )
          goto LABEL_3;
      }
      *a5 = *v10;
      *(_QWORD *)v12 = v10 + 1;
      return 0;
    case 15LL:
      if ( (unsigned __int64)(a2 - 2) > 2 )
      {
        a4 = nullptr;
        if ( (unsigned __int64)(a2 - 7) > 1 )
          goto LABEL_3;
      }
      v23 = 0;
      v24[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v10, &v23, v24, a6) != 1 )
      {
        v14 = &v10[v23];
        *a5 = v24[0];
        *(_QWORD *)v12 = v14;
        return 0;
      }
      _dwarf_error_string(a1, a7, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    default:
LABEL_2:
      a4 = nullptr;
      goto LABEL_3;
  }
}

