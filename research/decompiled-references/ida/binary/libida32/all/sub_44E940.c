void __fastcall sub_44E940(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r13
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *i; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  void *v18; // rdi
  _QWORD *v19; // rbp
  void *v20; // rdi

  v2 = (_QWORD *)a1[7];
  if ( !v2 )
    goto LABEL_36;
  v3 = a1 + 6;
  v5 = (_QWORD *)a1[7];
  v6 = a1 + 6;
  do
  {
    while ( 1 )
    {
      v7 = v5[2];
      v8 = v5[3];
      if ( v5[4] >= a2 )
        break;
      v5 = (_QWORD *)v5[3];
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = v5;
    v5 = (_QWORD *)v5[2];
  }
  while ( v7 );
LABEL_6:
  if ( v3 == v6 || a2 < v6[4] )
  {
LABEL_36:
    if ( !under_debugger )
      interr(2452);
    BUG();
  }
  v9 = *((unsigned int *)v6 + 10);
  v10 = v3;
  v11 = v2;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v11[4];
      if ( v12 >= v9 )
        break;
      v11 = (_QWORD *)v11[3];
      if ( !v11 )
        goto LABEL_13;
    }
    v13 = (_QWORD *)v11[2];
    if ( v9 >= v12 )
      break;
    v10 = v11;
    v11 = (_QWORD *)v11[2];
    if ( !v13 )
    {
LABEL_13:
      if ( (_QWORD *)a1[8] == v10 && v3 == v10 )
      {
LABEL_15:
        sub_44E880(v2);
        a1[8] = v3;
        a1[7] = 0;
        a1[9] = v3;
        a1[10] = 0;
        return;
      }
      return;
    }
  }
  for ( i = (_QWORD *)v11[3]; i; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      v15 = i[3];
      if ( v9 < i[4] )
        break;
      i = (_QWORD *)i[3];
      if ( !v15 )
        goto LABEL_21;
    }
    v10 = i;
  }
LABEL_21:
  while ( v13 )
  {
    while ( 1 )
    {
      v16 = v13[3];
      if ( v13[4] >= v9 )
        break;
      v13 = (_QWORD *)v13[3];
      if ( !v16 )
        goto LABEL_24;
    }
    v11 = v13;
    v13 = (_QWORD *)v13[2];
  }
LABEL_24:
  if ( (_QWORD *)a1[8] != v11 )
    goto LABEL_32;
  if ( v10 == v3 )
    goto LABEL_15;
  while ( v10 != v11 )
  {
    v11 = (_QWORD *)std::_Rb_tree_increment();
    v17 = std::_Rb_tree_rebalance_for_erase();
    v18 = *(void **)(v17 + 72);
    v19 = (_QWORD *)v17;
    if ( v18 )
    {
      *(_QWORD *)(v17 + 80) = 0;
      qfree(v18);
    }
    v20 = (void *)v19[6];
    if ( v20 )
    {
      v19[7] = 0;
      qfree(v20);
    }
    operator delete(v19, 0x60u);
    --a1[10];
LABEL_32:
    ;
  }
}

