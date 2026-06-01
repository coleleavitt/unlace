QT::QWidget *__fastcall ida_quick_filter_widget_t__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "quick_filter_widget_t") )
    return this;
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
