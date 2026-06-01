void __fastcall sub_54CF70(_QWORD *a1)
{
  *(a1 - 2) = &input_field_t___vtable;
  *a1 = input_field_t___vtable_at__16;
  QT::QLineEdit::~QLineEdit((QT::QLineEdit *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
