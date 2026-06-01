unsigned __int64 __fastcall sub_2B91C0(
        _QWORD *a1,
        QT::QPainter *a2,
        __int64 a3,
        int *a4,
        const __m128i *a5,
        int *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char a15,
        __int64 a16)
{
  unsigned __int64 result; // rax

  result = (unsigned int)a16;
  if ( a15 )
    return sub_2B8C40(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a16,
             (__int64 *)(*(_QWORD *)(*(_QWORD *)(a3 + 408) + 16LL) + 24LL * *a4));
  return result;
}
