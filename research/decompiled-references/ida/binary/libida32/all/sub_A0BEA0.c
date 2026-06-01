__int64 __fastcall sub_A0BEA0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al

  sub_9CAB60(a1, a2);
  v2 = *(_BYTE *)(a2 + 32) & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v2;
  v3 = *(_BYTE *)(a2 + 32) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 32) = v4;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v4 & 0xF7;
  sub_9CAB60(a1 + 40, a2 + 40);
  sub_9FDD90(a1 + 72, a2 + 72);
  sub_9FDD90(a1 + 112, a2 + 112);
  v5 = *(_BYTE *)(a2 + 152) & 1 | *(_BYTE *)(a1 + 152) & 0xFE;
  *(_BYTE *)(a1 + 152) = v5;
  v6 = *(_BYTE *)(a2 + 152) & 2 | v5 & 0xFD;
  *(_BYTE *)(a1 + 152) = v6;
  v7 = *(_BYTE *)(a2 + 152) & 4 | v6 & 0xFB;
  *(_BYTE *)(a1 + 152) = v7;
  v8 = *(_BYTE *)(a2 + 152) & 8 | v7 & 0xF7;
  *(_BYTE *)(a1 + 152) = v8;
  v9 = *(_BYTE *)(a2 + 152) & 0x10 | v8 & 0xEF;
  *(_BYTE *)(a1 + 152) = v9;
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 152) & 0x20 | v9 & 0xDF;
  sub_9FDD90(a1 + 160, a2 + 160);
  sub_9FDD90(a1 + 200, a2 + 200);
  sub_9FDD90(a1 + 240, a2 + 240);
  sub_9FDD90(a1 + 280, a2 + 280);
  sub_9FDD90(a1 + 320, a2 + 320);
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 360);
  return a1;
}

