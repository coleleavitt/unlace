__int64 __fastcall dwarf_highpc_b(__int64 *a1, _QWORD *a2, _WORD *a3, enum Dwarf_Form_Class *a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 result; // rax
  int is_indexed; // eax
  __int64 v12; // r10
  __int64 v13; // r14
  unsigned __int8 v14; // [rsp+7h] [rbp-91h]
  __int64 v15; // [rsp+8h] [rbp-90h]
  enum Dwarf_Form_Class form_class; // [rsp+10h] [rbp-88h]
  unsigned int v17; // [rsp+14h] [rbp-84h]
  unsigned __int64 v18; // [rsp+18h] [rbp-80h]
  Dwarf_Half v19; // [rsp+2Eh] [rbp-6Ah] BYREF
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a5, 52);
    return 1;
  }
  v6 = a1[2];
  if ( !v6 )
  {
    _dwarf_error(0, a5, 104);
    return 1;
  }
  v7 = *(_QWORD *)v6;
  if ( !*(_QWORD *)v6 || *(_QWORD *)v7 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v14 = *(_BYTE *)(v6 + 32);
  result = sub_51B30(a1, 18, &v19, &v20, nullptr, a5);
  if ( (_DWORD)result == 1 )
    return 1;
  if ( (_DWORD)result != -1 )
  {
    v18 = _dwarf_calculate_info_section_end_ptr(a1[2]);
    v17 = v19;
    form_class = dwarf_get_form_class(*(_WORD *)(a1[2] + 18), 0x12u, *(unsigned __int8 *)(a1[2] + 16), v19);
    if ( form_class == DW_FORM_CLASS_ADDRESS )
    {
      is_indexed = dwarf_addr_form_is_indexed(v17);
      v12 = v20;
      if ( is_indexed )
      {
        v13 = a1[2];
        v23 = 0;
        v15 = v20;
        v24[0] = 0;
        result = _dwarf_get_addr_index_itself(v17, v20, v7, v13, v24, a5);
        if ( (_DWORD)result )
          return result;
        result = _dwarf_look_in_local_and_tied_by_index(v7, v13, v24[0], &v23, a5);
        v12 = v15;
        if ( (_DWORD)result )
          return result;
      }
      v24[0] = 0;
      if ( __CFADD__(v14, v12) )
      {
        _dwarf_error_string(v7, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        return 1;
      }
      if ( v18 < (unsigned __int64)v14 + v12 )
      {
        _dwarf_error_string(v7, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(v7 + 8296))(v24, v12);
      *a2 = v24[0];
      goto LABEL_13;
    }
    v21 = 0;
    if ( !(unsigned int)sub_52350(a1, 18, &v21, a5) )
    {
      *a2 = v21;
LABEL_13:
      if ( a3 )
        *a3 = v19;
      if ( a4 )
        *a4 = form_class;
      return 0;
    }
    v22 = 0;
    result = sub_51B30(a1, 18, &v19, &v22, nullptr, a5);
    if ( (_DWORD)result == 1 )
      return 1;
    if ( (_DWORD)result != -1 )
    {
      if ( v19 != 13 )
      {
        _dwarf_error(v7, a5, 397);
        return 1;
      }
      v23 = 0;
      v24[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v22, &v23, v24, v18) == 1 )
      {
        _dwarf_error_string(v7, a5, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        return 1;
      }
      *a2 = v24[0];
      goto LABEL_13;
    }
  }
  return result;
}

