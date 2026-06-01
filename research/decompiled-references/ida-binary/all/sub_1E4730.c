void __fastcall sub_1E4730(_QWORD *a1, const char *a2)
{
  *(a1 - 2) = &LineInfoWidget___vtable;
  *a1 = LineInfoWidget___vtable_at__16;
  qfree(a1[4], a2);
  qfree(a1[5], a2);
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x40u);
}
