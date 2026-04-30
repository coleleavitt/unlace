void **__fastcall sub_533E40(__int64 a1)
{
  void **result; // rax
  void **i; // rbp
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rsi

  result = (void **)QT::QCoreApplication::self;
  if ( QT::QCoreApplication::self )
  {
    result = (void **)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 32LL))(QT::QCoreApplication::self + 2);
    for ( i = result; i; i = (void **)i[15] )
    {
      if ( i[1] )
      {
        v3 = 0;
        do
        {
          while ( 1 )
          {
            result = (void **)*i;
            v4 = *((_QWORD **)*i + v3);
            if ( a1 == v4[18] )
              break;
            if ( ++v3 >= (unsigned __int64)i[1] )
              goto LABEL_8;
          }
          result = (void **)sub_533DA0((void ***)i, v4);
        }
        while ( v3 < (unsigned __int64)i[1] );
      }
LABEL_8:
      ;
    }
  }
  return result;
}
