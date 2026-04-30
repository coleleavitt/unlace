QT::QAbstractScrollArea *__fastcall disassembly_preview_t__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "disassembly_preview_t") )
    return this;
  return IDAView__::vfunc_1(this, a2);
}
