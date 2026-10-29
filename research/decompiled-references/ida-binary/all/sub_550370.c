QT::QDialog *__fastcall ActionsInspectorDialog__::vfunc_1(QT::QDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ui_dialog_t") )
    return this;
  return (QT::QDialog *)QT::QDialog::qt_metacast(this, a2);
}
