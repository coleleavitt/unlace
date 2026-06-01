QT::QPushButton *__fastcall ColorButton__::vfunc_1(QT::QPushButton *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ColorButton") )
    return this;
  return (QT::QPushButton *)QT::QPushButton::qt_metacast(this, a2);
}
