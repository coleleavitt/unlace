QT::QDialog *__fastcall ColorsOptionsDialog__::vfunc_1(QT::QDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ColorsOptionsDialog") )
    return this;
  if ( !strcmp(a2, "event_listener_t") )
    return (QT::QDialog *)((char *)this + 48);
  return (QT::QDialog *)ActionsInspectorDialog__::vfunc_1(this, a2);
}
