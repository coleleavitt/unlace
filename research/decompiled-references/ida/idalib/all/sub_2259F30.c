__m128i *__fastcall sub_2259F30(__m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int32 v3; // eax

  a1[5].m128i_i8[8] &= ~1u;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  sub_2259C30(a1, *(_BYTE **)(a2 + 16), *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
  v2 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  a1[3].m128i_i64[0] = *(_QWORD *)(a2 + 64);
  v3 = *(_DWORD *)(a2 + 72);
  a1[2] = v2;
  a1[3].m128i_i32[2] = v3;
  a1[3].m128i_i32[3] = *(_DWORD *)(a2 + 76);
  a1[4].m128i_i64[0] = *(_QWORD *)(a2 + 80);
  a1[4].m128i_i32[2] = *(_DWORD *)(a2 + 88);
  a1[4].m128i_i32[3] = *(_DWORD *)(a2 + 92);
  a1[5].m128i_i8[0] = *(_BYTE *)(a2 + 96);
  return a1;
}
