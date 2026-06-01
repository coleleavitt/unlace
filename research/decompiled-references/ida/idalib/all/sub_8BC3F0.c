unsigned __int64 __fastcall sub_8BC3F0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __m128i v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 8);
  v7 = __readfsqword(0x28u);
  v6 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + *(unsigned int *)(a2 + 4)));
  sub_8BC1C0(a4, (unsigned __int64 *)&v6, a3);
  return v7 - __readfsqword(0x28u);
}
