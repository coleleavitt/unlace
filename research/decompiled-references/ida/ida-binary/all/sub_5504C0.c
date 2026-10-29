void __fastcall sub_5504C0(_QWORD *a1)
{
  *(a1 - 2) = &ui_label_t___vtable;
  *a1 = ui_label_t___vtable_at__16;
  QT::QLabel::~QLabel((QT::QLabel *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
