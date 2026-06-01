__m128i *__fastcall sub_472290(__int64 a1, __int64 a2, __int32 a3)
{
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __m128i *v6; // rbx
  __int64 v7; // rax

  v4 = (__m128i *)operator new(0x40u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v4->m128i_i32[2] = a3;
  v6 = v4;
  v4->m128i_i32[3] = -1;
  v4[2].m128i_i64[0] = a2;
  v4[1] = si128;
  v4->m128i_i64[0] = (__int64)off_2B29350;
  v7 = *(_QWORD *)(switch_dbctx(a3) + 1672);
  v6[3] = 0;
  v6[2].m128i_i64[1] = v7 + 1480;
  return v6;
}
