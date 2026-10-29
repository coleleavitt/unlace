__int64 __fastcall sub_A3B0(_QWORD *a1, __int64 a2, int *a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  int v7; // r14d
  void *v8; // r12
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax

  v5 = a2;
  v6 = (_QWORD *)operator new(0x28u);
  v7 = *a3;
  v8 = v6;
  v6[4] = *(_QWORD *)a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v10 = a1[4];
      v5 = 0;
      if ( v7 > *(_DWORD *)(v10 + 32) )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_4360((__int64)a1, v7);
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a2 + 32);
  if ( v7 < v9 )
  {
    v10 = a1[3];
    if ( a2 == v10 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2);
    v10 = v11;
    if ( v7 <= *(_DWORD *)(v11 + 32) )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
    {
      v10 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v7 <= v9 )
    goto LABEL_17;
  v10 = a1[4];
  if ( a2 == v10 )
  {
LABEL_27:
    v5 = 0;
    goto LABEL_6;
  }
  v13 = std::_Rb_tree_increment(a2);
  v10 = v13;
  if ( v7 >= *(_DWORD *)(v13 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v10 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = v13;
LABEL_6:
  if ( v10 )
  {
    if ( a1 + 1 == (_QWORD *)v10 || v5 )
    {
      v12 = 1;
LABEL_10:
      v5 = (__int64)v8;
      std::_Rb_tree_insert_and_rebalance(v12, v8, v10, a1 + 1);
      ++a1[5];
      return v5;
    }
    v9 = *(_DWORD *)(v10 + 32);
LABEL_26:
    v12 = v7 < v9;
    goto LABEL_10;
  }
LABEL_17:
  if ( v8 )
    operator delete(v8, 0x28u);
  return v5;
}

