__m128i *__fastcall sub_525E10(__int64 a1, __int64 a2, __int32 a3)
{
  __m128i *v4; // rax
  __m128i si128; // xmm0
  __m128i *v6; // rbx
  __int64 v7; // rbp

  v4 = (__m128i *)operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v4->m128i_i32[2] = a3;
  v6 = v4;
  v4->m128i_i32[3] = -1;
  v4[2].m128i_i64[0] = a2;
  v4[1] = si128;
  v4->m128i_i64[0] = (__int64)off_2B2DC58;
  if ( a3 == -1 )
    v7 = 0;
  else
    v7 = *(_QWORD *)(switch_dbctx(a3) + 1784);
  if ( !*(_DWORD *)(v7 + 64) )
    *(_DWORD *)(v7 + 64) = sub_524CE0((__int64 *)v7);
  v6[2].m128i_i64[1] = *(_QWORD *)(v7 + 72);
  v6[3].m128i_i64[0] = *(_QWORD *)(v7 + 80);
  return v6;
}
