__int64 __fastcall highlit_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8
  int v7; // [rsp+Ch] [rbp-1Ch]

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 1 )
      {
        v7 = result;
        if ( (_DWORD)result == 1 )
        {
          QT::QMetaObject::activate(
            this,
            (QT::QObject *)&off_886860,
            (const QT::QMetaObject *)((char *)&dword_0 + 1),
            0,
            v6);
          LODWORD(result) = 1;
        }
        else
        {
          QT::QMetaObject::activate(this, (QT::QObject *)&off_886860, nullptr, 0, v6);
          LODWORD(result) = v7;
        }
      }
      return (unsigned int)(result - 2);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 1 )
        **a4 = 0;
      return (unsigned int)(result - 2);
    }
  }
  return result;
}
