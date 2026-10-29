void __fastcall sub_549050(_QWORD *a1)
{
  *(a1 - 2) = &PlaceHolderWidget___vtable;
  *a1 = PlaceHolderWidget___vtable_at__16;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
