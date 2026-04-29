__int64 __fastcall sub_7A580(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  int v3; // eax

  if ( *a2 >= a2[1] || (v2 = a1, a1 = a2, *(_DWORD *)v2 = unpack_dd(a2), *a2 >= a2[1]) )
    sub_75A90(a1);
  *((_DWORD *)v2 + 1) = unpack_dd(a2);
  v3 = *(_DWORD *)v2 & 0xF;
  if ( v3 == 2 )
    return sub_79A00(v2 + 1, a2);
  if ( (*(_DWORD *)v2 & 0xFu) > 2 && v3 != 8 )
  {
    *(_DWORD *)v2 = 0;
    if ( !under_debugger )
      sub_37CFE0(52147);
    BUG();
  }
  return 1;
}
