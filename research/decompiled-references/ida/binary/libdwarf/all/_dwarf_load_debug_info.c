__int64 __fastcall dwarf_load_debug_info(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( !*(_QWORD *)(a1 + 360) )
  {
    result = _dwarf_load_section(a1, a1 + 824, a2);
    if ( !(_DWORD)result )
    {
      result = _dwarf_load_section(a1, a1 + 360, a2);
      if ( !(_DWORD)result )
      {
        result = dwarf_load_rnglists(a1, 0, a2);
        if ( (_DWORD)result != 1 )
          return (unsigned int)dwarf_load_loclists(a1, 0, a2) == 1;
      }
    }
  }
  return result;
}

