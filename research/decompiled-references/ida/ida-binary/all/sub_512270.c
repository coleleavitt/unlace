__int64 __fastcall sub_512270(QT::QObject *this, QT::QWidget *a2)
{
  __int64 result; // rax

  QT::QAbstractScrollArea::QAbstractScrollArea(this, a2);
  *((_QWORD *)this + 5) = &msg_entries_t___vtable;
  *((_QWORD *)this + 10) = this;
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = &log_widget_t___vtable;
  *((_QWORD *)this + 2) = log_widget_t___vtable_at__16;
  *((_QWORD *)this + 11) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 18) = -1;
  *((_BYTE *)this + 152) = 1;
  *((_OWORD *)this + 4) = 0;
  *(_OWORD *)((char *)this + 104) = -1;
  *((_OWORD *)this + 8) = 0;
  QT::QAbstractScrollArea::setViewportMargins(this, 6, 0, 6, 0);
  sub_4EBBA0(this);
  result = reg_int_op("LogAutoScroll", 0, 1, 0);
  *((_BYTE *)this + 152) = (_DWORD)result != 0;
  return result;
}
