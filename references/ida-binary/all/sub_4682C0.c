QT::QSplitter *__fastcall IDAViewHost__::vfunc_1(QT::QSplitter *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDAViewHost") )
    return this;
  return listing_host_t__::vfunc_1(this, a2);
}
