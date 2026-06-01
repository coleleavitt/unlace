void __fastcall sub_4F7B10(__int64 a1)
{
  QT::QAccessibleWidget *v1; // rbx
  QT::QAccessibleTextInterface *v2; // rdi

  v1 = (QT::QAccessibleWidget *)(a1 - 16);
  v2 = (QT::QAccessibleTextInterface *)(a1 + 16);
  *((_QWORD *)v2 - 4) = logAccessible___vtable;
  *((_QWORD *)v2 - 2) = logAccessible___vtable_at__16;
  *(_QWORD *)v2 = logAccessible___vtable_at__32;
  QT::QAccessibleTextInterface::~QAccessibleTextInterface(v2);
  QT::QAccessibleWidget::~QAccessibleWidget(v1);
}
