void __fastcall tchooser_table_widget_t__::vfunc_4(QT::QTableView *a1)
{
  *(_QWORD *)a1 = &chooser_table_widget_t___vtable;
  *((_QWORD *)a1 + 2) = chooser_table_widget_t___vtable_at__16;
  QT::QTableView::~QTableView(a1);
  operator delete(a1, 0x30u);
}
