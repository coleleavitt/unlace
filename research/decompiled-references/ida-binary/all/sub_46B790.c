void __fastcall ConsoleWidget__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &ConsoleWidget___vtable;
  *((_QWORD *)a1 + 2) = ConsoleWidget___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x38u);
}
