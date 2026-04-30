void __fastcall sub_30E410(QT::QTranslator *a1)
{
  *(_QWORD *)a1 = &off_872C78;
  QT::QTranslator::~QTranslator(a1);
  operator delete(a1, 0x10u);
}
