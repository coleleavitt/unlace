__int64 __fastcall dwarf_open_str_offsets_table_access(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int section; // ebp
  unsigned __int64 v5; // r13
  __int64 v6; // r15
  __int64 alloc; // rax
  __m128i si128; // xmm2
  __m128i v10[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_open_str_offsets_table_access()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !a2 )
  {
    _dwarf_error(a1, a3, 402);
    return 1;
  }
  section = _dwarf_load_section(a1, a1 + 770, a3);
  if ( !section )
  {
    v5 = a1[770];
    v10[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v5);
    if ( !v5 )
      return (unsigned int)-1;
    v6 = a1[771];
    alloc = _dwarf_get_alloc(a1, 64, 1);
    if ( alloc )
    {
      si128 = _mm_load_si128(v10);
      *(_QWORD *)(alloc + 32) = v6;
      *(_QWORD *)alloc = 3141330;
      *(_QWORD *)(alloc + 24) = v6 + v5;
      *(_QWORD *)(alloc + 56) = 0;
      *(_QWORD *)(alloc + 40) = 0;
      *(__m128i *)(alloc + 8) = si128;
      *a2 = alloc;
      return section;
    }
    _dwarf_error(a1, a3, 62);
    return 1;
  }
  return section;
}

