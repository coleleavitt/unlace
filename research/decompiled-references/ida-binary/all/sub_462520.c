void __fastcall sub_462520(_QWORD *a1)
{
  *(a1 - 2) = &NoDockTitleBar___vtable;
  *a1 = NoDockTitleBar___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
