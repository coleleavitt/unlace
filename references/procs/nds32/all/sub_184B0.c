__int64 __fastcall sub_184B0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_DWORD *)(a1[4] + 32LL) < a3 )
      return 0;
    return sub_18420((__int64)a1, a3);
  }
  if ( *(_DWORD *)(a2 + 32) > a3 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    v5 = std::_Rb_tree_decrement(a2);
    if ( *(_DWORD *)(v5 + 32) < a3 )
    {
      result = a2;
      if ( *(_QWORD *)(v5 + 24) )
        return result;
      return 0;
    }
    return sub_18420((__int64)a1, a3);
  }
  if ( *(_DWORD *)(a2 + 32) >= a3 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  result = std::_Rb_tree_increment(a2);
  if ( *(_DWORD *)(result + 32) <= a3 )
    return sub_18420((__int64)a1, a3);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
