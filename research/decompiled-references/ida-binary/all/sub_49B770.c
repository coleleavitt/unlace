_QWORD *__fastcall sub_49B770(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax

  v5 = a2;
  v6 = (_QWORD *)operator new(0x30u);
  v7 = *a3;
  v6[5] = 0;
  v8 = *v7;
  v6[4] = *v7;
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v10 = (_QWORD *)a1[4];
      v5 = nullptr;
      if ( v10[4] < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_49B540((__int64)a1, v8);
    goto LABEL_6;
  }
  v9 = a2[4];
  if ( v8 < v9 )
  {
    v10 = (_QWORD *)a1[3];
    if ( a2 == v10 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2);
    v10 = (_QWORD *)v11;
    if ( *(_QWORD *)(v11 + 32) >= v8 )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
    {
      v10 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v9 >= v8 )
    goto LABEL_17;
  v10 = (_QWORD *)a1[4];
  if ( a2 == v10 )
  {
LABEL_27:
    v5 = nullptr;
    goto LABEL_6;
  }
  v13 = std::_Rb_tree_increment(a2);
  v10 = (_QWORD *)v13;
  if ( v8 >= *(_QWORD *)(v13 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    v10 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = (_QWORD *)v13;
LABEL_6:
  if ( v10 )
  {
    if ( a1 + 1 == v10 || v5 )
    {
      v12 = 1;
LABEL_10:
      v5 = v6;
      std::_Rb_tree_insert_and_rebalance(v12, v6, v10, a1 + 1);
      ++a1[5];
      return v5;
    }
    v9 = v10[4];
LABEL_26:
    v12 = v8 < v9;
    goto LABEL_10;
  }
LABEL_17:
  if ( v6 )
    operator delete(v6, 0x30u);
  return v5;
}
