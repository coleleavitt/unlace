__int64 __fastcall sub_48B9B0(_QWORD *a1, char a2)
{
  QT::QAbstractItemView *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v12; // rdi
  const char *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+1Fh] [rbp-59h]
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  char v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = (QT::QAbstractItemView *)a1[41];
  if ( !v2 )
    return 7;
  v3 = a1[25];
  if ( !v3 || (v4 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    v12 = a1[9];
    v13 = "Expand entire tree";
    if ( !a2 )
      v13 = "Collapse entire tree";
    v14 = sub_534430(v12);
    if ( !v14 )
      return 3;
    goto LABEL_15;
  }
  v5 = *(__int64 **)v3;
  v6 = *(_QWORD *)v3 + 16 * v4;
  if ( *(_QWORD *)v3 == v6 )
    return 7;
  while ( 1 )
  {
    v9 = QT::QAbstractItemView::model(v2);
    v10 = *(__int64 **)(v9 + 216);
    if ( !v10 )
      v10 = *(__int64 **)(v9 + 208);
    v7 = *v10;
    v23 = 0;
    v22 = -1;
    dirtree_resolve_cursor(&v22, v7, v5);
    v8 = v22;
    v21 = v23;
    QT::QAbstractItemView::model(v2);
    if ( v8 == -1 || !v21 )
      goto LABEL_8;
    v15 = QT::QAbstractItemView::model(v2);
    sub_48B610((__int64)&v22, v15, v5);
    if ( a2 )
      break;
    if ( (unsigned __int8)QT::QTreeView::isExpanded(v2, &v22, v16, v17, v18, v19) )
    {
      v13 = "Collapse selected folders";
      goto LABEL_20;
    }
LABEL_8:
    v5 += 2;
    if ( (__int64 *)v6 == v5 )
      return 7;
  }
  if ( (unsigned __int8)QT::QTreeView::isExpanded(v2, &v22, v16, v17, v18, v19) )
    goto LABEL_8;
  v13 = "Expand selected folders";
LABEL_20:
  v14 = sub_534430(a1[9]);
  if ( v14 )
LABEL_15:
    sub_537630(v14, 1, v13);
  return 3;
}
