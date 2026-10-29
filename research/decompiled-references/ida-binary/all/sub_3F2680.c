__int64 __fastcall sub_3F2680(__int64 a1, QT::QFont *a2)
{
  __int64 result; // rax
  QT::QObject *v4; // rdi
  const QT::QObject *v5; // rax
  __int64 v6; // r12

  result = sub_4EB870((QT::QObject *)a1, a2);
  v4 = *(QT::QObject **)(a1 + 104);
  if ( v4 )
  {
    sub_4EB870(v4, a2);
    v5 = (const QT::QObject *)QT::QAbstractItemView::itemDelegate(*(QT::QAbstractItemView **)(a1 + 104));
    result = QT::QMetaObject::cast((QT::QMetaObject *)&off_89A300, v5);
    v6 = result;
    if ( result )
    {
      sub_4EFFE0(result, a2);
      result = sub_4F0010(v6);
    }
    if ( !*(_BYTE *)(a1 + 464) )
      return QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
  }
  return result;
}
