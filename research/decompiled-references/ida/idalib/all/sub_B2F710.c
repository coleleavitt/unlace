__int64 __fastcall sub_B2F710(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // dl
  char v4; // dl

  v2 = sub_9C3B30((__int64 *)(a2 + 2352), 120, 3u);
  sub_B2F4A0(
    v2,
    a2,
    (const __m128i *)a1,
    *(_QWORD *)(a1 + 40),
    *(_QWORD *)(a1 + 48),
    *(const void **)(a1 + 64),
    *(_DWORD *)(a1 + 56),
    *(void **)(a1 + 80),
    *(_DWORD *)(a1 + 72),
    *(void **)(a1 + 96),
    *(_DWORD *)(a1 + 88),
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104));
  v3 = *(_BYTE *)(a1 + 38) & 1 | *(_BYTE *)(v2 + 38) & 0xFE;
  *(_BYTE *)(v2 + 38) = v3;
  v4 = *(_BYTE *)(a1 + 38) & 2 | v3 & 0xFD;
  *(_BYTE *)(v2 + 38) = v4;
  *(_BYTE *)(v2 + 38) = *(_BYTE *)(a1 + 38) & 4 | v4 & 0xFB;
  return v2;
}
