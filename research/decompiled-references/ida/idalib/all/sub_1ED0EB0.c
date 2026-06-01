__int64 __fastcall sub_1ED0EB0(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  _QWORD *v9; // rcx
  _BOOL8 v10; // rdi
  void *v12; // rdi

  v5 = operator new(0x88u);
  *(_DWORD *)(v5 + 32) = **a3;
  memset((void *)(v5 + 40), 0, 0x60u);
  *(_QWORD *)(v5 + 56) = v5 + 72;
  *(_QWORD *)(v5 + 64) = 0x400000000LL;
  v6 = sub_FCEA40(a1, a2, (int *)(v5 + 32));
  v8 = v6;
  if ( v7 )
  {
    v9 = a1 + 1;
    v10 = 1;
    if ( !v6 && (_QWORD *)v7 != v9 )
      v10 = *(_DWORD *)(v5 + 32) < *(_DWORD *)(v7 + 32);
    std::_Rb_tree_insert_and_rebalance(v10, v5, v7, v9);
    ++a1[5];
    return v5;
  }
  else
  {
    v12 = *(void **)(v5 + 56);
    if ( (void *)(v5 + 72) != v12 )
      free(v12);
    operator delete((void *)v5);
    return v8;
  }
}
