__int64 __fastcall dwarf_global_name_offsets(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 result; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  const char *v16; // rdx
  __int64 v17; // rax
  _QWORD v18[11]; // [rsp+0h] [rbp-58h] BYREF

  v18[5] = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error(0, a5, 125);
    return 1;
  }
  v9 = a1[2];
  if ( !v9 )
  {
    _dwarf_error_string(0, a5, 126, "DW_DLE_GLOBAL_CONTEXT_NULL in call of dwarf_global_name_offsets()");
    return 1;
  }
  v10 = *(_QWORD **)(v9 + 8);
  if ( !v10 || *v10 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_global_name_offsets()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v13 = *(_QWORD *)(v9 + 48);
  v14 = v13 + 10;
  if ( v13 >= 0xFFFFFFFFFFFFFFF6LL || v14 <= 9 || v10[46] - 1LL < v14 )
  {
    dwarfstring_constructor(v18);
    dwarfstring_append_printf_u(v18, "DW_DLE_OFFSET_BAD: The CU header offset of %u in a pubnames-like entry ", v13);
    dwarfstring_append_printf_s();
    v17 = dwarfstring_string(
            v18,
            "would put us %s the end of .debug_info. No room for a DIE there... Corrupt Dwarf.",
            v16);
    _dwarf_error_string(v10, a5, 131, v17);
    dwarfstring_destructor(v18);
    return 1;
  }
  if ( a3 )
  {
    v15 = *a1 + v13;
    if ( !*a1 )
      v15 = 0;
    *a3 = v15;
  }
  *a2 = a1[1];
  if ( !a4 )
    return 0;
  v18[0] = 0;
  result = _dwarf_load_debug_info(v10, a5);
  if ( !(_DWORD)result )
  {
    result = _dwarf_length_of_cu_header(v10, v13, 1, v18, a5);
    if ( !(_DWORD)result )
    {
      *a4 = v18[0] + v13;
      return 0;
    }
  }
  return result;
}

