void __fastcall nav_scroll_button_t__::vfunc_4(QT::QPushButton *a1)
{
  *(_QWORD *)a1 = &nav_scroll_button_t___vtable;
  *((_QWORD *)a1 + 2) = nav_scroll_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton(a1);
  operator delete(a1, 0x30u);
}
