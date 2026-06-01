_QWORD *__fastcall sub_44F310(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  v5 = operator new(0x60u);
  v6 = **a3;
  *(_OWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 72) = 0;
  *(_OWORD *)(v5 + 80) = 0;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v8 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v8 + 32) < v6 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_44E280((__int64)a1, v6);
    goto LABEL_6;
  }
  v7 = a2[4];
  if ( v6 >= v7 )
  {
    if ( v7 >= v6 )
      goto LABEL_14;
    if ( (_QWORD *)a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v10 = std::_Rb_tree_increment();
    v8 = v10;
    if ( v6 < *(_QWORD *)(v10 + 32) )
    {
      if ( !a2[3] )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_14;
      }
      v4 = (_QWORD *)v10;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = (__int64)a2;
  if ( (_QWORD *)a1[3] == a2 )
    goto LABEL_6;
  v9 = std::_Rb_tree_decrement();
  v8 = v9;
  if ( *(_QWORD *)(v9 + 32) >= v6 )
    goto LABEL_5;
  if ( *(_QWORD *)(v9 + 24) )
    v8 = (__int64)a2;
  else
    v4 = nullptr;
LABEL_6:
  if ( v8 )
  {
LABEL_7:
    v4 = (_QWORD *)v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v5 )
    operator delete((void *)v5, 0x60u);
  return v4;
}

