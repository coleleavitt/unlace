__int64 __fastcall sub_520E0(__int64 *a1, __int16 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 result; // rax
  unsigned __int8 v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  Dwarf_Half v14; // [rsp+4h] [rbp-64h]
  unsigned __int8 v15; // [rsp+Bh] [rbp-5Dh]
  unsigned int v16; // [rsp+Ch] [rbp-5Ch]
  Dwarf_Half v17; // [rsp+16h] [rbp-52h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
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
  v15 = *(_BYTE *)(v6 + 32);
  v11 = *(_BYTE *)(v6 + 16);
  result = sub_51B30(a1, a2, &v17, &v18, nullptr, a5);
  if ( (_DWORD)result == 1 )
    return 1;
  if ( (_DWORD)result != -1 )
  {
    v14 = v17;
    v16 = v17;
    if ( dwarf_get_form_class(*(_WORD *)(v6 + 18), a2, v11, v17) == DW_FORM_CLASS_ADDRESS )
    {
      v12 = v18;
      if ( v14 == 7937 || v14 == 27 )
        return _dwarf_look_in_local_and_tied(v16, v6, v18, a4, a5);
      v13 = _dwarf_calculate_info_section_end_ptr(v6);
      v19[0] = 0;
      if ( __CFADD__(v15, v12) )
      {
        _dwarf_error_string(v7, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      }
      else
      {
        if ( v13 >= (unsigned __int64)v15 + v12 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(v7 + 8296))(v19, v12);
          *a4 = v19[0];
          return 0;
        }
        _dwarf_error_string(v7, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      }
    }
    else
    {
      _dwarf_error_string(v7, a5, 396, a3);
    }
    return 1;
  }
  return result;
}

