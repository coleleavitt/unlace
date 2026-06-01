__int64 __fastcall sub_7B1B60(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  char *v6; // rcx
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-60h]
  const char *ptr; // [rsp+10h] [rbp-58h]
  const char *v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[1] = (const char *)__readfsqword(0x28u);
  v18 = *(_QWORD *)(a1 + 5920) + 24 * a2;
  if ( *(_QWORD *)(v18 + 8) <= 1u )
  {
    if ( !under_debugger )
      interr(1724);
    BUG();
  }
  v20[0] = *(const char **)v18;
  ptr = v20[0];
  v4 = sub_7B1A70(a1 + 5944, v20);
  v6 = (char *)ptr;
  v7 = v5;
  v8 = (__int64)v4;
  if ( v4 == *(_QWORD **)(a1 + 5968) && v5 == (_QWORD *)(a1 + 5952) )
  {
    sub_7AEA40(*(_QWORD **)(a1 + 5960));
    *(_QWORD *)(a1 + 5960) = 0;
    *(_QWORD *)(a1 + 5968) = v7;
    *(_QWORD *)(a1 + 5976) = v7;
    *(_QWORD *)(a1 + 5984) = 0;
    v6 = *(char **)v18;
  }
  else if ( v5 != v4 )
  {
    do
    {
      v9 = v8;
      v8 = std::_Rb_tree_increment(v8);
      v10 = (void *)std::_Rb_tree_rebalance_for_erase(v9, a1 + 5952);
      operator delete(v10, 0x30u);
      --*(_QWORD *)(a1 + 5984);
    }
    while ( v7 != (_QWORD *)v8 );
    v6 = *(char **)v18;
  }
  if ( v6 )
  {
    *(_QWORD *)(v18 + 8) = 0;
    qfree(v6);
    *(_QWORD *)v18 = 0;
    *(_QWORD *)(v18 + 16) = 0;
  }
  if ( a2 + 1 == *(_QWORD *)(a1 + 5928) )
  {
    if ( a2 != -1 )
    {
      v15 = *(_QWORD *)(a1 + 5920);
      *(_QWORD *)(a1 + 5928) = a2;
      v16 = v15 + 24 * a2;
      v17 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)(v16 + 8) = 0;
        qfree(v17);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 6000);
    v12 = *(_QWORD *)(a1 + 5992);
    if ( *(_QWORD *)(a1 + 6008) < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 5992, v12, v11 + 1, 4);
      *(_QWORD *)(a1 + 5992) = v14;
      v12 = v14;
      v11 = *(_QWORD *)(a1 + 6000);
    }
    *(_DWORD *)(v12 + 4 * v11) = a2;
    ++*(_QWORD *)(a1 + 6000);
  }
  return netnode_delblob(*(_QWORD *)(a1 + 5896), a2 << 8, 83);
}
