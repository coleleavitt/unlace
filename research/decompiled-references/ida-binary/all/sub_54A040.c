void __fastcall sub_54A040(__int64 a1)
{
  QT::QTabBar *v1; // rdi

  v1 = (QT::QTabBar *)(a1 - 16);
  *(_QWORD *)v1 = &DockTabBar___vtable;
  *((_QWORD *)v1 + 2) = DockTabBar___vtable_at__16;
  QT::QTabBar::~QTabBar(v1);
}
