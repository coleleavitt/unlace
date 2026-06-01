__int64 __fastcall dwarf_gdbindex_cuvector_instance_expand_value(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  if ( a1 && *a1 )
  {
    *a3 = a2 & 0xFFFFFF;
    *a4 = (a2 >> 28) & 7;
    *a5 = (a2 >> 31) & 1;
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: The call to dwarf_gdbindex_cuvector_instance_expand_value provides no dbg pointer");
    return 1;
  }
}

