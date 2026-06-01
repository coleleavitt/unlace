__int64 __fastcall dwarf_line_subprog(__int64 a1, _QWORD *a2, __int64 *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v6; // rdx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 result; // rax

  if ( !a1 )
  {
    _dwarf_error(0, a5, 59);
    return 1;
  }
  v6 = *(_QWORD **)(a1 + 64);
  if ( !v6 )
  {
    _dwarf_error(0, a5, 102);
    return 1;
  }
  v8 = *(_QWORD *)(a1 + 48);
  if ( !v8 )
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0;
    return 0;
  }
  if ( v6[33] < v8 )
  {
    _dwarf_error(v6[36], a5, 140);
    return 1;
  }
  v9 = (_QWORD *)(v6[32] + 24 * v8 - 24);
  *a2 = *v9;
  *a4 = v9[2];
  result = sub_33100(*(_QWORD *)(a1 + 64), v9[1], a3, (__int64)"dwarf_line_subprog", a5);
  if ( (_DWORD)result )
    *a3 = 0;
  return result;
}

