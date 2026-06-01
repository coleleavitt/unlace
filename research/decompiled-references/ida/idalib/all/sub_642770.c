unsigned __int64 __fastcall sub_642770(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __m128i si128,
        double a7,
        double a8)
{
  __int64 v10; // rbp
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // r12
  unsigned int v15; // eax
  __m128 v16; // [rsp+0h] [rbp-68h] BYREF
  __m128 v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v10 = a1 + 2872;
  v19 = __readfsqword(0x28u);
  v12 = sub_505D70(a1 + 2872, a2);
  if ( v12 )
  {
    v13 = v12;
    if ( *v12 != a2 )
    {
      v16 = _mm_loadh_ps((const double *)v12 + 1);
      v15 = sub_503EE0(v10, a2);
      sub_5061A0(v10, v15, a2, *(double *)v16.m128_u64, a7, a8);
      si128 = _mm_load_si128((const __m128i *)&v16);
      v18 = v13[2] + a2 - *v13;
      v17 = (__m128)si128;
      sub_505940(v10, (unsigned __int64 *)&v17, *(double *)si128.m128i_i64, a7);
      sub_504B40(v10);
    }
  }
  sub_508600(v10, a2, a3, a4, a5, nullptr, *(double *)si128.m128i_i64, a7, a8, 0);
  return v19 - __readfsqword(0x28u);
}
