__int64 __fastcall sub_1E45F0(QT::QWidget *this, __int64 a2)
{
  QT::QWidget::QWidget(this, 0, 0);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = &LineInfoWidget___vtable;
  *((_QWORD *)this + 2) = LineInfoWidget___vtable_at__16;
  QT::QWidget::setFixedWidth(this, 10);
  return QT::QWidget::setSizePolicy(this, &unk_700000);
}
