QT::QLineEdit *__fastcall quick_filter_input_t__::vfunc_1(QT::QLineEdit *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "quick_filter_input_t") )
    return this;
  return (QT::QLineEdit *)QT::QLineEdit::qt_metacast(this, a2);
}
