__int64 __fastcall sub_4F1FE0(QT::QObject *a1, __int64 a2)
{
  QT::QComboBox *v2; // rdi

  if ( *(_DWORD *)(a2 + 8) == 13 )
    return QT::qt_qFindChild_helper(a1, 0, 0, &QT::QLineEdit::staticMetaObject, 1);
  if ( *(_QWORD *)(a2 + 112) <= 1u )
    return QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLineEdit::staticMetaObject, a1);
  v2 = (QT::QComboBox *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QComboBox::staticMetaObject, a1);
  if ( v2 )
    return QT::QComboBox::lineEdit(v2);
  else
    return 0;
}
