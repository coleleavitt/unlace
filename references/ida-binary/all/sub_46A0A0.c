QT::QListView *__fastcall StyledQListView__::vfunc_1(QT::QListView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "StyledQListView") )
    return this;
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return (QT::QListView *)((char *)this + 40);
  return (QT::QListView *)QT::QListView::qt_metacast(this, a2);
}
