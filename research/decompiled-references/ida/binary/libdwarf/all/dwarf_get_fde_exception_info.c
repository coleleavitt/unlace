__int64 __fastcall dwarf_get_fde_exception_info(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx

  v5 = *(_QWORD **)(a1 + 80);
  if ( v5 && *v5 == 3959286781LL )
  {
    *a2 = *(_QWORD *)(a1 + 88);
    return 0;
  }
  else
  {
    _dwarf_error_string(0, a3, 93, "DW_DLE_FDE_DBG_NULL: Either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
}

