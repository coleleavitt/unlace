void __fastcall sub_173100(QT::QObject *this)
{
  QT::QBasicTimer *v1; // rbp
  __int64 v3; // rdi

  v1 = (QT::QObject *)((char *)this + 32);
  *(_QWORD *)this = &off_86F790;
  QT::QBasicTimer::stop((QT::QObject *)((char *)this + 32));
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  if ( *((_DWORD *)this + 8) )
    QT::QBasicTimer::stop(v1);
  QT::QObject::~QObject(this);
}
