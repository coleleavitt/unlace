__int64 __fastcall dwarf_srclines_include_dir_data(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  if ( a2 < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a4,
      499,
      "DW_DLE_LINE_INDEX_WRONG Call to dwarf_srclines_include_dir_data finds an Impossible include directories count");
    return 1;
  }
  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a4, 305);
    return 1;
  }
  if ( *(_WORD *)(a1 + 24) != 5 )
  {
    if ( a2 && *(_QWORD *)(a1 + 152) >= (unsigned __int64)a2 )
    {
      *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * a2 - 8);
      return 0;
    }
LABEL_10:
    _dwarf_error(*(_QWORD *)(a1 + 288), a4, 306);
    return 1;
  }
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 152) )
    goto LABEL_10;
  *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * a2);
  return 0;
}

