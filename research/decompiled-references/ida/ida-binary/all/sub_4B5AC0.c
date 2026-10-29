void __fastcall IGetWidgetConfigEvent__::vfunc_0(QT::QEvent *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 *v6; // rbp
  __int64 v7; // rdi

  *(_QWORD *)this = IGetWidgetConfigEvent___vtable;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 40 * i);
        jvalue_t_clear(v6 + 3);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7, a2);
        }
        v3 = *((_QWORD *)this + 2);
      }
    }
    *((_QWORD *)this + 3) = 0;
    qfree(v3, a2);
  }
  *(_QWORD *)this = &IWidgetConfigEvent___vtable;
  QT::QEvent::~QEvent(this);
}
