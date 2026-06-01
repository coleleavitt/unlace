QT::QAbstractItemView **__fastcall sub_3E1240(double a1)
{
  QT::QAbstractItemView **v1; // rbx
  QT::QAbstractItemView **result; // rax
  QT::QAbstractItemView *v3; // rdi

  v1 = (QT::QAbstractItemView **)qword_8D1240;
  result = (QT::QAbstractItemView **)(8 * xmmword_8D1248);
  if ( 8LL * (_QWORD)xmmword_8D1248 )
  {
    do
    {
      v3 = *v1++;
      sub_3E0560(v3, a1);
      result = (QT::QAbstractItemView **)(qword_8D1240 + 8 * xmmword_8D1248);
    }
    while ( v1 != result );
  }
  return result;
}
