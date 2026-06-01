_QWORD *__fastcall sub_218BE0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  unsigned __int64 v10; // r12
  _QWORD *v11; // r13
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _BOOL8 v15; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rax
  bool v19; // zf

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
    goto LABEL_29;
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
LABEL_29:
    v18 = (_QWORD *)operator new(0x30u);
    v10 = *a2;
    v19 = a1[5] == 0;
    v18[5] = 0;
    v11 = v18;
    v18[4] = v10;
    if ( !v19 )
    {
      v13 = (_QWORD *)a1[4];
      v6 = nullptr;
      if ( v13[4] < v10 )
      {
LABEL_13:
        if ( v13 )
        {
          if ( v6 || v2 == v13 )
          {
            v15 = 1;
LABEL_17:
            v6 = v11;
            std::_Rb_tree_insert_and_rebalance(v15, v11, v13, v2);
            ++a1[5];
            return v6 + 5;
          }
          goto LABEL_27;
        }
        goto LABEL_20;
      }
    }
LABEL_31:
    v6 = sub_20AB40((__int64)a1, v10);
    goto LABEL_13;
  }
  if ( v5 >= v6[4] )
    return v6 + 5;
  v9 = (_QWORD *)operator new(0x30u);
  v10 = *a2;
  v9[5] = 0;
  v11 = v9;
  v9[4] = v10;
  v12 = v6[4];
  if ( v10 < v12 )
  {
    v13 = v6;
    if ( (_QWORD *)a1[3] == v6 )
      goto LABEL_13;
    v14 = std::_Rb_tree_decrement(v6);
    v13 = (_QWORD *)v14;
    if ( *(_QWORD *)(v14 + 32) < v10 )
    {
      if ( *(_QWORD *)(v14 + 24) )
        v13 = v6;
      else
        v6 = nullptr;
      goto LABEL_13;
    }
    goto LABEL_31;
  }
  if ( v12 < v10 )
  {
    if ( (_QWORD *)a1[4] == v6 )
    {
      v13 = v6;
      if ( v6 )
      {
LABEL_27:
        v12 = v13[4];
LABEL_28:
        v15 = v10 < v12;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v17 = std::_Rb_tree_increment(v6);
    v13 = (_QWORD *)v17;
    if ( v10 >= *(_QWORD *)(v17 + 32) )
      goto LABEL_31;
    if ( v6[3] )
    {
      v6 = (_QWORD *)v17;
      goto LABEL_13;
    }
    v13 = v6;
    if ( v6 )
      goto LABEL_28;
  }
LABEL_20:
  if ( v11 )
    operator delete(v11, 0x30u);
  return v6 + 5;
}
