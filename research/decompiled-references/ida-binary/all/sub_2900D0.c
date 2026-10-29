_DWORD *__fastcall sub_2900D0(_QWORD *a1, __int64 a2, int **a3)
{
  _DWORD *v5; // rbx
  int *v6; // rax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdx
  _BOOL8 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rbp

  v5 = (_DWORD *)operator new(0x28u);
  v6 = *a3;
  v5[9] = 0;
  v7 = *v6;
  v5[8] = *v6;
  v8 = sub_28FAB0(a1, a2, v7);
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && (_QWORD *)v9 != v11 )
      v10 = v7 < *(_DWORD *)(v9 + 32);
    std::_Rb_tree_insert_and_rebalance(v10, v5, v9, v11);
    ++a1[5];
    return v5;
  }
  v12 = v8;
  if ( !v5 )
    return (_DWORD *)v12;
  operator delete(v5, 0x28u);
  return (_DWORD *)v12;
}
