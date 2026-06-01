__int64 __fastcall sub_49ACF0(QT::QTableView *a1)
{
  __int64 result; // rax

  QT::QTableView::updateGeometries(a1);
  result = *((_QWORD *)a1 + 4);
  if ( *(char *)(result + 9) < 0 )
    return sub_4A72C0(*((_QWORD *)a1 + 5), a1);
  return result;
}
