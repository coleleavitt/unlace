void __fastcall sub_4DEB40(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // r12
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // rbx
  _QWORD *i; // r12
  __int64 v12; // rdi
  __int64 v13; // rbx
  void *v14; // rdi

  if ( a2 == -1 )
  {
    v10 = a1[3];
    for ( i = a1 + 1; i != (_QWORD *)v10; v10 = std::_Rb_tree_increment(v10) )
    {
      v12 = *(_QWORD *)(v10 + 40);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
    v13 = a1[2];
    while ( v13 )
    {
      sub_4DD5F0(*(_QWORD **)(v13 + 24));
      v14 = (void *)v13;
      v13 = *(_QWORD *)(v13 + 16);
      operator delete(v14, 0x30u);
    }
    a1[2] = 0;
    a1[3] = i;
    a1[4] = i;
    a1[5] = 0;
  }
  else
  {
    v3 = (_QWORD *)a1[2];
    v4 = a1 + 1;
    if ( v3 )
    {
      v5 = a1 + 1;
      do
      {
        while ( 1 )
        {
          v6 = v3[2];
          v7 = v3[3];
          if ( v3[4] < a2 )
            break;
          v5 = v3;
          v3 = (_QWORD *)v3[2];
          if ( !v6 )
            goto LABEL_7;
        }
        v3 = (_QWORD *)v3[3];
      }
      while ( v7 );
LABEL_7:
      if ( v5 != v4 && a2 >= v5[4] )
      {
        v8 = v5[5];
        if ( v8 )
          (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a2, v7);
        v9 = (void *)std::_Rb_tree_rebalance_for_erase(v5, v4);
        operator delete(v9, 0x30u);
        --a1[5];
      }
    }
  }
}
