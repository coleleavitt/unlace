__int64 __fastcall sub_680170(__m128i *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // r13
  __m128i *v4; // r14
  __m128i v6; // [rsp+30h] [rbp-48h] BYREF
  __m128i v7[3]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v3 = *(_QWORD *)v3;
  v4 = nullptr;
  if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 16 <= 0x3E )
    v4 = (__m128i *)sub_79A2E0(v3);
  sub_639160((__int64)&v6, a2, a1[2].m128i_i64[1], 0, 1u);
  return sub_67FDF0(
           a1,
           v2,
           *(_DWORD *)(a2 + 24),
           v4,
           v3,
           0,
           (__int128)_mm_load_si128(&v6),
           (__int128)_mm_load_si128(v7),
           1,
           0);
}

