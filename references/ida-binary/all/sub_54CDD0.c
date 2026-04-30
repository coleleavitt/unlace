void __fastcall chooser_widget_container_t__::vfunc_4(QT::QGroupBox *a1)
{
  *(_QWORD *)a1 = &labeled_group_box_t___vtable;
  *((_QWORD *)a1 + 2) = labeled_group_box_t___vtable_at__16;
  QT::QGroupBox::~QGroupBox(a1);
  operator delete(a1, 0x40u);
}
