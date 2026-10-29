__int64 __fastcall sub_21FE70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  char *v14; // rbp

  v14 = (char *)&s1;
  if ( *(_QWORD *)(a1 + 16) )
    v14 = *(char **)(a1 + 8);
  if ( qword_8CB7C0 != qword_8CB7A0 )
  {
    sub_20FD20((__int64)qword_8CBAA0, (__int64)xmmword_8CB760, a3, a4, a5, a6);
    sub_20F9A0(xmmword_8CB760);
  }
  *(_QWORD *)(a2 + 8) = (int)sub_21FB60(xmmword_8CB900, v14, a7, a8, a9, a10, a11, a12, a13, a14);
  return 0;
}
