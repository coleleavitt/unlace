__int64 __fastcall sub_524840(QT::QTreeView *this, __int64 a2)
{
  QT::QKeyEvent *v2; // rbx
  __int64 result; // rax

  v2 = (QT::QKeyEvent *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  result = QT::QTreeView::keyPressEvent(this, v2);
  if ( v2 )
    return (*(__int64 (__fastcall **)(QT::QKeyEvent *))(*(_QWORD *)v2 + 8LL))(v2);
  return result;
}
