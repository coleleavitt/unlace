void __fastcall sub_5AB390(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // r8
  _QWORD *v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  bool v9; // al
  __int64 i; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  void *v13; // rax

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v5 = a1 + 1;
  if ( v4 )
  {
    v6 = a1[2];
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 32);
        if ( v7 >= a2 )
          break;
        v6 = *(_QWORD *)(v6 + 24);
        if ( !v6 )
          goto LABEL_7;
      }
      v8 = *(_QWORD *)(v6 + 16);
      if ( a2 >= v7 )
        break;
      v5 = (_QWORD *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v8 )
      {
LABEL_7:
        v9 = v3 == v5;
        goto LABEL_8;
      }
    }
    for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(i + 24);
        if ( a2 < *(_DWORD *)(i + 32) )
          break;
        i = *(_QWORD *)(i + 24);
        if ( !v11 )
          goto LABEL_16;
      }
      v5 = (_QWORD *)i;
    }
LABEL_16:
    while ( v8 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v8 + 24);
        if ( *(_DWORD *)(v8 + 32) >= a2 )
          break;
        v8 = *(_QWORD *)(v8 + 24);
        if ( !v12 )
          goto LABEL_19;
      }
      v6 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
LABEL_19:
    if ( a1[3] != v6 )
      goto LABEL_23;
    if ( v5 != v3 )
    {
      while ( v5 != (_QWORD *)v6 )
      {
        v6 = std::_Rb_tree_increment();
        v13 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v13, 0x28u);
        --a1[5];
LABEL_23:
        ;
      }
      return;
    }
LABEL_10:
    sub_5AB1C0(v4);
    a1[2] = 0;
    a1[3] = v3;
    a1[4] = v3;
    a1[5] = 0;
    return;
  }
  v9 = 1;
LABEL_8:
  if ( (_QWORD *)a1[3] == v5 && v9 )
    goto LABEL_10;
}

