void __fastcall sub_461570(__int64 a1)
{
  QT::QLineEdit *v1; // rdi

  v1 = (QT::QLineEdit *)(a1 - 16);
  *(_QWORD *)v1 = &CLILineEdit___vtable;
  *((_QWORD *)v1 + 2) = CLILineEdit___vtable_at__16;
  QT::QLineEdit::~QLineEdit(v1);
}
