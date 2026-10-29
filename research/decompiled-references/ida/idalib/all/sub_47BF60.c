_QWORD *__fastcall sub_47BF60(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  _QWORD *v13; // r13
  unsigned __int64 v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _BOOL8 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // zf

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
    goto LABEL_26;
  v5 = *a2;
  v6 = v2;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < v5 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( v2 == v6 )
  {
LABEL_26:
    v20 = operator new(0x30u);
    v12 = *a2;
    v21 = a1[5] == 0;
    *(_DWORD *)(v20 + 40) = 0;
    v13 = (_QWORD *)v20;
    *(_QWORD *)(v20 + 32) = v12;
    if ( !v21 )
    {
      v15 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v15[4] < v12 )
      {
LABEL_13:
        if ( v15 )
        {
          if ( v6 || v2 == v15 )
          {
            v17 = 1;
LABEL_17:
            v6 = v13;
            std::_Rb_tree_insert_and_rebalance(v17, v13, v15, v2);
            ++a1[5];
            return v6 + 5;
          }
          v14 = v15[4];
LABEL_30:
          v17 = v12 < v14;
          goto LABEL_17;
        }
        goto LABEL_20;
      }
    }
LABEL_28:
    v6 = sub_47B900((__int64)a1, v12);
    goto LABEL_13;
  }
  if ( v5 >= v6[4] )
    return v6 + 5;
  v9 = operator new(0x30u);
  v12 = *a2;
  *(_DWORD *)(v9 + 40) = 0;
  v13 = (_QWORD *)v9;
  *(_QWORD *)(v9 + 32) = v12;
  v14 = v6[4];
  if ( v12 < v14 )
  {
    v15 = v6;
    if ( (_QWORD *)a1[3] == v6 )
      goto LABEL_13;
    v16 = std::_Rb_tree_decrement(v6);
    v15 = (_QWORD *)v16;
    if ( *(_QWORD *)(v16 + 32) < v12 )
    {
      if ( *(_QWORD *)(v16 + 24) )
        v15 = v6;
      else
        v6 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_28;
  }
  if ( v14 < v12 )
  {
    if ( (_QWORD *)a1[4] != v6 )
    {
      v19 = std::_Rb_tree_increment(v6, a2, v10, v11);
      v15 = (_QWORD *)v19;
      if ( v12 >= *(_QWORD *)(v19 + 32) )
        goto LABEL_28;
      if ( v6[3] )
      {
        v6 = (_QWORD *)v19;
        goto LABEL_13;
      }
    }
    v15 = v6;
    if ( v6 )
      goto LABEL_30;
  }
LABEL_20:
  if ( v13 )
    operator delete(v13, 0x30u);
  return v6 + 5;
}
