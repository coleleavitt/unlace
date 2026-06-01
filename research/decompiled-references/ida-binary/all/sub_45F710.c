__int64 __fastcall type_listing_t__::vfunc_2(
        QT::QObject *a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  void **v14; // r8
  int v15; // [rsp+Ch] [rbp-1Ch]

  result = CustomIDAMemo__::vfunc_2(a1, a2, a5, a6, a7, a8, a9, a10, a11, a12, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( (int)result <= 2 )
      {
        v15 = result;
        sub_45F680(a1, 0, (const QT::QMetaObject *)(unsigned int)result, (__int64)a4, v14, *(double *)a5.m128_u64);
        LODWORD(result) = v15;
      }
      return (unsigned int)(result - 3);
    }
    if ( a2 == 7 )
    {
      if ( (int)result <= 2 )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 3);
    }
  }
  return result;
}
