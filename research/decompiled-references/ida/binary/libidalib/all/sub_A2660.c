void sub_A2660()
{
  __int64 func; // rax
  __int64 v1; // rbx
  __int64 *v2; // r13
  __int64 v3; // r12
  __int64 v4; // r15
  void *v5; // rax

  func = get_func();
  if ( func )
  {
    v1 = qword_251AB8;
    v2 = (__int64 *)func;
    while ( (int *)v1 != &dword_251AA8 )
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)(v1 + 40);
        v4 = *v2;
        v1 = std::_Rb_tree_increment();
        if ( v3 != v4 )
          break;
        v5 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v5, 0x30u);
        --qword_251AC8;
        if ( (int *)v1 == &dword_251AA8 )
          return;
      }
    }
  }
}

