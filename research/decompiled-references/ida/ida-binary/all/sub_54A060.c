void __fastcall DockTabBar__::vfunc_4(QT::QTabBar *a1)
{
  *(_QWORD *)a1 = &DockTabBar___vtable;
  *((_QWORD *)a1 + 2) = DockTabBar___vtable_at__16;
  QT::QTabBar::~QTabBar(a1);
  operator delete(a1, 0x50u);
}
