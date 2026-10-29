__int64 __fastcall sub_497F60(QT::QAbstractItemView *a1, QT::QEvent *a2)
{
  if ( *((_WORD *)a2 + 4) != 2006 || (*((_BYTE *)a1 + 232) & 1) == 0 )
    return QT::QAbstractItemView::event(a1, a2);
  (*(void (**)(void))(*(_QWORD *)a1 + 816LL))();
  return QT::QAbstractItemView::event(a1, a2);
}
