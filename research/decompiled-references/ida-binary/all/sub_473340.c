void __fastcall sub_473340(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // rsi

  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v5 = *(_QWORD *)(a4 + 8);
      v6 = *(_DWORD **)a4;
      if ( *(_UNKNOWN **)v5 == &loc_473310 )
      {
        if ( !*(_QWORD *)(v5 + 8) )
          *v6 = 0;
      }
      else if ( *(_UNKNOWN **)v5 == &loc_473320 && !*(_QWORD *)(v5 + 8) )
      {
        *v6 = 1;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
      case 2LL:
      case 3LL:
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_8935E0, nullptr, 0, a5);
        break;
      case 1LL:
      case 4LL:
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_8935E0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          0,
          a5);
        break;
      default:
        return;
    }
  }
}
