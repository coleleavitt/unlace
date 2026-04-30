QT::QFontDialog *__fastcall font_picker_t__::vfunc_1(QT::QFontDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "font_picker_t") )
    return this;
  return (QT::QFontDialog *)QT::QFontDialog::qt_metacast(this, a2);
}
