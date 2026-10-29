void __fastcall widget_types_query_event_t__::vfunc_1(QT::QEvent *this, const char *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = widget_types_query_event_t___vtable;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0;
    qfree(v3, a2);
  }
  QT::QEvent::~QEvent(this);
  operator delete(this, 0x40u);
}
