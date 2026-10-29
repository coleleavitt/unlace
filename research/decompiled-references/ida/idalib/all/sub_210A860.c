__int64 __fastcall sub_210A860(_QWORD *a1, _QWORD *a2, const char *a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r12

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && sub_2103460(a1[4] + 32LL, (__int64)a3) )
      return 0;
    return sub_210A650((__int64)a1, (__int64)a3);
  }
  if ( sub_2103460((__int64)a3, (__int64)(a2 + 4)) )
  {
    result = a1[3];
    if ( (_QWORD *)result == a2 )
      return result;
    v5 = std::_Rb_tree_decrement(a2);
    if ( sub_2103460(v5 + 32, (__int64)a3) )
    {
      result = 0;
      if ( *(_QWORD *)(v5 + 24) )
        return (__int64)a2;
      return result;
    }
    return sub_210A650((__int64)a1, (__int64)a3);
  }
  if ( !sub_2103460((__int64)(a2 + 4), (__int64)a3) )
    return (__int64)a2;
  if ( (_QWORD *)a1[4] == a2 )
    return 0;
  v6 = std::_Rb_tree_increment(a2, a3);
  if ( !sub_2103460((__int64)a3, v6 + 32) )
    return sub_210A650((__int64)a1, (__int64)a3);
  result = 0;
  if ( a2[3] )
    return v6;
  return result;
}
