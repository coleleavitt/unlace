__int64 __fastcall sub_5ADC80(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r13d
  void *v9; // r12
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  _BOOL8 v13; // rdi
  __int64 v14; // rax

  v5 = a2;
  v6 = operator new(0x30u);
  v8 = *(_DWORD *)a3;
  v9 = (void *)v6;
  *(_DWORD *)(v6 + 32) = *(_DWORD *)a3;
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(a3 + 8);
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v11 = a1[4];
      v5 = 0;
      if ( v8 > *(_DWORD *)(v11 + 32) )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_5A7C80((__int64)a1, v8);
    goto LABEL_6;
  }
  v10 = *(_DWORD *)(a2 + 32);
  if ( v8 < v10 )
  {
    v11 = a1[3];
    if ( a2 == v11 )
      goto LABEL_6;
    v12 = std::_Rb_tree_decrement(a2);
    v11 = v12;
    if ( v8 <= *(_DWORD *)(v12 + 32) )
      goto LABEL_5;
    if ( *(_QWORD *)(v12 + 24) )
    {
      v11 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  if ( v8 <= v10 )
    goto LABEL_17;
  v11 = a1[4];
  if ( a2 == v11 )
  {
LABEL_27:
    v5 = 0;
    goto LABEL_6;
  }
  v14 = std::_Rb_tree_increment(a2, a2, v11, v7);
  v11 = v14;
  if ( v8 >= *(_DWORD *)(v14 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v11 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v5 = v14;
LABEL_6:
  if ( v11 )
  {
    if ( a1 + 1 == (_QWORD *)v11 || v5 )
    {
      v13 = 1;
LABEL_10:
      v5 = (__int64)v9;
      std::_Rb_tree_insert_and_rebalance(v13, v9, v11, a1 + 1);
      ++a1[5];
      return v5;
    }
    v10 = *(_DWORD *)(v11 + 32);
LABEL_26:
    v13 = v8 < v10;
    goto LABEL_10;
  }
LABEL_17:
  if ( v9 )
    operator delete(v9, 0x30u);
  return v5;
}
