void __fastcall sub_3DDEA0(__int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // r13
  int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 i; // rbx
  __int64 v11; // rbx
  void *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // r13
  char v15; // al
  __int64 v16; // rbx
  void *v17; // rdi
  void *v18; // rax

  v2 = *(_DWORD *)(a1 + 2120);
  v3 = a1 + 2136;
  *(_DWORD *)(a1 + 2120) = -1;
  v4 = 2 * (*(_BYTE *)(a1 + 2176) == 1);
  v5 = sub_3BCF60(a1, v2);
  v6 = *(_QWORD *)(a1 + 2144);
  if ( !v6 )
    goto LABEL_8;
  v7 = a1 + 2136;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) < v5 )
        break;
      v7 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v9 );
LABEL_6:
  if ( v3 == v7 || v5 < *(_DWORD *)(v7 + 32) )
  {
LABEL_8:
    if ( !v4 )
      goto LABEL_9;
    goto LABEL_27;
  }
  if ( *(char *)(v7 + 36) >= 0 )
    v4 |= 4u;
  v18 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v18, 0x28u);
  --*(_QWORD *)(a1 + 2168);
  if ( v4 )
LABEL_27:
    sub_3DCE60((_QWORD *)a1, v2, v5, v4);
LABEL_9:
  for ( i = *(_QWORD *)(a1 + 2152); i != v3; i = std::_Rb_tree_increment() )
  {
    while ( (*(_BYTE *)(i + 36) & 0xA0) != 0 )
    {
      i = std::_Rb_tree_increment();
      if ( i == v3 )
        goto LABEL_14;
    }
    sub_3DCE60((_QWORD *)a1, v2, *(unsigned int *)(i + 32), 0);
  }
LABEL_14:
  v11 = *(_QWORD *)(a1 + 2144);
  while ( v11 )
  {
    sub_3DBA60(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  v13 = *(_QWORD *)(a1 + 2208);
  *(_QWORD *)(a1 + 2152) = v3;
  *(_QWORD *)(a1 + 2160) = v3;
  v14 = a1 + 2192;
  *(_QWORD *)(a1 + 2144) = 0;
  for ( *(_QWORD *)(a1 + 2168) = 0; v14 != v13; v13 = std::_Rb_tree_increment() )
  {
    v15 = *(_BYTE *)(v13 + 36);
    if ( (v15 & 0xA0) == 0 && (unsigned __int8)(v15 - 4) > 1u )
      sub_3FEBE0(a1, v2, *(unsigned int *)(v13 + 32));
  }
  v16 = *(_QWORD *)(a1 + 2200);
  while ( v16 )
  {
    sub_3DBA60(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x28u);
  }
  *(_QWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = v14;
  *(_QWORD *)(a1 + 2216) = v14;
  *(_QWORD *)(a1 + 2224) = 0;
}

