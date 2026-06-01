__int64 __fastcall sub_50FA80(QT::QLineEdit *this, int a2)
{
  int v2; // ebp

  v2 = a2;
  QT::QLineEdit::QLineEdit(this, nullptr);
  *(_QWORD *)this = &input_field_t___vtable;
  *((_QWORD *)this + 2) = input_field_t___vtable_at__16;
  if ( a2 < 0 )
    return QT::QLineEdit::setMaxLength(this, 0x8000);
  if ( !a2 )
    v2 = 1023;
  return QT::QLineEdit::setMaxLength(this, v2);
}
