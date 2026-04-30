__int64 __fastcall sub_5248F0(QT::QTreeView *a1)
{
  __int64 result; // rax

  QT::QTreeView::updateGeometries(a1);
  result = *((_QWORD *)a1 + 4);
  if ( *(char *)(result + 9) < 0 )
    return (*(__int64 (__fastcall **)(QT::QTreeView *))(*(_QWORD *)a1 + 1056LL))(a1);
  return result;
}
