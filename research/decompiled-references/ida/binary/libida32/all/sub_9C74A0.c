void __fastcall sub_9C74A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void *v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14

  v1 = std::_Rb_tree_rebalance_for_erase();
  v2 = *(_QWORD *)(v1 + 56);
  v3 = (void *)v1;
  if ( v2 )
  {
    v4 = v1 + 40;
    do
    {
      sub_9C5E60(v4, *(_QWORD **)(v2 + 24));
      v5 = *(_QWORD *)(v2 + 16);
      operator delete((void *)v2);
      v2 = v5;
    }
    while ( v5 );
  }
  operator delete(v3);
  --*(_QWORD *)(a1 + 40);
}

