__int64 __fastcall sub_521950(QT::QTreeView *this)
{
  __int64 result; // rax

  result = sub_4DFF10((__int64)this + 304);
  if ( (_BYTE)result )
    return QT::QTreeView::expandAll(this);
  return result;
}
