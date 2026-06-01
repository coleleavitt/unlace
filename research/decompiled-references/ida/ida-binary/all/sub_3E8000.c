__int64 __fastcall sub_3E8000(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdx
  QT::QAbstractItemView **v15; // rbx
  __int64 result; // rax

  v14 = xmmword_8D1248;
  v15 = (QT::QAbstractItemView **)qword_8D1240;
  result = 8 * xmmword_8D1248;
  if ( 8LL * (_QWORD)xmmword_8D1248 )
  {
    do
    {
      if ( *((_BYTE *)*v15 + 1112) )
      {
        sub_3E7F80(*v15, a1, a2, a3, a4, a5, a6, a7, a8, a10, v14, a12, a13, a14);
        v14 = xmmword_8D1248;
      }
      ++v15;
      result = qword_8D1240 + 8 * v14;
    }
    while ( v15 != (QT::QAbstractItemView **)result );
  }
  return result;
}
