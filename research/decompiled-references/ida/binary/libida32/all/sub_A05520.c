__int64 __fastcall sub_A05520(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al

  v3 = a2 + 16;
  v5 = a1 + 16;
  *(__m128i *)(v5 - 16) = _mm_loadu_si128((const __m128i *)(v3 - 16));
  sub_A04CD0(v5, v3);
  v6 = *(_BYTE *)(a2 + 168) & 1 | *(_BYTE *)(a1 + 168) & 0xFE;
  *(_BYTE *)(a1 + 168) = v6;
  v7 = *(_BYTE *)(a2 + 168) & 6 | v6 & 0xF9;
  *(_BYTE *)(a1 + 168) = v7;
  v8 = *(_BYTE *)(a2 + 168) & 8 | v7 & 0xF7;
  *(_BYTE *)(a1 + 168) = v8;
  v9 = *(_BYTE *)(a2 + 168) & 0x10 | v8 & 0xEF;
  *(_BYTE *)(a1 + 168) = v9;
  v10 = *(_BYTE *)(a2 + 168) & 0x20 | v9 & 0xDF;
  *(_BYTE *)(a1 + 168) = v10;
  v11 = *(_BYTE *)(a2 + 168) & 0x40 | v10 & 0xBF;
  *(_BYTE *)(a1 + 168) = v11;
  *(_BYTE *)(a1 + 168) = *(_BYTE *)(a2 + 168) & 0x80 | v11 & 0x7F;
  return a1;
}

