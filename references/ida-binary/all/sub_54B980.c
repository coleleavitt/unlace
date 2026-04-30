QT::QMessageBox *__fastcall message_box_t__::vfunc_1(QT::QMessageBox *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "message_box_t") )
    return this;
  return (QT::QMessageBox *)QT::QMessageBox::qt_metacast(this, a2);
}
