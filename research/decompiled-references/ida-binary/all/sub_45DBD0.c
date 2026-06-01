__int64 __fastcall bookmarks_place_cache_t__::vfunc_2(QT::QMetaObject *this, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  void **v6; // r8

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        QT::QMetaObject::activate(this, (QT::QObject *)&off_87B060, nullptr, 0, v6);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        **a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
