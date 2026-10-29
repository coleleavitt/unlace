__int64 __fastcall sub_19A9A0(_QWORD *a1, void *a2)
{
  void **v4; // rsi
  __int64 v5; // rdi
  void **v6; // rcx
  void **v7; // rax
  void *v8; // rdx
  void **v9; // r13
  size_t v10; // r12
  char *v11; // rdx
  const void *v12; // rsi
  void **v13; // rdi
  unsigned __int16 v14; // r12
  signed __int64 v15; // rdx
  _QWORD *v16; // r13
  _QWORD *v17; // r14
  const char *v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  void (__fastcall *v31)(void *); // rax
  __int64 result; // rax
  const char *v33; // rsi
  _QWORD *v34; // [rsp+0h] [rbp-78h]
  char *s2; // [rsp+8h] [rbp-70h]
  const char *v36; // [rsp+10h] [rbp-68h]
  size_t v37; // [rsp+28h] [rbp-50h]

  v4 = (void **)*a1;
  v5 = a1[1];
  v6 = &v4[v5];
  if ( v4 == v6 )
  {
    v9 = v4;
  }
  else
  {
    v7 = v4;
    while ( 1 )
    {
      v8 = *v7;
      v9 = v7++;
      if ( v8 == a2 )
        break;
      if ( v6 == v7 )
      {
        v9 = &v4[v5];
        break;
      }
    }
  }
  v37 = 0;
  v10 = *((_QWORD *)a2 + 6);
  s2 = nullptr;
  if ( v10 )
  {
    s2 = (char *)qalloc_or_throw();
    memcpy(s2, *((const void **)a2 + 5), v10);
    v37 = v10;
    v4 = (void **)*a1;
    v5 = a1[1];
  }
  v11 = (char *)&v4[v5];
  v12 = v9 + 1;
  v13 = v9;
  v14 = *((_WORD *)a2 + 84);
  v15 = v11 - (char *)v9;
  v16 = a1 + 4;
  memmove(v13, v12, v15 - 8);
  v17 = (_QWORD *)a1[5];
  --a1[1];
  if ( !v17 )
    goto LABEL_25;
  v18 = s2;
  if ( !v37 )
    v18 = s1;
  v36 = v18;
  while ( 1 )
  {
    v23 = v17[5];
    if ( !v37 )
      break;
    if ( v23 )
      goto LABEL_20;
    v19 = s2;
    v20 = s1;
    v34 = v17;
LABEL_13:
    v21 = strcmp(v20, v19);
    v22 = (_QWORD *)v17[2];
    v17 = (_QWORD *)v17[3];
    if ( v21 >= 0 )
    {
      v16 = v34;
      v17 = v22;
    }
    if ( !v17 )
      goto LABEL_22;
  }
  if ( v23 )
  {
LABEL_20:
    v20 = (const char *)v17[4];
    v19 = v36;
    v34 = v17;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v24 = v17[2];
    if ( !v24 )
      break;
    v16 = v17;
    v17 = (_QWORD *)v17[2];
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_20;
  }
  v16 = v17;
LABEL_22:
  if ( v16 != a1 + 4 )
  {
    if ( v16[5] )
    {
      v33 = (const char *)v16[4];
      if ( v37 )
        goto LABEL_41;
      strcmp(s1, v33);
    }
    else
    {
      if ( !v37 )
        goto LABEL_25;
      v33 = s1;
LABEL_41:
      strcmp(s2, v33);
    }
  }
LABEL_25:
  v25 = std::_Rb_tree_rebalance_for_erase();
  v26 = (void *)v25;
  if ( *(_QWORD *)(v25 + 32) )
  {
    *(_QWORD *)(v25 + 40) = 0;
    qfree();
  }
  operator delete(v26, 0x40u);
  v27 = a1[11];
  --a1[8];
  if ( v27 )
  {
    do
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v27 + 16);
        v29 = *(_QWORD *)(v27 + 24);
        if ( *(_WORD *)(v27 + 32) >= v14 )
          break;
        v27 = *(_QWORD *)(v27 + 24);
        if ( !v29 )
          goto LABEL_32;
      }
      v27 = *(_QWORD *)(v27 + 16);
    }
    while ( v28 );
  }
LABEL_32:
  v30 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v30, 0x30u);
  --a1[14];
  if ( a2 )
  {
    v31 = *(void (__fastcall **)(void *))(*(_QWORD *)a2 + 8LL);
    if ( v31 == sub_198CF0 )
    {
      sub_198C60((__int64)a2);
      operator delete(a2, 0xD0u);
    }
    else
    {
      v31(a2);
    }
  }
  result = (__int64)s2;
  if ( s2 )
    return qfree();
  return result;
}

