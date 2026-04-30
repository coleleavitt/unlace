__int64 __fastcall sub_48B820(__int64 a1, char a2)
{
  QT::QAbstractItemView *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 *v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v13; // rax
  char v14; // [rsp+Fh] [rbp-59h]
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  char v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = *(QT::QAbstractItemView **)(a1 + 328);
  if ( !v2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 && (v4 = *(_QWORD *)(v3 + 8)) != 0 )
  {
    v5 = *(__int64 **)v3;
    v7 = *(_QWORD *)v3 + 16 * v4;
    if ( v7 != *(_QWORD *)v3 )
    {
      do
      {
        v10 = QT::QAbstractItemView::model(v2);
        v11 = *(__int64 **)(v10 + 216);
        if ( !v11 )
          v11 = *(__int64 **)(v10 + 208);
        v8 = *v11;
        v16 = 0;
        v15 = -1;
        dirtree_resolve_cursor(&v15, v8, v5);
        v9 = v15;
        v14 = v16;
        QT::QAbstractItemView::model(v2);
        if ( v9 != -1 && v14 )
        {
          v13 = QT::QAbstractItemView::model(v2);
          sub_48B610((__int64)&v15, v13, v5);
          if ( a2 )
            QT::QTreeView::expand(v2, &v15);
          else
            QT::QTreeView::collapse(v2, &v15);
        }
        v5 += 2;
      }
      while ( (__int64 *)v7 != v5 );
    }
  }
  else if ( a2 )
  {
    QT::QTreeView::expandAll(*(QT::QTreeView **)(a1 + 328));
  }
  else
  {
    QT::QTreeView::collapseAll(*(QT::QTreeView **)(a1 + 328));
    QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)&v15);
    QT::QTreeView::expand(v2, &v15);
  }
  return 1;
}
