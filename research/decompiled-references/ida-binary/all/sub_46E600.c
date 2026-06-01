void __fastcall sub_46E600(_QWORD *a1)
{
  *(a1 - 2) = &SOStructsAndUnions___vtable;
  *a1 = SOStructsAndUnions___vtable_at__16;
  QT::QTreeWidget::~QTreeWidget((QT::QTreeWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
