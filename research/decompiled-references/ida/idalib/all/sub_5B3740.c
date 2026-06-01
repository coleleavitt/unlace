_QWORD *__fastcall sub_5B3740(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rax
  _QWORD *result; // rax
  __int64 v7; // rcx

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && *(_QWORD *)(a1[4] + 32LL) < a3 )
      return nullptr;
    return sub_5B3680((__int64)a1, a3);
  }
  v5 = a2[4];
  if ( a3 < v5 )
  {
    result = a2;
    if ( (_QWORD *)a1[3] == a2 )
      return result;
    v7 = std::_Rb_tree_decrement(a2);
    if ( *(_QWORD *)(v7 + 32) < a3 )
    {
      result = a2;
      if ( *(_QWORD *)(v7 + 24) )
        return result;
      return nullptr;
    }
    return sub_5B3680((__int64)a1, a3);
  }
  if ( v5 >= a3 )
    return a2;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  result = (_QWORD *)std::_Rb_tree_increment(a2, a2, a3, a4);
  if ( a3 >= result[4] )
    return sub_5B3680((__int64)a1, a3);
  if ( !a2[3] )
    return nullptr;
  return result;
}
