void __fastcall sub_549FA0(__int64 a1)
{
  QT::QFrame *v1; // rdi

  v1 = (QT::QFrame *)(a1 - 16);
  *(_QWORD *)v1 = &DockWidgetTitle___vtable;
  *((_QWORD *)v1 + 2) = DockWidgetTitle___vtable_at__16;
  QT::QFrame::~QFrame(v1);
}
