__int64 __fastcall dwarf_debug_addr_by_index(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v5; // edx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error_string(0, a4, 492, "DW_DLE_DEBUG_ADDR_ERROR: NULL dw_dat passed in.");
    return 1;
  }
  if ( *(_QWORD *)a1 != 64222 )
  {
    _dwarf_error_string(0, a4, 492, "DW_DLE_DEBUG_ADDR_ERROR: Bad debug addr table magic number. ");
    return 1;
  }
  v5 = -1;
  if ( a2 < *(_QWORD *)(a1 + 56) )
  {
    v6 = *(unsigned __int8 *)(a1 + 82);
    v7 = *(_QWORD *)(a1 + 48) + v6 * a2;
    if ( *(_QWORD *)(a1 + 64) < v7 + v6 )
    {
      _dwarf_error_string(0, a4, 492, "DW_DLE_DEBUG_ADDR_ERROR: Bad debug addr table: miscount, too short. ");
    }
    else
    {
      v10[0] = 0;
      v8 = *(_QWORD *)(a1 + 8);
      if ( v7 + v6 >= v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(v8 + 8296))(v10);
        v5 = 0;
        *a3 = v10[0];
        return v5;
      }
      _dwarf_error_string(v8, a4, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    }
    return 1;
  }
  return v5;
}

