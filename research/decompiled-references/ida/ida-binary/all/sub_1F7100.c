__int64 __fastcall sub_1F7100(QT::QWidget *this, QT::QEvent *a2)
{
  QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 800));
  if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
    QT::QWidget::close(qword_8CCE70);
  return QT::QWidget::leaveEvent(this, a2);
}
