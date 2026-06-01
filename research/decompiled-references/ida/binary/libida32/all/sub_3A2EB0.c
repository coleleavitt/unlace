void __fastcall sub_3A2EB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  void *v5; // rax

  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_39B6A0(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v4 = std::_Rb_tree_increment();
      v5 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v5, 0x28u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( a3 != v4 );
  }
}

