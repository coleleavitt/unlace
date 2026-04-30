void __fastcall sub_5491A0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &TopLevelDockArea___vtable;
  *((_QWORD *)v1 + 2) = TopLevelDockArea___vtable_at__16;
  DockArea__::vfunc_3(v1);
}
