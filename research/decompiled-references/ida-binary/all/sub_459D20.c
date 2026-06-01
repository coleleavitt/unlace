void __fastcall caret_status_t__::vfunc_3(QT::QObject *this)
{
  *(_QWORD *)this = &caret_status_t___vtable;
  if ( *((_DWORD *)this + 6) )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 24));
  QT::QObject::~QObject(this);
}
