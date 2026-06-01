double __fastcall sub_47D700(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  QT::QFont *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (QT::QFont *)(v3 + 72 * i);
        v7 = *((_QWORD *)v6 + 5);
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v7, a2);
        }
        v8 = *((_QWORD *)v6 + 2);
        if ( v8 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v8, a2);
        }
        QT::QFont::~QFont(v6);
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
