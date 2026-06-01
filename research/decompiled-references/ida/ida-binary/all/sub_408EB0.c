__int64 __fastcall xref_tree_t__::vfunc_6(QT::QApplication *this, QT::QObject *a2, QT::QEvent *a3)
{
  QT::QObject *v5; // rdx
  __int16 v6; // ax
  __int64 v8; // rax
  void *v9; // rdi
  QT::QAbstractItemView *v10; // r13
  int v11; // eax

  if ( *((_WORD *)a3 + 4) == 8
    && a2
    && (*(_BYTE *)(*((_QWORD *)a2 + 1) + 48LL) & 1) != 0
    && (this == a2 || (unsigned __int8)QT::QWidget::isAncestorOf(this, a2)) )
  {
    v8 = QT::QtSharedPointer::ExternalRefCountData::getAndRef(a2, a2);
    v9 = *((void **)this + 36);
    *((_QWORD *)this + 37) = a2;
    *((_QWORD *)this + 36) = v8;
    if ( v9 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v9, 1u) )
        operator delete(v9);
    }
  }
  v5 = (QT::QObject *)QT::QTreeView::header(*((QT::QTreeView **)this + 13));
  v6 = *((_WORD *)a3 + 4);
  if ( a2 == v5 && v6 == 82 )
  {
    sub_408BC0((QT::QTreeView **)this, (__int64)a3);
    return 1;
  }
  if ( v6 != 6 )
    return QT::QObject::eventFilter(this, a2, a3);
  v10 = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QTreeView::staticMetaObject, a2);
  if ( !v10 )
    return QT::QObject::eventFilter(this, a2, a3);
  v11 = *((_DWORD *)a3 + 16);
  if ( (unsigned int)(v11 - 16777220) > 1 )
  {
    if ( v11 == 16777234 && (unsigned __int8)sub_3F2700((__int64)this, (__int64)v10)
      || (unsigned __int8)QT::QKeyEvent::matches(a3, 9) && (unsigned __int8)sub_3FC2F0((__int64)this, v10) )
    {
      goto LABEL_17;
    }
    return QT::QObject::eventFilter(this, a2, a3);
  }
  if ( sub_3FC1C0((__int64)this, v10) )
    sub_408AA0(this, v10);
  else
    QT::QApplication::beep(this);
LABEL_17:
  *((_BYTE *)a3 + 12) = 1;
  return 1;
}
