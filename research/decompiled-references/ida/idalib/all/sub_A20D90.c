_BYTE *__fastcall sub_A20D90(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al

  *(_QWORD *)a1 = a1 + 16;
  sub_A1ECF0((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  v2 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v2;
  v3 = *(_BYTE *)(a2 + 32) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v4 & 0xF7;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  return sub_A1ECF0((_QWORD *)(a1 + 40), *(_BYTE **)(a2 + 40), *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48));
}
