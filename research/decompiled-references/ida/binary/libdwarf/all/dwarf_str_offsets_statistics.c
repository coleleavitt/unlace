__int64 __fastcall dwarf_str_offsets_statistics(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  if ( !a1 )
  {
    _dwarf_error(0, a4, 402);
    return 1;
  }
  if ( !a1[1] )
  {
    _dwarf_error(0, a4, 403);
    return 1;
  }
  if ( *a1 != 3141330 )
  {
    _dwarf_error(a1[1], a4, 404);
    return 1;
  }
  if ( a2 )
    *a2 = a1[5];
  if ( a3 )
    *a3 = a1[6];
  return 0;
}

