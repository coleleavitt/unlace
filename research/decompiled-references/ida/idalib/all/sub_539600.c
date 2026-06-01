__int64 __fastcall sub_539600(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // r13
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rax

  v3 = sub_5394C0(a1, a2);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v4;
  v7 = (__int64)v3;
  if ( v3 == *(_QWORD **)(a1 + 24) && v4 == (_QWORD *)(a1 + 8) )
  {
    sub_533290(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v6;
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
      v8 = v7;
      v7 = std::_Rb_tree_increment(v7);
      v9 = (void *)std::_Rb_tree_rebalance_for_erase(v8, a1 + 8);
      operator delete(v9, 0x38u);
      v10 = *(_QWORD *)(a1 + 40) - 1LL;
      *(_QWORD *)(a1 + 40) = v10;
    }
    while ( v6 != (_QWORD *)v7 );
    v5 -= v10;
  }
  return v5;
}
