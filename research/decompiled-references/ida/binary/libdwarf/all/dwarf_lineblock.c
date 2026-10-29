__int64 __fastcall dwarf_lineblock(__int64 a1, _DWORD *a2, __int64 a3)
{
  if ( a1 )
  {
    *a2 = (*(_BYTE *)(a1 + 56) & 2) != 0;
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 59);
    return 1;
  }
}

