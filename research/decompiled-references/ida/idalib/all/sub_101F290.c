__int64 __fastcall sub_101F290(_QWORD *a1, __int64 a2, int **a3)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rcx
  _BOOL8 v11; // rdi
  void *v13; // rdi

  v5 = operator new(0x40u);
  v6 = **a3;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 56) = 0;
  v7 = sub_101F1B0(a1, a2, (int *)(v5 + 32));
  v9 = v7;
  if ( v8 )
  {
    v10 = a1 + 1;
    v11 = 1;
    if ( !v7 && (_QWORD *)v8 != v10 )
      v11 = *(_DWORD *)(v5 + 32) < *(_DWORD *)(v8 + 32);
    std::_Rb_tree_insert_and_rebalance(v11, v5, v8, v10);
    ++a1[5];
    return v5;
  }
  else
  {
    v13 = *(void **)(v5 + 40);
    if ( v13 )
      operator delete(v13);
    operator delete((void *)v5);
    return v9;
  }
}
