void __fastcall sub_470720(_QWORD *a1)
{
  *(a1 - 2) = &chooser_table_widget_t___vtable;
  *a1 = chooser_table_widget_t___vtable_at__16;
  QT::QTableView::~QTableView((QT::QTableView *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
