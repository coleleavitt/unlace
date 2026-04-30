QT::QWidget *__fastcall ActionsInspector__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ActionsInspector") )
    return this;
  if ( !strcmp(a2, "event_listener_t") )
    return (QT::QWidget *)((char *)this + 40);
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
