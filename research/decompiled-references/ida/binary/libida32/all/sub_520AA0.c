__int64 __fastcall sub_520AA0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rax

  v2 = sub_520960(a1, a2);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v3;
  if ( v2 == *(_QWORD **)(a1 + 24) && v3 == (_QWORD *)(a1 + 8) )
  {
    sub_51A780(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v2 == v3 )
  {
    return 0;
  }
  else
  {
    do
    {
      v6 = std::_Rb_tree_increment();
      v7 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v7, 0x38u);
      v8 = *(_QWORD *)(a1 + 40) - 1LL;
      *(_QWORD *)(a1 + 40) = v8;
    }
    while ( v5 != (_QWORD *)v6 );
    v4 -= v8;
  }
  return v4;
}

