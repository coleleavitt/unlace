__int64 __fastcall dwarf_dnames_name(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        _QWORD *a8,
        _WORD *a9,
        unsigned __int64 a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13,
        __int64 a14)
{
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned int v18; // r8d
  __int64 v20; // r13
  __int64 v22; // r9
  _QWORD *v24; // rcx
  __int64 v25; // r8
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  bool v31; // cf
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rbp
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbp
  _QWORD *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rsi
  __int64 i; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+28h] [rbp-90h]
  unsigned int v53; // [rsp+28h] [rbp-90h]
  _QWORD *v54; // [rsp+30h] [rbp-88h]
  __int64 v55; // [rsp+38h] [rbp-80h]
  __int64 v56; // [rsp+48h] [rbp-70h] BYREF
  __int64 v57[13]; // [rsp+50h] [rbp-68h] BYREF

  v16 = a7;
  v17 = a12;
  v57[5] = __readfsqword(0x28u);
  if ( !a1 || *(_QWORD *)a1 != 43981 )
  {
    _dwarf_error_string(
      0,
      a14,
      81,
      "DW_DLE_DBG_NULL: a call to dwarf_dnames_name() Passes in a NULL or uninitialized pointer");
    return 1;
  }
  v20 = *(_QWORD *)(a1 + 8);
  if ( !v20 || *(_QWORD *)v20 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a14,
      81,
      "DW_DLE_DBG_NULL: a call to dwarf_dnames_name() finds a NULL Dwarf_Debug in a Dwarf_Dnames_Head");
    return 1;
  }
  if ( !a2 || *(_QWORD *)(a1 + 128) < a2 )
    return (unsigned int)-1;
  v22 = *(_QWORD *)(a1 + 112);
  v52 = a2 - 1;
  if ( v22 )
  {
    v24 = *(_QWORD **)(a1 + 120);
    if ( v24 )
    {
      v25 = 0;
      while ( *v24 + v24[1] - 1LL < a2 || !*v24 )
      {
        ++v25;
        v24 += 2;
        if ( v22 == v25 )
          goto LABEL_18;
      }
      *a3 = v25;
      v26 = *(_QWORD *)(a1 + 112) == 0;
      v56 = 0;
      if ( !v26 )
      {
        v27 = *(_QWORD *)(a1 + 272);
        v28 = *(_QWORD *)(a1 + 8);
        v57[0] = v27 + 4 * v52;
        if ( (unsigned int)sub_129B0(v28, v57, v27 + 4LL * *(_QWORD *)(a1 + 128) + 4, 375, &v56, 0xFFFFFFFF, a14) )
          return 1;
        v17 = a12;
        v16 = a7;
        *a4 = v56;
      }
    }
  }
LABEL_18:
  v29 = *(unsigned __int16 *)(a1 + 80);
  v57[0] = 0;
  v30 = *(_QWORD *)(a1 + 280) + v29 * v52;
  v31 = __CFADD__(v29, v30);
  v32 = v29 + v30;
  if ( v31 )
    goto LABEL_34;
  if ( *(_QWORD *)(a1 + 296) < v32 )
  {
LABEL_35:
    _dwarf_error_string(v20, a14, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v55 = v17;
  v54 = (_QWORD *)v16;
  (*(void (__fastcall **)(__int64 *))(v20 + 8296))(v57);
  v33 = v57[0];
  if ( a5 )
    *a5 = v57[0];
  v34 = *(_QWORD *)(v20 + 2912);
  v35 = v34 + v33;
  v18 = _dwarf_check_string_valid(v20, v34, v34 + v33, v34 + *(_QWORD *)(v20 + 2920), 361, a14);
  if ( v18 )
    return v18;
  if ( a6 )
    *a6 = v35;
  v36 = *(unsigned __int16 *)(a1 + 80);
  v57[0] = 0;
  v37 = *(_QWORD *)(a1 + 288) + v36 * v52;
  v31 = __CFADD__(v36, v37);
  v38 = v36 + v37;
  if ( v31 )
  {
LABEL_34:
    _dwarf_error_string(v20, a14, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
    return 1;
  }
  if ( *(_QWORD *)(a1 + 296) < v38 )
    goto LABEL_35;
  v53 = v18;
  (*(void (__fastcall **)(__int64 *))(v20 + 8296))(v57);
  v39 = v57[0];
  v40 = *(_QWORD *)(a1 + 144);
  if ( v57[0] >= v40 )
  {
    _dwarf_error_string(
      v20,
      a14,
      484,
      "DW_DLE_DEBUG_NAMES_ERROR: The entrypool offset read is larger thanthe entrypool size");
    return 1;
  }
  if ( v54 )
  {
    *v54 = v57[0];
    v40 = *(_QWORD *)(a1 + 144);
    if ( v39 >= v40 )
    {
      _dwarf_error_string(
        0,
        a14,
        484,
        "DW_DLE_DEBUG_NAMES_ERROR: The entry pool offset from the names table  is out of bounds.");
      return 1;
    }
  }
  v41 = *(_QWORD *)(a1 + 304);
  v42 = *(_QWORD *)(a1 + 8);
  v56 = 0;
  v57[0] = 0;
  v43 = dwarf_decode_leb128(v39 + v41, &v56, v57, v41 + v40);
  v18 = v53;
  if ( v43 == 1 )
  {
    _dwarf_error_string(v42, a14, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
  v44 = *(_QWORD *)(a1 + 320);
  v45 = v57[0];
  v46 = *(_QWORD **)(a1 + 312);
  if ( !v44 )
  {
LABEL_56:
    v50 = *(_QWORD *)(a1 + 8);
    dwarfstring_constructor(v57);
    dwarfstring_append_printf_u(v57, "DW_DLE_DEBUG_NAMES_ERROR: The abbrev code %u", v45);
    dwarfstring_append_printf_u(v57, "(0x%x) ", v45);
    dwarfstring_append();
    v51 = dwarfstring_string(v57, "from the entry pool is absent from the abbrev table.");
    _dwarf_error_string(v50, a14, 484, v51);
    dwarfstring_destructor(v57);
    return 1;
  }
  v47 = 0;
  while ( v57[0] != v46[2] )
  {
    ++v47;
    v46 += 10;
    if ( v47 == v44 )
      goto LABEL_56;
  }
  if ( a8 )
    *a8 = v57[0];
  if ( v45 )
  {
    if ( a9 )
      *a9 = v46[3];
    if ( a13 )
      *a13 = v46[4];
    v48 = v46[4];
    if ( a10 <= v48 )
      v48 = a10;
    if ( v48 )
    {
      for ( i = 0; i != v48; ++i )
      {
        *(_WORD *)(a11 + 2 * i) = *((_WORD *)v46 + i + 20);
        *(_WORD *)(v55 + 2 * i) = *((_WORD *)v46 + i + 30);
      }
    }
  }
  return v18;
}

