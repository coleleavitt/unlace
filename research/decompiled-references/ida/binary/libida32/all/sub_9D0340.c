_QWORD *__fastcall sub_9D0340(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r13
  _QWORD *result; // rax
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rdx

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && *a3 > *(_QWORD *)(a1[4] + 32LL) )
      return nullptr;
    return sub_9D02B0((__int64)a1, a3);
  }
  v4 = *a3;
  if ( a2[4] > *a3 )
  {
    result = (_QWORD *)a1[3];
    if ( result == a2 )
      return result;
    v6 = std::_Rb_tree_decrement();
    if ( *(_QWORD *)(v6 + 32) < v4 )
    {
      v7 = *(_QWORD *)(v6 + 24) == 0;
      result = nullptr;
      if ( !v7 )
        return a2;
      return result;
    }
    return sub_9D02B0((__int64)a1, a3);
  }
  if ( a2[4] >= *a3 )
    return a2;
  result = nullptr;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v8 = std::_Rb_tree_increment();
    if ( *(_QWORD *)(v8 + 32) <= v4 )
      return sub_9D02B0((__int64)a1, a3);
    result = nullptr;
    if ( a2[3] )
      return (_QWORD *)v8;
  }
  return result;
}

