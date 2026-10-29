__int64 __fastcall sub_9FD300(__int64 a1, __int64 a2)
{
  char v2; // al

  sub_9E6510(a1, a2);
  v2 = *(_BYTE *)(a2 + 176) & 1 | *(_BYTE *)(a1 + 176) & 0xFE;
  *(_BYTE *)(a1 + 176) = v2;
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176) & 2 | v2 & 0xFD;
  return sub_9FD280((__m128i *)(a1 + 184), (const __m128i *)(a2 + 184));
}

