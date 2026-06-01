__int64 __fastcall sub_51F480(QT::QTreeView *this)
{
  __int64 (*v1)(); // rax
  __int64 result; // rax

  v1 = *(__int64 (**)())(*((_QWORD *)this + 38) + 72LL);
  if ( v1 == vault_files_dirtree_widget_t__::vfunc_9
    || (result = ((__int64 (__fastcall *)(char *))v1)((char *)this + 304), (_BYTE)result) )
  {
    result = QT::QTreeView::isSortingEnabled(this);
    if ( !(_BYTE)result )
    {
      QT::QTreeView::setSortingEnabled(this, 1);
      return sub_4E1150();
    }
  }
  return result;
}
