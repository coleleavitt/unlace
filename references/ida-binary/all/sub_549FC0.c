void __fastcall DockWidgetTitle__::vfunc_4(QT::QFrame *a1)
{
  *(_QWORD *)a1 = &DockWidgetTitle___vtable;
  *((_QWORD *)a1 + 2) = DockWidgetTitle___vtable_at__16;
  QT::QFrame::~QFrame(a1);
  operator delete(a1, 0x48u);
}
