_QWORD *__fastcall sub_ED1B90(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int64 v5; // rbp
  unsigned int v6; // r12d
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // al
  _BOOL8 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  char v17; // cl
  unsigned int v18; // edx
  _QWORD *v19; // rax
  char v20; // cl
  unsigned int v21; // edx
  __int64 v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rax
  char v26; // cl

  v5 = operator new(0x30u);
  v6 = **a3;
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 32) = v6;
  if ( a1 + 1 != (_QWORD *)a2 )
  {
    v7 = (_QWORD *)a2;
    if ( v6 < *(_DWORD *)(a2 + 32) )
    {
      v8 = (_QWORD *)a1[3];
      if ( v8 == (_QWORD *)a2 )
      {
LABEL_6:
        v10 = a2;
LABEL_7:
        v11 = v10 != 0;
LABEL_8:
        if ( a1 + 1 == v7 || v11 )
        {
          v12 = 1;
LABEL_11:
          std::_Rb_tree_insert_and_rebalance(v12, v5, v7, a1 + 1);
          ++a1[5];
          return (_QWORD *)v5;
        }
        goto LABEL_44;
      }
      v9 = std::_Rb_tree_decrement(a2);
      if ( v6 > *(_DWORD *)(v9 + 32) )
      {
        if ( *(_QWORD *)(v9 + 24) )
          goto LABEL_6;
LABEL_30:
        v7 = (_QWORD *)v9;
        v11 = 0;
        goto LABEL_8;
      }
      v7 = (_QWORD *)a1[2];
      if ( !v7 )
      {
        v7 = a1 + 1;
LABEL_38:
        if ( v8 != v7 )
        {
LABEL_39:
          v22 = std::_Rb_tree_decrement(v7);
          v23 = v7;
          v21 = *(_DWORD *)(v22 + 32);
          v7 = (_QWORD *)v22;
          goto LABEL_40;
        }
        v23 = v8;
LABEL_41:
        v7 = v23;
        goto LABEL_42;
      }
      while ( 1 )
      {
        v21 = *((_DWORD *)v7 + 8);
        if ( v6 < v21 )
        {
          v19 = (_QWORD *)v7[2];
          v20 = 1;
        }
        else
        {
          v19 = (_QWORD *)v7[3];
          v20 = 0;
        }
        if ( !v19 )
          break;
        v7 = v19;
      }
      v23 = v7;
      if ( v20 )
        goto LABEL_38;
LABEL_40:
      if ( v6 <= v21 )
        goto LABEL_20;
      goto LABEL_41;
    }
    if ( v6 <= *(_DWORD *)(a2 + 32) )
      goto LABEL_20;
    if ( a1[4] == a2 )
      goto LABEL_44;
    v14 = std::_Rb_tree_increment(a2, (const char *)a2);
    if ( v6 < *(_DWORD *)(v14 + 32) )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        v7 = (_QWORD *)v14;
        v12 = 1;
        goto LABEL_11;
      }
LABEL_44:
      v12 = v6 < *((_DWORD *)v7 + 8);
      goto LABEL_11;
    }
    v7 = (_QWORD *)a1[2];
    if ( v7 )
    {
      while ( 1 )
      {
        v21 = *((_DWORD *)v7 + 8);
        if ( v6 < v21 )
        {
          v25 = (_QWORD *)v7[2];
          v26 = 1;
        }
        else
        {
          v25 = (_QWORD *)v7[3];
          v26 = 0;
        }
        if ( !v25 )
          break;
        v7 = v25;
      }
      v23 = v7;
      if ( !v26 )
        goto LABEL_40;
    }
    else
    {
      v7 = a1 + 1;
    }
    if ( (_QWORD *)a1[3] != v7 )
      goto LABEL_39;
    v23 = v7;
    goto LABEL_41;
  }
  if ( a1[5] )
  {
    v9 = a1[4];
    if ( v6 > *(_DWORD *)(v9 + 32) )
      goto LABEL_30;
  }
  v15 = a1[2];
  if ( v15 )
  {
    while ( 1 )
    {
      v18 = *(_DWORD *)(v15 + 32);
      if ( v6 < v18 )
      {
        v16 = *(_QWORD *)(v15 + 16);
        v17 = 1;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 24);
        v17 = 0;
      }
      if ( !v16 )
        break;
      v15 = v16;
    }
    v7 = (_QWORD *)v15;
    if ( !v17 )
    {
LABEL_18:
      if ( v6 <= v18 )
      {
        v7 = (_QWORD *)v15;
        goto LABEL_20;
      }
      goto LABEL_42;
    }
  }
  else
  {
    v15 = a2;
  }
  if ( a1[3] != v15 )
  {
    v7 = (_QWORD *)v15;
    v24 = std::_Rb_tree_decrement(v15);
    v18 = *(_DWORD *)(v24 + 32);
    v15 = v24;
    goto LABEL_18;
  }
  v7 = (_QWORD *)v15;
LABEL_42:
  if ( v7 )
  {
    v10 = 0;
    goto LABEL_7;
  }
LABEL_20:
  operator delete((void *)v5);
  return v7;
}
