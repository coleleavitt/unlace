__int64 __fastcall sub_49BDA0(QT::QObject *this)
{
  __int64 (*v2)(void); // rax
  __int64 result; // rax
  __int64 v4; // rbp
  QT::QTreeView *v5; // rdi

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 448LL);
  if ( (char *)v2 == (char *)sub_49AD80 )
  {
    result = *((_QWORD *)this + 299);
    if ( (*(_BYTE *)(result + 15) & 0x20) != 0 )
      return result;
  }
  else
  {
    result = v2();
    if ( !(_BYTE)result )
      return result;
  }
  v4 = QT::QObject::sender(this);
  if ( v4 == QT::QTableView::horizontalHeader(*((QT::QTableView **)this + 309)) )
  {
    if ( !(unsigned __int8)QT::QTableView::isSortingEnabled(*((QT::QTableView **)this + 309)) )
      QT::QTableView::setSortingEnabled(*((QT::QTableView **)this + 309), 1);
  }
  else
  {
    v5 = *((QT::QTreeView **)this + 298);
    if ( v5
      && v4 == QT::QTreeView::header(v5)
      && !(unsigned __int8)QT::QTreeView::isSortingEnabled(*((QT::QTreeView **)this + 298)) )
    {
      QT::QTreeView::setSortingEnabled(*((QT::QTreeView **)this + 298), 1);
    }
  }
  return sub_4E1150();
}
