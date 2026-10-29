__int64 __fastcall dwarf_get_xu_hash_entry(__int64 *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v11; // edx
  __int64 v13; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rax
  _QWORD v20[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a1[6];
  v7 = *a1;
  v20[5] = __readfsqword(0x28u);
  if ( !v6 )
  {
    _dwarf_error_string(v7, a5, 271, "DW_DLE_XU_HASH_ROW_ERROR the number of slots is zero which seems wrong.");
    return 1;
  }
  v11 = -1;
  if ( a2 < v6 )
  {
    v13 = a1[1];
    v15 = a1[8];
    v16 = v13 + a1[2];
    *a3 = *(_QWORD *)(a1[7] + v13 + 8 * a2);
    v17 = v15 + 4 * a2 + v13;
    if ( v17 >= v16 || v16 < v17 + 4 )
    {
      dwarfstring_constructor(v20);
      dwarfstring_append_printf_u(
        v20,
        "DW_DLE_XU_HASH_ROW_ERROR the index passed in,  %u, results in entry not fitting in the hash table (past end of section)",
        a2);
      v19 = dwarfstring_string(
              v20,
              "DW_DLE_XU_HASH_ROW_ERROR the index passed in,  %u, results in entry not fitting in the hash table (past end of section)",
              v18);
      _dwarf_error_string(v7, a5, 271, v19);
      dwarfstring_destructor(v20);
    }
    else
    {
      v20[0] = 0;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v7 + 8296))(v20, v17, 4);
      if ( (unsigned __int64)a1[5] >= v20[0] )
      {
        *a4 = v20[0];
        return 0;
      }
      _dwarf_error(v7, a5, 272);
    }
    return 1;
  }
  return v11;
}

