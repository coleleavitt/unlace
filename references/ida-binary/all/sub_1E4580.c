const QT::QObject *__fastcall sub_1E4580(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  const QT::QObject *result; // rax

  if ( *(_DWORD *)(a1 + 8) == 38 )
  {
    v12 = QT::QMetaObject::cast((QT::QMetaObject *)&off_882B40, *(const QT::QObject **)a1);
    sub_1E41F0(a5, a6, a7, a8, v13, v14, a11, a12, v12, *(_DWORD *)(a1 + 220));
    return (const QT::QObject *)(&dword_0 + 1);
  }
  else
  {
    sub_1DEEE0(a5, a1, (__int64)a2, a3, a4);
    result = *(const QT::QObject **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      return (const QT::QObject *)qfree(result, a2);
    }
  }
  return result;
}
