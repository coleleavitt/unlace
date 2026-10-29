__int64 __fastcall sub_656720(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  int v4; // ebp
  int v5; // edx
  _QWORD *v6; // rax
  __int64 v7; // r12
  __int64 v9; // rax
  _BOOL4 v10; // [rsp+Ch] [rbp-3Ch]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = *a2;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 8);
      v6 = (_QWORD *)v3[3];
      if ( v4 < v5 )
        v6 = (_QWORD *)v3[2];
      if ( !v6 )
        break;
      v3 = v6;
    }
    v7 = (__int64)v3;
    if ( v4 < v5 )
    {
      if ( (_QWORD *)a1[3] == v3 )
        goto LABEL_9;
      v9 = std::_Rb_tree_decrement(v3);
      v5 = *(_DWORD *)(v9 + 32);
      v7 = v9;
    }
    if ( v4 <= v5 )
      return v7;
LABEL_9:
    v10 = 1;
    if ( v2 != v3 )
      v10 = v4 < *((_DWORD *)v3 + 8);
    goto LABEL_11;
  }
  if ( v2 == (_QWORD *)a1[3] || (v7 = std::_Rb_tree_decrement(a1 + 1), v4 > *(_DWORD *)(v7 + 32)) )
  {
    v10 = 1;
    v3 = a1 + 1;
LABEL_11:
    v7 = operator new(0x28u);
    *(_DWORD *)(v7 + 32) = *a2;
    std::_Rb_tree_insert_and_rebalance(v10, v7, v3, v2);
    ++a1[5];
  }
  return v7;
}
