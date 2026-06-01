_QWORD *__fastcall sub_534760(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax

  v6 = a2;
  v7 = operator new(0x40u);
  v8 = **a4;
  *(_OWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 32) = v8;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v10 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v10[4] < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_52F580((__int64)a1, v8);
    goto LABEL_6;
  }
  v9 = a2[4];
  if ( v8 < v9 )
  {
    v10 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2);
    v10 = (_QWORD *)v11;
    if ( *(_QWORD *)(v11 + 32) >= v8 )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
      v10 = a2;
    else
      v6 = nullptr;
LABEL_6:
    if ( v10 )
    {
      if ( v6 || a1 + 1 == v10 )
      {
        v12 = 1;
LABEL_10:
        v6 = (_QWORD *)v7;
        std::_Rb_tree_insert_and_rebalance(v12, v7, v10, a1 + 1);
        ++a1[5];
        return v6;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  if ( v9 >= v8 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v13 = std::_Rb_tree_increment(a2);
    v10 = (_QWORD *)v13;
    if ( v8 < *(_QWORD *)(v13 + 32) )
    {
      if ( !a2[3] )
      {
        v10 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v6 = (_QWORD *)v13;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = a2;
  if ( a2 )
  {
LABEL_25:
    v9 = v10[4];
LABEL_26:
    v12 = v8 < v9;
    goto LABEL_10;
  }
LABEL_17:
  if ( v7 )
    operator delete((void *)v7, 0x40u);
  return v6;
}
