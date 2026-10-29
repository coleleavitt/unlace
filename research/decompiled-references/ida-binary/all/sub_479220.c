const QT::QObject *__fastcall sub_479220(__int64 a1, const QT::QObject *a2)
{
  const QT::QObject *v2; // rbx
  QT::QMetaObject *v3; // rax

  if ( !a2 )
    return nullptr;
  v2 = a2;
  while ( 1 )
  {
    v3 = (QT::QMetaObject *)(**(__int64 (__fastcall ***)(const QT::QObject *))v2)(v2);
    if ( (unsigned int)QT::QMetaObject::indexOfMethod(v3, "form_activate()") != -1 )
      break;
    if ( (*(_BYTE *)(*((_QWORD *)v2 + 4) + 12LL) & 1) != 0 )
    {
      if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_89EFA0, v2)
        || QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMessageBox::staticMetaObject, v2) )
      {
        return nullptr;
      }
    }
    else if ( QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v2)
           || QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenuBar::staticMetaObject, v2) )
    {
      return nullptr;
    }
    v2 = *(const QT::QObject **)(*((_QWORD *)v2 + 1) + 16LL);
    if ( !v2 )
      return nullptr;
  }
  return v2;
}
