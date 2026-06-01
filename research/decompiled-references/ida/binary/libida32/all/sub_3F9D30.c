__int64 __fastcall sub_3F9D30(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax

  if ( (_QWORD *)a2 == a1 + 8 )
  {
    if ( a1[12] )
    {
      v12 = a1[11];
      v13 = *(_DWORD *)(v12 + 32);
      if ( v13 < a3 || a3 >= v13 && *(_DWORD *)(v12 + 36) < a4 )
        return 0;
    }
    return sub_3F9C80((__int64)a1, a3, a4);
  }
  v6 = *(_DWORD *)(a2 + 32);
  if ( a3 < v6 )
  {
LABEL_5:
    result = a2;
    if ( a1[10] == a2 )
      return result;
    v9 = std::_Rb_tree_decrement();
    v10 = *(_DWORD *)(v9 + 32);
    if ( v10 < a3 || a3 >= v10 && *(_DWORD *)(v9 + 36) < a4 )
    {
      result = a2;
      if ( *(_QWORD *)(v9 + 24) )
        return result;
      return 0;
    }
    return sub_3F9C80((__int64)a1, a3, a4);
  }
  if ( v6 >= a3 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    if ( a4 < v7 )
      goto LABEL_5;
    if ( v7 >= a4 )
      return a2;
  }
  if ( a1[11] == a2 )
    return 0;
  result = std::_Rb_tree_increment();
  v11 = *(_DWORD *)(result + 32);
  if ( a3 >= v11 && (v11 < a3 || a4 >= *(_DWORD *)(result + 36)) )
    return sub_3F9C80((__int64)a1, a3, a4);
  if ( !*(_QWORD *)(a2 + 24) )
    return 0;
  return result;
}

