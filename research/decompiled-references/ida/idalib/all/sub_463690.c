_QWORD *__fastcall sub_463690(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rax

  v5 = a2;
  v8 = operator new(0x60u);
  v9 = **a3;
  *(_OWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 32) = v9;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 80) = 0;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v11 = (_QWORD *)a1[4];
      v5 = nullptr;
      if ( v11[4] < v9 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_462600((__int64)a1, v9);
    goto LABEL_6;
  }
  v10 = a2[4];
  if ( v9 < v10 )
  {
    v11 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement(a2);
    v11 = (_QWORD *)v12;
    if ( *(_QWORD *)(v12 + 32) >= v9 )
      goto LABEL_5;
    if ( *(_QWORD *)(v12 + 24) )
      v11 = a2;
    else
      v5 = nullptr;
LABEL_6:
    if ( v11 )
    {
      if ( a1 + 1 == v11 || v5 )
      {
        v13 = 1;
LABEL_10:
        v5 = (_QWORD *)v8;
        std::_Rb_tree_insert_and_rebalance(v13, v8, v11, a1 + 1);
        ++a1[5];
        return v5;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v10 >= v9 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v14 = std::_Rb_tree_increment(a2, a2, v6, v7);
    v11 = (_QWORD *)v14;
    if ( v9 < *(_QWORD *)(v14 + 32) )
    {
      if ( !a2[3] )
      {
        v11 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v5 = (_QWORD *)v14;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = a2;
  if ( a2 )
  {
LABEL_25:
    v10 = v11[4];
LABEL_26:
    v13 = v9 < v10;
    goto LABEL_10;
  }
LABEL_17:
  if ( v8 )
    operator delete((void *)v8, 0x60u);
  return v5;
}
