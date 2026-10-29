void __fastcall NoDockTitleBar__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &NoDockTitleBar___vtable;
  *((_QWORD *)a1 + 2) = NoDockTitleBar___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x30u);
}
