__int64 __fastcall sub_3975A0(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  double v8; // xmm4_8
  double v9; // xmm5_8
  __m128 v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h] BYREF
  __m128i v19; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, &v17, &v18) )
  {
    sub_1FDB10(a1, a2, a3, a4, v8, v9, a7, a8, 0, (const char *)&v17);
    v10 = _mm_loadh_ps((const double *)&v18);
  }
  else
  {
    v17 = -1;
    v10 = (__m128)-1LL;
    v18 = -1;
  }
  v16 = (__m128i)v10;
  v11 = xmmword_8CC810;
  v12 = qalloc_or_throw(232);
  v19 = _mm_load_si128(&v16);
  sub_3970E0(v12, &v19);
  sub_396C70(v12, v11, v13, v14);
  return 1;
}
