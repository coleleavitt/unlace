__int64 __fastcall dwarf_sec_group_map(__int64 a1, size_t a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v8; // rax
  size_t v12; // rsi
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx

  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_sec_group_map()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  if ( ptr )
    goto LABEL_12;
  v8 = *(unsigned int *)(a1 + 216);
  qword_B8D50 = 0;
  if ( a2 < v8 )
  {
    _dwarf_error(a1, a6, 389);
    return 1;
  }
  ptr = calloc(a2, 0x18u);
  if ( !ptr )
  {
    _dwarf_error(a1, a6, 387);
    return 1;
  }
  _dwarf_twalk(*(_QWORD *)(a1 + 224), sub_2F520);
  v12 = *(unsigned int *)(a1 + 216);
  if ( v12 != qword_B8D50 )
  {
LABEL_12:
    _dwarf_error(a1, a6, 390);
    return 1;
  }
  qsort(ptr, v12, 0x18u, (__compar_fn_t)sub_2F5C0);
  v13 = ptr;
  v14 = qword_B8D50;
  v15 = 0;
  v16 = (__int64 *)ptr;
  if ( qword_B8D50 )
  {
    do
    {
      v17 = *v16;
      v16 += 3;
      *(_QWORD *)(a4 + 8 * v15) = v17;
      *(_QWORD *)(a3 + 8 * v15) = *(v16 - 2);
      *(_QWORD *)(a5 + 8 * v15++) = *(v16 - 1);
    }
    while ( v15 != v14 );
  }
  free(v13);
  qword_B8D50 = 0;
  ptr = nullptr;
  return 0;
}

