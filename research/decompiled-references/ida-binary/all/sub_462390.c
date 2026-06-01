void __fastcall sub_462390(__int64 a1)
{
  QT::QDockWidget *v1; // rdi

  v1 = (QT::QDockWidget *)(a1 - 16);
  *(_QWORD *)v1 = &BarDockWidget___vtable;
  *((_QWORD *)v1 + 2) = BarDockWidget___vtable_at__16;
  QT::QDockWidget::~QDockWidget(v1);
}
