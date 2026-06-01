__int64 __fastcall sub_B0B6B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // dl
  char v4; // dl

  v2 = sub_99FDF0((__int64 *)(a2 + 2352), 152, 3u);
  sub_B0B490(
    v2,
    a2,
    (const __m128i *)a1,
    *(_DWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(const void **)(a1 + 64),
    *(_DWORD *)(a1 + 56),
    *(const void **)(a1 + 80),
    *(_DWORD *)(a1 + 72),
    *(const void **)(a1 + 96),
    *(_DWORD *)(a1 + 88),
    *(const void **)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(const void **)(a1 + 128),
    *(_DWORD *)(a1 + 120),
    *(const void **)(a1 + 144),
    *(_DWORD *)(a1 + 136));
  v3 = *(_BYTE *)(a1 + 38) & 1 | *(_BYTE *)(v2 + 38) & 0xFE;
  *(_BYTE *)(v2 + 38) = v3;
  v4 = *(_BYTE *)(a1 + 38) & 2 | v3 & 0xFD;
  *(_BYTE *)(v2 + 38) = v4;
  *(_BYTE *)(v2 + 38) = *(_BYTE *)(a1 + 38) & 4 | v4 & 0xFB;
  return v2;
}

