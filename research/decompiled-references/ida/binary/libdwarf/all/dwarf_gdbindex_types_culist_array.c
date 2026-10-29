__int64 __fastcall dwarf_gdbindex_types_culist_array(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  if ( a1 && *a1 )
  {
    *a2 = a1[14];
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a3,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL inindexptr to dwarf_types_culist_entry");
    return 1;
  }
}

