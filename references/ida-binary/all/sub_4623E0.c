void __fastcall sub_4623E0(_QWORD *a1)
{
  *(a1 - 2) = &BarDockWidget___vtable;
  *a1 = BarDockWidget___vtable_at__16;
  QT::QDockWidget::~QDockWidget((QT::QDockWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
