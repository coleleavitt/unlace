__int64 __fastcall dwarf_get_arange_info_b(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v10; // r8
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 result; // rax
  _QWORD v15[5]; // [rsp+10h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  v10 = a7;
  if ( !a1 )
  {
    _dwarf_error(0, a7, 139);
    return 1;
  }
  if ( a2 )
    *a2 = *(_QWORD *)a1;
  if ( a3 )
    *a3 = *(unsigned __int16 *)(a1 + 40);
  if ( a4 )
    *a4 = *(_QWORD *)(a1 + 8);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 16);
  if ( !a6 )
    return 0;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 24);
  v15[0] = 0;
  if ( *(_QWORD *)(v12 + 360) || (result = _dwarf_load_debug_info(v12, a7), v10 = a7, !(_DWORD)result) )
  {
    result = _dwarf_length_of_cu_header(v12, v13, 1, v15, v10);
    if ( !(_DWORD)result )
    {
      *a6 = v13 + v15[0];
      return 0;
    }
  }
  return result;
}

