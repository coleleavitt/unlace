void __fastcall sub_4D4FF0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // rdi
  void *v10; // rbx

  v3 = sub_4D4E50(a1, a2);
  v5 = v4;
  v6 = (__int64)v3;
  if ( v3 == *(_QWORD **)(a1 + 24) && v4 == (_QWORD *)(a1 + 8) )
  {
    sub_4C8FC0(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v4 != v3 )
  {
    do
    {
      v7 = v6;
      v6 = std::_Rb_tree_increment(v6);
      v8 = std::_Rb_tree_rebalance_for_erase(v7, a1 + 8);
      v9 = *(void **)(v8 + 32);
      v10 = (void *)v8;
      if ( v9 )
      {
        *(_QWORD *)(v8 + 40) = 0;
        qfree(v9);
      }
      operator delete(v10, 0x40u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( v5 != (_QWORD *)v6 );
  }
}
