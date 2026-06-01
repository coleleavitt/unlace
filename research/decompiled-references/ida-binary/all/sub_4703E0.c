QT::QWidget *__fastcall TChooser__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TChooser") )
    return this;
  if ( !strcmp(a2, "diffable_widget_mixin_t") )
    return (QT::QWidget *)((char *)this + 2512);
  return (QT::QWidget *)chooser_widget_t__::vfunc_1(this, a2);
}
