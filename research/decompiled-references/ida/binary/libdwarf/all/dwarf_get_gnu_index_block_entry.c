__int64 __fastcall dwarf_get_gnu_index_block_entry(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _BYTE *a6,
        _BYTE *a7,
        _BYTE *a8,
        __int64 a9)
{
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v16; // rax
  void *v17; // r15
  int v18; // [rsp+4h] [rbp-44h]
  _QWORD *v19; // [rsp+8h] [rbp-40h]

  if ( !a1 )
  {
    _dwarf_error_string(0, a9, 81, "DW_DLE_DBG_NULL: in dwarf_get_gnu_index_block_entry");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 40) )
    return 0xFFFFFFFFLL;
  v13 = *(_QWORD *)(a1 + 32) + 112 * a2;
  if ( !*(_DWORD *)(v13 + 40) )
  {
    *(_DWORD *)(v13 + 40) = 1;
    v19 = *(_QWORD **)a1;
    v18 = *(_DWORD *)(a1 + 48);
    v16 = calloc(*(_QWORD *)(v13 + 96), 0x18u);
    v17 = v16;
    if ( v16 )
    {
      if ( !(unsigned int)sub_2E500((__int64 **)v13, (__int64)v16, v18, a9) )
      {
        *(_QWORD *)(v13 + 104) = v17;
        if ( a3 < *(_QWORD *)(v13 + 96) )
          goto LABEL_5;
        return 0xFFFFFFFFLL;
      }
      free(v17);
    }
    else
    {
      sub_2E2B0(v19, v18, (__int64)": Unable to allocate block_entries. Out of memory creating record.", a9);
    }
    return 1;
  }
  if ( a3 >= *(_QWORD *)(v13 + 96) )
    return 0xFFFFFFFFLL;
LABEL_5:
  v14 = *(_QWORD *)(v13 + 104) + 24 * a3;
  if ( a4 )
    *a4 = *(_QWORD *)(v14 + 8);
  if ( a5 )
    *a5 = *(_QWORD *)v14;
  if ( a6 )
    *a6 = *(_BYTE *)(v14 + 16);
  if ( a7 )
    *a7 = (unsigned __int8)~*(_BYTE *)(v14 + 16) >> 7;
  if ( a8 )
    *a8 = (unsigned __int8)(*(_BYTE *)(v14 + 16) & 0x70) >> 4;
  return 0;
}

