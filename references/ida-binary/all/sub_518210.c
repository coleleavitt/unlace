QT::QAction *__fastcall sub_518210(QT::QAction *this)
{
  const QT::QObject *v1; // rax
  QT::QAction *result; // rax

  v1 = (const QT::QObject *)QT::QObject::sender(this);
  result = (QT::QAction *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QAction::staticMetaObject, v1);
  if ( result )
    return (QT::QAction *)sub_517B40(this, result);
  return result;
}
