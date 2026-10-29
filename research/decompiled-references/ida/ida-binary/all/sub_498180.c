void __fastcall sub_498180(__int64 a1)
{
  const QT::QObject *v1; // rsi
  QT::QAbstractButton *v3; // rdi

  v1 = *(const QT::QObject **)(a1 + 48);
  if ( v1 )
  {
    v3 = (QT::QAbstractButton *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QPushButton::staticMetaObject, v1);
    if ( v3 )
      QT::QAbstractButton::click(v3);
    else
      QT::QWidget::setFocus(*(_QWORD *)(a1 + 48), 5);
  }
}
