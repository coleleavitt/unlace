void __fastcall sub_3E3B60(__int64 a1)
{
  unsigned __int64 v2; // r12
  char *v3; // r13
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // r14
  char *v9; // rax
  char *v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  void *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r13
  char v18; // al
  __int64 v19; // rbx
  void *v20; // rdi
  void *v21; // rax

  v2 = *(_QWORD *)(a1 + 2208);
  v3 = (char *)(a1 + 2224);
  *(_QWORD *)(a1 + 2208) = -1;
  v4 = v2;
  v5 = 2 * (*(_BYTE *)(a1 + 2264) == 1);
  v8 = (void *)sub_3C1F00((_QWORD *)a1, v2);
  v9 = *(char **)(a1 + 2232);
  if ( !v9 )
    goto LABEL_8;
  v10 = (char *)(a1 + 2224);
  do
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v9 + 2);
      v7 = *((_QWORD *)v9 + 3);
      if ( *((_QWORD *)v9 + 4) < (unsigned __int64)v8 )
        break;
      v10 = v9;
      v9 = *((char **)v9 + 2);
      if ( !v4 )
        goto LABEL_6;
    }
    v9 = *((char **)v9 + 3);
  }
  while ( v7 );
LABEL_6:
  if ( v3 == v10 || (unsigned __int64)v8 < *((_QWORD *)v10 + 4) )
  {
LABEL_8:
    if ( !v5 )
      goto LABEL_9;
    goto LABEL_27;
  }
  if ( v10[40] >= 0 )
    v5 |= 4u;
  v21 = (void *)std::_Rb_tree_rebalance_for_erase(v10, v3);
  v4 = 48;
  operator delete(v21, 0x30u);
  --*(_QWORD *)(a1 + 2256);
  if ( v5 )
  {
LABEL_27:
    v4 = v2;
    sub_3E2A00((_QWORD *)a1, v2, v8, v5);
  }
LABEL_9:
  for ( i = *(_QWORD *)(a1 + 2240); (char *)i != v3; i = std::_Rb_tree_increment(i, v2, v12, v13) )
  {
    while ( (*(_BYTE *)(i + 40) & 0xA0) != 0 )
    {
      i = std::_Rb_tree_increment(i, v4, v6, v7);
      if ( (char *)i == v3 )
        goto LABEL_14;
    }
    v4 = v2;
    sub_3E2A00((_QWORD *)a1, v2, *(void **)(i + 32), 0);
  }
LABEL_14:
  v14 = *(_QWORD *)(a1 + 2232);
  while ( v14 )
  {
    sub_3E1870(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    v4 = 48;
    operator delete(v15, 0x30u);
  }
  v16 = *(_QWORD *)(a1 + 2296);
  *(_QWORD *)(a1 + 2240) = v3;
  *(_QWORD *)(a1 + 2248) = v3;
  v17 = a1 + 2280;
  *(_QWORD *)(a1 + 2232) = 0;
  for ( *(_QWORD *)(a1 + 2256) = 0; v17 != v16; v16 = std::_Rb_tree_increment(v16, v4, v6, v7) )
  {
    v18 = *(_BYTE *)(v16 + 40);
    if ( (v18 & 0xA0) == 0 && (unsigned __int8)(v18 - 4) > 1u )
    {
      v4 = v2;
      sub_411F00(a1, v2, *(_QWORD *)(v16 + 32));
    }
  }
  v19 = *(_QWORD *)(a1 + 2288);
  while ( v19 )
  {
    sub_3E1870(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x30u);
  }
  *(_QWORD *)(a1 + 2288) = 0;
  *(_QWORD *)(a1 + 2296) = v17;
  *(_QWORD *)(a1 + 2304) = v17;
  *(_QWORD *)(a1 + 2312) = 0;
}
