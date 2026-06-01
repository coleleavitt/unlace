_QWORD *__fastcall sub_44DFB0(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax

  v6 = a2;
  v9 = operator new(0x40u);
  v10 = **a4;
  *(_OWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 32) = v10;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v12 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v12[4] < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_44A100((__int64)a1, v10);
    goto LABEL_6;
  }
  v11 = a2[4];
  if ( v10 < v11 )
  {
    v12 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2);
    v12 = (_QWORD *)v13;
    if ( *(_QWORD *)(v13 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
      v12 = a2;
    else
      v6 = nullptr;
LABEL_6:
    if ( v12 )
    {
      if ( v6 || a1 + 1 == v12 )
      {
        v14 = 1;
LABEL_10:
        v6 = (_QWORD *)v9;
        std::_Rb_tree_insert_and_rebalance(v14, v9, v12, a1 + 1);
        ++a1[5];
        return v6;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v11 >= v10 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v15 = std::_Rb_tree_increment(a2, a2, v7, v8);
    v12 = (_QWORD *)v15;
    if ( v10 < *(_QWORD *)(v15 + 32) )
    {
      if ( !a2[3] )
      {
        v12 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v6 = (_QWORD *)v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v12 = a2;
  if ( a2 )
  {
LABEL_25:
    v11 = v12[4];
LABEL_26:
    v14 = v10 < v11;
    goto LABEL_10;
  }
LABEL_17:
  if ( v9 )
    operator delete((void *)v9, 0x40u);
  return v6;
}
