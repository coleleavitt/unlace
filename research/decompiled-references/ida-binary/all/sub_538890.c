_QWORD *__fastcall sub_538890(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbp
  __int64 v7; // r12
  __int64 i; // rbx
  _QWORD *v9; // rdi

  if ( byte_8D253C )
  {
    if ( under_debugger )
      BUG();
    interr(40410, a3, a4, a5, a1);
    return (_QWORD *)sub_538920();
  }
  else
  {
    byte_8D253C = 1;
    result = QT::QCoreApplication::self;
    if ( QT::QCoreApplication::self )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
      v6 = result;
      do
      {
        v7 = v6[1];
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = *(_QWORD **)(*v6 + 8 * i);
            result = (_QWORD *)sub_5378C0(v9);
          }
        }
        v6 = (_QWORD *)v6[15];
      }
      while ( v6 );
    }
  }
  return result;
}
