_QWORD *__fastcall sub_FE790(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp

  v4 = (_QWORD *)operator new(0x30u);
  v5 = *a3;
  v4[5] = 0;
  v6 = *v5;
  v4[4] = *v5;
  v7 = sub_FE6C0(a1, a2, v6);
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  v9 = v7;
  if ( !v4 )
    return v9;
  operator delete(v4, 0x30u);
  return v9;
}

