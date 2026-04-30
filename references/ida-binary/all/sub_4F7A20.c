void __fastcall logAccessible__::vfunc_1(QT::QAccessibleWidget *a1)
{
  QT::QAccessibleTextInterface *v2; // rdi

  v2 = (QT::QAccessibleWidget *)((char *)a1 + 32);
  *((_QWORD *)v2 - 4) = logAccessible___vtable;
  *((_QWORD *)v2 - 2) = logAccessible___vtable_at__16;
  *(_QWORD *)v2 = logAccessible___vtable_at__32;
  QT::QAccessibleTextInterface::~QAccessibleTextInterface(v2);
  QT::QAccessibleWidget::~QAccessibleWidget(a1);
  operator delete(a1, 0x28u);
}
