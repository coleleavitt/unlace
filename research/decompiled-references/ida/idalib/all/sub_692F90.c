_QWORD *__fastcall sub_692F90(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _BOOL8 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbp

  v5 = (_QWORD *)operator new(0x30u);
  v6 = **a3;
  v5[5] = 0;
  v5[4] = v6;
  v8 = sub_692EC0(a1, a2, v6, v7);
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && v9 != v11 )
      v10 = v6 < v9[4];
    std::_Rb_tree_insert_and_rebalance(v10, v5, v9, v11);
    ++a1[5];
    return v5;
  }
  v12 = v8;
  if ( !v5 )
    return v12;
  clear_tinfo_t(v5 + 5);
  operator delete(v5, 0x30u);
  return v12;
}
