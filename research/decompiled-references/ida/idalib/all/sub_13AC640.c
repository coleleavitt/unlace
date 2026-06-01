__int64 (__fastcall **__fastcall sub_13AC640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5))()
{
  __m128i v6; // [rsp+0h] [rbp-18h] BYREF

  v6.m128i_i64[0] = a5;
  v6 = (__m128i)_mm_loadh_ps((const double *)v6.m128i_i64);
  sub_13616B0(a1, a3, a4);
  *(__m128i *)(a1 + 40) = _mm_load_si128(&v6);
  *(_QWORD *)a1 = &off_2BB2678;
  return &off_2BB2678;
}
