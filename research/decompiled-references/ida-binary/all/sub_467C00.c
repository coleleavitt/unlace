QT::QApplication *__fastcall ida_app_t__::vfunc_1(QT::QApplication *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ida_app_t") )
    return this;
  if ( !strcmp(a2, "ida_action_context_provider_t") )
    return (QT::QApplication *)((char *)this + 680);
  if ( !strcmp(a2, "ida_widget_factory_t") )
    return (QT::QApplication *)((char *)this + 696);
  return (QT::QApplication *)app_t__::vfunc_1(this, a2);
}
