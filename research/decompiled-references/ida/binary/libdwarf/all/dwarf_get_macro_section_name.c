__int64 __fastcall dwarf_get_macro_section_name(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edx

  if ( a1 && *a1 == 3959286781LL )
  {
    v3 = -1;
    if ( a1[278] )
    {
      *a2 = a1[300];
      return 0;
    }
    return v3;
  }
  else
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_macro_section_name()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

