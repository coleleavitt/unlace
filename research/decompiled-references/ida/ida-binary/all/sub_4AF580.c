unsigned __int64 __fastcall sub_4AF580(QT::QAbstractButton *this, const QT::QString *a2, QT::QWidget *a3, int a4)
{
  QT::QPushButton::QPushButton(this, a3);
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 0xFFFF;
  *((_QWORD *)this + 2) = ColorButton___vtable_at__16;
  *(_QWORD *)this = &ColorButton___vtable;
  *((_WORD *)this + 38) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  return sub_4AF3C0(this, a2, a4);
}
