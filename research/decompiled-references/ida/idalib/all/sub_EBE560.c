unsigned __int64 __fastcall sub_EBE560(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        const __m128i *a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        __int128 a11,
        __int128 a12,
        __int128 a13,
        __int64 a14,
        __int64 a15)
{
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // rbx
  __m128i v20; // xmm1
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _OWORD v30[4]; // [rsp+10h] [rbp-48h] BYREF

  v17 = sub_EBD890((__int64 *)(a1 + 2352), 48LL * *((_QWORD *)&a7 + 1) + 96, 3u);
  v18 = _mm_loadu_si128((const __m128i *)&a8);
  *(_DWORD *)(v17 + 48) = a4;
  v19 = v17;
  *(__m128i *)(v17 + 56) = v18;
  v20 = _mm_loadu_si128(a6);
  *(_DWORD *)(v17 + 4) = a5;
  *(__m128i *)(v17 + 72) = v20;
  *(_DWORD *)v17 = a2;
  *(_DWORD *)(v17 + 12) = a3;
  *(_DWORD *)(v17 + 16) = DWORD2(a7);
  *(_DWORD *)(v17 + 8) = 45;
  *(_QWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 32) = 103;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 88) = a6[1].m128i_i64[0];
  v30[0] = a7;
  sub_EB8020((__int64)v30, (char *)(v17 + 96));
  v21 = (char *)(v19 + 8LL * *(unsigned int *)(v19 + 16) + 96);
  v30[0] = _mm_loadu_si128((const __m128i *)&a9);
  sub_EB8020((__int64)v30, v21);
  v22 = 16LL * *(unsigned int *)(v19 + 16);
  v30[0] = _mm_loadu_si128((const __m128i *)&a10);
  sub_EB8020((__int64)v30, (char *)(v19 + v22 + 96));
  v23 = 3LL * *(unsigned int *)(v19 + 16);
  v30[0] = _mm_loadu_si128((const __m128i *)&a11);
  sub_EB8020((__int64)v30, (char *)(v19 + 8 * v23 + 96));
  v24 = 32LL * *(unsigned int *)(v19 + 16);
  v30[0] = _mm_loadu_si128((const __m128i *)&a12);
  sub_EB8020((__int64)v30, (char *)(v19 + v24 + 96));
  v25 = 5LL * *(unsigned int *)(v19 + 16);
  v30[0] = _mm_loadu_si128((const __m128i *)&a13);
  sub_EB8020((__int64)v30, (char *)(v19 + 8 * v25 + 96));
  v26 = a14;
  *(_DWORD *)(v19 + 32) = 103;
  *(_QWORD *)(v19 + 24) = v26;
  *(_QWORD *)(v19 + 40) = a15;
  return v19;
}
