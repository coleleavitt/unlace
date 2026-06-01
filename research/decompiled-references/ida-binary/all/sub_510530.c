unsigned __int64 __fastcall sub_510530(QT::QWidget *this)
{
  __int64 v2; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 112LL))(*((_QWORD *)this + 7));
  QT::QWidget::setMinimumSize(this, v2, SHIDWORD(v2));
  QT::QWidget::resize(this, &v2);
  return v3 - __readfsqword(0x28u);
}
