unsigned __int64 __fastcall sub_2BAFD0(
        __int64 *a1,
        __m128d *a2,
        int *a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char v12; // dl
  double v13; // xmm4_8
  double v14; // xmm5_8
  __m128 v15; // xmm1
  int v17[2]; // [rsp+0h] [rbp-38h] BYREF
  int v18[2]; // [rsp+8h] [rbp-30h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  v12 = 1;
  if ( byte_8CCA9C )
    v12 = byte_8CCA9B;
  sub_2B9200((__int64)a1, a2, v12, nullptr);
  if ( !byte_8CCA9C )
  {
    v15 = (__m128)*(unsigned __int64 *)&a2->m128d_f64[0];
    if ( *(double *)v15.m128_u64 != 1.0 )
    {
      if ( *(double *)v15.m128_u64 <= 1.0 && *a3 >= 0 )
      {
        *(_QWORD *)v17 = 0;
        if ( (unsigned __int8)sub_2BAD60(a1, v17, (__int64)a3, 1.0, v15, a6, a7, v13, v14, a10, a11) )
          sub_2B6E80((__int64)a1, a2->m128d_f64, v17, *a3 == 0, 1.0);
      }
      a2->m128d_f64[0] = 1.0;
    }
  }
  return *(_QWORD *)v18 - __readfsqword(0x28u);
}
