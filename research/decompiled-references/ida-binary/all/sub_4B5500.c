void __fastcall IWidgetConfigEvent__::vfunc_1(QT::QEvent *a1)
{
  *(_QWORD *)a1 = &IWidgetConfigEvent___vtable;
  QT::QEvent::~QEvent(a1);
  operator delete(a1, 0x10u);
}
