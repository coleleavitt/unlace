__int64 __fastcall sub_21FE20(
        char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  if ( qword_8CB7C0 != qword_8CB7A0 )
  {
    sub_20FD20((__int64)qword_8CBAA0, (__int64)xmmword_8CB760, a11, a12, a13, a14);
    sub_20F9A0(xmmword_8CB760);
  }
  return sub_21FB60(xmmword_8CB900, a1, a2, a3, a4, a5, a6, a7, a8, a9) & 1;
}
