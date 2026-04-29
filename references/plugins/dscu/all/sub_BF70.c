unsigned __int64 __fastcall sub_BF70(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  const __m128i *v6; // rax
  __m128i v7; // xmm0
  __m128i v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i v10; // [rsp+10h] [rbp-58h] BYREF
  __m128i v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  __int128 v15; // [rsp+48h] [rbp-20h]
  unsigned __int64 v16; // [rsp+58h] [rbp-10h]

  v6 = *(const __m128i **)(a3 + 528);
  v16 = __readfsqword(0x28u);
  v15 = 0;
  v7 = _mm_loadu_si128(v6);
  v13 = -1;
  v14 = 0;
  v11 = v7;
  v12 = 3;
  if ( _mm_movehl_ps(a6, (__m128)v7).m128_u64[0] )
  {
    v9 = v7;
    sub_6130(a1, (__int64)&v11);
    v7 = _mm_load_si128(&v9);
  }
  v10 = _mm_unpacklo_epi64(v7, _mm_add_epi64(_mm_srli_si128(v7, 8), v7));
  rangeset_t_sub(a2, &v10);
  return v16 - __readfsqword(0x28u);
}
