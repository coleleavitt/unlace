QT::QWidget *__fastcall sub_3FACC0(QT::QObject *a1)
{
  const QT::QObject *v1; // rax
  QT::QWidget *result; // rax

  v1 = (const QT::QObject *)QT::QObject::sender(a1);
  result = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_8935E0, v1);
  if ( result )
    return (QT::QWidget *)sub_3FA9A0((__int64)a1, result);
  return result;
}
