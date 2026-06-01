void __fastcall sub_46E700(_QWORD *a1)
{
  *(a1 - 2) = &SOTypeOffsets___vtable;
  *a1 = SOTypeOffsets___vtable_at__16;
  QT::QTableWidget::~QTableWidget((QT::QTableWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
