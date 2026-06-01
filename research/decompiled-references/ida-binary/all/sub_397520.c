__int64 __fastcall sub_397520(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v1 = qalloc_or_throw(232);
  v5 = (__m128i)-1LL;
  if ( *(_QWORD *)(a1 + 8) == 16 )
    v5 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a1);
  sub_3970E0(v1, &v5);
  return sub_396C70(v1, xmmword_8CC810, v2, v3);
}
