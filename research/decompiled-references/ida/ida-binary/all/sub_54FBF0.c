QT::QPlainTextEdit *__fastcall text_area_t__::vfunc_1(QT::QPlainTextEdit *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "text_area_t") )
    return this;
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return (QT::QPlainTextEdit *)((char *)this + 40);
  return (QT::QPlainTextEdit *)QT::QPlainTextEdit::qt_metacast(this, a2);
}
