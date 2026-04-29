void __fastcall notification_box_t__::vfunc_1(_QWORD *a1)
{
  *(a1 - 2) = &off_4E1A8;
  *a1 = notification_box_t___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
