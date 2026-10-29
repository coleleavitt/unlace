__int64 __fastcall dwarf_lineaddr(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  if ( a1 && a2 )
  {
    *a2 = *a1;
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 59);
    return 1;
  }
}

