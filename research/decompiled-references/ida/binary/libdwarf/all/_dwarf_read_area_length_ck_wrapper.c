__int64 __fastcall dwarf_read_area_length_ck_wrapper(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4,
        int *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r10d
  _QWORD v20[9]; // [rsp+30h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v10 = *a3;
  v20[0] = 0;
  v11 = v10 + 4;
  if ( a7 < v10 + 4 )
  {
    _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v20, v10, 4);
  v15 = v20[0];
  if ( v20[0] == 0xFFFFFFFFLL )
  {
    v20[0] = 0;
    if ( a7 < v10 + 12 )
      goto LABEL_17;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, unsigned __int64))(a1 + 8296))(
      v20,
      v11,
      8,
      v10 + 12,
      v14,
      a7);
    v15 = v20[0];
    if ( a6 >= v20[0] )
    {
      v11 = v10 + 12;
      v17 = 8;
      v16 = 4;
      goto LABEL_5;
    }
  }
  else
  {
    v16 = 0;
    v17 = 4;
    if ( !v20[0] )
    {
      if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
        goto LABEL_5;
      v11 = v10 + 8;
      if ( a7 >= v10 + 8 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, unsigned __int64))(a1 + 8296))(
          v20,
          v10,
          8,
          0,
          v14,
          a7);
        v15 = v20[0];
        v16 = 0;
        v17 = 8;
        if ( a6 < v20[0] )
          goto LABEL_7;
LABEL_5:
        *a3 = v11;
        *a2 = v15;
        *a4 = v17;
        *a5 = v16;
        return 0;
      }
LABEL_17:
      _dwarf_error_string(a1, a8, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    if ( a6 >= v20[0] )
      goto LABEL_5;
  }
LABEL_7:
  _dwarf_create_area_len_error(a1, a8, v15, a6);
  return 1;
}

