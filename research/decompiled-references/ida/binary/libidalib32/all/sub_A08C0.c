void __fastcall sub_A08C0(_QWORD *a1, int a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // r14
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = a1 + 23;
  v3 = a1[24];
  if ( !v3 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      v5 = *(_QWORD *)(v3 + 24);
      if ( a2 > *(_DWORD *)(v3 + 32) )
        break;
      v2 = (_QWORD *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
    v3 = *(_QWORD *)(v3 + 24);
  }
  while ( v5 );
LABEL_6:
  if ( a1 + 23 == v2 )
  {
LABEL_23:
    v11 = operator new(0x40u);
    *(_DWORD *)(v11 + 32) = a2;
    v7 = (void *)v11;
    *(_QWORD *)(v11 + 40) = 0;
    *(_OWORD *)(v11 + 48) = 0;
    if ( a1[27] )
    {
      v9 = a1[26];
      if ( a2 > *(_DWORD *)(v9 + 32) )
        goto LABEL_13;
    }
    goto LABEL_25;
  }
  if ( a2 >= *((_DWORD *)v2 + 8) )
    return;
  v6 = operator new(0x40u);
  *(_DWORD *)(v6 + 32) = a2;
  v7 = (void *)v6;
  *(_QWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  v8 = *((_DWORD *)v2 + 8);
  if ( a2 >= v8 )
  {
    if ( a2 <= v8 )
      goto LABEL_17;
    if ( (_QWORD *)a1[26] == v2 )
      goto LABEL_27;
    v9 = std::_Rb_tree_increment();
    if ( a2 < *(_DWORD *)(v9 + 32) )
    {
      if ( v2[3] )
        goto LABEL_13;
LABEL_27:
      if ( v2 )
        goto LABEL_14;
      goto LABEL_17;
    }
LABEL_25:
    sub_9BC00((__int64)(a1 + 22), a2);
    goto LABEL_13;
  }
  v9 = (__int64)v2;
  if ( (_QWORD *)a1[25] == v2 )
    goto LABEL_13;
  v10 = std::_Rb_tree_decrement();
  v9 = v10;
  if ( a2 <= *(_DWORD *)(v10 + 32) )
    goto LABEL_25;
  if ( *(_QWORD *)(v10 + 24) )
    v9 = (__int64)v2;
LABEL_13:
  if ( v9 )
  {
LABEL_14:
    std::_Rb_tree_insert_and_rebalance();
    ++a1[27];
    return;
  }
LABEL_17:
  if ( v7 )
    operator delete(v7, 0x40u);
}

