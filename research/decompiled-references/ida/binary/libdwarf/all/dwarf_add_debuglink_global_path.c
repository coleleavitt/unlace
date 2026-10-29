__int64 __fastcall dwarf_add_debuglink_global_path(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // r15
  void *v7; // rax
  void *v8; // r13
  char *v9; // r12

  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a3,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_add_debuglink_global_path()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v5 = *(unsigned int *)(a1 + 96);
  v6 = (unsigned int)(v5 + 1);
  v7 = malloc(8 * v6);
  v8 = v7;
  if ( !v7 )
  {
    _dwarf_error(a1, a3, 62);
    return 1;
  }
  if ( (_DWORD)v5 )
    memcpy(v7, *(const void **)(a1 + 88), 8LL * (unsigned int)v5);
  v9 = strdup(a2);
  if ( !v9 )
  {
    free(v8);
    _dwarf_error(a1, a3, 62);
    return 1;
  }
  free(*(void **)(a1 + 88));
  *((_QWORD *)v8 + v5) = v9;
  *(_QWORD *)(a1 + 88) = v8;
  *(_DWORD *)(a1 + 96) = v6;
  return 0;
}

