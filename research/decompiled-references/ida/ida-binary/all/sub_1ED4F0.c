__int64 __fastcall UserGraphViewer__::vfunc_2(__int64 a1)
{
  QT::QWidget *v1; // rax
  __int64 result; // rax
  QT::QWidget *v3; // rdi

  v1 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)(a1 - 104));
  result = QT::QWidget::update(v1);
  v3 = *(QT::QWidget **)(a1 + 664);
  if ( v3 )
  {
    result = *((_QWORD *)v3 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v3);
  }
  return result;
}
