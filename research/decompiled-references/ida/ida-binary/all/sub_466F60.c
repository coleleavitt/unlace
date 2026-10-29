void __fastcall blinking_t__::vfunc_4(QT::QObject *this)
{
  *(_QWORD *)this = &blinking_t___vtable;
  if ( *((_DWORD *)this + 7) )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 28));
  QT::QObject::~QObject(this);
  operator delete(this, 0x28u);
}
