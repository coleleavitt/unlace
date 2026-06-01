int sub_2EC4A0()
{
  __m128i v0; // xmm3
  __m128i v1; // xmm2
  __m128i si128; // xmm1
  __m128i v4; // [rsp+0h] [rbp-48h] BYREF
  __m128i v5; // [rsp+10h] [rbp-38h] BYREF
  __m128i v6[2]; // [rsp+20h] [rbp-28h] BYREF

  qword_2CCB920 = 15;
  dword_2CCB928 = 256;
  xmmword_2CCB900 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B29B40),
                                (__m128i)(unsigned __int64)"penode");
  v6[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B29B40), (__m128i)(unsigned __int64)"tlsnode");
  v5 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B29B40), (__m128i)(unsigned __int64)"elfnode");
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B29B40), (__m128i)(unsigned __int64)"nenode");
  xmmword_2CCB910 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B29B48),
                                (__m128i)(unsigned __int64)&off_2B29780);
  __cxa_atexit(nullsub_75, &xmmword_2CCB900, &off_2B25620);
  v0 = _mm_load_si128(&v4);
  qword_2CCB8E0 = 1;
  xmmword_2CCB8C0 = (__int128)v0;
  dword_2CCB8E8 = 256;
  xmmword_2CCB8D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B29B50),
                                (__m128i)(unsigned __int64)&off_2B29740);
  __cxa_atexit(nullsub_75, &xmmword_2CCB8C0, &off_2B25620);
  v1 = _mm_load_si128(&v5);
  qword_2CCB8A0 = 1;
  xmmword_2CCB880 = (__int128)v1;
  xmmword_2CCB890 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B29B58),
                                (__m128i)(unsigned __int64)&off_2B29700);
  dword_2CCB8A8 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCB880, &off_2B25620);
  si128 = _mm_load_si128(v6);
  qword_2CCB860 = 7;
  dword_2CCB868 = 256;
  xmmword_2CCB840 = (__int128)si128;
  xmmword_2CCB850 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B29B60),
                                (__m128i)(unsigned __int64)&off_2B29540);
  return __cxa_atexit(nullsub_75, &xmmword_2CCB840, &off_2B25620);
}
