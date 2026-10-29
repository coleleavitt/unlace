QT::QTreeView *__fastcall diff_details_t__::vfunc_1(QT::QTreeView *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "diff_details_t") )
    return this;
  if ( !strcmp(a2, "diff_source_panel_child_mixin_t") )
    return (QT::QTreeView *)((char *)this + 40);
  return (QT::QTreeView *)QT::QTreeView::qt_metacast(this, a2);
}
