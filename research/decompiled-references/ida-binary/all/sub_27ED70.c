unsigned __int64 __fastcall sub_27ED70(
        __m128i *a1,
        __m128i *a2,
        __m128 *a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  result = sub_205300(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( a1 == (__m128i *)qword_8CC7C0 )
    return sub_27EC10((__int64)a1, (__int64)a2, a5, v13, v14);
  return result;
}
