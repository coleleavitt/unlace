_BYTE *__fastcall sub_A11C70(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al

  *(_QWORD *)a1 = a1 + 16;
  sub_A09AE0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v3 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 2 | v3 & 0xFD;
  *(_BYTE *)(a1 + 32) = v4;
  v5 = *(_BYTE *)(a2 + 32) & 4 | v4 & 0xFB;
  *(_BYTE *)(a1 + 32) = v5;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v5 & 0xF7;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  sub_A09AE0((_QWORD *)(a1 + 40), *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48));
  v6 = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_BYTE *)(a1 + 72) = v6;
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 6 | v6 & 0xF9;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  return sub_A09AE0((_QWORD *)(a1 + 80), *(_BYTE **)(a2 + 80), *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 88));
}
