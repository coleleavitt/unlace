__int64 __fastcall sub_1A3E670(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r13d
  __int64 result; // rax
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_DWORD *)(a1[4] + 32LL) < *a3 )
      return 0;
    return sub_1A3E5E0((__int64)a1, a3);
  }
  v4 = *a3;
  if ( *a3 < *(_DWORD *)(a2 + 32) )
  {
    result = a1[3];
    if ( result == a2 )
      return result;
    v6 = std::_Rb_tree_decrement(a2);
    if ( v4 > *(_DWORD *)(v6 + 32) )
    {
      v7 = *(_QWORD *)(v6 + 24) == 0;
      result = 0;
      if ( !v7 )
        return a2;
      return result;
    }
    return sub_1A3E5E0((__int64)a1, a3);
  }
  if ( v4 <= *(_DWORD *)(a2 + 32) )
    return a2;
  result = 0;
  v8 = a1[4];
  if ( v8 != a2 )
  {
    v9 = std::_Rb_tree_increment(a2, (const char *)a2, v8);
    if ( v4 >= *(_DWORD *)(v9 + 32) )
      return sub_1A3E5E0((__int64)a1, a3);
    result = 0;
    if ( *(_QWORD *)(a2 + 24) )
      return v9;
  }
  return result;
}
