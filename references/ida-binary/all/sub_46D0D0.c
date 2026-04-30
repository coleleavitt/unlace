void __fastcall sub_46D0D0(_QWORD *a1)
{
  *(a1 - 2) = &nav_scroll_button_t___vtable;
  *a1 = nav_scroll_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton((QT::QPushButton *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
