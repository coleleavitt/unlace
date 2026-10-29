QT::QWidget *__fastcall sub_4CD540(__int64 a1)
{
  QT::QWidget *result; // rax
  const QT::QObject *v2; // rbx
  __int64 v3; // rax
  QT::QWidget *v4; // rax

  result = *(QT::QWidget **)(a1 + 8);
  v2 = *((const QT::QObject **)result + 2);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      result = *((QT::QWidget **)v2 + 1);
      v2 = *((const QT::QObject **)result + 2);
      if ( !v2 )
        return result;
    }
    v4 = (QT::QWidget *)sub_4C5EE0(v3);
    return sub_4CAF60(v4, a1, 0, 1);
  }
  return result;
}
