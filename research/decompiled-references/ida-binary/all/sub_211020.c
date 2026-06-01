void __fastcall sub_211020(__int64 a1, __int64 a2)
{
  __int64 func; // rax
  __int64 v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rbp
  void *v8; // rax

  func = get_func(a2);
  if ( func )
  {
    v3 = qword_8CB638;
    v4 = (__int64 *)func;
    while ( (int *)v3 != &dword_8CB628 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v3 + 40);
        v6 = *v4;
        v7 = v3;
        v3 = std::_Rb_tree_increment(v3);
        if ( v5 != v6 )
          break;
        v8 = (void *)std::_Rb_tree_rebalance_for_erase(v7, &dword_8CB628);
        operator delete(v8, 0x30u);
        --qword_8CB648;
        if ( (int *)v3 == &dword_8CB628 )
          return;
      }
    }
  }
}
