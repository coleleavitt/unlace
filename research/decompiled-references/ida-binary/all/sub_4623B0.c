void __fastcall BarDockWidget__::vfunc_4(QT::QDockWidget *a1)
{
  *(_QWORD *)a1 = &BarDockWidget___vtable;
  *((_QWORD *)a1 + 2) = BarDockWidget___vtable_at__16;
  QT::QDockWidget::~QDockWidget(a1);
  operator delete(a1, 0x30u);
}
