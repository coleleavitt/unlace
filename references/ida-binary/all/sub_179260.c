void __fastcall ISerializedPositionEvent__::vfunc_0(QT::QEvent *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi

  *(_QWORD *)this = ISerializedPositionEvent___vtable;
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  QT::QEvent::~QEvent(this);
}
