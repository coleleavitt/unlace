void __fastcall sub_9EB1E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14

  v2 = std::_Rb_tree_rebalance_for_erase(a2, a1 + 8);
  v3 = *(_QWORD *)(v2 + 56);
  v4 = (void *)v2;
  if ( v3 )
  {
    v5 = v2 + 40;
    do
    {
      sub_9E9BA0(v5, *(_QWORD **)(v3 + 24));
      v6 = *(_QWORD *)(v3 + 16);
      operator delete((void *)v3);
      v3 = v6;
    }
    while ( v6 );
  }
  operator delete(v4);
  --*(_QWORD *)(a1 + 40);
}
