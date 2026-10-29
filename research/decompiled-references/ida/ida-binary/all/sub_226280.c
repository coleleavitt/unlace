__int64 __fastcall sub_226280(
        _QWORD *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rsi
  const char *v12; // rax

  v11 = &s1;
  if ( a1[6] )
    v11 = (const char *)a1[5];
  v12 = &s1;
  if ( a1[2] )
    v12 = (const char *)a1[1];
  *(_QWORD *)(a2 + 8) = (unsigned __int8)sub_225D40(v12, (__int64)v11, a3, a4, a5, a6, a7, a8, a9, a10);
  return 0;
}
