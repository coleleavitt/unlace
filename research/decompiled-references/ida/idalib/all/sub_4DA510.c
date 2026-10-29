void __fastcall sub_4DA510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  char *v8; // rcx
  _QWORD *v9; // r15
  __int64 v10; // r14
  __int64 i; // rbx
  char *v12; // rdx
  void *v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-40h]

  v5 = a2;
  if ( a2 == *(_QWORD *)(a1 + 24) && a3 == a1 + 8 )
  {
    sub_4C7F20(*(void **)(a1 + 16));
    *(_QWORD *)(a1 + 24) = a3;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = 0;
  }
  else
  {
    v14 = a1 + 8;
    if ( a2 != a3 )
    {
      do
      {
        v6 = v5;
        v5 = std::_Rb_tree_increment(v5);
        v7 = std::_Rb_tree_rebalance_for_erase(v6, v14);
        v8 = *(char **)(v7 + 40);
        v9 = (_QWORD *)v7;
        if ( v8 )
        {
          v10 = *(_QWORD *)(v7 + 48);
          if ( v10 )
          {
            for ( i = 0; i != v10; ++i )
            {
              v12 = &v8[24 * i];
              v13 = *(void **)v12;
              if ( *(_QWORD *)v12 )
              {
                *((_QWORD *)v12 + 1) = 0;
                qfree(v13);
                v8 = (char *)v9[5];
              }
            }
          }
          v9[6] = 0;
          qfree(v8);
        }
        operator delete(v9, 0x40u);
        --*(_QWORD *)(a1 + 40);
      }
      while ( a3 != v5 );
    }
  }
}
