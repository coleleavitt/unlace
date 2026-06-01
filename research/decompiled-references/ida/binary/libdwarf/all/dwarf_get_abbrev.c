__int64 __fastcall dwarf_get_abbrev(
        struct Dwarf_Debug_s *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *alloc; // rax
  __int64 v11; // rdx
  char *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  void *v15; // r11
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // eax
  char *v19; // rax
  char *v20; // rdx
  char v21; // al
  int v22; // eax
  _BYTE *v23; // rax
  __m128i v24; // xmm0
  int v25; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-B8h]
  _QWORD *v28; // [rsp+18h] [rbp-A0h]
  char *v29; // [rsp+28h] [rbp-90h] BYREF
  _BYTE *v30; // [rsp+30h] [rbp-88h] BYREF
  __m128i v31; // [rsp+38h] [rbp-80h] BYREF
  __int64 v32; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v33[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v29 = nullptr;
  v30 = nullptr;
  v31 = 0u;
  v32 = 0;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_abbrev()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( !*((_QWORD *)a1 + 103) )
  {
    result = _dwarf_load_debug_info(a1, a6);
    if ( (_DWORD)result )
      return result;
  }
  if ( a2 >= *((_QWORD *)a1 + 104) )
    return 0xFFFFFFFFLL;
  alloc = (_QWORD *)_dwarf_get_alloc(a1, 18, 1);
  if ( !alloc )
  {
    _dwarf_error(a1, a6, 62);
    return 1;
  }
  alloc[4] = a1;
  if ( !a3 || !a5 )
  {
    dwarf_dealloc(a1, alloc, 0x12u);
    _dwarf_error(a1, a6, 110);
    return 1;
  }
  *a5 = 0;
  if ( a4 )
    *a4 = 1;
  v11 = *((_QWORD *)a1 + 103);
  v28 = alloc;
  v12 = (char *)(v11 + a2);
  v13 = *((_QWORD *)a1 + 104) + v11;
  v29 = v12;
  v27 = v13;
  v14 = _dwarf_leb128_uword_wrapper(a1, &v29, v13, &v31.m128i_u64[1], a6);
  v15 = v28;
  if ( v14 == 1 )
    goto LABEL_28;
  v16 = v31.m128i_i64[1];
  v28[1] = v31.m128i_i64[1];
  if ( !v16 )
  {
    *a3 = v28;
    *a5 = 0;
    if ( a4 )
      *a4 = 1;
    return 0;
  }
  v18 = _dwarf_leb128_uword_wrapper(a1, &v29, v27, &v31.m128i_u64[1], a6);
  v15 = v28;
  if ( v18 == 1 )
    goto LABEL_28;
  if ( v31.m128i_i64[1] > 0xFFFFuLL )
  {
    dwarf_dealloc(a1, v28, 0x12u);
    return _dwarf_format_TAG_err_msg(a1, v31.m128i_i64[1], "DW_DLE_TAG_CORRUPT", a6);
  }
  *v28 = v31.m128i_i64[1];
  v19 = v29;
  if ( (unsigned __int64)v29 >= v27 )
  {
    dwarf_dealloc(a1, v28, 0x12u);
    dwarfstring_constructor(v33);
    dwarfstring_append_printf_u(
      v33,
      "DW_DLE_ABBREV_DECODE_ERROR: Ran off the end of the abbrev section reading tag, starting at abbrev section offset 0x%x",
      a2);
    v26 = dwarfstring_string(
            v33,
            "DW_DLE_ABBREV_DECODE_ERROR: Ran off the end of the abbrev section reading tag, starting at abbrev section offset 0x%x",
            v25);
    _dwarf_error_string(a1, a6, 109, v26);
    dwarfstring_destructor(v33);
    return 1;
  }
  v20 = v29 + 1;
  v29 = v20;
  v21 = *v19;
  v28[3] = v20;
  *((_BYTE *)v28 + 16) = v21;
  v28[8] = v20;
  v28[9] = 0;
  v22 = _dwarf_count_abbrev_entries((int)a1, a2, (int)v20, v27, (int)&v31, (int)&v32, (__int64)&v30, a6);
  v15 = v28;
  if ( v22 == 1 )
  {
LABEL_28:
    dwarf_dealloc(a1, v15, 0x12u);
    return 1;
  }
  v23 = v30;
  v24 = _mm_loadl_epi64(&v31);
  v29 = v30;
  v28[7] = v32;
  *(__m128i *)(v28 + 5) = _mm_unpacklo_epi64((__m128i)a2, v24);
  if ( v27 < (unsigned __int64)v23 )
  {
    dwarf_dealloc(a1, v28, 0x12u);
    _dwarf_error_string(
      a1,
      a6,
      109,
      "DW_DLE_ABBREV_DECODE_ERROR: Ran off the end of the abbrev section reading abbrev_entries.");
    _dwarf_error(a1, a6, 109);
    return 1;
  }
  if ( a4 )
    *a4 = &v23[-*((_QWORD *)a1 + 103) - a2];
  *a3 = v28;
  *a5 = v24.m128i_i64[0];
  return 0;
}

