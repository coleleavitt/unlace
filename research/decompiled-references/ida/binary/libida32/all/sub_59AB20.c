void __fastcall sub_59AB20(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // esi
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  bool v16; // al
  _QWORD *i; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  void *v20; // rax

  v4 = switch_dbctx(*(int *)(a1 + 8));
  v5 = *(_QWORD **)(a1 + 56);
  if ( !v5 )
    goto LABEL_36;
  v6 = (_QWORD *)(a1 + 48);
  v7 = *(_QWORD **)(a1 + 56);
  v8 = (_QWORD *)(a1 + 48);
  do
  {
    while ( 1 )
    {
      v9 = v7[2];
      v10 = v7[3];
      if ( v7[4] >= (unsigned __int64)(unsigned int)a2 )
        break;
      v7 = (_QWORD *)v7[3];
      if ( !v10 )
        goto LABEL_6;
    }
    v8 = v7;
    v7 = (_QWORD *)v7[2];
  }
  while ( v9 );
LABEL_6:
  if ( v8 == v6 || (unsigned __int64)(unsigned int)a2 < v8[4] )
LABEL_36:
    sub_599470();
  v11 = *((_DWORD *)v8 + 10);
  if ( v11 == -1 || (sub_59A900(*(_QWORD **)(v4 + 1480), v11, v11 + 1), (v5 = *(_QWORD **)(a1 + 56)) != nullptr) )
  {
    v12 = v5;
    v13 = (_QWORD *)(a1 + 48);
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v5[4];
        if ( v14 >= a2 )
          break;
        v5 = (_QWORD *)v5[3];
        if ( !v5 )
          goto LABEL_14;
      }
      v15 = (_QWORD *)v5[2];
      if ( a2 >= v14 )
        break;
      v13 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v15 )
      {
LABEL_14:
        v16 = v6 == v13;
        goto LABEL_15;
      }
    }
    for ( i = (_QWORD *)v5[3]; i; i = (_QWORD *)i[2] )
    {
      while ( 1 )
      {
        v18 = i[3];
        if ( a2 < i[4] )
          break;
        i = (_QWORD *)i[3];
        if ( !v18 )
          goto LABEL_25;
      }
      v13 = i;
    }
LABEL_25:
    while ( v15 )
    {
      while ( 1 )
      {
        v19 = v15[3];
        if ( v15[4] >= a2 )
          break;
        v15 = (_QWORD *)v15[3];
        if ( !v19 )
          goto LABEL_28;
      }
      v5 = v15;
      v15 = (_QWORD *)v15[2];
    }
LABEL_28:
    if ( *(_QWORD **)(a1 + 64) != v5 )
      goto LABEL_32;
    if ( v6 == v13 )
      goto LABEL_17;
    while ( v5 != v13 )
    {
      v5 = (_QWORD *)std::_Rb_tree_increment();
      v20 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v20, 0x30u);
      --*(_QWORD *)(a1 + 80);
LABEL_32:
      ;
    }
  }
  else
  {
    v12 = nullptr;
    v13 = (_QWORD *)(a1 + 48);
    v16 = 1;
LABEL_15:
    if ( *(_QWORD **)(a1 + 64) == v13 && v16 )
    {
LABEL_17:
      sub_599A10(v12);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 64) = v6;
      *(_QWORD *)(a1 + 72) = v6;
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
}

