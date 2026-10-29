_QWORD *__fastcall sub_3CF5E0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  void *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _BOOL8 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp

  v5 = operator new(0x30u);
  v6 = *(_QWORD *)a3;
  v7 = (void *)v5;
  *(_QWORD *)(v5 + 32) = *(_QWORD *)a3;
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a3 + 8);
  v9 = sub_3B9400(a1, a2, v6, v8);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && v10 != v12 )
      v11 = v6 < v10[4];
    std::_Rb_tree_insert_and_rebalance(v11, v7, v10, v12);
    ++a1[5];
    return v7;
  }
  v13 = v9;
  if ( !v7 )
    return v13;
  operator delete(v7, 0x30u);
  return v13;
}
