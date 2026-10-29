__int64 *__fastcall sub_1258AE0(_QWORD *a1, _QWORD *a2, __int64 **a3)
{
  _QWORD *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _BOOL8 v11; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  bool v15; // al

  v5 = a2;
  v6 = (__int64 *)operator new(0x30u);
  v7 = **a3;
  v6[5] = 0;
  v6[4] = v7;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v5 = (_QWORD *)a1[4];
      if ( v7 > v5[4] )
        goto LABEL_23;
    }
    goto LABEL_16;
  }
  if ( v7 < a2[4] )
  {
    if ( (_QWORD *)a1[3] == a2 )
    {
LABEL_6:
      v9 = a2;
LABEL_17:
      v15 = v9 != nullptr;
      goto LABEL_18;
    }
    v8 = std::_Rb_tree_decrement(a2);
    if ( v7 > *(_QWORD *)(v8 + 32) )
    {
      if ( *(_QWORD *)(v8 + 24) )
        goto LABEL_6;
      v5 = (_QWORD *)v8;
LABEL_23:
      v15 = 0;
LABEL_18:
      if ( a1 + 1 == v5 || v15 )
      {
        v11 = 1;
        goto LABEL_21;
      }
      v7 = v6[4];
LABEL_25:
      v11 = v5[4] > v7;
      goto LABEL_21;
    }
    goto LABEL_16;
  }
  if ( v7 <= a2[4] )
    goto LABEL_13;
  if ( (_QWORD *)a1[4] == a2 )
    goto LABEL_25;
  v10 = std::_Rb_tree_increment(a2, (const char *)a2);
  if ( v7 >= *(_QWORD *)(v10 + 32) )
  {
LABEL_16:
    v13 = sub_1258A50((__int64)a1, v6 + 4);
    v9 = v13;
    v5 = v14;
    if ( v14 )
      goto LABEL_17;
    v5 = v13;
LABEL_13:
    operator delete(v6);
    return v5;
  }
  if ( !a2[3] )
    goto LABEL_25;
  v5 = (_QWORD *)v10;
  v11 = 1;
LABEL_21:
  std::_Rb_tree_insert_and_rebalance(v11, v6, v5, a1 + 1);
  ++a1[5];
  return v6;
}
