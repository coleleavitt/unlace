__int64 __fastcall sub_53340(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v6; // ax
  __int64 result; // rax

  v5 = a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      a4 = a1[4];
      if ( *(_WORD *)(a4 + 32) < (unsigned __int16)a3 )
        return 0;
    }
    return sub_53280((__int64)a1, v5, a3, a4, a5);
  }
  v6 = *(_WORD *)(a2 + 32);
  if ( (unsigned __int16)a3 < v6 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    a4 = std::_Rb_tree_decrement(a2, a2, a2, a4, a5);
    if ( *(_WORD *)(a4 + 32) < (unsigned __int16)v5 )
    {
      result = a2;
      if ( *(_QWORD *)(a4 + 24) )
        return result;
      return 0;
    }
    return sub_53280((__int64)a1, v5, a3, a4, a5);
  }
  if ( v6 >= (unsigned __int16)a3 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  result = std::_Rb_tree_increment(a2);
  if ( (unsigned __int16)v5 >= *(_WORD *)(result + 32) )
    return sub_53280((__int64)a1, v5, a3, a4, a5);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
