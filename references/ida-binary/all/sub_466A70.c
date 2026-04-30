QT::QAbstractScrollArea *__fastcall UserGraphViewer__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "UserGraphViewer") )
    return this;
  return TCustomViewer__::vfunc_1(this, a2);
}
