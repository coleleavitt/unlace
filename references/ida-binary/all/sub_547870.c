void __fastcall sub_547870(__int64 a1)
{
  QT::QTableView *v1; // rdi

  v1 = (QT::QTableView *)(a1 - 16);
  *(_QWORD *)v1 = &chooser_table_widget_t___vtable;
  *((_QWORD *)v1 + 2) = chooser_table_widget_t___vtable_at__16;
  QT::QTableView::~QTableView(v1);
}
