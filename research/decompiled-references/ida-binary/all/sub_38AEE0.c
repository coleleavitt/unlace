void __fastcall HintProvider__::vfunc_4(QT::QObject *this)
{
  *(_QWORD *)this = &HintProvider___vtable;
  if ( *((_DWORD *)this + 138) )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 552));
  QT::QObject::~QObject(this);
  operator delete(this, 0x238u);
}
