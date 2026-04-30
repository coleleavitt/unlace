void __fastcall sub_46E5B0(__int64 a1)
{
  QT::QTreeWidget *v1; // rdi

  v1 = (QT::QTreeWidget *)(a1 - 16);
  *(_QWORD *)v1 = &SOStructsAndUnions___vtable;
  *((_QWORD *)v1 + 2) = SOStructsAndUnions___vtable_at__16;
  QT::QTreeWidget::~QTreeWidget(v1);
}
