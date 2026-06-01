_QWORD *__fastcall sub_4D5760(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 **a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbp
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx

  v6 = operator new(0x40u);
  v7 = **a4;
  *(_QWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 32) = v7;
  v9 = sub_4C7B00(a1, a2, v7, v8);
  v11 = v9;
  if ( v10 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v9 && v10 != v13 )
      v12 = v7 < v10[4];
    v11 = (_QWORD *)v6;
    std::_Rb_tree_insert_and_rebalance(v12, v6, v10, v13);
    ++a1[5];
    return v11;
  }
  if ( !v6 )
    return v11;
  operator delete((void *)v6, 0x40u);
  return v11;
}
