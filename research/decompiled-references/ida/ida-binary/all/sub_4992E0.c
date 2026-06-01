__int64 __fastcall sub_4992E0(QT::QTreeView *a1)
{
  __int64 result; // rax

  QT::QTreeView::updateGeometries(a1);
  result = *((_QWORD *)a1 + 4);
  if ( *(char *)(result + 9) < 0 )
    return sub_4A72C0(*((_QWORD *)a1 + 30), a1);
  return result;
}
