QT::QSplitter *__fastcall CustomCodeViewer__::vfunc_1(QT::QSplitter *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "CustomCodeViewer") )
    return this;
  return (QT::QSplitter *)listing_host_t__::vfunc_1(this, a2);
}
