void __fastcall sub_4615C0(_QWORD *a1)
{
  *(a1 - 2) = &CLILineEdit___vtable;
  *a1 = CLILineEdit___vtable_at__16;
  QT::QLineEdit::~QLineEdit((QT::QLineEdit *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
