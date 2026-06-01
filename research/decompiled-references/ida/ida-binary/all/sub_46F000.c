QT::QTableWidget *__fastcall SOTypeOffsets__::vfunc_1(QT::QTableWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "SOTypeOffsets") )
    return this;
  if ( !strcmp(a2, "SOWidgetMixin") )
    return (QT::QTableWidget *)((char *)this + 40);
  return (QT::QTableWidget *)QT::QTableWidget::qt_metacast(this, a2);
}
