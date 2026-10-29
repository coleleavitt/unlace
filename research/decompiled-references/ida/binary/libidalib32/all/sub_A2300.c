void sub_A2300()
{
  __int64 func; // rax
  int *v1; // rbx
  int *v2; // r13
  int v3; // r12d
  int v4; // r15d
  void *v5; // rax

  func = get_func();
  if ( func )
  {
    v1 = (int *)qword_250A38;
    v2 = (int *)func;
    while ( v1 != &dword_250A28 )
    {
      while ( 1 )
      {
        v3 = v1[9];
        v4 = *v2;
        v1 = (int *)std::_Rb_tree_increment();
        if ( v3 != v4 )
          break;
        v5 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v5, 0x28u);
        --qword_250A48;
        if ( v1 == &dword_250A28 )
          return;
      }
    }
  }
}

