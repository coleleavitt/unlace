void __fastcall sub_20F4C0(_QWORD *a1, int a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  void *v9; // r14
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+4h] [rbp-6Ch]

  v2 = a1 + 23;
  v4 = (__int64)(a1 + 23);
  v5 = a1[24];
  if ( !v5 )
    goto LABEL_26;
  do
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = *(_QWORD *)(v5 + 24);
      if ( a2 > *(_DWORD *)(v5 + 32) )
        break;
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v6 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v7 );
LABEL_6:
  if ( v2 == (_QWORD *)v4 )
  {
LABEL_26:
    v15 = operator new(0x40u);
    *(_DWORD *)(v15 + 32) = a2;
    v9 = (void *)v15;
    *(_QWORD *)(v15 + 40) = 0;
    *(_OWORD *)(v15 + 48) = 0;
    if ( a1[27] )
    {
      v11 = a1[26];
      v4 = 0;
      if ( a2 > *(_DWORD *)(v11 + 32) )
        goto LABEL_13;
    }
    goto LABEL_28;
  }
  if ( a2 >= *(_DWORD *)(v4 + 32) )
    return;
  v8 = operator new(0x40u);
  *(_DWORD *)(v8 + 32) = a2;
  v9 = (void *)v8;
  *(_QWORD *)(v8 + 40) = 0;
  *(_OWORD *)(v8 + 48) = 0;
  v10 = *(_DWORD *)(v4 + 32);
  if ( a2 >= v10 )
  {
    if ( a2 <= v10 )
      goto LABEL_20;
    if ( a1[26] == v4 )
      goto LABEL_31;
    v16 = *(_DWORD *)(v4 + 32);
    v14 = std::_Rb_tree_increment(v4);
    v11 = v14;
    if ( a2 < *(_DWORD *)(v14 + 32) )
    {
      v10 = v16;
      if ( *(_QWORD *)(v4 + 24) )
      {
        v4 = v14;
        goto LABEL_13;
      }
LABEL_31:
      v11 = v4;
      if ( v4 )
        goto LABEL_30;
      goto LABEL_20;
    }
LABEL_28:
    v4 = sub_20ACC0((__int64)(a1 + 22), a2);
    goto LABEL_13;
  }
  v11 = v4;
  if ( a1[25] == v4 )
    goto LABEL_13;
  v12 = std::_Rb_tree_decrement(v4);
  v11 = v12;
  if ( a2 <= *(_DWORD *)(v12 + 32) )
    goto LABEL_28;
  if ( *(_QWORD *)(v12 + 24) )
    v11 = v4;
  else
    v4 = 0;
LABEL_13:
  if ( v11 )
  {
    if ( (_QWORD *)v11 == v2 || v4 )
    {
      v13 = 1;
LABEL_17:
      std::_Rb_tree_insert_and_rebalance(v13, v9, v11, v2);
      ++a1[27];
      return;
    }
    v10 = *(_DWORD *)(v11 + 32);
LABEL_30:
    v13 = a2 < v10;
    goto LABEL_17;
  }
LABEL_20:
  if ( v9 )
    operator delete(v9, 0x40u);
}
