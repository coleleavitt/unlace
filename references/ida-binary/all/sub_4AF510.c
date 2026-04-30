unsigned __int64 __fastcall sub_4AF510(QT::QAbstractButton *this, QT::QWidget *a2, int a3)
{
  QT::QPushButton::QPushButton(this, a2);
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 0xFFFF;
  *((_QWORD *)this + 2) = ColorButton___vtable_at__16;
  *(_QWORD *)this = &ColorButton___vtable;
  *((_WORD *)this + 38) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  return sub_4AF3C0(this, nullptr, a3);
}
