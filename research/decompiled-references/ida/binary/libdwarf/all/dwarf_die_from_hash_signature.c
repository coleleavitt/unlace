__int64 __fastcall dwarf_die_from_hash_signature(
        struct Dwarf_Debug_s *a1,
        __int64 a2,
        unsigned __int8 *a3,
        Dwarf_Die *a4,
        Dwarf_Error *a5)
{
  unsigned int debugfission_for_key; // r9d
  int v10; // eax
  int v11; // r14d
  Dwarf_Bool v12; // r15d
  __int64 v13; // rsi
  Dwarf_Off dwp_extra_offset; // r13
  int v15; // eax
  Dwarf_Die v16; // rsi
  unsigned int v17; // ebp
  __int64 v18; // [rsp+10h] [rbp-148h] BYREF
  Dwarf_Off v19; // [rsp+18h] [rbp-140h] BYREF
  Dwarf_Die v20; // [rsp+20h] [rbp-138h] BYREF
  Dwarf_Die v21; // [rsp+28h] [rbp-130h] BYREF
  _BYTE v22[232]; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v23; // [rsp+118h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_die_from_hash_signature()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( (unsigned int)_dwarf_load_debug_info(a1, a5) == 1 || (unsigned int)_dwarf_load_debug_types(a1, a5) == 1 )
    return 1;
  v10 = *a3;
  if ( v10 != 116 || a3[1] != 117 || (v11 = 1, a3[2]) )
  {
    if ( v10 != 99 || a3[1] != 117 || (v11 = a3[2]) != 0 )
    {
      _dwarf_error(a1, a5, 289);
      return 1;
    }
  }
  if ( !(unsigned int)_dwarf_file_has_debug_fission_index(a1, a5) )
  {
    _dwarf_error(a1, a5, 294);
    return 1;
  }
  memset(v22, 0, sizeof(v22));
  v18 = 0;
  v19 = 0;
  v20 = nullptr;
  v21 = nullptr;
  debugfission_for_key = dwarf_get_debugfission_for_key(a1, a2, a3, v22, a5);
  if ( !debugfission_for_key )
  {
    if ( v11 && *((_QWORD *)a1 + 75) )
    {
      v12 = 0;
      v13 = 2;
    }
    else
    {
      v12 = 1;
      v13 = 1;
    }
    dwp_extra_offset = _dwarf_get_dwp_extra_offset(v22, v13, &v18);
    debugfission_for_key = dwarf_get_cu_die_offset_given_cu_header_offset_b(a1, dwp_extra_offset, v12, &v19, a5);
    if ( !debugfission_for_key )
    {
      debugfission_for_key = dwarf_offdie_b(a1, v19, v12, &v20, a5);
      if ( !debugfission_for_key )
      {
        if ( v11 )
        {
          v15 = dwarf_offdie_b(a1, dwp_extra_offset + *(_QWORD *)(*((_QWORD *)v20 + 2) + 96LL), v12, &v21, a5);
          v16 = v20;
          v17 = v15;
          if ( v15 )
          {
            dwarf_dealloc(a1, v20, 8u);
            return v17;
          }
          else
          {
            *a4 = v21;
            dwarf_dealloc(a1, v16, 8u);
            return 0;
          }
        }
        else
        {
          *a4 = v20;
        }
      }
    }
  }
  return debugfission_for_key;
}

