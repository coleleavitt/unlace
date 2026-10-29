void __fastcall ecfringe_t__::vfunc_4(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  *(_QWORD *)this = &ecfringe_t___vtable;
  *((_QWORD *)this + 2) = ecfringe_t___vtable_at__16;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 6);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 96 * i);
        v8 = v7[9];
        if ( v8 )
        {
          v7[10] = 0;
          qfree(v8, a2);
        }
        v9 = v7[6];
        if ( v9 )
        {
          v7[7] = 0;
          qfree(v9, a2);
        }
        v10 = v7[3];
        if ( v10 )
        {
          v7[4] = 0;
          qfree(v10, a2);
        }
        v11 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v11, a2);
        }
        v4 = *((_QWORD *)this + 5);
      }
    }
    *((_QWORD *)this + 6) = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget(this);
  operator delete(this, 0x60u);
}
