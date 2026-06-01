void __fastcall sub_464C90(_QWORD *a1, const char *a2)
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

  *(a1 - 2) = &ecfringe_t___vtable;
  *a1 = ecfringe_t___vtable_at__16;
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3, a2);
  }
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
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
        v4 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
