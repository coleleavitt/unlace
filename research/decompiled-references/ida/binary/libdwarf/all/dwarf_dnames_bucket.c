__int64 __fastcall dwarf_dnames_bucket(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  size_t v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  size_t v17; // rcx
  size_t v18; // r14
  size_t v19; // rdx
  size_t v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // [rsp+0h] [rbp-58h]
  size_t v27; // [rsp+8h] [rbp-50h]
  _QWORD v28[9]; // [rsp+10h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  if ( !a1 || *a1 != 43981 )
  {
    _dwarf_error_string(0, a5, 81, "DW_DLE_DBG_NULL: bad Head argument to dwarf_dnames_bucket");
    return 1;
  }
  if ( a2 >= a1[14] )
    return 0xFFFFFFFFLL;
  v11 = a1[15];
  if ( v11 )
    goto LABEL_7;
  v27 = a1[14];
  v26 = a1[1];
  v16 = calloc(v27, 0x10u);
  v17 = v27;
  a1[15] = v16;
  if ( !v16 )
  {
    _dwarf_error_string(v26, a5, 62, "DW_DLE_ALLOC_FAIL: .debug_names bucket array could not be allocated");
    return 1;
  }
  v18 = 0;
  do
  {
    v28[0] = 0;
    v21 = a1[33];
    v22 = v21 + 4 * v18;
    if ( v21 + 4 * v17 < v22 + 4 )
    {
      _dwarf_error_string(v26, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      return 1;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v26 + 8296))(v28, v22, 4);
    v19 = v18++;
    *(_QWORD *)(a1[15] + 16 * v19) = v28[0];
    v17 = a1[14];
    v20 = v17;
  }
  while ( v18 < v17 );
  v11 = a1[15];
  if ( v17 )
  {
    v14 = 0;
    while ( 1 )
    {
      v23 = v14++;
      v24 = (__int64 *)(v11 + 16 * v23);
      v25 = *v24;
      if ( *v24 )
        break;
LABEL_23:
      if ( v14 >= v20 )
        goto LABEL_14;
    }
    while ( v14 < v20 )
    {
      v13 = *(_QWORD *)(v11 + 16 * v14);
      if ( v13 )
      {
        v24[1] = v13 - v25;
        v20 = a1[14];
        if ( v14 < v20 )
        {
          v11 = a1[15];
          goto LABEL_23;
        }
        break;
      }
      ++v14;
    }
    v15 = a1[16] - v25;
    v24[1] = v15;
    if ( !v15 )
      v24[1] = 1;
    v11 = a1[15];
  }
LABEL_14:
  if ( !v11 )
    return 0xFFFFFFFFLL;
LABEL_7:
  v12 = (_QWORD *)(16 * a2 + v11);
  *a3 = *v12;
  *a4 = v12[1];
  return 0;
}

