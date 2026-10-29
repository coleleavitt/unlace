QT::QWidget *__fastcall offsets_margin_t__::vfunc_1(QT::QWidget *this, char *a2)
{
  QT::QWidget *v2; // r12

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "offsets_margin_t") || !strcmp(a2, "type_editor_text_margin_t") )
    return v2;
  return (QT::QWidget *)text_area_margin_widget_t__::vfunc_1(this, a2);
}
