bool __fastcall sub_37DF70(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h] BYREF
  __int128 v12; // [rsp+18h] [rbp-20h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v10 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v4 = sub_37DCF0(1792, &byte_7);
  v5 = _mm_load_si128(&v10);
  v11 = 0;
  *(__m128i *)(v4 + 16) = v5;
  v12 = 0;
  v8 = sub_4AED50(v4, &v11, v6, v7);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, (const char *)&v11);
  }
  return v8 == 0;
}
