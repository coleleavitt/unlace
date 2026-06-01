__int64 __fastcall dwarf_CU_dieoffset_given_die(__int64 a1, Dwarf_Off *a2, Dwarf_Error *a3)
{
  __int64 v3; // rax
  struct Dwarf_Debug_s *v4; // r9

  if ( !a1 )
  {
    _dwarf_error(0, a3, 52);
    return 1;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    _dwarf_error(0, a3, 104);
    return 1;
  }
  v4 = *(struct Dwarf_Debug_s **)v3;
  if ( !*(_QWORD *)v3 || *(_QWORD *)v4 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  dwarf_get_cu_die_offset_given_cu_header_offset_b(v4, *(_QWORD *)(v3 + 72), *(_DWORD *)(a1 + 32), a2, a3);
  return 0;
}

