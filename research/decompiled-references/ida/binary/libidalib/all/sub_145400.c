bool __fastcall sub_145400(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rbx
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h] BYREF
  __int128 v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v8 = _mm_unpacklo_epi64(
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a2)),
         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), _mm_cvtsi32_si128(a4)));
  v4 = sub_145180(1792, 7);
  v5 = _mm_load_si128(&v8);
  v9 = 0;
  *(__m128i *)(v4 + 16) = v5;
  v10 = 0;
  v6 = sub_198E60(v4, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v6 == 0;
}

