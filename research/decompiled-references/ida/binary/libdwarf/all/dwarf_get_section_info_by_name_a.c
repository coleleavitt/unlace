int __fastcall dwarf_get_section_info_by_name_a(
        _QWORD *a1,
        const char *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  bool v7; // zf
  _QWORD *v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rbp
  int result; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  int v20; // eax
  _QWORD *v21; // rcx
  _QWORD *v22; // r8
  _QWORD *v23; // r9
  __m128i v24; // [rsp+0h] [rbp-128h] BYREF
  __m128i v25; // [rsp+10h] [rbp-118h] BYREF
  __m128i v26; // [rsp+20h] [rbp-108h] BYREF
  __m128i v27; // [rsp+30h] [rbp-F8h] BYREF
  char **v28; // [rsp+40h] [rbp-E8h]
  _QWORD *v29; // [rsp+48h] [rbp-E0h]
  _QWORD *v30; // [rsp+50h] [rbp-D8h]
  _QWORD *v31; // [rsp+58h] [rbp-D0h]
  _QWORD *v32; // [rsp+60h] [rbp-C8h]
  _QWORD *v33; // [rsp+68h] [rbp-C0h]
  _QWORD *v34; // [rsp+70h] [rbp-B8h]
  _QWORD *v35; // [rsp+78h] [rbp-B0h]
  int v36; // [rsp+8Ch] [rbp-9Ch] BYREF
  char *s2[2]; // [rsp+90h] [rbp-98h] BYREF
  __m128i v38; // [rsp+A0h] [rbp-88h]
  __m128i v39; // [rsp+B0h] [rbp-78h]
  __m128i v40; // [rsp+C0h] [rbp-68h]
  __m128i v41; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+E8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a1 || *a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a7,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_section_info_by_name_a()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0;
  if ( !a2 )
  {
    _dwarf_error_string(
      a1,
      a7,
      81,
      "DW_DLE_DBG_NULL: null section_name pointer passed to dwarf_get_section_info_by_name_a");
    return 1;
  }
  v7 = *a2 == 0;
  v33 = a7;
  v32 = a6;
  v31 = a5;
  v30 = a4;
  v29 = a3;
  if ( v7 )
    return -1;
  v8 = (_QWORD *)a1[1];
  if ( !v8 )
    return -1;
  v11 = (*(__int64 (__fastcall **)(_QWORD))(v8[1] + 40LL))(*v8);
  if ( !v11 )
    return -1;
  v12 = 0;
  v34 = a1;
  v28 = s2;
  v35 = v29;
  v13 = v11;
  v24 = _mm_loadu_si128((const __m128i *)&zerodoas[2]);
  v29 = v33;
  v25 = _mm_loadu_si128((const __m128i *)&zerodoas[4]);
  v26 = _mm_loadu_si128((const __m128i *)&zerodoas[6]);
  v27 = _mm_loadu_si128((const __m128i *)&zerodoas[8]);
  while ( 1 )
  {
    v15 = _mm_loadu_si128((const __m128i *)zerodoas);
    v16 = _mm_load_si128(&v24);
    v36 = 0;
    v17 = _mm_load_si128(&v25);
    v18 = _mm_load_si128(&v26);
    v19 = _mm_load_si128(&v27);
    *(__m128i *)s2 = v15;
    v38 = v16;
    v39 = v17;
    v40 = v18;
    v41 = v19;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, char **, int *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v8[1])(
            *v8,
            v12,
            v28,
            &v36,
            v9,
            v10,
            v24.m128i_i64[0],
            v24.m128i_i64[1],
            v25.m128i_i64[0],
            v25.m128i_i64[1],
            v26.m128i_i64[0],
            v26.m128i_i64[1],
            v27.m128i_i64[0],
            v27.m128i_i64[1]);
    if ( v20 == 1 )
    {
      v24.m128i_i32[0] = 1;
      _dwarf_error(v34, v29, v36);
      return v24.m128i_i32[0];
    }
    if ( v20 != -1 )
    {
      result = strcmp(a2, s2[0]);
      if ( !result )
        break;
    }
    if ( v13 == ++v12 )
      return -1;
  }
  v21 = v30;
  v22 = v31;
  v23 = v32;
  if ( v35 )
    *v35 = v38.m128i_i64[1];
  if ( v21 )
    *v21 = v39.m128i_i64[1];
  if ( v22 )
    *v22 = v38.m128i_i64[0];
  if ( v23 )
    *v23 = v39.m128i_i64[0];
  return result;
}

