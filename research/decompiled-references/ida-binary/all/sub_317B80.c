QT::QTranslator *__fastcall sub_317B80(QT::QTranslator *this, char *a2, char *a3, char *a4, int a5)
{
  if ( !strcmp(a3, "QShortcut") && !strcmp(a4, "Num") )
    QT::QString::fromUtf8(this, 6, "Numpad");
  else
    QT::QTranslator::translate(this, a2, a3, a4, a5);
  return this;
}
