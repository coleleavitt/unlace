__int64 __fastcall dwarf_gdbindex_string_by_offset(_QWORD *a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE v14[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( !a1 || (v5 = (_QWORD *)*a1) == nullptr )
  {
    _dwarf_error_string(
      0,
      a4,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: The gdbindex pointer to dwarf_gdbindex_string_by_offset() is NULL");
    return 1;
  }
  if ( *v5 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      264,
      "DW_DLE_GDB_INDEX_INDEX_ERROR: The gdbindex Dwarf_Debug indwarf_gdbindex_string_by_offset() is NULL");
    return 1;
  }
  v6 = a1[1];
  v7 = a1[8] + a2;
  v8 = v6 + a1[2];
  v9 = v7 + v6;
  if ( v8 < v9 )
  {
    dwarfstring_constructor(v14);
    dwarfstring_append_printf_u(
      v14,
      "DW_DLE_GDBINDEX_STRING_ERROR: The dwarf_gdbindex_string_by_offset() string starts past the end of the section at s"
      "ection_offset 0x%08llx.",
      v7);
    v13 = dwarfstring_string(
            v14,
            "DW_DLE_GDBINDEX_STRING_ERROR: The dwarf_gdbindex_string_by_offset() string starts past the end of the sectio"
            "n at section_offset 0x%08llx.",
            v12);
    _dwarf_error_string(v5, a4, 471, v13);
    dwarfstring_destructor(v14);
    return 1;
  }
  result = _dwarf_check_string_valid(*a1, 0, v9, v8, 471, a4);
  if ( !(_DWORD)result )
    *a3 = v9;
  return result;
}

