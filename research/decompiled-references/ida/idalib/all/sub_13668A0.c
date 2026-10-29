void __fastcall sub_13668A0(__int64 a1, const __m128i *a2, __int64 *a3)
{
  void *v4; // rbp
  __int64 v5; // rax

  sub_9EE8A0(a1 + 8, (__int64)a2);
  *(__m128i *)(a1 + 40) = _mm_loadu_si128(a2 + 2);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128(a2 + 3);
  *(_QWORD *)(a1 + 72) = a2[4].m128i_i64[0];
  *(_WORD *)(a1 + 80) = a2[4].m128i_i16[4];
  v4 = *(void **)(a1 + 88);
  *(_BYTE *)(a1 + 84) = a2[4].m128i_i8[12];
  v5 = *a3;
  *a3 = 0;
  *(_QWORD *)(a1 + 88) = v5;
  if ( v4 )
  {
    sub_12E2140((__int64)v4);
    operator delete(v4, 0x828u);
  }
}
