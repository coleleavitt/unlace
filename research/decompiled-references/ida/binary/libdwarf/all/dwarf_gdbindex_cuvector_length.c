__int64 __fastcall dwarf_gdbindex_cuvector_length(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  if ( a1 && *a1 )
  {
    if ( a1[1] + a1[2] >= (unsigned __int64)(a1[25] + a2 + a1[27]) )
    {
      __memcpy_chk();
      *a3 = 0;
      return 0;
    }
    _dwarf_error_string(
      *a1,
      a4,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: end offset of count of gdbindex cuvector  is past the end of the section");
  }
  else
  {
    _dwarf_error_string(
      0,
      a4,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: passed in NULL indexptr to dwarf_gdbindex_cuvector_length");
  }
  return 1;
}

