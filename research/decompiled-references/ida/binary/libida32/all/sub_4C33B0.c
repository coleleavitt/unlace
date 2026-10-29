void __fastcall sub_4C33B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // rcx
  _QWORD *v8; // r15
  __int64 v9; // r14
  __int64 i; // rbx
  char *v11; // rdx
  void *v12; // rdi

  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_4B1290(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else if ( a2 != a3 )
  {
    do
    {
      v5 = std::_Rb_tree_increment();
      v6 = std::_Rb_tree_rebalance_for_erase();
      v7 = *(char **)(v6 + 40);
      v8 = (_QWORD *)v6;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v6 + 48);
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = &v7[24 * i];
            v12 = *(void **)v11;
            if ( *(_QWORD *)v11 )
            {
              *((_QWORD *)v11 + 1) = 0;
              qfree(v12);
              v7 = (char *)v8[5];
            }
          }
        }
        v8[6] = 0;
        qfree(v7);
      }
      operator delete(v8, 0x40u);
      --*(_QWORD *)(a1 + 40);
    }
    while ( a3 != v5 );
  }
}

