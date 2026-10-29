__int64 __fastcall sub_400520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 result; // rax
  QT::QAbstractItemView *v12; // rdi
  const QT::QObject *v13; // rax
  __int64 *func; // rax
  __int64 v15; // rax
  QT::QStandardItem *v16; // rbp
  char isChecked; // al
  QT::QSortFilterProxyModel *v18; // rdi
  __int64 v19; // rax

  v6 = a2;
  ++*(_DWORD *)(a1 + 460);
  v8 = *(_QWORD *)(a1 + 304);
  if ( v8 != *(_QWORD *)(a1 + 312) )
    *(_QWORD *)(a1 + 312) = v8;
  v9 = *(_QWORD *)(a1 + 416);
  *(_DWORD *)(a1 + 328) = -1;
  while ( v9 )
  {
    v10 = v9;
    sub_3EF890(*(_QWORD **)(v9 + 24));
    v9 = *(_QWORD *)(v9 + 16);
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v10 + 32));
    a2 = 48;
    operator delete((void *)v10, 0x30u);
  }
  *(_BYTE *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = a1 + 408;
  *(_QWORD *)(a1 + 432) = a1 + 408;
  *(_QWORD *)(a1 + 440) = 0;
  result = sub_3F5D70(a1, a2, a3, a4, a5, a6);
  v12 = *(QT::QAbstractItemView **)(a1 + 104);
  if ( v12 )
  {
    v13 = (const QT::QObject *)QT::QAbstractItemView::itemDelegate(v12);
    result = QT::QMetaObject::cast((QT::QMetaObject *)&off_89A300, v13);
    if ( result )
      result = sub_4F0010(result);
  }
  *(_QWORD *)(a1 + 280) = v6;
  if ( v6 == -1 )
  {
    --*(_DWORD *)(a1 + 460);
  }
  else
  {
    func = (__int64 *)get_func(v6);
    if ( func )
    {
      v15 = *func;
      if ( v15 != -1 )
        *(_QWORD *)(a1 + 280) = v15;
    }
    sub_3F7840((QT::QWidget *)a1);
    v16 = *(QT::QStandardItem **)(a1 + 112);
    isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 248));
    sub_400070(v16, *(_QWORD *)(a1 + 280), isChecked);
    if ( !*(_BYTE *)(a1 + 464) )
      QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
    v18 = *(QT::QSortFilterProxyModel **)(a1 + 120);
    *((_QWORD *)v18 + 8) = *(_QWORD *)(a1 + 280);
    QT::QSortFilterProxyModel::invalidateFilter(v18);
    sub_3F3550(a1);
    ++*(_DWORD *)(a1 + 452);
    v19 = operator new(0x28u);
    *(_DWORD *)v19 = 1;
    *(_QWORD *)(v19 + 16) = a1;
    *(_QWORD *)(v19 + 8) = sub_3EECC0;
    *(_QWORD *)(v19 + 24) = a1 + 460;
    *(_QWORD *)(v19 + 32) = a1 + 452;
    return QT::QTimer::singleShotImpl(0, 0, 0);
  }
  return result;
}
