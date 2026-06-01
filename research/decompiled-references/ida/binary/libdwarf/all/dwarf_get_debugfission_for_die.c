__int64 __fastcall dwarf_get_debugfission_for_die(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r12

  if ( !a1 )
  {
    _dwarf_error(0, a3, 52);
    return 1;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
  {
    _dwarf_error(0, a3, 104);
    return 1;
  }
  v4 = *(_QWORD **)v3;
  if ( !*(_QWORD *)v3 || *v4 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !(unsigned int)_dwarf_file_has_debug_fission_index(*(_QWORD *)v3, a3) )
    return 0xFFFFFFFFLL;
  if ( (*(_WORD *)(v3 + 652) & 0xFFFB) == 2 )
  {
    if ( !(unsigned int)_dwarf_file_has_debug_fission_tu_index(v4) )
      return 0xFFFFFFFFLL;
  }
  else if ( *(_WORD *)(v3 + 652) == 5 && !(unsigned int)_dwarf_file_has_debug_fission_cu_index(v4) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( *(_QWORD *)(v3 + 104) )
  {
    *a2 = _mm_loadu_si128((const __m128i *)(v3 + 104));
    a2[1] = _mm_loadu_si128((const __m128i *)(v3 + 120));
    a2[2] = _mm_loadu_si128((const __m128i *)(v3 + 136));
    a2[3] = _mm_loadu_si128((const __m128i *)(v3 + 152));
    a2[4] = _mm_loadu_si128((const __m128i *)(v3 + 168));
    a2[5] = _mm_loadu_si128((const __m128i *)(v3 + 184));
    a2[6] = _mm_loadu_si128((const __m128i *)(v3 + 200));
    a2[7] = _mm_loadu_si128((const __m128i *)(v3 + 216));
    a2[8] = _mm_loadu_si128((const __m128i *)(v3 + 232));
    a2[9] = _mm_loadu_si128((const __m128i *)(v3 + 248));
    a2[10] = _mm_loadu_si128((const __m128i *)(v3 + 264));
    a2[11] = _mm_loadu_si128((const __m128i *)(v3 + 280));
    a2[12] = _mm_loadu_si128((const __m128i *)(v3 + 296));
    a2[13] = _mm_loadu_si128((const __m128i *)(v3 + 312));
    a2[14].m128i_i64[0] = *(_QWORD *)(v3 + 328);
    return 0;
  }
  return 0xFFFFFFFFLL;
}

