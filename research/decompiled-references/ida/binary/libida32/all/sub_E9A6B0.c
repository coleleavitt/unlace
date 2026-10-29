unsigned __int64 __fastcall sub_E9A6B0(
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
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v18; // rbx
  __m128i v19; // xmm1
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _OWORD v28[4]; // [rsp+10h] [rbp-48h] BYREF

  v16 = sub_E99B50((__int64 *)(a1 + 2352), 40LL * *((_QWORD *)&a7 + 1) + 96, 3u);
  v17 = _mm_loadu_si128((const __m128i *)&a8);
  v18 = v16;
  *(_DWORD *)v16 = a2;
  *(_DWORD *)(v16 + 48) = a4;
  *(__m128i *)(v16 + 56) = v17;
  v19 = _mm_loadu_si128(a6);
  *(_DWORD *)(v16 + 4) = a5;
  *(__m128i *)(v16 + 72) = v19;
  *(_DWORD *)(v16 + 12) = a3;
  *(_DWORD *)(v16 + 16) = DWORD2(a7);
  *(_DWORD *)(v16 + 8) = 98;
  *(_QWORD *)(v16 + 24) = 0;
  *(_DWORD *)(v16 + 32) = 103;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 88) = a6[1].m128i_i64[0];
  v28[0] = a7;
  sub_E942E0((__int64)v28, (char *)(v16 + 96));
  v20 = (char *)(v18 + 8LL * *(unsigned int *)(v18 + 16) + 96);
  v28[0] = _mm_loadu_si128((const __m128i *)&a9);
  sub_E942E0((__int64)v28, v20);
  v21 = 16LL * *(unsigned int *)(v18 + 16);
  v28[0] = _mm_loadu_si128((const __m128i *)&a10);
  sub_E942E0((__int64)v28, (char *)(v18 + v21 + 96));
  v22 = 3LL * *(unsigned int *)(v18 + 16);
  v28[0] = _mm_loadu_si128((const __m128i *)&a11);
  sub_E942E0((__int64)v28, (char *)(v18 + 8 * v22 + 96));
  v23 = 32LL * *(unsigned int *)(v18 + 16);
  v28[0] = _mm_loadu_si128((const __m128i *)&a12);
  sub_E942E0((__int64)v28, (char *)(v18 + v23 + 96));
  v24 = a13;
  *(_DWORD *)(v18 + 32) = 103;
  *(_QWORD *)(v18 + 24) = v24;
  *(_QWORD *)(v18 + 40) = a14;
  return v18;
}

