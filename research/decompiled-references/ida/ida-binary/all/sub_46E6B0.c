void __fastcall sub_46E6B0(__int64 a1)
{
  QT::QTableWidget *v1; // rdi

  v1 = (QT::QTableWidget *)(a1 - 16);
  *(_QWORD *)v1 = &SOTypeOffsets___vtable;
  *((_QWORD *)v1 + 2) = SOTypeOffsets___vtable_at__16;
  QT::QTableWidget::~QTableWidget(v1);
}
