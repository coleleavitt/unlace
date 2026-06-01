__int64 __fastcall dwarf_get_addr_from_tied(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  int v5; // eax
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v5 = *(_DWORD *)(a2 + 336);
  v16 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  if ( !v5 )
  {
    _dwarf_error(a1, a5, 300);
    return 1;
  }
  if ( !a1 || (v6 = *(_QWORD **)(a1 + 32), v6 == (_QWORD *)a1) || !v6 || (v7 = (_QWORD *)v6[4], v6 != v7) || !v7 )
  {
    _dwarf_error(a1, a5, 301);
    return 1;
  }
  result = _dwarf_search_for_signature(*(Dwarf_Debug *)(a1 + 32));
  if ( (_DWORD)result == 1 )
    return 1;
  if ( (_DWORD)result != -1 )
  {
    v11 = v6[800];
    v12 = v6[30];
    if ( v11 <= v12 )
      v12 = v6[800];
    if ( v12 < a3 || v11 < a3 * *(unsigned __int8 *)(v15 + 32) )
    {
      _dwarf_error_string(
        a1,
        a5,
        119,
        "DW_DLE_ATTR_FORM_OFFSET_BAD Looking for an index from an addr FORM we find an impossibly large index value for t"
        "he tied object. Corrupt DWARF");
    }
    else
    {
      result = sub_500E0((__int64)v6, v15, a3, &v14, a5);
      if ( (_DWORD)result != 1 )
      {
        *a4 = v14;
        return result;
      }
    }
    return 1;
  }
  return result;
}

