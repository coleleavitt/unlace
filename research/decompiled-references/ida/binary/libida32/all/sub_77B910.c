__int64 __fastcall sub_77B910(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  void *v9; // rdi
  __int64 v10; // rax

  v3 = sub_771E90(a1, a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v4;
  if ( v3 == *(_QWORD **)(a1 + 24) && v4 == (_QWORD *)(a1 + 8) )
  {
    sub_77B350(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = v6;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v3 == v4 )
  {
    return 0;
  }
  else
  {
    do
    {
      v7 = std::_Rb_tree_increment();
      v8 = (_QWORD *)std::_Rb_tree_rebalance_for_erase();
      free_idcv(v8 + 7);
      v9 = (void *)v8[4];
      if ( v9 )
      {
        v8[5] = 0;
        qfree(v9);
      }
      operator delete(v8, 0x58u);
      v10 = *(_QWORD *)(a1 + 40) - 1LL;
      *(_QWORD *)(a1 + 40) = v10;
    }
    while ( v6 != (_QWORD *)v7 );
    v5 -= v10;
  }
  return v5;
}

