__int64 __fastcall sub_A302B0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al

  sub_9EE8A0(a1, a2);
  v2 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v2;
  v3 = *(_BYTE *)(a2 + 32) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v4 & 0xF7;
  sub_9EE8A0(a1 + 40, a2 + 40);
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 72) & 0x1FE | *(_WORD *)(a1 + 72) & 0xFE01;
  *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 73) & 0xE | *(_BYTE *)(a1 + 73) & 0xF1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  sub_9EE8A0(a1 + 88, a2 + 88);
  sub_9EE8A0(a1 + 120, a2 + 120);
  sub_A2FF50((__int64 *)(a1 + 152), (__int64 *)(a2 + 152));
  return a1;
}
