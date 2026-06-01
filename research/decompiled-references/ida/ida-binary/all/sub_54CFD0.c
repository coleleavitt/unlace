QT::QLineEdit *__fastcall input_field_t__::vfunc_1(QT::QLineEdit *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "input_field_t") )
    return this;
  return (QT::QLineEdit *)QT::QLineEdit::qt_metacast(this, a2);
}
