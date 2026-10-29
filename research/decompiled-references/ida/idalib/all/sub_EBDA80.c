unsigned __int64 __fastcall sub_EBDA80(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int128 a7)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  char *v13; // rsi
  __m128i v15; // [rsp+0h] [rbp-48h] BYREF

  v11 = sub_EBD890((__int64 *)(a1 + 2352), 16 * a6 + 24, 3u);
  *(_DWORD *)v11 = a2;
  v12 = v11;
  *(_DWORD *)(v11 + 4) = a4;
  *(_DWORD *)(v11 + 12) = a3;
  *(_DWORD *)(v11 + 16) = a6;
  *(_DWORD *)(v11 + 8) = 82;
  v15.m128i_i64[1] = a6;
  v15.m128i_i64[0] = a5;
  sub_EB8020((__int64)&v15, (char *)(v11 + 24));
  v13 = (char *)(v12 + 8LL * *(unsigned int *)(v12 + 16) + 24);
  v15 = _mm_loadu_si128((const __m128i *)&a7);
  sub_EB8020((__int64)&v15, v13);
  return v12;
}
