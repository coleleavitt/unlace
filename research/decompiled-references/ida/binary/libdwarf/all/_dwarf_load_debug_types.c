__int64 __fastcall dwarf_load_debug_types(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 592) )
    return 0;
  result = _dwarf_load_section(a1, a1 + 824, a2);
  if ( !(_DWORD)result )
    return _dwarf_load_section(a1, a1 + 592, a2);
  return result;
}

