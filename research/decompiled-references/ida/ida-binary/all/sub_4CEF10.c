QT::QObject *__fastcall sub_4CEF10(QT::QStackedWidget **a1, int a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, int); // rax
  const QT::QObject *v4; // rax
  QT::QObject *result; // rax

  v2 = (unsigned int)sub_4CEAC0(a1, a2);
  v3 = *((__int64 (__fastcall **)(__int64, int))*a1 + 57);
  if ( v3 == sub_4C46C0 )
  {
    v4 = (const QT::QObject *)QT::QStackedWidget::widget(a1[9], v2);
    result = (QT::QObject *)QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v4);
  }
  else
  {
    result = (QT::QObject *)v3((__int64)a1, v2);
  }
  if ( result )
    return (QT::QObject *)sub_482660((__int64)(QT::QCoreApplication::self + 2), result, 0);
  return result;
}
