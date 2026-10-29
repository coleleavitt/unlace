void __fastcall LineInfoWidget__::vfunc_3(QT::QWidget *this, const char *a2)
{
  *(_QWORD *)this = &LineInfoWidget___vtable;
  *((_QWORD *)this + 2) = LineInfoWidget___vtable_at__16;
  qfree(*((_QWORD *)this + 6), a2);
  qfree(*((_QWORD *)this + 7), a2);
  QT::QWidget::~QWidget(this);
}
