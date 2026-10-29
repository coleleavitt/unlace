__int64 __fastcall sub_21F9590(__int64 a1, __int64 a2)
{
  char v2; // dl
  char v3; // dl

  sub_21F9170((_QWORD *)a1);
  v2 = *(_BYTE *)(a1 + 20);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v3 = *(_BYTE *)(a2 + 20) & 7 | v2 & 0xF8;
  *(_BYTE *)(a1 + 20) = v3;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 20) & 8 | v3 & 0xF7;
  *(_QWORD *)a2 = &unk_26F7B40;
  return a1;
}
