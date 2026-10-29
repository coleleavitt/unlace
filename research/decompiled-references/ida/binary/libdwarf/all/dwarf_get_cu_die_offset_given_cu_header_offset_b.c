__int64 __fastcall dwarf_get_cu_die_offset_given_cu_header_offset_b(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v7[0] = 0;
  if ( a1 && *a1 == 3959286781LL )
  {
    result = _dwarf_length_of_cu_header(a1, a2, a3, v7, a5);
    if ( !(_DWORD)result )
      *a4 = v7[0] + a2;
  }
  else
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: calling dwarf_get_cu_die_offset_givencu_header_offset_b Dwarf_Debug iseither null or it isa stale"
      " Dwarf_Debug pointer");
    return 1;
  }
  return result;
}

