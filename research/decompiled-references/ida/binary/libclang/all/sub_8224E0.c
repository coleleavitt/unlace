__int64 __fastcall sub_8224E0(_QWORD *a1, int a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // r13
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  bool v10; // al
  __int64 v11; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  void *v18; // rbx
  __int64 v19; // rax

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v6 = v3;
    v10 = 1;
LABEL_8:
    v11 = a1[5];
    if ( (_QWORD *)a1[3] == v6 && v10 )
    {
LABEL_10:
      sub_822210(v4);
      a1[3] = v3;
      a1[2] = 0;
      a1[4] = v3;
      a1[5] = 0;
      return v11;
    }
    return 0;
  }
  v5 = a2 - 1;
  v6 = v3;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 8) - 1;
      if ( v8 >= v5 )
        break;
      v7 = (_QWORD *)v7[3];
      if ( !v7 )
        goto LABEL_7;
    }
    v9 = v7[2];
    if ( v5 >= v8 )
      break;
    v6 = v7;
    v7 = (_QWORD *)v7[2];
    if ( !v9 )
    {
LABEL_7:
      v10 = v3 == v6;
      goto LABEL_8;
    }
  }
  v13 = v7[3];
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v5 < *(_DWORD *)(v13 + 32) - 1 )
      {
        v14 = *(_QWORD *)(v13 + 16);
        v6 = (_QWORD *)v13;
        if ( !v14 )
          break;
      }
      else
      {
        v14 = *(_QWORD *)(v13 + 24);
        if ( !v14 )
          break;
      }
      v13 = v14;
    }
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v9 + 32) - 1 >= v5 )
      {
        v15 = *(_QWORD *)(v9 + 16);
        v7 = (_QWORD *)v9;
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v9 + 24);
        if ( !v15 )
          break;
      }
      v9 = v15;
    }
  }
  v11 = a1[5];
  if ( (_QWORD *)a1[3] == v7 && v3 == v6 )
    goto LABEL_10;
  if ( v7 == v6 )
    return 0;
  do
  {
    v16 = std::_Rb_tree_increment();
    v17 = std::_Rb_tree_rebalance_for_erase();
    v18 = (void *)v17;
    if ( *(_DWORD *)(v17 + 40) > 1u )
      sub_69F740(v17 + 40);
    operator delete(v18, 0x68u);
    v19 = a1[5] - 1LL;
    a1[5] = v19;
  }
  while ( (_QWORD *)v16 != v6 );
  v11 -= v19;
  return v11;
}

