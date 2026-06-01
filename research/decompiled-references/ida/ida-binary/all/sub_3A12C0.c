__int64 __fastcall sub_3A12C0(__int64 a1)
{
  QT::QAbstractScrollArea *v1; // rax
  QT::QWidget *v2; // rax

  v1 = (QT::QAbstractScrollArea *)sub_49AD60(a1 - 2512);
  v2 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(v1);
  return QT::QWidget::update(v2);
}
