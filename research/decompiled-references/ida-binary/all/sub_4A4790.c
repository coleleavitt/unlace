__int64 __fastcall sub_4A4790(
        const char *a1,
        unsigned __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 *v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  v11 = sub_4A0300(a1);
  LOBYTE(v10) = v11 != nullptr;
  if ( v11 )
    sub_4A4600((__int64)v11, a2, 7u, 0, a3, a4, a5, a6, v12, v13, a9, a10);
  return v10;
}
