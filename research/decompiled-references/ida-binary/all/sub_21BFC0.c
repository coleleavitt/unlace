__int64 __fastcall sub_21BFC0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v12; // rsi
  const char *v13; // rax

  v12 = &s1;
  if ( a1[6] )
    v12 = (const char *)a1[5];
  v13 = &s1;
  if ( a1[2] )
    v13 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_21BDE0((__int64)v13, (__int64)v12, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  return 0;
}
