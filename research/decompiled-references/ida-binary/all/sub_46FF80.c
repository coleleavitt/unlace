QT::QWidget *__fastcall TextArrows__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TextArrows") )
    return this;
  if ( !strcmp(a2, "stylable_widget_mixin_t") )
    return (QT::QWidget *)((char *)this + 40);
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
