QT::QVariant *__fastcall sub_51D140(QT::QVariant *a1, __int64 a2, int *a3, int a4)
{
  __int64 v4; // rdx
  QT::QVariant *result; // rax

  v4 = *a3;
  result = a1;
  if ( (int)v4 < 0 || v4 >= qword_8D24B0 || (a4 & 0xFFFFFFFD) != 0 )
  {
    *((_QWORD *)a1 + 2) = 0;
    *((_QWORD *)a1 + 3) = 2;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    QT::QVariant::QVariant(a1, (const QT::QString *)((char *)*(&xmmword_8D24A0 + 1) + 24 * v4));
    return a1;
  }
  return result;
}
