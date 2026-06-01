__int64 __fastcall dwarf_get_debugfission_for_key(__int64 a1, _QWORD *a2, unsigned __int8 *a3, _QWORD *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-A0h]
  __int64 v15; // [rsp+28h] [rbp-80h] BYREF
  __int64 v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v19[9]; // [rsp+60h] [rbp-48h] BYREF

  v19[1] = __readfsqword(0x28u);
  v15 = 0;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_debugfission_for_key()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a4 == nullptr || a3 == nullptr || !a2 )
  {
    _dwarf_error_string(
      0,
      a5,
      268,
      "DW_DLE_XU_TYPE_ARG_ERROR: dw_key, dw_keytype, or Dwarf_Debug_Fission_Per_CU pointer* to return is not valid");
    return 1;
  }
  if ( (unsigned int)_dwarf_load_debug_info(a1, a5) == 1 || (unsigned int)_dwarf_load_debug_types(a1, a5) == 1 )
    return 1;
  result = sub_5C630(a1, a3, &v15, a5);
  if ( !(_DWORD)result )
  {
    v9 = v15;
    v16 = 0;
    v17 = 0;
    v19[0] = 0;
    v10 = *(_QWORD *)(v15 + 16);
    v14 = *(_QWORD *)(v15 + 48);
    if ( v10 < v14 )
    {
      dwarfstring_constructor(v18);
      dwarfstring_append_printf_u(v18, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the slots count of %u ", v14);
    }
    else
    {
      if ( !v14 )
        return 0xFFFFFFFFLL;
      if ( v10 >= 4 * v14 )
      {
        (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(a1 + 8296))(&v16, a2, 8);
        v11 = 0;
        while ( 1 )
        {
          result = dwarf_get_xu_hash_entry(v9, v11, v19, &v17, a5);
          if ( (_DWORD)result )
            break;
          if ( (v17 || v19[0]) && v19[0] == *a2 )
            return sub_5D7E0(v9, v17, a2, (__int64)a3, a4, a5);
          if ( v14 == ++v11 )
            return 0xFFFFFFFFLL;
        }
        return result;
      }
      dwarfstring_constructor(v18);
      dwarfstring_append_printf_u(v18, "ERROR: DW_DLE_XU_NAME_COL_ERROR as the slots count *4 of %u ", 4 * v14);
    }
    dwarfstring_append_printf_u(v18, " is too high. given the section length of %u\n", *(_QWORD *)(v9 + 16));
    v13 = dwarfstring_string(v18, " is too high. given the section length of %u\n", v12);
    _dwarf_error_string(a1, a5, 270, v13);
    dwarfstring_destructor(v18);
    return 1;
  }
  return result;
}

