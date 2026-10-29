__int64 __fastcall sub_5247D0(QT::QAbstractItemView *this, QT::QKeyEvent *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(char *, QT::QAbstractItemView *, QT::QKeyEvent *))(*((_QWORD *)this + 38) + 32LL))(
             (char *)this + 304,
             this,
             a2);
  if ( !(_BYTE)result )
  {
    result = QT::QAbstractItemView::state(this);
    if ( !(_DWORD)result )
    {
      if ( (unsigned int)(*((_DWORD *)a2 + 16) - 16777220) > 1 )
        return QT::QTreeView::keyPressEvent(this, a2);
      result = sub_523590(this);
      if ( !(_DWORD)result )
        return QT::QTreeView::keyPressEvent(this, a2);
    }
  }
  return result;
}
