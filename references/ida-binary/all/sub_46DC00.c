QT::QPlainTextEdit *__fastcall TNoteBox__::vfunc_1(QT::QPlainTextEdit *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TNoteBox") )
    return this;
  return (QT::QPlainTextEdit *)QT::QPlainTextEdit::qt_metacast(this, a2);
}
