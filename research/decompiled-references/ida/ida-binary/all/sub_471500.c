QT::QSplitter *__fastcall til_view_t__::vfunc_1(QT::QSplitter *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "til_view_t") )
    return this;
  return (QT::QSplitter *)QT::QSplitter::qt_metacast(this, a2);
}
