void __fastcall sub_4F7A60(QT::QAccessibleTextInterface *a1)
{
  *((_QWORD *)a1 - 4) = logAccessible___vtable;
  *((_QWORD *)a1 - 2) = logAccessible___vtable_at__16;
  *(_QWORD *)a1 = logAccessible___vtable_at__32;
  QT::QAccessibleTextInterface::~QAccessibleTextInterface(a1);
  QT::QAccessibleWidget::~QAccessibleWidget((QT::QAccessibleTextInterface *)((char *)a1 - 32));
  operator delete((char *)a1 - 32, 0x28u);
}
