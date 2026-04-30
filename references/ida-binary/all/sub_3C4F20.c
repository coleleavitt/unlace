_DWORD *__fastcall sub_3C4F20(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  _DWORD *v5; // rbx
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  _BOOL8 v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rbp

  v5 = (_DWORD *)operator new(0x80u);
  v6 = **a3;
  v5[8] = v6;
  memset(v5 + 10, 0, 0x58u);
  v7 = sub_3C44C0(a1, a2, v6);
  if ( v8 )
  {
    v9 = 1;
    v10 = a1 + 1;
    if ( !v7 && (_QWORD *)v8 != v10 )
      v9 = v6 < *(_DWORD *)(v8 + 32);
    std::_Rb_tree_insert_and_rebalance(v9, v5, v8, v10);
    ++a1[5];
    return v5;
  }
  v11 = v7;
  if ( !v5 )
    return (_DWORD *)v11;
  operator delete(v5, 0x80u);
  return (_DWORD *)v11;
}
