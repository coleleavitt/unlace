QT::QWidget *__fastcall line_number_margin_t__::vfunc_1(QT::QWidget *this, char *a2)
{
  QT::QWidget *v2; // rbp

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "line_number_margin_t") )
    return v2;
  if ( !strcmp(a2, "text_area_margin_widget_t") )
    return v2;
  v2 = (QT::QWidget *)((char *)this + 40);
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return v2;
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
