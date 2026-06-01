unsigned __int64 __fastcall sub_2B7630(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128d a5, __m128d a6)
{
  __int64 v6; // rax
  const __m128i *v7; // rax
  const __m128i *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128d v14; // [rsp+0h] [rbp-48h]
  __m256i v15; // [rsp+10h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  unsigned __int64 v17; // [rsp+38h] [rbp-10h]

  v6 = *(_QWORD *)(a1 + 16);
  v17 = __readfsqword(0x28u);
  v14 = _mm_unpacklo_pd(a5, a6);
  v7 = (const __m128i *)sub_1EA6A0(v6 + 384, a2, a3, a4, v14.m128d_f64[0]);
  *(__m128i *)v15.m256i_i8 = _mm_loadu_si128(v7);
  v8 = *(const __m128i **)(a1 + 16);
  *(__m128i *)&v15.m256i_u64[2] = _mm_loadu_si128(v7 + 1);
  v16 = v7[2].m128i_i64[0];
  *(__m128d *)&v15.m256i_u64[1] = _mm_add_pd(v14, *(__m128d *)&v15.m256i_u64[1]);
  sub_1F14A0(v8 + 24, (const __m128i *)&v15, v9, v10, v11, v12);
  return v17 - __readfsqword(0x28u);
}
