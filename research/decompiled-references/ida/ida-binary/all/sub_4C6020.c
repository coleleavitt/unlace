QT::QObject **__fastcall sub_4C6020(QT::QWidget *a1, QT::QWidget *this)
{
  QT::QObject **result; // rax

  result = *((QT::QObject ***)a1 + 5);
  if ( *result )
  {
    QT::QObject::deleteLater(*result);
    QT::QWidget::setParent(**((QT::QWidget ***)a1 + 5), nullptr);
    result = *((QT::QObject ***)a1 + 5);
    *result = nullptr;
  }
  if ( this )
  {
    QT::QWidget::setParent(this, a1);
    **((_QWORD **)a1 + 5) = this;
    return (QT::QObject **)sub_4C5F10(a1);
  }
  return result;
}
