void __fastcall CLILineEdit__::vfunc_4(QT::QLineEdit *a1)
{
  *(_QWORD *)a1 = &CLILineEdit___vtable;
  *((_QWORD *)a1 + 2) = CLILineEdit___vtable_at__16;
  QT::QLineEdit::~QLineEdit(a1);
  operator delete(a1, 0x28u);
}
