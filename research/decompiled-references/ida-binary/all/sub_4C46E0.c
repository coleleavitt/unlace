__int64 __fastcall sub_4C46E0(__int64 a1, int a2)
{
  const QT::QObject *v2; // rax

  v2 = (const QT::QObject *)QT::QSplitter::widget(*(QT::QSplitter **)(a1 + 104), a2);
  return QT::QMetaObject::cast((QT::QMetaObject *)&off_899980, v2);
}
