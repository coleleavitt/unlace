__int64 __fastcall sub_3D6350(_QWORD *a1, unsigned int a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  bool v9; // al
  __int64 v10; // r12
  __int64 i; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rax

  v3 = a1 + 1;
  v4 = a1 + 1;
  v5 = (_QWORD *)a1[2];
  if ( !v5 )
  {
    v9 = 1;
LABEL_8:
    v10 = a1[5];
    if ( (_QWORD *)a1[3] == v4 && v9 )
    {
LABEL_10:
      sub_3D6180(v5);
      a1[2] = 0;
      a1[3] = v3;
      a1[4] = v3;
      a1[5] = 0;
      return v10;
    }
    return 0;
  }
  v6 = a1[2];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 32);
      if ( v7 >= a2 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v6 )
        goto LABEL_7;
    }
    v8 = *(_QWORD *)(v6 + 16);
    if ( a2 >= v7 )
      break;
    v4 = (_QWORD *)v6;
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v8 )
    {
LABEL_7:
      v9 = v3 == v4;
      goto LABEL_8;
    }
  }
  for ( i = *(_QWORD *)(v6 + 24); i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(i + 24);
      if ( a2 < *(_DWORD *)(i + 32) )
        break;
      i = *(_QWORD *)(i + 24);
      if ( !v13 )
        goto LABEL_16;
    }
    v4 = (_QWORD *)i;
  }
LABEL_16:
  while ( v8 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) >= a2 )
        break;
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v14 )
        goto LABEL_19;
    }
    v6 = v8;
    v8 = *(_QWORD *)(v8 + 16);
  }
LABEL_19:
  v10 = a1[5];
  if ( a1[3] == v6 && v3 == v4 )
    goto LABEL_10;
  if ( (_QWORD *)v6 == v4 )
    return 0;
  do
  {
    v15 = std::_Rb_tree_increment();
    v16 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v16, 0x30u);
    v17 = a1[5] - 1LL;
    a1[5] = v17;
  }
  while ( (_QWORD *)v15 != v4 );
  v10 -= v17;
  return v10;
}

