__int64 __fastcall sub_593AC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // r13d
  void *v7; // r12
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  v5 = operator new(0x30u);
  v6 = *(_DWORD *)a3;
  v7 = (void *)v5;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)a3;
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(a3 + 8);
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v4 = 0;
      if ( v6 > *(_DWORD *)(v9 + 32) )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_58DAC0((__int64)a1, v6);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a2 + 32);
  if ( v6 < v8 )
  {
    v9 = a1[3];
    if ( a2 == v9 )
      goto LABEL_6;
    v10 = std::_Rb_tree_decrement();
    v9 = v10;
    if ( v6 <= *(_DWORD *)(v10 + 32) )
      goto LABEL_5;
    if ( *(_QWORD *)(v10 + 24) )
    {
      v9 = a2;
      goto LABEL_6;
    }
    goto LABEL_23;
  }
  if ( v6 <= v8 )
    goto LABEL_14;
  v9 = a1[4];
  if ( a2 == v9 )
  {
LABEL_23:
    v4 = 0;
    goto LABEL_6;
  }
  v11 = std::_Rb_tree_increment();
  v9 = v11;
  if ( v6 >= *(_DWORD *)(v11 + 32) )
    goto LABEL_5;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    if ( a2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v4 = v11;
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v4 = (__int64)v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v7 )
    operator delete(v7, 0x30u);
  return v4;
}

