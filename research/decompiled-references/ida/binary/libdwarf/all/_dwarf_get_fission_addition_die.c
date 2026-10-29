__int64 __fastcall dwarf_get_fission_addition_die(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v5; // rdi
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v8[0] = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a5, 52);
    return 1;
  }
  v5 = *(_QWORD **)(a1 + 16);
  if ( !v5 )
  {
    _dwarf_error(0, a5, 104);
    return 1;
  }
  if ( !*v5 || *(_QWORD *)*v5 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  *a3 = _dwarf_get_dwp_extra_offset(v5 + 13, a2, v8);
  *a4 = v8[0];
  return 0;
}

