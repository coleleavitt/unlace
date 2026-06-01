void __fastcall sub_4C32F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  void *v7; // rdi
  void *v8; // rbx

  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_4B23A0(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v5 = std::_Rb_tree_increment();
      v6 = std::_Rb_tree_rebalance_for_erase();
      v7 = *(void **)(v6 + 32);
      v8 = (void *)v6;
      if ( v7 )
      {
        *(_QWORD *)(v6 + 40) = 0;
        qfree(v7);
      }
      operator delete(v8, 0x40u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( a3 != v5 );
  }
}

