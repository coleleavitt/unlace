__int64 __fastcall dwarf_get_arange_cu_header_offset(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v4 + 360) || (result = _dwarf_load_debug_info(v4, a3), !(_DWORD)result) )
    {
      *a2 = *(_QWORD *)(a1 + 24);
      return 0;
    }
  }
  else
  {
    _dwarf_error(0, a3, 139);
    return 1;
  }
  return result;
}

