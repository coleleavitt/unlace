void __fastcall sub_459340(QT::QMetaObject *a1, int a2, int a3, __int64 a4, void **a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // rsi

  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v5 = *(_QWORD *)(a4 + 8);
      v6 = *(_DWORD **)a4;
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v5 == sub_459310 )
      {
        if ( !*(_QWORD *)(v5 + 8) )
          *v6 = 0;
      }
      else if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v5 == sub_459320
             && !*(_QWORD *)(v5 + 8) )
      {
        *v6 = 1;
      }
    }
  }
  else if ( a3 )
  {
    if ( a3 == 1 )
      QT::QMetaObject::activate(a1, (QT::QObject *)&off_879880, (const QT::QMetaObject *)((char *)&dword_0 + 1), 0, a5);
  }
  else
  {
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_879880, nullptr, 0, a5);
  }
}
