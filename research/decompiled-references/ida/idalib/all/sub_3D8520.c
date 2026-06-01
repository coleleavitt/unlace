void __fastcall sub_3D8520(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  void *v7; // rax

  v5 = a2;
  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_3BA3B0(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v6 = v5;
      v5 = std::_Rb_tree_increment(v5);
      v7 = (void *)std::_Rb_tree_rebalance_for_erase(v6, a1 + 8);
      operator delete(v7, 0x50u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( a3 != v5 );
  }
}
