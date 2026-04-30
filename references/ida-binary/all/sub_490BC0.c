__int64 __fastcall sub_490BC0(__int64 a1)
{
  QT::QAbstractItemView *v2; // rdi
  __int64 v3; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  int *v10; // r12
  unsigned __int64 v11; // rcx
  char v12; // si
  int *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  _QWORD **v16; // rbx
  void *v17; // rdi
  bool v19; // [rsp+Fh] [rbp-89h]
  __int64 v20; // [rsp+17h] [rbp-81h] BYREF
  char v21; // [rsp+1Fh] [rbp-79h]
  int v22; // [rsp+28h] [rbp-70h] BYREF
  void *v23; // [rsp+30h] [rbp-68h]
  int *v24; // [rsp+38h] [rbp-60h]
  int *v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = *(QT::QAbstractItemView **)(a1 + 328);
  if ( !v2 )
    return 0;
  v3 = QT::QAbstractItemView::model(v2);
  v4 = *(_QWORD **)(v3 + 216);
  if ( !v4 )
  {
    v4 = *(_QWORD **)(v3 + 208);
    if ( !v4 )
      return 0;
  }
  v5 = *(_QWORD *)(a1 + 200);
  if ( !v5 )
    return 0;
  v22 = 0;
  v23 = nullptr;
  v24 = &v22;
  v25 = &v22;
  v26 = 0;
  v6 = *(unsigned __int64 **)v5;
  v7 = *(_QWORD *)v5 + 16LL * *(_QWORD *)(v5 + 8);
  if ( v7 == *(_QWORD *)v5 )
    return 1;
  while ( 1 )
  {
    v8 = *v4;
    v21 = 0;
    v20 = -1;
    dirtree_resolve_cursor(&v20, v8, v6);
    v9 = v20;
    if ( v20 == -1 )
      goto LABEL_19;
    if ( !v21 )
    {
      v9 = *v6;
      if ( *v6 == -1 )
        goto LABEL_19;
    }
    v10 = (int *)v23;
    if ( !v23 )
    {
      v10 = &v22;
      if ( v24 == &v22 )
      {
        v19 = 1;
        goto LABEL_18;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      v11 = *((_QWORD *)v10 + 4);
      v12 = 0;
      v13 = *((int **)v10 + 3);
      if ( v9 < v11 )
      {
        v13 = *((int **)v10 + 2);
        v12 = 1;
      }
      if ( !v13 )
        break;
      v10 = v13;
    }
    if ( v12 )
      break;
LABEL_15:
    if ( v11 < v9 )
      goto LABEL_16;
LABEL_19:
    v6 += 2;
    if ( (unsigned __int64 *)v7 == v6 )
    {
      v15 = 1;
      goto LABEL_21;
    }
  }
  if ( v24 != v10 )
  {
LABEL_28:
    v11 = *(_QWORD *)(std::_Rb_tree_decrement(v10) + 32);
    goto LABEL_15;
  }
LABEL_16:
  v19 = 1;
  if ( v10 != &v22 )
    v19 = v9 < *((_QWORD *)v10 + 4);
LABEL_18:
  v14 = operator new(0x28u);
  *(_QWORD *)(v14 + 32) = v9;
  std::_Rb_tree_insert_and_rebalance(v19, v14, v10, &v22);
  ++v26;
  if ( !(unsigned __int8)dirtree_set_natural_order(*v4, v9, 1) )
    goto LABEL_19;
  v15 = 0;
LABEL_21:
  v16 = (_QWORD **)v23;
  if ( v23 )
  {
    do
    {
      sub_4887C0(v16[3]);
      v17 = v16;
      v16 = (_QWORD **)v16[2];
      operator delete(v17, 0x28u);
    }
    while ( v16 );
  }
  return v15;
}
