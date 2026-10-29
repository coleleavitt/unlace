QT::QAbstractScrollArea *__fastcall TCustomViewer__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TCustomViewer") )
    return this;
  return CustomIDAMemo__::vfunc_1(this, a2);
}
