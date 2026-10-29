int sub_2E90E0()
{
  __m128i v0; // xmm3
  __m128i v1; // xmm2
  __m128i si128; // xmm1
  __m128i v4; // [rsp+0h] [rbp-48h] BYREF
  __m128i v5; // [rsp+10h] [rbp-38h] BYREF
  __m128i v6[2]; // [rsp+20h] [rbp-28h] BYREF

  qword_2CA1A20 = 15;
  dword_2CA1A28 = 256;
  xmmword_2CA1A00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2AFFB80),
                                (__m128i)(unsigned __int64)"penode");
  v6[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFFB80), (__m128i)(unsigned __int64)"tlsnode");
  v5 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFFB80), (__m128i)(unsigned __int64)"elfnode");
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFFB80), (__m128i)(unsigned __int64)"nenode");
  xmmword_2CA1A10 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2AFFB88),
                                (__m128i)(unsigned __int64)&off_2AFF7C0);
  __cxa_atexit(nullsub_54, &xmmword_2CA1A00, &off_2AFC540);
  v0 = _mm_load_si128(&v4);
  qword_2CA19E0 = 1;
  xmmword_2CA19C0 = (__int128)v0;
  dword_2CA19E8 = 256;
  xmmword_2CA19D0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2AFFB90),
                                (__m128i)(unsigned __int64)&off_2AFF780);
  __cxa_atexit(nullsub_54, &xmmword_2CA19C0, &off_2AFC540);
  v1 = _mm_load_si128(&v5);
  qword_2CA19A0 = 1;
  xmmword_2CA1980 = (__int128)v1;
  xmmword_2CA1990 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2AFFB98),
                                (__m128i)(unsigned __int64)&off_2AFF740);
  dword_2CA19A8 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1980, &off_2AFC540);
  si128 = _mm_load_si128(v6);
  qword_2CA1960 = 7;
  dword_2CA1968 = 256;
  xmmword_2CA1940 = (__int128)si128;
  xmmword_2CA1950 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2AFFBA0),
                                (__m128i)(unsigned __int64)&off_2AFF580);
  return __cxa_atexit(nullsub_54, &xmmword_2CA1940, &off_2AFC540);
}

