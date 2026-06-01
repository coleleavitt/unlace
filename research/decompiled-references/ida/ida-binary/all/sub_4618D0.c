QT::QLineEdit *__fastcall CLILineEdit__::vfunc_1(QT::QLineEdit *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "CLILineEdit") )
    return this;
  return (QT::QLineEdit *)QT::QLineEdit::qt_metacast(this, a2);
}
