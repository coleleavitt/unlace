__int64 __fastcall sub_695420(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // eax

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (v11 = a1[4], v12 = *(_QWORD *)a3, v13 = *(_QWORD *)(v11 + 32), v13 >= v12)
      && (v12 != v13 || *(_DWORD *)(a3 + 8) <= *(_DWORD *)(v11 + 40)) )
    {
      v9 = *(_DWORD *)(a3 + 8);
      v10 = *(_QWORD *)a3;
      return sub_692D00((__int64)a1, v10, v9);
    }
    return 0;
  }
  v4 = *(_QWORD *)a3;
  v5 = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)a3 < v5 )
    goto LABEL_3;
  if ( v5 != v4 )
  {
LABEL_9:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2, (const char *)a2);
    if ( v4 >= *(_QWORD *)(result + 32)
      && (v4 != *(_QWORD *)(result + 32) || *(_DWORD *)(a3 + 8) >= *(_DWORD *)(result + 40)) )
    {
      goto LABEL_12;
    }
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v14 = *(_DWORD *)(a2 + 40);
  if ( *(_DWORD *)(a3 + 8) >= v14 )
  {
    if ( *(_DWORD *)(a3 + 8) <= v14 )
      return a2;
    goto LABEL_9;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    v7 = std::_Rb_tree_decrement(a2);
    v8 = *(_QWORD *)(v7 + 32);
    if ( v8 >= v4 && (v4 != v8 || *(_DWORD *)(v7 + 40) >= *(_DWORD *)(a3 + 8)) )
    {
LABEL_12:
      v9 = *(_DWORD *)(a3 + 8);
      v10 = v4;
      return sub_692D00((__int64)a1, v10, v9);
    }
    result = a2;
    if ( !*(_QWORD *)(v7 + 24) )
      return 0;
  }
  return result;
}
