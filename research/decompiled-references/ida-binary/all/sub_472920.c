QT::QObject *__fastcall uicontext_t__::vfunc_1(QT::QObject *this, char *a2)
{
  QT::QObject *v2; // rbp

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "uicontext_t") || !strcmp(a2, "uicontext_mixin_t") )
    return v2;
  return (QT::QObject *)QT::QObject::qt_metacast(this, a2);
}
