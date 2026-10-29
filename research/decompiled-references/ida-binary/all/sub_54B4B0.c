QT::QObject *__fastcall ida_form_controller_t__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "forms_ui::controller_t") )
    return this;
  return (QT::QObject *)QT::QObject::qt_metacast(this, a2);
}
