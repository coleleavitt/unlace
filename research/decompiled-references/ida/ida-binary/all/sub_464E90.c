void __fastcall sub_464E90(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // r14
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v2 = (QT::QWidget *)(a1 - 2);
  *(a1 - 2) = &ecfringe_t___vtable;
  *a1 = ecfringe_t___vtable_at__16;
  v4 = a1[7];
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4, a2);
  }
  v5 = a1[3];
  if ( v5 )
  {
    v6 = a1[4];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 96 * i);
        v9 = v8[9];
        if ( v9 )
        {
          v8[10] = 0;
          qfree(v9, a2);
        }
        v10 = v8[6];
        if ( v10 )
        {
          v8[7] = 0;
          qfree(v10, a2);
        }
        v11 = v8[3];
        if ( v11 )
        {
          v8[4] = 0;
          qfree(v11, a2);
        }
        v12 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v12, a2);
        }
        v5 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0x60u);
}
