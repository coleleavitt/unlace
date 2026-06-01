void *__fastcall sub_4A0760(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rax
  unsigned int v6; // r14d
  void *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _BOOL8 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rbp

  v5 = operator new(0x30u);
  v6 = *a3;
  v7 = (void *)v5;
  *(_DWORD *)(v5 + 32) = *a3;
  *(_QWORD *)(v5 + 40) = *((_QWORD *)a3 + 1);
  v8 = sub_4A0680(a1, a2, (unsigned int *)(v5 + 32));
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && (_QWORD *)v9 != v11 )
      v10 = v6 < *(_DWORD *)(v9 + 32);
    std::_Rb_tree_insert_and_rebalance(v10, v7, v9, v11);
    ++a1[5];
    return v7;
  }
  v12 = v8;
  if ( !v7 )
    return (void *)v12;
  operator delete(v7, 0x30u);
  return (void *)v12;
}
