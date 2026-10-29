void __fastcall sub_46D080(__int64 a1)
{
  QT::QPushButton *v1; // rdi

  v1 = (QT::QPushButton *)(a1 - 16);
  *(_QWORD *)v1 = &nav_scroll_button_t___vtable;
  *((_QWORD *)v1 + 2) = nav_scroll_button_t___vtable_at__16;
  QT::QPushButton::~QPushButton(v1);
}
