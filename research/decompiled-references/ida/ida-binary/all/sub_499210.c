__int64 __fastcall sub_499210(QT::QTreeView *this, QT::QKeyEvent *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, QT::QTreeView *, QT::QKeyEvent *))(**((_QWORD **)this + 30) + 760LL))(
             *((_QWORD *)this + 30),
             this,
             a2);
  if ( !(_BYTE)result )
    return QT::QTreeView::keyPressEvent(this, a2);
  return result;
}
