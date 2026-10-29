void __fastcall sub_3A91C0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdi
  char *v10; // rdi
  char *v11; // rdx
  __int64 v13; // rax
  void *v14; // rdi
  _QWORD *v15; // rbp
  void *v16; // rdi

  if ( (*(_BYTE *)(a1 + 68) & 0x18) != 0 || a2 == -1 )
    return;
  v3 = *(_QWORD *)(qword_2CA1698 + 1384);
  v4 = v3 + 120;
  v5 = v3 + 168;
  if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
    v5 = v4;
  v6 = *(_QWORD *)(v5 + 16);
  if ( !v6 )
    goto LABEL_27;
  v7 = v5 + 8;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) >= a2 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v9 )
        goto LABEL_10;
    }
    v7 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v8 );
LABEL_10:
  if ( v7 == v5 + 8 || a2 < *(_DWORD *)(v7 + 32) )
  {
LABEL_27:
    if ( !under_debugger )
      interr(40034);
LABEL_29:
    BUG();
  }
  v10 = *(char **)(v7 + 40);
  v11 = &v10[8 * *(_QWORD *)(v7 + 48)];
  if ( v10 == v11 )
    goto LABEL_25;
  while ( *(_QWORD *)v10 != a1 )
  {
    v10 += 8;
    if ( v11 == v10 )
      goto LABEL_25;
  }
  if ( v11 == v10 )
  {
LABEL_25:
    if ( !under_debugger )
      interr(40035);
    goto LABEL_29;
  }
  memmove(v10, v10 + 8, v11 - v10 - 8);
  if ( (*(_QWORD *)(v7 + 48))-- == 1 )
  {
    v13 = std::_Rb_tree_rebalance_for_erase();
    v14 = *(void **)(v13 + 64);
    v15 = (_QWORD *)v13;
    if ( v14 )
    {
      *(_QWORD *)(v13 + 72) = 0;
      qfree(v14);
    }
    v16 = (void *)v15[5];
    if ( v16 )
    {
      v15[6] = 0;
      qfree(v16);
    }
    operator delete(v15, 0x58u);
    --*(_QWORD *)(v5 + 40);
  }
}

