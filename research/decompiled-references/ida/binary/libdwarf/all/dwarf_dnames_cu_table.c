__int64 __fastcall dwarf_dnames_cu_table(
        const __m128i *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v10; // edx
  __int64 v12; // r11
  __m128i v13; // xmm0
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  _QWORD v21[3]; // [rsp+10h] [rbp-18h] BYREF

  v21[1] = __readfsqword(0x28u);
  if ( a1 && a1->m128i_i64[0] == 43981 )
  {
    v12 = a1->m128i_i64[1];
    if ( *a2 == 99 )
    {
      v10 = -1;
      if ( a3 >= a1[5].m128i_i64[1] )
        return v10;
      v16 = a1[15].m128i_i64[0];
      v17 = a1[5].m128i_u16[0];
    }
    else
    {
      if ( *a2 != 116 )
      {
        _dwarf_error_string(
          a1->m128i_i64[1],
          a6,
          484,
          "DW_DLE_DEBUG_NAMES_ERROR: type string is not start with cu or tuso invalid call to dwarf_dnames_cu_table()");
        return 1;
      }
      v13 = _mm_loadu_si128(a1 + 6);
      v10 = -1;
      v14 = v13.m128i_i64[0];
      v15 = _mm_add_epi64(v13, _mm_srli_si128(v13, 8)).m128i_u64[0];
      if ( a3 >= v14 )
      {
        if ( a3 >= v15 )
          return v10;
        if ( a5 )
        {
          v10 = 0;
          *a5 = *(_QWORD *)(a1[16].m128i_i64[0] + 8 * (a3 - v14));
          return v10;
        }
        return 0;
      }
      if ( a3 >= v15 )
        return v10;
      v16 = a1[15].m128i_i64[1];
      v17 = a1[5].m128i_u16[0];
    }
    v18 = a1[4].m128i_u64[0];
    v21[0] = 0;
    v19 = v17 * a3 + v16;
    if ( __CFADD__(v17, v19) )
    {
      _dwarf_error_string(v12, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      return 1;
    }
    if ( v18 < v17 + v19 )
    {
      _dwarf_error_string(v12, a6, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(v12 + 8296))(v21, v19, v17);
    if ( a4 )
      *a4 = v21[0];
    return 0;
  }
  _dwarf_error_string(
    0,
    a6,
    484,
    "DW_DLE_DEBUG_NAMES_ERROR:  Dwarf_Dnames_Head is NULL or invalid pointercalling dwarf_dnames_cu_table()");
  return 1;
}

