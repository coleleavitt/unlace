void __fastcall sub_696F30(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  char *v8; // rbp

  v3 = sub_696E50(a1, a2);
  v5 = v4;
  v6 = v3;
  if ( v3 == *(_QWORD *)(a1 + 24) && v4 == a1 + 8 )
  {
    sub_693110(*(_QWORD **)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = v5;
    *(_QWORD *)(a1 + 32) = v5;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( v4 != v3 )
  {
    do
    {
      v7 = v6;
      v6 = std::_Rb_tree_increment(v6);
      v8 = (char *)std::_Rb_tree_rebalance_for_erase(v7, a1 + 8);
      clear_tinfo_t(v8 + 48);
      operator delete(v8, 0x38u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( v5 != v6 );
  }
}
