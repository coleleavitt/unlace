__int64 __fastcall sub_532840(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // eax
  __int64 result; // rax
  __int64 v7; // rcx

  v4 = a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] && *(_DWORD *)(a1[4] + 32LL) < (unsigned int)a3 )
      return 0;
    return sub_532780((__int64)a1, v4);
  }
  v5 = *(_DWORD *)(a2 + 32);
  if ( (unsigned int)a3 < v5 )
  {
    result = a2;
    if ( a1[3] == a2 )
      return result;
    v7 = std::_Rb_tree_decrement(a2);
    if ( *(_DWORD *)(v7 + 32) < v4 )
    {
      result = a2;
      if ( *(_QWORD *)(v7 + 24) )
        return result;
      return 0;
    }
    return sub_532780((__int64)a1, v4);
  }
  if ( v5 >= (unsigned int)a3 )
    return a2;
  if ( a1[4] == a2 )
    return 0;
  result = std::_Rb_tree_increment(a2, a2, a3, a4);
  if ( v4 >= *(_DWORD *)(result + 32) )
    return sub_532780((__int64)a1, v4);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}
