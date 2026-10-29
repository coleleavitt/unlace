__int64 __fastcall dwarf_global_die_offset(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( a1 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      *a2 = *a1 + *(_QWORD *)(v4 + 48);
      return 0;
    }
    _dwarf_error(0, a3, 126);
  }
  else
  {
    _dwarf_error(0, a3, 125);
  }
  return 1;
}

