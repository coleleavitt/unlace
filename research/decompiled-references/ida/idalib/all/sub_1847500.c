__int64 __fastcall sub_1847500(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r12
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int8 v18; // al
  _QWORD *v20; // rax
  const char *v21; // rsi
  const char *v22; // rbx
  const char *v23; // rax
  __int64 v24; // rdx
  _BOOL8 v25; // rdi
  unsigned __int8 v26; // al
  __int64 *v27; // r13
  const char *i; // rax
  __int64 v29; // r14
  char *v30; // rdi

  v6 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(v6 + 8) & 7LL;
  v8 = v7 | (*(__int64 *)(v6 + 8) >> 3) & 1;
  if ( v8 )
    v6 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v7, v8, a5);
  v12 = sub_F63270(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, a5, a6);
  v13 = (__int64)(*a1 + 1);
  v14 = (_QWORD *)(*a1)[2];
  if ( !v14 )
    goto LABEL_10;
  v9 = (__int64)(*a1 + 1);
  do
  {
    while ( v14[4] >= (unsigned __int64)v12 )
    {
      v9 = (__int64)v14;
      v14 = (_QWORD *)v14[2];
      if ( !v14 )
        goto LABEL_8;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v14 );
LABEL_8:
  if ( v13 == v9 || *(_QWORD *)(v9 + 32) > (unsigned __int64)v12 )
  {
LABEL_10:
    v15 = sub_B94670((unsigned __int64)(v12 + 8), *a1[1], v9, v13, v10, v11);
    if ( !v15 )
      return 0;
    while ( 1 )
    {
      v16 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v15 & 4) == 0 )
        break;
      if ( !v16 )
        return 0;
      v17 = *(_QWORD *)v16;
      v18 = *(_BYTE *)(*(_QWORD *)v16 + 28LL) & 0x7F;
      if ( ((unsigned int)v18 - 49 <= 2 || v18 == 32) && ((*(_BYTE *)(v17 + 29) >> 5) & 3) != 2 )
        goto LABEL_32;
      v15 = *(_QWORD *)(v16 + 8);
      if ( !v15 )
        return 0;
    }
    v26 = *(_BYTE *)(v16 + 28) & 0x7F;
    if ( (unsigned int)v26 - 49 > 2 && v26 != 32 )
      return 0;
    if ( ((*(_BYTE *)(v16 + 29) >> 5) & 3) == 2 )
      return 0;
LABEL_32:
    v27 = *a1;
    i = (const char *)(*a1)[2];
    v29 = (__int64)(*a1 + 1);
    v22 = (const char *)v29;
    if ( !i )
      goto LABEL_20;
    if ( *((_QWORD *)i + 4) < (unsigned __int64)v12 )
      goto LABEL_37;
LABEL_34:
    v22 = i;
    for ( i = *((const char **)i + 2); i; i = *((const char **)i + 3) )
    {
      if ( *((_QWORD *)i + 4) >= (unsigned __int64)v12 )
        goto LABEL_34;
LABEL_37:
      ;
    }
    if ( (const char *)v29 == v22 || *((_QWORD *)v22 + 4) > (unsigned __int64)v12 )
    {
LABEL_20:
      v20 = (_QWORD *)operator new(0x30u);
      v21 = v22;
      v20[4] = v12;
      v22 = (const char *)v20;
      v20[5] = 0;
      v23 = sub_1847410(v27, v21, v20 + 4);
      if ( v24 )
      {
        v25 = v29 == v24 || v23 || *((_QWORD *)v22 + 4) < *(_QWORD *)(v24 + 32);
        std::_Rb_tree_insert_and_rebalance(v25, v22, v24, v29);
        ++v27[5];
      }
      else
      {
        v30 = (char *)v22;
        v22 = v23;
        operator delete(v30);
      }
    }
    *((_QWORD *)v22 + 5) = v17;
  }
  return 1;
}
