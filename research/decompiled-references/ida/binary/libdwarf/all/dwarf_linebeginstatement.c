__int64 __fastcall dwarf_linebeginstatement(__int64 a1, int *a2, __int64 a3)
{
  if ( a1 && a2 )
  {
    *a2 = *(_BYTE *)(a1 + 56) & 1;
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 59);
    return 1;
  }
}

