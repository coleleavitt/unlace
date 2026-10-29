unsigned __int64 __fastcall sub_2C4180(
        __int64 *a1,
        int a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  unsigned __int64 v23; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-10h]

  v24 = __readfsqword(0x28u);
  v10 = a1[55];
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( a2 != -1 )
    {
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 152LL))(v12);
        v14 = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)v13), _mm_loadl_epi64((const __m128i *)(v13 + 8)));
        v15 = (__m128)_mm_cmpgt_epi32((__m128i)0LL, v14);
        v16 = (__m128)_mm_srai_epi32(_mm_sub_epi32(v14, (__m128i)v15), 1u);
        v23 = v16.m128_u64[0];
        sub_2C3F80(a1, (int *)&v23, 2u, v17, v18, v19, v16, v15, a5, a6, v20, v21, a9, a10);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
