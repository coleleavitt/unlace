_QWORD *__fastcall sub_3E6690(_QWORD *a1, _QWORD *a2, unsigned __int64 *a3, _BYTE *a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r13
  _QWORD *v11; // r12
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _BOOL8 v15; // rdi
  __int64 v16; // rax

  v7 = a2;
  v8 = operator new(0x30u);
  v10 = *a3;
  v11 = (_QWORD *)v8;
  *(_QWORD *)(v8 + 32) = v10;
  *(_BYTE *)(v8 + 40) = *a4;
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v13 = (_QWORD *)a1[4];
      v7 = nullptr;
      if ( v13[4] < v10 )
        goto LABEL_6;
    }
LABEL_5:
    v7 = sub_3E0B40((__int64)a1, v10);
    goto LABEL_6;
  }
  v12 = a2[4];
  if ( v10 < v12 )
  {
    v13 = (_QWORD *)a1[3];
    if ( a2 == v13 )
      goto LABEL_6;
    v14 = std::_Rb_tree_decrement(a2);
    v13 = (_QWORD *)v14;
    if ( *(_QWORD *)(v14 + 32) >= v10 )
      goto LABEL_5;
    if ( *(_QWORD *)(v14 + 24) )
    {
      v13 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v12 >= v10 )
    goto LABEL_17;
  v13 = (_QWORD *)a1[4];
  if ( a2 == v13 )
  {
LABEL_27:
    v7 = nullptr;
    goto LABEL_6;
  }
  v16 = std::_Rb_tree_increment(a2, a2, v13, v9);
  v13 = (_QWORD *)v16;
  if ( v10 >= *(_QWORD *)(v16 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    v13 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v7 = (_QWORD *)v16;
LABEL_6:
  if ( v13 )
  {
    if ( a1 + 1 == v13 || v7 )
    {
      v15 = 1;
LABEL_10:
      v7 = v11;
      std::_Rb_tree_insert_and_rebalance(v15, v11, v13, a1 + 1);
      ++a1[5];
      return v7;
    }
    v12 = v13[4];
LABEL_26:
    v15 = v10 < v12;
    goto LABEL_10;
  }
LABEL_17:
  if ( v11 )
    operator delete(v11, 0x30u);
  return v7;
}
