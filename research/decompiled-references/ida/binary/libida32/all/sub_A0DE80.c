void __fastcall sub_A0DE80(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  _BYTE v8[152]; // [rsp+0h] [rbp-B8h] BYREF
  char v9; // [rsp+98h] [rbp-20h]

  sub_9E62C0((__int64)v8, a1);
  v9 = *(_BYTE *)(a1 + 152);
  sub_A04CD0(a1, a2);
  v2 = *(_BYTE *)(a2 + 152) & 1 | *(_BYTE *)(a1 + 152) & 0xFE;
  *(_BYTE *)(a1 + 152) = v2;
  v3 = *(_BYTE *)(a2 + 152) & 6 | v2 & 0xF9;
  *(_BYTE *)(a1 + 152) = v3;
  v4 = *(_BYTE *)(a2 + 152) & 8 | v3 & 0xF7;
  *(_BYTE *)(a1 + 152) = v4;
  v5 = *(_BYTE *)(a2 + 152) & 0x10 | v4 & 0xEF;
  *(_BYTE *)(a1 + 152) = v5;
  v6 = *(_BYTE *)(a2 + 152) & 0x20 | v5 & 0xDF;
  *(_BYTE *)(a1 + 152) = v6;
  v7 = *(_BYTE *)(a2 + 152) & 0x40 | v6 & 0xBF;
  *(_BYTE *)(a1 + 152) = v7;
  *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 152) & 0x80 | v7 & 0x7F;
  sub_A04CD0(a2, (__int64)v8);
  *(_BYTE *)(a2 + 152) = v9;
  sub_9E5F30((__int64)v8);
}

