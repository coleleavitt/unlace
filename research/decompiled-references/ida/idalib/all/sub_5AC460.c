__m128i *__fastcall sub_5AC460(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __m128i *v6; // rbx

  v3 = a3;
  v4 = (__m128i *)operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v4->m128i_i32[2] = v3;
  v6 = v4;
  v4->m128i_i32[3] = -1;
  v4[2].m128i_i64[0] = a2;
  v4[1] = si128;
  v4->m128i_i64[0] = (__int64)off_2B2F4A8;
  v4[2].m128i_i64[1] = *(_QWORD *)(switch_dbctx(v3) + 1592) + 32LL;
  v6[3].m128i_i64[0] = *(_QWORD *)(switch_dbctx(v3) + 1592) + 44LL;
  return v6;
}
