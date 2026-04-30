__int64 __fastcall simple_edge_typer_t__::vfunc_1(_QWORD *a1, int a2, int a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  int *v9; // rax
  int *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  _BOOL8 v13; // rdi

  v3 = a1 + 2;
  v6 = (__int64)(a1 + 2);
  v7 = a1[3];
  if ( !v7 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      if ( a2 > *(_DWORD *)(v7 + 32) )
      {
        v7 = *(_QWORD *)(v7 + 24);
        goto LABEL_7;
      }
      if ( a2 == *(_DWORD *)(v7 + 32) && a3 > *(_DWORD *)(v7 + 36) )
        break;
      v6 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(v7 + 24);
LABEL_7:
    ;
  }
  while ( v7 );
LABEL_8:
  if ( v3 == (_QWORD *)v6 || a2 < *(_DWORD *)(v6 + 32) || a2 == *(_DWORD *)(v6 + 32) && a3 < *(_DWORD *)(v6 + 36) )
  {
LABEL_15:
    v9 = (int *)operator new(0x30u);
    v9[8] = a2;
    v10 = v9;
    v9[9] = a3;
    v9[10] = 0;
    v11 = sub_2A0300(a1 + 1, v6, v9 + 8);
    v6 = v11;
    if ( v12 )
    {
      v13 = 1;
      if ( v3 != (_QWORD *)v12 && !v11 && a2 >= *(_DWORD *)(v12 + 32) )
      {
        v13 = 0;
        if ( a2 == *(_DWORD *)(v12 + 32) )
          v13 = a3 < *(_DWORD *)(v12 + 36);
      }
      v6 = (__int64)v10;
      std::_Rb_tree_insert_and_rebalance(v13, v10, v12, v3);
      ++a1[6];
    }
    else if ( v10 )
    {
      operator delete(v10, 0x30u);
    }
  }
  return v6 + 40;
}
