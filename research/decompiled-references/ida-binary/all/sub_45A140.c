void __fastcall highlight_t__::vfunc_4(QT::QObject *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi

  *(_QWORD *)this = &highlight_t___vtable;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[4];
        if ( v7 )
        {
          v6[5] = 0;
          qfree(v7, a2);
        }
        v8 = v6[1];
        if ( v8 )
        {
          v6[2] = 0;
          qfree(v8, a2);
        }
        v3 = *((_QWORD *)this + 2);
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v3, a2);
  }
  QT::QObject::~QObject(this);
  operator delete(this, 0x30u);
}
