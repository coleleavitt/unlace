__int64 __fastcall type_listing_preview_t__::vfunc_2(
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

  result = type_listing_t__::vfunc_2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      return (unsigned int)(result - 1);
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
        *(_QWORD *)*a4 = 0;
      return (unsigned int)(result - 1);
    }
  }
  return result;
}
