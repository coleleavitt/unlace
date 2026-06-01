void __fastcall caret_status_t__::vfunc_4(QT::QObject *this)
{
  *(_QWORD *)this = &caret_status_t___vtable;
  if ( *((_DWORD *)this + 6) )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 24));
  QT::QObject::~QObject(this);
  operator delete(this, 0x20u);
}
