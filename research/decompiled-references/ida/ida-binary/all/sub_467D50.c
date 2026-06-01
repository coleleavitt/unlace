_DWORD *__fastcall sub_467D50(
        QT::QAbstractItemView *a1,
        int a2,
        int a3,
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
  _DWORD *result; // rax

  if ( !a2 )
  {
    if ( a3 )
    {
      if ( a3 == 1 )
        return sub_2DC7E0(a1, **(_QWORD **)(a4 + 8), a5, a6, a7, a8, a9, a10, a11, a12);
    }
    else
    {
      return (_DWORD *)sub_2DC750((__int64)a1, **(_QWORD ***)(a4 + 8), **(__int64 ***)(a4 + 16));
    }
  }
  return result;
}
