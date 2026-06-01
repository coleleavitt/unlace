unsigned __int64 __fastcall sub_EBE090(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9)
{
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF

  v13 = sub_EBD890((__int64 *)(a1 + 2352), 32 * a6 + 24, 3u);
  *(_DWORD *)v13 = a2;
  v14 = v13;
  *(_DWORD *)(v13 + 4) = a4;
  *(_DWORD *)(v13 + 12) = a3;
  *(_DWORD *)(v13 + 16) = a6;
  *(_DWORD *)(v13 + 8) = 18;
  v19.m128i_i64[1] = a6;
  v19.m128i_i64[0] = a5;
  sub_EB8020((__int64)&v19, (char *)(v13 + 24));
  v15 = (char *)(v14 + 8LL * *(unsigned int *)(v14 + 16) + 24);
  v19 = _mm_loadu_si128((const __m128i *)&a7);
  sub_EB8020((__int64)&v19, v15);
  v16 = 16LL * *(unsigned int *)(v14 + 16);
  v19 = _mm_loadu_si128((const __m128i *)&a8);
  sub_EB8020((__int64)&v19, (char *)(v14 + v16 + 24));
  v17 = 3LL * *(unsigned int *)(v14 + 16) + 3;
  v19 = _mm_loadu_si128((const __m128i *)&a9);
  sub_EB8020((__int64)&v19, (char *)(v14 + 8 * v17));
  return v14;
}
