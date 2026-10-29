_QWORD *__fastcall sub_35C600(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v5 = a2;
  v7 = operator new(0x1E0u);
  v8 = **a3;
  *(_QWORD *)(v7 + 32) = v8;
  memset((void *)(v7 + 40), 0, 0x1B8u);
  *(_BYTE *)(v7 + 96) = 1;
  *(_QWORD *)(v7 + 400) = -1;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v10 = (_QWORD *)a1[4];
      v5 = nullptr;
      if ( v10[4] < v8 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_35C540((__int64)a1, v8);
    goto LABEL_6;
  }
  v9 = a2[4];
  if ( v8 < v9 )
  {
    v10 = a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2);
    v10 = (_QWORD *)v11;
    if ( *(_QWORD *)(v11 + 32) >= v8 )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
      v10 = a2;
    else
      v5 = nullptr;
LABEL_6:
    if ( v10 )
    {
      if ( a1 + 1 == v10 || v5 )
      {
        v12 = 1;
LABEL_10:
        v5 = (_QWORD *)v7;
        std::_Rb_tree_insert_and_rebalance(v12, v7, v10, a1 + 1);
        ++a1[5];
        return v5;
      }
      goto LABEL_25;
    }
    goto LABEL_17;
  }
  v16 = a2[4];
  if ( v9 >= v8 )
    goto LABEL_17;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v13 = std::_Rb_tree_increment(a2, a2, v6, v9);
    v10 = (_QWORD *)v13;
    if ( v8 < *(_QWORD *)(v13 + 32) )
    {
      v14 = v16;
      if ( !a2[3] )
      {
        v10 = a2;
        if ( a2 )
          goto LABEL_26;
        goto LABEL_17;
      }
      v5 = (_QWORD *)v13;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = a2;
  if ( a2 )
  {
LABEL_25:
    v14 = v10[4];
LABEL_26:
    v12 = v8 < v14;
    goto LABEL_10;
  }
LABEL_17:
  if ( v7 )
  {
    clear_tinfo_t(v7 + 40);
    operator delete((void *)v7, 0x1E0u);
  }
  return v5;
}
