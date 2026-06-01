__m128i *__fastcall sub_1CB44E0(__m128i *a1, const __m128i *a2, __int32 a3)
{
  __int64 *v5; // rsi
  __int64 v7; // rdi
  __m128i v8; // xmm0
  __int32 v9; // eax

  v5 = &a2[1].m128i_i64[1];
  v7 = (__int64)&a1[1].m128i_i64[1];
  *(_DWORD *)(v7 - 24) = *((_DWORD *)v5 - 6);
  *(_QWORD *)(v7 - 16) = *(v5 - 2);
  *(_QWORD *)(v7 - 8) = *(v5 - 1);
  sub_E90750(v7, v5);
  v8 = _mm_loadu_si128(a2 + 3);
  v9 = a2[4].m128i_i32[0];
  a1[4].m128i_i32[1] = a3;
  a1[4].m128i_i32[0] = v9;
  a1[3] = v8;
  return a1;
}
