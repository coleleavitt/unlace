void __fastcall sub_5491F0(_QWORD *a1)
{
  *(a1 - 2) = &TopLevelDockArea___vtable;
  *a1 = TopLevelDockArea___vtable_at__16;
  DockArea__::vfunc_3((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
