__int64 __fastcall sub_FFB550(_QWORD *a1, __int64 a2, int **a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rdx
  void *v9; // rdi

  v4 = operator new(0x40u);
  v5 = **a3;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 56) = 0;
  v6 = sub_FFB470(a1, a2, (int *)(v4 + 32));
  if ( v7 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
  else
  {
    v9 = *(void **)(v4 + 40);
    if ( v9 )
      operator delete(v9);
    operator delete((void *)v4);
    return v6;
  }
}

