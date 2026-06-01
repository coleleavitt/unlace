void __fastcall sub_51A300(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r12d
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r13
  void *v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v2 )
  {
    v4 = a1 + 40;
    v5 = a1 + 40;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v2 + 16);
        v7 = *(_QWORD *)(v2 + 24);
        if ( *(_DWORD *)(v2 + 32) < a2 )
          break;
        v5 = v2;
        v2 = *(_QWORD *)(v2 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v2 = *(_QWORD *)(v2 + 24);
    }
    while ( v7 );
LABEL_6:
    if ( v4 != v5 )
    {
      while ( 1 )
      {
        v10 = *(unsigned int *)(v5 + 32);
        if ( (unsigned int)v10 >= v3 )
          break;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10) = *(_QWORD *)(v5 + 40);
        v8 = std::_Rb_tree_increment();
        v9 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v9, 0x30u);
        --*(_QWORD *)(a1 + 72);
        if ( v4 == v8 )
          break;
        v5 = v8;
      }
    }
  }
}

