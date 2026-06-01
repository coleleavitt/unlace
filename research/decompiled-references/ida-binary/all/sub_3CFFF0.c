__int64 __fastcall sub_3CFFF0(__int64 a1)
{
  if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
    QT::QWidget::close(qword_8CCE70);
  return QT::QWidget::hideEvent(a1);
}
