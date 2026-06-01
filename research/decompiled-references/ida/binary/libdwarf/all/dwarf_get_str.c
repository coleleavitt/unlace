__int64 __fastcall dwarf_get_str(_QWORD *a1, unsigned __int64 a2, const char **a3, size_t *a4, __int64 a5)
{
  unsigned int section; // r12d
  __int64 v10; // rcx
  __int64 v11; // rsi
  const char *v12; // r15

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_str()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a1[365] == a2 )
    return (unsigned int)-1;
  if ( a1[365] < a2 )
  {
    _dwarf_error(a1, a5, 121);
    return 1;
  }
  if ( !a3 || !a4 )
  {
    _dwarf_error(a1, a5, 122);
    return 1;
  }
  section = _dwarf_load_section(a1, a1 + 364, a5);
  if ( section )
    return section;
  v10 = a1[365];
  if ( !v10 )
    return (unsigned int)-1;
  v11 = a1[364];
  v12 = (const char *)(v11 + a2);
  section = _dwarf_check_string_valid(a1, v11, v12, v11 + v10, 121, a5);
  if ( !section )
  {
    *a3 = v12;
    *a4 = strlen(v12);
  }
  return section;
}

