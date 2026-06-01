void __fastcall sub_4692C0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  void *v8; // rdi
  void *v9; // rbx

  v3 = sub_41D920(a1, a2);
  v5 = v4;
  if ( v3 == *(_QWORD **)(a1 + 24) && v4 == (_QWORD *)(a1 + 8) )
  {
    sub_468890(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v4 != v3 )
  {
    do
    {
      v6 = std::_Rb_tree_increment();
      v7 = std::_Rb_tree_rebalance_for_erase();
      v8 = *(void **)(v7 + 32);
      v9 = (void *)v7;
      if ( v8 )
      {
        *(_QWORD *)(v7 + 40) = 0;
        qfree(v8);
      }
      operator delete(v9, 0x38u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( v5 != (_QWORD *)v6 );
  }
}

