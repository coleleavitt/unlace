void __fastcall sub_677170(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rbx
  char *v6; // rbp

  v2 = sub_677090(a1, a2);
  v4 = v3;
  if ( v2 == *(_QWORD *)(a1 + 24) && v3 == a1 + 8 )
  {
    sub_673450(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 32) = v4;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v3 != v2 )
  {
    do
    {
      v5 = std::_Rb_tree_increment();
      v6 = (char *)std::_Rb_tree_rebalance_for_erase();
      clear_tinfo_t(v6 + 40);
      operator delete(v6, 0x30u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( v4 != v5 );
  }
}

