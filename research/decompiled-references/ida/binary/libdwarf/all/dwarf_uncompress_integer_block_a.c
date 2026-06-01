__int64 __fastcall dwarf_uncompress_integer_block_a(
        struct Dwarf_Debug_s *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        __int64 a6)
{
  struct Dwarf_Debug_s *v7; // r10
  __int64 v8; // r11
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 alloc; // rax
  __int64 v15; // r9
  void *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  void *v19; // r12
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned int v22; // r14d
  int i; // eax
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  Dwarf_Debug v31; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v35[9]; // [rsp+50h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_uncompress_integer_block_a()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v7 = (struct Dwarf_Debug_s *)a2;
  v8 = a3;
  v9 = a3 + a2;
  v10 = a2;
  v11 = a2;
  if ( a2 <= 0 )
  {
    v13 = 0;
  }
  else
  {
    v12 = a3;
    v13 = 0;
    v24 = a6;
    do
    {
      v34 = 0;
      v35[0] = 0;
      if ( (unsigned int)dwarf_decode_signed_leb128(v12, &v34, v35, v9) )
      {
        _dwarf_error(0, v24, 329);
        return 1;
      }
      ++v13;
      v11 -= v34;
      v12 += v34;
    }
    while ( v11 > 0 );
    v10 = a2;
    v7 = (struct Dwarf_Debug_s *)a2;
    v8 = a3;
    a6 = v24;
  }
  if ( v11 )
  {
    _dwarf_error(0, a6, 62);
    return 1;
  }
  v26 = a6;
  v33 = v8;
  v31 = v7;
  v28 = v10;
  alloc = _dwarf_get_alloc(a1, 1, 8 * v13);
  v15 = v26;
  v16 = (void *)alloc;
  if ( !alloc )
  {
    _dwarf_error(a1, v26, 62);
    return 1;
  }
  v17 = v28;
  if ( (__int64)v31 > 0 && v13 )
  {
    v18 = 0;
    v25 = v9;
    v19 = (void *)alloc;
    v20 = v33;
    v21 = v28;
    v22 = 0;
    for ( i = dwarf_decode_signed_leb128(v33, v35, &v34, v25); ; i = dwarf_decode_signed_leb128(v20, v35, &v34, v25) )
    {
      if ( i )
      {
        dwarf_dealloc(a1, v19, 1u);
        _dwarf_error(0, v26, 329);
        return 1;
      }
      v20 += v35[0];
      v21 -= v35[0];
      *((_QWORD *)v19 + v18) = v34;
      v18 = ++v22;
      if ( v22 >= v13 || v21 <= 0 )
        break;
    }
    v15 = v26;
    v16 = v19;
    v17 = v21;
  }
  if ( v17 )
  {
    v27 = v15;
    dwarf_dealloc(a1, v16, 1u);
    _dwarf_error(a1, v27, 62);
    return 1;
  }
  *a4 = v13;
  *a5 = v16;
  return 0;
}

