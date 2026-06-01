QT::QWidget *__fastcall sub_304710(QT::QApplication *a1)
{
  QT::QWidget *result; // rax

  result = (QT::QWidget *)QT::QApplication::activeWindow(a1);
  if ( (result || (result = qword_8CD748) != nullptr) && *(char *)(*((_QWORD *)result + 4) + 9LL) >= 0 )
    return nullptr;
  return result;
}
