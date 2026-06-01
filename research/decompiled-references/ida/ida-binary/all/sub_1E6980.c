__int64 __fastcall sub_1E6980(QT::QAbstractScrollArea *a1)
{
  QT::QWidget *v1; // rax
  __int64 result; // rax
  QT::QWidget *v3; // rdi

  v1 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(a1);
  result = QT::QWidget::update(v1);
  v3 = *((QT::QWidget **)a1 + 96);
  if ( v3 )
  {
    result = *((_QWORD *)v3 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v3);
  }
  return result;
}
