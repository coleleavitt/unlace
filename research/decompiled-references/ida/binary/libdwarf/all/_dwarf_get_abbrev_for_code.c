__int64 __fastcall dwarf_get_abbrev_for_code(__int64 *a1, unsigned __int64 a2, __m128 **a3, _QWORD *a4, __int64 a5)
{
  unsigned __int64 v5; // r9
  __m128i *v8; // rbp
  bool v9; // zf
  size_t v10; // r12
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // r11
  __m128 *j; // rax
  unsigned int v15; // edx
  _BYTE *v17; // rbp
  unsigned __int64 v18; // r13
  _BYTE *v19; // r14
  _BYTE *v20; // r14
  unsigned __int64 v21; // r12
  _BYTE *v22; // rbp
  __int16 v23; // r14
  __m128 *v24; // rbp
  unsigned __int64 v25; // rax
  __int16 v26; // dx
  __m128 **v27; // rax
  unsigned int v28; // eax
  __int64 *v29; // rax
  char *v30; // rax
  char *v31; // rdi
  _QWORD **v32; // rdx
  _QWORD **v33; // r8
  _QWORD *i; // rax
  __int64 v35; // rcx
  _QWORD *v36; // r10
  unsigned __int64 v37; // rcx
  char *v38; // rcx
  void *v39; // rax
  __int64 v40; // r12
  __int64 v41; // rbp
  __int64 v42; // r13
  __int64 v43; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+8h] [rbp-C0h]
  _BYTE *v45; // [rsp+10h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+18h] [rbp-B0h]
  __int64 v47; // [rsp+20h] [rbp-A8h]
  __int64 v48; // [rsp+28h] [rbp-A0h]
  __int64 v50; // [rsp+40h] [rbp-88h]
  unsigned __int64 v51; // [rsp+48h] [rbp-80h]
  _QWORD *v53; // [rsp+58h] [rbp-70h]
  __int64 v54; // [rsp+60h] [rbp-68h] BYREF
  __int64 v55; // [rsp+68h] [rbp-60h] BYREF
  _BYTE *v56; // [rsp+70h] [rbp-58h] BYREF
  __int64 v57; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v58[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = a2;
  v8 = (__m128i *)a1[78];
  v9 = v8[1].m128i_i64[1] == 0;
  v58[1] = __readfsqword(0x28u);
  v47 = *a1;
  v48 = *(_QWORD *)(*a1 + 824);
  if ( v9 )
  {
    *v8 = _mm_load_si128((const __m128i *)&xmmword_94850);
    v39 = calloc(0x80u, 8u);
    v5 = a2;
    v8[1].m128i_i64[1] = (__int64)v39;
    if ( v39 )
    {
LABEL_3:
      v11 = (__int64 *)v8;
      if ( a1[79] >= v5 )
        goto LABEL_5;
      goto LABEL_4;
    }
LABEL_45:
    *a4 = a1[79];
    return (unsigned int)-1;
  }
  v10 = 2 * v8->m128i_i64[0];
  if ( v10 >= v8->m128i_i64[1] )
    goto LABEL_3;
  v29 = (__int64 *)calloc(1u, 0x20u);
  v11 = v29;
  if ( !v29 )
  {
    _dwarf_error_string(v47, a5, 62, "DW_DLE_ALLOC_FAIL: allocating a struct Dwarf_Hash_Table_s");
    return 1;
  }
  *v29 = v10;
  v29[1] = 0;
  v30 = (char *)calloc(v10, 8u);
  v11[3] = (__int64)v30;
  v31 = v30;
  if ( !v30 )
  {
    free(v11);
    goto LABEL_45;
  }
  v32 = (_QWORD **)v8[1].m128i_i64[1];
  v33 = &v32[v8->m128i_i64[0]];
  if ( v8->m128i_i64[0] )
  {
    do
    {
      for ( i = *v32; i; ++v11[1] )
      {
        v35 = *i;
        v36 = i;
        i = (_QWORD *)i[4];
        v37 = (v10 - 1) & v35;
        if ( v11[2] < v37 )
          v11[2] = v37;
        v38 = &v31[8 * v37];
        v36[4] = *(_QWORD *)v38;
        *(_QWORD *)v38 = v36;
      }
      ++v32;
    }
    while ( v32 != v33 );
  }
  _dwarf_free_abbrev_hash_table_contents(v8, 1);
  free((void *)a1[78]);
  a1[78] = (__int64)v11;
  v5 = a2;
  if ( a1[79] < a2 )
LABEL_4:
    a1[79] = v5;
LABEL_5:
  v12 = v5 & (*v11 - 1);
  if ( v11[2] < v12 )
    v11[2] = v12;
  v13 = v11[3];
  for ( j = *(__m128 **)(v13 + 8 * v12); j; j = (__m128 *)j[2].m128_u64[0] )
  {
    if ( j->m128_u64[0] == v5 )
    {
      *a4 = a1[79];
      ++j[1].m128_u64[0];
      *a3 = j;
      return 0;
    }
  }
  v17 = (_BYTE *)a1[76];
  if ( v17 )
  {
    v18 = a1[77];
  }
  else
  {
    v40 = a1[3];
    v41 = *(_QWORD *)(v47 + 824);
    v42 = *(_QWORD *)(v47 + 832);
    if ( a1[13] )
    {
      v44 = v5;
      v43 = v11[3];
      v58[0] = 0;
      _dwarf_get_dwp_extra_offset(a1 + 13, 3, v58);
      v5 = v44;
      v13 = v43;
    }
    v18 = v41 + v42;
    v17 = (_BYTE *)(v40 + v41);
  }
  if ( (unsigned __int64)v17 >= v18 )
    return (unsigned int)-1;
  if ( !*v17 )
    goto LABEL_45;
  v53 = a4;
  v19 = v17;
  v50 = v13;
  v51 = v5;
  do
  {
    v54 = 0;
    v55 = 0;
    v56 = nullptr;
    v45 = &v19[-v48];
    v57 = 0;
    v58[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(v19, &v57, v58, v18) == 1
      || (v20 = &v19[v57],
          v57 = 0,
          v21 = v58[0],
          v22 = v20,
          v58[0] = 0,
          (unsigned int)dwarf_decode_leb128(v20, &v57, v58, v18) == 1) )
    {
      _dwarf_error_string(v47, a5, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    }
    v23 = v58[0];
    if ( v58[0] > 0xFFFFu )
      return (unsigned int)_dwarf_format_TAG_err_msg(v47, v58[0], "DW_DLE_TAG_CORRUPT", a5);
    if ( (unsigned __int64)&v22[v57] >= v18 )
    {
      _dwarf_error(v47, a5, 360);
      return 1;
    }
    v46 = &v22[v57];
    v24 = (__m128 *)calloc(1u, 0x60u);
    if ( !v24 )
    {
      _dwarf_error_string(v47, a5, 62, "DW_DLE_ALLOC_FAIL: Allocating an abbrev list entry");
      return 1;
    }
    if ( a1[79] < v21 )
      a1[79] = v21;
    v25 = v21 & (*v11 - 1);
    if ( v11[2] < v25 )
      v11[2] = v25;
    ++v11[1];
    v24->m128_u64[0] = v21;
    v24->m128_i16[4] = v23;
    v26 = *v46;
    v24[1].m128_u64[1] = (unsigned __int64)v45;
    v24[2].m128_u64[1] = (unsigned __int64)(v46 + 1);
    v27 = (__m128 **)(v50 + 8 * v25);
    v24->m128_i16[5] = v26;
    v24[2].m128_u64[0] = (unsigned __int64)*v27;
    *v27 = v24;
    v28 = _dwarf_count_abbrev_entries(v47, a1[3], (int)v46 + 1, v18, (int)&v54, (int)&v55, (__int64)&v56, a5);
    if ( v28 )
    {
      v15 = v28;
      *v53 = a1[79];
      return v15;
    }
    v19 = v56;
    v24[3] = _mm_loadh_ps((const double *)&v55);
  }
  while ( (unsigned __int64)v19 < v18 && *v19 && v51 != v21 );
  *v53 = a1[79];
  a1[76] = (__int64)v19;
  a1[77] = v18;
  if ( v51 != v21 )
    return (unsigned int)-1;
  ++v24[1].m128_u64[0];
  *a3 = v24;
  return 0;
}

