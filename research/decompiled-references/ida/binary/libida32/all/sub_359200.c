__int64 __fastcall sub_359200(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  v5 = operator new(0x150u);
  v6 = **a3;
  *(_DWORD *)(v5 + 32) = v6;
  memset((void *)(v5 + 40), 0, 0x128u);
  *(_BYTE *)(v5 + 96) = 1;
  *(_DWORD *)(v5 + 264) = -1;
  if ( a1 + 1 == (_QWORD *)a2 )
  {
    if ( a1[5] )
    {
      v8 = a1[4];
      v4 = 0;
      if ( *(_DWORD *)(v8 + 32) < v6 )
        goto LABEL_6;
    }
LABEL_5:
    v4 = sub_359140((__int64)a1, v6);
    goto LABEL_6;
  }
  v7 = *(_DWORD *)(a2 + 32);
  if ( v6 >= v7 )
  {
    if ( v7 >= v6 )
      goto LABEL_14;
    if ( a1[4] == a2 )
    {
      if ( a2 )
        goto LABEL_7;
      goto LABEL_14;
    }
    v10 = std::_Rb_tree_increment();
    v8 = v10;
    if ( v6 < *(_DWORD *)(v10 + 32) )
    {
      if ( !*(_QWORD *)(a2 + 24) )
      {
        if ( a2 )
          goto LABEL_7;
        goto LABEL_14;
      }
      v4 = v10;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = a2;
  if ( a1[3] == a2 )
    goto LABEL_6;
  v9 = std::_Rb_tree_decrement();
  v8 = v9;
  if ( *(_DWORD *)(v9 + 32) >= v6 )
    goto LABEL_5;
  if ( *(_QWORD *)(v9 + 24) )
    v8 = a2;
  else
    v4 = 0;
LABEL_6:
  if ( v8 )
  {
LABEL_7:
    v4 = v5;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v4;
  }
LABEL_14:
  if ( v5 )
  {
    clear_tinfo_t(v5 + 40);
    operator delete((void *)v5, 0x150u);
  }
  return v4;
}

