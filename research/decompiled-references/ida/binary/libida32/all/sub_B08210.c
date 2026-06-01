__int64 __fastcall sub_B08210(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // cl
  __int64 v4; // rsi
  __m128i v5; // xmm0
  int v6; // edx
  __m128i v7; // [rsp+0h] [rbp-18h] BYREF

  v7 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  result = sub_99FDF0((__int64 *)(a2 + 2352), 72, 3u);
  v3 = *(_BYTE *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = _mm_load_si128(&v7);
  *(__m128i *)result = _mm_loadu_si128((const __m128i *)a1);
  *(__m128i *)(result + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 32);
  *(__m128i *)(result + 40) = v5;
  *(_DWORD *)(result + 32) = v6;
  *(_WORD *)(result + 36) = 440;
  LOBYTE(v6) = *(_BYTE *)(result + 38);
  *(_QWORD *)(result + 56) = v4;
  LOBYTE(v6) = v6 & 0xE0;
  *(_BYTE *)(result + 64) = v3;
  *(_BYTE *)(result + 38) = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 38) & 1 | v6;
  *(_BYTE *)(result + 38) = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 38) & 2 | v6;
  *(_BYTE *)(result + 38) = v6;
  *(_BYTE *)(result + 38) = *(_BYTE *)(a1 + 38) & 4 | v6;
  return result;
}

