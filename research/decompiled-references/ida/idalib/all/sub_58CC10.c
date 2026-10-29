_QWORD *__fastcall sub_58CC10(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _BOOL8 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp

  v5 = operator new(0x48u);
  v6 = *a3;
  *(_BYTE *)(v5 + 40) = 2;
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 64) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  copy_idcv(v5 + 40);
  v7 = *(_QWORD *)(v5 + 32);
  v9 = sub_589700(a1, a2, v7, v8);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && v10 != v12 )
      v11 = v7 < v10[4];
    v13 = (_QWORD *)v5;
    std::_Rb_tree_insert_and_rebalance(v11, v5, v10, v12);
    ++a1[5];
  }
  else
  {
    v13 = v9;
    if ( v5 )
    {
      free_idcv(v5 + 40);
      operator delete((void *)v5, 0x48u);
    }
  }
  return v13;
}
