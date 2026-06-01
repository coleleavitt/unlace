__int64 __fastcall dwarf_lineoff_b(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( a1 && a2 )
  {
    *a2 = *(unsigned __int16 *)(a1 + 32);
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 59);
    return 1;
  }
}

