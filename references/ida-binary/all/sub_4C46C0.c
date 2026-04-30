__int64 __fastcall sub_4C46C0(__int64 a1, int a2)
{
  const QT::QObject *v2; // rax

  v2 = (const QT::QObject *)QT::QStackedWidget::widget(*(QT::QStackedWidget **)(a1 + 72), a2);
  return QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v2);
}
