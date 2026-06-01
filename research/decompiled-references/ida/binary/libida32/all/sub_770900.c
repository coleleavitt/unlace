__int64 __fastcall sub_770900(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // rcx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_DWORD *)(a1[4] + 32LL) < a3 )
      return 0;
    return sub_770840((__int64)a1, a3);
  }
  v4 = *(_DWORD *)(a2 + 32);
  if ( a3 < v4 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    v6 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v6 + 32) < a3 )
    {
      result = a2;
      if ( *(_QWORD *)(v6 + 24) )
        return result;
      return 0;
    }
    return sub_770840((__int64)a1, a3);
  }
  if ( v4 >= a3 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  result = std::_Rb_tree_increment();
  if ( a3 >= *(_DWORD *)(result + 32) )
    return sub_770840((__int64)a1, a3);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}

