__int64 __fastcall sub_2C01F0(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 v6; // r13

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && sub_2938E0((_DWORD *)(a1[4] + 32LL), a3) )
      return 0;
    return sub_2C0140((__int64)a1, a3);
  }
  if ( sub_2938E0(a3, (_DWORD *)(a2 + 32)) )
  {
    result = a1[3];
    if ( result == a2 )
      return result;
    v5 = std::_Rb_tree_decrement(a2);
    if ( sub_2938E0((_DWORD *)(v5 + 32), a3) )
    {
      result = a2;
      if ( !*(_QWORD *)(v5 + 24) )
        return 0;
      return result;
    }
    return sub_2C0140((__int64)a1, a3);
  }
  if ( !sub_2938E0((_DWORD *)(a2 + 32), a3) )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  v6 = std::_Rb_tree_increment(a2);
  if ( !sub_2938E0(a3, (_DWORD *)(v6 + 32)) )
    return sub_2C0140((__int64)a1, a3);
  result = v6;
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
