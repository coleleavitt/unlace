__int64 __fastcall dwarf_next_str_offsets_table(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int16 *a5,
        _WORD *a6,
        _WORD *a7,
        unsigned __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r10
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned int str_offsets_header; // ecx
  _BYTE *v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int16 v27; // si
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rtt
  __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // [rsp+28h] [rbp-90h]
  unsigned __int16 v34; // [rsp+30h] [rbp-88h] BYREF
  __int16 v35; // [rsp+32h] [rbp-86h] BYREF
  __int16 v36; // [rsp+34h] [rbp-84h] BYREF
  __int16 v37; // [rsp+36h] [rbp-82h] BYREF
  __int64 v38; // [rsp+38h] [rbp-80h] BYREF
  __int64 v39; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v41[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 8);
  v42 = __readfsqword(0x28u);
  v34 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a9, 402);
    return 1;
  }
  if ( !v9 )
  {
    _dwarf_error(0, a9, 403);
    return 1;
  }
  if ( *(_QWORD *)a1 != 3141330 )
  {
    _dwarf_error(v9, a9, 404);
    return 1;
  }
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 >= *(_QWORD *)(a1 + 32) )
    return (unsigned int)-1;
  v13 = *(_QWORD *)(a1 + 24);
  v14 = v10 + *(_QWORD *)(a1 + 16);
  if ( v13 >= v14 + 8 )
  {
    v33 = *(_QWORD *)(a1 + 56);
    str_offsets_header = _dwarf_read_str_offsets_header(
                           a1,
                           0,
                           (int)&v38,
                           (int)&v34,
                           (int)&v35,
                           (int)&v36,
                           (__int64)&v37,
                           (__int64)&v39,
                           (__int64)&v40,
                           a9);
    if ( str_offsets_header )
      return str_offsets_header;
    v24 = v36;
    if ( v36 == 5 )
    {
      v26 = v40;
      v25 = v40 + v39 + v33;
    }
    else
    {
      v25 = *(_QWORD *)(a1 + 32);
      v26 = v25 - v33;
    }
    v27 = v34;
    v29 = v26;
    v28 = v26 / v34;
    if ( !(v29 % v34) )
    {
      v30 = v38;
      *(_QWORD *)(a1 + 64) = v33;
      v31 = v40 + v33;
      ++*(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) = v25;
      *(_QWORD *)(a1 + 72) = v31;
      *(_QWORD *)(a1 + 88) = v28;
      *(_WORD *)(a1 + 96) = v27;
      *a2 = v30;
      v32 = *(_QWORD *)(a1 + 64);
      *a3 = v32;
      *a4 = v32;
      LOWORD(v32) = v37;
      *a5 = v27;
      *a6 = v24;
      *a7 = v32;
      *a8 = v28;
      return str_offsets_header;
    }
    _dwarf_error_string(
      v9,
      a9,
      405,
      "DW_DLE_STR_OFFSETS_ARRAY_SIZE  array size not a multiple of the size of a single entry");
    return 1;
  }
  str_offsets_header = -1;
  if ( v14 < v13 )
  {
    v16 = (_BYTE *)(v10 + *(_QWORD *)(a1 + 16));
    while ( *v16 )
    {
      if ( (_BYTE *)v13 == ++v16 )
        return (unsigned int)-1;
    }
    v17 = v13 - v14;
    dwarfstring_constructor(v41);
    dwarfstring_append_printf_i(
      v41,
      "DW_DLE_STR_OFFSETS_EXTRA_BYTES: Table Offset plus a minimal header is %lld bytes past end of section and some byte"
      "s in-section are non-zero",
      v17);
    v19 = dwarfstring_string(
            v41,
            "DW_DLE_STR_OFFSETS_EXTRA_BYTES: Table Offset plus a minimal header is %lld bytes past end of section and som"
            "e bytes in-section are non-zero",
            v18);
    _dwarf_error_string(v9, a9, 408, v19);
    dwarfstring_destructor(v41);
    return 1;
  }
  return str_offsets_header;
}

