__int64 __fastcall sub_51E9A0(QT::QWidget *a1, bool a2)
{
  QT::QWidget::setVisible(a1, a2);
  if ( a2 )
    return QT::QWidget::setFocus(*((_QWORD *)a1 + 8), 7);
  else
    return QT::QWidget::setFocus(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), 7);
}
