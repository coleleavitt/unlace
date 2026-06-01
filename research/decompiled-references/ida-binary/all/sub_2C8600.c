_QWORD *__fastcall sub_2C8600(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _BOOL8 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbp

  v5 = (_QWORD *)operator new(0x30u);
  v6 = *a3;
  v5[5] = 0;
  v7 = *v6;
  v5[4] = *v6;
  v8 = sub_2C8500(a1, a2, v7);
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && v9 != v11 )
      v10 = v7 < v9[4];
    std::_Rb_tree_insert_and_rebalance(v10, v5, v9, v11);
    ++a1[5];
    return v5;
  }
  v12 = v8;
  if ( !v5 )
    return v12;
  operator delete(v5, 0x30u);
  return v12;
}
