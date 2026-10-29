void __fastcall sub_4DA450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rbx

  v5 = a2;
  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_4C8D00(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v6 = v5;
      v5 = std::_Rb_tree_increment(v5);
      v7 = std::_Rb_tree_rebalance_for_erase(v6, a1 + 8);
      v8 = *(void **)(v7 + 32);
      v9 = (void *)v7;
      if ( v8 )
      {
        *(_QWORD *)(v7 + 40) = 0;
        qfree(v8);
      }
      operator delete(v9, 0x40u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( a3 != v5 );
  }
}
