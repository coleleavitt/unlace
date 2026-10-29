unsigned __int64 __fastcall sub_408B80(QT::QApplication *this, __int64 a2)
{
  const QT::QObject *v2; // rax
  QT::QAbstractItemView *v3; // rbp

  v2 = (const QT::QObject *)QT::QObject::sender(this);
  v3 = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTreeView::staticMetaObject, v2);
  QT::QAbstractItemView::setCurrentIndex(v3, a2);
  return sub_408AA0(this, v3);
}
