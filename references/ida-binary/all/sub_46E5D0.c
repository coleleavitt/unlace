void __fastcall SOStructsAndUnions__::vfunc_4(QT::QTreeWidget *a1)
{
  *(_QWORD *)a1 = &SOStructsAndUnions___vtable;
  *((_QWORD *)a1 + 2) = SOStructsAndUnions___vtable_at__16;
  QT::QTreeWidget::~QTreeWidget(a1);
  operator delete(a1, 0x30u);
}
