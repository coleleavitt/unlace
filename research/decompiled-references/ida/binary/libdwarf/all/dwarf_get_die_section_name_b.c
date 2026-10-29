__int64 __fastcall dwarf_get_die_section_name_b(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rdi

  if ( !a1 )
  {
    _dwarf_error(0, a3, 52);
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
  {
    _dwarf_error(0, a3, 104);
    return 1;
  }
  v6 = *(_QWORD **)v5;
  if ( !*(_QWORD *)v5 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  return dwarf_get_die_section_name(v6, *(unsigned int *)(v5 + 648), a2, a3);
}

