__int64 __fastcall sub_EADE50(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int64 v4; // rbp
  unsigned int v5; // r12d
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  char v12; // cl
  unsigned int v13; // edx
  _QWORD *v14; // rax
  char v15; // cl
  unsigned int v16; // edx
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21; // cl

  v4 = operator new(0x30u);
  v5 = **a3;
  *(_QWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 32) = v5;
  if ( a1 + 1 != (_QWORD *)a2 )
  {
    v6 = (_QWORD *)a2;
    if ( v5 < *(_DWORD *)(a2 + 32) )
    {
      v7 = (_QWORD *)a1[3];
      if ( v7 == (_QWORD *)a2 )
        goto LABEL_5;
      v8 = std::_Rb_tree_decrement();
      if ( v5 > *(_DWORD *)(v8 + 32) )
        goto LABEL_5;
      v6 = (_QWORD *)a1[2];
      if ( !v6 )
      {
        v6 = a1 + 1;
LABEL_31:
        if ( v7 != v6 )
        {
LABEL_32:
          v17 = std::_Rb_tree_decrement();
          v18 = v6;
          v16 = *(_DWORD *)(v17 + 32);
          v6 = (_QWORD *)v17;
          goto LABEL_33;
        }
        v18 = v7;
LABEL_34:
        v6 = v18;
        goto LABEL_35;
      }
      while ( 1 )
      {
        v16 = *((_DWORD *)v6 + 8);
        if ( v5 < v16 )
        {
          v14 = (_QWORD *)v6[2];
          v15 = 1;
        }
        else
        {
          v14 = (_QWORD *)v6[3];
          v15 = 0;
        }
        if ( !v14 )
          break;
        v6 = v14;
      }
      v18 = v6;
      if ( v15 )
        goto LABEL_31;
LABEL_33:
      if ( v5 <= v16 )
        goto LABEL_13;
      goto LABEL_34;
    }
    if ( v5 <= *(_DWORD *)(a2 + 32) )
      goto LABEL_13;
    if ( a1[4] == a2 || v5 < *(_DWORD *)(std::_Rb_tree_increment() + 32) )
      goto LABEL_5;
    v6 = (_QWORD *)a1[2];
    if ( v6 )
    {
      while ( 1 )
      {
        v16 = *((_DWORD *)v6 + 8);
        if ( v5 < v16 )
        {
          v20 = (_QWORD *)v6[2];
          v21 = 1;
        }
        else
        {
          v20 = (_QWORD *)v6[3];
          v21 = 0;
        }
        if ( !v20 )
          break;
        v6 = v20;
      }
      v18 = v6;
      if ( !v21 )
        goto LABEL_33;
    }
    else
    {
      v6 = a1 + 1;
    }
    if ( (_QWORD *)a1[3] != v6 )
      goto LABEL_32;
    v18 = v6;
    goto LABEL_34;
  }
  if ( a1[5] && v5 > *(_DWORD *)(a1[4] + 32LL) )
    goto LABEL_5;
  v10 = a1[2];
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v10 + 32);
      if ( v5 < v13 )
      {
        v11 = *(_QWORD *)(v10 + 16);
        v12 = 1;
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 24);
        v12 = 0;
      }
      if ( !v11 )
        break;
      v10 = v11;
    }
    v6 = (_QWORD *)v10;
    if ( !v12 )
    {
LABEL_11:
      if ( v5 <= v13 )
      {
        v6 = (_QWORD *)v10;
        goto LABEL_13;
      }
      goto LABEL_35;
    }
  }
  else
  {
    v10 = a2;
  }
  if ( a1[3] != v10 )
  {
    v6 = (_QWORD *)v10;
    v19 = std::_Rb_tree_decrement();
    v13 = *(_DWORD *)(v19 + 32);
    v10 = v19;
    goto LABEL_11;
  }
  v6 = (_QWORD *)v10;
LABEL_35:
  if ( v6 )
  {
LABEL_5:
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_13:
  operator delete((void *)v4);
  return (__int64)v6;
}

