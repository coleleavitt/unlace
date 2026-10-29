void __fastcall highlit_t__::vfunc_3(QT::QObject *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)this = &highlit_t___vtable;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0;
    qfree(v4, a2);
  }
  QT::QObject::~QObject(this);
}
