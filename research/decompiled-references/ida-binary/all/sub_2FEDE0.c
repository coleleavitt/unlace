void __fastcall refresh_dirty_widgets_event_t__::vfunc_1(QT::QEvent *a1)
{
  *(_QWORD *)a1 = &refresh_dirty_widgets_event_t___vtable;
  QT::QEvent::~QEvent(a1);
  operator delete(a1, 0x20u);
}
