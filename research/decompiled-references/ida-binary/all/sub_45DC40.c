QT::QAbstractScrollArea *__fastcall CustomIDAMemo__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "CustomIDAMemo") )
    return this;
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return (QT::QAbstractScrollArea *)((char *)this + 40);
  if ( !strcmp(a2, "diffable_widget_mixin_t") )
    return (QT::QAbstractScrollArea *)((char *)this + 104);
  return (QT::QAbstractScrollArea *)QT::QAbstractScrollArea::qt_metacast(this, a2);
}
