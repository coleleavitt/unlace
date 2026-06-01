double __fastcall sub_1F62C0(QT::QApplication *a1)
{
  int v1; // eax
  double result; // xmm0_8

  v1 = QT::QApplication::wheelScrollLines(a1);
  result = 40.0;
  if ( v1 > 0 )
    return 120.0 / (double)v1;
  return result;
}
