__int64 __fastcall sub_2A0590(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // r13d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5]
      || (v10 = a1[4], v11 = *(_DWORD *)(v10 + 32), *a3 <= v11) && (*a3 != v11 || a3[1] <= *(_DWORD *)(v10 + 36)) )
    {
      v8 = a3[1];
      v9 = *a3;
      return sub_28F890((__int64)a1, v9, v8);
    }
    return 0;
  }
  v4 = *a3;
  if ( *(_DWORD *)(a2 + 32) > *a3 )
    goto LABEL_3;
  if ( *(_DWORD *)(a2 + 32) != v4 )
  {
LABEL_9:
    if ( a1[4] == a2 )
      return 0;
    result = std::_Rb_tree_increment(a2);
    if ( v4 >= *(_DWORD *)(result + 32) && (v4 != *(_DWORD *)(result + 32) || a3[1] >= *(_DWORD *)(result + 36)) )
      goto LABEL_12;
    if ( !*(_QWORD *)(a2 + 24) )
      return 0;
    return result;
  }
  v12 = *(_DWORD *)(a2 + 36);
  if ( a3[1] >= v12 )
  {
    if ( a3[1] <= v12 )
      return a2;
    goto LABEL_9;
  }
LABEL_3:
  result = a2;
  if ( a1[3] != a2 )
  {
    v6 = std::_Rb_tree_decrement(a2);
    v7 = v6;
    if ( v4 <= *(_DWORD *)(v6 + 32) && (v4 != *(_DWORD *)(v6 + 32) || *(_DWORD *)(v6 + 36) >= a3[1]) )
    {
LABEL_12:
      v8 = a3[1];
      v9 = v4;
      return sub_28F890((__int64)a1, v9, v8);
    }
    result = a2;
    if ( !*(_QWORD *)(v7 + 24) )
      return 0;
  }
  return result;
}
