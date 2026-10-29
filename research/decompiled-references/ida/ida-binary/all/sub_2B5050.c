void __fastcall sub_2B5050(QT::QObject *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *(_QWORD *)this = &GraphRenderer___vtable;
  v3 = *((_QWORD *)this + 55);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *((_QWORD *)this + 62);
  *((_QWORD *)this + 55) = 0;
  *((_QWORD *)this + 56) = &highlit_t___vtable;
  if ( v4 )
  {
    *((_QWORD *)this + 63) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
  {
    *((_QWORD *)this + 60) = 0;
    qfree(v5, a2);
  }
  QT::QObject::~QObject((QT::QObject *)((char *)this + 448));
  v6 = *((_DWORD *)this + 105);
  *((_QWORD *)this + 49) = &blinking_t___vtable;
  if ( v6 )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 420));
  QT::QObject::~QObject((QT::QObject *)((char *)this + 392));
  if ( *((_DWORD *)this + 96) )
    QT::QBasicTimer::stop((QT::QObject *)((char *)this + 384));
  v7 = *((_QWORD *)this + 37);
  if ( v7 )
  {
    *((_QWORD *)this + 38) = 0;
    qfree(v7, a2);
  }
  *((_QWORD *)this + 30) = &graph_mouse_pos_t___vtable;
  QT::QObject::~QObject((QT::QObject *)((char *)this + 240));
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    *((_QWORD *)this + 25) = 0;
    qfree(v8, a2);
  }
  sub_174E40(this, (__int64)a2);
}
