void __fastcall sub_193AE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 i; // r12
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 j; // rbx
  QT::QRegularExpression *v14; // rdi

  if ( a1 )
  {
    v6 = *a1;
    if ( v6 )
    {
      v7 = a1[1];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (__int64 *)(v6 + 48 * i);
          v10 = v9[3];
          if ( v10 )
          {
            v9[4] = 0;
            qfree(v10, a2, a3, a4, a5);
          }
          v11 = *v9;
          if ( *v9 )
          {
            v12 = v9[1];
            if ( v12 )
            {
              for ( j = 0; j != v12; ++j )
              {
                v14 = (QT::QRegularExpression *)(v11 + 8 * j);
                QT::QRegularExpression::~QRegularExpression(v14);
                v11 = *v9;
              }
            }
            v9[1] = 0;
            qfree(v11, a2, a3, a4, a5);
          }
          v6 = *a1;
        }
      }
      a1[1] = 0;
      qfree(v6, a2, a3, a4, a5);
    }
    operator delete(a1, 0x18u);
  }
}
