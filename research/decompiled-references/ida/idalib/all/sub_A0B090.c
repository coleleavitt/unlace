__int64 __fastcall sub_A0B090(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al

  sub_A0AAD0(a1, (_QWORD *)a2);
  v2 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v2;
  v3 = *(_BYTE *)(a2 + 32) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v4 & 0xF7;
  sub_A0AAD0(a1 + 40, (_QWORD *)(a2 + 40));
  v5 = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_BYTE *)(a1 + 72) = v5;
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 6 | v5 & 0xF9;
  sub_A0AAD0(a1 + 80, (_QWORD *)(a2 + 80));
  return a1;
}
