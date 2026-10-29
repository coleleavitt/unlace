__int64 __fastcall sub_790080(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  char *v6; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  const char *ptr; // [rsp+8h] [rbp-50h]
  const char *v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = (const char *)__readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 5888) + 24LL * a2;
  if ( *(_QWORD *)(v2 + 8) <= 1u )
  {
    if ( !under_debugger )
      interr(1724);
    BUG();
  }
  v21[0] = *(const char **)v2;
  ptr = v21[0];
  v4 = sub_78FF90(a1 + 5912, v21);
  v6 = (char *)ptr;
  v7 = v5;
  if ( v4 == *(_QWORD **)(a1 + 5936) && v5 == (_QWORD *)(a1 + 5920) )
  {
    sub_78E370(*(_QWORD **)(a1 + 5928));
    *(_QWORD *)(a1 + 5936) = v7;
    *(_QWORD *)(a1 + 5928) = 0;
    *(_QWORD *)(a1 + 5944) = v7;
    *(_QWORD *)(a1 + 5952) = 0;
    v6 = *(char **)v2;
  }
  else if ( v5 != v4 )
  {
    do
    {
      v8 = std::_Rb_tree_increment();
      v9 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v9, 0x30u);
      --*(_QWORD *)(a1 + 5952);
    }
    while ( v7 != (_QWORD *)v8 );
    v6 = *(char **)v2;
  }
  if ( v6 )
  {
    *(_QWORD *)(v2 + 8) = 0;
    qfree(v6);
    *(_QWORD *)v2 = 0;
    *(_QWORD *)(v2 + 16) = 0;
  }
  v10 = a2 + 1;
  if ( v10 == *(_QWORD *)(a1 + 5896) )
  {
    if ( a2 != -1 )
    {
      v15 = v10 - 1;
      v16 = *(_QWORD *)(a1 + 5888);
      *(_QWORD *)(a1 + 5896) = v15;
      v17 = v16 + 24 * v15;
      v18 = *(void **)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)(v17 + 8) = 0;
        qfree(v18);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 5968);
    v12 = *(_QWORD *)(a1 + 5960);
    if ( *(_QWORD *)(a1 + 5976) < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 5960, v12, v11 + 1, 4);
      *(_QWORD *)(a1 + 5960) = v14;
      v12 = v14;
      v11 = *(_QWORD *)(a1 + 5968);
    }
    *(_DWORD *)(v12 + 4 * v11) = a2;
    ++*(_QWORD *)(a1 + 5968);
  }
  return netnode_delblob(*(unsigned int *)(a1 + 5876), a2 << 8, 83);
}

