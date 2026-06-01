__int64 __fastcall sub_A0AAC0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al

  sub_A04CD0(a1, a2);
  v2 = *(_BYTE *)(a2 + 152) & 1 | *(_BYTE *)(a1 + 152) & 0xFE;
  *(_BYTE *)(a1 + 152) = v2;
  v3 = *(_BYTE *)(a2 + 152) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 152) = v3;
  v4 = *(_BYTE *)(a2 + 152) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 152) = v4;
  v5 = *(_BYTE *)(a2 + 152) & 8 | v4 & 0xF7;
  *(_BYTE *)(a1 + 152) = v5;
  v6 = *(_BYTE *)(a2 + 152) & 0x10 | v5 & 0xEF;
  *(_BYTE *)(a1 + 152) = v6;
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 152) & 0x20 | v6 & 0xDF;
  sub_9E6E50((__m128i *)(a1 + 160), (__m128i *)(a2 + 160));
  sub_9E6E50((__m128i *)(a1 + 200), (__m128i *)(a2 + 200));
  sub_9E6E50((__m128i *)(a1 + 240), (__m128i *)(a2 + 240));
  sub_9E6E50((__m128i *)(a1 + 280), (__m128i *)(a2 + 280));
  sub_9E6E50((__m128i *)(a1 + 320), (__m128i *)(a2 + 320));
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 360);
  return a1;
}

