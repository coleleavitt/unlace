QT::QAbstractItemView *sub_19A650()
{
  const QT::QObject *v0; // rax
  QT::QAbstractItemView *result; // rax

  v0 = (const QT::QObject *)sub_2DC6E0("Breakpoints");
  result = (QT::QAbstractItemView *)QT::QMetaObject::cast((QT::QMetaObject *)&off_8809A0, v0);
  if ( result )
    return (QT::QAbstractItemView *)sub_19F6E0(result);
  return result;
}
