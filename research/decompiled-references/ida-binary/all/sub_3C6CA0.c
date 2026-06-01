__int64 __fastcall sub_3C6CA0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        unsigned int **a12)
{
  const QT::QObject *v13; // rbx
  double v15; // xmm4_8
  double v16; // xmm5_8

  if ( !a12[1] )
    return 0;
  v13 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( !v13 )
    return 0;
  while ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, v13) )
  {
    v13 = *(const QT::QObject **)(*((_QWORD *)v13 + 1) + 16LL);
    if ( !v13 )
      return 0;
  }
  sub_3C6B30((__int64)v13, **a12, nullptr, 38, a2, a3, a4, a5, v15, v16, a8, a9);
  return 1;
}
