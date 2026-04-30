QT::QCompleter *__fastcall type_completer_t__::vfunc_1(QT::QCompleter *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "type_completer_t") )
    return this;
  return (QT::QCompleter *)QT::QCompleter::qt_metacast(this, a2);
}
