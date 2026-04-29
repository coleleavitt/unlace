_QWORD *__fastcall sub_11B60(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  _BOOL8 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v6 = a3 + 1;
  v7 = (_QWORD *)operator new(0x1E0u);
  v7[4] = *a3;
  sub_10BE0((__int64)(v7 + 5), (__int64)(a3 + 1));
  v11 = v7[4];
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v8 = a1[4];
      a2 = nullptr;
      if ( *(_QWORD *)(v8 + 32) < v11 )
        goto LABEL_6;
    }
LABEL_5:
    a2 = sub_C840((__int64)a1, v11, v8, v9, v10);
    goto LABEL_6;
  }
  v12 = a2[4];
  if ( v11 < v12 )
  {
    v8 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v13 = std::_Rb_tree_decrement(a2, v6, a2, v12, v10);
    v8 = v13;
    if ( *(_QWORD *)(v13 + 32) >= v11 )
      goto LABEL_5;
    if ( *(_QWORD *)(v13 + 24) )
      v8 = (unsigned __int64)a2;
    else
      a2 = nullptr;
LABEL_6:
    if ( v8 )
    {
      if ( a1 + 1 == (_QWORD *)v8 || a2 )
      {
        v14 = 1;
LABEL_10:
        a2 = v7;
        std::_Rb_tree_insert_and_rebalance(v14, v7, v8, a1 + 1);
        ++a1[5];
        return a2;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  v18 = a2[4];
  if ( v12 >= v11 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v15 = std::_Rb_tree_increment(a2);
    v8 = v15;
    if ( v11 < *(_QWORD *)(v15 + 32) )
    {
      v16 = v18;
      if ( !a2[3] )
      {
        v8 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      a2 = (_QWORD *)v15;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_25:
    v16 = *(_QWORD *)(v8 + 32);
LABEL_26:
    v14 = v11 < v16;
    goto LABEL_10;
  }
LABEL_17:
  if ( v7 )
  {
    sub_E270((__int64)(v7 + 5));
    operator delete(v7, 0x1E0u);
  }
  return a2;
}
