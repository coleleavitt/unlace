__int64 __fastcall dwarf_validate_register_numbers(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  __int64 result; // rax

  v2 = a1[1042];
  v3 = a1[1043];
  if ( v2 == v3 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR same_value == undefined_value");
    return 1;
  }
  v4 = a1[1041];
  if ( v2 == v4 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR same_value == cfa_column_number ");
    return 1;
  }
  if ( v3 == v4 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR undefined_value == cfa_column_number ");
    return 1;
  }
  v5 = a1[1039];
  if ( v3 != v5 && v2 != v5 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR initial_value not set to  same_value or undefined_value");
    return 1;
  }
  v6 = a1[1040];
  if ( v6 >= v3 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR undefined_value less than number of registers");
    return 1;
  }
  if ( v6 >= v2 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR same_value  <= number of registers");
    return 1;
  }
  result = 0;
  if ( v6 >= v4 )
  {
    _dwarf_error_string(a1, a2, 83, "DW_DLE_DEBUGFRAME_ERROR cfa_column <= number of registers");
    return 1;
  }
  return result;
}

