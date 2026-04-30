__int64 __fastcall sub_4CECC0(QT::QStackedWidget **a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 (__fastcall *v6)(__int64, int); // rax
  const QT::QObject *v7; // rax

  v2 = QT::QTabBar::currentIndex(a1[8]);
  v3 = sub_4CEAC0(a1, v2);
  result = sub_4CE330(a1, a2);
  if ( v3 != -1 )
  {
    v5 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
    result = v5 == sub_4C46A0 ? QT::QStackedWidget::count(a1[9]) : v5((__int64)a1);
    if ( (int)result > (int)v3 )
    {
      v6 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
      if ( v6 == sub_4C46C0 )
      {
        v7 = (const QT::QObject *)QT::QStackedWidget::widget(a1[9], v3);
        result = QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v7);
      }
      else
      {
        result = v6((__int64)a1, v3);
      }
      if ( !*(_BYTE *)(result + 44) )
        return (*((__int64 (__fastcall **)(QT::QStackedWidget **, _QWORD))*a1 + 60))(a1, v3);
    }
  }
  return result;
}
