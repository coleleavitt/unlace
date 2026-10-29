__int64 __fastcall sub_192A3E0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int16 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v11; // ebp
  unsigned __int64 v12; // r9

  v11 = sub_18C3160(a4);
  sub_18F8950(a1, v11, a3, a5, v12, v12, (__m128i)a7, *(double *)a8.m128_u64);
  sub_16CDEE0(a1, a5, v11 - 21 >= 0xB ? 5 : 0, *(double *)a7.m128_u64);
  sub_16CDEE0(a1, (unsigned __int64)a6, v11 - 21 >= 0xB ? 5 : 0, *(double *)a7.m128_u64);
  return sub_1929BB0(a1, a2, a3, v11, a5, a6, a7, a8, 0);
}
