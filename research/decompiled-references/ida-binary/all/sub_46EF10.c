QT::QTreeWidget *__fastcall SOStructsAndUnions__::vfunc_1(QT::QTreeWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "SOStructsAndUnions") )
    return this;
  if ( !strcmp(a2, "SOWidgetMixin") )
    return (QT::QTreeWidget *)((char *)this + 40);
  return (QT::QTreeWidget *)QT::QTreeWidget::qt_metacast(this, a2);
}
