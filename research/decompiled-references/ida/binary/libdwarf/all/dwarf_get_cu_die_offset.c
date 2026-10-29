__int64 __fastcall dwarf_get_cu_die_offset(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+10h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v3 = a3;
  v8[0] = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v4 + 360) || (result = _dwarf_load_debug_info(*(_QWORD *)(a1 + 32), a3), v3 = a3, !(_DWORD)result) )
    {
      result = _dwarf_length_of_cu_header(v4, v5, 1, v8, v3);
      if ( !(_DWORD)result )
        *a2 = v8[0] + v5;
    }
  }
  else
  {
    _dwarf_error(0, a3, 139);
    return 1;
  }
  return result;
}

