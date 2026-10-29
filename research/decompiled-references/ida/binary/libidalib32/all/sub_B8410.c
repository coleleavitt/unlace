__int64 __fastcall sub_B8410(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int *v6; // rax
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  v5 = operator new(0x50u);
  v6 = *a3;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  v7 = *v6;
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 32) = v7;
  *(_OWORD *)(v5 + 48) = 0;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v9 = a1[4];
      v4 = 0;
      if ( *(_DWORD *)(v9 + 32) < v7 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_B8300((__int64)a1, v7);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)(a2 + 32);
  if ( v7 >= v8 )
  {
    if ( v8 >= v7 )
      goto LABEL_14;
    if ( a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v11 = std::_Rb_tree_increment();
    v9 = v11;
    if ( v7 < *(_DWORD *)(v11 + 32) )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_14;
      }
      v4 = v11;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = a2;
  if ( a1[3] == a2 )
    goto LABEL_6;
  v10 = std::_Rb_tree_decrement();
  v9 = v10;
  if ( *(_DWORD *)(v10 + 32) >= v7 )
    goto LABEL_5;
  if ( *(_QWORD *)(v10 + 24) )
    v9 = a2;
  else
    v4 = 0;
LABEL_6:
  if ( v9 )
  {
LABEL_7:
    v4 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v5 )
    operator delete((void *)v5, 0x50u);
  return v4;
}

