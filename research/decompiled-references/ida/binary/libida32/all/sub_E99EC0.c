unsigned __int64 __fastcall sub_E99EC0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v24; // [rsp+0h] [rbp-48h] BYREF

  v18 = sub_E99B50((__int64 *)(a1 + 2352), 40 * a6 + 64, 3u);
  *(_DWORD *)v18 = a2;
  *(_DWORD *)(v18 + 4) = a4;
  *(_DWORD *)(v18 + 12) = a3;
  *(_DWORD *)(v18 + 16) = a6;
  *(_DWORD *)(v18 + 8) = 52;
  *(_QWORD *)(v18 + 24) = 0;
  *(_DWORD *)(v18 + 32) = 103;
  *(_QWORD *)(v18 + 40) = 0;
  *(_DWORD *)(v18 + 48) = a10;
  *(_DWORD *)(v18 + 52) = a11;
  *(_DWORD *)(v18 + 56) = a12;
  v24.m128i_i64[1] = a6;
  v24.m128i_i64[0] = a5;
  sub_E942E0((__int64)&v24, (char *)(v18 + 64));
  v19 = 16LL * *(unsigned int *)(v18 + 16);
  v24 = _mm_loadu_si128((const __m128i *)&a7);
  sub_E942E0((__int64)&v24, (char *)(v18 + v19 + 64));
  v20 = 3LL * *(unsigned int *)(v18 + 16);
  v24 = _mm_loadu_si128((const __m128i *)&a8);
  sub_E942E0((__int64)&v24, (char *)(v18 + 8 * v20 + 64));
  v21 = 32LL * *(unsigned int *)(v18 + 16);
  v24 = _mm_loadu_si128((const __m128i *)&a9);
  sub_E942E0((__int64)&v24, (char *)(v18 + v21 + 64));
  v22 = a13;
  *(_DWORD *)(v18 + 32) = 103;
  *(_QWORD *)(v18 + 24) = v22;
  *(_QWORD *)(v18 + 40) = a14;
  return v18;
}

