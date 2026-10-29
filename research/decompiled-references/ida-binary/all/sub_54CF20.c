void __fastcall sub_54CF20(__int64 a1)
{
  QT::QLineEdit *v1; // rdi

  v1 = (QT::QLineEdit *)(a1 - 16);
  *(_QWORD *)v1 = &input_field_t___vtable;
  *((_QWORD *)v1 + 2) = input_field_t___vtable_at__16;
  QT::QLineEdit::~QLineEdit(v1);
}
