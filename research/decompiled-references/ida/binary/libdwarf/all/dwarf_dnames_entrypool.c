__int64 __fastcall dwarf_dnames_entrypool(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _WORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned __int64 v10; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  if ( !a1 || *a1 != 43981 )
  {
    _dwarf_error(0, a8, 81);
    return 1;
  }
  v10 = a1[18];
  if ( a2 >= v10 )
  {
    _dwarf_error(0, a8, 380);
    return 1;
  }
  v22 = a1[1];
  v14 = a1[38];
  v23 = 0;
  v24[0] = 0;
  if ( (unsigned int)dwarf_decode_leb128(v14 + a2, &v23, v24, v14 + v10) == 1 )
  {
    _dwarf_error_string(v22, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
    return 1;
  }
  v15 = a1[40];
  v16 = v24[0];
  v17 = v23;
  v18 = (_QWORD *)a1[39];
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v19 = 0;
  while ( v24[0] != v18[2] )
  {
    ++v19;
    v18 += 10;
    if ( v15 == v19 )
      return 0xFFFFFFFFLL;
  }
  if ( a4 )
    *a4 = v18[3];
  if ( a6 )
    *a6 = v19;
  if ( a5 )
    *a5 = v18[4];
  *a7 = a2 + v17;
  *a3 = v16;
  return 0;
}

