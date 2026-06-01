unsigned __int64 __fastcall sub_498520(QT::QLabel *this, const QT::QString *a2, __int64 a3)
{
  unsigned __int64 result; // rax

  sub_53B9D0(this, 0);
  *(_QWORD *)this = &buddy_label_t___vtable;
  *((_QWORD *)this + 2) = buddy_label_t___vtable_at__16;
  QT::QKeySequence::QKeySequence((QT::QLabel *)((char *)this + 56));
  *((_QWORD *)this + 6) = 0;
  QT::QWidget::setFocusPolicy(this, 2);
  result = QT::QWidget::setSizePolicy(this, &loc_540000);
  if ( a3 )
    return sub_498220(this, a2, a3);
  return result;
}
