__int64 __fastcall sub_1F9200(QT::QWidget *this, QT::QFocusEvent *a2)
{
  __int64 (__fastcall *v3)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v4; // rax
  QT::QWidget *v5; // rdi

  nullsub_66((char *)this + 104);
  if ( *((_BYTE *)this + 556) )
  {
    *((_BYTE *)this + 556) = 0;
    sub_1F61A0((_BYTE *)this + 528);
  }
  (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)this + 696LL))(this);
  sub_1F4990(0, this);
  v3 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 760LL);
  if ( v3 == sub_1E6980 )
  {
    v4 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
    QT::QWidget::update(v4);
    v5 = *((QT::QWidget **)this + 96);
    if ( v5 && *(char *)(*((_QWORD *)v5 + 4) + 9LL) < 0 )
      QT::QWidget::update(v5);
  }
  else
  {
    v3(this);
  }
  return QT::QWidget::focusInEvent(this, a2);
}
