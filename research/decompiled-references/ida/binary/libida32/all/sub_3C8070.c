void *__fastcall sub_3C8070(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // r14d
  void *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp

  v4 = operator new(0x30u);
  v5 = *(_DWORD *)a3;
  v6 = (void *)v4;
  *(_DWORD *)(v4 + 32) = *(_DWORD *)a3;
  *(_QWORD *)(v4 + 36) = *(_QWORD *)(a3 + 4);
  v7 = sub_3B4E00(a1, a2, v5);
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  v9 = v7;
  if ( !v6 )
    return (void *)v9;
  operator delete(v6, 0x30u);
  return (void *)v9;
}

