__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_6(
        QT::QAbstractItemView *this,
        QT::QObject *a2,
        QT::QEvent *a3)
{
  if ( a2 == (QT::QObject *)QT::QTreeView::header(this) && *((_WORD *)a3 + 4) == 82 )
    (*(void (__fastcall **)(QT::QAbstractItemView *, QT::QEvent *))(*(_QWORD *)this + 272LL))(this, a3);
  return QT::QAbstractItemView::eventFilter(this, a2, a3);
}
