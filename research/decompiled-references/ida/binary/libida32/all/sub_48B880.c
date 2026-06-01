__int64 __fastcall sub_48B880(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rcx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] || *(_DWORD *)(a1[4] + 32LL) >= *a3 )
      return sub_48B7C0((__int64)a1, a3);
    return 0;
  }
  v4 = *a3;
  v5 = *(_DWORD *)(a2 + 32);
  if ( *a3 >= v5 )
  {
    result = a2;
    if ( v5 >= v4 )
      return result;
    if ( a1[4] != a2 )
    {
      result = std::_Rb_tree_increment();
      if ( v4 >= *(_DWORD *)(result + 32) )
        return sub_48B7C0((__int64)a1, a3);
      if ( !*(_QWORD *)(a2 + 24) )
        return 0;
      return result;
    }
    return 0;
  }
  result = a1[3];
  if ( result != a2 )
  {
    v7 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v7 + 32) >= v4 )
      return sub_48B7C0((__int64)a1, a3);
    result = a2;
    if ( !*(_QWORD *)(v7 + 24) )
      return 0;
  }
  return result;
}

