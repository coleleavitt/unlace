_QWORD *__fastcall sub_5580(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  v5 = (_QWORD *)operator new(0x30u);
  v6 = **a3;
  v5[5] = 0;
  v5[4] = v6;
  if ( a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v8 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v8 + 32) < v6 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_53C0((__int64)a1, v6);
    goto LABEL_6;
  }
  v7 = a2[4];
  if ( v6 < v7 )
  {
    v8 = a1[3];
    if ( a2 == (_QWORD *)v8 )
      goto LABEL_6;
    v9 = std::_Rb_tree_decrement();
    v8 = v9;
    if ( *(_QWORD *)(v9 + 32) >= v6 )
      goto LABEL_5;
    if ( *(_QWORD *)(v9 + 24) )
    {
      v8 = (__int64)a2;
      goto LABEL_6;
    }
    goto LABEL_23;
  }
  if ( v7 >= v6 )
    goto LABEL_14;
  v8 = a1[4];
  if ( a2 == (_QWORD *)v8 )
  {
LABEL_23:
    v4 = nullptr;
    goto LABEL_6;
  }
  v10 = std::_Rb_tree_increment();
  v8 = v10;
  if ( v6 >= *(_QWORD *)(v10 + 32) )
    goto LABEL_5;
  if ( !a2[3] )
  {
    if ( a2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v4 = (_QWORD *)v10;
LABEL_6:
  if ( v8 )
  {
LABEL_7:
    v4 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v5 )
  {
    clear_tinfo_t();
    operator delete(v5, 0x30u);
  }
  return v4;
}
