__int64 __fastcall sub_1F4880(QT::QAbstractScrollArea *this, __int64 a2)
{
  __int64 (*v2)(void); // rax
  QT::QWidget *v3; // rax
  __int64 result; // rax
  QT::QWidget *v5; // rdi

  *((_BYTE *)this + 880) = a2 != 0;
  if ( a2 )
    sub_1F4820((__int64)this, a2);
  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 760LL);
  if ( (char *)v2 != (char *)sub_1E6980 )
    return v2();
  v3 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(this);
  result = QT::QWidget::update(v3);
  v5 = *((QT::QWidget **)this + 96);
  if ( v5 )
  {
    result = *((_QWORD *)v5 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v5);
  }
  return result;
}
