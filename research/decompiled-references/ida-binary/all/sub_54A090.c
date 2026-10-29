void __fastcall sub_54A090(_QWORD *a1)
{
  *(a1 - 2) = &DockTabBar___vtable;
  *a1 = DockTabBar___vtable_at__16;
  QT::QTabBar::~QTabBar((QT::QTabBar *)(a1 - 2));
  operator delete(a1 - 2, 0x50u);
}
