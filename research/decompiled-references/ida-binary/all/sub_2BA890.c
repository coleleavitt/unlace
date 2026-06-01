__int64 __fastcall sub_2BA890(
        __int64 a1,
        const __m128i *a2,
        const __m128i *a3,
        double a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  double v13; // xmm0_8
  double v14; // xmm4_8
  double v15; // xmm5_8
  __m128i v17[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 440);
  if ( v11 )
  {
    v11 = *(_QWORD *)(v11 + 8);
    if ( v11 )
    {
      v12 = a3[2].m128i_i64[0];
      v17[0] = _mm_loadu_si128(a3);
      v18 = v12;
      v17[1] = _mm_loadu_si128(a3 + 1);
      v13 = *(double *)a3->m128i_i64;
      if ( *(double *)a3->m128i_i64 <= 0.0 )
        v13 = 1.0;
      v11 = operator new(0x1B8u);
      *(double *)v17[0].m128i_i64 = v13;
      sub_2B9860(v11, a1, a2, v17, 0, 1, v13, (__m128)0LL, a6, a7, v14, v15, a10, a11);
    }
  }
  return v11;
}
