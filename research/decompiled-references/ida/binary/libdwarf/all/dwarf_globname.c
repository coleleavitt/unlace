__int64 __fastcall dwarf_globname(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( a1 )
  {
    *a2 = *(_QWORD *)(a1 + 8);
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 125);
    return 1;
  }
}

