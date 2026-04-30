__int64 __fastcall sub_1F68C0(QT::QWidget *this)
{
  void (*v2)(void); // rax
  QT::QWidget *v3; // rax
  QT::QWidget *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi

  (*(void (__fastcall **)(QT::QWidget *, _QWORD))(*(_QWORD *)this + 984LL))(this, 0);
  v2 = *(void (**)(void))(*(_QWORD *)this + 760LL);
  if ( (char *)v2 == (char *)sub_1E6980 )
  {
    v3 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
    QT::QWidget::update(v3);
    v4 = *((QT::QWidget **)this + 96);
    if ( v4 && *(char *)(*((_QWORD *)v4 + 4) + 9LL) < 0 )
      QT::QWidget::update(v4);
  }
  else
  {
    v2();
  }
  result = QT::QWidget::hasFocus(this);
  if ( (_BYTE)result )
  {
    (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)this + 704LL))(this);
    result = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)this + 696LL))(this);
  }
  v6 = *((_QWORD *)this + 93);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 432LL))(v6, *((_QWORD *)this + 4) + 56LL);
  return result;
}
