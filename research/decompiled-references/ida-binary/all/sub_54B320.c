QT::QStyledItemDelegate *__fastcall HtmlItemDelegate__::vfunc_1(QT::QStyledItemDelegate *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "HtmlItemDelegate") )
    return this;
  return (QT::QStyledItemDelegate *)QT::QStyledItemDelegate::qt_metacast(this, a2);
}
