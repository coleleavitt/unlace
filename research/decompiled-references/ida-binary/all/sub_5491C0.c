void __fastcall TopLevelDockArea__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &TopLevelDockArea___vtable;
  *((_QWORD *)a1 + 2) = TopLevelDockArea___vtable_at__16;
  DockArea__::vfunc_3(a1);
  operator delete(a1, 0x30u);
}
