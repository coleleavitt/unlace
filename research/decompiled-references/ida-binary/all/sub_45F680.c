void __fastcall sub_45F680(QT::QMetaObject *a1, int a2, const QT::QMetaObject *a3, __int64 a4, void **a5, double a6)
{
  __int64 v6; // rax

  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(__int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_45F670
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else
  {
    switch ( (_DWORD)a3 )
    {
      case 1:
        (*(void (__fastcall **)(QT::QMetaObject *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 1064LL))(
          a1,
          **(_QWORD **)(a4 + 8),
          **(_QWORD **)(a4 + 16),
          **(_QWORD **)(a4 + 24));
        break;
      case 2:
        sub_3AF710((__int64)a1, **(QT::QWidget ****)(a4 + 8), a6);
        break;
      case 0:
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_87DE00, a3, 0, a5);
        break;
    }
  }
}
