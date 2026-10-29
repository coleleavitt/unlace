__int64 __fastcall sub_5658E0(__int64 a1)
{
  __m128i *v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rsi
  int v4; // edx

  memset((void *)a1, 0, 0x4C0u);
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(
                           (__m128i)(unsigned __int64)sub_55DFE0,
                           (__m128i)(unsigned __int64)sub_55D810);
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)sub_55E360,
                            (__m128i)(unsigned __int64)sub_55C8E0);
  *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(
                            (__m128i)(unsigned __int64)sub_55C7A0,
                            (__m128i)(unsigned __int64)sub_55CEF0);
  v1 = (__m128i *)off_8C52A8(nullptr, 0x18u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_QWORD *)(a1 + 96) = v1;
  v1[1].m128i_i64[0] = 0xFFFFFFFF00000000LL;
  *v1 = si128;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 160) = 1;
  return sub_55C7B0(a1, v3, v4);
}
