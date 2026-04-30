void __fastcall sub_46B7C0(_QWORD *a1)
{
  *(a1 - 2) = &ConsoleWidget___vtable;
  *a1 = ConsoleWidget___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x38u);
}
