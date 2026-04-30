void __fastcall SOTypeOffsets__::vfunc_4(QT::QTableWidget *a1)
{
  *(_QWORD *)a1 = &SOTypeOffsets___vtable;
  *((_QWORD *)a1 + 2) = SOTypeOffsets___vtable_at__16;
  QT::QTableWidget::~QTableWidget(a1);
  operator delete(a1, 0x30u);
}
