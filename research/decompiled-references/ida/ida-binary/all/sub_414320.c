void __fastcall sub_414320(QT::QObject *a1)
{
  QT::QObject *v1; // rbp

  if ( !qword_8D14B8 )
  {
    v1 = (QT::QObject *)operator new(0x20u);
    sub_4141F0(v1, a1);
    qword_8D14B8 = (__int64)v1;
  }
}
