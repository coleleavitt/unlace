__int64 __fastcall sub_2B97C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  QT::QFont *v20[2]; // [rsp+0h] [rbp-48h] BYREF
  int v21[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v21 = __readfsqword(0x28u);
  if ( a4 < 0 || !a3 )
    return 0;
  *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 152LL))(
                                                       a3,
                                                       (unsigned int)a4));
  return sub_2B9380(
           a1,
           a2,
           (const __m128i *)v20,
           (unsigned int)a4,
           a5,
           a6,
           *(double *)v20,
           a8,
           a9,
           a10,
           v17,
           v18,
           a13,
           a14);
}
