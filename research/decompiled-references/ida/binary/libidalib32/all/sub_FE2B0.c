unsigned __int64 __fastcall sub_FE2B0(__int64 a1)
{
  __int64 (**v2)(); // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+8h] [rbp-50h]
  unsigned __int64 v4; // [rsp+Ch] [rbp-4Ch]
  __int64 (**v5)(); // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  unsigned __int64 v7; // [rsp+2Ch] [rbp-2Ch]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = off_2301D8;
  v3 = 0;
  v4 = _mm_shuffle_epi32(_mm_cvtsi32_si128(getinf()), 224).m128i_u64[0];
  v6 = 0x7FFFFFFF;
  v5 = off_2301D8;
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(getinf()), 224).m128i_u64[0];
  sub_15DA50(a1, &v2, &v5);
  return v8 - __readfsqword(0x28u);
}

