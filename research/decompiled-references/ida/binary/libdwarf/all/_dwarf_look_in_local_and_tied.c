__int64 __fastcall dwarf_look_in_local_and_tied(unsigned __int16 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r13
  __int64 result; // rax
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *a2;
  v9[1] = __readfsqword(0x28u);
  v9[0] = 0;
  result = _dwarf_get_addr_index_itself(a1, a3, v6, a2, v9, a5);
  if ( !(_DWORD)result )
    return _dwarf_look_in_local_and_tied_by_index(v6, a2, v9[0], a4, a5);
  return result;
}

