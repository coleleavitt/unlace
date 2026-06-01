__int64 __fastcall sub_10E0910(__int64 a1, int *a2)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // r8d
  _BOOL8 v11; // rdi

  v3 = operator new(0x30u);
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a1 + 8;
  v7 = v3;
  *(_DWORD *)(v3 + 32) = *a2;
  *(_QWORD *)(v3 + 40) = *((_QWORD *)a2 + 1);
  if ( !v5 )
  {
    v5 = a1 + 8;
    v11 = 1;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 32);
    if ( v9 <= v4 )
      break;
    v8 = *(_QWORD *)(v5 + 16);
    if ( !v8 )
      goto LABEL_7;
LABEL_4:
    v5 = v8;
  }
  v8 = *(_QWORD *)(v5 + 24);
  if ( v8 )
    goto LABEL_4;
LABEL_7:
  v11 = 1;
  if ( v6 != v5 )
    v11 = v9 > v4;
LABEL_9:
  std::_Rb_tree_insert_and_rebalance(v11, v3, v5, v6);
  ++*(_QWORD *)(a1 + 40);
  return v7;
}
