void __fastcall sub_17F8E0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  void *v8; // rax
  __int64 v9; // rbx
  _QWORD *i; // r12
  __int64 v11; // rdi
  __int64 v12; // rbx
  void *v13; // rdi

  if ( a2 == -1 )
  {
    v9 = a1[3];
    for ( i = a1 + 1; i != (_QWORD *)v9; v9 = std::_Rb_tree_increment() )
    {
      v11 = *(_QWORD *)(v9 + 40);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
    v12 = a1[2];
    while ( v12 )
    {
      sub_17EF00(*(_QWORD **)(v12 + 24));
      v13 = (void *)v12;
      v12 = *(_QWORD *)(v12 + 16);
      operator delete(v13, 0x30u);
    }
    a1[2] = 0;
    a1[3] = i;
    a1[4] = i;
    a1[5] = 0;
  }
  else
  {
    v3 = (_QWORD *)a1[2];
    if ( v3 )
    {
      v4 = a1 + 1;
      do
      {
        while ( 1 )
        {
          v5 = v3[2];
          v6 = v3[3];
          if ( v3[4] < a2 )
            break;
          v4 = v3;
          v3 = (_QWORD *)v3[2];
          if ( !v5 )
            goto LABEL_7;
        }
        v3 = (_QWORD *)v3[3];
      }
      while ( v6 );
LABEL_7:
      if ( v4 != a1 + 1 && a2 >= v4[4] )
      {
        v7 = v4[5];
        if ( v7 )
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, a2, v6);
        v8 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v8, 0x30u);
        --a1[5];
      }
    }
  }
}

