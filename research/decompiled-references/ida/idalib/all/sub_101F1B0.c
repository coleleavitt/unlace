__int64 __fastcall sub_101F1B0(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // r13d
  __int64 result; // rax
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rdx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *a3 > *(_DWORD *)(a1[4] + 32LL) )
      return 0;
    return sub_101F120((__int64)a1, a3);
  }
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 32) > *a3 )
  {
    result = a1[3];
    if ( result == a2 )
      return result;
    v6 = std::_Rb_tree_decrement(a2);
    if ( *(_DWORD *)(v6 + 32) < v4 )
    {
      v7 = *(_QWORD *)(v6 + 24) == 0;
      result = 0;
      if ( !v7 )
        return a2;
      return result;
    }
    return sub_101F120((__int64)a1, a3);
  }
  if ( *(_DWORD *)(a2 + 32) >= v4 )
    return a2;
  result = 0;
  v8 = a1[4];
  if ( v8 != a2 )
  {
    v9 = std::_Rb_tree_increment(a2, (const char *)a2, v8);
    if ( v4 >= *(_DWORD *)(v9 + 32) )
      return sub_101F120((__int64)a1, a3);
    result = 0;
    if ( *(_QWORD *)(a2 + 24) )
      return v9;
  }
  return result;
}
