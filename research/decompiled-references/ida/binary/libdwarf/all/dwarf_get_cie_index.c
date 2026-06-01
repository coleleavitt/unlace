__int64 __fastcall dwarf_get_cie_index(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( a1 )
  {
    *a2 = *(_QWORD *)(a1 + 136);
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 94);
    return 1;
  }
}

