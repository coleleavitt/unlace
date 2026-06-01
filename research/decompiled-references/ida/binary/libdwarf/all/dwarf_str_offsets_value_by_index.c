__int64 __fastcall dwarf_str_offsets_value_by_index(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error(0, a4, 402);
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
  {
    _dwarf_error(0, a4, 403);
    return 1;
  }
  if ( *(_QWORD *)a1 != 3141330 )
  {
    _dwarf_error(*(_QWORD *)(a1 + 8), a4, 404);
    return 1;
  }
  result = _dwarf_load_section(*(_QWORD *)(a1 + 8), v5 + 6160, a4);
  if ( !(_DWORD)result )
  {
    v9 = *(_QWORD *)(v5 + 6168);
    if ( a2 >= *(_QWORD *)(a1 + 88) )
      return 0xFFFFFFFFLL;
    v10 = *(unsigned __int16 *)(a1 + 96);
    v11 = *(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 80) + v10 * a2;
    if ( v9 < v11 || v9 < v10 + v11 )
    {
      _dwarf_error_string(
        v5,
        a4,
        407,
        "DW_DLE_STR_OFFSETS_ARRAY_INDEX_WRONG: A libdwarf internal bug. Report to the maintainers");
    }
    else
    {
      v13[0] = 0;
      v12 = *(_QWORD *)(a1 + 16) + v11;
      if ( !__CFADD__(v10, v12) )
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v5 + 8296))(v13, v12, v10);
        *a3 = v13[0];
        return 0;
      }
      _dwarf_error_string(v5, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    }
    return 1;
  }
  return result;
}

