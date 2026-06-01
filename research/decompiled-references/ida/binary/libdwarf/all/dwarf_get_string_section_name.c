__int64 __fastcall dwarf_get_string_section_name(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edx

  if ( a1 && *a1 == 3959286781LL )
  {
    if ( a3 )
      *a3 = 0;
    v3 = -1;
    if ( a1[365] )
    {
      *a2 = a1[387];
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
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_string_section_name()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

