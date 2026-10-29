__int64 __fastcall dwarf_srclines_include_dir_count(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( !a1 || *(_DWORD *)a1 != -804450031 )
  {
    _dwarf_error(0, a3, 305);
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 < 0 )
  {
    _dwarf_error_string(
      *(_QWORD *)(a1 + 288),
      a3,
      500,
      "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines_include_dir_count finds an Impossible include directories count");
    return 1;
  }
  *a2 = v6;
  return 0;
}

