__int64 sub_3A12A0()
{
  QT::QAbstractScrollArea *v0; // rax
  QT::QWidget *v1; // rax

  v0 = (QT::QAbstractScrollArea *)sub_49AD60();
  v1 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(v0);
  return QT::QWidget::update(v1);
}
