__int64 __fastcall sub_9C9FF0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v3; // r13
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rbp
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  bool v9; // al
  _QWORD *j; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h]
  _QWORD *v20; // [rsp+8h] [rbp-40h]

  v3 = a1 + 1;
  v4 = a1[2];
  if ( !v4 )
  {
    v6 = v3;
    v9 = 1;
LABEL_9:
    v19 = a1[5];
    if ( (_QWORD *)a1[3] == v6 && v9 )
    {
LABEL_11:
      sub_9C9F30((__int64)a1, v4);
      a1[2] = 0;
      a1[3] = v3;
      a1[4] = v3;
      a1[5] = 0;
      return v19;
    }
    return 0;
  }
  v5 = *a2;
  v6 = v3;
  for ( i = (_QWORD *)v4; ; i = v8 )
  {
    if ( i[4] < v5 )
    {
      v8 = (_QWORD *)i[3];
      if ( !v8 )
        goto LABEL_8;
      continue;
    }
    v8 = (_QWORD *)i[2];
    if ( i[4] <= v5 )
      break;
    v6 = i;
    if ( !v8 )
    {
LABEL_8:
      v9 = v3 == v6;
      goto LABEL_9;
    }
  }
  for ( j = (_QWORD *)i[3]; j; j = (_QWORD *)j[3] )
  {
    while ( j[4] > v5 )
    {
      v6 = j;
      j = (_QWORD *)j[2];
      if ( !j )
        goto LABEL_18;
    }
  }
LABEL_18:
  while ( v8 )
  {
    while ( v8[4] >= v5 )
    {
      i = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v8 )
        goto LABEL_21;
    }
    v8 = (_QWORD *)v8[3];
  }
LABEL_21:
  v19 = a1[5];
  if ( (_QWORD *)a1[3] == i && v3 == v6 )
    goto LABEL_11;
  if ( i == v6 )
    return 0;
  do
  {
    v12 = std::_Rb_tree_increment();
    v13 = std::_Rb_tree_rebalance_for_erase();
    v14 = *(_QWORD **)(v13 + 40);
    v15 = (_QWORD *)v13;
    v16 = &v14[8 * (unsigned __int64)*(unsigned int *)(v13 + 48)];
    if ( v14 != v16 )
    {
      do
      {
        while ( 1 )
        {
          v16 -= 8;
          v17 = (_QWORD *)v16[3];
          if ( v17 == v16 + 5 )
            break;
          v20 = v14;
          operator delete(v17);
          v14 = v20;
          if ( v20 == v16 )
            goto LABEL_26;
        }
      }
      while ( v14 != v16 );
LABEL_26:
      v16 = (_QWORD *)v15[5];
    }
    if ( v16 != v15 + 7 )
      free(v16);
    operator delete(v15);
    v18 = a1[5] - 1LL;
    a1[5] = v18;
  }
  while ( (_QWORD *)v12 != v6 );
  v19 -= v18;
  return v19;
}

