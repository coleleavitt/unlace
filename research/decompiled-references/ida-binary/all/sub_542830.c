const QT::QObject *__fastcall sub_542830(_QWORD *a1)
{
  const QT::QObject *result; // rax
  QT::QWidget *v3; // rdi
  __int64 v4; // rax

  result = (const QT::QObject *)QT::QApplication::activeModalWidget((QT::QApplication *)a1);
  if ( !result )
    goto LABEL_5;
  v3 = (QT::QWidget *)a1[15];
  if ( result != v3 )
  {
    v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89E7C0, result);
    if ( !v4 )
      return (const QT::QObject *)QT::QTimer::start((QT::QTimer *)(a1 + 82), 500);
    result = *(const QT::QObject **)(v4 + 40);
    if ( a1[84] < (unsigned __int64)result )
      return (const QT::QObject *)QT::QTimer::start((QT::QTimer *)(a1 + 82), 500);
LABEL_5:
    v3 = (QT::QWidget *)a1[15];
    if ( !v3 )
      return result;
  }
  result = (const QT::QObject *)xmmword_8D2598;
  if ( (_QWORD)xmmword_8D2598 )
    return (const QT::QObject *)sub_542320(v3, qword_8D2590 + 56 * xmmword_8D2598 - 56);
  return result;
}
