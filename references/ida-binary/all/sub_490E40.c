__int64 __fastcall sub_490E40(__int64 a1, __int64 a2)
{
  QT::QAbstractItemView *v2; // rbp
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rdx
  char is_orderable; // bp
  __int64 v8; // rax
  unsigned __int64 *v9; // rbx
  __int64 v10; // rsi
  unsigned __int64 v11; // r13
  int *v12; // r15
  unsigned __int64 v13; // rcx
  char v14; // si
  int *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebp
  _QWORD **v18; // rbx
  void *v19; // rdi
  __int64 v21; // [rsp+10h] [rbp-98h]
  bool v22; // [rsp+1Fh] [rbp-89h]
  __int64 v23; // [rsp+27h] [rbp-81h] BYREF
  char v24; // [rsp+2Fh] [rbp-79h]
  int v25; // [rsp+38h] [rbp-70h] BYREF
  void *v26; // [rsp+40h] [rbp-68h]
  int *v27; // [rsp+48h] [rbp-60h]
  int *v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v2 = *(QT::QAbstractItemView **)(a2 + 328);
  if ( !v2 )
    return 6;
  v3 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a2 + 328));
  v4 = *(_QWORD **)(v3 + 216);
  if ( !v4 )
  {
    v4 = *(_QWORD **)(v3 + 208);
    if ( !v4 )
      return 6;
  }
  v5 = QT::QAbstractItemView::model(v2);
  v6 = *(_QWORD **)(v5 + 216);
  if ( !v6 )
    v6 = *(_QWORD **)(v5 + 208);
  is_orderable = dirtree_is_orderable(*v6);
  if ( !is_orderable )
    return 6;
  v8 = *(_QWORD *)(a2 + 200);
  v25 = 0;
  v26 = nullptr;
  v27 = &v25;
  v28 = &v25;
  v29 = 0;
  if ( !v8 )
    return 7;
  v9 = *(unsigned __int64 **)v8;
  v21 = *(_QWORD *)v8 + 16LL * *(_QWORD *)(v8 + 8);
  if ( v21 == *(_QWORD *)v8 )
    return 7;
  while ( 1 )
  {
    v10 = *v4;
    v23 = -1;
    v24 = 0;
    dirtree_resolve_cursor(&v23, v10, v9);
    v11 = v23;
    if ( v23 == -1 )
      goto LABEL_22;
    if ( !v24 )
    {
      v11 = *v9;
      if ( *v9 == -1 )
        goto LABEL_22;
    }
    v12 = (int *)v26;
    if ( !v26 )
    {
      v12 = &v25;
      if ( v27 == &v25 )
      {
        v22 = is_orderable;
        v12 = &v25;
        goto LABEL_21;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      v13 = *((_QWORD *)v12 + 4);
      v14 = 0;
      v15 = *((int **)v12 + 3);
      if ( v11 < v13 )
      {
        v15 = *((int **)v12 + 2);
        v14 = is_orderable;
      }
      if ( !v15 )
        break;
      v12 = v15;
    }
    if ( v14 )
      break;
LABEL_18:
    if ( v13 < v11 )
      goto LABEL_19;
LABEL_22:
    v9 += 2;
    if ( (unsigned __int64 *)v21 == v9 )
    {
      v17 = 7;
      goto LABEL_24;
    }
  }
  if ( v27 != v12 )
  {
LABEL_28:
    v13 = *(_QWORD *)(std::_Rb_tree_decrement(v12) + 32);
    goto LABEL_18;
  }
LABEL_19:
  v22 = is_orderable;
  if ( v12 != &v25 )
    v22 = v11 < *((_QWORD *)v12 + 4);
LABEL_21:
  v16 = operator new(0x28u);
  *(_QWORD *)(v16 + 32) = v11;
  std::_Rb_tree_insert_and_rebalance(v22, v16, v12, &v25);
  ++v29;
  if ( (unsigned __int8)dirtree_is_dir_ordered(*v4, v11) )
    goto LABEL_22;
  v17 = 3;
LABEL_24:
  v18 = (_QWORD **)v26;
  if ( v26 )
  {
    do
    {
      sub_4887C0(v18[3]);
      v19 = v18;
      v18 = (_QWORD **)v18[2];
      operator delete(v19, 0x28u);
    }
    while ( v18 );
  }
  return v17;
}
