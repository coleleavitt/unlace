void __fastcall sub_549FF0(_QWORD *a1)
{
  *(a1 - 2) = &DockWidgetTitle___vtable;
  *a1 = DockWidgetTitle___vtable_at__16;
  QT::QFrame::~QFrame((QT::QFrame *)(a1 - 2));
  operator delete(a1 - 2, 0x48u);
}
