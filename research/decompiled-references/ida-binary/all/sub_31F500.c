__int64 __fastcall sub_31F500(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v6; // rax
  __m128i *v7; // rbx
  __m128i *v8; // rbp
  __m128i **v9; // rax
  __m128i ***v10; // rdx

  v6 = (__m128i *)qalloc_or_throw(24);
  v6[1].m128i_i64[0] = 0;
  v7 = v6;
  *v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v6);
  v8 = (__m128i *)operator new(0x20A0u);
  v8->m128i_i64[0] = (__int64)snapman_t::restore_snapshot;
  v8->m128i_i32[2] = 1;
  v8[521].m128i_i64[0] = a3;
  v8[521].m128i_i64[1] = a4;
  qstrncpy((char *)&v8[264].m128i_u64[1] + 4, a1 + 180, 4096);
  qstrncpy((char *)&v8->m128i_u64[1] + 4, a2 + 138, 4096);
  qstrncpy((char *)&v8[256].m128i_u64[1] + 4, a2 + 10, 128);
  v9 = (__m128i **)qalloc_or_throw(24);
  byte_8CD8D4 = 1;
  *v9 = v7;
  v9[2] = v8;
  v10 = (__m128i ***)v7->m128i_i64[1];
  v9[1] = (__m128i *)v10;
  *v10 = v9;
  v7->m128i_i64[1] = (__int64)v9;
  ++v7[1].m128i_i64[0];
  sub_479810(QT::QCoreApplication::self + 2, v7);
  return 1;
}
