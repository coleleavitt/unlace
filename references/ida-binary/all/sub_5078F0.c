__int64 __fastcall sub_5078F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  QT::QPushButton *v5; // rdi
  QT::QPushButton *v6; // rdi

  result = QT::QWidget::showEvent(a1, a2);
  v4 = *(_QWORD *)(a1 + 304);
  if ( !v4 )
    goto LABEL_5;
  if ( !*(_BYTE *)(a1 + 312) && *(_QWORD *)(a1 + 416) )
  {
    result = QT::QMetaObject::cast(
               (QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject,
               *(const QT::QObject **)(a1 + 304));
    if ( result )
    {
LABEL_5:
      v5 = *(QT::QPushButton **)(a1 + 416);
      if ( v5 )
      {
        QT::QPushButton::setDefault(v5, 1);
        return QT::QWidget::setFocus(*(_QWORD *)(a1 + 416), 7);
      }
      return result;
    }
    v4 = *(_QWORD *)(a1 + 304);
  }
  result = QT::QWidget::setFocus(v4, 7);
  v6 = *(QT::QPushButton **)(a1 + 416);
  if ( v6 )
    return QT::QPushButton::setDefault(v6, 1);
  return result;
}
