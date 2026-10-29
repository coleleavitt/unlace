_QWORD *__fastcall sub_5B3810(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _BOOL8 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp

  v5 = (_QWORD *)operator new(0x30u);
  v6 = *a3;
  v5[5] = 0;
  v7 = *v6;
  v5[4] = *v6;
  v9 = sub_5B3740(a1, a2, v7, v8);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && v10 != v12 )
      v11 = v7 < v10[4];
    std::_Rb_tree_insert_and_rebalance(v11, v5, v10, v12);
    ++a1[5];
    return v5;
  }
  v13 = v9;
  if ( !v5 )
    return v13;
  operator delete(v5, 0x30u);
  return v13;
}
