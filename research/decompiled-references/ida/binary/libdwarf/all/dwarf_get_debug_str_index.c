__int64 __fastcall dwarf_get_debug_str_index(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v3; // r13
  unsigned int str_index_val_itself; // ebx
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // r15
  unsigned int section; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_WORD *)(a1 + 2);
  v14[1] = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  v14[0] = 0;
  if ( (unsigned int)sub_1F170(&v13, &v12, a1, a3) )
    return 1;
  v7 = v12;
  v8 = _dwarf_calculate_info_section_end_ptr(v12);
  v9 = v13;
  str_index_val_itself = _dwarf_read_str_index_val_itself(v13, v3, *(_QWORD *)(a1 + 16), v8, (int)v14, 0, a3);
  if ( !str_index_val_itself )
  {
    *a2 = v14[0];
    return str_index_val_itself;
  }
  section = _dwarf_load_section(v9, v9 + 6160, a3);
  if ( section )
    return section;
  v11 = *(_QWORD *)(v9 + 6168);
  if ( v11 < v14[0] || v11 < (unsigned __int64)*(unsigned __int8 *)(v7 + 16) * v14[0] )
  {
    _dwarf_error_string(
      v9,
      a3,
      116,
      "DW_DLE_ATTR_FORM_SIZE_BAD: An Attribute Value (index  into .debug_str_offsets) is Impossibly large. Corrupt Dwarf.");
    return 1;
  }
  return str_index_val_itself;
}

